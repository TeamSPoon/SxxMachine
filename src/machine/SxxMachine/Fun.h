#ifndef FUN
#define FUN

#include "Term.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Term; }
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Const; }
class Appendable;
class Name;

namespace SxxMachine {


	class Fun final : public Term {
	public:
		std::vector<Term*> Arguments;
		std::string Name;
	private:
		char isLixt = '\0';

	public:
		Term* Copy(Prolog* m, long long t) override;

		Fun(const std::string& N, const int& arity);

		Fun(Const* N, const int& arity);

		Fun(const std::string& N, std::vector<Term> &args);

		Term* Arg(const int& i) override;

		Term* ArgDeRef(const int& i) override;

		Term* ArgNoDeRef(const int& i) override;

		long long LongValue() override;

		Term* Deref() override;

		bool IsList() override;

		static void formattedListOutput(const int& formatFlags, Appendable* buffer, Term* T) throw(IOException);

		void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

		bool Unify(Term* that, Prolog* mach) override;

		bool Equal(Term* that) override;

		std::vector<Term*> GetArgs() override;

		int Arity() override;

		std::string GetName() override;

		bool isVar() override;

		bool isFVar() override;

		bool isStruct() override;

		bool isConst() override;
	};
}


#endif	//#ifndef FUN
