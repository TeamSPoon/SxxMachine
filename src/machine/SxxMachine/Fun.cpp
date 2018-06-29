using namespace std;

#include "Fun.h"
#include "Prolog.h"
#include "Const.h"
#include "Appendable.h"
#include "Name.h"

namespace SxxMachine {

	Term* Fun::Copy(Prolog* m, long long t) {
		int a = Arguments.size();
		Fun* f = new Fun(Name, a);
		Term* arg;
		while(a-- > 0) {
			arg = Arguments[a]->Deref();
			f->Arguments[a] = arg->Copy(m, t);
		}
		return f;
	}

	Fun::Fun(const wstring& N) {
		Name = N;
	}

	Fun::Fun(const wstring& N, const int& arity) {
		Name = N;
		Arguments = std::vector<Term*>(arity);
		if(arity == 2) {
			isLixt = Name == ".";
		}
	}

	Fun::Fun(const wstring& N, vector<Term> &args) {
		Name = N;
		Arguments = args;
		if(Arguments.size() == 2) {
			isLixt = Name == ".";
		}
	}

	Term* Fun::Arg(const int& i) {
		return ArgNoDeRef(i);
	}

	Term* Fun::ArgDeRef(const int& i) {
		return Arg(i)->Deref();
	}

	Term* Fun::ArgNoDeRef(const int& i) {
		return Arguments[i];
	}

	long long Fun::LongValue() {
		int arity = Arguments.size();
		// Term a1, a2;
		long long i1, i2;
		if(arity == 1) {
			i1 = (Arguments[0]->Deref())->LongValue();
			if(Name == (wstring("-")).intern()) {
				return -i1;
			}
			if(Name == (wstring("+")).intern()) {
				return i1;
			}
			return 0;
		}
		if(arity != 2) {
			return 0;
		}
		i1 = (Arguments[0]->Deref())->LongValue();
		i2 = (Arguments[1]->Deref())->LongValue();
		if(Name == (wstring("-")).intern()) {
			return i1 - i2;
		}
		if(Name == (wstring("+")).intern()) {
			return i1 + i2;
		}
		if(Name == (wstring("*")).intern()) {
			return i1 * i2;
		}
		if(Name == (wstring("/")).intern()) {
			return i1 / i2;
		}
		return 0;
	}

	Term* Fun::Deref() {
		return this;
	}

	bool Fun::islist(const int& i, const wstring& Name) {
		if(i != 2) {
			return false;
		}
		return Name == (wstring(".")).intern();
	}

	bool Fun::IsList() {
		return islist(this->Arguments.size(), this->Name);
	}

	void Fun::formattedListOutput(const int& formatFlags, Appendable* buffer, Term* T) throw(IOException) {
		while(true) {
			if(T->IsNil()) {
				return;
			}
			if(T->IsList()) {
				int arity = T->Arity();
				int carg = 1;
				while(carg < arity) {
					buffer->append(",");
					T->Arg(carg)->formattedOutput(formatFlags, buffer);
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
		// int i = Arguments.length;
		if(isLixt) {
			buffer->append("[");
			formattedListOutput(formatFlags, buffer, Arguments[1]);
			buffer->append("]");
			return;
		}
		if(formatFlags != 0) {
			Const::formattedOutputC(formatFlags, buffer, GetName());
		} else {
			buffer->append(GetName());
		}
		buffer->append("(");
		int arity1 = Arity();
		for(int carg = 0; carg < arity1; carg++) {
			if(carg != 0) {
				buffer->append(",");
			}
			Term* t = Arg(carg);
			if(t == nullptr) {
				buffer->append("@null");
			} else {
				t->formattedOutput(formatFlags, buffer);
			}
		}
		buffer->append(")");
	}

	bool Fun::Unify(Term* that) {
		Fun* tmpfunct;
		int i, j;
		Term arg1[], obj1;
		Term arg2[], obj2;

		if(!(SameTypes(this, that))) {
			return that->Bind(this);
		}
		// if (!((this.Name).equals(that.GetName()))) return false ;
		if(static_cast<this::Name*>(!) = (that->GetName())) {
			return false;
		}

		tmpfunct = static_cast<Fun*>(that); // cast perhaps to be avoided
		i = Arguments.size();
		j = tmpfunct->Arguments.size();
		if(i != j) {
			return false;
		}
		arg1 = this->Arguments;
		arg2 = tmpfunct->Arguments;
		do {
			obj1 = arg1[--i].Deref();
			obj2 = arg2[i].Deref();
			if(!(obj1::Unify(obj2))) {
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

		if(!(SameTypes(this, that))) {
			return false;
		}
		;
		if(!((this->GetName()) == that->GetName())) {
			return false;
		}

		tmpfunct = static_cast<Fun*>(that); // cast perhaps to be avoided
		i = Arguments.size();
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
		return Arguments;
	}

	int Fun::Arity() {
		return Arguments.size();
	}

	wstring Fun::GetName() {
		return Name;
	}
}
