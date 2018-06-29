using namespace std;

#include "Real.h"
#include "Prolog.h"
#include "Number.h"
#include "Appendable.h"

namespace SxxMachine {

	Real::Real(Number* i) {
		IntValue = i;
	}

	Term* Real::Copy(Prolog* m, long long t) {
		return new Real(IntValue);
	}

	long long Real::LongValue() {
		return IntValue->longValue();
	}

	Term* Real::Deref() {
		return this;
	}

	void Real::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		buffer->append("" + IntValue);
	}

	bool Real::Unify(Term* that) {
		if(that->Arity() != Arity()) {
			return that->Bind(this);
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
		return "" + IntValue;
	}

	int Real::Arity() {
		return Term::REAL;
	}

	double Real::DoubleValue() {
		return IntValue->doubleValue();
	}
}
