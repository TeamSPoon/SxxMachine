#include "Prolog.h"
#include "Code.h"
#include "PredTable.h"
#include "Lexer.h"

void Prolog::main(std::vector<std::string>& args) {

	// this is the application
	// before it can call a Prolog goal, it must make and initialise a
	// machine

	PrologMachine* M = new PrologMachine();
	M->InitOnce();

	// any time a new goal is called, the machine has to be "reset"

	M->InitAlways();

	if(args.empty()) {
		M->run();
		return;
	}
	// then you can call the goal

	//Term Goal = new Funct("animal".intern(), new Var(M)); // animal(X)
	Var tempVar(M);
	Term* Goal = new Funct((std::string("top")).intern(),&tempVar); // animal(X)

	Term* AnswerList = M->SolveGoal(Goal);
	// Term Goal = new Funct("animal".intern(), new Var(M)); //
	// animal(X)
	// Term AnswerList = M.SolveGoal(Goal);

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

Code* PrologMachine::LoadPred(const std::string& name, int arity) {
	return Predicates->LoadPred(this, name, arity);
}

Term* PrologObject::Deref() {
	std::cout << "general deref on objects not available" << std::endl;
	return nullptr;
}

std::string PrologObject::toString() {
	return "general print on objects not available";
}

bool PrologObject::Unify(Term* that) {
	std::cout << "general unify on objects not available" << std::endl;
	return false;
}

bool PrologObject::Bind(Term* that) {
	return false;
}

bool PrologObject::Equal(Term* that) {
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

Term* PrologObject::Copy(PrologMachine* m, long long t) {
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
