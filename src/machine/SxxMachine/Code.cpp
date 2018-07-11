using namespace std;

#include "Code.h"
#include "Prolog.h"
#include "HeapChoice.h"
#include "Fun.h"
#include "Term.h"
#include "Const.h"

namespace SxxMachine {

	int Code::Arity() {
		cout << "no general code arity !" << endl;
		return 0;
	}

	Operation* Code::Exec(Prolog* mach) {
		mach->ExceptionRaised = 3;
		return nullptr;
	}

	void Code::Init(Prolog* mach) {
	}

	int FailProc::Arity() {
		return 1;
	}

	FailProc::FailProc(Prolog* mach) {
		mach->Predicates.InsertNameArityWithContinuation("fail", 1, this);
	}

	Operation* FailProc::Exec(Prolog* mach) {
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

	CutProc::CutProc(Prolog* mach) {
		mach->Predicates.InsertNameArityWithContinuation("cut", 2, this);
	}

	Operation* CutProc::Exec(Prolog* mach) {

		// Areg[0] contains a Term of type HeapChoice
		int i = (static_cast<HeapChoice*>(mach->Areg[0]))->CutTo;
		mach->DoCut(i);
		mach->Areg[0] = mach->Areg[1];
		mach->CUTB = mach->CurrentChoice;
		return mach->Call1.Exec(mach);
	}

	int TrueProc::Arity() {
		return 1;
	}

	TrueProc::TrueProc(Prolog* mach) {
		mach->Predicates.InsertNameArityWithContinuation("true", 1, this);
	}

	Operation* TrueProc::Exec(Prolog* mach) {
		return Prolog::Call1;
	}

	int Call1Proc::Arity() {
		return 1;
	}

	Call1Proc::Call1Proc(Prolog* mach) {
		mach->Predicates.InsertNameArityWithContinuation("call", 1, this);
	}

	Operation* Call1Proc::Exec(Prolog* mach)
	{ // Areg[0] contains a Fun - might have to
		// be dereffed
		Fun* pred = static_cast<Fun*>((mach->Areg[0])->Deref());
		int arity;
		wstring FunctName;
		Operation* code;

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

	Call2Proc::Call2Proc(Prolog* mach) {
		mach->Predicates.InsertNameArityWithContinuation("call", 2, this);
	}

	Operation* Call2Proc::Exec(Prolog* mach)
	{ // Areg[0] contains a Fun or Const - might
		// have to be dereffed
		Term* obj = (mach->Areg[0])->Deref();
		int arity;
		wstring PredName;
		Operation* code;
		Fun* pred = nullptr;

		if(dynamic_cast<Fun*>(obj) != nullptr) {
			pred = static_cast<Fun*>(obj);
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
}
