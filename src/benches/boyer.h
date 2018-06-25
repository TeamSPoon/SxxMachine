#ifndef BOYER
#define BOYER

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class boyer {
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
	static Const* s97;
	static Const* s98;
	static Const* s99;
	static Const* s100;
	static Const* s101;
	static Const* s102;
	static Const* s103;
	static Const* s104;
	static Const* s105;
	static Const* s106;
	static Const* s107;
	static Const* s108;
	static Const* s109;
	static Const* s110;
	static Const* s111;
	static Const* s112;
	static Const* s113;
	static Const* s114;
	static Const* s115;
	static Const* s116;
	static Const* s117;
	static Const* s118;
	static Const* s119;
	static Const* s120;
	static Const* s121;
	static Const* s122;
	static Const* s123;
	static Const* s124;
	static Const* s125;
	static Const* s126;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint6;
};

class pred_go_0 : public Code {

	/*
	 * 
	 * go(_4984):-statistics(runtime,[_4858,_4864],wff(_4876,rewrite(_4876,_4882,
	 * tautology(_4882,[],[],statistics(runtime,[_4894,_4900],write('execution time
	 * is ',write(_4900,write(' milliseconds',_4984)))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_5418):-wff(_5370,rewrite(_5370,_5376,tautology(_5376,[],[],_5418))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_wff_1 : public Code {

	/*
	 * 
	 * wff(implies(and(implies(_5602,_5604),and(implies(_5604,_5610),and(implies(
	 * _5610,_5616),implies(_5616,_5622)))),implies(_5602,_5622)),_5842):-unify(f(
	 * myplus(myplus(a,b),myplus(c,zero))),_5602,unify(f(times(times(a,b),myplus(c,d
	 * ))),_5604,unify(f(reverse(append(append(a,b),[]))),_5610,unify(equal(myplus(a
	 * ,b),boyer_difference(x,y)),_5616,unify(lessp(remainder(a,b),boyer_member(a,
	 * length(b))),_5622,_5842))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_tautology_1 : public Code {

	/*
	 * 
	 * tautology(_6170,_6218):-rewrite(_6170,_6176,tautology(_6176,[],[],_6218)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_tautology_3 : public Code {

	/*
	 * 
	 * tautology(_6386,_6388,_6390,_6578):-or((truep(_6386,_6388)->true),(falsep(
	 * _6386,_6390)->fail;_6386=if(_6418,_6420,_6422)->(truep(_6418,_6388)->
	 * tautology(_6420,_6388,_6390);falsep(_6418,_6390)->tautology(_6422,_6388,_6390
	 * );tautology(_6420,[_6418|_6388],_6390),tautology(_6422,_6388,[_6418|_6390])))
	 * ,cut(1,_6578)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rewrite_2 : public Code {

	/*
	 * 
	 * rewrite(_6716,_6716,_6762):-atomic(_6716,cut(1,_6762)).
	 * rewrite(_6878,_6880,_6992):-functor(_6878,_6886,_6888,functor(_6892,_6886,
	 * _6888,rewrite_args(_6888,_6878,_6892,or((equal(_6892,_6910),rewrite(_6910,
	 * _6880)),_6880=_6892,cut(1,_6992))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rewrite_args_3 : public Code {

	/*
	 * 
	 * rewrite_args(0,_7322,_7324,_7364):-cut(1,_7364).
	 * rewrite_args(_7458,_7460,_7462,_7568):-arg(_7458,_7460,_7470,arg(_7458,_7462,
	 * _7478,rewrite(_7470,_7478,is(_7494,_7458-1,rewrite_args(_7494,_7460,_7462,
	 * _7568))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_truep_2 : public Code {

	/*
	 * 
	 * truep(t,_7950,_7984):-cut(1,_7984).
	 * truep(_8076,_8078,_8118):-boyer_member(_8076,_8078,_8118).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_falsep_2 : public Code {

	/*
	 * 
	 * falsep(f,_8256,_8290):-cut(1,_8290).
	 * falsep(_8388,_8390,_8430):-boyer_member(_8388,_8390,_8430).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_boyer_member_2 : public Code {

	/*
	 * 
	 * boyer_member(_8572,[_8572|_8574],_8614):-cut(1,_8614).
	 * boyer_member(_8724,[_8718|_8720],_8766):-boyer_member(_8724,_8720,_8766).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_equal_2 : public Code {

	/*
	 * 
	 * equal(and(_8914,_8916),if(_8914,if(_8916,t,f),f),_8960):-call(_8960).
	 * equal(append(append(_9086,_9088),_9094),append(_9086,append(_9088,_9094)),
	 * _9134):-call(_9134).
	 * equal(assignment(_9266,append(_9260,_9262)),if(assignedp(_9266,_9260),
	 * assignment(_9266,_9260),assignment(_9266,_9262)),_9322):-call(_9322).
	 * equal(assume_false(_9448,_9450),cons(cons(_9448,f),_9450),_9490):-call(_9490)
	 * .
	 * equal(assume_true(_9616,_9618),cons(cons(_9616,t),_9618),_9658):-call(_9658).
	 * equal(boolean(_9784),or(equal(_9784,t),equal(_9784,f)),_9830):-call(_9830).
	 * equal(car(gopher(_9956)),if(listp(_9956),car(flatten(_9956)),zero),_10008):-
	 * call(_10008).
	 * equal(compile(_10134),reverse(codegen(optimize(_10134),[])),_10176):-call(
	 * _10176).
	 * equal(count_list(_10308,sort_lp(_10302,_10304)),myplus(count_list(_10308,
	 * _10302),count_list(_10308,_10304)),_10356):-call(_10356).
	 * equal(countps_(_10482,_10484),countps_loop(_10482,_10484,zero),_10520):-call(
	 * _10520).
	 * equal(boyer_difference(_10646,_10648),_10654,_10696):-boyer_difference(_10646
	 * ,_10648,_10654,_10696).
	 * equal(divides(_10864,_10866),zerop(remainder(_10866,_10864)),_10904):-call(
	 * _10904). equal(dsort(_11030),sort2(_11030),_11062):-call(_11062).
	 * equal(eqp(_11188,_11190),equal(fix(_11188),fix(_11190)),_11232):-call(_11232)
	 * . equal(equal(_11358,_11360),_11366,_11408):-eq(_11358,_11360,_11366,_11408).
	 * equal(even1(_11576),if(zerop(_11576),t,odd(decr(_11576))),_11624):-call(
	 * _11624).
	 * equal(exec(append(_11750,_11752),_11758,_11760),exec(_11752,exec(_11750,
	 * _11758,_11760),_11760),_11804):-call(_11804).
	 * equal(exp(_11930,_11932),_11938,_11980):-exp(_11930,_11932,_11938,_11980).
	 * equal(fact_(_12148),fact_loop(_12148,1),_12182):-call(_12182).
	 * equal(falsify(_12308),falsify1(normalize(_12308),[]),_12346):-call(_12346).
	 * equal(fix(_12472),if(numberp(_12472),_12472,zero),_12512):-call(_12512).
	 * equal(flatten(cdr(gopher(_12638))),if(listp(_12638),cdr(flatten(_12638)),cons
	 * (zero,[])),_12700):-call(_12700).
	 * equal(gcd(_12826,_12828),_12834,_12876):-gcd(_12826,_12828,_12834,_12876).
	 * equal(get(_13052,set(_13044,_13046,_13048)),if(eqp(_13052,_13044),_13046,get(
	 * _13052,_13048)),_13102):-call(_13102).
	 * equal(greatereqp(_13228,_13230),not(lessp(_13228,_13230)),_13268):-call(
	 * _13268).
	 * equal(greatereqpr(_13394,_13396),not(lessp(_13394,_13396)),_13434):-call(
	 * _13434).
	 * equal(greaterp(_13560,_13562),lessp(_13562,_13560),_13596):-call(_13596).
	 * equal(if(if(_13722,_13724,_13726),_13732,_13734),if(_13722,if(_13724,_13732,
	 * _13734),if(_13726,_13732,_13734)),_13786):-call(_13786).
	 * equal(iff(_13912,_13914),and(implies(_13912,_13914),implies(_13914,_13912)),
	 * _13960):-call(_13960).
	 * equal(implies(_14086,_14088),if(_14086,if(_14088,t,f),t),_14132):-call(_14132
	 * ). equal(last(append(_14258,_14260)),if(listp(_14260),last(_14260),if(listp(
	 * _14258),cons(car(last(_14258))),_14260)),_14332):-call(_14332).
	 * equal(length(_14458),_14464,_14504):-mylength(_14458,_14464,_14504).
	 * equal(lesseqp(_14658,_14660),not(lessp(_14660,_14658)),_14698):-call(_14698).
	 * equal(lessp(_14824,_14826),_14832,_14874):-lessp(_14824,_14826,_14832,_14874)
	 * . equal(listp(gopher(_15042)),listp(_15042),_15078):-call(_15078).
	 * equal(mc_flatten(_15204,_15206),append(flatten(_15204),_15206),_15244):-call(
	 * _15244).
	 * equal(meaning(_15370,_15372),_15378,_15420):-meaning(_15370,_15372,_15378,
	 * _15420).
	 * equal(boyer_member(_15588,_15590),_15596,_15638):-myboyer_member(_15588,
	 * _15590,_15596,_15638).
	 * equal(not(_15806),if(_15806,f,t),_15842):-call(_15842).
	 * equal(nth(_15968,_15970),_15976,_16018):-nth(_15968,_15970,_15976,_16018).
	 * equal(numberp(greatest_factor(_16186,_16188)),not(and(or(zerop(_16188),equal(
	 * _16188,1)),not(numberp(_16186)))),_16254):-call(_16254).
	 * equal(or(_16380,_16382),if(_16380,t,if(_16382,t,f),f),_16428):-call(_16428).
	 * equal(myplus(_16554,_16556),_16562,_16604):-myplus(_16554,_16556,_16562,
	 * _16604).
	 * equal(power_eval(_16772,_16774),_16780,_16822):-power_eval(_16772,_16774,
	 * _16780,_16822).
	 * equal(prime(_16990),and(not(zerop(_16990)),and(not(equal(_16990,add1(zero))),
	 * prime1(_16990,decr(_16990)))),_17062):-call(_17062).
	 * equal(prime_list(append(_17188,_17190)),and(prime_list(_17188),prime_list(
	 * _17190)),_17236):-call(_17236).
	 * equal(quotient(_17362,_17364),_17370,_17412):-quotient(_17362,_17364,_17370,
	 * _17412).
	 * equal(remainder(_17580,_17582),_17588,_17630):-remainder(_17580,_17582,_17588
	 * ,_17630).
	 * equal(reverse_(_17798),reverse_loop(_17798,[]),_17832):-call(_17832).
	 * equal(reverse(append(_17958,_17960)),append(reverse(_17960),reverse(_17958)),
	 * _18006):-call(_18006).
	 * equal(reverse_loop(_18132,_18134),_18140,_18182):-reverse_loop(_18132,_18134,
	 * _18140,_18182).
	 * equal(samefringe(_18350,_18352),equal(flatten(_18350),flatten(_18352)),_18394
	 * ):-call(_18394).
	 * equal(sigma(zero,_18522),quotient(times(_18522,add1(_18522)),2),_18566):-call
	 * (_18566).
	 * equal(sort2(delete(_18692,_18694)),delete(_18692,sort2(_18694)),_18736):-call
	 * (_18736).
	 * equal(tautology_checker(_18862),tautologyp(normalize(_18862),[]),_18900):-
	 * call(_18900).
	 * equal(times(_19026,_19028),_19034,_19076):-times(_19026,_19028,_19034,_19076)
	 * .
	 * equal(times_list(append(_19244,_19246)),times(times_list(_19244),times_list(
	 * _19246)),_19292):-call(_19292).
	 * equal(value(normalize(_19418),_19424),value(_19418,_19424),_19458):-call(
	 * _19458).
	 * equal(zerop(_19584),or(equal(_19584,zero),not(numberp(_19584))),_19632):-call
	 * (_19632).
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

class pred_boyer_difference_3 : public Code {

	/*
	 * 
	 * boyer_difference(_4294,_4294,zero,_4302):-cut(1,_4302).
	 * boyer_difference(myplus(_4328,_4330),_4328,fix(_4330),_4342):-cut(1,_4342).
	 * boyer_difference(myplus(_4368,_4370),_4370,fix(_4368),_4382):-cut(1,_4382).
	 * boyer_difference(myplus(_4408,_4410),myplus(_4408,_4416),boyer_difference(
	 * _4410,_4416),_4430):-cut(1,_4430).
	 * boyer_difference(myplus(_4462,myplus(_4456,_4458)),_4456,myplus(_4462,_4458),
	 * _4478):-cut(1,_4478).
	 * boyer_difference(add1(myplus(_4504,_4506)),_4506,add1(_4504),_4522):-cut(1,
	 * _4522). boyer_difference(add1(add1(_4548)),2,fix(_4548),_4566):-call(_4566).
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

class pred_eq_3 : public Code {

	/*
	 * 
	 * eq(myplus(_4586,_4588),zero,and(zerop(_4586),zerop(_4588)),_4610):-cut(1,
	 * _4610).
	 * eq(myplus(_4636,_4638),myplus(_4636,_4644),equal(fix(_4638),fix(_4644)),_4666
	 * ):-cut(1,_4666).
	 * eq(zero,boyer_difference(_4692,_4694),not(lessp(_4694,_4692)),_4712):-cut(1,
	 * _4712).
	 * eq(_4738,boyer_difference(_4738,_4740),and(numberp(_4738),and(or(equal(_4738,
	 * zero),zerop(_4740)))),_4778):-cut(1,_4778).
	 * eq(times(_4804,_4806),zero,or(zerop(_4804),zerop(_4806)),_4828):-cut(1,_4828)
	 * .
	 * eq(append(_4854,_4856),append(_4854,_4862),equal(_4856,_4862),_4876):-cut(1,
	 * _4876).
	 * eq(flatten(_4902),cons(_4906,[]),and(nlistp(_4902),equal(_4902,_4906)),_4932)
	 * :-cut(1,_4932).
	 * eq(greatest_factor(_4958,_4960),zero,and(or(zerop(_4960),equal(_4960,1)),
	 * equal(_4958,zero)),_4996):-cut(1,_4996).
	 * eq(greatest_factor(_5022,_5024),1,equal(_5022,1),_5038):-cut(1,_5038).
	 * eq(_5066,times(_5064,_5066),and(numberp(_5066),or(equal(_5066,zero),equal(
	 * _5064,1))),_5102):-cut(1,_5102).
	 * eq(_5128,times(_5128,_5130),or(equal(_5128,zero),and(numberp(_5128),equal(
	 * _5130,1))),_5166):-cut(1,_5166).
	 * eq(times(_5192,_5194),1,and(not(equal(_5192,zero)),and(not(equal(_5194,zero))
	 * ,and(numberp(_5192),and(numberp(_5194),and(equal(decr(_5192),zero),equal(decr
	 * (_5194),zero)))))),_5280):-cut(1,_5280).
	 * eq(boyer_difference(_5306,_5308),boyer_difference(_5312,_5308),if(lessp(_5306
	 * ,_5308),not(lessp(_5308,_5312)),if(lessp(_5312,_5308),not(lessp(_5308,_5306))
	 * ,equal(fix(_5306),fix(_5312)))),_5384):-cut(1,_5384).
	 * eq(lessp(_5410,_5412),_5424,if(lessp(_5410,_5412),equal(t,_5424),equal(f,
	 * _5424)),_5448):-call(_5448).
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
};

class pred_exp_3 : public Code {

	/*
	 * 
	 * exp(_5474,myplus(_5468,_5470),times(exp(_5474,_5468),exp(_5474,_5470)),_5496)
	 * :-cut(1,_5496).
	 * exp(_5528,times(_5522,_5524),exp(exp(_5528,_5522),_5524),_5546):-call(_5546).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_gcd_3 : public Code {

	/*
	 * 
	 * gcd(_5568,_5566,gcd(_5566,_5568),_5576):-cut(1,_5576).
	 * gcd(times(_5602,_5604),times(_5608,_5604),times(_5604,gcd(_5602,_5608)),_5632
	 * ):-call(_5632).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_mylength_2 : public Code {

	/*
	 * 
	 * mylength(reverse(_5652),length(_5652),_5666):-call(_5666).
	 * mylength(cons(_5714,cons(_5708,cons(_5702,cons(_5696,cons(_5690,cons(_5684,
	 * _5686)))))),myplus(6,length(_5686)),_5736):-call(_5736).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_lessp_3 : public Code {

	/*
	 * 
	 * lessp(remainder(_5754,_5756),_5756,not(zerop(_5756)),_5772):-cut(1,_5772).
	 * lessp(quotient(_5798,_5800),_5798,and(not(zerop(_5798)),or(zerop(_5800),not(
	 * equal(_5800,1)))),_5842):-cut(1,_5842).
	 * lessp(remainder(_5868,_5870),_5868,and(not(zerop(_5870)),and(not(zerop(_5868)
	 * ),not(lessp(_5868,_5870)))),_5916):-cut(1,_5916).
	 * lessp(myplus(_5942,_5944),myplus(_5942,_5950),lessp(_5944,_5950),_5964):-cut(
	 * 1,_5964).
	 * lessp(times(_5990,_5992),times(_5996,_5992),and(not(zerop(_5992)),lessp(_5990
	 * ,_5996)),_6026):-cut(1,_6026).
	 * lessp(_6054,myplus(_6052,_6054),not(zerop(_6052)),_6070):-cut(1,_6070).
	 * lessp(length(delete(_6096,_6098)),length(_6098),boyer_member(_6096,_6098),
	 * _6122):-call(_6122).
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

class pred_meaning_3 : public Code {

	/*
	 * 
	 * meaning(plus_tree(append(_6142,_6144)),_6158,myplus(meaning(plus_tree(_6142),
	 * _6158),meaning(plus_tree(_6144),_6158)),_6182):-cut(1,_6182).
	 * meaning(plus_tree(plus_fringe(_6208)),_6218,fix(meaning(_6208,_6218)),_6230):
	 * -cut(1,_6230).
	 * meaning(plus_tree(delete(_6256,_6258)),_6278,if(boyer_member(_6256,_6258),
	 * boyer_difference(meaning(plus_tree(_6258),_6278),meaning(_6256,_6278)),
	 * meaning(plus_tree(_6258),_6278)),_6318):-call(_6318).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_myboyer_member_3 : public Code {

	/*
	 * 
	 * myboyer_member(_6344,append(_6338,_6340),or(boyer_member(_6344,_6338),
	 * boyer_member(_6344,_6340)),_6366):-cut(1,_6366).
	 * myboyer_member(_6396,reverse(_6392),boyer_member(_6396,_6392),_6406):-cut(1,
	 * _6406).
	 * myboyer_member(_6438,intersect(_6432,_6434),and(boyer_member(_6438,_6432),
	 * boyer_member(_6438,_6434)),_6462):-call(_6462).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nth_3 : public Code {

	/*
	 * 
	 * nth(zero,_6480,zero,_6490):-call(_6490).
	 * nth([],_6510,if(zerop(_6510),[],zero),_6528):-call(_6528).
	 * nth(append(_6548,_6550),_6556,append(nth(_6548,_6556),nth(_6550,
	 * boyer_difference(_6556,length(_6548)))),_6588):-call(_6588).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_myplus_3 : public Code {

	/*
	 * 
	 * myplus(myplus(_6608,_6610),_6616,myplus(_6608,myplus(_6610,_6616)),_6630):-
	 * cut(1,_6630).
	 * myplus(remainder(_6656,_6658),times(_6658,quotient(_6656,_6658)),fix(_6656),
	 * _6682):-cut(1,_6682).
	 * myplus(_6716,add1(_6708),if(numberp(_6708),add1(myplus(_6716,_6708)),add1(
	 * _6716)),_6744):-call(_6744).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_power_eval_3 : public Code {

	/*
	 * 
	 * power_eval(big_plus1(_6764,_6766,_6768),_6768,myplus(power_eval(_6764,_6768),
	 * _6766),_6788):-cut(1,_6788).
	 * power_eval(power_rep(_6814,_6816),_6816,fix(_6814),_6828):-cut(1,_6828).
	 * power_eval(big_plus(_6854,_6856,_6858,_6860),_6860,myplus(_6858,myplus(
	 * power_eval(_6854,_6860),power_eval(_6856,_6860))),_6892):-cut(1,_6892).
	 * power_eval(big_plus(power_rep(_6918,_6920),power_rep(_6924,_6920),zero,_6920)
	 * ,_6920,myplus(_6918,_6924),_6952):-call(_6952).
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

class pred_quotient_3 : public Code {

	/*
	 * 
	 * quotient(myplus(_6972,myplus(_6972,_6974)),2,myplus(_6972,quotient(_6974,2)),
	 * _7002):-call(_7002).
	 * quotient(times(_7022,_7024),_7022,if(zerop(_7022),zero,fix(_7024)),_7050):-
	 * call(_7050).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_remainder_3 : public Code {

	/*
	 * 
	 * remainder(_7068,1,zero,_7076):-cut(1,_7076).
	 * remainder(_7100,_7100,zero,_7108):-cut(1,_7108).
	 * remainder(times(_7134,_7136),_7136,zero,_7144):-cut(1,_7144).
	 * remainder(times(_7170,_7172),_7170,zero,_7182):-call(_7182).
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

class pred_reverse_loop_3 : public Code {

	/*
	 * 
	 * reverse_loop(_7202,_7208,append(reverse(_7202),_7208),_7216):-cut(1,_7216).
	 * reverse_loop(_7242,[],reverse(_7242),_7252):-call(_7252).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_times_3 : public Code {

	/*
	 * 
	 * times(_7278,myplus(_7272,_7274),myplus(times(_7278,_7272),times(_7278,_7274))
	 * ,_7300):-cut(1,_7300).
	 * times(times(_7326,_7328),_7334,times(_7326,times(_7328,_7334)),_7348):-cut(1,
	 * _7348).
	 * times(_7382,boyer_difference(_7374,_7376),boyer_difference(times(_7374,_7382)
	 * ,times(_7376,_7382)),_7402):-cut(1,_7402).
	 * times(_7436,add1(_7428),if(numberp(_7428),myplus(_7436,times(_7436,_7428)),
	 * fix(_7436)),_7466):-call(_7466).
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


#endif	//#ifndef BOYER
