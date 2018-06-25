#ifndef QUEENS_8
#define QUEENS_8

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class queens_8 {
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
	static Int* posint1;
	static Int* posint8;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_29646):-queens(8,_29618,fail(_29646)). top(_29764):-call(_29764).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_queens_2 : public Code {

	/*
	 * 
	 * queens(_29802,_29804,_29860):-range(1,_29802,_29812,queens(_29812,[],_29804,
	 * _29860)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_queens_3 : public Code {

	/*
	 * 
	 * queens([],_30040,_30040,_30064):-call(_30064).
	 * queens(_30156,_30158,_30160,_30240):-select(_30156,_30166,_30168,not_attack(
	 * _30158,_30168,queens(_30166,[_30168|_30158],_30160,_30240))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_not_attack_2 : public Code {

	/*
	 * 
	 * not_attack(_30482,_30484,_30526):-not_attack(_30482,_30484,1,_30526).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_not_attack_3 : public Code {

	/*
	 * 
	 * not_attack([],_30654,_30656,_30696):-cut(1,_30696).
	 * not_attack([_30778|_30780],_30786,_30788,_30890):-
	 * =\=(_30786,_30778+_30788,=\=(_30786,_30778-_30788,is(_30822,_30788+1,
	 * not_attack(_30780,_30786,_30822,_30890)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_select_3 : public Code {

	/*
	 * 
	 * select([_31180|_31182],_31182,_31180,_31212):-call(_31212).
	 * select([_31322|_31324],[_31322|_31330],_31338,_31386):-select(_31324,_31330,
	 * _31338,_31386).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_range_3 : public Code {

	/*
	 * 
	 * range(_31532,_31532,[_31532],_31582):-cut(1,_31582).
	 * range(_31676,_31684,[_31676|_31678],_31764):-smallerthan(_31676,_31684,is(
	 * _31702,_31676+1,range(_31702,_31684,_31678,_31764))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef QUEENS_8
