using namespace std;

#include "Const.h"
#include "Prolog.h"
#include "Data.h"
#include "Operation.h"
#include "Appendable.h"

namespace SxxMachine {

Term* const  Const::Nil = Data::Intern("[]");

	long long Const::LongValue() {
		return 0;
	}

	Const::Const(const wstring& N) {
		this->Name = N;
	}

	Term* Const::Copy(Prolog* m, long long t) {
		return this; // new Const(Name);
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
		Const::formattedOutputC(formatFlags, buffer, this->GetName());
	}

	bool Const::Unify(Term* that, Prolog* mach) {
		if(Data::SameTypes(this, that)) {
			// return (that.GetName()).equals(this.Name) ;
			return (that->GetName() == this->Name);
		}
		return that->Bind(this, mach);
	}

	bool Const::Equal(Term* that) {
		if(Data::SameTypes(this, that)) {
			return (that->toQuotedString()).equals(this->toQuotedString());
		}
		return false;
	}

	int Const::Arity() {
		return Data::CONST;
	}

	wstring Const::GetName() {
		return this->Name;
	}

	bool Const::IsNil() {
		if(Const::Nil == this) {
			return true;
		}
		if(Const::Nil->GetName() == this->Name || this->Name == "[]") {
			// throw
		}
		return false;
	}

	Operation* Const::FindProc(const int& i) {
		if(i < 33) {
			if(this->byArity.size() > 0) {
				Operation* was = this->byArity[i];
				if(was != nullptr) {
					return was;
				}
				was = this->byArity[i] = Prolog::Predicates->LoadPred(this->Name, i);
				return was;
			} else {
				Operation* was = Prolog::Predicates->LoadPred(this->Name, i);
				if(was != nullptr) {
					this->byArity = std::vector<Operation*>(32);
					this->byArity[i] = was;
				}
				return was;
			}
		}
		return Prolog::Predicates->LoadPred(this->Name, i);
	}

	bool Const::isVar() {
		// TODO Auto-generated method stub
		return false;
	}

	bool Const::isFVar() {
		// TODO Auto-generated method stub
		return false;
	}

	bool Const::isStruct() {
		// TODO Auto-generated method stub
		return false;
	}

	bool Const::isConst() {
		// TODO Auto-generated method stub
		return true;
	}
}
