#ifndef VAR
#define VAR

#include "Term.h"
#include <string>
#include <cmath>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Term; }
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Fun; }
class Appendable;

namespace SxxMachine {


	class Var : public Term {
	public:
		Term* Refers;
		long long timestamp = 0;
		// Prolog mach;
	private:
		std::string named = "";

	public:
		virtual ~Var() {
			delete Refers;
		}

		Var(Prolog* machin);

		Var(Prolog* machin, long long t);

		Var(const std::string& sval);

		Var(Prolog* prologmachine, const std::string& sval);

		Var(Prolog* mach, const int& currentChoice, Fun* newgoals);

		Term* Copy(Prolog* m, long long t) override;

		Term* Deref() override;

		void UnTrailSelf() override;

		void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

		virtual std::string GetVarName();

		virtual bool FBind(Term* that, Prolog* mach);

		bool Bind(Term* that, Prolog* mach) override;

		virtual bool VBind(Term* that, Prolog* mach);

		bool Unify(Term* that, Prolog* mach) override;

		bool Equal(Term* that) override;

		std::string GetName() override;

		int Arity() override;

		bool isVar() override;

		bool isFVar() override;

		bool isStruct() override;

		bool isConst() override;

		bool isInt() override;
	};
}


#endif	//#ifndef VAR
