#ifndef UNIFY
#define UNIFY

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class unify {
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
	static Int* negint1;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_12912):-main(_12890,_12912).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_main_1 : public Code {

	/*
	 * 
	 * main(_12976,_13046):-u(_12992,[1,_12986],[_12992],_13004,size(_13004,0,_12976
	 * ,_13046)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_u_4 : public Code {

	/*
	 * 
	 * u(_13230,_13232,_13234,_13236,_13296):-unify(_13230,_13232,_13234,_13246,
	 * _13236,[],_13296).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_dcg_arrow_2 : public Code {

	/*
	 * 
	 * -->(unify(_13474,_13476,_13478,_13480),({\+myin(_13474,_13478)},!,uninit(
	 * _13474,_13476,_13478,_13480)),_13544):-call(_13544).
	 * -->(unify(_13628,_13630,_13632,_13634),({myin(_13628,_13632)},!,init(_13628,
	 * _13630,_13632,_13634,nonlast,_13658)),_13698):-call(_13698).
	 * -->(uninit(_13782,_13784,_13786,_13788),({my_compound(_13784)},!,[move(_13800
	 * ^h,_13782)],{termtag(_13784,_13800)},unify_block(nonlast,_13784,_13832,_13786
	 * ,_13836,_13838),{incl(_13782,_13836,_13788)}),_13908):-call(_13908).
	 * -->(uninit(_13992,_13994,_13996,_13998),({atomic(_13994)},!,[move(tatm^_13994
	 * ,_13992)],{incl(_13992,_13996,_13998)}),_14082):-call(_14082).
	 * -->(uninit(_14166,_14168,_14170,_14172),({var(_14168)},!,unify_var(_14166,
	 * _14168,_14170,_14172)),_14230):-call(_14230).
	 * -->(init(_14314,_14316,_14318,_14320,_14322,_14324),({nonvar(_14316)},!,{
	 * termtag(_14316,_14338)},[deref(_14314),switch(_14338,_14314,[trail(_14314)|
	 * _14362],_14372,fail)],{unify_writemode(_14314,_14316,_14318,_14322,_14324,
	 * _14362,[])},{unify_readmode(_14314,_14316,_14318,_14320,_14324,_14372,[])}),
	 * _14478):-call(_14478).
	 * -->(init(_14562,_14564,_14566,_14568,_14570,_14572),({var(_14564)},!,
	 * unify_var(_14562,_14564,_14566,_14568)),_14630):-call(_14630).
	 * -->(unify_var(_14714,_14716,_14718,_14718),({myin(_14714,_14718),myin(_14716,
	 * _14718)},!,[unify(_14714,_14716,fail)]),_14796):-call(_14796).
	 * -->(unify_var(_14880,_14882,_14884,_14886),({myin(_14880,_14884),\+myin(
	 * _14882,_14884)},!,[move(_14880,_14882)],{incl(_14882,_14884,_14886)}),_14982)
	 * :-call(_14982).
	 * -->(unify_var(_15066,_15068,_15070,_15072),({\+myin(_15066,_15070),myin(
	 * _15068,_15070)},!,[move(_15068,_15066)],{incl(_15066,_15070,_15072)}),_15168)
	 * :-call(_15168).
	 * -->(unify_var(_15252,_15254,_15256,_15258),({\+myin(_15252,_15256),\+myin(
	 * _15254,_15256)},!,[move(tvar^h,_15252),move(tvar^h,_15254),add(1,h),move(
	 * _15254,[h-1])],{incl(_15252,_15256,_15368),incl(_15254,_15368,_15258)}),
	 * _15432):-call(_15432).
	 * -->(unify_readmode(_15516,_15518,_15520,_15522,_15524),({structure(_15518)},!
	 * ,[equal([_15516],tatm^(_15542/_15544),fail)],{functor(_15518,_15542,_15544)},
	 * unify_args(1,_15544,_15518,_15520,_15522,0,_15516,_15524)),_15646):-call(
	 * _15646).
	 * -->(unify_readmode(_15730,_15732,_15734,_15736,_15738),({cons(_15732)},!,
	 * unify_args(1,2,_15732,_15734,_15736,-1,_15730,_15738)),_15804):-call(_15804).
	 * -->(unify_readmode(_15888,_15890,_15892,_15892,_15896),({atomic(_15890)},!,[
	 * equal(_15888,tatm^_15890,fail)]),_15964):-call(_15964).
	 * -->(unify_args(_16048,_16050,_16052,_16054,_16054,_16058,_16060,_16062),({
	 * _16048>_16050},!),_16106):-call(_16106).
	 * -->(unify_args(_16196,_16198,_16200,_16202,_16204,_16206,_16208,[_16190|
	 * _16192]),({_16196=_16198},!,unify_arg(_16196,_16200,_16202,_16204,_16206,
	 * _16208,last,_16192)),_16278):-call(_16278).
	 * -->(unify_args(_16362,_16364,_16366,_16368,_16370,_16372,_16374,_16376),({
	 * _16362<_16364},!,unify_arg(_16362,_16366,_16368,_16396,_16372,_16374,nonlast,
	 * _16404),{_16414 is
	 * _16362+1},unify_args(_16414,_16364,_16366,_16396,_16370,_16372,_16374,_16376)
	 * ),_16490):-call(_16490).
	 * -->(unify_arg(_16574,_16576,_16578,_16580,_16582,_16584,_16586,_16588),([move
	 * ([_16584+_16594],_16606)],{_16594 is
	 * _16574+_16582,incl(_16606,_16578,_16632),arg(_16574,_16576,_16640)},init(
	 * _16606,_16640,_16632,_16580,_16586,_16588)),_16710):-call(_16710).
	 * -->(unify_writemode(_16794,_16796,_16798,_16800,_16802),({my_compound(_16796)
	 * },!,[move(_16814^h,[_16794])],{termtag(_16796,_16814)},unify_block(_16800,
	 * _16796,_16852,_16798,_16856,_16802)),_16910):-call(_16910).
	 * -->(unify_writemode(_16994,_16996,_16998,_17000,_17002),({atomic(_16996)},!,[
	 * move(tatm^_16996,[_16994])]),_17074):-call(_17074).
	 * -->(unify_block(last,_17166,_17168,_17170,_17170,[_17158|_17160]),(!,[add(
	 * _17168,h),jump(_17158)],{size(_17166,0,_17168)}),_17248):-call(_17248).
	 * -->(unify_block(nonlast,_17340,_17342,_17344,_17346,[_17332|_17334]),(!,[add(
	 * _17342,h)],{size(_17340,0,_17342),_17376 is
	 * -_17342},block(_17340,_17376,0,_17344,_17346,_17334)),_17448):-call(_17448).
	 * -->(block(_17532,_17534,_17536,_17538,_17540,_17542),({structure(_17532)},!,[
	 * move(tatm^(_17554/_17556),[h+_17534])],{functor(_17532,_17554,_17556),_17610
	 * is _17534+_17556+1,_17622 is
	 * _17534+1},make_slots(1,_17556,_17532,_17622,_17652,_17538,_17656),block_args(
	 * 1,_17556,_17532,_17610,_17536,_17652,_17656,_17540,_17542)),_17734):-call(
	 * _17734).
	 * -->(block(_17818,_17820,_17822,_17824,_17826,_17828),({cons(_17818)},!,{
	 * _17846 is
	 * _17820+2},make_slots(1,2,_17818,_17820,_17864,_17824,_17868),block_args(1,2,
	 * _17818,_17846,_17822,_17864,_17868,_17826,_17828)),_17940):-call(_17940).
	 * -->(block(_18024,_18026,_18026,_18030,_18030,[]),({atomic(_18024)},!),_18076)
	 * :-call(_18076).
	 * -->(block(_18160,_18162,_18162,_18166,_18166,[]),({var(_18160)},!),_18212):-
	 * call(_18212).
	 * -->(block_args(_18296,_18298,_18300,_18302,_18302,[],_18308,_18308,[]),({
	 * _18296>_18298},!),_18356):-call(_18356).
	 * -->(block_args(_18452,_18454,_18456,_18440,_18460,[_18440],_18464,_18466,[
	 * _18446|_18448]),({_18452=_18454},!,[label(_18446)],{arg(_18452,_18456,_18496)
	 * },block(_18496,_18440,_18460,_18464,_18466,_18448)),_18566):-call(_18566).
	 * -->(block_args(_18656,_18658,_18660,_18650,_18664,[_18650|_18652],_18668,
	 * _18670,_18672),({_18656<_18658},!,{arg(_18656,_18660,_18690)},block(_18690,
	 * _18650,_18702,_18668,_18706,_18708),{_18718 is
	 * _18656+1},block_args(_18718,_18658,_18660,_18702,_18664,_18652,_18706,_18670,
	 * _18672)),_18802):-call(_18802).
	 * -->(make_slots(_18886,_18888,_18890,_18892,[],_18896,_18896),({_18886>_18888}
	 * ,!),_18942):-call(_18942).
	 * -->(make_slots(_19032,_19034,_19036,_19038,[_19026|_19028],_19042,_19044),({
	 * _19032=<_19034},!,{arg(_19032,_19036,_19062)},init_var(_19062,_19038,_19042),
	 * {incl(_19062,_19042,_19082),make_word(_19062,_19026,_19090)},[move(_19090,[h+
	 * _19038])],{_19134 is _19038+1,_19146 is
	 * _19032+1},make_slots(_19146,_19034,_19036,_19134,_19028,_19082,_19044)),
	 * _19244):-call(_19244).
	 * -->(init_var(_19328,_19330,_19332),({var(_19328),\+myin(_19328,_19332)},!,[
	 * move(tvar^(h+_19330),_19328)]),_19420):-call(_19420).
	 * -->(init_var(_19504,_19506,_19508),({var(_19504),myin(_19504,_19508)},!),
	 * _19562):-call(_19562).
	 * -->(init_var(_19646,_19648,_19650),({nonvar(_19646)},!),_19692):-call(_19692)
	 * .
	 * -->(size(_20372),({structure(_20372)},!,{functor(_20372,_20386,_20388)},add(1
	 * ),add(_20388),size_args(1,_20388,_20372)),_20466):-call(_20466).
	 * -->(size(_20550),({cons(_20550)},!,add(2),size_args(1,2,_20550)),_20616):-
	 * call(_20616). -->(size(_20700),({atomic(_20700)},!),_20742):-call(_20742).
	 * -->(size(_20826),({var(_20826)},!),_20868):-call(_20868).
	 * -->(size_args(_20952,_20954,_20956),({_20952>_20954},!),_21000):-call(_21000)
	 * . -->(size_args(_21084,_21086,_21088),({_21084=<_21086},!,{arg(_21084,_21088,
	 * _21106)},size(_21106),{_21124 is
	 * _21084+1},size_args(_21124,_21086,_21088)),_21196):-call(_21196).
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

class pred_make_word_3 : public Code {

	/*
	 * 
	 * make_word(_4028,_4020,_4024^(h+_4020),_4036):-my_compound(_4028,cut(1,termtag
	 * (_4028,_4024,_4036))).
	 * make_word(_4074,_4076,_4074,_4084):-var(_4074,cut(1,_4084)).
	 * make_word(_4118,_4120,tatm^_4118,_4128):-atomic(_4118,cut(1,_4128)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_add_3 : public Code {

	/*
	 * 
	 * add(_4562,_4564,_4566,_4580):-is(_4566,_4564+_4562,_4580).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_myin_2 : public Code {

	/*
	 * 
	 * myin(_4612,[_4608|_4610],_4622):-compare(_4614,_4612,_4608,in_2(_4614,_4612,
	 * _4610,_4622)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_in_2_3 : public Code {

	/*
	 * 
	 * in_2(=,_4658,_4660,_4670):-call(_4670).
	 * in_2(>,_4688,_4690,_4698):-myin(_4688,_4690,_4698).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_incl_3 : public Code {

	/*
	 * 
	 * incl(_4724,_4726,_4728,_4736):-incl_2(_4726,_4724,_4728,_4736).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_incl_2_3 : public Code {

	/*
	 * 
	 * incl_2([],_4766,[_4766],_4778):-call(_4778).
	 * incl_2([_4798|_4800],_4802,_4804,_4814):-compare(_4806,_4802,_4798,incl_3(
	 * _4806,_4802,_4798,_4800,_4804,_4814)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_incl_3_5 : public Code {

	/*
	 * 
	 * incl_3(<,_4858,_4864,_4866,[_4858,_4864|_4866],_4876):-call(_4876).
	 * incl_3(=,_4904,_4900,_4902,[_4900|_4902],_4914):-call(_4914).
	 * incl_3(>,_4942,_4938,_4944,[_4938|_4940],_4952):-incl_2(_4944,_4942,_4940,
	 * _4952).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_my_compound_1 : public Code {

	/*
	 * 
	 * my_compound(_4984,_4996):-nonvar(_4984,not(atomic(_4984),_4996)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_cons_1 : public Code {

	/*
	 * 
	 * cons(_5022,_5036):-nonvar(_5022,unify([_5026|_5028],_5022,_5036)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_structure_1 : public Code {

	/*
	 * 
	 * structure(_5064,_5084):-my_compound(_5064,not(_5064=[_5068|_5070],_5084)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_termtag_2 : public Code {

	/*
	 * 
	 * termtag(_5110,tstr,_5118):-structure(_5110,_5118).
	 * termtag(_5140,tlst,_5148):-cons(_5140,_5148).
	 * termtag(_5170,tatm,_5178):-atomic(_5170,_5178).
	 * termtag(_5200,tvar,_5208):-var(_5200,_5208).
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


#endif	//#ifndef UNIFY
