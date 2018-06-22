#include "Code.h"
#include "Prolog.h"
#include "Term.h"

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
