using namespace std;

#include "Int.h"
#include "Prolog.h"
#include "Term.h"
#include "Data.h"

namespace SxxMachine {

	Int::Int(long long i) : Real(i) {
	}

	Term* Int::Copy(Prolog* m, long long t) {
		return new Int(this->Num->longValue());
	}

	int Int::Arity() {
		return Data::INT;
	}

	bool Int::isInt() {
		return true;
	}
}
