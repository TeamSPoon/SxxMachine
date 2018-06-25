#ifndef ZEBRA
#define ZEBRA

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class zebra {
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
	static Int* posint1;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_5176):-houses(_4678,member(house(red,english,_4686,_4688,_4690),_4678,
	 * member(house(_4700,spanish,dog,_4706,_4708),_4678,member(house(green,_4720,
	 * _4722,coffee,_4726),_4678,member(house(_4736,ukrainian,_4740,tea,_4744),_4678
	 * ,right_of(house(green,_4756,_4758,_4760,_4762),house(ivory,_4768,_4770,_4772,
	 * _4774),_4678,member(house(_4786,_4788,snails,_4792,winstons),_4678,member(
	 * house(yellow,_4806,_4808,_4810,kools),_4678,unify([_4822,_4828,house(_4834,
	 * _4836,_4838,milk,_4842),_4852,_4858],_4678,unify([house(_4870,norwegian,_4874
	 * ,_4876,_4878)|_4884],_4678,next_to(house(_4894,_4896,_4898,_4900,
	 * chesterfields),house(_4906,_4908,fox,_4912,_4914),_4678,next_to(house(_4926,
	 * _4928,_4930,_4932,kools),house(_4938,_4940,horse,_4944,_4946),_4678,member(
	 * house(_4958,_4960,_4962,orange_juice,lucky_strikes),_4678,member(house(_4976,
	 * japanese,_4980,_4982,parliaments),_4678,next_to(house(_4994,norwegian,_4998,
	 * _5000,_5002),house(blue,_5008,_5010,_5012,_5014),_4678,member(house(_5026,
	 * _5028,zebra,_5032,_5034),_4678,member(house(_5044,_5046,_5048,water,_5052),
	 * _4678,_5176))))))))))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_houses_1 : public Code {

	/*
	 * 
	 * houses([house(_6108,_6110,_6112,_6114,_6116),house(_6126,_6128,_6130,_6132,
	 * _6134),house(_6144,_6146,_6148,_6150,_6152),house(_6162,_6164,_6166,_6168,
	 * _6170),house(_6180,_6182,_6184,_6186,_6188)],_6220):-call(_6220).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_right_of_3 : public Code {

	/*
	 * 
	 * right_of(_6284,_6278,[_6278,_6284|_6286],_6316):-call(_6316).
	 * right_of(_6414,_6416,[_6408|_6410],_6466):-right_of(_6414,_6416,_6410,_6466).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_next_to_3 : public Code {

	/*
	 * 
	 * next_to(_6594,_6600,[_6594,_6600|_6602],_6632):-call(_6632).
	 * next_to(_6736,_6730,[_6730,_6736|_6738],_6768):-call(_6768).
	 * next_to(_6872,_6874,[_6866|_6868],_6924):-next_to(_6872,_6874,_6868,_6924).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_member_2 : public Code {

	/*
	 * 
	 * member(_7058,[_7058|_7060],_7088):-call(_7088).
	 * member(_7184,[_7178|_7180],_7226):-member(_7184,_7180,_7226).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_print_houses_1 : public Code {

	/*
	 * 
	 * print_houses([_7344|_7346],_7404):-cut(1,write(_7344,nl(print_houses(_7346,
	 * _7404)))). print_houses([],_7592):-call(_7592).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef ZEBRA
