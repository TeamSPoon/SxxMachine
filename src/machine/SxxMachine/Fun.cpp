using namespace std;

#include "Fun.h"
#include "Prolog.h"
#include "Const.h"
#include "Data.h"
#include "Appendable.h"
#include "Name.h"

namespace SxxMachine {

	Term* Fun::Copy(Prolog* m, long long t) {
		int a = this->Arguments.size();
		Fun* f = new Fun(this->Name, a);
		Term* arg;
		while(a-- > 0) {
			arg = this->Arguments[a]->Deref();
			f->Arguments[a] = arg->Copy(m, t);
		}
		return f;
	}

	Fun::Fun(const wstring& N, const int& arity) : Fun(N, new Term[arity]) {
	}

	Fun::Fun(Const* N, const int& arity) : Fun(N->GetName(), new Term[arity]) {
	}

	Fun::Fun(const wstring& N, vector<Term> &args) {
		this->Name = N;
		this->Arguments = args;
		if(this->Arguments.size() == 2) {
			this->isLixt = this->Name[0];
		}
	}

	Term* Fun::Arg(const int& i) {
		return this->ArgNoDeRef(i);
	}

	Term* Fun::ArgDeRef(const int& i) {
		return this->Arg(i)->Deref();
	}

	Term* Fun::ArgNoDeRef(const int& i) {
		return this->Arguments[i];
	}

	long long Fun::LongValue() {
		int arity = this->Arguments.size();
		// Term a1, a2;
		wstring Name = this->Name;
		long long i1, i2;
		if(arity == 1) {
			i1 = (this->Arguments[0]->Deref())->LongValue();
			if(Name == "-") {
				return -i1;
			}
			if(Name == "+") {
				return i1;
			}
			return 0;
		}
		if(arity != 2) {
			return 0;
		}
		i1 = (this->Arguments[0]->Deref())->LongValue();
		i2 = (this->Arguments[1]->Deref())->LongValue();
		if(Name == "-") {
			return i1 - i2;
		}
		if(Name == "+") {
			return i1 + i2;
		}
		if(Name == "*") {
			return i1 * i2;
		}
		if(Name == "/") {
			return i1 / i2;
		}
		return 0;
	}

	Term* Fun::Deref() {
		return this;
	}

	bool Fun::IsList() {
		return this->isLixt == '.';
	}

	void Fun::formattedListOutput(const int& formatFlags, Appendable* buffer, Term* T) throw(IOException) {
		while(true) {
			T = T->Deref();
			if(T->IsNil()) {
				return;
			}
			if(T->IsList()) {
				int arity = T->Arity() - 1;
				int carg = 0;
				while(carg < arity) {
					buffer->append(",");
					T->ArgDeRef(carg)->formattedOutput(formatFlags, buffer);
					carg++;
				}
				T = T->Arg(carg);
				continue;
			} else {
				buffer->append("|");
				T->formattedOutput(formatFlags, buffer);
				return;
			}
		}
	}

	void Fun::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		if(this->isLixt == '.') {
			buffer->append("[");
			this->Arguments[0]->Deref().formattedOutput(formatFlags, buffer);
			Fun::formattedListOutput(formatFlags, buffer, this->Arguments[1]->Deref());
			buffer->append("]");
			return;
		}
		Const::formattedOutputC(formatFlags, buffer, this->GetName());
		buffer->append("(");
		int arity1 = this->Arity();
		for(int carg = 0; carg < arity1; carg++) {
			if(carg != 0) {
				buffer->append(",");
			}
			Term* t = this->Arg(carg);
			if(t == nullptr) {
				buffer->append("@null");
			} else {
				t->formattedOutput(formatFlags, buffer);
			}
		}
		buffer->append(")");
	}

	bool Fun::Unify(Term* that, Prolog* mach) {
		Fun* tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if(!(Data::SameTypes(this, that))) {
			return that->Bind(this, mach);
		}
		// if (!((this.Name).equals(that.GetName()))) return false ;
		if(static_cast<this::Name*>(!) = (that->GetName())) {
			return false;
		}

		tmpfunct = static_cast<Fun*>(that); // cast perhaps to be avoided
		i = this->Arguments.size();
		j = tmpfunct->Arguments.size();
		if(i != j) {
			return false;
		}
		arg1 = this->Arguments;
		arg2 = tmpfunct->Arguments;
		do {
			obj1 = arg1[--i].Deref();
			obj2 = arg2[i].Deref();
			if(!(obj1::Unify(obj2, mach))) {
				return false;
			}
		} while(i > 0);
		return true;
	}

	bool Fun::Equal(Term* that) {
		Fun* tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if(!(Data::SameTypes(this, that))) {
			return false;
		}
		;
		if(!((this->GetName()) == that->GetName())) {
			return false;
		}

		tmpfunct = static_cast<Fun*>(that); // cast perhaps to be avoided
		i = this->Arguments.size();
		j = tmpfunct->Arguments.size();
		if(i != j) {
			return false;
		}
		arg1 = this->Arguments;
		arg2 = tmpfunct->Arguments;
		do {
			obj1 = arg1[--i].Deref();
			obj2 = arg2[i].Deref();
			if(!(obj1::Equal(obj2))) {
				return false;
			}
		} while(i > 0);
		return true;
	}

	std::vector<Term*> Fun::GetArgs() {
		return this->Arguments;
	}

	int Fun::Arity() {
		return this->Arguments.size();
	}

	wstring Fun::GetName() {
		return this->Name;
	}

	bool Fun::isVar() {
		return false;
	}

	bool Fun::isFVar() {
		return false;
	}

	bool Fun::isStruct() {
		return true;
	}

	bool Fun::isConst() {
		return false;
	}
}
