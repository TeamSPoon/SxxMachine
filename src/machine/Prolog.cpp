#include "Prolog.h"
#include "PredTable.h"
#include "Lexer.h"
#include "ClassNotFoundException.h"
#include "IllegalAccessException.h"
#include "InstantiationException.h"
#include "Name.h"

void Prolog::main(std::vector<std::string>& args) {

	// this is the application
	// before it can call a Prolog goal, it must make and initialise a
	// machine

	PrologMachine* M = new PrologMachine();
	M->InitOnce();

	// any time a new goal is called, the machine has to be "reset"

	M->InitAlways();

	// then you can call the goal

	Var tempVar(M);
	Term* Goal = new Funct((std::string("animal")).intern(), &tempVar); // animal(X)
	Term* AnswerList = M->SolveGoal(Goal);

	// AnswerList is now a list of instances of the Goal
	// you can iterate through it as follows

	Term* NextAnswerList,* Answer;

	NextAnswerList = AnswerList->Deref();
	while(NextAnswerList->IsList()) {
		Answer = ((static_cast<Funct*>(NextAnswerList))->Arguments[0])->Deref();
		// do something with the answer - e.g. print it
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		std::string s = Answer->toString();
		std::cout << s << std::endl;
		System::out::flush();

		// get the tail of the next answer list
		NextAnswerList = ((static_cast<Funct*>(NextAnswerList))->Arguments[1])->Deref();
	}
}

ChoicePointStackEntry::ChoicePointStackEntry(std::vector<Term*>& args) {
	int l = args.size();
	Arguments = std::vector<Term*>(l);
	while(l > 0) {
		l--;
		Arguments[l] = args[l];
	}

}

PredTable* UpperPrologMachine::Predicates = nullptr;
FailProc* UpperPrologMachine::Fail0 = nullptr;
Call1Proc* UpperPrologMachine::Call1 = nullptr;
Call2Proc* UpperPrologMachine::Call2 = nullptr;
CutProc* UpperPrologMachine::Cut2 = nullptr;
TrueProc* UpperPrologMachine::True0 = nullptr;

void PrologMachine::run() {
	Code* code;

	InitOnce();
	Int tempVar(0);
	Areg[0] = new Funct((std::string("toplevel")).intern(), &tempVar);
	// 0 is a dummy continuation
	InitAlways();
	code = UpperPrologMachine::Call1;
	while(true) {
		while(ExceptionRaised == 0) {
			code = code->Exec(this);
		}
		if(ExceptionRaised > 1) {
			if(ExceptionRaised != 2) {
				std::cout << "Exceptional ending " << ExceptionRaised << std::endl;
			}
			exit(0);
		}
		// there are pending goals - deal with them
		ExceptionRaised = 0;
		Continuation* c = new Continuation(Areg, code);
		Areg[0] = new Funct((std::string("execpendinggoals")).intern(), pendinggoals, c);
		PopPendingGoals tempVar2(this, pendinggoals);
		TrailEntry(&tempVar2);
		pendinggoals = new Const((std::string("[]")).intern());
		code = UpperPrologMachine::Call1;
	}
}

Term* PrologMachine::SolveGoal(Term* Goal) {
	Code* code = UpperPrologMachine::Call1;
	Term* AnswerList = new Var(this);
	ExceptionRaised = 0;

	Funct tempVar((std::string("halt")).intern(), new Int(0));
	Areg[0] = new Funct((std::string("findall")).intern(), Goal, Goal, AnswerList, &tempVar);

	while(ExceptionRaised == 0) {
		code = code->Exec(this);
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
	} catch(const std::exception& e) {
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
	assumptions = pendinggoals = new Const((std::string("[]")).intern());
	ExceptionRaised = 0;
}

Term* PrologMachine::nexttoken() {
	return lextoc->next();
}

Code* PrologMachine::LoadPred(const std::string& Name, int arity)
{
// in predtable + 1 !
	Code* code;
	std::type_info loaded_class;
	int reason = 0;

	code = Predicates->IsInPredTable(Name, arity + 1);
	if(code != nullptr) {
		return code;
	}
	try {
		std::string s1 = "pred_" + Name + "_" + std::to_string(arity);
		// String s2 = s1 + ".class" ;
		// System.out.println("Trying to load " + s2) ;
		loaded_class = std::type_info::forName(s1);
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
		std::cout << "Predicate " << Name << "/" << arity << " not found; does its .class file exist ?" << std::endl;
		return UpperPrologMachine::Fail0;
	}

	Predicates->InsertNameArity(Name, arity + 1, code);
	code->Init(this);
	return code;
}

Code* PrologMachine::GetAlternative() {
	return ChoicePointStack[CurrentChoice]->Alternative;
}

void PrologMachine::FillAlternative(Code* Alt) {
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
	} catch(const std::out_of_range& e) {
		std::cout << "trail expansion" << std::endl;
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
		ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(args);
	} catch(const std::out_of_range& e) {
		std::cout << "choice stack expansion" << std::endl;
		int i = ChoicePointStack.size();
		std::vector<ChoicePointStackEntry*> newstack(i + 20000);
		while(i-- > 0) {
			newstack[i] = ChoicePointStack[i];
		}
		ChoicePointStack = newstack;
		ChoicePointStack[CurrentChoice] = new ChoicePointStackEntry(args);
	}
	ChoicePointStack[CurrentChoice]->Trail = TrailTop;
	ChoicePointStack[CurrentChoice]->TimeStamp = ++TimeStamp;
}

void PrologMachine::DoCut(int CutTo) {
	int ch = CurrentChoice;
	while(ch != CutTo) {
		ChoicePointStack[ch] = nullptr;
		ch--;
	}
	CurrentChoice = CutTo;
}

int Code::Arity() {
	std::cout << "no general code arity !" << std::endl;
	return 0;
}

Code* Code::Exec(PrologMachine* mach) {
	mach->ExceptionRaised = 3;
	return nullptr;
}

void Code::Init(PrologMachine* mach) {
}

int FailProc::Arity() {
	return 1;
}

FailProc::FailProc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((std::string("fail")).intern(), 1, this);
}

Code* FailProc::Exec(PrologMachine* mach) {
	if(mach->CurrentChoice == -1) {
		return (nullptr);
	}
	// unwind the trail
	mach->UnTrail();
	// restore the arguments
	mach->RestoreArguments();
	// reset CUTB
	mach->CUTB = mach->CurrentChoice - 1;
	// return the alternative as continuation
	return mach->GetAlternative();
}

int CutProc::Arity() {
	return 2;
}

CutProc::CutProc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((std::string("cut")).intern(), 2, this);
}

Code* CutProc::Exec(PrologMachine* mach)
{ // Areg[0] contains a Term of type
								// HeapChoice
	int i = (static_cast<HeapChoice*>(mach->Areg[0]))->CutTo;
	mach->DoCut(i);
	mach->Areg[0] = mach->Areg[1];
	mach->CUTB = mach->CurrentChoice;
	return mach->Call1.Exec(mach);
}

int TrueProc::Arity() {
	return 1;
}

TrueProc::TrueProc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((std::string("true")).intern(), 1, this);
}

Code* TrueProc::Exec(PrologMachine* mach) {
	return UpperPrologMachine::Call1;
}

int Call1Proc::Arity() {
	return 1;
}

Call1Proc::Call1Proc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((std::string("call")).intern(), 1, this);
}

Code* Call1Proc::Exec(PrologMachine* mach)
{ // Areg[0] contains a Funct - might have to
								// be dereffed
	Funct* pred = static_cast<Funct*>((mach->Areg[0])->Deref());
	int arity;
	std::string FunctName;
	Code* code;

	FunctName = pred->GetName();
	arity = (pred->Arguments).size();
	code = mach->LoadPred(FunctName, arity - 1);
	std::vector<Term*> args = pred->Arguments;
	while(arity-- > 0) {
		mach->Areg[arity] = args[arity];
	}
	return code;
}

int Call2Proc::Arity() {
	return 2;
}

Call2Proc::Call2Proc(PrologMachine* mach) {
	mach->Predicates.InsertNameArity((std::string("call")).intern(), 2, this);
}

Code* Call2Proc::Exec(PrologMachine* mach)
{ // Areg[0] contains a Funct or Const - might
								// have to be dereffed
	Term* obj = (mach->Areg[0])->Deref();
	int arity;
	std::string PredName;
	Code* code;
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

	code = mach->LoadPred(PredName, arity);
	mach->Areg[arity] = mach->Areg[1];
	if(pred != nullptr) {
		std::vector<Term*> args = pred->Arguments;
		while(arity-- > 0) {
			mach->Areg[arity] = args[arity];
		}
	}
	return code;
}

Term* Term::Deref() {
	std::cout << "general deref on objects not available" << std::endl;
	return nullptr;
}

std::string Term::toString() {
	return "general print on objects not available";
}

bool Term::Unify(Term* that) {
	std::cout << "general unify on objects not available" << std::endl;
	return false;
}

bool Term::Bind(Term* that) {
	return false;
}

bool Term::Equal(Term* that) {
	std::cout << "general equal on objects not available" << std::endl;
	return false;
}

std::string Term::GetName() {
	std::cout << "general getname on objects not available" << std::endl;
	return "";
}

int Term::Arity() {
	std::cout << "general getarity on objects not available" << std::endl;
	return 0;
}

void Term::UnTrailSelf() {
	std::cout << "general untrail on objects not available" << std::endl;
}

Term* Term::Copy(PrologMachine* m, long long t) {
	std::cout << "general copy on objects not available" << std::endl;
	return nullptr;
}

long long Term::LongValue() {
	return 0;
}

bool Term::IsList() {
	return false;
}

bool Term::IsNil() {
	return false;
}

Term* Term::Compound(const std::string& string6, std::vector<Term> &terms) {
	return new Funct(string6, terms);
}

Term* Term::Var(PrologMachine* mach) {
	return new Var(mach);
}

Term* Term::findOrAttrValue(PrologMachine* mach, bool b, Term* deref) {
	// TODO Auto-generated method stub
	return nullptr;
}

void Term::putAttrValue(PrologMachine* mach, Term* deref, Term* deref2) {
	// TODO Auto-generated method stub

}

void Term::setAttrs(PrologMachine* mach, Term* deref) {
	// TODO Auto-generated method stub

}

Var::Var(PrologMachine* machin) {
	Refers = this;
	timestamp = machin->TimeStamp;
	mach = machin;
}

Var::Var(PrologMachine* machin, long long t) {
	Refers = this;
	timestamp = t;
	mach = machin;
}

Term* Var::Copy(PrologMachine* m, long long t) {
	Var* newv = new Var(m, t);
	VarDict* newdict = new VarDict(this, newv);
	Refers = newdict;
	mach->TrailEntry(this);
	return newv;
}

Term* Var::Deref() {
	if((Refers == this) || !(dynamic_cast<Term*>(Refers) != nullptr)) {
		return this;
	}
	return (std::any_cast<Term*>(Refers)).Deref();
}

void Var::UnTrailSelf() {
	Refers = this;
}

std::string Var::toString() {
	return "_" + Integer::toHexString(hashCode());
}

bool Var::Bind(Term* that) {
	Var* v2;
	if(dynamic_cast<Var*>(that) != nullptr) {
		Var* v1 = static_cast<Var*>(that);
		if(this->timestamp < v1->timestamp) {
			v1->Refers = this;
			v2 = v1;
		} else {
			this->Refers = that;
			v2 = this;
		}
	} else {
		this->Refers = that;
		v2 = this;
	}
	if(v2->timestamp < mach->ChoicePointStack[mach->CurrentChoice]->TimeStamp) {
		mach->TrailEntry(v2);
	}
	return true;
}

bool Var::Unify(Term* that) {
	return Bind(that);
}

bool Var::Equal(Term* that) {
	if(!(dynamic_cast<Var*>(that) != nullptr)) {
		return false;
	}
	;
	return this == that;
}

std::string Var::GetName() {
	return toString();
}

FrozenVar::FrozenVar(PrologMachine* machin, Term* action) {
	Refers = nullptr;
	timestamp = machin->TimeStamp;
	mach = machin;
	goals = action;
}

FrozenVar::FrozenVar(PrologMachine* machin, long long t, Term* action) {
	Refers = nullptr;
	timestamp = t;
	mach = machin;
	goals = action;
}

Term* FrozenVar::Copy(PrologMachine* m, long long t) {
	return new Const((std::string("[]")).intern()); // might decide to copy frozenvars
										// later
}

Term* FrozenVar::Deref() {
	if(Refers == nullptr) {
		return this;
	}
	return (static_cast<Term*>(Refers))->Deref();
}

void FrozenVar::UnTrailSelf() {
	Refers = nullptr;
}

std::string FrozenVar::toString() {
	return "_" + Integer::toHexString(hashCode());
}

bool FrozenVar::Bind(Term* that) {
	Var* v2;
	if(dynamic_cast<FrozenVar*>(that) != nullptr) {
		FrozenVar* thatv = static_cast<FrozenVar*>(that);
		Funct* newgoals = new Funct((std::string(",")).intern(), this->goals, thatv->goals);
		FrozenVar* newfrv = new FrozenVar(mach, mach->CurrentChoice, newgoals);
		this->Refers = thatv->Refers = newfrv;
		mach->TrailEntry(this);
		mach->TrailEntry(thatv);
	} else if(dynamic_cast<Var*>(that) != nullptr) {
		return that->Bind(this);
	} else {
		this->Refers = that;
		mach->TrailEntry(this);
		PopPendingGoals tempVar(mach, mach->pendinggoals);
		mach->TrailEntry(&tempVar);
		mach->pendinggoals = new Funct((std::string(".")).intern(), goals, mach->pendinggoals);
		mach->ExceptionRaised = 1;
	}
	return true;
}

bool FrozenVar::Unify(Term* that) {
	return Bind(that);
}

bool FrozenVar::Equal(Term* that) {
	if(!(dynamic_cast<FrozenVar*>(that) != nullptr)) {
		return false;
	}
	;
	return this == that;
}

std::string FrozenVar::GetName() {
	return toString();
}

Int::Int(long long i) {
	IntValue = i;
}

Term* Int::Copy(PrologMachine* m, long long t) {
	return new Int(IntValue);
}

long long Int::LongValue() {
	return IntValue;
}

Term* Int::Deref() {
	return this;
}

std::string Int::toString() {
	return "" + std::to_string(IntValue);
}

bool Int::Unify(Term* that) {
	Int* tmpint;
	if(!(dynamic_cast<Int*>(that) != nullptr)) {
		return that->Bind(this);
	}
	tmpint = static_cast<Int*>(that); // cast perhaps to be avoided
	return (tmpint->IntValue == this->IntValue);
}

bool Int::Equal(Term* that) {
	if(!(dynamic_cast<Int*>(that) != nullptr)) {
		return false;
	}
	;
	return this->IntValue == (static_cast<Int*>(that))->IntValue;
}

std::string Int::GetName() {
	return "" + std::to_string(IntValue);
}

long long Const::LongValue() {
	return 0;
}

Const::Const(const std::string& N) {
	Name = N;
}

Term* Const::Copy(PrologMachine* m, long long t) {
	return new Const(Name);
}

Term* Const::Deref() {
	return this;
}

std::string Const::toString() {
	return Name;
}

bool Const::Unify(Term* that) {
	if(this->getClass() == that->getClass()) {
		// return (that.GetName()).equals(this.Name) ;
		return (that->GetName() == this->Name);
	}
	return that->Bind(this);
}

bool Const::Equal(Term* that) {
	if(this->getClass() == that->getClass()) {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return (that->toString())->equals(this->toString());
	}
	return false;
}

int Const::Arity() {
	return 0;
}

std::string Const::GetName() {
	return Name;
}

bool Const::IsNil() {
	return this->Name == (std::string("[]")).intern();
}

std::string Const::IStr(const std::string& string) {
	// TODO Auto-generated method stub
	return string.intern();
}

Term* Const::Intern(const std::string& N) {
	// TODO Auto-generated method stub
	return new Const(N);
}

Continuation::Continuation(std::vector<Term*>& args, Code* c) {
	int i = c->Arity() + 1;
	Args = std::vector<Term*>(i);
	while(i-- > 0) {
		Args[i] = args[i];
	}
	code = c;
}

Term* Continuation::Deref() {
	return this;
}

bool Continuation::Unify(Term* that) {
	return that->Bind(this);
}

Term* Funct::Copy(PrologMachine* m, long long t) {
	int a = Arguments.size();
	Funct* f = new Funct(Name, a);
	Term* arg;
	while(a-- > 0) {
		arg = Arguments[a]->Deref();
		f->Arguments[a] = arg->Copy(m, t);
	}
	return f;
}

Funct::Funct(const std::string& N) {
	Name = N;
}

Funct::Funct(const std::string& N, int arity) {
	Name = N;
	Arguments = std::vector<Term*>(arity);
}

Funct::Funct(const std::string& N, Term* a1) {
	Name = N;
	Arguments = std::vector<Term*>(1);
	Arguments[0] = a1;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2) {
	Name = N;
	Arguments = std::vector<Term*>(2);
	Arguments[0] = a1;
	Arguments[1] = a2;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3) {
	Name = N;
	Arguments = std::vector<Term*>(3);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4) {
	Name = N;
	Arguments = std::vector<Term*>(4);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5) {
	Name = N;
	Arguments = std::vector<Term*>(5);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6) {
	Name = N;
	Arguments = std::vector<Term*>(6);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7) {
	Name = N;
	Arguments = std::vector<Term*>(7);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8) {
	Name = N;
	Arguments = std::vector<Term*>(8);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9) {
	Name = N;
	Arguments = std::vector<Term*>(9);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10) {
	Name = N;
	Arguments = std::vector<Term*>(10);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11) {
	Name = N;
	Arguments = std::vector<Term*>(11);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12) {
	Name = N;
	Arguments = std::vector<Term*>(12);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13) {
	Name = N;
	Arguments = std::vector<Term*>(13);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14) {
	Name = N;
	Arguments = std::vector<Term*>(14);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15) {
	Name = N;
	Arguments = std::vector<Term*>(15);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;

}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16) {
	Name = N;
	Arguments = std::vector<Term*>(16);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;
	Arguments[15] = a16;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17) {
	Name = N;
	Arguments = std::vector<Term*>(17);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;
	Arguments[15] = a16;
	Arguments[16] = a17;
}

Funct::Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17, Term* a18) {
	Name = N;
	Arguments = std::vector<Term*>(18);
	Arguments[0] = a1;
	Arguments[1] = a2;
	Arguments[2] = a3;
	Arguments[3] = a4;
	Arguments[4] = a5;
	Arguments[5] = a6;
	Arguments[6] = a7;
	Arguments[7] = a8;
	Arguments[8] = a9;
	Arguments[9] = a10;
	Arguments[10] = a11;
	Arguments[11] = a12;
	Arguments[12] = a13;
	Arguments[13] = a14;
	Arguments[14] = a15;
	Arguments[15] = a16;
	Arguments[16] = a17;
	Arguments[17] = a18;
}

Funct::Funct(const std::string& N, std::vector<Term*>& args) {
	Name = N;
	Arguments = args;
}

long long Funct::LongValue() {
	int arity = Arguments.size();
	Term* a1,* a2;
	long long i1, i2;
	if(arity == 1) {
		i1 = (Arguments[0]->Deref())->LongValue();
		if(Name == (std::string("-")).intern()) {
			return -i1;
		}
		if(Name == (std::string("+")).intern()) {
			return i1;
		}
		return 0;
	}
	if(arity != 2) {
		return 0;
	}
	i1 = (Arguments[0]->Deref())->LongValue();
	i2 = (Arguments[1]->Deref())->LongValue();
	if(Name == (std::string("-")).intern()) {
		return i1 - i2;
	}
	if(Name == (std::string("+")).intern()) {
		return i1 + i2;
	}
	if(Name == (std::string("*")).intern()) {
		return i1 * i2;
	}
	if(Name == (std::string("/")).intern()) {
		return i1 / i2;
	}
	return 0;
}

Term* Funct::Deref() {
	return this;
}

bool Funct::islist(int i, const std::string& Name) {
	if(i != 2) {
		return false;
	}
	return Name == (std::string(".")).intern();
}

bool Funct::IsList() {
	return islist(this->Arguments.size(), this->Name);
}

std::string Funct::listify(Term* T) {
	std::string s;
	if(T->IsList()) {
		Term* A1,* A2;
		A1 = (static_cast<Funct*>(T))->Arguments[0];
		A2 = (static_cast<Funct*>(T))->Arguments[1];
		A1 = A1->Deref();
		A2 = A2->Deref();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return "," + A1->toString() + listify(A2);
	} else if((dynamic_cast<Const*>(T) != nullptr) && ("[]" == T->GetName())) {
		return "";
	}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
	return " | " + T->toString();
}

std::string Funct::toString() {
	int i = Arguments.size();
	if(islist(i, Name)) {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return "[" + (Arguments[0]->Deref())->toString() + listify(Arguments[1]->Deref()) + "]";
	}
	std::string s = ")";
	Term* p;
	while(--i != 0) {
		p = Arguments[i]->Deref();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		s = "," + p->toString() + s;
	}
	p = Arguments[0]->Deref();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
	s = p->toString() + s;
	return Name + "(" + s;
}

bool Funct::Unify(Term* that) {
	Funct* tmpfunct;
	int i, j;
	Term arg1[], obj1;
	Term arg2[], obj2;

	if(!(this->getClass() == that->getClass())) {
		return that->Bind(this);
	}
	// if (!((this.Name).equals(that.GetName()))) return false ;
	if(static_cast<this::Name*>(!) = (that->GetName())) {
		return false;
	}

	tmpfunct = static_cast<Funct*>(that); // cast perhaps to be avoided
	i = Arguments.size();
	j = tmpfunct->Arguments.size();
	if(i != j) {
		return false;
	}
	arg1 = this->Arguments;
	arg2 = tmpfunct->Arguments;
	do {
		obj1 = arg1[--i].Deref();
		obj2 = arg2[i].Deref();
		if(!(obj1::Unify(obj2))) {
			return false;
		}
	} while(i > 0);
	return true;
}

bool Funct::Equal(Term* that) {
	Funct* tmpfunct;
	int i, j;
	Term arg1[], obj1;
	Term arg2[], obj2;

	if(!(this->getClass() == that->getClass())) {
		return false;
	}
	;
	if(!((this->GetName()) == that->GetName())) {
		return false;
	}

	tmpfunct = static_cast<Funct*>(that); // cast perhaps to be avoided
	i = Arguments.size();
	j = tmpfunct->Arguments.size();
	if(i != j) {
		return false;
	}
	arg1 = this->Arguments;
	arg2 = tmpfunct->Arguments;
	do {
		obj1 = arg1[--i].Deref();
		obj2 = arg2[i].Deref();
		if(!(obj1::Equal(obj2))) {
			return false;
		}
	} while(i > 0);
	return true;
}

int Funct::Arity() {
	return Arguments.size();
}

std::string Funct::GetName() {
	return Name;
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

HeapChoice::HeapChoice(int c) {
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
	mach->pendinggoals = old;
}

PopAssumptions::PopAssumptions(PrologMachine* m, Term* o) {
	mach = m;
	old = o;
}

void PopAssumptions::UnTrailSelf() {
	mach->assumptions = old;
}

PrologTokenizer::PrologTokenizer(InputStream* I) : java::io::StreamTokenizer(I) {
	parseNumbers();
	slashStarComments(true);
	// add more options here
}
