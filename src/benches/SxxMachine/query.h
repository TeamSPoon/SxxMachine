#ifndef QUERY
#define QUERY

#include "../../machine/SxxMachine/Operation.h"
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
		static const Operation reg_top_0;
		static const Operation reg_query_0;
		static const Operation reg_query_1;
		static const Operation reg_density_2;
		static const Operation reg_pop_2;
		static const Operation reg_area_2;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_14994):-query(_14994).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_query_0 : public Code {

			/*
			
			query(_15072):-query(_15044,fail(_15072)).
			query(_15182):-call(_15182).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_query_0__1(Prolog* mach);

			static Operation exec_pred_query_0__2(Prolog* mach);
		};

	public:
		class pred_query_1 : public Code {

			/*
			
			query([_15226,_15232,_15238,_15244],_15356):-density(_15226,_15232,density(_15238,_15244,smallerthan(_15244,_15232,is(_15278,20*_15232,is(_15290,21*_15244,smallerthan(_15278,_15290,_15356)))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_query_1__1(Prolog* mach);
		};

	public:
		class pred_density_2 : public Code {

			/*
			
			density(_15716,_15718,_15794):-pop(_15716,_15724,area(_15716,_15730,is(_15718,_15724*100//_15730,_15794))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_density_2__1(Prolog* mach);
		};

	public:
		class pred_pop_2 : public Code {

			/*
			
			pop(china,8250,_16030):-call(_16030).
			pop(india,5863,_16144):-call(_16144).
			pop(ussr,2521,_16258):-call(_16258).
			pop(usa,2119,_16372):-call(_16372).
			pop(indonesia,1276,_16486):-call(_16486).
			pop(japan,1097,_16600):-call(_16600).
			pop(brazil,1042,_16714):-call(_16714).
			pop(bangladesh,750,_16828):-call(_16828).
			pop(pakistan,682,_16942):-call(_16942).
			pop(w_germany,620,_17056):-call(_17056).
			pop(nigeria,613,_17170):-call(_17170).
			pop(mexico,581,_17284):-call(_17284).
			pop(uk,559,_17398):-call(_17398).
			pop(italy,554,_17512):-call(_17512).
			pop(france,525,_17626):-call(_17626).
			pop(philippines,415,_17740):-call(_17740).
			pop(thailand,410,_17854):-call(_17854).
			pop(turkey,383,_17968):-call(_17968).
			pop(egypt,364,_18082):-call(_18082).
			pop(spain,352,_18196):-call(_18196).
			pop(poland,337,_18310):-call(_18310).
			pop(s_korea,335,_18424):-call(_18424).
			pop(iran,320,_18538):-call(_18538).
			pop(ethiopia,272,_18652):-call(_18652).
			pop(argentina,251,_18766):-call(_18766).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_pop_2__1(Prolog* mach);

			static Operation exec_pred_pop_2__2(Prolog* mach);

			static Operation exec_pred_pop_2__3(Prolog* mach);

			static Operation exec_pred_pop_2__4(Prolog* mach);

			static Operation exec_pred_pop_2__5(Prolog* mach);

			static Operation exec_pred_pop_2__6(Prolog* mach);

			static Operation exec_pred_pop_2__7(Prolog* mach);

			static Operation exec_pred_pop_2__8(Prolog* mach);

			static Operation exec_pred_pop_2__9(Prolog* mach);

			static Operation exec_pred_pop_2__10(Prolog* mach);

			static Operation exec_pred_pop_2__11(Prolog* mach);

			static Operation exec_pred_pop_2__12(Prolog* mach);

			static Operation exec_pred_pop_2__13(Prolog* mach);

			static Operation exec_pred_pop_2__14(Prolog* mach);

			static Operation exec_pred_pop_2__15(Prolog* mach);

			static Operation exec_pred_pop_2__16(Prolog* mach);

			static Operation exec_pred_pop_2__17(Prolog* mach);

			static Operation exec_pred_pop_2__18(Prolog* mach);

			static Operation exec_pred_pop_2__19(Prolog* mach);

			static Operation exec_pred_pop_2__20(Prolog* mach);

			static Operation exec_pred_pop_2__21(Prolog* mach);

			static Operation exec_pred_pop_2__22(Prolog* mach);

			static Operation exec_pred_pop_2__23(Prolog* mach);

			static Operation exec_pred_pop_2__24(Prolog* mach);

			static Operation exec_pred_pop_2__25(Prolog* mach);
		};

	public:
		class pred_area_2 : public Code {

			/*
			
			area(china,3380,_18880):-call(_18880).
			area(india,1139,_19000):-call(_19000).
			area(ussr,8708,_19120):-call(_19120).
			area(usa,3609,_19240):-call(_19240).
			area(indonesia,570,_19360):-call(_19360).
			area(japan,148,_19480):-call(_19480).
			area(brazil,3288,_19600):-call(_19600).
			area(bangladesh,55,_19720):-call(_19720).
			area(pakistan,311,_19840):-call(_19840).
			area(w_germany,96,_19960):-call(_19960).
			area(nigeria,373,_20080):-call(_20080).
			area(mexico,764,_20200):-call(_20200).
			area(uk,86,_20320):-call(_20320).
			area(italy,116,_20440):-call(_20440).
			area(france,213,_20560):-call(_20560).
			area(philippines,90,_20680):-call(_20680).
			area(thailand,200,_20800):-call(_20800).
			area(turkey,296,_20920):-call(_20920).
			area(egypt,386,_21040):-call(_21040).
			area(spain,190,_21160):-call(_21160).
			area(poland,121,_21280):-call(_21280).
			area(s_korea,37,_21400):-call(_21400).
			area(iran,628,_21520):-call(_21520).
			area(ethiopia,350,_21640):-call(_21640).
			area(argentina,1080,_21760):-call(_21760).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_area_2__1(Prolog* mach);

			static Operation exec_pred_area_2__2(Prolog* mach);

			static Operation exec_pred_area_2__3(Prolog* mach);

			static Operation exec_pred_area_2__4(Prolog* mach);

			static Operation exec_pred_area_2__5(Prolog* mach);

			static Operation exec_pred_area_2__6(Prolog* mach);

			static Operation exec_pred_area_2__7(Prolog* mach);

			static Operation exec_pred_area_2__8(Prolog* mach);

			static Operation exec_pred_area_2__9(Prolog* mach);

			static Operation exec_pred_area_2__10(Prolog* mach);

			static Operation exec_pred_area_2__11(Prolog* mach);

			static Operation exec_pred_area_2__12(Prolog* mach);

			static Operation exec_pred_area_2__13(Prolog* mach);

			static Operation exec_pred_area_2__14(Prolog* mach);

			static Operation exec_pred_area_2__15(Prolog* mach);

			static Operation exec_pred_area_2__16(Prolog* mach);

			static Operation exec_pred_area_2__17(Prolog* mach);

			static Operation exec_pred_area_2__18(Prolog* mach);

			static Operation exec_pred_area_2__19(Prolog* mach);

			static Operation exec_pred_area_2__20(Prolog* mach);

			static Operation exec_pred_area_2__21(Prolog* mach);

			static Operation exec_pred_area_2__22(Prolog* mach);

			static Operation exec_pred_area_2__23(Prolog* mach);

			static Operation exec_pred_area_2__24(Prolog* mach);

			static Operation exec_pred_area_2__25(Prolog* mach);
		};

	};

}


#endif	//#ifndef QUERY
