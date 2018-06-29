#ifndef CONTINUATION
#define CONTINUATION

#include "Prolog.h"
#include "Operation.h"
#include <vector>
#include <iostream>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Term; }
namespace SxxMachine { class Code; }
namespace SxxMachine { class Operation; }
class Appendable;

namespace SxxMachine {


	class Continuation final : public PrologObject {
	public:
		Operation code;
		std::vector<Term*> Args;

		Continuation(std::vector<Term*>& args, Code* c);

		Continuation(std::vector<Term*>& args, const int& getArity, Operation c);

		Term* Deref() override;

		bool Unify(Term* that) override;

		void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

	private:
		void formattedArgOutput(Term* term, const int& formatFlags, Appendable* buffer) throw(IOException);

	public:
		int Arity() override;

	};
}


#endif	//#ifndef CONTINUATION
