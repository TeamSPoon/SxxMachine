#ifndef BOYER
#define BOYER

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

	class boyer {
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
		static Const* const  s_a;
		static Const* const  s_add1;
		static Const* const  s_and;
		static Const* const  s_append;
		static Const* const  s_arg;
		static Const* const  s_assignedp;
		static Const* const  s_assignment;
		static Const* const  s_assume_false;
		static Const* const  s_assume_true;
		static Const* const  s_atomic;
		static Const* const  s_b;
		static Const* const  s_big_plus;
		static Const* const  s_big_plus1;
		static Const* const  s_boolean;
		static Const* const  s_boyer_difference;
		static Const* const  s_boyer_member;
		static Const* const  s_c;
		static Const* const  s_call;
		static Const* const  s_car;
		static Const* const  s_cdr;
		static Const* const  s_codegen;
		static Const* const  s_compile;
		static Const* const  s_cons;
		static Const* const  s_count_list;
		static Const* const  s_countps_;
		static Const* const  s_countps_loop;
		static Const* const  s_d;
		static Const* const  s_decr;
		static Const* const  s_delete;
		static Const* const  s_divides;
		static Const* const  s_dsort;
		static Const* const  s_eq;
		static Const* const  s_eqp;
		static Const* const  s_equal;
		static Const* const  s_even1;
		static Const* const  s_exec;
		static Const* const  s46;
		static Const* const  s_exp;
		static Const* const  s_f;
		static Const* const  s_fact_;
		static Const* const  s_fact_loop;
		static Const* const  s_fail;
		static Const* const  s_falsep;
		static Const* const  s_falsify;
		static Const* const  s_falsify1;
		static Const* const  s_fix;
		static Const* const  s_flatten;
		static Const* const  s_functor;
		static Const* const  s_gcd;
		static Const* const  s_get;
		static Const* const  s_go;
		static Const* const  s_gopher;
		static Const* const  s_greatereqp;
		static Const* const  s_greatereqpr;
		static Const* const  s_greaterp;
		static Const* const  s_greatest_factor;
		static Const* const  s_if;
		static Const* const  s_iff;
		static Const* const  s_implies;
		static Const* const  s_intersect;
		static Const* const  s_is;
		static Const* const  s_last;
		static Const* const  s_length;
		static Const* const  s_lesseqp;
		static Const* const  s_lessp;
		static Const* const  s_listp;
		static Const* const  s_mc_flatten;
		static Const* const  s_meaning;
		static Const* const  s_myboyer_member;
		static Const* const  s_mylength;
		static Const* const  s_myplus;
		static Const* const  s_nlistp;
		static Const* const  s_normalize;
		static Const* const  s_not;
		static Const* const  s_nth;
		static Const* const  s_numberp;
		static Const* const  s_odd;
		static Const* const  s_optimize;
		static Const* const  s_or;
		static Const* const  s_plus_fringe;
		static Const* const  s_plus_tree;
		static Const* const  s_power_eval;
		static Const* const  s_power_rep;
		static Const* const  s_prime;
		static Const* const  s_prime1;
		static Const* const  s_prime_list;
		static Const* const  s_quotient;
		static Const* const  s_remainder;
		static Const* const  s_reverse;
		static Const* const  s_reverse_;
		static Const* const  s_reverse_loop;
		static Const* const  s_rewrite;
		static Const* const  s_rewrite_args;
		static Const* const  s_runtime;
		static Const* const  s_samefringe;
		static Const* const  s_set;
		static Const* const  s_sigma;
		static Const* const  s_sort2;
		static Const* const  s_sort_lp;
		static Const* const  s_statistics;
		static Const* const  s_t;
		static Const* const  s_tautology;
		static Const* const  s_tautology_checker;
		static Const* const  s_tautologyp;
		static Const* const  s_times;
		static Const* const  s_times_list;
		static Const* const  s_top;
		static Const* const  s_true;
		static Const* const  s_truep;
		static Const* const  s_unify;
		static Const* const  s_value;
		static Const* const  s_wff;
		static Const* const  s_write;
		static Const* const  s_x;
		static Const* const  s_y;
		static Const* const  s_zero;
		static Const* const  s_zerop;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint6;
		static const Operation reg_go_0;
		static const Operation reg_top_0;
		static const Operation reg_wff_1;
		static const Operation reg_tautology_1;
		static const Operation reg_tautology_3;
		static const Operation reg_rewrite_2;
		static const Operation reg_rewrite_args_3;
		static const Operation reg_truep_2;
		static const Operation reg_falsep_2;
		static const Operation reg_boyer_member_2;
		static const Operation reg_equal_2;
		static const Operation reg_boyer_difference_3;
		static const Operation reg_eq_3;
		static const Operation reg_exp_3;
		static const Operation reg_gcd_3;
		static const Operation reg_mylength_2;
		static const Operation reg_lessp_3;
		static const Operation reg_meaning_3;
		static const Operation reg_myboyer_member_3;
		static const Operation reg_nth_3;
		static const Operation reg_myplus_3;
		static const Operation reg_power_eval_3;
		static const Operation reg_quotient_3;
		static const Operation reg_remainder_3;
		static const Operation reg_reverse_loop_3;
		static const Operation reg_times_3;

	public:
		class pred_go_0 : public Code {

			/*
			
			go(_5642):-statistics(runtime,[_5516,_5522],wff(_5534,rewrite(_5534,_5540,tautology(_5540,[],[],statistics(runtime,[_5552,_5558],write('execution time is ',write(_5558,write(' milliseconds',_5642)))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_go_0__1(Prolog* mach);
		};

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_6076):-wff(_6028,rewrite(_6028,_6034,tautology(_6034,[],[],_6076))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_wff_1 : public Code {

			/*
			
			wff(implies(and(implies(_6260,_6262),and(implies(_6262,_6268),and(implies(_6268,_6274),implies(_6274,_6280)))),implies(_6260,_6280)),_6500):-unify(f(myplus(myplus(a,b),myplus(c,zero))),_6260,unify(f(times(times(a,b),myplus(c,d))),_6262,unify(f(reverse(append(append(a,b),[]))),_6268,unify(equal(myplus(a,b),boyer_difference(x,y)),_6274,unify(lessp(remainder(a,b),boyer_member(a,length(b))),_6280,_6500))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_wff_1__1(Prolog* mach);
		};

	public:
		class pred_tautology_1 : public Code {

			/*
			
			tautology(_982,_992):-rewrite(_982,_984,tautology(_984,[],[],_992)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_tautology_1__1(Prolog* mach);
		};

	public:
		class pred_tautology_3 : public Code {

			/*
			
			tautology(_1024,_1026,_1028,_1172):-or((truep(_1024,_1026)->true),(falsep(_1024,_1028)->fail;_1024=if(_1056,_1058,_1060)->(truep(_1056,_1026)->tautology(_1058,_1026,_1028);falsep(_1056,_1028)->tautology(_1060,_1026,_1028);tautology(_1058,[_1056|_1026],_1028),tautology(_1060,_1026,[_1056|_1028]))),cut(1,_1172)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_tautology_3__1(Prolog* mach);
		};

	public:
		class pred_rewrite_2 : public Code {

			/*
			
			rewrite(_1204,_1204,_1212):-atomic(_1204,cut(1,_1212)).
			rewrite(_1240,_1242,_1280):-functor(_1240,_1244,_1246,functor(_1248,_1244,_1246,rewrite_args(_1246,_1240,_1248,or((equal(_1248,_1254),rewrite(_1254,_1242)),_1242=_1248,cut(1,_1280))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rewrite_2__1(Prolog* mach);

			static Operation exec_pred_rewrite_2__2(Prolog* mach);
		};

	public:
		class pred_rewrite_args_3 : public Code {

			/*
			
			rewrite_args(0,_1340,_1342,_1350):-cut(1,_1350).
			rewrite_args(_1374,_1376,_1378,_1398):-arg(_1374,_1376,_1380,arg(_1374,_1378,_1382,rewrite(_1380,_1382,is(_1390,_1374-1,rewrite_args(_1390,_1376,_1378,_1398))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rewrite_args_3__1(Prolog* mach);

			static Operation exec_pred_rewrite_args_3__2(Prolog* mach);
		};

	public:
		class pred_truep_2 : public Code {

			/*
			
			truep(t,_1462,_1470):-cut(1,_1470).
			truep(_1492,_1494,_1502):-boyer_member(_1492,_1494,_1502).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_truep_2__1(Prolog* mach);

			static Operation exec_pred_truep_2__2(Prolog* mach);
		};

	public:
		class pred_falsep_2 : public Code {

			/*
			
			falsep(f,_1526,_1534):-cut(1,_1534).
			falsep(_1556,_1558,_1566):-boyer_member(_1556,_1558,_1566).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_falsep_2__1(Prolog* mach);

			static Operation exec_pred_falsep_2__2(Prolog* mach);
		};

	public:
		class pred_boyer_member_2 : public Code {

			/*
			
			boyer_member(_1592,[_1592|_1594],_1602):-cut(1,_1602).
			boyer_member(_1630,[_1626|_1628],_1638):-boyer_member(_1630,_1628,_1638).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_boyer_member_2__1(Prolog* mach);

			static Operation exec_pred_boyer_member_2__2(Prolog* mach);
		};

	public:
		class pred_equal_2 : public Code {

			/*
			
			equal(and(_1664,_1666),if(_1664,if(_1666,t,f),f),_1692):-call(_1692).
			equal(append(append(_1710,_1712),_1718),append(_1710,append(_1712,_1718)),_1740):-call(_1740).
			equal(assignment(_1764,append(_1758,_1760)),if(assignedp(_1764,_1758),assignment(_1764,_1758),assignment(_1764,_1760)),_1802):-call(_1802).
			equal(assume_false(_1820,_1822),cons(cons(_1820,f),_1822),_1844):-call(_1844).
			equal(assume_true(_1862,_1864),cons(cons(_1862,t),_1864),_1886):-call(_1886).
			equal(boolean(_1904),or(equal(_1904,t),equal(_1904,f)),_1932):-call(_1932).
			equal(car(gopher(_1950)),if(listp(_1950),car(flatten(_1950)),zero),_1984):-call(_1984).
			equal(compile(_2002),reverse(codegen(optimize(_2002),[])),_2026):-call(_2026).
			equal(count_list(_2050,sort_lp(_2044,_2046)),myplus(count_list(_2050,_2044),count_list(_2050,_2046)),_2080):-call(_2080).
			equal(countps_(_2098,_2100),countps_loop(_2098,_2100,zero),_2118):-call(_2118).
			equal(boyer_difference(_2136,_2138),_2140,_2148):-boyer_difference(_2136,_2138,_2140,_2148).
			equal(divides(_2176,_2178),zerop(remainder(_2178,_2176)),_2198):-call(_2198).
			equal(dsort(_2216),sort2(_2216),_2230):-call(_2230).
			equal(eqp(_2248,_2250),equal(fix(_2248),fix(_2250)),_2274):-call(_2274).
			equal(equal(_2292,_2294),_2296,_2304):-eq(_2292,_2294,_2296,_2304).
			equal(even1(_2332),if(zerop(_2332),t,odd(decr(_2332))),_2362):-call(_2362).
			equal(exec(append(_2380,_2382),_2388,_2390),exec(_2382,exec(_2380,_2388,_2390),_2390),_2416):-call(_2416).
			equal(exp(_2434,_2436),_2438,_2446):-exp(_2434,_2436,_2438,_2446).
			equal(fact_(_2474),fact_loop(_2474,1),_2490):-call(_2490).
			equal(falsify(_2508),falsify1(normalize(_2508),[]),_2528):-call(_2528).
			equal(fix(_2546),if(numberp(_2546),_2546,zero),_2568):-call(_2568).
			equal(flatten(cdr(gopher(_2586))),if(listp(_2586),cdr(flatten(_2586)),cons(zero,[])),_2630):-call(_2630).
			equal(gcd(_2648,_2650),_2652,_2660):-gcd(_2648,_2650,_2652,_2660).
			equal(get(_2696,set(_2688,_2690,_2692)),if(eqp(_2696,_2688),_2690,get(_2696,_2692)),_2728):-call(_2728).
			equal(greatereqp(_2746,_2748),not(lessp(_2746,_2748)),_2768):-call(_2768).
			equal(greatereqpr(_2786,_2788),not(lessp(_2786,_2788)),_2808):-call(_2808).
			equal(greaterp(_2826,_2828),lessp(_2828,_2826),_2844):-call(_2844).
			equal(if(if(_2862,_2864,_2866),_2872,_2874),if(_2862,if(_2864,_2872,_2874),if(_2866,_2872,_2874)),_2908):-call(_2908).
			equal(iff(_2926,_2928),and(implies(_2926,_2928),implies(_2928,_2926)),_2956):-call(_2956).
			equal(implies(_2974,_2976),if(_2974,if(_2976,t,f),t),_3002):-call(_3002).
			equal(last(append(_3020,_3022)),if(listp(_3022),last(_3022),if(listp(_3020),cons(car(last(_3020))),_3022)),_3076):-call(_3076).
			equal(length(_3094),_3096,_3104):-mylength(_3094,_3096,_3104).
			equal(lesseqp(_3130,_3132),not(lessp(_3132,_3130)),_3152):-call(_3152).
			equal(lessp(_3170,_3172),_3174,_3182):-lessp(_3170,_3172,_3174,_3182).
			equal(listp(gopher(_3210)),listp(_3210),_3228):-call(_3228).
			equal(mc_flatten(_3246,_3248),append(flatten(_3246),_3248),_3268):-call(_3268).
			equal(meaning(_3286,_3288),_3290,_3298):-meaning(_3286,_3288,_3290,_3298).
			equal(boyer_member(_3326,_3328),_3330,_3338):-myboyer_member(_3326,_3328,_3330,_3338).
			equal(not(_3366),if(_3366,f,t),_3384):-call(_3384).
			equal(nth(_3402,_3404),_3406,_3414):-nth(_3402,_3404,_3406,_3414).
			equal(numberp(greatest_factor(_3442,_3444)),not(and(or(zerop(_3444),equal(_3444,1)),not(numberp(_3442)))),_3492):-call(_3492).
			equal(or(_3510,_3512),if(_3510,t,if(_3512,t,f),f),_3540):-call(_3540).
			equal(myplus(_3558,_3560),_3562,_3570):-myplus(_3558,_3560,_3562,_3570).
			equal(power_eval(_3598,_3600),_3602,_3610):-power_eval(_3598,_3600,_3602,_3610).
			equal(prime(_3638),and(not(zerop(_3638)),and(not(equal(_3638,add1(zero))),prime1(_3638,decr(_3638)))),_3692):-call(_3692).
			equal(prime_list(append(_3710,_3712)),and(prime_list(_3710),prime_list(_3712)),_3740):-call(_3740).
			equal(quotient(_3758,_3760),_3762,_3770):-quotient(_3758,_3760,_3762,_3770).
			equal(remainder(_3798,_3800),_3802,_3810):-remainder(_3798,_3800,_3802,_3810).
			equal(reverse_(_3838),reverse_loop(_3838,[]),_3854):-call(_3854).
			equal(reverse(append(_3872,_3874)),append(reverse(_3874),reverse(_3872)),_3902):-call(_3902).
			equal(reverse_loop(_3920,_3922),_3924,_3932):-reverse_loop(_3920,_3922,_3924,_3932).
			equal(samefringe(_3960,_3962),equal(flatten(_3960),flatten(_3962)),_3986):-call(_3986).
			equal(sigma(zero,_4006),quotient(times(_4006,add1(_4006)),2),_4032):-call(_4032).
			equal(sort2(delete(_4050,_4052)),delete(_4050,sort2(_4052)),_4076):-call(_4076).
			equal(tautology_checker(_4094),tautologyp(normalize(_4094),[]),_4114):-call(_4114).
			equal(times(_4132,_4134),_4136,_4144):-times(_4132,_4134,_4136,_4144).
			equal(times_list(append(_4172,_4174)),times(times_list(_4172),times_list(_4174)),_4202):-call(_4202).
			equal(value(normalize(_4220),_4226),value(_4220,_4226),_4242):-call(_4242).
			equal(zerop(_4260),or(equal(_4260,zero),not(numberp(_4260))),_4290):-call(_4290).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_equal_2__1(Prolog* mach);

			static Operation exec_pred_equal_2__2(Prolog* mach);

			static Operation exec_pred_equal_2__3(Prolog* mach);

			static Operation exec_pred_equal_2__4(Prolog* mach);

			static Operation exec_pred_equal_2__5(Prolog* mach);

			static Operation exec_pred_equal_2__6(Prolog* mach);

			static Operation exec_pred_equal_2__7(Prolog* mach);

			static Operation exec_pred_equal_2__8(Prolog* mach);

			static Operation exec_pred_equal_2__9(Prolog* mach);

			static Operation exec_pred_equal_2__10(Prolog* mach);

			static Operation exec_pred_equal_2__11(Prolog* mach);

			static Operation exec_pred_equal_2__12(Prolog* mach);

			static Operation exec_pred_equal_2__13(Prolog* mach);

			static Operation exec_pred_equal_2__14(Prolog* mach);

			static Operation exec_pred_equal_2__15(Prolog* mach);

			static Operation exec_pred_equal_2__16(Prolog* mach);

			static Operation exec_pred_equal_2__17(Prolog* mach);

			static Operation exec_pred_equal_2__18(Prolog* mach);

			static Operation exec_pred_equal_2__19(Prolog* mach);

			static Operation exec_pred_equal_2__20(Prolog* mach);

			static Operation exec_pred_equal_2__21(Prolog* mach);

			static Operation exec_pred_equal_2__22(Prolog* mach);

			static Operation exec_pred_equal_2__23(Prolog* mach);

			static Operation exec_pred_equal_2__24(Prolog* mach);

			static Operation exec_pred_equal_2__25(Prolog* mach);

			static Operation exec_pred_equal_2__26(Prolog* mach);

			static Operation exec_pred_equal_2__27(Prolog* mach);

			static Operation exec_pred_equal_2__28(Prolog* mach);

			static Operation exec_pred_equal_2__29(Prolog* mach);

			static Operation exec_pred_equal_2__30(Prolog* mach);

			static Operation exec_pred_equal_2__31(Prolog* mach);

			static Operation exec_pred_equal_2__32(Prolog* mach);

			static Operation exec_pred_equal_2__33(Prolog* mach);

			static Operation exec_pred_equal_2__34(Prolog* mach);

			static Operation exec_pred_equal_2__35(Prolog* mach);

			static Operation exec_pred_equal_2__36(Prolog* mach);

			static Operation exec_pred_equal_2__37(Prolog* mach);

			static Operation exec_pred_equal_2__38(Prolog* mach);

			static Operation exec_pred_equal_2__39(Prolog* mach);

			static Operation exec_pred_equal_2__40(Prolog* mach);

			static Operation exec_pred_equal_2__41(Prolog* mach);

			static Operation exec_pred_equal_2__42(Prolog* mach);

			static Operation exec_pred_equal_2__43(Prolog* mach);

			static Operation exec_pred_equal_2__44(Prolog* mach);

			static Operation exec_pred_equal_2__45(Prolog* mach);

			static Operation exec_pred_equal_2__46(Prolog* mach);

			static Operation exec_pred_equal_2__47(Prolog* mach);

			static Operation exec_pred_equal_2__48(Prolog* mach);

			static Operation exec_pred_equal_2__49(Prolog* mach);

			static Operation exec_pred_equal_2__50(Prolog* mach);

			static Operation exec_pred_equal_2__51(Prolog* mach);

			static Operation exec_pred_equal_2__52(Prolog* mach);

			static Operation exec_pred_equal_2__53(Prolog* mach);

			static Operation exec_pred_equal_2__54(Prolog* mach);

			static Operation exec_pred_equal_2__55(Prolog* mach);

			static Operation exec_pred_equal_2__56(Prolog* mach);

			static Operation exec_pred_equal_2__57(Prolog* mach);

			static Operation exec_pred_equal_2__58(Prolog* mach);

			static Operation exec_pred_equal_2__59(Prolog* mach);
		};

	public:
		class pred_boyer_difference_3 : public Code {

			/*
			
			boyer_difference(_4306,_4306,zero,_4314):-cut(1,_4314).
			boyer_difference(myplus(_4340,_4342),_4340,fix(_4342),_4354):-cut(1,_4354).
			boyer_difference(myplus(_4380,_4382),_4382,fix(_4380),_4394):-cut(1,_4394).
			boyer_difference(myplus(_4420,_4422),myplus(_4420,_4428),boyer_difference(_4422,_4428),_4442):-cut(1,_4442).
			boyer_difference(myplus(_4474,myplus(_4468,_4470)),_4468,myplus(_4474,_4470),_4490):-cut(1,_4490).
			boyer_difference(add1(myplus(_4516,_4518)),_4518,add1(_4516),_4534):-cut(1,_4534).
			boyer_difference(add1(add1(_4560)),2,fix(_4560),_4578):-call(_4578).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_boyer_difference_3__1(Prolog* mach);

			static Operation exec_pred_boyer_difference_3__2(Prolog* mach);

			static Operation exec_pred_boyer_difference_3__3(Prolog* mach);

			static Operation exec_pred_boyer_difference_3__4(Prolog* mach);

			static Operation exec_pred_boyer_difference_3__5(Prolog* mach);

			static Operation exec_pred_boyer_difference_3__6(Prolog* mach);

			static Operation exec_pred_boyer_difference_3__7(Prolog* mach);
		};

	public:
		class pred_eq_3 : public Code {

			/*
			
			eq(myplus(_4598,_4600),zero,and(zerop(_4598),zerop(_4600)),_4622):-cut(1,_4622).
			eq(myplus(_4648,_4650),myplus(_4648,_4656),equal(fix(_4650),fix(_4656)),_4678):-cut(1,_4678).
			eq(zero,boyer_difference(_4704,_4706),not(lessp(_4706,_4704)),_4724):-cut(1,_4724).
			eq(_4750,boyer_difference(_4750,_4752),and(numberp(_4750),and(or(equal(_4750,zero),zerop(_4752)))),_4790):-cut(1,_4790).
			eq(times(_4816,_4818),zero,or(zerop(_4816),zerop(_4818)),_4840):-cut(1,_4840).
			eq(append(_4866,_4868),append(_4866,_4874),equal(_4868,_4874),_4888):-cut(1,_4888).
			eq(flatten(_4914),cons(_4918,[]),and(nlistp(_4914),equal(_4914,_4918)),_4944):-cut(1,_4944).
			eq(greatest_factor(_4970,_4972),zero,and(or(zerop(_4972),equal(_4972,1)),equal(_4970,zero)),_5008):-cut(1,_5008).
			eq(greatest_factor(_5034,_5036),1,equal(_5034,1),_5050):-cut(1,_5050).
			eq(_5078,times(_5076,_5078),and(numberp(_5078),or(equal(_5078,zero),equal(_5076,1))),_5114):-cut(1,_5114).
			eq(_5140,times(_5140,_5142),or(equal(_5140,zero),and(numberp(_5140),equal(_5142,1))),_5178):-cut(1,_5178).
			eq(times(_5204,_5206),1,and(not(equal(_5204,zero)),and(not(equal(_5206,zero)),and(numberp(_5204),and(numberp(_5206),and(equal(decr(_5204),zero),equal(decr(_5206),zero)))))),_5292):-cut(1,_5292).
			eq(boyer_difference(_5318,_5320),boyer_difference(_5324,_5320),if(lessp(_5318,_5320),not(lessp(_5320,_5324)),if(lessp(_5324,_5320),not(lessp(_5320,_5318)),equal(fix(_5318),fix(_5324)))),_5396):-cut(1,_5396).
			eq(lessp(_5422,_5424),_5436,if(lessp(_5422,_5424),equal(t,_5436),equal(f,_5436)),_5460):-call(_5460).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_eq_3__1(Prolog* mach);

			static Operation exec_pred_eq_3__2(Prolog* mach);

			static Operation exec_pred_eq_3__3(Prolog* mach);

			static Operation exec_pred_eq_3__4(Prolog* mach);

			static Operation exec_pred_eq_3__5(Prolog* mach);

			static Operation exec_pred_eq_3__6(Prolog* mach);

			static Operation exec_pred_eq_3__7(Prolog* mach);

			static Operation exec_pred_eq_3__8(Prolog* mach);

			static Operation exec_pred_eq_3__9(Prolog* mach);

			static Operation exec_pred_eq_3__10(Prolog* mach);

			static Operation exec_pred_eq_3__11(Prolog* mach);

			static Operation exec_pred_eq_3__12(Prolog* mach);

			static Operation exec_pred_eq_3__13(Prolog* mach);

			static Operation exec_pred_eq_3__14(Prolog* mach);
		};

	public:
		class pred_exp_3 : public Code {

			/*
			
			exp(_5486,myplus(_5480,_5482),times(exp(_5486,_5480),exp(_5486,_5482)),_5508):-cut(1,_5508).
			exp(_5540,times(_5534,_5536),exp(exp(_5540,_5534),_5536),_5558):-call(_5558).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_exp_3__1(Prolog* mach);

			static Operation exec_pred_exp_3__2(Prolog* mach);
		};

	public:
		class pred_gcd_3 : public Code {

			/*
			
			gcd(_5580,_5578,gcd(_5578,_5580),_5588):-cut(1,_5588).
			gcd(times(_5614,_5616),times(_5620,_5616),times(_5616,gcd(_5614,_5620)),_5644):-call(_5644).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_gcd_3__1(Prolog* mach);

			static Operation exec_pred_gcd_3__2(Prolog* mach);
		};

	public:
		class pred_mylength_2 : public Code {

			/*
			
			mylength(reverse(_5664),length(_5664),_5678):-call(_5678).
			mylength(cons(_5726,cons(_5720,cons(_5714,cons(_5708,cons(_5702,cons(_5696,_5698)))))),myplus(6,length(_5698)),_5748):-call(_5748).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_mylength_2__1(Prolog* mach);

			static Operation exec_pred_mylength_2__2(Prolog* mach);
		};

	public:
		class pred_lessp_3 : public Code {

			/*
			
			lessp(remainder(_5766,_5768),_5768,not(zerop(_5768)),_5784):-cut(1,_5784).
			lessp(quotient(_5810,_5812),_5810,and(not(zerop(_5810)),or(zerop(_5812),not(equal(_5812,1)))),_5854):-cut(1,_5854).
			lessp(remainder(_5880,_5882),_5880,and(not(zerop(_5882)),and(not(zerop(_5880)),not(lessp(_5880,_5882)))),_5928):-cut(1,_5928).
			lessp(myplus(_5954,_5956),myplus(_5954,_5962),lessp(_5956,_5962),_5976):-cut(1,_5976).
			lessp(times(_6002,_6004),times(_6008,_6004),and(not(zerop(_6004)),lessp(_6002,_6008)),_6038):-cut(1,_6038).
			lessp(_6066,myplus(_6064,_6066),not(zerop(_6064)),_6082):-cut(1,_6082).
			lessp(length(delete(_6108,_6110)),length(_6110),boyer_member(_6108,_6110),_6134):-call(_6134).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_lessp_3__1(Prolog* mach);

			static Operation exec_pred_lessp_3__2(Prolog* mach);

			static Operation exec_pred_lessp_3__3(Prolog* mach);

			static Operation exec_pred_lessp_3__4(Prolog* mach);

			static Operation exec_pred_lessp_3__5(Prolog* mach);

			static Operation exec_pred_lessp_3__6(Prolog* mach);

			static Operation exec_pred_lessp_3__7(Prolog* mach);
		};

	public:
		class pred_meaning_3 : public Code {

			/*
			
			meaning(plus_tree(append(_6154,_6156)),_6170,myplus(meaning(plus_tree(_6154),_6170),meaning(plus_tree(_6156),_6170)),_6194):-cut(1,_6194).
			meaning(plus_tree(plus_fringe(_6220)),_6230,fix(meaning(_6220,_6230)),_6242):-cut(1,_6242).
			meaning(plus_tree(delete(_6268,_6270)),_6290,if(boyer_member(_6268,_6270),boyer_difference(meaning(plus_tree(_6270),_6290),meaning(_6268,_6290)),meaning(plus_tree(_6270),_6290)),_6330):-call(_6330).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_meaning_3__1(Prolog* mach);

			static Operation exec_pred_meaning_3__2(Prolog* mach);

			static Operation exec_pred_meaning_3__3(Prolog* mach);
		};

	public:
		class pred_myboyer_member_3 : public Code {

			/*
			
			myboyer_member(_6356,append(_6350,_6352),or(boyer_member(_6356,_6350),boyer_member(_6356,_6352)),_6378):-cut(1,_6378).
			myboyer_member(_6408,reverse(_6404),boyer_member(_6408,_6404),_6418):-cut(1,_6418).
			myboyer_member(_6450,intersect(_6444,_6446),and(boyer_member(_6450,_6444),boyer_member(_6450,_6446)),_6474):-call(_6474).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_myboyer_member_3__1(Prolog* mach);

			static Operation exec_pred_myboyer_member_3__2(Prolog* mach);

			static Operation exec_pred_myboyer_member_3__3(Prolog* mach);
		};

	public:
		class pred_nth_3 : public Code {

			/*
			
			nth(zero,_6492,zero,_6502):-call(_6502).
			nth([],_6522,if(zerop(_6522),[],zero),_6540):-call(_6540).
			nth(append(_6560,_6562),_6568,append(nth(_6560,_6568),nth(_6562,boyer_difference(_6568,length(_6560)))),_6600):-call(_6600).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_nth_3__1(Prolog* mach);

			static Operation exec_pred_nth_3__2(Prolog* mach);

			static Operation exec_pred_nth_3__3(Prolog* mach);
		};

	public:
		class pred_myplus_3 : public Code {

			/*
			
			myplus(myplus(_6620,_6622),_6628,myplus(_6620,myplus(_6622,_6628)),_6642):-cut(1,_6642).
			myplus(remainder(_6668,_6670),times(_6670,quotient(_6668,_6670)),fix(_6668),_6694):-cut(1,_6694).
			myplus(_6728,add1(_6720),if(numberp(_6720),add1(myplus(_6728,_6720)),add1(_6728)),_6756):-call(_6756).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_myplus_3__1(Prolog* mach);

			static Operation exec_pred_myplus_3__2(Prolog* mach);

			static Operation exec_pred_myplus_3__3(Prolog* mach);
		};

	public:
		class pred_power_eval_3 : public Code {

			/*
			
			power_eval(big_plus1(_6776,_6778,_6780),_6780,myplus(power_eval(_6776,_6780),_6778),_6800):-cut(1,_6800).
			power_eval(power_rep(_6826,_6828),_6828,fix(_6826),_6840):-cut(1,_6840).
			power_eval(big_plus(_6866,_6868,_6870,_6872),_6872,myplus(_6870,myplus(power_eval(_6866,_6872),power_eval(_6868,_6872))),_6904):-cut(1,_6904).
			power_eval(big_plus(power_rep(_6930,_6932),power_rep(_6936,_6932),zero,_6932),_6932,myplus(_6930,_6936),_6964):-call(_6964).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_power_eval_3__1(Prolog* mach);

			static Operation exec_pred_power_eval_3__2(Prolog* mach);

			static Operation exec_pred_power_eval_3__3(Prolog* mach);

			static Operation exec_pred_power_eval_3__4(Prolog* mach);
		};

	public:
		class pred_quotient_3 : public Code {

			/*
			
			quotient(myplus(_6984,myplus(_6984,_6986)),2,myplus(_6984,quotient(_6986,2)),_7014):-call(_7014).
			quotient(times(_7034,_7036),_7034,if(zerop(_7034),zero,fix(_7036)),_7062):-call(_7062).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_quotient_3__1(Prolog* mach);

			static Operation exec_pred_quotient_3__2(Prolog* mach);
		};

	public:
		class pred_remainder_3 : public Code {

			/*
			
			remainder(_7080,1,zero,_7088):-cut(1,_7088).
			remainder(_7112,_7112,zero,_7120):-cut(1,_7120).
			remainder(times(_7146,_7148),_7148,zero,_7156):-cut(1,_7156).
			remainder(times(_7182,_7184),_7182,zero,_7194):-call(_7194).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_remainder_3__1(Prolog* mach);

			static Operation exec_pred_remainder_3__2(Prolog* mach);

			static Operation exec_pred_remainder_3__3(Prolog* mach);

			static Operation exec_pred_remainder_3__4(Prolog* mach);
		};

	public:
		class pred_reverse_loop_3 : public Code {

			/*
			
			reverse_loop(_7214,_7220,append(reverse(_7214),_7220),_7228):-cut(1,_7228).
			reverse_loop(_7254,[],reverse(_7254),_7264):-call(_7264).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_reverse_loop_3__1(Prolog* mach);

			static Operation exec_pred_reverse_loop_3__2(Prolog* mach);
		};

	public:
		class pred_times_3 : public Code {

			/*
			
			times(_7290,myplus(_7284,_7286),myplus(times(_7290,_7284),times(_7290,_7286)),_7312):-cut(1,_7312).
			times(times(_7338,_7340),_7346,times(_7338,times(_7340,_7346)),_7360):-cut(1,_7360).
			times(_7394,boyer_difference(_7386,_7388),boyer_difference(times(_7386,_7394),times(_7388,_7394)),_7414):-cut(1,_7414).
			times(_7448,add1(_7440),if(numberp(_7440),myplus(_7448,times(_7448,_7440)),fix(_7448)),_7478):-call(_7478).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_times_3__1(Prolog* mach);

			static Operation exec_pred_times_3__2(Prolog* mach);

			static Operation exec_pred_times_3__3(Prolog* mach);

			static Operation exec_pred_times_3__4(Prolog* mach);
		};

	};

}


#endif	//#ifndef BOYER
