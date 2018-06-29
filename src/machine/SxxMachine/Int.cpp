using namespace std;

#include "Int.h"
#include "Prolog.h"
#include "Term.h"

namespace SxxMachine {

	Int::Int(long long i) : Real(i) {
	}

	Term* Int::Copy(Prolog* m, long long t) {
		return new Int(IntValue->longValue());
	}
}
