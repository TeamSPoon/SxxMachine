#ifndef SXX_READ
#define SXX_READ

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class sxx_read {
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
	static Const* s24;
	static Const* s25;
	static Const* s26;
	static Const* s27;
	static Const* s28;
	static Const* s29;
	static Const* s30;
	static Const* s31;
	static Const* s32;
	static Const* s33;
	static Const* s34;
	static Const* s35;
	static Const* s36;
	static Const* s37;
	static Const* s38;
	static Const* s39;
	static Const* s40;
	static Const* s41;
	static Const* s42;
	static Const* s43;
	static Const* s44;
	static Const* s45;
	static Const* s46;
	static Const* s47;
	static Const* s48;
	static Const* s49;
	static Const* s50;
	static Const* s51;
	static Const* s52;
	static Const* s53;
	static Const* s54;
	static Const* s55;
	static Const* s56;
	static Const* s57;
	static Const* s58;
	static Const* s59;
	static Const* s60;
	static Const* s61;
	static Const* s62;
	static Const* s63;
	static Const* s64;
	static Const* s65;
	static Const* s66;
	static Int* posint1;
	static Int* posint200;
	static Int* posint300;
	static Int* posint400;
	static Int* posint500;
	static Int* posint550;
	static Int* posint700;
	static Int* posint900;
	static Int* posint1000;
	static Int* posint1050;
	static Int* posint1100;
	static Int* posint1200;
};

class pred_vread_2 : public Code {

	/*
	 * 
	 * vread(_5384,_5386,_5468):-nexttoken(_5390,readall(_5390,_5396,maketerm(_5396,
	 * _5384,cut(1,collectvars(_5396,[],_5386,_5468))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_1 : public Code {

	/*
	 * 
	 * read(_456,_468):-nexttoken(_458,readall(_458,_460,maketerm(_460,_456,cut(1,
	 * _468)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_collectvars_3 : public Code {

	/*
	 * 
	 * collectvars([],_510,_510,_518):-cut(1,_518).
	 * collectvars([var(_544,_546,_548)|_554],_556,_558,_578):-noteq(_546,'_',
	 * notvmember(_546,_556,cut(1,collectvars(_554,[_544=_546|_556],_558,_578)))).
	 * collectvars([_630|_632],_634,_636,_644):-collectvars(_632,_634,_636,_644).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_notvmember_2 : public Code {

	/*
	 * 
	 * notvmember(_672,[],_680):-cut(1,_680).
	 * notvmember(_706,[_704=_706|_712],_720):-cut(1,fail(_720)).
	 * notvmember(_752,[_748|_750],_760):-notvmember(_752,_750,_760).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_readall_2 : public Code {

	/*
	 * 
	 * readall(end_of_file,_784,_792):-cut(1,halt(_792)).
	 * readall(end_of_clause,_818,_826):-cut(1,unify([],_818,_826)).
	 * readall(_858,[_858|_860],_870):-nexttoken(_862,readall(_862,_860,_870)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_infix_3 : public Code {

	/*
	 * 
	 * infix(1200,xfx,:-,_908):-call(_908). infix(1000,xfy,',',_934):-call(_934).
	 * infix(1100,xfy,;,_960):-call(_960). infix(1050,xfy,->,_986):-call(_986).
	 * infix(700,xfx,=,_1012):-call(_1012). infix(700,xfx,is,_1038):-call(_1038).
	 * infix(700,xfx,=..,_1064):-call(_1064). infix(700,xfx,==,_1090):-call(_1090).
	 * infix(700,xfx,@<,_1116):-call(_1116). infix(700,xfx,@>,_1142):-call(_1142).
	 * infix(700,xfx,@=<,_1168):-call(_1168). infix(700,xfx,@>=,_1188):-call(_1188).
	 * infix(700,xfx,=:=,_1214):-call(_1214). infix(700,xfx,<,_1240):-call(_1240).
	 * infix(700,xfx,=<,_1266):-call(_1266). infix(700,xfx,>,_1292):-call(_1292).
	 * infix(700,xfx,>=,_1318):-call(_1318). infix(550,xfy,:,_1344):-call(_1344).
	 * infix(500,yfx,+,_1370):-call(_1370). infix(500,yfx,-,_1396):-call(_1396).
	 * infix(500,yfx,#,_1422):-call(_1422). infix(400,yfx,*,_1448):-call(_1448).
	 * infix(400,yfx,/,_1474):-call(_1474). infix(400,yfx,//,_1500):-call(_1500).
	 * infix(400,yfx,<<,_1526):-call(_1526). infix(400,yfx,>>,_1552):-call(_1552).
	 * infix(300,xfx,mod,_1578):-call(_1578). infix(200,xfy,^,_1604):-call(_1604).
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

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_prefix_3 : public Code {

	/*
	 * 
	 * prefix(1200,fx,:-,_1630):-call(_1630). prefix(1200,fx,?-,_1656):-call(_1656).
	 * prefix(500,fx,+,_1682):-call(_1682). prefix(500,fx,-,_1708):-call(_1708).
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

class pred_maketerm_3 : public Code {

	/*
	 * 
	 * maketerm([var(_1728,_1730,_1732)],_1740,_1742,_1750):-unify(_1728,_1740,cut(1
	 * ,_1750)).
	 * maketerm([int(_1784)],_1792,_1794,_1802):-cut(1,unify(_1784,_1792,_1802)).
	 * maketerm([const(_1836)],_1844,_1846,_1854):-cut(1,unify(_1836,_1844,_1854)).
	 * maketerm([const(_1888),const('(')|_1904],_1906,_1908,_1918):-getargs(_1904,
	 * _1910,univ(_1906,_1888,_1910,_1918)).
	 * maketerm(_1954,_1956,_1958,_2002):-ap(_1970,[const(_1962)|_1968],_1954,infix(
	 * _1972,_1974,_1962,smallerorequal(_1972,_1958,newprec(_1974,_1972,_1976,_1978,
	 * maketerm(_1970,_1980,_1976,maketerm(_1968,_1982,_1978,univ(_1956,_1962,[_1980
	 * ,_1982],_2002))))))).
	 * maketerm([const(_2092)|_2098],_2100,_2102,_2124):-prefix(_2104,_2106,_2092,
	 * smallerorequal(_2104,_2102,newprec(_2106,_2104,_2108,maketerm(_2098,_2110,
	 * _2108,univ(_2100,_2092,[_2110],_2124))))).
	 * maketerm([const('[')|_2198],[_2202|_2204],_2206,_2236):-ap(_2218,[const(',')|
	 * _2216],_2198,maketerm(_2218,_2202,900,maketerm([const('[')|_2216],_2204,900,
	 * _2236))).
	 * maketerm([const('[')|_2292],[_2296|_2298],_2300,_2332):-ap(_2312,[const('|')|
	 * _2310],_2292,ap(_2324,[const(']')],_2310,maketerm(_2312,_2296,900,maketerm(
	 * _2324,_2298,900,_2332)))).
	 * maketerm([const('(')|_2398],_2400,_2402,_2422):-ap(_2414,[const(')')],_2398,
	 * cut(1,maketerm(_2414,_2400,_2422))).
	 * maketerm([const('[')|_2472],[_2476],_2480,_2500):-ap(_2492,[const(']')],_2472
	 * ,maketerm(_2492,_2476,900,_2500)).
	 * maketerm([const('['),const(']')],[],_2558,_2568):-call(_2568).
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

	static* std::function<Function*(PrologMachine*);
};

class pred_newprec_4 : public Code {

	/*
	 * 
	 * newprec(xfx,_2586,_2588,_2590,_2610):-cut(1,is(_2588,_2586-1,is(_2590,_2586-1
	 * ,_2610))).
	 * newprec(xfy,_2652,_2654,_2656,_2670):-cut(1,is(_2654,_2652-1,unify(_2652,
	 * _2656,_2670))).
	 * newprec(yfx,_2712,_2714,_2716,_2730):-cut(1,is(_2716,_2712-1,unify(_2712,
	 * _2714,_2730))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_newprec_3 : public Code {

	/*
	 * 
	 * newprec(fx,_2772,_2774,_2788):-cut(1,is(_2774,_2772-1,_2788)).
	 * newprec(fy,_2820,_2820,_2830):-call(_2830).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_getargs_2 : public Code {

	/*
	 * 
	 * getargs(_2848,_2850,_2878):-ap(_2862,[const(')')],_2848,maketerm(_2862,_2864,
	 * 900,unify([_2864],_2850,_2878))).
	 * getargs(_2922,_2924,_2952):-ap(_2936,[const(',')|_2934],_2922,maketerm(_2936,
	 * _2938,900,unify([_2938|_2944],_2924,getargs(_2934,_2944,_2952)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_maketerm_2 : public Code {

	/*
	 * 
	 * maketerm(_3004,_3006,_3014):-maketerm(_3004,_3006,1200,_3014).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ap_3 : public Code {

	/*
	 * 
	 * ap([],_3040,_3040,_3050):-call(_3050).
	 * ap([_3070|_3072],_3080,[_3070|_3078],_3088):-ap(_3072,_3080,_3078,_3088).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef SXX_READ
