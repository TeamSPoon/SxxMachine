using namespace std;

#include "Var.h"
#include "Prolog.h"
#include "Appendable.h"

namespace SxxMachine {

	Var::Var(Prolog* machin) {
		Refers = this;
		timestamp = machin->TimeStamp;
		mach = machin;
	}

	Var::Var(Prolog* machin, long long t) {
		Refers = this;
		timestamp = t;
		mach = machin;
	}

	Var::Var(const wstring& sval) {
		Refers = this;
		mach = Prolog::M;
		timestamp = mach->TimeStamp;
	}

	Term* Var::Copy(Prolog* m, long long t) {
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
		return (static_cast<Term*>(Refers))->Deref();
	}

	void Var::UnTrailSelf() {
		Refers = this;
	}

	void Var::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		buffer->append("_" + Integer::toHexString(hashCode()));
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
		return this == that;
	}

	wstring Var::GetName() {
		return toQuotedString();
	}

	int Var::Arity() {
		return VAR;
	}
}
