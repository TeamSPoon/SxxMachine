#ifndef SXX_READ
#define SXX_READ

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class sxx_read {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s6;
	static Const* const  s7;
	static Const* const  s8;
	static Const* const  s9;
	static Const* const  s10;
	static Const* const  s11;
	static Const* const  s12;
	static Const* const  s13;
	static Const* const  s14;
	static Const* const  s15;
	static Const* const  s16;
	static Const* const  s17;
	static Const* const  s18;
	static Const* const  s19;
	static Const* const  s20;
	static Const* const  s21;
	static Const* const  s22;
	static Const* const  s23;
	static Const* const  s24;
	static Const* const  s25;
	static Const* const  s26;
	static Const* const  s27;
	static Const* const  s28;
	static Const* const  s29;
	static Const* const  s30;
	static Const* const  s31;
	static Const* const  s32;
	static Const* const  s__;
	static Const* const  s_ap;
	static Const* const  s_call;
	static Const* const  s_collectvars;
	static Const* const  s_const;
	static Const* const  s_end_of_clause;
	static Const* const  s_end_of_file;
	static Const* const  s_fail;
	static Const* const  s_fx;
	static Const* const  s_fy;
	static Const* const  s_getargs;
	static Const* const  s_halt;
	static Const* const  s_infix;
	static Const* const  s_int;
	static Const* const  s_is;
	static Const* const  s_maketerm;
	static Const* const  s_mod;
	static Const* const  s_newprec;
	static Const* const  s_nexttoken;
	static Const* const  s_noteq;
	static Const* const  s_notvmember;
	static Const* const  s_prefix;
	static Const* const  s_read;
	static Const* const  s_readall;
	static Const* const  s_real;
	static Const* const  s_smallerorequal;
	static Const* const  s_string;
	static Const* const  s_unify;
	static Const* const  s_univ;
	static Const* const  s_var;
	static Const* const  s_vread;
	static Const* const  s_xfx;
	static Const* const  s_xfy;
	static Const* const  s_yfx;
	static Const* const  s68;
	static Int* const  posint1;
	static Int* const  posint200;
	static Int* const  posint300;
	static Int* const  posint400;
	static Int* const  posint500;
	static Int* const  posint550;
	static Int* const  posint700;
	static Int* const  posint900;
	static Int* const  posint1000;
	static Int* const  posint1050;
	static Int* const  posint1100;
	static Int* const  posint1200;
	static Operation* const  reg_vread_2;
	static Operation* const  reg_read_1;
	static Operation* const  reg_collectvars_3;
	static Operation* const  reg_notvmember_2;
	static Operation* const  reg_readall_2;
	static Operation* const  reg_infix_3;
	static Operation* const  reg_prefix_3;
	static Operation* const  reg_maketerm_3;
	static Operation* const  reg_newprec_4;
	static Operation* const  reg_newprec_3;
	static Operation* const  reg_getargs_2;
	static Operation* const  reg_maketerm_2;
	static Operation* const  reg_ap_3;
public:
	class pred_vread_2 : public Code {

	/*
	
	vread(_400,_402,_414):-nexttoken(_404,readall(_404,_406,maketerm(_406,_400,cut(1,collectvars(_406,[],_402,_414))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_vread_2__1(Prolog* mach);
	};


public:
	class pred_read_1 : public Code {

	/*
	
	read(_468,_480):-nexttoken(_470,readall(_470,_472,maketerm(_472,_468,cut(1,_480)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_1__1(Prolog* mach);
	};


public:
	class pred_collectvars_3 : public Code {

	/*
	
	collectvars([],_522,_522,_530):-cut(1,_530).
	collectvars([var(_556,_558,_560)|_566],_568,_570,_590):-noteq(_558,'_',notvmember(_558,_568,cut(1,collectvars(_566,[_556=_558|_568],_570,_590)))).
	collectvars([_642|_644],_646,_648,_656):-collectvars(_644,_646,_648,_656).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_collectvars_3__1(Prolog* mach);
	static Operation* exec_pred_collectvars_3__2(Prolog* mach);
	static Operation* exec_pred_collectvars_3__3(Prolog* mach);
	};


public:
	class pred_notvmember_2 : public Code {

	/*
	
	notvmember(_678,[],_686):-cut(1,_686).
	notvmember(_712,[_710=_712|_718],_726):-cut(1,fail(_726)).
	notvmember(_758,[_754|_756],_766):-notvmember(_758,_756,_766).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_notvmember_2__1(Prolog* mach);
	static Operation* exec_pred_notvmember_2__2(Prolog* mach);
	static Operation* exec_pred_notvmember_2__3(Prolog* mach);
	};


public:
	class pred_readall_2 : public Code {

	/*
	
	readall(end_of_file,_790,_798):-cut(1,halt(_798)).
	readall(end_of_clause,_824,_832):-cut(1,unify([],_824,_832)).
	readall(_864,[_864|_866],_876):-nexttoken(_868,readall(_868,_866,_876)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_readall_2__1(Prolog* mach);
	static Operation* exec_pred_readall_2__2(Prolog* mach);
	static Operation* exec_pred_readall_2__3(Prolog* mach);
	};


public:
	class pred_infix_3 : public Code {

	/*
	
	infix(1200,xfx,:-,_914):-call(_914).
	infix(1000,xfy,',',_940):-call(_940).
	infix(1100,xfy,;,_966):-call(_966).
	infix(1050,xfy,->,_992):-call(_992).
	infix(700,xfx,=,_1018):-call(_1018).
	infix(700,xfx,is,_1044):-call(_1044).
	infix(700,xfx,=..,_1070):-call(_1070).
	infix(700,xfx,==,_1096):-call(_1096).
	infix(700,xfx,@<,_1122):-call(_1122).
	infix(700,xfx,@>,_1148):-call(_1148).
	infix(700,xfx,@=<,_1174):-call(_1174).
	infix(700,xfx,@>=,_1200):-call(_1200).
	infix(700,xfx,=:=,_1226):-call(_1226).
	infix(700,xfx,<,_1252):-call(_1252).
	infix(700,xfx,=<,_1278):-call(_1278).
	infix(700,xfx,>,_1304):-call(_1304).
	infix(700,xfx,>=,_1330):-call(_1330).
	infix(550,xfy,:,_1356):-call(_1356).
	infix(500,yfx,+,_1382):-call(_1382).
	infix(500,yfx,-,_1408):-call(_1408).
	infix(500,yfx,#,_1434):-call(_1434).
	infix(400,yfx,*,_1460):-call(_1460).
	infix(400,yfx,/,_1486):-call(_1486).
	infix(400,yfx,//,_1512):-call(_1512).
	infix(400,yfx,<<,_1538):-call(_1538).
	infix(400,yfx,>>,_1564):-call(_1564).
	infix(300,xfx,mod,_1590):-call(_1590).
	infix(200,xfy,^,_1616):-call(_1616).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_infix_3__1(Prolog* mach);
	static Operation* exec_pred_infix_3__2(Prolog* mach);
	static Operation* exec_pred_infix_3__3(Prolog* mach);
	static Operation* exec_pred_infix_3__4(Prolog* mach);
	static Operation* exec_pred_infix_3__5(Prolog* mach);
	static Operation* exec_pred_infix_3__6(Prolog* mach);
	static Operation* exec_pred_infix_3__7(Prolog* mach);
	static Operation* exec_pred_infix_3__8(Prolog* mach);
	static Operation* exec_pred_infix_3__9(Prolog* mach);
	static Operation* exec_pred_infix_3__10(Prolog* mach);
	static Operation* exec_pred_infix_3__11(Prolog* mach);
	static Operation* exec_pred_infix_3__12(Prolog* mach);
	static Operation* exec_pred_infix_3__13(Prolog* mach);
	static Operation* exec_pred_infix_3__14(Prolog* mach);
	static Operation* exec_pred_infix_3__15(Prolog* mach);
	static Operation* exec_pred_infix_3__16(Prolog* mach);
	static Operation* exec_pred_infix_3__17(Prolog* mach);
	static Operation* exec_pred_infix_3__18(Prolog* mach);
	static Operation* exec_pred_infix_3__19(Prolog* mach);
	static Operation* exec_pred_infix_3__20(Prolog* mach);
	static Operation* exec_pred_infix_3__21(Prolog* mach);
	static Operation* exec_pred_infix_3__22(Prolog* mach);
	static Operation* exec_pred_infix_3__23(Prolog* mach);
	static Operation* exec_pred_infix_3__24(Prolog* mach);
	static Operation* exec_pred_infix_3__25(Prolog* mach);
	static Operation* exec_pred_infix_3__26(Prolog* mach);
	static Operation* exec_pred_infix_3__27(Prolog* mach);
	static Operation* exec_pred_infix_3__28(Prolog* mach);
	};


public:
	class pred_prefix_3 : public Code {

	/*
	
	prefix(1200,fx,:-,_1642):-call(_1642).
	prefix(1200,fx,?-,_1668):-call(_1668).
	prefix(500,fx,+,_1694):-call(_1694).
	prefix(500,fx,-,_1720):-call(_1720).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_prefix_3__1(Prolog* mach);
	static Operation* exec_pred_prefix_3__2(Prolog* mach);
	static Operation* exec_pred_prefix_3__3(Prolog* mach);
	static Operation* exec_pred_prefix_3__4(Prolog* mach);
	};


public:
	class pred_maketerm_3 : public Code {

	/*
	
	maketerm([var(_1740,_1742,_1744)],_1752,_1754,_1762):-unify(_1740,_1752,cut(1,_1762)).
	maketerm([int(_1796)],_1804,_1806,_1814):-cut(1,unify(_1796,_1804,_1814)).
	maketerm([real(_1848)],_1856,_1858,_1866):-cut(1,unify(_1848,_1856,_1866)).
	maketerm([const(_1900)],_1908,_1910,_1918):-cut(1,unify(_1900,_1908,_1918)).
	maketerm([string(_1952)],_1960,_1962,_1970):-cut(1,unify(_1952,_1960,_1970)).
	maketerm([const(_2004),const('(')|_2020],_2022,_2024,_2034):-getargs(_2020,_2026,univ(_2022,_2004,_2026,_2034)).
	maketerm(_2070,_2072,_2074,_2118):-ap(_2086,[const(_2078)|_2084],_2070,infix(_2088,_2090,_2078,smallerorequal(_2088,_2074,newprec(_2090,_2088,_2092,_2094,maketerm(_2086,_2096,_2092,maketerm(_2084,_2098,_2094,univ(_2072,_2078,[_2096,_2098],_2118))))))).
	maketerm([const(_2208)|_2214],_2216,_2218,_2240):-prefix(_2220,_2222,_2208,smallerorequal(_2220,_2218,newprec(_2222,_2220,_2224,maketerm(_2214,_2226,_2224,univ(_2216,_2208,[_2226],_2240))))).
	maketerm([const('[')|_2314],[_2318|_2320],_2322,_2352):-ap(_2334,[const(',')|_2332],_2314,maketerm(_2334,_2318,900,maketerm([const('[')|_2332],_2320,900,_2352))).
	maketerm([const('[')|_2408],[_2412|_2414],_2416,_2448):-ap(_2428,[const('|')|_2426],_2408,ap(_2440,[const(']')],_2426,maketerm(_2428,_2412,900,maketerm(_2440,_2414,900,_2448)))).
	maketerm([const('(')|_2514],_2516,_2518,_2538):-ap(_2530,[const(')')],_2514,cut(1,maketerm(_2530,_2516,_2538))).
	maketerm([const('[')|_2588],[_2592],_2596,_2616):-ap(_2608,[const(']')],_2588,maketerm(_2608,_2592,900,_2616)).
	maketerm([const('['),const(']')],[],_2674,_2684):-call(_2684).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_maketerm_3__1(Prolog* mach);
	static Operation* exec_pred_maketerm_3__2(Prolog* mach);
	static Operation* exec_pred_maketerm_3__3(Prolog* mach);
	static Operation* exec_pred_maketerm_3__4(Prolog* mach);
	static Operation* exec_pred_maketerm_3__5(Prolog* mach);
	static Operation* exec_pred_maketerm_3__6(Prolog* mach);
	static Operation* exec_pred_maketerm_3__7(Prolog* mach);
	static Operation* exec_pred_maketerm_3__8(Prolog* mach);
	static Operation* exec_pred_maketerm_3__9(Prolog* mach);
	static Operation* exec_pred_maketerm_3__10(Prolog* mach);
	static Operation* exec_pred_maketerm_3__11(Prolog* mach);
	static Operation* exec_pred_maketerm_3__12(Prolog* mach);
	static Operation* exec_pred_maketerm_3__13(Prolog* mach);
	};


public:
	class pred_newprec_4 : public Code {

	/*
	
	newprec(xfx,_2702,_2704,_2706,_2726):-cut(1,is(_2704,_2702-1,is(_2706,_2702-1,_2726))).
	newprec(xfy,_2768,_2770,_2772,_2786):-cut(1,is(_2770,_2768-1,unify(_2768,_2772,_2786))).
	newprec(yfx,_2828,_2830,_2832,_2846):-cut(1,is(_2832,_2828-1,unify(_2828,_2830,_2846))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_newprec_4__1(Prolog* mach);
	static Operation* exec_pred_newprec_4__2(Prolog* mach);
	static Operation* exec_pred_newprec_4__3(Prolog* mach);
	};


public:
	class pred_newprec_3 : public Code {

	/*
	
	newprec(fx,_2888,_2890,_2904):-cut(1,is(_2890,_2888-1,_2904)).
	newprec(fy,_2936,_2936,_2946):-call(_2946).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_newprec_3__1(Prolog* mach);
	static Operation* exec_pred_newprec_3__2(Prolog* mach);
	};


public:
	class pred_getargs_2 : public Code {

	/*
	
	getargs(_2964,_2966,_2994):-ap(_2978,[const(')')],_2964,maketerm(_2978,_2980,900,unify([_2980],_2966,_2994))).
	getargs(_3038,_3040,_3068):-ap(_3052,[const(',')|_3050],_3038,maketerm(_3052,_3054,900,unify([_3054|_3060],_3040,getargs(_3050,_3060,_3068)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_getargs_2__1(Prolog* mach);
	static Operation* exec_pred_getargs_2__2(Prolog* mach);
	};


public:
	class pred_maketerm_2 : public Code {

	/*
	
	maketerm(_3120,_3122,_3130):-maketerm(_3120,_3122,1200,_3130).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_maketerm_2__1(Prolog* mach);
	};


public:
	class pred_ap_3 : public Code {

	/*
	
	ap([],_3156,_3156,_3166):-call(_3166).
	ap([_3186|_3188],_3196,[_3186|_3194],_3204):-ap(_3188,_3196,_3194,_3204).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ap_3__1(Prolog* mach);
	static Operation* exec_pred_ap_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef SXX_READ
