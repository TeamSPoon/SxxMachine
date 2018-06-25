#ifndef FAST_MU
#define FAST_MU

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class fast_mu {
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
	static Const* s18;
	static Const* s19;
	static Const* s20;
	static Const* s21;
	static Const* s22;
	static Const* s23;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint4;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_17332):-theorem([m,u,i,i,u],_17332).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_theorem_1 : public Code {

	/*
	 * 
	 * theorem(_17396,_17480):-length(_17396,_17402,is(_17412,_17402-1,derive([m,i],
	 * _17396,1,_17412,_17438,0,_17480))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_derive_6 : public Code {

	/*
	 * 
	 * derive(_17728,_17730,_17732,_17734,_17736,_17738,_17812):-derive2(_17728,
	 * _17730,_17732,_17734,1,_17736,_17738,_17812).
	 * derive(_18020,_18022,_18024,_18026,_18028,_18030,_18120):-is(_18040,_18030+1,
	 * derive(_18020,_18022,_18024,_18026,_18028,_18040,_18120)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_derive2_7 : public Code {

	/*
	 * 
	 * derive2(_18364,_18364,_18368,_18368,_18372,[],_18376,_18398):-call(_18398).
	 * derive2(_18564,_18566,_18568,_18570,_18572,[rule(_18552,_18554)|_18560],
	 * _18576,_18722):-lower_bound(_18568,_18570,_18584,smallerorequal(_18584,_18576
	 * ,is(_18600,_18576-1,rule(_18564,_18554,_18568,_18612,_18572,_18616,_18552,
	 * derive2(_18554,_18566,_18612,_18570,_18616,_18560,_18600,_18722))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rule_7 : public Code {

	/*
	 * 
	 * rule([m|_19236],[m|_19242],_19250,_19252,_19254,_19256,_19258,_19346):-rule(
	 * _19236,_19242,_19250,_19252,_19254,_19256,1,i,_19258,_19280,_19280,_19346).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rule_11 : public Code {

	/*
	 * 
	 * rule([i],[i,u],_19652,_19654,_19656,_19658,_19660,_19662,1,_19666,_19668,
	 * _19798):-smallerorequal(_19656,_19660,is(_19658,_19660-2,is(_19654,_19652+1,
	 * _19798))).
	 * rule([],_20102,_20104,_20106,_20108,1,_20112,_20114,2,_20102,[],_20220):-is(
	 * _20106,_20104+_20104,_20220).
	 * rule([i,i,i|_20430],[u|_20430],_20444,_20446,_20448,_20450,_20452,_20454,3,
	 * _20458,_20460,_20590):-smallerorequal(_20448,_20452,is(_20450,_20452-1,is(
	 * _20446,_20444-2,_20590))).
	 * rule([u,u|_20900],_20900,_20908,_20910,_20912,_20914,_20916,i,4,_20922,_20924
	 * ,_21054):-smallerorequal(_20912,_20916,is(_20914,_20916-2,is(_20910,_20908-2,
	 * _21054))).
	 * rule([_21356|_21358],[_21356|_21364],_21378,_21380,_21382,_21384,_21386,
	 * _21388,_21390,_21392,[_21356|_21370],_21524):-is(_21404,_21386+1,rule(_21358,
	 * _21364,_21378,_21380,_21382,_21384,_21404,_21356,_21390,_21392,_21370,_21524)
	 * ).
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

class pred_lower_bound_3 : public Code {

	/*
	 * 
	 * lower_bound(_21896,_21898,1,_21946):-smallerthan(_21896,_21898,_21946).
	 * lower_bound(_22090,_22090,2,_22116):-call(_22116).
	 * lower_bound(_22232,_22234,_22236,_22378):-smallerthan(_22234,_22232,is(_22252
	 * ,_22232-_22234,is(_22264,_22252/\1,or((_22264=:=0->_22236 is
	 * _22252>>1),_22236 is (_22252+1)>>1+1,_22378)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef FAST_MU
