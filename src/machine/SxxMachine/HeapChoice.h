#ifndef HEAPCHOICE
#define HEAPCHOICE

#include "Prolog.h"

namespace SxxMachine {

	class HeapChoice : public PrologObject {
	public:
		int CutTo = 0;

		HeapChoice(const int& c);
	};
}


#endif	//#ifndef HEAPCHOICE
