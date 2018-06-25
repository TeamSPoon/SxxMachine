#ifndef NREVERSE
#define NREVERSE

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class nreverse {
public:
	static Const* s0;
	static Const* s1;
	static Const* s2;
	static Const* s3;
	static Const* s4;
	static Const* s5;
	static Const* s6;
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
	static Int* posint11;
	static Int* posint12;
	static Int* posint13;
	static Int* posint14;
	static Int* posint15;
	static Int* posint16;
	static Int* posint17;
	static Int* posint18;
	static Int* posint19;
	static Int* posint20;
	static Int* posint21;
	static Int* posint22;
	static Int* posint23;
	static Int* posint24;
	static Int* posint25;
	static Int* posint26;
	static Int* posint27;
	static Int* posint28;
	static Int* posint29;
	static Int* posint30;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_4880):-nreverse(_4880).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nreverse_0 : public Code {

	/*
	 * 
	 * nreverse(_5134):-nreverse([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
	 * ,21,22,23,24,25,26,27,28,29,30],_5112,_5134).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nreverse_2 : public Code {

	/*
	 * 
	 * nreverse([_5218|_5220],_5226,_5286):-nreverse(_5220,_5232,concatenate(_5232,[
	 * _5218],_5226,_5286)). nreverse([],[],_5480):-call(_5480).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_concatenate_3 : public Code {

	/*
	 * 
	 * concatenate([_5558|_5560],_5572,[_5558|_5566],_5622):-concatenate(_5560,_5572
	 * ,_5566,_5622). concatenate([],_5758,_5758,_5782):-call(_5782).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef NREVERSE
