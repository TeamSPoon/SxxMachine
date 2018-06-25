#ifndef PROVER
#define PROVER

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class prover {
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
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint4;
	static Int* posint5;
	static Int* posint6;
	static Int* posint7;
	static Int* posint8;
	static Int* posint9;
	static Int* posint10;
	static Int* posint500;
	static Int* posint850;
	static Int* posint950;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_21366):-prover(_21366).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_on_load_prover_0 : public Code {

	/*
	 * 
	 * on_load_prover(_21466):-write(op(950,xfy,#),_21466).
	 * on_load_prover(_21586):-write(op(850,xfy,&),_21586).
	 * on_load_prover(_21706):-write(op(500,fx,+),_21706).
	 * on_load_prover(_21826):-write(op(500,fx,-),_21826).
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

class pred_prover_0 : public Code {

	/*
	 * 
	 * prover(_21940):-problem(_21896,_21898,_21900,implies(_21898,_21900,fail(
	 * _21940))). prover(_22134):-call(_22134).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_problem_3 : public Code {

	/*
	 * 
	 * problem(1,-a,+a,_22218):-call(_22218). problem(2,+a,-a&
	 * -a,_22360):-call(_22360). problem(3,-a,+to_be# -to_be,_22502):-call(_22502).
	 * problem(4,-a& -a,-a,_22644):-call(_22644). problem(5,-a,+b#
	 * -a,_22786):-call(_22786). problem(6,-a& -b,-b& -a,_22938):-call(_22938).
	 * problem(7,-a,-b# +b& -a,_23090):-call(_23090). problem(8,-a# -b# +c,-b# -a#
	 * +c,_23262):-call(_23262). problem(9,-a# +b,+b& -c# -a#
	 * +c,_23434):-call(_23434). problem(10,(-a# +c)&(-b# +c),-a& -b#
	 * +c,_23616):-call(_23616).
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

class pred_implies_2 : public Code {

	/*
	 * 
	 * implies(_23714,_23716,_23780):-opposite(_23716,_23722,add_conjunction(_23714,
	 * _23722,fs([],[],[],[]),_23780)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_opposite_2 : public Code {

	/*
	 * 
	 * opposite(_23962&_23964,_23968#_23970,_24034):-cut(1,opposite(_23962,_23968,
	 * opposite(_23964,_23970,_24034))).
	 * opposite(_24214#_24216,_24220&_24222,_24286):-cut(1,opposite(_24214,_24220,
	 * opposite(_24216,_24222,_24286))).
	 * opposite(+_24466,-_24466,_24510):-cut(1,_24510).
	 * opposite(-_24590,+_24590,_24622):-call(_24622).
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

class pred_add_conjunction_3 : public Code {

	/*
	 * 
	 * add_conjunction(_24718,_24720,_24722,_24794):-expand(_24718,_24722,_24730,
	 * expand(_24720,_24730,_24738,refute(_24738,_24794))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_expand_3 : public Code {

	/*
	 * 
	 * expand(_25046,refuted,refuted,_25090):-cut(1,_25090).
	 * expand(_25190&_25192,fs(_25196,_25198,_25200,_25202),refuted,_25268):-
	 * includes(_25196,_25190&_25192,cut(1,_25268)).
	 * expand(_25418&_25420,fs(_25424,_25426,_25428,_25430),fs(_25424,_25426,_25428,
	 * _25430),_25506):-includes(_25426,_25418&_25420,cut(1,_25506)).
	 * expand(_25656&_25658,fs(_25662,_25664,_25666,_25668),_25676,_25766):-cut(1,
	 * expand(_25656,fs(_25662,[_25656&_25658|_25664],_25666,_25668),_25706,expand(
	 * _25658,_25706,_25676,_25766))).
	 * expand(_25994#_25996,fs(_26000,_26002,_26004,_26006),_26014,_26102):-cut(1,
	 * opposite(_25994#_25996,_26026,extend(_26026,_26000,_26002,_26030,fs(_26030,
	 * _26002,_26004,_26006),_26014,_26102))).
	 * expand(+_26358,fs(_26362,_26364,_26366,_26368),_26376,_26446):-cut(1,extend(
	 * _26358,_26366,_26368,_26384,fs(_26362,_26364,_26384,_26368),_26376,_26446)).
	 * expand(-_26652,fs(_26656,_26658,_26660,_26662),_26670,_26734):-extend(_26652,
	 * _26662,_26660,_26680,fs(_26656,_26658,_26660,_26680),_26670,_26734).
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

class pred_includes_2 : public Code {

	/*
	 * 
	 * includes([_26934|_26936],_26934,_26976):-cut(1,_26976).
	 * includes([_27074|_27076],_27082,_27122):-includes(_27076,_27082,_27122).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_extend_6 : public Code {

	/*
	 * 
	 * extend(_27264,_27266,_27268,_27270,_27272,refuted,_27344):-includes(_27268,
	 * _27264,cut(1,_27344)).
	 * extend(_27530,_27532,_27534,_27532,_27538,_27538,_27610):-includes(_27532,
	 * _27530,cut(1,_27610)).
	 * extend(_27796,_27798,_27806,[_27796|_27798],_27810,_27810,_27834):-call(
	 * _27834).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_refute_1 : public Code {

	/*
	 * 
	 * refute(refuted,_28038):-cut(1,_28038).
	 * refute(fs([_28140&_28142|_28148],_28154,_28156,_28158),_28272):-opposite(
	 * _28140,_28168,opposite(_28142,_28174,unify(fs(_28148,_28154,_28156,_28158),
	 * _28188,add_conjunction(_28168,_28142,_28188,add_conjunction(_28168,_28174,
	 * _28188,add_conjunction(_28140,_28174,_28188,_28272)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef PROVER
