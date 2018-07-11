#ifndef UNIFY
#define UNIFY

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class unify {
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
	static Const* const  s_add;
	static Const* const  s_arg;
	static Const* const  s_atomic;
	static Const* const  s_block;
	static Const* const  s_block_args;
	static Const* const  s_call;
	static Const* const  s_compare;
	static Const* const  s_cons;
	static Const* const  s_deref;
	static Const* const  s_equal;
	static Const* const  s_fail;
	static Const* const  s_functor;
	static Const* const  s_h;
	static Const* const  s_in_2;
	static Const* const  s_incl;
	static Const* const  s_incl_2;
	static Const* const  s_incl_3;
	static Const* const  s_init;
	static Const* const  s_init_var;
	static Const* const  s_is;
	static Const* const  s_jump;
	static Const* const  s_label;
	static Const* const  s_last;
	static Const* const  s_main;
	static Const* const  s_make_slots;
	static Const* const  s_make_word;
	static Const* const  s_move;
	static Const* const  s_my_compound;
	static Const* const  s_myin;
	static Const* const  s_nonlast;
	static Const* const  s_nonvar;
	static Const* const  s_not;
	static Const* const  s_size;
	static Const* const  s_size_args;
	static Const* const  s_structure;
	static Const* const  s_switch;
	static Const* const  s_tatm;
	static Const* const  s_termtag;
	static Const* const  s_tlst;
	static Const* const  s_top;
	static Const* const  s_trail;
	static Const* const  s_tstr;
	static Const* const  s_tvar;
	static Const* const  s_u;
	static Const* const  s_unify;
	static Const* const  s_unify_arg;
	static Const* const  s_unify_args;
	static Const* const  s_unify_block;
	static Const* const  s_unify_readmode;
	static Const* const  s_unify_var;
	static Const* const  s_unify_writemode;
	static Const* const  s_uninit;
	static Const* const  s_var;
	static Const* const  s69;
	static Int* const  negint1;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Operation* const  reg_top_0;
	static Operation* const  reg_main_1;
	static Operation* const  reg_u_4;
	static Operation* const  reg_$002D$002D$003E_2;
	static Operation* const  reg_make_word_3;
	static Operation* const  reg_add_3;
	static Operation* const  reg_myin_2;
	static Operation* const  reg_in_2_3;
	static Operation* const  reg_incl_3;
	static Operation* const  reg_incl_2_3;
	static Operation* const  reg_incl_3_5;
	static Operation* const  reg_my_compound_1;
	static Operation* const  reg_cons_1;
	static Operation* const  reg_structure_1;
	static Operation* const  reg_termtag_2;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_14876):-main(_14854,_14876).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_main_1 : public Code {

	/*
	
	main(_14940,_15010):-u(_14956,[1,_14950],[_14956],_14968,size(_14968,0,_14940,_15010)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_main_1__1(Prolog* mach);
	};


public:
	class pred_u_4 : public Code {

	/*
	
	u(_15194,_15196,_15198,_15200,_15260):-unify(_15194,_15196,_15198,_15210,_15200,[],_15260).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_u_4__1(Prolog* mach);
	};


public:
	class pred_$002D$002D$003E_2 : public Code {

	/*
	
	-->(unify(_15438,_15440,_15442,_15444),({\+myin(_15438,_15442)},!,uninit(_15438,_15440,_15442,_15444)),_15508):-call(_15508).
	-->(unify(_15592,_15594,_15596,_15598),({myin(_15592,_15596)},!,init(_15592,_15594,_15596,_15598,nonlast,_15622)),_15662):-call(_15662).
	-->(uninit(_15746,_15748,_15750,_15752),({my_compound(_15748)},!,[move(_15764^h,_15746)],{termtag(_15748,_15764)},unify_block(nonlast,_15748,_15796,_15750,_15800,_15802),{incl(_15746,_15800,_15752)}),_15872):-call(_15872).
	-->(uninit(_15956,_15958,_15960,_15962),({atomic(_15958)},!,[move(tatm^_15958,_15956)],{incl(_15956,_15960,_15962)}),_16046):-call(_16046).
	-->(uninit(_16130,_16132,_16134,_16136),({var(_16132)},!,unify_var(_16130,_16132,_16134,_16136)),_16194):-call(_16194).
	-->(init(_16278,_16280,_16282,_16284,_16286,_16288),({nonvar(_16280)},!,{termtag(_16280,_16302)},[deref(_16278),switch(_16302,_16278,[trail(_16278)|_16326],_16336,fail)],{unify_writemode(_16278,_16280,_16282,_16286,_16288,_16326,[])},{unify_readmode(_16278,_16280,_16282,_16284,_16288,_16336,[])}),_16442):-call(_16442).
	-->(init(_16526,_16528,_16530,_16532,_16534,_16536),({var(_16528)},!,unify_var(_16526,_16528,_16530,_16532)),_16594):-call(_16594).
	-->(unify_var(_16678,_16680,_16682,_16682),({myin(_16678,_16682),myin(_16680,_16682)},!,[unify(_16678,_16680,fail)]),_16760):-call(_16760).
	-->(unify_var(_16844,_16846,_16848,_16850),({myin(_16844,_16848),\+myin(_16846,_16848)},!,[move(_16844,_16846)],{incl(_16846,_16848,_16850)}),_16946):-call(_16946).
	-->(unify_var(_17030,_17032,_17034,_17036),({\+myin(_17030,_17034),myin(_17032,_17034)},!,[move(_17032,_17030)],{incl(_17030,_17034,_17036)}),_17132):-call(_17132).
	-->(unify_var(_17216,_17218,_17220,_17222),({\+myin(_17216,_17220),\+myin(_17218,_17220)},!,[move(tvar^h,_17216),move(tvar^h,_17218),add(1,h),move(_17218,[h-1])],{incl(_17216,_17220,_17332),incl(_17218,_17332,_17222)}),_17396):-call(_17396).
	-->(unify_readmode(_17480,_17482,_17484,_17486,_17488),({structure(_17482)},!,[equal([_17480],tatm^(_17506/_17508),fail)],{functor(_17482,_17506,_17508)},unify_args(1,_17508,_17482,_17484,_17486,0,_17480,_17488)),_17610):-call(_17610).
	-->(unify_readmode(_17694,_17696,_17698,_17700,_17702),({cons(_17696)},!,unify_args(1,2,_17696,_17698,_17700,-1,_17694,_17702)),_17768):-call(_17768).
	-->(unify_readmode(_17852,_17854,_17856,_17856,_17860),({atomic(_17854)},!,[equal(_17852,tatm^_17854,fail)]),_17928):-call(_17928).
	-->(unify_args(_18012,_18014,_18016,_18018,_18018,_18022,_18024,_18026),({_18012>_18014},!),_18070):-call(_18070).
	-->(unify_args(_18160,_18162,_18164,_18166,_18168,_18170,_18172,[_18154|_18156]),({_18160=_18162},!,unify_arg(_18160,_18164,_18166,_18168,_18170,_18172,last,_18156)),_18242):-call(_18242).
	-->(unify_args(_18326,_18328,_18330,_18332,_18334,_18336,_18338,_18340),({_18326<_18328},!,unify_arg(_18326,_18330,_18332,_18360,_18336,_18338,nonlast,_18368),{_18378 is _18326+1},unify_args(_18378,_18328,_18330,_18360,_18334,_18336,_18338,_18340)),_18454):-call(_18454).
	-->(unify_arg(_18538,_18540,_18542,_18544,_18546,_18548,_18550,_18552),([move([_18548+_18558],_18570)],{_18558 is _18538+_18546,incl(_18570,_18542,_18596),arg(_18538,_18540,_18604)},init(_18570,_18604,_18596,_18544,_18550,_18552)),_18674):-call(_18674).
	-->(unify_writemode(_18758,_18760,_18762,_18764,_18766),({my_compound(_18760)},!,[move(_18778^h,[_18758])],{termtag(_18760,_18778)},unify_block(_18764,_18760,_18816,_18762,_18820,_18766)),_18874):-call(_18874).
	-->(unify_writemode(_18958,_18960,_18962,_18964,_18966),({atomic(_18960)},!,[move(tatm^_18960,[_18958])]),_19038):-call(_19038).
	-->(unify_block(last,_19130,_19132,_19134,_19134,[_19122|_19124]),(!,[add(_19132,h),jump(_19122)],{size(_19130,0,_19132)}),_19212):-call(_19212).
	-->(unify_block(nonlast,_19304,_19306,_19308,_19310,[_19296|_19298]),(!,[add(_19306,h)],{size(_19304,0,_19306),_19340 is -_19306},block(_19304,_19340,0,_19308,_19310,_19298)),_19412):-call(_19412).
	-->(block(_19496,_19498,_19500,_19502,_19504,_19506),({structure(_19496)},!,[move(tatm^(_19518/_19520),[h+_19498])],{functor(_19496,_19518,_19520),_19574 is _19498+_19520+1,_19586 is _19498+1},make_slots(1,_19520,_19496,_19586,_19616,_19502,_19620),block_args(1,_19520,_19496,_19574,_19500,_19616,_19620,_19504,_19506)),_19698):-call(_19698).
	-->(block(_19782,_19784,_19786,_19788,_19790,_19792),({cons(_19782)},!,{_19810 is _19784+2},make_slots(1,2,_19782,_19784,_19828,_19788,_19832),block_args(1,2,_19782,_19810,_19786,_19828,_19832,_19790,_19792)),_19904):-call(_19904).
	-->(block(_19988,_19990,_19990,_19994,_19994,[]),({atomic(_19988)},!),_20040):-call(_20040).
	-->(block(_20124,_20126,_20126,_20130,_20130,[]),({var(_20124)},!),_20176):-call(_20176).
	-->(block_args(_20260,_20262,_20264,_20266,_20266,[],_20272,_20272,[]),({_20260>_20262},!),_20320):-call(_20320).
	-->(block_args(_20416,_20418,_20420,_20404,_20424,[_20404],_20428,_20430,[_20410|_20412]),({_20416=_20418},!,[label(_20410)],{arg(_20416,_20420,_20460)},block(_20460,_20404,_20424,_20428,_20430,_20412)),_20530):-call(_20530).
	-->(block_args(_20620,_20622,_20624,_20614,_20628,[_20614|_20616],_20632,_20634,_20636),({_20620<_20622},!,{arg(_20620,_20624,_20654)},block(_20654,_20614,_20666,_20632,_20670,_20672),{_20682 is _20620+1},block_args(_20682,_20622,_20624,_20666,_20628,_20616,_20670,_20634,_20636)),_20766):-call(_20766).
	-->(make_slots(_20850,_20852,_20854,_20856,[],_20860,_20860),({_20850>_20852},!),_20906):-call(_20906).
	-->(make_slots(_20996,_20998,_21000,_21002,[_20990|_20992],_21006,_21008),({_20996=<_20998},!,{arg(_20996,_21000,_21026)},init_var(_21026,_21002,_21006),{incl(_21026,_21006,_21046),make_word(_21026,_20990,_21054)},[move(_21054,[h+_21002])],{_21098 is _21002+1,_21110 is _20996+1},make_slots(_21110,_20998,_21000,_21098,_20992,_21046,_21008)),_21208):-call(_21208).
	-->(init_var(_21292,_21294,_21296),({var(_21292),\+myin(_21292,_21296)},!,[move(tvar^(h+_21294),_21292)]),_21384):-call(_21384).
	-->(init_var(_21468,_21470,_21472),({var(_21468),myin(_21468,_21472)},!),_21526):-call(_21526).
	-->(init_var(_21610,_21612,_21614),({nonvar(_21610)},!),_21656):-call(_21656).
	-->(size(_22336),({structure(_22336)},!,{functor(_22336,_22350,_22352)},add(1),add(_22352),size_args(1,_22352,_22336)),_22430):-call(_22430).
	-->(size(_22514),({cons(_22514)},!,add(2),size_args(1,2,_22514)),_22580):-call(_22580).
	-->(size(_22664),({atomic(_22664)},!),_22706):-call(_22706).
	-->(size(_22790),({var(_22790)},!),_22832):-call(_22832).
	-->(size_args(_22916,_22918,_22920),({_22916>_22918},!),_22964):-call(_22964).
	-->(size_args(_23048,_23050,_23052),({_23048=<_23050},!,{arg(_23048,_23052,_23070)},size(_23070),{_23088 is _23048+1},size_args(_23088,_23050,_23052)),_23160):-call(_23160).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__1(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__2(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__3(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__4(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__5(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__6(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__7(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__8(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__9(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__10(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__11(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__12(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__13(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__14(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__15(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__16(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__17(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__18(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__19(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__20(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__21(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__22(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__23(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__24(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__25(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__26(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__27(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__28(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__29(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__30(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__31(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__32(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__33(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__34(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__35(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__36(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__37(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__38(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__39(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__40(Prolog* mach);
	};


public:
	class pred_make_word_3 : public Code {

	/*
	
	make_word(_4040,_4032,_4036^(h+_4032),_4048):-my_compound(_4040,cut(1,termtag(_4040,_4036,_4048))).
	make_word(_4086,_4088,_4086,_4096):-var(_4086,cut(1,_4096)).
	make_word(_4130,_4132,tatm^_4130,_4140):-atomic(_4130,cut(1,_4140)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_make_word_3__1(Prolog* mach);
	static Operation* exec_pred_make_word_3__2(Prolog* mach);
	static Operation* exec_pred_make_word_3__3(Prolog* mach);
	};


public:
	class pred_add_3 : public Code {

	/*
	
	add(_4574,_4576,_4578,_4592):-is(_4578,_4576+_4574,_4592).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_add_3__1(Prolog* mach);
	};


public:
	class pred_myin_2 : public Code {

	/*
	
	myin(_4624,[_4620|_4622],_4634):-compare(_4626,_4624,_4620,in_2(_4626,_4624,_4622,_4634)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_myin_2__1(Prolog* mach);
	};


public:
	class pred_in_2_3 : public Code {

	/*
	
	in_2(=,_4670,_4672,_4682):-call(_4682).
	in_2(>,_4700,_4702,_4710):-myin(_4700,_4702,_4710).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_in_2_3__1(Prolog* mach);
	static Operation* exec_pred_in_2_3__2(Prolog* mach);
	};


public:
	class pred_incl_3 : public Code {

	/*
	
	incl(_4736,_4738,_4740,_4748):-incl_2(_4738,_4736,_4740,_4748).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_incl_3__1(Prolog* mach);
	};


public:
	class pred_incl_2_3 : public Code {

	/*
	
	incl_2([],_4778,[_4778],_4790):-call(_4790).
	incl_2([_4810|_4812],_4814,_4816,_4826):-compare(_4818,_4814,_4810,incl_3(_4818,_4814,_4810,_4812,_4816,_4826)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_incl_2_3__1(Prolog* mach);
	static Operation* exec_pred_incl_2_3__2(Prolog* mach);
	};


public:
	class pred_incl_3_5 : public Code {

	/*
	
	incl_3(<,_4870,_4876,_4878,[_4870,_4876|_4878],_4888):-call(_4888).
	incl_3(=,_4916,_4912,_4914,[_4912|_4914],_4926):-call(_4926).
	incl_3(>,_4954,_4950,_4956,[_4950|_4952],_4964):-incl_2(_4956,_4954,_4952,_4964).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_incl_3_5__1(Prolog* mach);
	static Operation* exec_pred_incl_3_5__2(Prolog* mach);
	static Operation* exec_pred_incl_3_5__3(Prolog* mach);
	};


public:
	class pred_my_compound_1 : public Code {

	/*
	
	my_compound(_4996,_5008):-nonvar(_4996,not(atomic(_4996),_5008)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_my_compound_1__1(Prolog* mach);
	};


public:
	class pred_cons_1 : public Code {

	/*
	
	cons(_5034,_5048):-nonvar(_5034,unify([_5038|_5040],_5034,_5048)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_cons_1__1(Prolog* mach);
	};


public:
	class pred_structure_1 : public Code {

	/*
	
	structure(_5076,_5096):-my_compound(_5076,not(_5076=[_5080|_5082],_5096)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_structure_1__1(Prolog* mach);
	};


public:
	class pred_termtag_2 : public Code {

	/*
	
	termtag(_5122,tstr,_5130):-structure(_5122,_5130).
	termtag(_5152,tlst,_5160):-cons(_5152,_5160).
	termtag(_5182,tatm,_5190):-atomic(_5182,_5190).
	termtag(_5212,tvar,_5220):-var(_5212,_5220).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_termtag_2__1(Prolog* mach);
	static Operation* exec_pred_termtag_2__2(Prolog* mach);
	static Operation* exec_pred_termtag_2__3(Prolog* mach);
	static Operation* exec_pred_termtag_2__4(Prolog* mach);
	};


	};



}


#endif	//#ifndef UNIFY
