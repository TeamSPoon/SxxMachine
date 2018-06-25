#ifndef SXX_BUILTINS
#define SXX_BUILTINS

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class sxx_builtins {
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
static Int* posint1;
};


class pred_or_2 : public Code {

/*

or((_5486->_5488),_5494,_5554):-call(_5486,cut(1,call(_5488,_5554))).
or((_5676->_5678),_5684,_5728):-call(_5684,_5728).
or((_6266*->_6268),_6274,_6370):-unify(dotwo(true),_6282,or((call(_6266),nb_setarg(1,_6282,fail)),(_6282=dotwo(true);_6318),_6370)).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_forall_2 : public Code {

/*

forall(_5808,_5810,_5874):-not(\+ (call(_5808),\+ \+call(_5818)),_5874).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_undo_1 : public Code {

/*

undo(_5964,_5992):-call(_5964,_5992).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_redo_each_call_3 : public Code {

/*

redo_each_call(_6080,_6082,_6084,_6132):-setup_call_cleanup(_6080,_6082,_6084,_6132).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};


class pred_one_of_or_else_3 : public Code {

/*

one_of_or_else(_6526,_6528,_6530,_6582):-or((_6534*->_6536),_6542,_6582).


*/

public:
static* std::function<Function*(PrologMachine*);
static* std::function<Function*(PrologMachine*);
};




#endif	//#ifndef SXX_BUILTINS
