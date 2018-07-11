using namespace std;

#include "Continuation.h"
#include "Operation.h"
#include "Term.h"
#include "Code.h"
#include "Data.h"
#include "Appendable.h"

namespace SxxMachine {

	Continuation::Continuation(std::vector<Term*>& args, Code* c) {
		int i = c->Arity() + 1;
		this->Args = std::vector<Term*>(i);
		while(i-- > 0) {
			this->Args[i] = args[i];
		}
		this->code = c;
	}

	Continuation::Continuation(std::vector<Term*>& args, const int& getArity, Operation* c) {
		int i = getArity + 1;
		this->Args = std::vector<Term*>(i);
		while(i-- > 0) {
			this->Args[i] = args[i];
		}
		this->code = c;
	}

	Term* Continuation::Deref() {
		return this;
	}

	bool Continuation::Unify(Term* that, Prolog* mach) {
		return that->Bind(this, mach);
	}

	void Continuation::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		cout << "general output of continuations not available" << endl;
		buffer->append(this->GetName());
		int i = this->Args.size();
		int current = 0;
		while(i-- > 0) {
			this->formattedArgOutput(this->Args[current++], formatFlags, buffer);
		}

	}

	void Continuation::formattedArgOutput(Term* term, const int& formatFlags, Appendable* buffer) throw(IOException) {
		if(term != nullptr) {
			term->formattedOutput(formatFlags, buffer);
		}

	}

	int Continuation::Arity() {
		return Data::OBJ;
	}
}
