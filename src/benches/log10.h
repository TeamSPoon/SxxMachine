#ifndef LOG10
#define LOG10

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class log10 {
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
	 * top(_25542):-log10(_25542).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_log10_0 : public Code {

	/*
	 * 
	 * log10(_25658):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_25636
	 * ,_25658).
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
	 * d(_25756+_25758,_25770,_25762+_25764,_25840):-cut(1,d(_25756,_25770,_25762,d(
	 * _25758,_25770,_25764,_25840))).
	 * d(_26038-_26040,_26052,_26044-_26046,_26122):-cut(1,d(_26038,_26052,_26044,d(
	 * _26040,_26052,_26046,_26122))).
	 * d(_26320*_26322,_26346,_26326*_26322+_26320*_26334,_26416):-cut(1,d(_26320,
	 * _26346,_26326,d(_26322,_26346,_26334,_26416))).
	 * d(_26614/_26616,_26652,(_26620*_26616-_26614*_26628)/_26616^2,_26722):-cut(1,
	 * d(_26614,_26652,_26620,d(_26616,_26652,_26628,_26722))).
	 * d(_26920^_26922,_26946,_26926*_26922*_26920^_26934,_27030):-cut(1,integer(
	 * _26922,is(_26934,_26922-1,d(_26920,_26946,_26926,_27030)))).
	 * d(-_27250,_27260,-_27254,_27316):-cut(1,d(_27250,_27260,_27254,_27316)).
	 * d(exp(_27450),_27466,exp(_27450)*_27460,_27522):-cut(1,d(_27450,_27466,_27460
	 * ,_27522)).
	 * d(log(_27656),_27668,_27660/_27656,_27724):-cut(1,d(_27656,_27668,_27660,
	 * _27724)). d(_27858,_27858,1,_27902):-cut(1,_27902).
	 * d(_27972,_27974,0,_27998):-call(_27998).
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


#endif	//#ifndef LOG10
