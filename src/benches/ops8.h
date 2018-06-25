#ifndef OPS8
#define OPS8

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class ops8 {
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
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_8950):-ops8(_8950).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ops8_0 : public Code {

	/*
	 * 
	 * ops8(_9068):-d((x+1)*((x^2+2)*(x^3+3)),x,_9046,_9068).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_d_3 : public Code {

	/*
	 * 
	 * d(_9166+_9168,_9180,_9172+_9174,_9250):-cut(1,d(_9166,_9180,_9172,d(_9168,
	 * _9180,_9174,_9250))).
	 * d(_9448-_9450,_9462,_9454-_9456,_9532):-cut(1,d(_9448,_9462,_9454,d(_9450,
	 * _9462,_9456,_9532))).
	 * d(_9730*_9732,_9756,_9736*_9732+_9730*_9744,_9826):-cut(1,d(_9730,_9756,_9736
	 * ,d(_9732,_9756,_9744,_9826))).
	 * d(_10024/_10026,_10062,(_10030*_10026-_10024*_10038)/_10026^2,_10132):-cut(1,
	 * d(_10024,_10062,_10030,d(_10026,_10062,_10038,_10132))).
	 * d(_10330^_10332,_10356,_10336*_10332*_10330^_10344,_10440):-cut(1,integer(
	 * _10332,is(_10344,_10332-1,d(_10330,_10356,_10336,_10440)))).
	 * d(-_10660,_10670,-_10664,_10726):-cut(1,d(_10660,_10670,_10664,_10726)).
	 * d(exp(_10860),_10876,exp(_10860)*_10870,_10932):-cut(1,d(_10860,_10876,_10870
	 * ,_10932)).
	 * d(log(_11066),_11078,_11070/_11066,_11134):-cut(1,d(_11066,_11078,_11070,
	 * _11134)). d(_11268,_11268,1,_11312):-cut(1,_11312).
	 * d(_11382,_11384,0,_11408):-call(_11408).
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


#endif	//#ifndef OPS8
