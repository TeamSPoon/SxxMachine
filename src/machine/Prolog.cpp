using namespace std;

#include "Prolog.h"
#include "PredTable.h"
#include "Code.h"
#include "../benches/run.h"
#include "ClassNotFoundException.h"
#include "IllegalAccessException.h"
#include "InstantiationException.h"
#include "Appendable.h"

PrologMachine* Prolog::M = nullptr;

void Prolog::main(std::vector<wstring>& args) {

	// this is the application
	// before it can call a Prolog goal, it must make and initialise a
	// machine

	M = new PrologMachine();
	M->InitOnce();

	// any time a new goal is called, the machine has to be "reset"

	M->InitAlways();

	if(args.empty()) {
		while(true) {
			try {
				M->run();
			} catch(const exception& t) {
				t.printStackTrace();
			}
			if(M->ExceptionRaised == 4) {
				return;
			}
		}
	}
	// then you can call the goal

	Var tempVar(M);
	Term* Goal = new Funct((wstring("animal")).intern(), &tempVar); // animal(X)
	Term* AnswerList = M->SolveGoal(Goal);

	// AnswerList is now a list of instances of the Goal
	// you can iterate through it as follows

	Term* NextAnswerList,* Answer;

	NextAnswerList = AnswerList->Deref();
	while(NextAnswerList->IsList()) {
		Answer = ((static_cast<Funct*>(NextAnswerList))->Arguments[0])->Deref();
		// do something with the answer - e.g. print it
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		wstring s = Answer->toString();
		cout << s << endl;
		System::out::flush();

		// get the tail of the next answer list
		NextAnswerList = ((static_cast<Funct*>(NextAnswerList))->Arguments[1])->Deref();
	}
}

PredTable* UpperPrologMachine::Predicates = nullptr;
FailProc* UpperPrologMachine::Fail0 = nullptr;
Call1Proc* UpperPrologMachine::Call1 = nullptr;
Call2Proc* UpperPrologMachine::Call2 = nullptr;
CutProc* UpperPrologMachine::Cut2 = nullptr;
TrueProc* UpperPrologMachine::True0 = nullptr;

PredTable* PrologMachine::getPredicates() {
	return Predicates;
}

void PrologMachine::run() {
	function<Function*(PrologMachine*)> code;

	InitOnce();
	Int tempVar(0);
	Areg[0] = new Funct((wstring("toplevel")).intern(), &tempVar);
	// 0 is a dummy continuation
	InitAlways();
	Function* next = nullptr;
	code = UpperPrologMachine::Call1;
	code = hand_pred_toplevel_0::entry_code; // (mach);
	while(code != nullptr) {
		while(ExceptionRaised == 0) {
			next = code(this);
			if(next == nullptr) {
				Debug(code);
			} else {
				code = next;
			}
		}
		if(ExceptionRaised > 1) {
			if(ExceptionRaised != 2) {
				cout << "Exceptional ending " << ExceptionRaised << endl;
			}
			exit(0);
		}
		// there are pending goals - deal with them
		ExceptionRaised = 0;
		Continuation* c = new Continuation(Areg, GetArity(code), code);
		Areg[0] = new Funct((wstring("execpendinggoals")).intern(), pendingGoals, c);
		PopPendingGoals tempVar2(this, pendingGoals);
		TrailEntry(&tempVar2);
		pendingGoals = new Const((wstring("[]")).intern());
		code = UpperPrologMachine::Call1;
	}
}

int PrologMachine::GetArity(function<Function*(PrologMachine*)>& code) {
	if(dynamic_cast<Code*>(code) != nullptr) {
		return (static_cast<Code*>(code))->Arity();
	}
	return -1;
}

void PrologMachine::Debug(function<Function*(PrologMachine*)>& code) {
	try {
		code(Prolog::M);
		getchar();
	} catch(const IOException& e) {
		// TODO Auto-generated catch block
		e->printStackTrace();
	}
	// TODO Auto-generated method stub

}

Term* PrologMachine::SolveGoal(Term* Goal) {
	function<Function*(PrologMachine*)> code = nullptr;
	Term* AnswerList = new Var(this);
	ExceptionRaised = 0;

	Funct tempVar((wstring("true")).intern(), new Int(0));
	Areg[0] = new Funct((wstring("findall")).intern(), Goal, Goal, AnswerList, &tempVar);
	code = UpperPrologMachine::Call1;
	while(ExceptionRaised == 0) {
		code = code(this);
	}
	return AnswerList; // exceptions are ignored here !!!!
}

void PrologMachine::InitOnce() {
	if(nullptr == Predicates) {
		Predicates = new PredTable();
	}
	if(nullptr == Fail0) {
		Fail0 = new FailProc(this);
	}
	if(nullptr == Call1) {
		Call1 = new Call1Proc(this);
	}
	if(nullptr == Call2) {
		Call2 = new Call2Proc(this);
	}
	if(nullptr == Cut2) {
		Cut2 = new CutProc(this);
	}
	if(nullptr == True0) {
		True0 = new TrueProc(this);
	}
	ChoicePointStack = std::vector<ChoicePointStackEntry*>(20000);
	TrailStack = std::vector<Term*>(20000);
	try {
		lextoc = new Lexer(System::in, this);
	} catch(const exception& e) {
		System::err::println("lextoc failure");
	}
	currentinput = System::in;
	currentoutput = System::out;
}

void PrologMachine::InitAlways() {
	TimeStamp = -1000000000;
	CUTB = 0;
	CurrentChoice = -1;
	TrailTop = 0;
	std::vector<Term*> NoArgs = {};
	CreateChoicePoint(NoArgs);
	FillAlternative(nullptr);
	assumptions = pendingGoals = new Const((wstring("[]")).intern());
	ExceptionRaised = 0;
}

Term* PrologMachine::nexttoken() {
	return lextoc->next();
}

Function* PrologMachine::LoadPred(const wstring& Name, const int& arity)
{
// in predtable + 1 !
	Code* code;
	type_info loaded_class;
	int reason = 0;

	code = Predicates->IsInPredTable(Name, arity + 1);
	if(code != nullptr) {
		return code;
	}
	try {
		wstring s1 = "pred_" + Name + "_" + to_string(arity);
		// String s2 = s1 + ".class" ;
		// System.out.println("Trying to load " + s2) ;
		loaded_class = type_info::forName(s1);
		// System.out.println("Loaded " + s2) ;
		code = static_cast<Code*>(loaded_class.newInstance());
		// System.out.println("and created "+s2) ;
	} catch(const ClassNotFoundException& e) {
		reason = 1;
	} catch(const IllegalAccessException& e) {
		reason = 2;
	} catch(const InstantiationException& e) {
		reason = 3;
	}

	if(reason > 0) {
		cout << "Predicate " << Name << "/" << arity << " not found; does its .class file exist ?" << endl;
		return UpperPrologMachine::Fail0;
	}

	Predicates->InsertNameArity(Name, arity + 1, code);
	code->Init(this);
	return code;
}

internal* function < Function*PrologMachine::(PrologMachine*) {
	return ChoicePointStack[CurrentChoice]->Alternative;
}

void PrologMachine::FillAlternative(function<Function*(PrologMachine*)>& Alt) {
	ChoicePointStack[CurrentChoice]->Alternative = Alt;
}

void PrologMachine::RemoveChoice() {
	ChoicePointStack[CurrentChoice--] = nullptr;
}

void PrologMachine::RestoreArguments() {
	int i = ChoicePointStack[CurrentChoice]->Arguments->size();
	while(i-- > 0) {
		Areg[i] = ChoicePointStack[CurrentChoice]->Arguments[i];
	}
}

void PrologMachine::UnTrail() {
	while(TrailTop != ChoicePointStack[CurrentChoice]->Trail) {
		TrailStack[--TrailTop]->UnTrailSelf();
		TrailStack[TrailTop] = nullptr;
	}
}

void PrologMachine::TrailEntry(Term* po)
{ // System.out.println("trailing") ;
	try {
		TrailStack[TrailTop] = po;
	} catch(const out_of_range& e) {
		cout << "trail expansion" << endl;
		int i = TrailStack.size();
		std::vector<Term*> newstack(i + 20000);
		while(i-- > 0) {
			newstack[i] = TrailStack[i];
		}
		TrailStack = newstack;
		TrailStack[TrailTop] = po;
	}
	TrailTop++;
}

void PrologMachine::CreateChoicePoint(std::vector<Term*>& args) {
	CurrentChoice++;
	try {
		ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(this, args);
	} catch(const out_of_range& e) {
		cout << "choice stack expansion" << endl;
		int i = ChoicePointStack.size();
		std::vector<ChoicePointStackEntry*> newstack(i + 20000);
		while(i-- > 0) {
			newstack[i] = ChoicePointStack[i];
		}
		ChoicePointStack = newstack;
		ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(this, args);
	}
	ChoicePointStack[CurrentChoice]->Trail = TrailTop;
	ChoicePointStack[CurrentChoice]->TimeStamp = ++TimeStamp;
}

void PrologMachine::DoCut(const int& CutTo) {
	int ch = CurrentChoice;
	while(ch != CutTo) {
		ChoicePointStack[ch] = nullptr;
		ch--;
	}
	CurrentChoice = CutTo;
}

Code* PrologMachine::LoadPred1(const wstring& name, const int& arity) {
	return Predicates->LoadPred(this, name, arity);
}

void PrologMachine::push1(Undoable* undoable) {
	// TODO Auto-generated method stub

}

void PrologMachine::Reg(const int& i) {
	Areg[0] = Areg[i]; // install the continuation
	while(i-- > 1) {
		Areg[i] = nullptr;
	}

}

std::vector<Term*> PrologMachine::RegPull(const int& i) {
	int ii = i + 1;
	std::vector<Term*> t(ii);
	System::arraycopy(Areg, 0, t, 0, ii);
	return t;
}

PrologMachine::ChoicePointStackEntry::ChoicePointStackEntry(PrologMachine* outerInstance, std::vector<Term*>& args) : outerInstance(outerInstance) {
	int l = args.size();
	Arguments = std::vector<Term*>(l);
	while(l > 0) {
		l--;
		Arguments[l] = args[l];
	}

}

Term* PrologObject::Deref() {
	cout << "general deref on objects not available" << endl;
	return nullptr;
}

void PrologObject::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
	buffer->append("general print on objects not available");
}

bool PrologObject::Unify(Term* that) {
	cout << "general unify on objects not available" << endl;
	return false;
}

bool PrologObject::Bind(Term* that) {
	return false;
}

bool PrologObject::Equal(Term* that) {
	cout << "general equal on objects not available" << endl;
	return false;
}

wstring PrologObject::GetName() {
	cout << "general getname on objects not available" << endl;
	return "";
}

int PrologObject::Arity() {
	cout << "general getarity on objects not available" << endl;
	return 0;
}

void PrologObject::UnTrailSelf() {
	cout << "general untrail on objects not available" << endl;
}

Term* PrologObject::Copy(PrologMachine* m, long long t) {
	cout << "general copy on objects not available" << endl;
	return nullptr;
}

long long PrologObject::LongValue() {
	return 0;
}

bool PrologObject::IsList() {
	return false;
}

bool PrologObject::IsNil() {
	return false;
}

VarDict::VarDict(Var* changed, Var* copy) {
	old = changed;
	newer = copy;
}

Term* VarDict::Deref() {
	return this;
}

void VarDict::UnTrailSelf() {
	old->Refers = old;
}

Term* VarDict::Copy(PrologMachine* m, long long t) {
	return newer;
}

HeapChoice::HeapChoice(const int& c) {
	CutTo = c;
}

SetArgTrail::SetArgTrail(Term* old, Var* changed, PrologMachine* m) {
	OldValue = old;
	Which = changed;
	mach = m;
}

void SetArgTrail::UnTrailSelf() {
	Which->Refers = OldValue;
	Which->timestamp = mach->TimeStamp;
}

PopPendingGoals::PopPendingGoals(PrologMachine* m, Term* o) {
	mach = m;
	old = o;
}

void PopPendingGoals::UnTrailSelf() {
	mach->pendingGoals = old;
}

PopAssumptions::PopAssumptions(PrologMachine* m, Term* o) {
	mach = m;
	old = o;
}

void PopAssumptions::UnTrailSelf() {
	mach->assumptions = old;
}
