using namespace std;

#include "Var.h"
#include "Prolog.h"
#include "Fun.h"
#include "Data.h"
#include "Appendable.h"

namespace SxxMachine {

	Var::Var(Prolog* machin) {
		this->Refers = this;
		this->timestamp = machin->TimeStamp;
		// mach = machin;
	}

	Var::Var(Prolog* machin, long long t) {
		this->Refers = this;
		this->timestamp = t;
		// mach = machin;
	}

	Var::Var(const wstring& sval) : Var(Prolog::M, sval) {
	}

	Var::Var(Prolog* prologmachine, const wstring& sval) {
		this->Refers = this;
		this->named = sval;
		Prolog* mach = prologmachine;
		this->timestamp = mach->TimeStamp;
	}

	Var::Var(Prolog* mach, const int& currentChoice, Fun* newgoals) : Var(mach, currentChoice) {
		this->goals = newgoals;
	}

	Term* Var::Copy(Prolog* m, long long t) {
		Var* newv = new Var(m, t);
		VarDict* newdict = new VarDict(this, newv);
		this->Refers = newdict;
		// mach.TrailEntry(this);
		m->TrailEntry(this);
		return newv;
	}

	Term* Var::Deref() {
		if((this->Refers == this) || !(dynamic_cast<Term*>(this->Refers) != nullptr)) {
			return this;
		}
		return this->Refers->Deref();
	}

	void Var::UnTrailSelf() {
		this->Refers = this;
	}

	void Var::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		buffer->append(this->GetVarName());
	}

	wstring Var::GetVarName() {
		// TODO Auto-generated method stub		
		return "_" + abs(this->timestamp) + "_" + Integer::toHexString(this->hashCode()) + ((this->named != "") ? "_" + this->named : "");
	}

	bool Var::FBind(Term* that, Prolog* mach) {
		// Var v2;
		if(that->isFVar()) {
			Var* thatv = static_cast<Var*>(that);
			Fun* newgoals = new Fun(",", this->goals, thatv->goals);
			Var* newfrv = new Var(mach, mach->CurrentChoice, newgoals);
			this->Refers = thatv->Refers = newfrv;
			mach->TrailEntry(this);
			mach->TrailEntry(thatv);
		} else if(that->isVar()) {
			return that->Bind(this, mach);
		} else {
			this->Refers = that;
			mach->TrailEntry(this);
			PopPendingGoals tempVar(mach, mach->pendingGoals);
			mach->TrailEntry(&tempVar);
			mach->pendingGoals = Data::Cons({ this->goals, mach->pendingGoals });
			mach->ExceptionRaised = 1;
		}
		return true;
	}

	bool Var::Bind(Term* that, Prolog* mach) {
		if(this->isFVar()) {
			return this->FBind(that, mach);
		} else {
			return this->VBind(that, mach);
		}
	}

	bool Var::VBind(Term* that, Prolog* mach) {
		Var* v2;
		if(that->isVar()) {
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

	bool Var::Unify(Term* that, Prolog* mach) {
		return this->Bind(that, mach);
	}

	bool Var::Equal(Term* that) {
		return this == that;
	}

	wstring Var::GetName() {
		return this->toQuotedString();
	}

	int Var::Arity() {
		return Data::VAR;
	}

	bool Var::isVar() {
		return true;
	}

	bool Var::isFVar() {
		return this->isFrozen();
	}

	bool Var::isStruct() {
		// TODO Auto-generated method stub
		return false;
	}

	bool Var::isConst() {
		// TODO Auto-generated method stub
		return false;
	}

	bool Var::isInt() {
		// TODO Auto-generated method stub
		return false;
	}
}
