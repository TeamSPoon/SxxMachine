#ifndef METATERM
#define METATERM

#include "Code.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class PrologMachine;
class pred_frozen_2;

class Metaterm : public Code {

public:
	static Code* pred_freeze_2(PrologMachine* mach);

	static Code* pred_frozen_2(PrologMachine* mach);

	static Code* pred_attvar_1(PrologMachine* mach);

	static Code* pred_put_attr_3(PrologMachine* mach);

	static Code* pred_get_attr_3(PrologMachine* mach);

	static Code* pred_get_attrs_2(PrologMachine* mach);

	static Code* pred_put_attrs_2(PrologMachine* mach);

	static Code* pred_undo_1(PrologMachine* mach);
};


#endif	//#ifndef METATERM
