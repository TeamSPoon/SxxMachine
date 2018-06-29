#ifndef FROZENVAR
#define FROZENVAR

#include "Term.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Term; }
namespace SxxMachine { class Prolog; }
class Appendable;

namespace SxxMachine {


	class FrozenVar : public Term {
	public:
		Term* Refers;
		long long timestamp = 0;
		Prolog* mach;
		Term* goals;

		virtual ~FrozenVar() {
			delete Refers;
			delete mach;
			delete goals;
		}

		FrozenVar(Prolog* machin, Term* action);

		FrozenVar(Prolog* machin, long long t, Term* action);

		Term* Copy(Prolog* m, long long t) override;

		Term* Deref() override;

		void UnTrailSelf() override;

		void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

		bool Bind(Term* that) override;

		bool Unify(Term* that) override;

		bool Equal(Term* that) override;

		std::string GetName() override;

		int Arity() override;
	};
}


#endif	//#ifndef FROZENVAR
