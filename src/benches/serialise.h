#ifndef SERIALISE
#define SERIALISE

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class serialise {
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
	static Int* posint1;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_9006):-serialise(_9006).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_serialise_0 : public Code {

	/*
	 * 
	 * serialise(_9092):-serialise("ABLE WAS I ERE I SAW ELBA",_9070,_9092).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_serialise_2 : public Code {

	/*
	 * 
	 * serialise(_9176,_9178,_9246):-pairlists(_9176,_9178,_9186,arrange(_9186,_9192
	 * ,numbered(_9192,1,_9200,_9246))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_pairlists_3 : public Code {

	/*
	 * 
	 * pairlists([_9480|_9482],[_9486|_9488],[pair(_9480,_9486)|_9500],_9556):-
	 * pairlists(_9482,_9488,_9500,_9556). pairlists([],[],[],_9716):-call(_9716).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_arrange_2 : public Code {

	/*
	 * 
	 * arrange([_9814|_9816],tree(_9820,_9814,_9824),_9898):-split(_9816,_9814,_9838
	 * ,_9840,arrange(_9838,_9820,arrange(_9840,_9824,_9898))).
	 * arrange([],void,_10168):-call(_10168).
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
	 * split([_10258|_10260],_10258,_10268,_10270,_10332):-cut(1,split(_10260,_10258
	 * ,_10268,_10270,_10332)).
	 * split([_10506|_10508],_10520,[_10506|_10514],_10524,_10598):-before(_10506,
	 * _10520,cut(1,split(_10508,_10520,_10514,_10524,_10598))).
	 * split([_10822|_10824],_10836,_10838,[_10822|_10830],_10914):-before(_10836,
	 * _10822,cut(1,split(_10824,_10836,_10838,_10830,_10914))).
	 * split([],_11140,[],[],_11166):-call(_11166).
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

class pred_before_2 : public Code {

	/*
	 * 
	 * before(pair(_11290,_11292),pair(_11296,_11298),_11344):-smallerthan(_11290,
	 * _11296,_11344).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_numbered_3 : public Code {

	/*
	 * 
	 * numbered(tree(_11486,pair(_11480,_11482),_11490),_11496,_11498,_11578):-
	 * numbered(_11486,_11496,_11482,is(_11516,_11482+1,numbered(_11490,_11516,
	 * _11498,_11578))). numbered(void,_11852,_11852,_11876):-call(_11876).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef SERIALISE
