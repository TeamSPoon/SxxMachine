#ifndef TIMES10
#define TIMES10

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class times10 {
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
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_8812):-times10(_8812).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_times10_0 : public Code {

	/*
	 * 
	 * times10(_8942):-d(x*x*x*x*x*x*x*x*x*x,x,_8920,_8942).
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
	 * d(_9040+_9042,_9054,_9046+_9048,_9124):-cut(1,d(_9040,_9054,_9046,d(_9042,
	 * _9054,_9048,_9124))).
	 * d(_9322-_9324,_9336,_9328-_9330,_9406):-cut(1,d(_9322,_9336,_9328,d(_9324,
	 * _9336,_9330,_9406))).
	 * d(_9604*_9606,_9630,_9610*_9606+_9604*_9618,_9700):-cut(1,d(_9604,_9630,_9610
	 * ,d(_9606,_9630,_9618,_9700))).
	 * d(_9898/_9900,_9936,(_9904*_9900-_9898*_9912)/_9900^2,_10006):-cut(1,d(_9898,
	 * _9936,_9904,d(_9900,_9936,_9912,_10006))).
	 * d(_10204^_10206,_10230,_10210*_10206*_10204^_10218,_10314):-cut(1,integer(
	 * _10206,is(_10218,_10206-1,d(_10204,_10230,_10210,_10314)))).
	 * d(-_10534,_10544,-_10538,_10600):-cut(1,d(_10534,_10544,_10538,_10600)).
	 * d(exp(_10734),_10750,exp(_10734)*_10744,_10806):-cut(1,d(_10734,_10750,_10744
	 * ,_10806)).
	 * d(log(_10940),_10952,_10944/_10940,_11008):-cut(1,d(_10940,_10952,_10944,
	 * _11008)). d(_11142,_11142,1,_11186):-cut(1,_11186).
	 * d(_11256,_11258,0,_11282):-call(_11282).
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


#endif	//#ifndef TIMES10
