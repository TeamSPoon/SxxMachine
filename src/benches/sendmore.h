#ifndef SENDMORE
#define SENDMORE

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class sendmore {
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
	static Const* s10;
	static Const* s11;
	static Const* s12;
	static Const* s13;
	static Const* s14;
	static Const* s15;
	static Const* s16;
	static Const* s17;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint4;
	static Int* posint5;
	static Int* posint6;
	static Int* posint7;
	static Int* posint8;
	static Int* posint9;
	static Int* posint10;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_5262):-digit(_4790,digit(_4794,=\=(_4790,_4794,sumdigit(0,_4790,_4794,
	 * _4810,_4812,digit(_4816,=\=(_4816,_4810,=\=(_4816,_4794,=\=(_4816,_4790,digit
	 * (_4838,=\=(_4838,_4816,=\=(_4838,_4810,=\=(_4838,_4794,=\=(_4838,_4790,
	 * sumdigit(_4812,_4816,_4838,_4794,_4874,digit(_4878,=\=(_4878,_4838,=\=(_4878,
	 * _4816,=\=(_4878,_4810,=\=(_4878,_4794,=\=(_4878,_4790,sumdigit(_4874,_4794,
	 * _4878,_4816,_4920,leftdigit(_4924,=\=(_4924,_4878,=\=(_4924,_4838,=\=(_4924,
	 * _4816,=\=(_4924,_4810,=\=(_4924,_4794,=\=(_4924,_4790,leftdigit(_4964,=\=(
	 * _4964,_4924,=\=(_4964,_4878,=\=(_4964,_4838,=\=(_4964,_4816,=\=(_4964,_4810,=
	 * \=(_4964,_4794,=\=(_4964,_4790,sumdigit(_4920,_4924,_4964,_4878,_4964,fail(
	 * _5262)))))))))))))))))))))))))))))))))))))). top(_7250):-call(_7250).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sumdigit_5 : public Code {

	/*
	 * 
	 * sumdigit(_7288,_7290,_7292,_7294,_7296,_7432):-is(_7312,_7288+_7290+_7292,or(
	 * (_7312<10->_7294=_7312,_7296=0),(_7294 is _7312-10,_7296=1),_7432)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_digit_1 : public Code {

	/*
	 * 
	 * digit(0,_7634):-call(_7634). digit(1,_7720):-call(_7720).
	 * digit(2,_7806):-call(_7806). digit(3,_7892):-call(_7892).
	 * digit(4,_7978):-call(_7978). digit(5,_8064):-call(_8064).
	 * digit(6,_8150):-call(_8150). digit(7,_8236):-call(_8236).
	 * digit(8,_8322):-call(_8322). digit(9,_8408):-call(_8408).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_leftdigit_1 : public Code {

	/*
	 * 
	 * leftdigit(1,_8494):-call(_8494). leftdigit(2,_8586):-call(_8586).
	 * leftdigit(3,_8678):-call(_8678). leftdigit(4,_8770):-call(_8770).
	 * leftdigit(5,_8862):-call(_8862). leftdigit(6,_8954):-call(_8954).
	 * leftdigit(7,_9046):-call(_9046). leftdigit(8,_9138):-call(_9138).
	 * leftdigit(9,_9230):-call(_9230).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef SENDMORE
