#ifndef CRYPT
#define CRYPT

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class crypt {
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
	 * top(_5234):-odd(_4840,even(_4844,even(_4848,even(_4852,mult([_4848,_4844,
	 * _4840],_4852,[_4874,_4880,_4886,_4892|_4894],lefteven(_4892,odd(_4886,even(
	 * _4880,even(_4874,zero(_4894,lefteven(_4926,mult([_4848,_4844,_4840],_4926,[
	 * _4948,_4954,_4960|_4962],lefteven(_4960,odd(_4954,even(_4948,zero(_4962,sum([
	 * _4874,_4880,_4886,_4892],[0,_4948,_4954,_4960],[_5038,_5044,_5050,_5056|_5058
	 * ],odd(_5056,odd(_5050,even(_5044,even(_5038,zero(_5058,_5234)))))))))))))))))
	 * ))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sum_3 : public Code {

	/*
	 * 
	 * sum(_6138,_6140,_6142,_6192):-sum(_6138,_6140,0,_6142,_6192).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sum_4 : public Code {

	/*
	 * 
	 * sum([_6328|_6330],[_6334|_6336],_6350,[_6340|_6342],_6474):-cut(1,is(_6368,
	 * _6328+_6334+_6350,is(_6340,_6368 mod
	 * 10,is(_6392,_6368//10,sum(_6330,_6336,_6392,_6342,_6474))))).
	 * sum([],_6782,0,_6782,_6832):-cut(1,_6832).
	 * sum(_6910,[],0,_6910,_6962):-cut(1,_6962).
	 * sum([],[_7040|_7042],_7056,[_7046|_7048],_7174):-cut(1,is(_7068,_7040+_7056,
	 * is(_7080,_7068//10,is(_7046,_7068 mod 10,sum([],_7042,_7080,_7048,_7174))))).
	 * sum([_7480|_7482],[],_7496,[_7486|_7488],_7614):-cut(1,is(_7508,_7480+_7496,
	 * is(_7520,_7508//10,is(_7486,_7508 mod 10,sum([],_7482,_7520,_7488,_7614))))).
	 * sum([],[],_7920,[_7920],_7954):-call(_7954).
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
};

class pred_mult_3 : public Code {

	/*
	 * 
	 * mult(_8060,_8062,_8064,_8114):-mult(_8060,_8062,0,_8064,_8114).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_mult_4 : public Code {

	/*
	 * 
	 * mult([_8262|_8264],_8276,_8278,[_8268|_8270],_8396):-is(_8296,_8262*_8276+
	 * _8278,is(_8268,_8296 mod
	 * 10,is(_8320,_8296//10,mult(_8264,_8276,_8320,_8270,_8396)))).
	 * mult([],_8722,_8724,[_8708,_8714],_8802):-is(_8708,_8724 mod
	 * 10,is(_8714,_8724//10,_8802)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_zero_1 : public Code {

	/*
	 * 
	 * zero([],_9008):-call(_9008). zero([0|_9092],_9128):-zero(_9092,_9128).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_odd_1 : public Code {

	/*
	 * 
	 * odd(1,_9252):-call(_9252). odd(3,_9362):-call(_9362).
	 * odd(5,_9472):-call(_9472). odd(7,_9582):-call(_9582).
	 * odd(9,_9692):-call(_9692).
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
};

class pred_even_1 : public Code {

	/*
	 * 
	 * even(0,_9802):-call(_9802). even(2,_9918):-call(_9918).
	 * even(4,_10034):-call(_10034). even(6,_10150):-call(_10150).
	 * even(8,_10266):-call(_10266).
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
};

class pred_lefteven_1 : public Code {

	/*
	 * 
	 * lefteven(2,_10382):-call(_10382). lefteven(4,_10504):-call(_10504).
	 * lefteven(6,_10626):-call(_10626). lefteven(8,_10748):-call(_10748).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef CRYPT
