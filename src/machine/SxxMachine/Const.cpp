using namespace std;

#include "Const.h"
#include "Prolog.h"
#include "Operation.h"
#include "Appendable.h"

namespace SxxMachine {

Term* const  Const::Nil = Intern("[]");

	long long Const::LongValue() {
		return 0;
	}

	Const::Const(const wstring& N) {
		Name = N;
	}

	Term* Const::Copy(Prolog* m, long long t) {
		return this; //new Const(Name);
	}

	Term* Const::Deref() {
		return this;
	}

	void Const::formattedOutputC(const int& formattingFlags, Appendable* buffer, const wstring& str) throw(IOException) {
		if(formattingFlags == 0) {
			buffer->append(str);
		} else {
			buffer->append("'");
			buffer->append(str);
			buffer->append("'");
		}
	}

	void Const::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		Const::formattedOutputC(formatFlags, buffer, GetName());
	}

	bool Const::Unify(Term* that) {
		if(SameTypes(this, that)) {
			// return (that.GetName()).equals(this.Name) ;
			return (that->GetName() == this->Name);
		}
		return that->Bind(this);
	}

	bool Const::Equal(Term* that) {
		if(SameTypes(this, that)) {
			return (that->toQuotedString()).equals(this->toQuotedString());
		}
		return false;
	}

	int Const::Arity() {
		return CONST;
	}

	wstring Const::GetName() {
		return Name;
	}

	bool Const::IsNil() {
		if(Nil == this) {
			return true;
		}
		if(Nil->GetName() == this->Name || this->Name == (wstring("[]")).intern()) {
			//throw
		}
		return false;
	}

	Operation Const::FindProc(const int& i) {
		if(i < 33) {
			if(byArity.size() > 0) {
				Operation was = byArity[i];
				if(was != nullptr) {
					return was;
				}
				was = byArity[i] = Prolog::Predicates->LoadPred(Name, i);
				return was;
			} else {
				Operation was = Prolog::Predicates->LoadPred(Name, i);
				if(was != nullptr) {
					byArity = std::vector<Operation>(32);
					byArity[i] = was;
				}
				return was;
			}
		}
		return Prolog::Predicates->LoadPred(Name, i);
	}
}
