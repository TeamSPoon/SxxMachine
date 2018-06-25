using namespace std;

#include "Code.h"
#include "Prolog.h"
#include "Term.h"
#include "Method.h"
#include "NoSuchMethodException.h"
#include "SecurityException.h"

Var* Code::V(PrologMachine* mach) {
	return new Var(mach);
}

Funct* Code::F(Const* name, vector<Term> &args) {
	return Term::F(name, args);
}

Funct* Code::F(const wstring& name, vector<Term> &args) {
	return Term::F(name, args);
}

Method* Code::findMethod(type_info c, const wstring& methodName) {
	try {
		return c.getDeclaredMethod(methodName, PrologMachine::typeid);
	} catch(const NoSuchMethodException& e1) {
		return nullptr;
	} catch(const SecurityException& e1) {
		// TODO Auto-generated catch block
		e1->printStackTrace();
		return nullptr;
	}
}

Method* Code::GetMethod(type_info c, any o) {
	Method* m = nullptr;
	if(c == nullptr) {
		c = o.type();
	}
	m = findMethod(c, "exec_static");
	if(m == nullptr) {
		m = findMethod(c, "exec");
	}
	if(m == nullptr) {
		wstring named = c.getName();
		int last_index = (int)named.rfind('.');
		named = "exec_" + named.substr(last_index + 1);
		m = findMethod(c, named);
	}
	return m;
}

internal public* function < Function*Code::(PrologMachine*) {

	// for predicates using static method
	function<Function*(PrologMachine*)> o = this;
	type_info c = o.getClass();
	Method* m = GetMethod(c, o);
	if(m == nullptr) {
		Debug(this);
	}
	if(Modifier::isStatic(m->getModifiers())) {
		o = nullptr;
	}
	try {
		function<Function*(PrologMachine*)> ret = static_cast<function<Function*(PrologMachine*)> >(m->invoke(o, mach)); // asdf
		if(ret == nullptr) {
			Debug(this);
		}
		return ret;
	}
//JAVA TO C++ CONVERTER TODO TASK: There is no equivalent in C++ to Java 'multi-catch' syntax:
	catch(IllegalAccessException | IllegalArgumentException | InvocationTargetException | SecurityException e) {
		// TODO Auto-generated catch block
		e::printStackTrace();
		mach->ExceptionRaised = 3;
		Debug(this);
		return this;
	}
}

int Code::Arity() {
	cout << "no general code arity !" << endl;
	return 0;
}

void Code::Debug(Code* code) {
	PrologMachine::Debug(this);

}

void Code::Init(PrologMachine* mach) {

}

Term* Code::Float(const double& d) {
	// TODO Auto-generated method stub
	return nullptr;
}

int FailProc::Arity() {
	return 1;
}

FailProc::FailProc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((wstring("fail")).intern(), 1, this);
}

internal public* function < Function*FailProc::(PrologMachine*) {
	if(mach->CurrentChoice == -1) {
		return (nullptr);
	}
	// unwind the trail
	mach::UnTrail();
	// restore the arguments
	mach::RestoreArguments();
	// reset CUTB
	mach->CUTB = mach::CurrentChoice - 1;
	// return the alternative as continuation
	return mach::GetAlternative();
}

int CutProc::Arity() {
	return 2;
}

CutProc::CutProc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((wstring("cut")).intern(), 2, this);
}

static* function < Function*CutProc::(PrologMachine*)
{ // Areg[0] contains a
																								// Term of
	// type
	// HeapChoice
	int i = (static_cast<HeapChoice*>(mach::Areg[0]))->CutTo;
	mach::DoCut(i);
	mach::Areg[0] = mach::Areg[1];
	mach->CUTB = mach::CurrentChoice;
	return mach::Call1::exec_static(mach);
}

int TrueProc::Arity() {
	return 1;
}

TrueProc::TrueProc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((wstring("true")).intern(), 1, this);
}

static* function < Function*TrueProc::(PrologMachine*) {
	return UpperPrologMachine::Call1;
}

int Call1Proc::Arity() {
	return 1;
}

Call1Proc::Call1Proc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((wstring("call")).intern(), 1, this);
}

static* function < Function*Call1Proc::(PrologMachine*)
{ // Areg[0] contains a
																								// Funct -
	// might have to
	// be dereffed
	Funct* pred = static_cast<Funct*>((mach::Areg[0]).Deref());
	int arity;
	wstring FunctName;
	function<Function*(PrologMachine*)> code;

	FunctName = pred->GetName();
	arity = (pred->Arguments).size();
	code = mach::LoadPred(FunctName, arity - 1);
	std::vector<Term*> args = pred->Arguments;
	while(arity-- > 0) {
		mach::Areg[arity] = args[arity];
	}
	return code;
}

int Call2Proc::Arity() {
	return 2;
}

Call2Proc::Call2Proc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((wstring("call")).intern(), 2, this);
}

static* function < Function*Call2Proc::(PrologMachine*) {

	// Areg[0] contains a
	// Funct or Const -
	// might
	// have to be dereffed
	Term* obj = (mach::Areg[0]).Deref();
	int arity;
	wstring PredName;
	function<Function*(PrologMachine*)> code;
	Funct* pred = nullptr;

	if(dynamic_cast<Funct*>(obj) != nullptr) {
		pred = static_cast<Funct*>(obj);
		PredName = pred->GetName();
		arity = (pred->Arguments).size();
	}
	else { // it is a Const
		PredName = (static_cast<Const*>(obj))->Name;
		arity = 0;
	}

	code = mach::LoadPred(PredName, arity);
	mach::Areg[arity] = mach::Areg[1];
	if(pred != nullptr) {
		std::vector<Term*> args = pred->Arguments;
		while(arity-- > 0) {
			mach::Areg[arity] = args[arity];
		}
	}
	return code;
}
