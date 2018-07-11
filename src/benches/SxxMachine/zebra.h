#ifndef ZEBRA
#define ZEBRA

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class zebra {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s_blue;
	static Const* const  s_call;
	static Const* const  s_chesterfields;
	static Const* const  s_coffee;
	static Const* const  s_dog;
	static Const* const  s_english;
	static Const* const  s_fox;
	static Const* const  s_green;
	static Const* const  s_horse;
	static Const* const  s_house;
	static Const* const  s_houses;
	static Const* const  s_ivory;
	static Const* const  s_japanese;
	static Const* const  s_kools;
	static Const* const  s_lucky_strikes;
	static Const* const  s_member;
	static Const* const  s_milk;
	static Const* const  s_next_to;
	static Const* const  s_nl;
	static Const* const  s_norwegian;
	static Const* const  s_orange_juice;
	static Const* const  s_parliaments;
	static Const* const  s_print_houses;
	static Const* const  s_red;
	static Const* const  s_right_of;
	static Const* const  s_snails;
	static Const* const  s_spanish;
	static Const* const  s_tea;
	static Const* const  s_top;
	static Const* const  s_ukrainian;
	static Const* const  s_unify;
	static Const* const  s_water;
	static Const* const  s_winstons;
	static Const* const  s_write;
	static Const* const  s_yellow;
	static Const* const  s_zebra;
	static Int* const  posint1;
	static Operation* const  reg_top_0;
	static Operation* const  reg_houses_1;
	static Operation* const  reg_right_of_3;
	static Operation* const  reg_next_to_3;
	static Operation* const  reg_member_2;
	static Operation* const  reg_print_houses_1;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_5840):-houses(_5342,member(house(red,english,_5350,_5352,_5354),_5342,member(house(_5364,spanish,dog,_5370,_5372),_5342,member(house(green,_5384,_5386,coffee,_5390),_5342,member(house(_5400,ukrainian,_5404,tea,_5408),_5342,right_of(house(green,_5420,_5422,_5424,_5426),house(ivory,_5432,_5434,_5436,_5438),_5342,member(house(_5450,_5452,snails,_5456,winstons),_5342,member(house(yellow,_5470,_5472,_5474,kools),_5342,unify([_5486,_5492,house(_5498,_5500,_5502,milk,_5506),_5516,_5522],_5342,unify([house(_5534,norwegian,_5538,_5540,_5542)|_5548],_5342,next_to(house(_5558,_5560,_5562,_5564,chesterfields),house(_5570,_5572,fox,_5576,_5578),_5342,next_to(house(_5590,_5592,_5594,_5596,kools),house(_5602,_5604,horse,_5608,_5610),_5342,member(house(_5622,_5624,_5626,orange_juice,lucky_strikes),_5342,member(house(_5640,japanese,_5644,_5646,parliaments),_5342,next_to(house(_5658,norwegian,_5662,_5664,_5666),house(blue,_5672,_5674,_5676,_5678),_5342,member(house(_5690,_5692,zebra,_5696,_5698),_5342,member(house(_5708,_5710,_5712,water,_5716),_5342,_5840))))))))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_houses_1 : public Code {

	/*
	
	houses([house(_6772,_6774,_6776,_6778,_6780),house(_6790,_6792,_6794,_6796,_6798),house(_6808,_6810,_6812,_6814,_6816),house(_6826,_6828,_6830,_6832,_6834),house(_6844,_6846,_6848,_6850,_6852)],_6884):-call(_6884).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_houses_1__1(Prolog* mach);
	};


public:
	class pred_right_of_3 : public Code {

	/*
	
	right_of(_6948,_6942,[_6942,_6948|_6950],_6980):-call(_6980).
	right_of(_7078,_7080,[_7072|_7074],_7130):-right_of(_7078,_7080,_7074,_7130).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_right_of_3__1(Prolog* mach);
	static Operation* exec_pred_right_of_3__2(Prolog* mach);
	};


public:
	class pred_next_to_3 : public Code {

	/*
	
	next_to(_7258,_7264,[_7258,_7264|_7266],_7296):-call(_7296).
	next_to(_7400,_7394,[_7394,_7400|_7402],_7432):-call(_7432).
	next_to(_7536,_7538,[_7530|_7532],_7588):-next_to(_7536,_7538,_7532,_7588).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_next_to_3__1(Prolog* mach);
	static Operation* exec_pred_next_to_3__2(Prolog* mach);
	static Operation* exec_pred_next_to_3__3(Prolog* mach);
	};


public:
	class pred_member_2 : public Code {

	/*
	
	member(_7722,[_7722|_7724],_7752):-call(_7752).
	member(_7848,[_7842|_7844],_7890):-member(_7848,_7844,_7890).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_member_2__1(Prolog* mach);
	static Operation* exec_pred_member_2__2(Prolog* mach);
	};


public:
	class pred_print_houses_1 : public Code {

	/*
	
	print_houses([_8008|_8010],_8068):-cut(1,write(_8008,nl(print_houses(_8010,_8068)))).
	print_houses([],_8256):-call(_8256).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_print_houses_1__1(Prolog* mach);
	static Operation* exec_pred_print_houses_1__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef ZEBRA
