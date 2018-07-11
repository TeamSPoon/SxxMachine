#ifndef INT
#define INT

#include "Real.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Term; }

namespace SxxMachine {

	class Int : public Real {
		// long Num;

	public:
		Int(long long i);

		Term* Copy(Prolog* m, long long t) override;

		bool isInt() override;

	};
}


#endif	//#ifndef INT
