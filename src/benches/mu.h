#ifndef MU
#define MU

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class mu {
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
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint4;
	static Int* posint5;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_33782):-mu(_33782).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_mu_0 : public Code {

	/*
	 * 
	 * mu(_33894):-theorem([m,u,i,i,u],5,_33866,cut(1,_33894)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_theorem_3 : public Code {

	/*
	 * 
	 * theorem([m,i],_34036,[[a,m,i]],_34060):-call(_34060).
	 * theorem(_34154,_34166,[[_34152|_34154]|_34160],_34260):-smallerthan(0,_34166,
	 * is(_34184,_34166-1,theorem(_34190,_34184,_34160,rule(_34152,_34190,_34154,
	 * _34260)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rule_3 : public Code {

	/*
	 * 
	 * rule(1,_34560,_34562,_34608):-rule1(_34560,_34562,_34608).
	 * rule(2,_34730,_34732,_34778):-rule2(_34730,_34732,_34778).
	 * rule(3,_34900,_34902,_34948):-rule3(_34900,_34902,_34948).
	 * rule(4,_35070,_35072,_35118):-rule4(_35070,_35072,_35118).
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

class pred_rule1_2 : public Code {

	/*
	 * 
	 * rule1([i],[i,u],_35280):-call(_35280).
	 * rule1([_35370|_35372],[_35370|_35378],_35424):-rule1(_35372,_35378,_35424).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rule2_2 : public Code {

	/*
	 * 
	 * rule2([m|_35544],[m|_35550],_35598):-append(_35544,_35544,_35550,_35598).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rule3_2 : public Code {

	/*
	 * 
	 * rule3([i,i,i|_35750],[u|_35750],_35784):-call(_35784).
	 * rule3([_35886|_35888],[_35886|_35894],_35940):-rule3(_35888,_35894,_35940).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_rule4_2 : public Code {

	/*
	 * 
	 * rule4([u,u|_36078],_36078,_36106):-call(_36106).
	 * rule4([_36214|_36216],[_36214|_36222],_36268):-rule4(_36216,_36222,_36268).
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
	 * append([],_36406,_36406,_36430):-call(_36430).
	 * append([_36558|_36560],_36572,[_36558|_36566],_36622):-append(_36560,_36572,
	 * _36566,_36622).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef MU
