#ifndef SXX_READ
#define SXX_READ

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

	class sxx_read {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s4;
		static Const* const  s5;
		static Const* const  s6;
		static Const* const  s7;
		static Const* const  s8;
		static Const* const  s9;
		static Const* const  s10;
		static Const* const  s11;
		static Const* const  s12;
		static Const* const  s13;
		static Const* const  s14;
		static Const* const  s15;
		static Const* const  s16;
		static Const* const  s17;
		static Const* const  s18;
		static Const* const  s19;
		static Const* const  s20;
		static Const* const  s21;
		static Const* const  s22;
		static Const* const  s23;
		static Const* const  s24;
		static Const* const  s25;
		static Const* const  s26;
		static Const* const  s27;
		static Const* const  s28;
		static Const* const  s29;
		static Const* const  s30;
		static Const* const  s31;
		static Const* const  s32;
		static Const* const  s__;
		static Const* const  s_ap;
		static Const* const  s_call;
		static Const* const  s_collectvars;
		static Const* const  s_const;
		static Const* const  s_end_of_clause;
		static Const* const  s_end_of_file;
		static Const* const  s_fail;
		static Const* const  s_fx;
		static Const* const  s_fy;
		static Const* const  s_getargs;
		static Const* const  s_halt;
		static Const* const  s_infix;
		static Const* const  s_int;
		static Const* const  s_is;
		static Const* const  s_maketerm;
		static Const* const  s_mod;
		static Const* const  s_newprec;
		static Const* const  s_nexttoken;
		static Const* const  s_noteq;
		static Const* const  s_notvmember;
		static Const* const  s_prefix;
		static Const* const  s_read;
		static Const* const  s_readall;
		static Const* const  s_smallerorequal;
		static Const* const  s_unify;
		static Const* const  s_univ;
		static Const* const  s_var;
		static Const* const  s_vread;
		static Const* const  s_xfx;
		static Const* const  s_xfy;
		static Const* const  s_yfx;
		static Const* const  s66;
		static Int* const  posint1;
		static Int* const  posint200;
		static Int* const  posint300;
		static Int* const  posint400;
		static Int* const  posint500;
		static Int* const  posint550;
		static Int* const  posint700;
		static Int* const  posint900;
		static Int* const  posint1000;
		static Int* const  posint1050;
		static Int* const  posint1100;
		static Int* const  posint1200;
		static const Operation reg_vread_2;
		static const Operation reg_read_1;
		static const Operation reg_collectvars_3;
		static const Operation reg_notvmember_2;
		static const Operation reg_readall_2;
		static const Operation reg_infix_3;
		static const Operation reg_prefix_3;
		static const Operation reg_maketerm_3;
		static const Operation reg_newprec_4;
		static const Operation reg_newprec_3;
		static const Operation reg_getargs_2;
		static const Operation reg_maketerm_2;
		static const Operation reg_ap_3;

	public:
		class pred_vread_2 : public Code {

			/*
			
			vread(_400,_402,_414):-nexttoken(_404,readall(_404,_406,maketerm(_406,_400,cut(1,collectvars(_406,[],_402,_414))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_vread_2__1(Prolog* mach);
		};

	public:
		class pred_read_1 : public Code {

			/*
			
			read(_468,_480):-nexttoken(_470,readall(_470,_472,maketerm(_472,_468,cut(1,_480)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_read_1__1(Prolog* mach);
		};

	public:
		class pred_collectvars_3 : public Code {

			/*
			
			collectvars([],_522,_522,_530):-cut(1,_530).
			collectvars([var(_556,_558,_560)|_566],_568,_570,_590):-noteq(_558,'_',notvmember(_558,_568,cut(1,collectvars(_566,[_556=_558|_568],_570,_590)))).
			collectvars([_642|_644],_646,_648,_656):-collectvars(_644,_646,_648,_656).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_collectvars_3__1(Prolog* mach);

			static Operation exec_pred_collectvars_3__2(Prolog* mach);

			static Operation exec_pred_collectvars_3__3(Prolog* mach);
		};

	public:
		class pred_notvmember_2 : public Code {

			/*
			
			notvmember(_678,[],_686):-cut(1,_686).
			notvmember(_712,[_710=_712|_718],_726):-cut(1,fail(_726)).
			notvmember(_758,[_754|_756],_766):-notvmember(_758,_756,_766).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_notvmember_2__1(Prolog* mach);

			static Operation exec_pred_notvmember_2__2(Prolog* mach);

			static Operation exec_pred_notvmember_2__3(Prolog* mach);
		};

	public:
		class pred_readall_2 : public Code {

			/*
			
			readall(end_of_file,_790,_798):-cut(1,halt(_798)).
			readall(end_of_clause,_824,_832):-cut(1,unify([],_824,_832)).
			readall(_864,[_864|_866],_876):-nexttoken(_868,readall(_868,_866,_876)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_readall_2__1(Prolog* mach);

			static Operation exec_pred_readall_2__2(Prolog* mach);

			static Operation exec_pred_readall_2__3(Prolog* mach);
		};

	public:
		class pred_infix_3 : public Code {

			/*
			
			infix(1200,xfx,:-,_914):-call(_914).
			infix(1000,xfy,',',_940):-call(_940).
			infix(1100,xfy,;,_966):-call(_966).
			infix(1050,xfy,->,_992):-call(_992).
			infix(700,xfx,=,_1018):-call(_1018).
			infix(700,xfx,is,_1044):-call(_1044).
			infix(700,xfx,=..,_1070):-call(_1070).
			infix(700,xfx,==,_1096):-call(_1096).
			infix(700,xfx,@<,_1122):-call(_1122).
			infix(700,xfx,@>,_1148):-call(_1148).
			infix(700,xfx,@=<,_1174):-call(_1174).
			infix(700,xfx,@>=,_1200):-call(_1200).
			infix(700,xfx,=:=,_1226):-call(_1226).
			infix(700,xfx,<,_1252):-call(_1252).
			infix(700,xfx,=<,_1278):-call(_1278).
			infix(700,xfx,>,_1304):-call(_1304).
			infix(700,xfx,>=,_1330):-call(_1330).
			infix(550,xfy,:,_1356):-call(_1356).
			infix(500,yfx,+,_1382):-call(_1382).
			infix(500,yfx,-,_1408):-call(_1408).
			infix(500,yfx,#,_1434):-call(_1434).
			infix(400,yfx,*,_1460):-call(_1460).
			infix(400,yfx,/,_1486):-call(_1486).
			infix(400,yfx,//,_1512):-call(_1512).
			infix(400,yfx,<<,_1538):-call(_1538).
			infix(400,yfx,>>,_1564):-call(_1564).
			infix(300,xfx,mod,_1590):-call(_1590).
			infix(200,xfy,^,_1616):-call(_1616).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_infix_3__1(Prolog* mach);

			static Operation exec_pred_infix_3__2(Prolog* mach);

			static Operation exec_pred_infix_3__3(Prolog* mach);

			static Operation exec_pred_infix_3__4(Prolog* mach);

			static Operation exec_pred_infix_3__5(Prolog* mach);

			static Operation exec_pred_infix_3__6(Prolog* mach);

			static Operation exec_pred_infix_3__7(Prolog* mach);

			static Operation exec_pred_infix_3__8(Prolog* mach);

			static Operation exec_pred_infix_3__9(Prolog* mach);

			static Operation exec_pred_infix_3__10(Prolog* mach);

			static Operation exec_pred_infix_3__11(Prolog* mach);

			static Operation exec_pred_infix_3__12(Prolog* mach);

			static Operation exec_pred_infix_3__13(Prolog* mach);

			static Operation exec_pred_infix_3__14(Prolog* mach);

			static Operation exec_pred_infix_3__15(Prolog* mach);

			static Operation exec_pred_infix_3__16(Prolog* mach);

			static Operation exec_pred_infix_3__17(Prolog* mach);

			static Operation exec_pred_infix_3__18(Prolog* mach);

			static Operation exec_pred_infix_3__19(Prolog* mach);

			static Operation exec_pred_infix_3__20(Prolog* mach);

			static Operation exec_pred_infix_3__21(Prolog* mach);

			static Operation exec_pred_infix_3__22(Prolog* mach);

			static Operation exec_pred_infix_3__23(Prolog* mach);

			static Operation exec_pred_infix_3__24(Prolog* mach);

			static Operation exec_pred_infix_3__25(Prolog* mach);

			static Operation exec_pred_infix_3__26(Prolog* mach);

			static Operation exec_pred_infix_3__27(Prolog* mach);

			static Operation exec_pred_infix_3__28(Prolog* mach);
		};

	public:
		class pred_prefix_3 : public Code {

			/*
			
			prefix(1200,fx,:-,_1642):-call(_1642).
			prefix(1200,fx,?-,_1668):-call(_1668).
			prefix(500,fx,+,_1694):-call(_1694).
			prefix(500,fx,-,_1720):-call(_1720).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_prefix_3__1(Prolog* mach);

			static Operation exec_pred_prefix_3__2(Prolog* mach);

			static Operation exec_pred_prefix_3__3(Prolog* mach);

			static Operation exec_pred_prefix_3__4(Prolog* mach);
		};

	public:
		class pred_maketerm_3 : public Code {

			/*
			
			maketerm([var(_1740,_1742,_1744)],_1752,_1754,_1762):-unify(_1740,_1752,cut(1,_1762)).
			maketerm([int(_1796)],_1804,_1806,_1814):-cut(1,unify(_1796,_1804,_1814)).
			maketerm([const(_1848)],_1856,_1858,_1866):-cut(1,unify(_1848,_1856,_1866)).
			maketerm([const(_1900),const('(')|_1916],_1918,_1920,_1930):-getargs(_1916,_1922,univ(_1918,_1900,_1922,_1930)).
			maketerm(_1966,_1968,_1970,_2014):-ap(_1982,[const(_1974)|_1980],_1966,infix(_1984,_1986,_1974,smallerorequal(_1984,_1970,newprec(_1986,_1984,_1988,_1990,maketerm(_1982,_1992,_1988,maketerm(_1980,_1994,_1990,univ(_1968,_1974,[_1992,_1994],_2014))))))).
			maketerm([const(_2104)|_2110],_2112,_2114,_2136):-prefix(_2116,_2118,_2104,smallerorequal(_2116,_2114,newprec(_2118,_2116,_2120,maketerm(_2110,_2122,_2120,univ(_2112,_2104,[_2122],_2136))))).
			maketerm([const('[')|_2210],[_2214|_2216],_2218,_2248):-ap(_2230,[const(',')|_2228],_2210,maketerm(_2230,_2214,900,maketerm([const('[')|_2228],_2216,900,_2248))).
			maketerm([const('[')|_2304],[_2308|_2310],_2312,_2344):-ap(_2324,[const('|')|_2322],_2304,ap(_2336,[const(']')],_2322,maketerm(_2324,_2308,900,maketerm(_2336,_2310,900,_2344)))).
			maketerm([const('(')|_2410],_2412,_2414,_2434):-ap(_2426,[const(')')],_2410,cut(1,maketerm(_2426,_2412,_2434))).
			maketerm([const('[')|_2484],[_2488],_2492,_2512):-ap(_2504,[const(']')],_2484,maketerm(_2504,_2488,900,_2512)).
			maketerm([const('['),const(']')],[],_2570,_2580):-call(_2580).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_maketerm_3__1(Prolog* mach);

			static Operation exec_pred_maketerm_3__2(Prolog* mach);

			static Operation exec_pred_maketerm_3__3(Prolog* mach);

			static Operation exec_pred_maketerm_3__4(Prolog* mach);

			static Operation exec_pred_maketerm_3__5(Prolog* mach);

			static Operation exec_pred_maketerm_3__6(Prolog* mach);

			static Operation exec_pred_maketerm_3__7(Prolog* mach);

			static Operation exec_pred_maketerm_3__8(Prolog* mach);

			static Operation exec_pred_maketerm_3__9(Prolog* mach);

			static Operation exec_pred_maketerm_3__10(Prolog* mach);

			static Operation exec_pred_maketerm_3__11(Prolog* mach);
		};

	public:
		class pred_newprec_4 : public Code {

			/*
			
			newprec(xfx,_2598,_2600,_2602,_2622):-cut(1,is(_2600,_2598-1,is(_2602,_2598-1,_2622))).
			newprec(xfy,_2664,_2666,_2668,_2682):-cut(1,is(_2666,_2664-1,unify(_2664,_2668,_2682))).
			newprec(yfx,_2724,_2726,_2728,_2742):-cut(1,is(_2728,_2724-1,unify(_2724,_2726,_2742))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_newprec_4__1(Prolog* mach);

			static Operation exec_pred_newprec_4__2(Prolog* mach);

			static Operation exec_pred_newprec_4__3(Prolog* mach);
		};

	public:
		class pred_newprec_3 : public Code {

			/*
			
			newprec(fx,_2784,_2786,_2800):-cut(1,is(_2786,_2784-1,_2800)).
			newprec(fy,_2832,_2832,_2842):-call(_2842).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_newprec_3__1(Prolog* mach);

			static Operation exec_pred_newprec_3__2(Prolog* mach);
		};

	public:
		class pred_getargs_2 : public Code {

			/*
			
			getargs(_2860,_2862,_2890):-ap(_2874,[const(')')],_2860,maketerm(_2874,_2876,900,unify([_2876],_2862,_2890))).
			getargs(_2934,_2936,_2964):-ap(_2948,[const(',')|_2946],_2934,maketerm(_2948,_2950,900,unify([_2950|_2956],_2936,getargs(_2946,_2956,_2964)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_getargs_2__1(Prolog* mach);

			static Operation exec_pred_getargs_2__2(Prolog* mach);
		};

	public:
		class pred_maketerm_2 : public Code {

			/*
			
			maketerm(_3016,_3018,_3026):-maketerm(_3016,_3018,1200,_3026).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_maketerm_2__1(Prolog* mach);
		};

	public:
		class pred_ap_3 : public Code {

			/*
			
			ap([],_3052,_3052,_3062):-call(_3062).
			ap([_3082|_3084],_3092,[_3082|_3090],_3100):-ap(_3084,_3092,_3090,_3100).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_ap_3__1(Prolog* mach);

			static Operation exec_pred_ap_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef SXX_READ
