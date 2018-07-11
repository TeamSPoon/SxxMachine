using namespace std;

#include "Real.h"
#include "Prolog.h"
#include "Number.h"
#include "Appendable.h"

namespace SxxMachine {

	Real::Real(Number* i) {
		Num = i;
	}

	Term* Real::Copy(Prolog* m, long long t) {
		return new Real(Num);
	}

	long long Real::LongValue() {
		return Num->longValue();
	}

	Term* Real::Deref() {
		return this;
	}

	void Real::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		buffer->append("" + Num);
	}

	bool Real::Unify(Term* that, Prolog* mach) {
		if(that->Arity() != Arity()) {
			return that->Bind(this, mach);
		}
		return (this->DoubleValue() == (this->DoubleValue()));
	}

	bool Real::Equal(Term* that) {
		if(that->Arity() != Arity()) {
			return false;
		}
		return (this->DoubleValue() == (this->DoubleValue()));
	}

	wstring Real::GetName() {
		return "" + Num;
	}

	int Real::Arity() {
		return Term::REAL;
	}

	double Real::DoubleValue() {
		return Num->doubleValue();
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
		return Num->hashCode() == Num->intValue();
	}
}
