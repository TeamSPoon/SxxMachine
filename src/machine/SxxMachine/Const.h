#ifndef CONST
#define CONST

#include "Term.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Term; }
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Operation; }
class Appendable;

namespace SxxMachine {


	class Const : public Term {
	public:
		static Term* const  Nil;
		std::string Name;

		long long LongValue() override;

		Const(const std::string& N);

		Term* Copy(Prolog* m, long long t) override;

		Term* Deref() override;

		static void formattedOutputC(const int& formattingFlags, Appendable* buffer, const std::string& str) throw(IOException);

		void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

		bool Unify(Term* that) override;

		bool Equal(Term* that) override;

		int Arity() override;

		std::string GetName() override;

		bool IsNil() override;

		std::vector<Operation> byArity;

		Operation FindProc(const int& i) override;
	};

}


#endif	//#ifndef CONST
