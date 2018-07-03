#ifndef DATA
#define DATA

#include <string>
#include <vector>
#include "../../stringhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Real; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Fun; }
namespace SxxMachine { class Term; }
namespace SxxMachine { class Const; }
namespace SxxMachine { class Var; }
namespace SxxMachine { class Prolog; }
class Number;

namespace SxxMachine {

	class Data {

	public:
		static Real* Number(Number* d);

		static Int* Number(long long d);

		static Real* Float(Number* d);

		static Real* BigDec(const std::string& s);

		static Int* BigInt(const std::string& s);

		static Fun* Cons(std::vector<Term> &deref);

		static Fun* F(Const* string6, std::vector<Term> &terms);

		static Fun* F(const std::string& string6, std::vector<Term> &terms);

		static Const* Intern(const std::string& d);

		static bool SameTypes(Term* thiz, Term* that);

		static Var* V(Prolog* mach);

	};

}


#endif	//#ifndef DATA
