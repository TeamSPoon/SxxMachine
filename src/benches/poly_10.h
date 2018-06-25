#ifndef POLY_10
#define POLY_10

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class poly_10 {
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
	static Int* posint0;
	static Int* posint1;
	static Int* posint10;
	static Int* posint700;
};

class pred_on_load_poly_10_0 : public Code {

	/*
	 * 
	 * on_load_poly_10(_17278):-write(op(700,xfx,less_than),_17278).
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
	 * top(_17360):-poly_10(_17360).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_poly_10_0 : public Code {

	/*
	 * 
	 * poly_10(_17452):-test_poly(_17416,poly_exp(10,_17416,_17424,_17452)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_test_poly_1 : public Code {

	/*
	 * 
	 * test_poly(_17592,_17708):-poly_add(poly(x,[term(0,1),term(1,1)]),poly(y,[term
	 * (1,1)]),_17648,poly_add(poly(z,[term(1,1)]),_17648,_17592,_17708)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_less_than_2 : public Code {

	/*
	 * 
	 * less_than(x,y,_17914):-call(_17914). less_than(y,z,_18028):-call(_18028).
	 * less_than(x,z,_18142):-call(_18142).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_poly_add_3 : public Code {

	/*
	 * 
	 * poly_add(poly(_18232,_18234),poly(_18232,_18240),poly(_18232,_18246),_18308):
	 * -cut(1,term_add(_18234,_18240,_18246,_18308)).
	 * poly_add(poly(_18460,_18462),poly(_18466,_18468),poly(_18460,_18474),_18554):
	 * -less_than(_18460,_18466,cut(1,add_to_order_zero_term(_18462,poly(_18466,
	 * _18468),_18474,_18554))).
	 * poly_add(_18768,poly(_18756,_18758),poly(_18756,_18764),_18826):-cut(1,
	 * add_to_order_zero_term(_18758,_18768,_18764,_18826)).
	 * poly_add(poly(_18978,_18980),_18992,poly(_18978,_18986),_19048):-cut(1,
	 * add_to_order_zero_term(_18980,_18992,_18986,_19048)).
	 * poly_add(_19200,_19202,_19204,_19256):-is(_19204,_19200+_19202,_19256).
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

class pred_term_add_3 : public Code {

	/*
	 * 
	 * term_add([],_19390,_19390,_19432):-cut(1,_19432).
	 * term_add(_19526,[],_19526,_19570):-cut(1,_19570).
	 * term_add([term(_19664,_19666)|_19672],[term(_19664,_19678)|_19684],[term(
	 * _19664,_19690)|_19696],_19772):-cut(1,poly_add(_19666,_19678,_19690,term_add(
	 * _19672,_19684,_19696,_19772))).
	 * term_add([term(_19994,_19996)|_20002],[term(_20006,_20008)|_20014],[term(
	 * _19994,_19996)|_20026],_20112):-smallerthan(_19994,_20006,cut(1,term_add(
	 * _20002,[term(_20006,_20008)|_20014],_20026,_20112))).
	 * term_add(_20350,[term(_20326,_20328)|_20334],[term(_20326,_20328)|_20346],
	 * _20402):-term_add(_20350,_20334,_20346,_20402).
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

class pred_add_to_order_zero_term_3 : public Code {

	/*
	 * 
	 * add_to_order_zero_term([term(0,_20556)|_20562],_20580,[term(0,_20568)|_20562]
	 * ,_20636):-cut(1,poly_add(_20556,_20580,_20568,_20636)).
	 * add_to_order_zero_term(_20808,_20802,[term(0,_20802)|_20808],_20838):-call(
	 * _20838).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_poly_exp_3 : public Code {

	/*
	 * 
	 * poly_exp(0,_20962,1,_21004):-cut(1,_21004).
	 * poly_exp(_21110,_21112,_21114,_21218):-is(_21124,_21110>>1,is(_21110,_21124<<
	 * 1,cut(1,poly_exp(_21124,_21112,_21146,poly_mul(_21146,_21146,_21114,_21218)))
	 * )).
	 * poly_exp(_21552,_21554,_21556,_21636):-is(_21566,_21552-1,poly_exp(_21566,
	 * _21554,_21576,poly_mul(_21554,_21576,_21556,_21636))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_poly_mul_3 : public Code {

	/*
	 * 
	 * poly_mul(poly(_21914,_21916),poly(_21914,_21922),poly(_21914,_21928),_21990):
	 * -cut(1,term_mul(_21916,_21922,_21928,_21990)).
	 * poly_mul(poly(_22166,_22168),poly(_22172,_22174),poly(_22166,_22180),_22260):
	 * -less_than(_22166,_22172,cut(1,mul_through(_22168,poly(_22172,_22174),_22180,
	 * _22260))).
	 * poly_mul(_22498,poly(_22486,_22488),poly(_22486,_22494),_22556):-cut(1,
	 * mul_through(_22488,_22498,_22494,_22556)).
	 * poly_mul(poly(_22732,_22734),_22746,poly(_22732,_22740),_22802):-cut(1,
	 * mul_through(_22734,_22746,_22740,_22802)).
	 * poly_mul(_22978,_22980,_22982,_23034):-is(_22982,_22978*_22980,_23034).
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

class pred_term_mul_3 : public Code {

	/*
	 * 
	 * term_mul([],_23192,[],_23234):-cut(1,_23234).
	 * term_mul(_23352,[],[],_23396):-cut(1,_23396).
	 * term_mul([_23514|_23516],_23522,_23524,_23600):-single_term_mul(_23522,_23514
	 * ,_23532,term_mul(_23516,_23522,_23540,term_add(_23532,_23540,_23524,_23600)))
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

class pred_single_term_mul_3 : public Code {

	/*
	 * 
	 * single_term_mul([],_23906,[],_23948):-cut(1,_23948).
	 * single_term_mul([term(_24072,_24074)|_24080],term(_24084,_24086),[term(_24090
	 * ,_24092)|_24098],_24192):-is(_24090,_24072+_24084,poly_mul(_24074,_24086,
	 * _24092,single_term_mul(_24080,term(_24084,_24086),_24098,_24192))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_mul_through_3 : public Code {

	/*
	 * 
	 * mul_through([],_24490,[],_24532):-cut(1,_24532).
	 * mul_through([term(_24662,_24664)|_24670],_24688,[term(_24662,_24676)|_24682],
	 * _24752):-poly_mul(_24664,_24688,_24676,mul_through(_24670,_24688,_24682,
	 * _24752)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef POLY_10
