using namespace std;

#include "Data.h"
#include "Real.h"
#include "Int.h"
#include "Fun.h"
#include "Term.h"
#include "Const.h"
#include "Var.h"
#include "Prolog.h"
#include "Number.h"

namespace SxxMachine {

	Real* Data::Number(Number* d) {
		if(d->intValue() == d->hashCode()) {
			return new Int(d->longValue());
		}
		return new Real(d);
	}

	Int* Data::Number(long long d) {
		return new Int(d);
	}

	Real* Data::Float(Number* d) {
		return new Real(d);
	}

	Real* Data::BigDec(const wstring& s) {
		return new Real(stod(s));
	}

	Int* Data::BigInt(const wstring& s) {
		return Number(StringHelper::fromString<long long>(s));
	}

	Fun* Data::Cons(vector<Term> &deref) {
		return new Fun(".", deref);
	}

	Fun* Data::F(Const* string6, vector<Term> &terms) {
		return new Fun(string6->GetName(), terms);
	}

	Fun* Data::F(const wstring& string6, vector<Term> &terms) {
		return new Fun(string6, terms);
	}

unordered_map<wstring, Const*> Data::atomTable = unordered_map<wstring, Const*>();

	Const* Data::Intern(const wstring& d) {
		Const* c = atomTable[d];
		if(c == nullptr) {
			c = new Const(d);
			atomTable.emplace(d, c);
		}
		return c;
	}

	bool Data::SameTypes(Term* thiz, Term* that) {
		return thiz->Arity() == that->Arity();
	}

	Var* Data::V(Prolog* mach) {
		return new Var(mach);
	}
}
