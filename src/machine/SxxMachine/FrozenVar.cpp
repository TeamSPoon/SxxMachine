using namespace std;

#include "FrozenVar.h"
#include "Prolog.h"
#include "Const.h"
#include "Fun.h"
#include "Var.h"
#include "Appendable.h"

namespace SxxMachine {

	FrozenVar::FrozenVar(Prolog* machin, Term* action) {
		Refers = nullptr;
		timestamp = machin->TimeStamp;
		mach = machin;
		goals = action;
	}

	FrozenVar::FrozenVar(Prolog* machin, long long t, Term* action) {
		Refers = nullptr;
		timestamp = t;
		mach = machin;
		goals = action;
	}

	Term* FrozenVar::Copy(Prolog* m, long long t) {
		return Const::Intern("[]"); // might decide to copy frozenvars
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

	void FrozenVar::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		buffer->append("_" + Integer::toHexString(hashCode()));
	}

	bool FrozenVar::Bind(Term* that) {
		// Var v2;
		if(dynamic_cast<FrozenVar*>(that) != nullptr) {
			FrozenVar* thatv = static_cast<FrozenVar*>(that);
			Fun* newgoals = new Fun((wstring(",")).intern(), this->goals, thatv->goals);
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
			mach->pendinggoals = new Fun((wstring(".")).intern(), goals, mach->pendinggoals);
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

	wstring FrozenVar::GetName() {
		return toQuotedString();
	}

	int FrozenVar::Arity() {
		return VAR;
	}
}
