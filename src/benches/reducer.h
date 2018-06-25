#ifndef REDUCER
#define REDUCER

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class reducer {
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
	static Const* s84;
	static Const* s85;
	static Const* s86;
	static Const* s87;
	static Const* s88;
	static Const* s89;
	static Const* s90;
	static Const* s91;
	static Const* s92;
	static Const* s93;
	static Const* s94;
	static Const* s95;
	static Const* s96;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_37922):-try(fac(3),_37866,try(quick([3,1,2]),_37894,_37922)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_try_2 : public Code {

	/*
	 * 
	 * try(_38050,_38052,_38128):-listify(_38050,_38058,curry(_38058,_38064,t_reduce
	 * (_38064,_38070,make_list(_38070,_38052,_38128)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_end_1 : public Code {

	/*
	 * 
	 * end(_38378,_38416):-atom(_38378,cut(1,_38416)).
	 * end(_38506,_38540):-termequal(_38506,[],_38540).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_list_functor_name_1 : public Code {

	/*
	 * 
	 * list_functor_name(_38644,_38686):-functor([_38648|_38650],_38644,_38658,
	 * _38686).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_t_def_3 : public Code {

	/*
	 * 
	 * t_def(fac,[_38804],cond(_38804=0,1,_38804*fac(_38804-1)),_38866):-call(_38866
	 * ).
	 * t_def(quick,[_38970],cond(_38970=[],[],cond(tl(_38970)=[],_38970,quick2(split
	 * (hd(_38970),tl(_38970))))),_39052):-call(_39052).
	 * t_def(quick2,[_39156],append(quick(hd(_39156)),quick(tl(_39156))),_39210):-
	 * call(_39210).
	 * t_def(split,[_39314,_39320],cond(_39320=[],[[_39314]],cond(hd(_39320)=<_39314
	 * ,inserthead(hd(_39320),split(_39314,tl(_39320))),inserttail(hd(_39320),split(
	 * _39314,tl(_39320))))),_39436):-call(_39436).
	 * t_def(inserthead,[_39540,_39546],[[_39540|hd(_39546)]|tl(_39546)],_39598):-
	 * call(_39598).
	 * t_def(inserttail,[_39702,_39708],[hd(_39708),_39702|tl(_39708)],_39760):-call
	 * (_39760).
	 * t_def(append,[_39864,_39870],cond(_39864=[],_39870,[hd(_39864)|append(tl(
	 * _39864),_39870)]),_39936):-call(_39936).
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
};

class pred_t_reduce_2 : public Code {

	/*
	 * 
	 * t_reduce(_40040,_40042,_40098):-atomic(_40040,cut(1,unify(_40040,_40042,
	 * _40098))). t_reduce([_40270,_40276|_40278],[_40282,_40288|_40278],_40370):-
	 * list_functor_name(_40278,t_reduce(_40276,_40288,cut(1,t_reduce(_40270,_40282,
	 * cut(1,_40370))))).
	 * t_reduce(_40592,_40594,_40674):-t_append(_40598,_40600,_40602,_40592,t_redex(
	 * _40602,_40600,cut(1,t_reduce(_40598,_40594,cut(1,_40674))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_t_append_4 : public Code {

	/*
	 * 
	 * t_append(_40938,_40938,_40942,_40942,_40966):-call(_40966).
	 * t_append([_41096|_41098],_41110,_41112,[_41096|_41104],_41170):-t_append(
	 * _41098,_41110,_41112,_41104,_41170).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_t_redex_2 : public Code {

	/*
	 * 
	 * t_redex([_41344,_41350,_41356,_41362|sp],[[_41368|_41350],[_41368|_41356]|
	 * _41362],_41434):-t_reduce(_41344,_41368,_41434).
	 * t_redex([_41570,_41576,_41582,_41588|bp],[[_41570|_41576],_41582|_41588],
	 * _41636):-call(_41636).
	 * t_redex([_41744,_41750,_41756,_41762|cp],[_41750,[_41744|_41756]|_41762],
	 * _41810):-call(_41810).
	 * t_redex([_41918,_41924,_41930|s],[[_41936|_41924],_41936|_41930],_41996):-
	 * t_reduce(_41918,_41936,_41996).
	 * t_redex([_42132,_42138,_42144|b],[[_42132|_42138]|_42144],_42186):-call(
	 * _42186).
	 * t_redex([_42294,_42300,_42306|c],[_42300,_42294|_42306],_42348):-call(_42348)
	 * . t_redex([_42456,_42462|k],_42462,_42492):-call(_42492).
	 * t_redex([_42600|i],_42600,_42630):-call(_42630).
	 * t_redex([_42738,_42744,_42750|cond],_42744,_42816):-t_reduce(_42750,_42764,
	 * unify(true,_42764,cut(1,_42816))).
	 * t_redex([_43014,_43020,_43026|cond],_43014,_43056):-call(_43056).
	 * t_redex([_43164|apply],_43172,_43212):-t_reduce(_43164,_43172,_43212).
	 * t_redex([_43348|hd],_43356,_43418):-list_functor_name(_43360,t_reduce(_43348,
	 * [_43364,_43356|_43360],_43418)).
	 * t_redex([_43590|tl],_43598,_43660):-list_functor_name(_43602,t_reduce(_43590,
	 * [_43598,_43612|_43602],_43660)).
	 * t_redex([_43832,_43838|_43840],_43846,_43986):-end(_43840,member(_43840,[+,-,
	 * *,//,mod],t_reduce(_43838,_43892,t_reduce(_43832,_43898,number(_43892,number(
	 * _43898,eval(_43840,_43846,_43892,_43898,_43986))))))).
	 * t_redex([_44408,_44414|_44416],_44422,_44596):-end(_44416,member(_44416,[<,>,
	 * =<,>=,=\=,=:=],t_reduce(_44414,_44474,t_reduce(_44408,_44480,number(_44474,
	 * number(_44480,or((relop(_44416,_44474,_44480)->_44422=true),_44422=false,cut(
	 * 1,_44596)))))))).
	 * t_redex([_45002,_45008|=],_45016,_45110):-t_reduce(_45008,_45022,t_reduce(
	 * _45002,_45028,or((_45022=_45028->_45016=true),_45016=false,cut(1,_45110)))).
	 * t_redex([_45358|_45360],_45366,_45458):-end(_45360,member(_45360,[-],t_reduce
	 * (_45358,_45388,number(_45388,eval1(_45360,_45398,_45388,_45458))))).
	 * t_redex(_45780,_45782,_45876):-append(_45786,_45788,_45780,end(_45788,t_def(
	 * _45788,_45800,_45802,t(_45800,_45802,_45810,append(_45786,_45810,_45782,
	 * _45876))))).
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
};

class pred_eval_4 : public Code {

	/*
	 * 
	 * eval(+,_46256,_46258,_46260,_46318):-is(_46256,_46258+_46260,_46318).
	 * eval(-,_46478,_46480,_46482,_46540):-is(_46478,_46480-_46482,_46540).
	 * eval(*,_46700,_46702,_46704,_46762):-is(_46700,_46702*_46704,_46762).
	 * eval(//,_46922,_46924,_46926,_46984):-is(_46922,_46924//_46926,_46984).
	 * eval(mod,_47144,_47146,_47148,_47206):-is(_47144,_47146 mod _47148,_47206).
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

class pred_eval1_3 : public Code {

	/*
	 * 
	 * eval1(-,_47366,_47368,_47418):-is(_47366,-_47368,_47418).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_relop_3 : public Code {

	/*
	 * 
	 * relop(<,_47576,_47578,_47624):-smallerthan(_47576,_47578,_47624).
	 * relop(>,_47794,_47796,_47842):-smallerthan(_47796,_47794,_47842).
	 * relop(=<,_48012,_48014,_48060):-smallerorequal(_48012,_48014,_48060).
	 * relop(>=,_48230,_48232,_48278):-smallerorequal(_48232,_48230,_48278).
	 * relop(=\=,_48448,_48450,_48496):- =\=(_48448,_48450,_48496).
	 * relop(=:=,_48660,_48662,_48708):-arithequal(_48662,_48660,_48708).
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

class pred_t_3 : public Code {

	/*
	 * 
	 * t(_48876,_48878,_48880,_48958):-listify(_48878,_48886,curry(_48886,_48892,
	 * t_argvars(_48876,_48892,_48880,cut(1,_48958)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_t_argvars_3 : public Code {

	/*
	 * 
	 * t_argvars([],_3298,_3298,_3308):-call(_3308).
	 * t_argvars([_3328|_3330],_3332,_3334,_3346):-t_argvars(_3330,_3332,_3336,
	 * t_vars(_3336,_3338,t_trans(_3328,_3336,_3338,_3334,_3346))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_curry_2 : public Code {

	/*
	 * 
	 * curry(_3394,_3394,_3410):-or(var(_3394),atomic(_3394),cut(1,_3410)).
	 * curry([_3442|_3444],_3446,_3454):-currylist(_3444,_3446,_3442,_3454).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_currylist_3 : public Code {

	/*
	 * 
	 * currylist([],_3480,_3480,_3488):-cut(1,_3488).
	 * currylist([_3514|_3516],_3518,_3520,_3536):-curry(_3514,_3522,currylist(_3516
	 * ,_3518,[_3522|_3520],_3536)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_t_vars_2 : public Code {

	/*
	 * 
	 * t_vars(_3574,[[_3574]],_3590):-var(_3574,cut(1,_3590)).
	 * t_vars(_3624,[[]],_3632):-atomic(_3624,cut(1,_3632)).
	 * t_vars([_3662],[[]],_3678):-atomic(_3662,cut(1,_3678)).
	 * t_vars([_3708|_3710],[_3714,[_3720|_3722],[_3732|_3734]],_3760):-t_vars(_3708
	 * ,[_3720|_3722],t_vars(_3710,[_3732|_3734],unionv(_3720,_3732,_3714,_3760))).
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

class pred_t_trans_4 : public Code {

	/*
	 * 
	 * t_trans(_3808,_3804,_3810,[_3804|k],_3838):-or(atomic(_3804),(var(_3804),
	 * _3804\==_3808),cut(1,_3838)).
	 * t_trans(_3872,_3874,_3876,i,_3884):-termequal(_3872,_3874,cut(1,_3884)).
	 * t_trans(_3930,_3926,[_3920|_3922],[_3926|k],_3938):-notinv(_3930,_3920,_3938)
	 * . t_trans(_3990,[_3968|_3970],[_3974,_3980,_3986],_3992,_4052):-unify([_3996|
	 * _3998],_3980,unify([_4002|_4004],_3986,or(end(_3970),(_4004=[_4012,[_4018|
	 * _4020]],_4018\==[]),t_rule1(_3990,_3970,_4002,_3986,_3968,_3996,_3980,_3992,
	 * _4052)))).
	 * t_trans(_4146,[_4118,_4124|_4126],[_4130,_4136,_4142],_4148,_4192):-unify([
	 * _4152|_4154],_4136,unify([_4158,_4164,_4170],_4142,unify([_4176|_4178],_4170,
	 * unify([_4182|_4184],_4164,t_rule2(_4146,_4126,_4124,_4182,_4164,_4118,_4152,
	 * _4136,_4148,_4192))))).
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

class pred_t_rule1_8 : public Code {

	/*
	 * 
	 * t_rule1(_4266,_4268,_4270,_4272,_4274,_4276,_4278,_4268,_4286):-notinv(_4266,
	 * _4270,termequal(_4266,_4274,cut(1,_4286))).
	 * t_rule1(_4348,_4344,_4350,_4352,_4354,_4356,_4358,[_4338,_4344|b],_4366):-
	 * notinv(_4348,_4350,inv(_4348,_4356,\==(_4348,_4354,cut(1,t_trans(_4348,_4354,
	 * _4358,_4338,_4366))))).
	 * t_rule1(_4448,_4450,_4452,_4454,_4438,_4456,_4458,[_4438,_4444|c],_4466):-
	 * notinv(_4448,_4456,cut(1,t_trans(_4448,_4450,_4454,_4444,_4466))).
	 * t_rule1(_4532,_4534,_4536,_4538,_4540,_4542,_4544,[_4522,_4528|s],_4552):-
	 * t_trans(_4532,_4534,_4538,_4528,t_trans(_4532,_4540,_4544,_4522,_4552)).
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

class pred_t_rule2_9 : public Code {

	/*
	 * 
	 * t_rule2(_4616,_4612,_4618,_4620,_4622,_4606,_4624,_4626,[_4606,_4612|c],_4634
	 * ):-termequal(_4616,_4618,notinv(_4616,_4624,cut(1,_4634))).
	 * t_rule2(_4698,_4694,_4700,_4702,_4704,_4706,_4708,_4710,[_4688,_4694|s],_4718
	 * ):-termequal(_4698,_4700,cut(1,t_trans(_4698,_4706,_4710,_4688,_4718))).
	 * t_rule2(_4792,_4788,_4794,_4796,_4798,_4776,_4800,_4802,[_4776,_4782,_4788|cp
	 * ],_4810):-inv(_4792,_4796,notinv(_4792,_4800,cut(1,t_trans(_4792,_4794,_4798,
	 * _4782,_4810)))).
	 * t_rule2(_4892,_4888,_4894,_4896,_4898,_4900,_4902,_4904,[_4876,_4882,_4888|sp
	 * ],_4912):-inv(_4892,_4896,cut(1,t_trans(_4892,_4894,_4898,_4882,t_trans(_4892
	 * ,_4900,_4904,_4876,_4912)))).
	 * t_rule2(_4986,_4984,_4982,_4988,_4990,_4992,_4994,_4996,[_4982|_4984],_5004):
	 * -termequal(_4986,_4992,cut(1,_5004)).
	 * t_rule2(_5066,_5062,_5056,_5068,_5070,_5072,_5074,_5076,[_5050,_5056,_5062|bp
	 * ],_5084):-t_trans(_5066,_5072,_5076,_5050,_5084).
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

class pred_make_list_2 : public Code {

	/*
	 * 
	 * make_list(_5126,_5126,_5134):-atomic(_5126,_5134).
	 * make_list([_5158,_5164|_5166],[_5164|_5172],_5180):-list_functor_name(_5166,
	 * make_list(_5158,_5172,_5180)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_listify_2 : public Code {

	/*
	 * 
	 * listify(_5210,_5210,_5226):-or(var(_5210),atomic(_5210),cut(1,_5226)).
	 * listify(_5262,[_5258|_5260],_5272):-functor(_5262,_5258,_5264,listify_list(1,
	 * _5264,_5262,_5260,_5272)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_listify_list_4 : public Code {

	/*
	 * 
	 * listify_list(_5310,_5312,_5314,[],_5322):-smallerthan(_5312,_5310,cut(1,_5322
	 * )).
	 * listify_list(_5362,_5364,_5366,[_5358|_5360],_5384):-smallerorequal(_5362,
	 * _5364,cut(1,arg(_5362,_5366,_5368,listify(_5368,_5358,is(_5376,_5362+1,
	 * listify_list(_5376,_5364,_5366,_5360,_5384)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_member_2 : public Code {

	/*
	 * 
	 * member(_5458,[_5458|_5460],_5470):-call(_5470).
	 * member(_5492,[_5488|_5490],_5500):-member(_5492,_5490,_5500).
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
	 * append([],_5524,_5524,_5534):-call(_5534).
	 * append([_5554|_5556],_5564,[_5554|_5562],_5572):-append(_5556,_5564,_5562,
	 * _5572).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_intersectv_3 : public Code {

	/*
	 * 
	 * intersectv([],_5600,[],_5610):-call(_5610).
	 * intersectv([_5630|_5632],_5634,_5636,_5644):-intersectv_2(_5634,_5630,_5632,
	 * _5636,_5644).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_intersectv_2_4 : public Code {

	/*
	 * 
	 * intersectv_2([],_5674,_5676,[],_5686):-call(_5686).
	 * intersectv_2([_5708|_5710],_5712,_5714,_5716,_5726):-compare(_5718,_5712,
	 * _5708,intersectv_3(_5718,_5712,_5714,_5708,_5710,_5716,_5726)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_intersectv_3_6 : public Code {

	/*
	 * 
	 * intersectv_3(<,_5772,_5774,_5776,_5778,_5780,_5788):-intersectv_2(_5774,_5776
	 * ,_5778,_5780,_5788).
	 * intersectv_3(=,_5826,_5830,_5832,_5834,[_5826|_5828],_5842):-intersectv(_5830
	 * ,_5834,_5828,_5842).
	 * intersectv_3(>,_5876,_5878,_5880,_5882,_5884,_5892):-intersectv_2(_5882,_5876
	 * ,_5878,_5884,_5892).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_intersectv_list_2 : public Code {

	/*
	 * 
	 * intersectv_list([],[],_5936):-call(_5936).
	 * intersectv_list([_5954|_5956],_5958,_5966):-intersectv_list(_5956,_5954,_5958
	 * ,_5966).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_dcg_arrow_2 : public Code {

	/*
	 * 
	 * -->(intersectv_list([]),[],_6004):-call(_6004).
	 * -->(intersectv_list([_6022|_6024]),(intersectv(_6022),intersectv_list(_6024))
	 * ,_6052):-call(_6052).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_diffv_3 : public Code {

	/*
	 * 
	 * diffv([],_6068,[],_6078):-call(_6078).
	 * diffv([_6098|_6100],_6102,_6104,_6112):-diffv_2(_6102,_6098,_6100,_6104,_6112
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_diffv_2_4 : public Code {

	/*
	 * 
	 * diffv_2([],_6144,_6146,[_6144|_6146],_6156):-call(_6156).
	 * diffv_2([_6178|_6180],_6182,_6184,_6186,_6196):-compare(_6188,_6182,_6178,
	 * diffv_3(_6188,_6182,_6184,_6178,_6180,_6186,_6196)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_diffv_3_6 : public Code {

	/*
	 * 
	 * diffv_3(<,_6244,_6248,_6250,_6252,[_6244|_6246],_6266):-diffv(_6248,[_6250|
	 * _6252],_6246,_6266).
	 * diffv_3(=,_6300,_6302,_6304,_6306,_6308,_6316):-diffv(_6302,_6306,_6308,_6316
	 * ). diffv_3(>,_6350,_6352,_6354,_6356,_6358,_6366):-diffv_2(_6356,_6350,_6352,
	 * _6358,_6366).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_unionv_3 : public Code {

	/*
	 * 
	 * unionv([],_6402,_6402,_6412):-call(_6412).
	 * unionv([_6432|_6434],_6436,_6438,_6446):-unionv_2(_6436,_6432,_6434,_6438,
	 * _6446).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_unionv_2_4 : public Code {

	/*
	 * 
	 * unionv_2([],_6478,_6480,[_6478|_6480],_6490):-call(_6490).
	 * unionv_2([_6512|_6514],_6516,_6518,_6520,_6530):-compare(_6522,_6516,_6512,
	 * unionv_3(_6522,_6516,_6518,_6512,_6514,_6520,_6530)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_unionv_3_6 : public Code {

	/*
	 * 
	 * unionv_3(<,_6578,_6582,_6584,_6586,[_6578|_6580],_6594):-unionv_2(_6582,_6584
	 * ,_6586,_6580,_6594).
	 * unionv_3(=,_6632,_6636,_6638,_6640,[_6632|_6634],_6648):-unionv(_6636,_6640,
	 * _6634,_6648).
	 * unionv_3(>,_6688,_6690,_6684,_6692,[_6684|_6686],_6700):-unionv_2(_6692,_6688
	 * ,_6690,_6686,_6700).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_subsetv_2 : public Code {

	/*
	 * 
	 * subsetv([],_6736,_6746):-call(_6746).
	 * subsetv([_6764|_6766],[_6770|_6772],_6782):-compare(_6774,_6764,_6770,
	 * subsetv_2(_6774,_6764,_6766,_6772,_6782)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_subsetv_2_4 : public Code {

	/*
	 * 
	 * subsetv_2(=,_6820,_6822,_6824,_6832):-subsetv(_6822,_6824,_6832).
	 * subsetv_2(>,_6860,_6862,_6864,_6878):-subsetv([_6860|_6862],_6864,_6878).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_small_subsetv_2 : public Code {

	/*
	 * 
	 * small_subsetv([],_6906,_6916):-call(_6916).
	 * small_subsetv([_6934|_6936],_6938,_6946):-inv(_6934,_6938,small_subsetv(_6936
	 * ,_6938,_6946)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_inv_2 : public Code {

	/*
	 * 
	 * inv(_6984,[_6980|_6982],_6994):-compare(_6986,_6984,_6980,inv_2(_6986,_6984,
	 * _6982,_6994)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_inv_2_3 : public Code {

	/*
	 * 
	 * inv_2(=,_7030,_7032,_7042):-call(_7042).
	 * inv_2(>,_7060,_7062,_7070):-inv(_7060,_7062,_7070).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_notinv_2 : public Code {

	/*
	 * 
	 * notinv(_7096,_7098,_7106):-notinv_2(_7098,_7096,_7106).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_notinv_2_2 : public Code {

	/*
	 * 
	 * notinv_2([],_7130,_7140):-call(_7140).
	 * notinv_2([_7158|_7160],_7162,_7172):-compare(_7164,_7162,_7158,notinv_3(_7164
	 * ,_7162,_7160,_7172)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_notinv_3_3 : public Code {

	/*
	 * 
	 * notinv_3(<,_7208,_7210,_7220):-call(_7220).
	 * notinv_3(>,_7238,_7240,_7248):-notinv_2(_7240,_7238,_7248).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef REDUCER
