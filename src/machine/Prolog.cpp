#include "Prolog.h"
#include "InputStream.h"
#include "OutputStream.h"
#include "Thread.h"
#include "ClassNotFoundException.h"
#include "IllegalAccessException.h"
#include "InstantiationException.h"
#include "Name.h"

void PrologFromJava::main(std::vector<std::string>& args) {

// this is the application
// before it can call a Prolog goal, it must make and initialise a machine

	PrologMachine* M = new PrologMachine();
	M->InitOnce();

// any time a new goal is called, the machine has to be "reset"

	M->InitAlways();

// then you can call the goal

	Var tempVar(M);
	PrologObject* Goal = new Funct((std::string("animal")).intern(),&tempVar); // animal(X)
	PrologObject* AnswerList = M->SolveGoal(Goal);

// AnswerList is now a list of instances of the Goal
// you can iterate through it as follows

	PrologObject* NextAnswerList,* Answer;

	NextAnswerList = AnswerList->Deref();
	while(NextAnswerList->islist()) {
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

void <missing_class_definition>::main(std::vector<std::string>& args) {
	  std::cout << "jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996" << std::endl;
	  Thread tempVar((new PrologMachine()));
	  (&tempVar)->start();
}

ChoicePointStackEntry::ChoicePointStackEntry(std::vector<PrologObject*>& args) {
	  int l = args.size();
	Arguments = std::vector<PrologObject*>(l);
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
	Areg[0] = new Funct((std::string("toplevel")).intern(),&tempVar);
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
	  Continuation* c = new Continuation(Areg,code);
	  Areg[0] = new Funct((std::string("execpendinggoals")).intern(),pendinggoals,c);
	  PopPendingGoals tempVar2(this,pendinggoals);
	  TrailEntry(&tempVar2);
	  pendinggoals = new Const((std::string("[]")).intern());
	  code = UpperPrologMachine::Call1;
	}
}

PrologObject* PrologMachine::SolveGoal(PrologObject* Goal) {
	  Code* code = UpperPrologMachine::Call1;
	PrologObject* AnswerList = new Var(this);
	ExceptionRaised = 0;

	Int tempVar(0);
	Areg[0] = new Funct((std::string("findall")).intern(), Goal, Goal, AnswerList, new Funct((std::string("halt")).intern(),&tempVar)
			  );

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
	TrailStack = std::vector<PrologObject*>(20000);
	try {
		lextoc = new Lexer(System::in,this);
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
	std::vector<PrologObject*> NoArgs = {};
	CreateChoicePoint(NoArgs);
	FillAlternative(nullptr);
	assumptions = pendinggoals = new Const((std::string("[]")).intern());
	ExceptionRaised = 0;
}

PrologObject* PrologMachine::nexttoken() {
	return lextoc->next();
}

Code* PrologMachine::LoadPred(const std::string& Name, int arity)
{
					// in predtable + 1 !
	  Code* code;
	std::type_info loaded_class;
	int reason = 0;

	code = Predicates->IsInPredTable(Name,arity + 1);
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

	Predicates->InsertNameArity(Name,arity + 1,code);
	code->init(this);
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

void PrologMachine::TrailEntry(PrologObject* po)
{ // System.out.println("trailing") ;
	try {
		TrailStack[TrailTop] = po;
	} catch(const std::out_of_range& e) {
		  std::cout << "trail expansion" << std::endl;
		int i = TrailStack.size();
		std::vector<PrologObject*> newstack(i + 20000);
		while(i-- > 0) {
			newstack[i] = TrailStack[i];
		}
		TrailStack = newstack;
		TrailStack[TrailTop] = po;
	  }
	TrailTop++;
}

void PrologMachine::CreateChoicePoint(std::vector<PrologObject*>& args) {
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

void Code::init(PrologMachine* mach) {
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
		mach->Predicates.InsertNameArity((std::string("cut")).intern(),2,this);
}

Code* CutProc::Exec(PrologMachine* mach)
{ // Areg[0] contains a PrologObject of type HeapChoice
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
		mach->Predicates.InsertNameArity((std::string("true")).intern(),1,this);
}

Code* TrueProc::Exec(PrologMachine* mach) {
	  return UpperPrologMachine::Call1;
}

int Call1Proc::Arity() {
	return 1;
}

Call1Proc::Call1Proc(PrologMachine* mach) {
	  mach->Predicates.InsertNameArity((std::string("call")).intern(),1,this);
}

Code* Call1Proc::Exec(PrologMachine* mach)
{ // Areg[0] contains a Funct - might have to be dereffed
	Funct* pred = static_cast<Funct*>((mach->Areg[0])->Deref());
	int arity;
	std::string FunctName;
	Code* code;


	FunctName = pred->GetName();
	arity = (pred->Arguments).size();
	code = mach->LoadPred(FunctName,arity - 1);
	std::vector<PrologObject*> args = pred->Arguments;
	while(arity-- > 0) {
		mach->Areg[arity] = args[arity];
	}
	return code;
}

int Call2Proc::Arity() {
	return 2;
}

Call2Proc::Call2Proc(PrologMachine* mach) {
	  mach->Predicates.InsertNameArity((std::string("call")).intern(),2,this);
}

Code* Call2Proc::Exec(PrologMachine* mach)
{ // Areg[0] contains a Funct or Const - might have to be dereffed
	PrologObject* obj = (mach->Areg[0])->Deref();
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

	code = mach->LoadPred(PredName,arity);
	mach->Areg[arity] = mach->Areg[1];
	if(pred != nullptr) {
			std::vector<PrologObject*> args = pred->Arguments;
		while(arity-- > 0) {
			mach->Areg[arity] = args[arity];
		}
	}
	return code;
}

PredTable::PredTable() {
	tables = std::vector<std::unordered_map>(33);
}

void PredTable::InsertNameArity(const std::string& N, int A, Code* Adr) {
	  std::unordered_map T = tables[A];
	if(T.empty()) {
			tables[A] = T = std::unordered_map();
	}
	T.emplace(N,Adr);
}

Code* PredTable::IsInPredTable(const std::string& N, int A) {
	  if(tables[A].empty()) {
		  return nullptr;
	  }
	return static_cast<Code*>(tables[A][N]);
}

PrologObject* PrologObject::Deref() {
	  std::cout << "general deref on objects not available" << std::endl;
	return nullptr;
}

std::string PrologObject::toString() {
	  return "general print on objects not available";
}

bool PrologObject::Unify(PrologObject* that) {
	  std::cout << "general unify on objects not available" << std::endl;
	return false;
}

bool PrologObject::Bind(PrologObject* that) {
	  return false;
}

bool PrologObject::Equal(PrologObject* that) {
	  std::cout << "general equal on objects not available" << std::endl;
	return false;
}

std::string PrologObject::GetName() {
	  std::cout << "general getname on objects not available" << std::endl;
	return "";
}

int PrologObject::Arity() {
	  std::cout << "general getarity on objects not available" << std::endl;
	return 0;
}

void PrologObject::UnTrailSelf() {
	  std::cout << "general untrail on objects not available" << std::endl;
}

PrologObject* PrologObject::Copy(PrologMachine* m, long long t) {
	  std::cout << "general copy on objects not available" << std::endl;
	return nullptr;
}

long long PrologObject::ValueOf() {
	return 0;
}

bool PrologObject::islist() {
	return false;
}

bool PrologObject::isnil() {
	return false;
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

PrologObject* Var::Copy(PrologMachine* m, long long t) {
	  Var* newv = new Var(m,t);
	VarDict* newdict = new VarDict(this,newv);
	Refers = newdict;
	mach->TrailEntry(this);
	return newv;
}

PrologObject* Var::Deref() {
	  if((Refers == this) || !(dynamic_cast<PrologObject*>(Refers) != nullptr)) {
		  return this;
	  }
	  return (std::any_cast<PrologObject*>(Refers)).Deref();
}

void Var::UnTrailSelf() {
	Refers = this;
}

std::string Var::toString() {
	  return "_" + Integer::toHexString(hashCode());
}

bool Var::Bind(PrologObject* that) {
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

bool Var::Unify(PrologObject* that) {
	return Bind(that);
}

bool Var::Equal(PrologObject* that) {
	  if(!(dynamic_cast<Var*>(that) != nullptr)) {
		  return false;
	  };
	return this == that;
}

std::string Var::GetName() {
	return toString();
}

FrozenVar::FrozenVar(PrologMachine* machin, PrologObject* action) {
	  Refers = nullptr;
	timestamp = machin->TimeStamp;
	mach = machin;
	goals = action;
}

FrozenVar::FrozenVar(PrologMachine* machin, long long t, PrologObject* action) {
	  Refers = nullptr;
	timestamp = t;
	mach = machin;
	goals = action;
}

PrologObject* FrozenVar::Copy(PrologMachine* m, long long t) {
	return new Const((std::string("[]")).intern()); // might decide to copy frozenvars later
}

PrologObject* FrozenVar::Deref() {
	  if(Refers == nullptr) {
		  return this;
	  }
	  return (static_cast<PrologObject*>(Refers))->Deref();
}

void FrozenVar::UnTrailSelf() {
	Refers = nullptr;
}

std::string FrozenVar::toString() {
	  return "_" + Integer::toHexString(hashCode());
}

bool FrozenVar::Bind(PrologObject* that) {
	  Var* v2;
	if(dynamic_cast<FrozenVar*>(that) != nullptr) {
		  FrozenVar* thatv = static_cast<FrozenVar*>(that);
		Funct* newgoals = new Funct((std::string(",")).intern(),this->goals,thatv->goals);
		FrozenVar* newfrv = new FrozenVar(mach,mach->CurrentChoice,newgoals);
		this->Refers = thatv->Refers = newfrv;
		mach->TrailEntry(this);
		mach->TrailEntry(thatv);
	} else {
	if(dynamic_cast<Var*>(that) != nullptr) {
	return that->Bind(this);
	} else {
			this->Refers = that;
		  mach->TrailEntry(this);
		  PopPendingGoals tempVar(mach,mach->pendinggoals);
		  mach->TrailEntry(&tempVar);
		  mach->pendinggoals = new Funct((std::string(".")).intern(),goals,mach->pendinggoals);
		  mach->ExceptionRaised = 1;
		}
	}
	return true;
}

bool FrozenVar::Unify(PrologObject* that) {
	return Bind(that);
}

bool FrozenVar::Equal(PrologObject* that) {
	  if(!(dynamic_cast<FrozenVar*>(that) != nullptr)) {
		  return false;
	  };
	return this == that;
}

std::string FrozenVar::GetName() {
	return toString();
}

Int::Int(long long i) {
	IntValue = i;
}

PrologObject* Int::Copy(PrologMachine* m, long long t) {
	return new Int(IntValue);
}

long long Int::ValueOf() {
	return IntValue;
}

PrologObject* Int::Deref() {
	return this;
}

std::string Int::toString() {
	return "" + std::to_string(IntValue);
}

bool Int::Unify(PrologObject* that) {
	  Int* tmpint;
	if(!(dynamic_cast<Int*>(that) != nullptr)) {
		return that->Bind(this);
	}
	tmpint = static_cast<Int*>(that); // cast perhaps to be avoided
	return (tmpint->IntValue == this->IntValue);
}

bool Int::Equal(PrologObject* that) {
	  if(!(dynamic_cast<Int*>(that) != nullptr)) {
		  return false;
	  };
	return this->IntValue == (static_cast<Int*>(that))->IntValue;
}

std::string Int::GetName() {
	  return "" + std::to_string(IntValue);
}

long long Const::ValueOf() {
	  return 0;
}

Const::Const(const std::string& N) {
	  Name = N;
}

PrologObject* Const::Copy(PrologMachine* m, long long t) {
	  return new Const(Name);
}

PrologObject* Const::Deref() {
	return this;
}

std::string Const::toString() {
	  return Name;
}

bool Const::Unify(PrologObject* that) {
	  if(this->getClass() == that->getClass()) {
//			return (that.GetName()).equals(this.Name) ;
		  return (that->GetName() == this->Name);
	  }
	return that->Bind(this);
}

bool Const::Equal(PrologObject* that) {
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

bool Const::isnil() {
	  return this->Name == (std::string("[]")).intern();
}

Continuation::Continuation(std::vector<PrologObject*>& args, Code* c) {
	  int i = c->Arity() + 1;
	Args = std::vector<PrologObject*>(i);
	while(i-- > 0) {
		Args[i] = args[i];
	}
	code = c;
}

PrologObject* Continuation::Deref() {
	return this;
}

bool Continuation::Unify(PrologObject* that) {
	return that->Bind(this);
}

PrologObject* Funct::Copy(PrologMachine* m, long long t) {
	  int a = Arguments.size();
	Funct* f = new Funct(Name,a);
	PrologObject* arg;
	while(a-- > 0) {
			arg = Arguments[a]->Deref();
		  f->Arguments[a] = arg->Copy(m,t);
	}
	return f;
}

Funct::Funct(const std::string& N) {
		Name = N;
}

Funct::Funct(const std::string& N, int arity) {
		Name = N;
		Arguments = std::vector<PrologObject*>(arity);
}

Funct::Funct(const std::string& N, PrologObject* a1) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(1);
	  Arguments[0] = a1;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(2);
	  Arguments[0] = a1;
	  Arguments[1] = a2;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(3);
	  Arguments[0] = a1;
	  Arguments[1] = a2;
	  Arguments[2] = a3;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(4);
	  Arguments[0] = a1;
	  Arguments[1] = a2;
	  Arguments[2] = a3;
	  Arguments[3] = a4;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(5);
	  Arguments[0] = a1;
	  Arguments[1] = a2;
	  Arguments[2] = a3;
	  Arguments[3] = a4;
	  Arguments[4] = a5;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(6);
	  Arguments[0] = a1;
	  Arguments[1] = a2;
	  Arguments[2] = a3;
	  Arguments[3] = a4;
	  Arguments[4] = a5;
	  Arguments[5] = a6;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(7);
	  Arguments[0] = a1;
	  Arguments[1] = a2;
	  Arguments[2] = a3;
	  Arguments[3] = a4;
	  Arguments[4] = a5;
	  Arguments[5] = a6;
	  Arguments[6] = a7;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(8);
	  Arguments[0] = a1;
	  Arguments[1] = a2;
	  Arguments[2] = a3;
	  Arguments[3] = a4;
	  Arguments[4] = a5;
	  Arguments[5] = a6;
	  Arguments[6] = a7;
	  Arguments[7] = a8;
}

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(9);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(10);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(11);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(12);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(13);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(14);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(15);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15, PrologObject* a16) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(16);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15, PrologObject* a16, PrologObject* a17) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(17);
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

Funct::Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15, PrologObject* a16, PrologObject* a17, PrologObject* a18) {
		Name = N;
	  Arguments = std::vector<PrologObject*>(18);
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

Funct::Funct(const std::string& N, std::vector<PrologObject*>& args) {
		Name = N;
	  Arguments = args;
}

long long Funct::ValueOf() {
	  int arity = Arguments.size();
	PrologObject* a1,* a2;
	long long i1, i2;
	if(arity == 1) {
			i1 = (Arguments[0]->Deref())->ValueOf();
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
	i1 = (Arguments[0]->Deref())->ValueOf();
	i2 = (Arguments[1]->Deref())->ValueOf();
	if(Name == (std::string("-")).intern()) {
		return i1 - i2;
	}
	if(Name == (std::string("+")).intern()) {
		return i1 + i2;
	}
	if(Name == (std::string("*")).intern()) {
		return i1*i2;
	}
	if(Name == (std::string("/")).intern()) {
		return i1 / i2;
	}
	return 0;
}

PrologObject* Funct::Deref() {
	return this;
}

bool Funct::islist(int i, const std::string& Name) {
	  if(i != 2) {
		  return false;
	  }
	return Name == (std::string(".")).intern();
}

bool Funct::islist() {
	  return islist(this->Arguments.size(),this->Name);
}

std::string Funct::listify(PrologObject* T) {
	  std::string s;
	if(T->islist()) {
		  PrologObject* A1,* A2;
		A1 = (static_cast<Funct*>(T))->Arguments[0];
		A2 = (static_cast<Funct*>(T))->Arguments[1];
		A1 = A1->Deref();
		A2 = A2->Deref();
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return "," + A1->toString() + listify(A2);
	} else {
	if((dynamic_cast<Const*>(T) != nullptr) && ("[]" == T->GetName())) {
		return "";
	}
	}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
	return " | " + T->toString();
}

std::string Funct::toString() {
	  int i = Arguments.size();
	if(islist(i,Name)) {
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to 'toString':
		return "[" + (Arguments[0]->Deref())->toString() + listify(Arguments[1]->Deref()) +
		"]";
	}
	std::string s = ")";
	PrologObject* p;
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

bool Funct::Unify(PrologObject* that) {
	  Funct* tmpfunct;
	int i, j;
	PrologObject arg1[], obj1;
	PrologObject arg2[], obj2;

	if(!(this->getClass() == that->getClass())) {
		return that->Bind(this);
	}
//	  if (!((this.Name).equals(that.GetName()))) return false ;
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

bool Funct::Equal(PrologObject* that) {
	  Funct* tmpfunct;
	int i, j;
	PrologObject arg1[], obj1;
	PrologObject arg2[], obj2;

	if(!(this->getClass() == that->getClass())) {
		return false;
	};
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

PrologObject* VarDict::Deref() {
	return this;
}

void VarDict::UnTrailSelf() {
	old->Refers = old;
}

PrologObject* VarDict::Copy(PrologMachine* m, long long t) {
	return newer;
}

HeapChoice::HeapChoice(int c) {
	CutTo = c;
}

SetArgTrail::SetArgTrail(PrologObject* old, Var* changed, PrologMachine* m) {
	  OldValue = old;
	  Which = changed;
	  mach = m;
}

void SetArgTrail::UnTrailSelf() {
	Which->Refers = OldValue;
  Which->timestamp = mach->TimeStamp;
}

PopPendingGoals::PopPendingGoals(PrologMachine* m, PrologObject* o) {
	mach = m;
	old = o;
}

void PopPendingGoals::UnTrailSelf() {
	mach->pendinggoals = old;
}

PopAssumptions::PopAssumptions(PrologMachine* m, PrologObject* o) {
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

Lexer::Lexer(InputStream* I, PrologMachine* p) throw(std::exception) : java::io::StreamTokenizer(I) {
  parseNumbers();
  eolIsSignificant(true);
  ordinaryChar('.');
  ordinaryChar('/');
  quoteChar('\'');
  quoteChar('"');
  wordChar('$');
  wordChar('_');
  slashStarComments(true);
  commentChar('%');
  dict = std::unordered_map();
  prologmachine = p;
}

Lexer::Lexer(const std::string& s, PrologMachine* p) throw(std::exception) : Lexer(new FileInputStream(s), p) {
}

Lexer::Lexer(PrologMachine* p) throw(std::exception) : Lexer(System::in, p) {
}

std::string Lexer::anonymous = (std::string("_")).intern();

std::string Lexer::char2string(int c) {
  return "" + StringHelper::toString(static_cast<char>(c));
}

bool Lexer::atEOF() {
  return TT_EOF == ttype;
}

bool Lexer::atEOC() {
  return !inClause;
}

PrologObject* Lexer::make_const() {
  Const tempVar(sval::intern());
  return new Funct((std::string("const")).intern(), &tempVar);
}

PrologObject* Lexer::make_int() {
  Int tempVar(static_cast<int>(nval));
  return new Funct((std::string("int")).intern(), &tempVar);
}

PrologObject* Lexer::make_real() {
  return Somethingwrong; // new realToken(nval);
}

PrologObject* Lexer::make_var() {
  sval = sval::intern();
  Var* X;
  Int* I;
  long long occ = 0;
  if(sval == anonymous) {
	X = new Var(prologmachine);
	I = new Int(occ);
  } else {
	X = static_cast<Var*>(dict[sval]);
	if(X == nullptr) {
	   X = new Var(prologmachine);
	   dict.emplace(sval,X);
	} else {
	  occ = (static_cast<Int*>(dict[X]))->IntValue;
	  occ++;
	}
   I = new Int(occ);
   dict.emplace(X,I);
  }
  Const tempVar(sval::intern());
  return new Funct((std::string("var")).intern(),X,&tempVar,I);
}

void Lexer::whitespaceChar(char c) {
	whitespaceChars(c,c);
}

void Lexer::wordChar(char c) {
	wordChars(c,c);
}

PrologObject* Lexer::next0() throw(std::exception) {
  int n = nextToken();
  inClause = true;
  PrologObject* T = Somethingwrong;
  std::string old_sval = "";

  switch(n) {
	case TT_WORD: {
	   char c = sval->charAt(0);
	   if(std::isupper(c) || '_' == c) {
		  T = make_var();
	   } else {
		  T = make_const();
	   }
	}
	break;
	case TT_NUMBER:
		 if(std::floor(nval) == nval) {
			T = make_int();
		 } else {
			T = make_real();
		 }
		 break;
	case TT_EOF:
		   T = new Const((std::string("end_of_file")).intern());
		   inClause = false;
		 break;
	case TT_EOL:
		T = next();
		break;
	case ':':
		if('-' == nextToken()) {
				sval = (std::string(":-")).intern();
		} else {
				old_sval = sval;
				pushBack();
				sval = (std::string(":")).intern();
			  }
			  Const tempVar(sval::intern());
			  T = new Funct((std::string("const")).intern(),&tempVar);
			  sval = old_sval;
			  break;
	case '-':
		if('>' == nextToken()) {
				sval = (std::string("->")).intern();
		} else {
				old_sval = sval;
				pushBack();
				sval = (std::string("-")).intern();
			  }
			  Const tempVar2(sval::intern());
			  T = new Funct((std::string("const")).intern(),&tempVar2);
			  sval = old_sval;
			  break;

	case '.': {
		int c = nextToken();
			  if(TT_EOL == c || TT_EOF == c) {
				inClause = false;
				dict.clear();
				T = new Const((std::string("end_of_clause")).intern());
			  } else {
					old_sval = sval;
					pushBack();
				  sval = (std::string(".")).intern();
				  T = make_const();
				  sval = old_sval;
				}
			  break;

	}
	case '\'':
		T = make_const();
			   break;
//      case '"':  T=make_string();
//                 break;

	case '(':
		Const tempVar3((std::string("(")).intern());
		T = new Funct((std::string("const")).intern(),&tempVar3);
		break;
	case ')':
		Const tempVar4((std::string(")")).intern());
		T = new Funct((std::string("const")).intern(),&tempVar4);
		break;
	case '[':
		Const tempVar5((std::string("[")).intern());
		T = new Funct((std::string("const")).intern(),&tempVar5);
		break;
	case ']':
		Const tempVar6((std::string("]")).intern());
		T = new Funct((std::string("const")).intern(),&tempVar6);
		break;
	case '|':
		Const tempVar7((std::string("|")).intern());
		T = new Funct((std::string("const")).intern(),&tempVar7);
		break;

	case ',':
		Const tempVar8((std::string(",")).intern());
		T = new Funct((std::string("const")).intern(),&tempVar8);
		break;
	case ';':
		Const tempVar9((std::string(";")).intern());
		T = new Funct((std::string("const")).intern(),&tempVar9);
		break;

	case '=':
	case '>':
	case '<':
			  sval = char2string(n);
			  Const tempVar10(sval::intern());
			  T = new Funct((std::string("const")).intern(),&tempVar10);
			  break;

	default:
		sval = char2string(n);
			 T = make_const();
  }
  return T;
}

PrologObject* Lexer::next() {
  try {
	return next0();
  } catch(const std::exception& e) {
   Const tempVar((e.what()).intern());
   return new Funct((std::string("exception")).intern(),&tempVar);
  }
}
