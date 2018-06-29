using namespace std;

#include "Continuation.h"
#include "Term.h"
#include "Code.h"
#include "Appendable.h"

namespace SxxMachine {

	Continuation::Continuation(std::vector<Term*>& args, Code* c) {
		int i = c->Arity() + 1;
		Args = std::vector<Term*>(i);
		while(i-- > 0) {
			Args[i] = args[i];
		}
		code = c;
	}

	Continuation::Continuation(std::vector<Term*>& args, const int& getArity, Operation c) {
		int i = getArity + 1;
		Args = std::vector<Term*>(i);
		while(i-- > 0) {
			Args[i] = args[i];
		}
		code = static_cast<Code*>(c);
	}

	Term* Continuation::Deref() {
		return this;
	}

	bool Continuation::Unify(Term* that) {
		return that->Bind(this);
	}

	void Continuation::formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) {
		cout << "general output of continuations not available" << endl;
		buffer->append(GetName());
		int i = Args.size();
		int current = 0;
		while(i-- > 0) {
			formattedArgOutput(Args[current++], formatFlags, buffer);
		}

	}

	void Continuation::formattedArgOutput(Term* term, const int& formatFlags, Appendable* buffer) throw(IOException) {
		if(term != nullptr) {
			term->formattedOutput(formatFlags, buffer);
		}

	}

	int Continuation::Arity() {
		return JAVA;
	}
}
