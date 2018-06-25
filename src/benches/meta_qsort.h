#ifndef META_QSORT
#define META_QSORT

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class meta_qsort {
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
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint4;
	static Int* posint6;
	static Int* posint7;
	static Int* posint8;
	static Int* posint10;
	static Int* posint11;
	static Int* posint17;
	static Int* posint18;
	static Int* posint21;
	static Int* posint27;
	static Int* posint28;
	static Int* posint29;
	static Int* posint31;
	static Int* posint32;
	static Int* posint33;
	static Int* posint37;
	static Int* posint39;
	static Int* posint40;
	static Int* posint46;
	static Int* posint47;
	static Int* posint51;
	static Int* posint53;
	static Int* posint55;
	static Int* posint59;
	static Int* posint61;
	static Int* posint63;
	static Int* posint65;
	static Int* posint66;
	static Int* posint74;
	static Int* posint75;
	static Int* posint81;
	static Int* posint82;
	static Int* posint83;
	static Int* posint85;
	static Int* posint90;
	static Int* posint92;
	static Int* posint94;
	static Int* posint95;
	static Int* posint99;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_29764):-meta_qsort(_29764).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_meta_qsort_0 : public Code {

	/*
	 * 
	 * meta_qsort(_29836):-interpret(qsort,_29836).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_interpret_1 : public Code {

	/*
	 * 
	 * interpret(_29906,_29972):-interpret(_29906,_29912,or((nonvar(_29912),!,
	 * interpret(_29912)),true,_29972)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_interpret_2 : public Code {

	/*
	 * 
	 * interpret(_30126,_30128,_30178):-var(_30126,cut(1,fail(_30178))).
	 * interpret((_30304,_30306),_30312,_30398):-cut(1,interpret(_30304,_30318,or((
	 * nonvar(_30318)->_30312=(_30318,_30306)),interpret(_30306,_30312),_30398))).
	 * interpret((_30572;_30574),_30580,_30628):-cut(1,interpret_disjunction(_30572,
	 * _30574,_30580,_30628)).
	 * interpret((_30760->_30762),_30768,_30822):-cut(1,interpret_disjunction((
	 * _30760->_30762),fail,_30768,_30822)).
	 * interpret(\+_30954,_30960,_31014):-cut(1,interpret_disjunction((_30954->fail)
	 * ,true,_30960,_31014)). interpret(!,true,_31182):-cut(1,_31182).
	 * interpret(_31250,_31252,_31302):-number(_31250,cut(1,fail(_31302))).
	 * interpret(_31428,_31430,_31484):-is_built_in(_31428,cut(1,interpret_built_in(
	 * _31428,_31484))).
	 * interpret(_31624,_31626,_31676):-define(_31624,_31632,interpret(_31632,_31676
	 * )).
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
};

class pred_interpret_disjunction_3 : public Code {

	/*
	 * 
	 * interpret_disjunction((_31824->_31826),_31832,_31834,_31926):-interpret(
	 * _31824,_31840,cut(1,or((nonvar(_31840)->_31834=(_31840->_31826)),interpret(
	 * _31826,_31834),_31926))).
	 * interpret_disjunction((_32114->_32116),_32122,_32124,_32176):-cut(1,interpret
	 * (_32122,_32124,_32176)).
	 * interpret_disjunction(_32308,_32310,_32312,_32358):-interpret(_32308,_32312,
	 * _32358).
	 * interpret_disjunction(_32484,_32486,_32488,_32534):-interpret(_32486,_32488,
	 * _32534).
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

class pred_is_built_in_1 : public Code {

	/*
	 * 
	 * is_built_in(true,_32682):-call(_32682).
	 * is_built_in(_32764=<_32766,_32792):-call(_32792).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_interpret_built_in_1 : public Code {

	/*
	 * 
	 * interpret_built_in(true,_32896):-call(_32896).
	 * interpret_built_in(_32984=<_32986,_33024):-smallerorequal(_32984,_32986,
	 * _33024).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_define_2 : public Code {

	/*
	 * 
	 * define(qsort,qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11
	 * ,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,
	 * 40,53,59,8],_33454,[]),_33484):-call(_33484).
	 * define(qsort([_33592|_33594],_33600,_33602),(partition(_33594,_33592,_33610,
	 * _33612),qsort(_33612,_33618,_33602),qsort(_33610,_33600,[_33592|_33618])),
	 * _33674):-call(_33674).
	 * define(qsort([],_33784,_33784),true,_33814):-call(_33814).
	 * define(partition([_33922|_33924],_33936,[_33922|_33930],_33940),(_33922=<
	 * _33936,!,partition(_33924,_33936,_33930,_33940)),_33996):-call(_33996).
	 * define(partition([_34104|_34106],_34118,_34120,[_34104|_34112]),partition(
	 * _34106,_34118,_34120,_34112),_34160):-call(_34160).
	 * define(partition([],_34270,[],[]),true,_34302):-call(_34302).
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


#endif	//#ifndef META_QSORT
