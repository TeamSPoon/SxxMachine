#ifndef SXX_LIBRARY
#define SXX_LIBRARY

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class sxx_library {
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
	static Const* s67;
	static Const* s68;
	static Const* s69;
	static Const* s70;
	static Const* s71;
	static Const* s72;
	static Const* s73;
	static Const* s74;
	static Const* s75;
	static Const* s76;
	static Const* s77;
	static Const* s78;
	static Const* s79;
	static Const* s80;
	static Const* s81;
	static Const* s82;
	static Const* s83;
	static Int* posint0;
	static Int* posint1;
	static Int* posint10;
};

class pred_toplevel_0 : public Code {

	/*
	 * 
	 * toplevel(_394):-top(fail(_394)). toplevel(_420):-toplevel(_420).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_446):-write('?-
	 * ',vread(_436,_438,exec(_436,writevars(_438,write('Yes',nl(notmore(cut(1,fail(
	 * _446))))))))). top(_514):-top(_514).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_notmore_0 : public Code {

	/*
	 * 
	 * notmore(_538):-get0(_530,noteq(_530,10,cut(1,untilend(_530,fail(_538))))).
	 * notmore(_588):-call(_588).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_noteq_2 : public Code {

	/*
	 * 
	 * noteq(_600,_600,_608):-cut(1,fail(_608)). noteq(_634,_636,_646):-call(_646).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_untilend_1 : public Code {

	/*
	 * 
	 * untilend(10,_668):-cut(1,_668).
	 * untilend(_688,_698):-get0(_690,untilend(_690,_698)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_writevars_1 : public Code {

	/*
	 * 
	 * writevars([],_732):-call(_732).
	 * writevars([_748=_750|_756],_764):-write(_750,write(' =
	 * ',write(_748,nl(fail(_764))))).
	 * writevars([_806|_808],_816):-writevars(_808,_816).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nrev_2 : public Code {

	/*
	 * 
	 * nrev([],[],_836):-cut(1,_836).
	 * nrev([_860|_862],_864,_880):-nrev(_862,_866,append(_866,[_860],_864,_880)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_append_3 : public Code {

	/*
	 * 
	 * append([],_914,_914,_924):-call(_924).
	 * append([_944|_946],_954,[_944|_952],_962):-append(_946,_954,_952,_962).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_max_3 : public Code {

	/*
	 * 
	 * max(_990,_992,_992,_1000):-smallerthan(_990,_992,_1000).
	 * max(_1026,_1028,_1026,_1036):-smallerthan(_1028,_1026,_1036).
	 * max(_1062,_1062,_1062,_1072):-call(_1072).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sort_2 : public Code {

	/*
	 * 
	 * sort([],[],_1096):-cut(1,_1096).
	 * sort([_1120|_1122],_1124,_1146):-split(_1120,_1122,_1126,_1128,sort(_1126,
	 * _1130,sort(_1128,_1132,append(_1130,[_1120|_1132],_1124,_1146)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_split_4 : public Code {

	/*
	 * 
	 * split(_1200,[],[],[],_1208):-cut(1,_1208).
	 * split(_1246,[_1236|_1238],[_1236|_1244],_1248,_1256):-smallerthan(_1236,_1246
	 * ,cut(1,split(_1246,_1238,_1244,_1248,_1256))).
	 * split(_1314,[_1304|_1306],_1316,[_1304|_1312],_1324):-split(_1314,_1306,_1316
	 * ,_1312,_1324).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_time_1 : public Code {

	/*
	 * 
	 * time(_1356,_1376):-cputime(_1358,exec(_1356,cputime(_1360,is(_1368,_1360-
	 * _1358,write(_1368,nl(_1376)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_exec_1 : public Code {

	/*
	 * 
	 * exec(_1426,_1434):-var(_1426,cut(1,fail(_1434))).
	 * exec((_1466,_1468),_1476):-cut(1,exec(_1466,exec(_1468,_1476))).
	 * exec((_1510->_1512),_1526):-cut(1,execdisj((_1510->_1512),true,_1526)).
	 * exec((_1556;_1558),_1566):-cut(1,execdisj(_1556,_1558,_1566)).
	 * exec(_1594,_1604):-specialgoal(_1594,_1596,cut(1,exec(_1596,_1604))).
	 * exec(_1638,_1646):-call(_1638,_1646).
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

class pred_execdisj_2 : public Code {

	/*
	 * 
	 * execdisj((_1668->_1670),_1672,_1680):-exec(_1668,cut(1,exec(_1670,_1680))).
	 * execdisj((_1716->_1718),_1720,_1728):-cut(1,exec(_1720,_1728)).
	 * execdisj(_1756,_1758,_1766):-exec(_1756,_1766).
	 * execdisj(_1788,_1790,_1798):-exec(_1790,_1798).
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

class pred_loop_1 : public Code {

	/*
	 * 
	 * loop(0,_1826):-cut(1,_1826).
	 * loop(_1846,_1862):-is(_1854,_1846-1,loop(_1854,_1862)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_or_2 : public Code {

	/*
	 * 
	 * or(_1890,_1892,_1900):-exec(_1890,_1900).
	 * or(_1922,_1924,_1932):-exec(_1924,_1932).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_findall_3 : public Code {

	/*
	 * 
	 * findall(_1954,_1956,_1958,_1968):-initfindall(_1960,findall2(_1954,_1956,
	 * _1958,_1960,_1968)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_findall2_4 : public Code {

	/*
	 * 
	 * findall2(_2004,_2006,_2008,_2010,_2018):-exec(_2006,addfindall(_2004,_2010,
	 * fail(_2018))).
	 * findall2(_2056,_2058,_2060,_2062,_2070):-retrievefindall(_2060,_2062,_2070).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_copy_term_2 : public Code {

	/*
	 * 
	 * copy_term(_2098,_2100,_2120):-findall(_2104,_2104=_2098,[_2100],_2120).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_var_1 : public Code {

	/*
	 * 
	 * var(_2146,_2154):-type_of(_2146,var,_2154).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_atomic_1 : public Code {

	/*
	 * 
	 * atomic(_2176,_2186):-type_of(_2176,_2178,atomic2(_2178,_2186)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_atomic2_1 : public Code {

	/*
	 * 
	 * atomic2(atom,_2220):-cut(1,_2220). atomic2(integer,_2248):-call(_2248).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_atom_1 : public Code {

	/*
	 * 
	 * atom(_2262,_2270):-type_of(_2262,atom,_2270).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_integer_1 : public Code {

	/*
	 * 
	 * integer(_2292,_2300):-type_of(_2292,integer,_2300).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_assumeduring_2 : public Code {

	/*
	 * 
	 * assumeduring(_2322,_2324,_2338):-assume(_2324-_2330,exec(_2322,unify(1,_2330,
	 * _2338))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_assumed_1 : public Code {

	/*
	 * 
	 * assumed(_2374,_2384):-allassumed(_2376,m1(_2374,_2376,_2384)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_m1_2 : public Code {

	/*
	 * 
	 * m1(_2414,[_2414-_2416|_2422],_2430):-var(_2416,_2430).
	 * m1(_2458,[_2454|_2456],_2466):-m1(_2458,_2456,_2466).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_statistics_2 : public Code {

	/*
	 * 
	 * statistics(runtime,[_2492,_2498],_2508):-cputime(_2492,_2508).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_specialgoal_2 : public Code {

	/*
	 * 
	 * specialgoal(_2532<_2534,smallerthan(_2532,_2534),_2548):-cut(1,_2548).
	 * specialgoal(_2572=<_2574,smallerorequal(_2572,_2574),_2588):-cut(1,_2588).
	 * specialgoal(_2612>_2614,smallerthan(_2614,_2612),_2628):-cut(1,_2628).
	 * specialgoal(_2652>=_2654,smallerorequal(_2654,_2652),_2668):-cut(1,_2668).
	 * specialgoal(_2692=:=_2694,arithequal(_2694,_2692),_2708):-cut(1,_2708).
	 * specialgoal(_2732=_2734,unify(_2734,_2732),_2748):-cut(1,_2748).
	 * specialgoal((_2772;_2774),or(_2772,_2774),_2788):-cut(1,_2788).
	 * specialgoal(_2812@<_2814,termsmallerthan(_2812,_2814),_2828):-cut(1,_2828).
	 * specialgoal(_2852@>_2854,termgreaterthan(_2852,_2854),_2868):-cut(1,_2868).
	 * specialgoal(_2892@=<_2894,termsmallerequal(_2892,_2894),_2908):-cut(1,_2908).
	 * specialgoal(_2932@>=_2934,termgreaterequal(_2932,_2934),_2948):-cut(1,_2948).
	 * specialgoal(_2972==_2974,termequal(_2972,_2974),_2988):-cut(1,_2988).
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
};

class pred_termsmallerthan_2 : public Code {

	/*
	 * 
	 * termsmallerthan(_3010,_3012,_3020):-compare(<,_3010,_3012,_3020).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termgreaterthan_2 : public Code {

	/*
	 * 
	 * termgreaterthan(_3046,_3048,_3056):-compare(>,_3046,_3048,_3056).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termsmallerequal_2 : public Code {

	/*
	 * 
	 * termsmallerequal(_3082,_3084,_3094):-compare(_3086,_3082,_3084,smeq(_3086,
	 * _3094)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_smeq_1 : public Code {

	/*
	 * 
	 * smeq(<,_3132):-cut(1,_3132). smeq(=,_3160):-call(_3160).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termgreaterequal_2 : public Code {

	/*
	 * 
	 * termgreaterequal(_3174,_3176,_3186):-compare(_3178,_3174,_3176,smgr(_3178,
	 * _3186)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_smgr_1 : public Code {

	/*
	 * 
	 * smgr(>,_3224):-cut(1,_3224). smgr(=,_3252):-call(_3252).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termequal_2 : public Code {

	/*
	 * 
	 * termequal(_3266,_3268,_3276):-compare(=,_3266,_3268,_3276).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_not_1 : public Code {

	/*
	 * 
	 * not(_3302,_3310):-exec(_3302,cut(1,fail(_3310))).
	 * not(_3340,_3350):-call(_3350).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_freeze_2 : public Code {

	/*
	 * 
	 * freeze(_3364,_3366,_3374):-var(_3364,cut(1,freeze_internal(_3364,_3366,_3374)
	 * )). freeze(_3410,_3412,_3420):-exec(_3412,_3420).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_execpendinggoals_1 : public Code {

	/*
	 * 
	 * execpendinggoals([],_3448):-execcontinuation(_3448).
	 * execpendinggoals([_3468|_3470],_3478):-exec(_3468,execpendinggoals(_3470,
	 * _3478)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef SXX_LIBRARY
