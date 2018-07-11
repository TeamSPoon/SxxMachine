#ifndef QUERY
#define QUERY

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class query {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s_area;
	static Const* const  s_argentina;
	static Const* const  s_bangladesh;
	static Const* const  s_brazil;
	static Const* const  s_call;
	static Const* const  s_china;
	static Const* const  s_density;
	static Const* const  s_egypt;
	static Const* const  s_ethiopia;
	static Const* const  s_fail;
	static Const* const  s_france;
	static Const* const  s_india;
	static Const* const  s_indonesia;
	static Const* const  s_iran;
	static Const* const  s_is;
	static Const* const  s_italy;
	static Const* const  s_japan;
	static Const* const  s_mexico;
	static Const* const  s_nigeria;
	static Const* const  s_pakistan;
	static Const* const  s_philippines;
	static Const* const  s_poland;
	static Const* const  s_pop;
	static Const* const  s_query;
	static Const* const  s_s_korea;
	static Const* const  s_smallerthan;
	static Const* const  s_spain;
	static Const* const  s_thailand;
	static Const* const  s_top;
	static Const* const  s_turkey;
	static Const* const  s_uk;
	static Const* const  s_usa;
	static Const* const  s_ussr;
	static Const* const  s_w_germany;
	static Int* const  posint20;
	static Int* const  posint21;
	static Int* const  posint37;
	static Int* const  posint55;
	static Int* const  posint86;
	static Int* const  posint90;
	static Int* const  posint96;
	static Int* const  posint100;
	static Int* const  posint116;
	static Int* const  posint121;
	static Int* const  posint148;
	static Int* const  posint190;
	static Int* const  posint200;
	static Int* const  posint213;
	static Int* const  posint251;
	static Int* const  posint272;
	static Int* const  posint296;
	static Int* const  posint311;
	static Int* const  posint320;
	static Int* const  posint335;
	static Int* const  posint337;
	static Int* const  posint350;
	static Int* const  posint352;
	static Int* const  posint364;
	static Int* const  posint373;
	static Int* const  posint383;
	static Int* const  posint386;
	static Int* const  posint410;
	static Int* const  posint415;
	static Int* const  posint525;
	static Int* const  posint554;
	static Int* const  posint559;
	static Int* const  posint570;
	static Int* const  posint581;
	static Int* const  posint613;
	static Int* const  posint620;
	static Int* const  posint628;
	static Int* const  posint682;
	static Int* const  posint750;
	static Int* const  posint764;
	static Int* const  posint1042;
	static Int* const  posint1080;
	static Int* const  posint1097;
	static Int* const  posint1139;
	static Int* const  posint1276;
	static Int* const  posint2119;
	static Int* const  posint2521;
	static Int* const  posint3288;
	static Int* const  posint3380;
	static Int* const  posint3609;
	static Int* const  posint5863;
	static Int* const  posint8250;
	static Int* const  posint8708;
	static Operation* const  reg_top_0;
	static Operation* const  reg_query_0;
	static Operation* const  reg_query_1;
	static Operation* const  reg_density_2;
	static Operation* const  reg_pop_2;
	static Operation* const  reg_area_2;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_38962):-query(_38962).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_query_0 : public Code {

	/*
	
	query(_39040):-query(_39012,fail(_39040)).
	query(_39150):-call(_39150).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_query_0__1(Prolog* mach);
	static Operation* exec_pred_query_0__2(Prolog* mach);
	};


public:
	class pred_query_1 : public Code {

	/*
	
	query([_39194,_39200,_39206,_39212],_39324):-density(_39194,_39200,density(_39206,_39212,smallerthan(_39212,_39200,is(_39246,20*_39200,is(_39258,21*_39212,smallerthan(_39246,_39258,_39324)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_query_1__1(Prolog* mach);
	};


public:
	class pred_density_2 : public Code {

	/*
	
	density(_39684,_39686,_39762):-pop(_39684,_39692,area(_39684,_39698,is(_39686,_39692*100//_39698,_39762))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_density_2__1(Prolog* mach);
	};


public:
	class pred_pop_2 : public Code {

	/*
	
	pop(china,8250,_39998):-call(_39998).
	pop(india,5863,_40112):-call(_40112).
	pop(ussr,2521,_40226):-call(_40226).
	pop(usa,2119,_40340):-call(_40340).
	pop(indonesia,1276,_40454):-call(_40454).
	pop(japan,1097,_40568):-call(_40568).
	pop(brazil,1042,_40682):-call(_40682).
	pop(bangladesh,750,_40796):-call(_40796).
	pop(pakistan,682,_40910):-call(_40910).
	pop(w_germany,620,_41024):-call(_41024).
	pop(nigeria,613,_41138):-call(_41138).
	pop(mexico,581,_41252):-call(_41252).
	pop(uk,559,_41366):-call(_41366).
	pop(italy,554,_41480):-call(_41480).
	pop(france,525,_41594):-call(_41594).
	pop(philippines,415,_41708):-call(_41708).
	pop(thailand,410,_41822):-call(_41822).
	pop(turkey,383,_41936):-call(_41936).
	pop(egypt,364,_42050):-call(_42050).
	pop(spain,352,_42164):-call(_42164).
	pop(poland,337,_42278):-call(_42278).
	pop(s_korea,335,_42392):-call(_42392).
	pop(iran,320,_42506):-call(_42506).
	pop(ethiopia,272,_42620):-call(_42620).
	pop(argentina,251,_42734):-call(_42734).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pop_2__1(Prolog* mach);
	static Operation* exec_pred_pop_2__2(Prolog* mach);
	static Operation* exec_pred_pop_2__3(Prolog* mach);
	static Operation* exec_pred_pop_2__4(Prolog* mach);
	static Operation* exec_pred_pop_2__5(Prolog* mach);
	static Operation* exec_pred_pop_2__6(Prolog* mach);
	static Operation* exec_pred_pop_2__7(Prolog* mach);
	static Operation* exec_pred_pop_2__8(Prolog* mach);
	static Operation* exec_pred_pop_2__9(Prolog* mach);
	static Operation* exec_pred_pop_2__10(Prolog* mach);
	static Operation* exec_pred_pop_2__11(Prolog* mach);
	static Operation* exec_pred_pop_2__12(Prolog* mach);
	static Operation* exec_pred_pop_2__13(Prolog* mach);
	static Operation* exec_pred_pop_2__14(Prolog* mach);
	static Operation* exec_pred_pop_2__15(Prolog* mach);
	static Operation* exec_pred_pop_2__16(Prolog* mach);
	static Operation* exec_pred_pop_2__17(Prolog* mach);
	static Operation* exec_pred_pop_2__18(Prolog* mach);
	static Operation* exec_pred_pop_2__19(Prolog* mach);
	static Operation* exec_pred_pop_2__20(Prolog* mach);
	static Operation* exec_pred_pop_2__21(Prolog* mach);
	static Operation* exec_pred_pop_2__22(Prolog* mach);
	static Operation* exec_pred_pop_2__23(Prolog* mach);
	static Operation* exec_pred_pop_2__24(Prolog* mach);
	static Operation* exec_pred_pop_2__25(Prolog* mach);
	};


public:
	class pred_area_2 : public Code {

	/*
	
	area(china,3380,_42848):-call(_42848).
	area(india,1139,_42968):-call(_42968).
	area(ussr,8708,_43088):-call(_43088).
	area(usa,3609,_43208):-call(_43208).
	area(indonesia,570,_43328):-call(_43328).
	area(japan,148,_43448):-call(_43448).
	area(brazil,3288,_43568):-call(_43568).
	area(bangladesh,55,_43688):-call(_43688).
	area(pakistan,311,_43808):-call(_43808).
	area(w_germany,96,_43928):-call(_43928).
	area(nigeria,373,_44048):-call(_44048).
	area(mexico,764,_44168):-call(_44168).
	area(uk,86,_44288):-call(_44288).
	area(italy,116,_44408):-call(_44408).
	area(france,213,_44528):-call(_44528).
	area(philippines,90,_44648):-call(_44648).
	area(thailand,200,_44768):-call(_44768).
	area(turkey,296,_44888):-call(_44888).
	area(egypt,386,_45008):-call(_45008).
	area(spain,190,_45128):-call(_45128).
	area(poland,121,_45248):-call(_45248).
	area(s_korea,37,_45368):-call(_45368).
	area(iran,628,_45488):-call(_45488).
	area(ethiopia,350,_45608):-call(_45608).
	area(argentina,1080,_45728):-call(_45728).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_area_2__1(Prolog* mach);
	static Operation* exec_pred_area_2__2(Prolog* mach);
	static Operation* exec_pred_area_2__3(Prolog* mach);
	static Operation* exec_pred_area_2__4(Prolog* mach);
	static Operation* exec_pred_area_2__5(Prolog* mach);
	static Operation* exec_pred_area_2__6(Prolog* mach);
	static Operation* exec_pred_area_2__7(Prolog* mach);
	static Operation* exec_pred_area_2__8(Prolog* mach);
	static Operation* exec_pred_area_2__9(Prolog* mach);
	static Operation* exec_pred_area_2__10(Prolog* mach);
	static Operation* exec_pred_area_2__11(Prolog* mach);
	static Operation* exec_pred_area_2__12(Prolog* mach);
	static Operation* exec_pred_area_2__13(Prolog* mach);
	static Operation* exec_pred_area_2__14(Prolog* mach);
	static Operation* exec_pred_area_2__15(Prolog* mach);
	static Operation* exec_pred_area_2__16(Prolog* mach);
	static Operation* exec_pred_area_2__17(Prolog* mach);
	static Operation* exec_pred_area_2__18(Prolog* mach);
	static Operation* exec_pred_area_2__19(Prolog* mach);
	static Operation* exec_pred_area_2__20(Prolog* mach);
	static Operation* exec_pred_area_2__21(Prolog* mach);
	static Operation* exec_pred_area_2__22(Prolog* mach);
	static Operation* exec_pred_area_2__23(Prolog* mach);
	static Operation* exec_pred_area_2__24(Prolog* mach);
	static Operation* exec_pred_area_2__25(Prolog* mach);
	};


	};



}


#endif	//#ifndef QUERY
