#ifndef POLY_10
#define POLY_10

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
		static const Operation reg_on_load_poly_10_0;
		static const Operation reg_top_0;
		static const Operation reg_poly_10_0;
		static const Operation reg_test_poly_1;
		static const Operation reg_less_than_2;
		static const Operation reg_poly_add_3;
		static const Operation reg_term_add_3;
		static const Operation reg_add_to_order_zero_term_3;
		static const Operation reg_poly_exp_3;
		static const Operation reg_poly_mul_3;
		static const Operation reg_term_mul_3;
		static const Operation reg_single_term_mul_3;
		static const Operation reg_mul_through_3;

	public:
		class pred_on_load_poly_10_0 : public Code {

			/*
			
			on_load_poly_10(_19874):-write(op(700,xfx,less_than),_19874).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_on_load_poly_10_0__1(Prolog* mach);
		};

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_19956):-poly_10(_19956).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_poly_10_0 : public Code {

			/*
			
			poly_10(_20048):-test_poly(_20012,poly_exp(10,_20012,_20020,_20048)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_poly_10_0__1(Prolog* mach);
		};

	public:
		class pred_test_poly_1 : public Code {

			/*
			
			test_poly(_20188,_20304):-poly_add(poly(x,[term(0,1),term(1,1)]),poly(y,[term(1,1)]),_20244,poly_add(poly(z,[term(1,1)]),_20244,_20188,_20304)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_test_poly_1__1(Prolog* mach);
		};

	public:
		class pred_less_than_2 : public Code {

			/*
			
			less_than(x,y,_20510):-call(_20510).
			less_than(y,z,_20624):-call(_20624).
			less_than(x,z,_20738):-call(_20738).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_less_than_2__1(Prolog* mach);

			static Operation exec_pred_less_than_2__2(Prolog* mach);

			static Operation exec_pred_less_than_2__3(Prolog* mach);
		};

	public:
		class pred_poly_add_3 : public Code {

			/*
			
			poly_add(poly(_20828,_20830),poly(_20828,_20836),poly(_20828,_20842),_20904):-cut(1,term_add(_20830,_20836,_20842,_20904)).
			poly_add(poly(_21056,_21058),poly(_21062,_21064),poly(_21056,_21070),_21150):-less_than(_21056,_21062,cut(1,add_to_order_zero_term(_21058,poly(_21062,_21064),_21070,_21150))).
			poly_add(_21364,poly(_21352,_21354),poly(_21352,_21360),_21422):-cut(1,add_to_order_zero_term(_21354,_21364,_21360,_21422)).
			poly_add(poly(_21574,_21576),_21588,poly(_21574,_21582),_21644):-cut(1,add_to_order_zero_term(_21576,_21588,_21582,_21644)).
			poly_add(_21796,_21798,_21800,_21852):-is(_21800,_21796+_21798,_21852).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_poly_add_3__1(Prolog* mach);

			static Operation exec_pred_poly_add_3__2(Prolog* mach);

			static Operation exec_pred_poly_add_3__3(Prolog* mach);

			static Operation exec_pred_poly_add_3__4(Prolog* mach);

			static Operation exec_pred_poly_add_3__5(Prolog* mach);
		};

	public:
		class pred_term_add_3 : public Code {

			/*
			
			term_add([],_21986,_21986,_22028):-cut(1,_22028).
			term_add(_22122,[],_22122,_22166):-cut(1,_22166).
			term_add([term(_22260,_22262)|_22268],[term(_22260,_22274)|_22280],[term(_22260,_22286)|_22292],_22368):-cut(1,poly_add(_22262,_22274,_22286,term_add(_22268,_22280,_22292,_22368))).
			term_add([term(_22590,_22592)|_22598],[term(_22602,_22604)|_22610],[term(_22590,_22592)|_22622],_22708):-smallerthan(_22590,_22602,cut(1,term_add(_22598,[term(_22602,_22604)|_22610],_22622,_22708))).
			term_add(_22946,[term(_22922,_22924)|_22930],[term(_22922,_22924)|_22942],_22998):-term_add(_22946,_22930,_22942,_22998).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_term_add_3__1(Prolog* mach);

			static Operation exec_pred_term_add_3__2(Prolog* mach);

			static Operation exec_pred_term_add_3__3(Prolog* mach);

			static Operation exec_pred_term_add_3__4(Prolog* mach);

			static Operation exec_pred_term_add_3__5(Prolog* mach);
		};

	public:
		class pred_add_to_order_zero_term_3 : public Code {

			/*
			
			add_to_order_zero_term([term(0,_23152)|_23158],_23176,[term(0,_23164)|_23158],_23232):-cut(1,poly_add(_23152,_23176,_23164,_23232)).
			add_to_order_zero_term(_23404,_23398,[term(0,_23398)|_23404],_23434):-call(_23434).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_add_to_order_zero_term_3__1(Prolog* mach);

			static Operation exec_pred_add_to_order_zero_term_3__2(Prolog* mach);
		};

	public:
		class pred_poly_exp_3 : public Code {

			/*
			
			poly_exp(0,_1490,1,_1498):-cut(1,_1498).
			poly_exp(_1522,_1524,_1526,_1550):-is(_1534,_1522>>1,is(_1522,_1534<<1,cut(1,poly_exp(_1534,_1524,_1542,poly_mul(_1542,_1542,_1526,_1550))))).
			poly_exp(_1610,_1612,_1614,_1632):-is(_1622,_1610-1,poly_exp(_1622,_1612,_1624,poly_mul(_1612,_1624,_1614,_1632))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_poly_exp_3__1(Prolog* mach);

			static Operation exec_pred_poly_exp_3__2(Prolog* mach);

			static Operation exec_pred_poly_exp_3__3(Prolog* mach);
		};

	public:
		class pred_poly_mul_3 : public Code {

			/*
			
			poly_mul(poly(_1680,_1682),poly(_1680,_1688),poly(_1680,_1694),_1702):-cut(1,term_mul(_1682,_1688,_1694,_1702)).
			poly_mul(poly(_1738,_1740),poly(_1744,_1746),poly(_1738,_1752),_1766):-less_than(_1738,_1744,cut(1,mul_through(_1740,poly(_1744,_1746),_1752,_1766))).
			poly_mul(_1820,poly(_1810,_1812),poly(_1810,_1818),_1828):-cut(1,mul_through(_1812,_1820,_1818,_1828)).
			poly_mul(poly(_1864,_1866),_1874,poly(_1864,_1872),_1882):-cut(1,mul_through(_1866,_1874,_1872,_1882)).
			poly_mul(_1916,_1918,_1920,_1934):-is(_1920,_1916*_1918,_1934).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_poly_mul_3__1(Prolog* mach);

			static Operation exec_pred_poly_mul_3__2(Prolog* mach);

			static Operation exec_pred_poly_mul_3__3(Prolog* mach);

			static Operation exec_pred_poly_mul_3__4(Prolog* mach);

			static Operation exec_pred_poly_mul_3__5(Prolog* mach);
		};

	public:
		class pred_term_mul_3 : public Code {

			/*
			
			term_mul([],_1960,[],_1968):-cut(1,_1968).
			term_mul(_1992,[],[],_2000):-cut(1,_2000).
			term_mul([_2026|_2028],_2030,_2032,_2044):-single_term_mul(_2030,_2026,_2034,term_mul(_2028,_2030,_2036,term_add(_2034,_2036,_2032,_2044))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_term_mul_3__1(Prolog* mach);

			static Operation exec_pred_term_mul_3__2(Prolog* mach);

			static Operation exec_pred_term_mul_3__3(Prolog* mach);
		};

	public:
		class pred_single_term_mul_3 : public Code {

			/*
			
			single_term_mul([],_2092,[],_2100):-cut(1,_2100).
			single_term_mul([term(_2126,_2128)|_2134],term(_2138,_2140),[term(_2144,_2146)|_2152],_2172):-is(_2144,_2126+_2138,poly_mul(_2128,_2140,_2146,single_term_mul(_2134,term(_2138,_2140),_2152,_2172))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_single_term_mul_3__1(Prolog* mach);

			static Operation exec_pred_single_term_mul_3__2(Prolog* mach);
		};

	public:
		class pred_mul_through_3 : public Code {

			/*
			
			mul_through([],_2218,[],_2226):-cut(1,_2226).
			mul_through([term(_2252,_2254)|_2260],_2274,[term(_2252,_2266)|_2272],_2282):-poly_mul(_2254,_2274,_2266,mul_through(_2260,_2274,_2272,_2282)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_mul_through_3__1(Prolog* mach);

			static Operation exec_pred_mul_through_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef POLY_10
