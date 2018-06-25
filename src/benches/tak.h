#ifndef TAK
#define TAK

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class tak {
public:
	static Const* s0;
	static Const* s1;
	static Const* s2;
	static Const* s3;
	static Const* s4;
	static Const* s5;
	static Const* s6;
	static Const* s7;
	static Const* s8;
	static Const* s9;
	static Int* posint1;
	static Int* posint6;
	static Int* posint12;
	static Int* posint18;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_4664):-tak(_4664).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_tak_0 : public Code {

	/*
	 * 
	 * tak(_4742):-tak(18,12,6,_4720,_4742).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_tak_4 : public Code {

	/*
	 * 
	 * tak(_4854,_4856,_4858,_4860,_4924):-smallerorequal(_4854,_4856,unify(_4860,
	 * _4858,_4924)).
	 * tak(_5108,_5110,_5112,_5114,_5284):-smallerthan(_5110,_5108,is(_5130,_5108-1,
	 * tak(_5130,_5110,_5112,_5142,is(_5152,_5110-1,tak(_5152,_5112,_5108,_5164,is(
	 * _5174,_5112-1,tak(_5174,_5108,_5110,_5186,tak(_5142,_5164,_5186,_5114,_5284))
	 * )))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef TAK
