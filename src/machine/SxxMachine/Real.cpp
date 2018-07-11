using namespace std;

#include "Real.h"
#include "Prolog.h"
#include "Data.h"
#include "Number.h"
#include "Appendable.h"

namespace SxxMachine {

	Real::Real(Number* i) {
		this->Num = i;
	}

	Term* Real::Copy(Prolog* m, long long t) {
		return new Real(this->Num);
	}

	long long Real::LongValue() {
		return this->Num->longValue();
	}

	Term* Real::Deref() {
		return this;
	}

	void Real::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		buffer->append("" + this->Num);
	}

	bool Real::Unify(Term* that, Prolog* mach) {
		if(that->Arity() != this->Arity()) {
			return that->Bind(this, mach);
		}
		return (this->DoubleValue() == (this->DoubleValue()));
	}

	bool Real::Equal(Term* that) {
		if(that->Arity() != this->Arity()) {
			return false;
		}
		return (this->DoubleValue() == (this->DoubleValue()));
	}

	wstring Real::GetName() {
		return "" + this->Num;
	}

	int Real::Arity() {
		return Data::REAL;
	}

	double Real::DoubleValue() {
		return this->Num->doubleValue();
	}

	bool Real::isVar() {
		return false;
	}

	bool Real::isFVar() {
		return false;
	}

	bool Real::isStruct() {
		return false;
	}

	bool Real::isConst() {
		return false;
	}

	bool Real::isInt() {
		return this->Num->hashCode() == this->Num->intValue();
	}
}
