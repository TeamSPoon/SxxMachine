#ifndef REAL
#define REAL

#include "Term.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Term; }
class Number;
class Appendable;

namespace SxxMachine {


	class Real : public Term {
	public:
		Number* IntValue;

		virtual ~Real() {
			delete IntValue;
		}

		Real(Number* i);

		Term* Copy(Prolog* m, long long t) override;

		long long LongValue() override;

		Term* Deref() override;

		void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

		bool Unify(Term* that) override;

		bool Equal(Term* that) override;

		std::string GetName() override;

		int Arity() final override;

		double DoubleValue();

	};
}


#endif	//#ifndef REAL
