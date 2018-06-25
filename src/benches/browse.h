#ifndef BROWSE
#define BROWSE

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class browse {
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
	static Int* posint0;
	static Int* posint1;
	static Int* posint4;
	static Int* posint10;
	static Int* posint17;
	static Int* posint21;
	static Int* posint100;
	static Int* posint251;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_5434):-init(100,10,4,[[a,a,a,b,b,b,b,a,a,a,a,a,b,b,a,a,a],[a,a,b,b,b,b,a
	 * ,a,[a,a],[b,b]],[a,a,a,b,[b,a],b,a,b,a]],_5154,randomize(_5154,_5160,21,cut(1
	 * ,investigate(_5160,[[star(_5166),_5176,star(_5182),_5176,a,star(_5166),a,star
	 * (_5182),star(_5166)],[star(_5166),star(_5182),star(_5182),star(_5166),[star(
	 * _5166)],[star(_5182)]],[_5324,_5330,star(_5336),[b,a],star(_5364),_5374,_5380
	 * ]],_5434)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_init_5 : public Code {

	/*
	 * 
	 * init(_5674,_5676,_5678,_5680,_5682,_5748):-init(_5674,_5676,_5676,_5678,_5680
	 * ,_5682,_5748).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_init_6 : public Code {

	/*
	 * 
	 * init(0,_5930,_5932,_5934,_5936,_5938,_5996):-cut(1,_5996).
	 * init(_6096,_6098,_6100,_6102,_6104,[_6090|_6092],_6308):-fill(_6098,[],_6114,
	 * get_pats(_6102,_6104,_6122,is(_6132,_6100-_6098,fill(_6132,[pattern(_6122)|
	 * _6114],_6090,is(_6162,_6096-1,or((_6098=:=0->_6174 is _6100),_6174 is
	 * _6098-1,init(_6162,_6174,_6100,_6102,_6104,_6092,_6308))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_fill_3 : public Code {

	/*
	 * 
	 * fill(0,_6852,_6852,_6894):-cut(1,_6894).
	 * fill(_6980,_6982,[dummy([])|_6976],_7050):-is(_6994,_6980-1,fill(_6994,_6982,
	 * _6976,_7050)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_randomize_3 : public Code {

	/*
	 * 
	 * randomize([],[],_7238,_7278):-cut(1,_7278).
	 * randomize(_7366,[_7360|_7362],_7370,_7488):-length(_7366,_7376,is(_7392,_7370
	 * *17 mod 251,is(_7404,_7392 mod
	 * _7376,split(_7404,_7366,_7360,_7416,randomize(_7416,_7362,_7392,_7488))))).
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
	 * split(0,[_7856|_7858],_7856,_7858,_7914):-cut(1,_7914).
	 * split(_8022,[_8010|_8012],_8026,[_8010|_8018],_8102):-is(_8038,_8022-1,split(
	 * _8038,_8012,_8026,_8018,_8102)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_investigate_2 : public Code {

	/*
	 * 
	 * investigate([],_8322,_8356):-cut(1,_8356).
	 * investigate([_8442|_8444],_8450,_8516):-property(_8442,pattern,_8458,
	 * p_investigate(_8458,_8450,investigate(_8444,_8450,_8516))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_get_pats_3 : public Code {

	/*
	 * 
	 * get_pats(_8760,_8762,_8764,_8814):-get_pats(_8760,_8762,_8764,_8762,_8814).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_get_pats_4 : public Code {

	/*
	 * 
	 * get_pats(0,_8988,[],_8992,_9038):-cut(1,_9038).
	 * get_pats(_9164,[_9152|_9154],[_9152|_9160],_9170,_9244):-is(_9180,_9164-1,
	 * get_pats(_9180,_9154,_9160,_9170,_9244)).
	 * get_pats(_9480,[],_9484,_9486,_9542):-get_pats(_9480,_9486,_9484,_9486,_9542)
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_property_3 : public Code {

	/*
	 * 
	 * property([],_9730,_9732,_9772):-fail(_9772).
	 * property([_9900|_9902],_9908,_9910,_9978):-functor(_9900,_9908,_9918,cut(1,
	 * arg(1,_9900,_9910,_9978))).
	 * property([_10218|_10220],_10226,_10228,_10276):-property(_10220,_10226,_10228
	 * ,_10276).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_p_investigate_2 : public Code {

	/*
	 * 
	 * p_investigate([],_10448,_10470):-call(_10470).
	 * p_investigate([_10596|_10598],_10604,_10656):-p_match(_10604,_10596,
	 * p_investigate(_10598,_10604,_10656)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_p_match_2 : public Code {

	/*
	 * 
	 * p_match([],_10862,_10884):-call(_10884).
	 * p_match([_11016|_11018],_11024,_11088):-or((match(_11024,_11016),fail),true,
	 * p_match(_11018,_11024,_11088)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_match_2 : public Code {

	/*
	 * 
	 * match([],[],_11340):-cut(1,_11340).
	 * match([_11462|_11464],[_11468|_11470],_11544):-var(_11468,cut(1,unify(_11468,
	 * _11462,match(_11464,_11470,_11544)))).
	 * match(_11814,[_11808|_11810],_11902):-nonvar(_11808,unify(star(_11824),_11808
	 * ,cut(1,'$concat'(_11824,_11836,_11814,match(_11836,_11810,_11902))))).
	 * match([_12230|_12232],[_12236|_12238],_12318):-or((atom(_12230)->_12230=
	 * _12236),match(_12230,_12236),match(_12232,_12238,_12318)).
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

class pred_$concat_3 : public Code {

	/*
	 * 
	 * '$concat'([],_12542,_12542,_12566):-call(_12566).
	 * '$concat'([_12724|_12726],_12738,[_12724|_12732],_12788):-'$concat'(_12726,
	 * _12738,_12732,_12788).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef BROWSE
