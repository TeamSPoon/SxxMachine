#ifndef POLY_10
#define POLY_10

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class poly_10 {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s6;
	static Const* const  s7;
	static Const* const  s_add_to_order_zero_term;
	static Const* const  s_call;
	static Const* const  s_is;
	static Const* const  s_less_than;
	static Const* const  s_mul_through;
	static Const* const  s_on_load_poly_10;
	static Const* const  s_op;
	static Const* const  s_poly;
	static Const* const  s_poly_10;
	static Const* const  s_poly_add;
	static Const* const  s_poly_exp;
	static Const* const  s_poly_mul;
	static Const* const  s_single_term_mul;
	static Const* const  s_smallerthan;
	static Const* const  s_term;
	static Const* const  s_term_add;
	static Const* const  s_term_mul;
	static Const* const  s_test_poly;
	static Const* const  s_top;
	static Const* const  s_write;
	static Const* const  s_x;
	static Const* const  s_xfx;
	static Const* const  s_y;
	static Const* const  s_z;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint10;
	static Int* const  posint700;
	static Operation* const  reg_on_load_poly_10_0;
	static Operation* const  reg_top_0;
	static Operation* const  reg_poly_10_0;
	static Operation* const  reg_test_poly_1;
	static Operation* const  reg_less_than_2;
	static Operation* const  reg_poly_add_3;
	static Operation* const  reg_term_add_3;
	static Operation* const  reg_add_to_order_zero_term_3;
	static Operation* const  reg_poly_exp_3;
	static Operation* const  reg_poly_mul_3;
	static Operation* const  reg_term_mul_3;
	static Operation* const  reg_single_term_mul_3;
	static Operation* const  reg_mul_through_3;
public:
	class pred_on_load_poly_10_0 : public Code {

	/*
	
	on_load_poly_10(_19898):-write(op(700,xfx,less_than),_19898).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_on_load_poly_10_0__1(Prolog* mach);
	};


public:
	class pred_top_0 : public Code {

	/*
	
	top(_19980):-poly_10(_19980).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_poly_10_0 : public Code {

	/*
	
	poly_10(_20072):-test_poly(_20036,poly_exp(10,_20036,_20044,_20072)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_poly_10_0__1(Prolog* mach);
	};


public:
	class pred_test_poly_1 : public Code {

	/*
	
	test_poly(_20212,_20328):-poly_add(poly(x,[term(0,1),term(1,1)]),poly(y,[term(1,1)]),_20268,poly_add(poly(z,[term(1,1)]),_20268,_20212,_20328)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_test_poly_1__1(Prolog* mach);
	};


public:
	class pred_less_than_2 : public Code {

	/*
	
	less_than(x,y,_20534):-call(_20534).
	less_than(y,z,_20648):-call(_20648).
	less_than(x,z,_20762):-call(_20762).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_less_than_2__1(Prolog* mach);
	static Operation* exec_pred_less_than_2__2(Prolog* mach);
	static Operation* exec_pred_less_than_2__3(Prolog* mach);
	};


public:
	class pred_poly_add_3 : public Code {

	/*
	
	poly_add(poly(_20852,_20854),poly(_20852,_20860),poly(_20852,_20866),_20928):-cut(1,term_add(_20854,_20860,_20866,_20928)).
	poly_add(poly(_21080,_21082),poly(_21086,_21088),poly(_21080,_21094),_21174):-less_than(_21080,_21086,cut(1,add_to_order_zero_term(_21082,poly(_21086,_21088),_21094,_21174))).
	poly_add(_21388,poly(_21376,_21378),poly(_21376,_21384),_21446):-cut(1,add_to_order_zero_term(_21378,_21388,_21384,_21446)).
	poly_add(poly(_21598,_21600),_21612,poly(_21598,_21606),_21668):-cut(1,add_to_order_zero_term(_21600,_21612,_21606,_21668)).
	poly_add(_21820,_21822,_21824,_21876):-is(_21824,_21820+_21822,_21876).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_poly_add_3__1(Prolog* mach);
	static Operation* exec_pred_poly_add_3__2(Prolog* mach);
	static Operation* exec_pred_poly_add_3__3(Prolog* mach);
	static Operation* exec_pred_poly_add_3__4(Prolog* mach);
	static Operation* exec_pred_poly_add_3__5(Prolog* mach);
	};


public:
	class pred_term_add_3 : public Code {

	/*
	
	term_add([],_22010,_22010,_22052):-cut(1,_22052).
	term_add(_22146,[],_22146,_22190):-cut(1,_22190).
	term_add([term(_22284,_22286)|_22292],[term(_22284,_22298)|_22304],[term(_22284,_22310)|_22316],_22392):-cut(1,poly_add(_22286,_22298,_22310,term_add(_22292,_22304,_22316,_22392))).
	term_add([term(_22614,_22616)|_22622],[term(_22626,_22628)|_22634],[term(_22614,_22616)|_22646],_22732):-smallerthan(_22614,_22626,cut(1,term_add(_22622,[term(_22626,_22628)|_22634],_22646,_22732))).
	term_add(_22970,[term(_22946,_22948)|_22954],[term(_22946,_22948)|_22966],_23022):-term_add(_22970,_22954,_22966,_23022).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_term_add_3__1(Prolog* mach);
	static Operation* exec_pred_term_add_3__2(Prolog* mach);
	static Operation* exec_pred_term_add_3__3(Prolog* mach);
	static Operation* exec_pred_term_add_3__4(Prolog* mach);
	static Operation* exec_pred_term_add_3__5(Prolog* mach);
	};


public:
	class pred_add_to_order_zero_term_3 : public Code {

	/*
	
	add_to_order_zero_term([term(0,_23176)|_23182],_23200,[term(0,_23188)|_23182],_23256):-cut(1,poly_add(_23176,_23200,_23188,_23256)).
	add_to_order_zero_term(_23428,_23422,[term(0,_23422)|_23428],_23458):-call(_23458).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_add_to_order_zero_term_3__1(Prolog* mach);
	static Operation* exec_pred_add_to_order_zero_term_3__2(Prolog* mach);
	};


public:
	class pred_poly_exp_3 : public Code {

	/*
	
	poly_exp(0,_23582,1,_23624):-cut(1,_23624).
	poly_exp(_23730,_23732,_23734,_23838):-is(_23744,_23730>>1,is(_23730,_23744<<1,cut(1,poly_exp(_23744,_23732,_23766,poly_mul(_23766,_23766,_23734,_23838))))).
	poly_exp(_24172,_24174,_24176,_24256):-is(_24186,_24172-1,poly_exp(_24186,_24174,_24196,poly_mul(_24174,_24196,_24176,_24256))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_poly_exp_3__1(Prolog* mach);
	static Operation* exec_pred_poly_exp_3__2(Prolog* mach);
	static Operation* exec_pred_poly_exp_3__3(Prolog* mach);
	};


public:
	class pred_poly_mul_3 : public Code {

	/*
	
	poly_mul(poly(_24534,_24536),poly(_24534,_24542),poly(_24534,_24548),_24610):-cut(1,term_mul(_24536,_24542,_24548,_24610)).
	poly_mul(poly(_24786,_24788),poly(_24792,_24794),poly(_24786,_24800),_24880):-less_than(_24786,_24792,cut(1,mul_through(_24788,poly(_24792,_24794),_24800,_24880))).
	poly_mul(_25118,poly(_25106,_25108),poly(_25106,_25114),_25176):-cut(1,mul_through(_25108,_25118,_25114,_25176)).
	poly_mul(poly(_25352,_25354),_25366,poly(_25352,_25360),_25422):-cut(1,mul_through(_25354,_25366,_25360,_25422)).
	poly_mul(_25598,_25600,_25602,_25654):-is(_25602,_25598*_25600,_25654).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_poly_mul_3__1(Prolog* mach);
	static Operation* exec_pred_poly_mul_3__2(Prolog* mach);
	static Operation* exec_pred_poly_mul_3__3(Prolog* mach);
	static Operation* exec_pred_poly_mul_3__4(Prolog* mach);
	static Operation* exec_pred_poly_mul_3__5(Prolog* mach);
	};


public:
	class pred_term_mul_3 : public Code {

	/*
	
	term_mul([],_25812,[],_25854):-cut(1,_25854).
	term_mul(_25972,[],[],_26016):-cut(1,_26016).
	term_mul([_26134|_26136],_26142,_26144,_26220):-single_term_mul(_26142,_26134,_26152,term_mul(_26136,_26142,_26160,term_add(_26152,_26160,_26144,_26220))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_term_mul_3__1(Prolog* mach);
	static Operation* exec_pred_term_mul_3__2(Prolog* mach);
	static Operation* exec_pred_term_mul_3__3(Prolog* mach);
	};


public:
	class pred_single_term_mul_3 : public Code {

	/*
	
	single_term_mul([],_26526,[],_26568):-cut(1,_26568).
	single_term_mul([term(_26692,_26694)|_26700],term(_26704,_26706),[term(_26710,_26712)|_26718],_26812):-is(_26710,_26692+_26704,poly_mul(_26694,_26706,_26712,single_term_mul(_26700,term(_26704,_26706),_26718,_26812))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_single_term_mul_3__1(Prolog* mach);
	static Operation* exec_pred_single_term_mul_3__2(Prolog* mach);
	};


public:
	class pred_mul_through_3 : public Code {

	/*
	
	mul_through([],_27110,[],_27152):-cut(1,_27152).
	mul_through([term(_27282,_27284)|_27290],_27308,[term(_27282,_27296)|_27302],_27372):-poly_mul(_27284,_27308,_27296,mul_through(_27290,_27308,_27302,_27372)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_mul_through_3__1(Prolog* mach);
	static Operation* exec_pred_mul_through_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef POLY_10
