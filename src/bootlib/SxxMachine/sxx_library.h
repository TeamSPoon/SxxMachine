#ifndef SXX_LIBRARY
#define SXX_LIBRARY

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
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;

	class sxx_library {
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
		static Const* const  s_Yes;
		static Const* const  s_addfindall;
		static Const* const  s_allassumed;
		static Const* const  s_append;
		static Const* const  s_arithequal;
		static Const* const  s_assume;
		static Const* const  s_assumed;
		static Const* const  s_assumeduring;
		static Const* const  s_atom;
		static Const* const  s_atomic;
		static Const* const  s_atomic2;
		static Const* const  s_call;
		static Const* const  s_compare;
		static Const* const  s_copy_term;
		static Const* const  s_cputime;
		static Const* const  s_exec;
		static Const* const  s_execcontinuation;
		static Const* const  s_execdisj;
		static Const* const  s_execpendinggoals;
		static Const* const  s_fail;
		static Const* const  s_findall;
		static Const* const  s_findall2;
		static Const* const  s_freeze;
		static Const* const  s_freeze_internal;
		static Const* const  s_get0;
		static Const* const  s_initfindall;
		static Const* const  s_integer;
		static Const* const  s_is;
		static Const* const  s_loop;
		static Const* const  s_m1;
		static Const* const  s_max;
		static Const* const  s52;
		static Const* const  s_nl;
		static Const* const  s_not;
		static Const* const  s_noteq;
		static Const* const  s_notmore;
		static Const* const  s_nrev;
		static Const* const  s_or;
		static Const* const  s_retrievefindall;
		static Const* const  s_runtime;
		static Const* const  s_smallerorequal;
		static Const* const  s_smallerthan;
		static Const* const  s_smeq;
		static Const* const  s_smgr;
		static Const* const  s_sort;
		static Const* const  s_specialgoal;
		static Const* const  s_split;
		static Const* const  s_statistics;
		static Const* const  s_termequal;
		static Const* const  s_termgreaterequal;
		static Const* const  s_termgreaterthan;
		static Const* const  s_termsmallerequal;
		static Const* const  s_termsmallerthan;
		static Const* const  s_time;
		static Const* const  s_top;
		static Const* const  s_toplevel;
		static Const* const  s_true;
		static Const* const  s_type_of;
		static Const* const  s_unify;
		static Const* const  s_untilend;
		static Const* const  s_var;
		static Const* const  s_vread;
		static Const* const  s_write;
		static Const* const  s_writevars;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint10;
		static const Operation reg_toplevel_0;
		static const Operation reg_top_0;
		static const Operation reg_notmore_0;
		static const Operation reg_noteq_2;
		static const Operation reg_untilend_1;
		static const Operation reg_writevars_1;
		static const Operation reg_nrev_2;
		static const Operation reg_append_3;
		static const Operation reg_max_3;
		static const Operation reg_sort_2;
		static const Operation reg_split_4;
		static const Operation reg_time_1;
		static const Operation reg_exec_1;
		static const Operation reg_execdisj_2;
		static const Operation reg_loop_1;
		static const Operation reg_or_2;
		static const Operation reg_findall_3;
		static const Operation reg_findall2_4;
		static const Operation reg_copy_term_2;
		static const Operation reg_var_1;
		static const Operation reg_atomic_1;
		static const Operation reg_atomic2_1;
		static const Operation reg_atom_1;
		static const Operation reg_integer_1;
		static const Operation reg_assumeduring_2;
		static const Operation reg_assumed_1;
		static const Operation reg_m1_2;
		static const Operation reg_statistics_2;
		static const Operation reg_specialgoal_2;
		static const Operation reg_termsmallerthan_2;
		static const Operation reg_termgreaterthan_2;
		static const Operation reg_termsmallerequal_2;
		static const Operation reg_smeq_1;
		static const Operation reg_termgreaterequal_2;
		static const Operation reg_smgr_1;
		static const Operation reg_termequal_2;
		static const Operation reg_not_1;
		static const Operation reg_freeze_2;
		static const Operation reg_execpendinggoals_1;

	public:
		class pred_toplevel_0 : public Code {

			/*
			
			toplevel(_400):-top(fail(_400)).
			toplevel(_426):-toplevel(_426).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_toplevel_0__1(Prolog* mach);

			static Operation exec_pred_toplevel_0__2(Prolog* mach);
		};

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_452):-write('?- ',vread(_442,_444,exec(_442,writevars(_444,write('Yes',nl(notmore(cut(1,fail(_452))))))))).
			top(_520):-top(_520).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);

			static Operation exec_pred_top_0__2(Prolog* mach);
		};

	public:
		class pred_notmore_0 : public Code {

			/*
			
			notmore(_544):-write('more? ',get0(_536,noteq(_536,10,cut(1,untilend(_536,fail(_544)))))).
			notmore(_600):-call(_600).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_notmore_0__1(Prolog* mach);

			static Operation exec_pred_notmore_0__2(Prolog* mach);
		};

	public:
		class pred_noteq_2 : public Code {

			/*
			
			noteq(_612,_612,_620):-cut(1,fail(_620)).
			noteq(_646,_648,_658):-call(_658).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_noteq_2__1(Prolog* mach);

			static Operation exec_pred_noteq_2__2(Prolog* mach);
		};

	public:
		class pred_untilend_1 : public Code {

			/*
			
			untilend(10,_680):-cut(1,_680).
			untilend(_700,_710):-get0(_702,untilend(_702,_710)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_untilend_1__1(Prolog* mach);

			static Operation exec_pred_untilend_1__2(Prolog* mach);
		};

	public:
		class pred_writevars_1 : public Code {

			/*
			
			writevars([],_744):-call(_744).
			writevars([_760=_762|_768],_776):-write(_762,write(' = ',write(_760,nl(fail(_776))))).
			writevars([_818|_820],_828):-writevars(_820,_828).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_writevars_1__1(Prolog* mach);

			static Operation exec_pred_writevars_1__2(Prolog* mach);

			static Operation exec_pred_writevars_1__3(Prolog* mach);
		};

	public:
		class pred_nrev_2 : public Code {

			/*
			
			nrev([],[],_854):-cut(1,_854).
			nrev([_878|_880],_882,_898):-nrev(_880,_884,append(_884,[_878],_882,_898)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_nrev_2__1(Prolog* mach);

			static Operation exec_pred_nrev_2__2(Prolog* mach);
		};

	public:
		class pred_append_3 : public Code {

			/*
			
			append([],_932,_932,_942):-call(_942).
			append([_962|_964],_972,[_962|_970],_980):-append(_964,_972,_970,_980).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_append_3__1(Prolog* mach);

			static Operation exec_pred_append_3__2(Prolog* mach);
		};

	public:
		class pred_max_3 : public Code {

			/*
			
			max(_1008,_1010,_1010,_1018):-smallerthan(_1008,_1010,_1018).
			max(_1044,_1046,_1044,_1054):-smallerthan(_1046,_1044,_1054).
			max(_1080,_1080,_1080,_1090):-call(_1090).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_max_3__1(Prolog* mach);

			static Operation exec_pred_max_3__2(Prolog* mach);

			static Operation exec_pred_max_3__3(Prolog* mach);
		};

	public:
		class pred_sort_2 : public Code {

			/*
			
			sort([],[],_1114):-cut(1,_1114).
			sort([_1138|_1140],_1142,_1164):-split(_1138,_1140,_1144,_1146,sort(_1144,_1148,sort(_1146,_1150,append(_1148,[_1138|_1150],_1142,_1164)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_sort_2__1(Prolog* mach);

			static Operation exec_pred_sort_2__2(Prolog* mach);
		};

	public:
		class pred_split_4 : public Code {

			/*
			
			split(_1218,[],[],[],_1226):-cut(1,_1226).
			split(_1264,[_1254|_1256],[_1254|_1262],_1266,_1274):-smallerthan(_1254,_1264,cut(1,split(_1264,_1256,_1262,_1266,_1274))).
			split(_1332,[_1322|_1324],_1334,[_1322|_1330],_1342):-split(_1332,_1324,_1334,_1330,_1342).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_split_4__1(Prolog* mach);

			static Operation exec_pred_split_4__2(Prolog* mach);

			static Operation exec_pred_split_4__3(Prolog* mach);
		};

	public:
		class pred_time_1 : public Code {

			/*
			
			time(_1374,_1394):-cputime(_1376,exec(_1374,cputime(_1378,is(_1386,_1378-_1376,write(_1386,nl(_1394)))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_time_1__1(Prolog* mach);
		};

	public:
		class pred_exec_1 : public Code {

			/*
			
			exec(_1444,_1452):-var(_1444,cut(1,fail(_1452))).
			exec((_1484,_1486),_1494):-cut(1,exec(_1484,exec(_1486,_1494))).
			exec((_1528->_1530),_1544):-cut(1,execdisj((_1528->_1530),true,_1544)).
			exec((_1574;_1576),_1584):-cut(1,execdisj(_1574,_1576,_1584)).
			exec(_1612,_1622):-specialgoal(_1612,_1614,cut(1,exec(_1614,_1622))).
			exec(_1656,_1664):-call(_1656,_1664).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_exec_1__1(Prolog* mach);

			static Operation exec_pred_exec_1__2(Prolog* mach);

			static Operation exec_pred_exec_1__3(Prolog* mach);

			static Operation exec_pred_exec_1__4(Prolog* mach);

			static Operation exec_pred_exec_1__5(Prolog* mach);

			static Operation exec_pred_exec_1__6(Prolog* mach);
		};

	public:
		class pred_execdisj_2 : public Code {

			/*
			
			execdisj((_1686->_1688),_1690,_1698):-exec(_1686,cut(1,exec(_1688,_1698))).
			execdisj((_1734->_1736),_1738,_1746):-cut(1,exec(_1738,_1746)).
			execdisj(_1774,_1776,_1784):-exec(_1774,_1784).
			execdisj(_1806,_1808,_1816):-exec(_1808,_1816).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_execdisj_2__1(Prolog* mach);

			static Operation exec_pred_execdisj_2__2(Prolog* mach);

			static Operation exec_pred_execdisj_2__3(Prolog* mach);

			static Operation exec_pred_execdisj_2__4(Prolog* mach);
		};

	public:
		class pred_loop_1 : public Code {

			/*
			
			loop(0,_1844):-cut(1,_1844).
			loop(_1864,_1880):-is(_1872,_1864-1,loop(_1872,_1880)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_loop_1__1(Prolog* mach);

			static Operation exec_pred_loop_1__2(Prolog* mach);
		};

	public:
		class pred_or_2 : public Code {

			/*
			
			or(_1908,_1910,_1918):-exec(_1908,_1918).
			or(_1940,_1942,_1950):-exec(_1942,_1950).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_or_2__1(Prolog* mach);

			static Operation exec_pred_or_2__2(Prolog* mach);
		};

	public:
		class pred_findall_3 : public Code {

			/*
			
			findall(_1972,_1974,_1976,_1986):-initfindall(_1978,findall2(_1972,_1974,_1976,_1978,_1986)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_findall_3__1(Prolog* mach);
		};

	public:
		class pred_findall2_4 : public Code {

			/*
			
			findall2(_2022,_2024,_2026,_2028,_2036):-exec(_2024,addfindall(_2022,_2028,fail(_2036))).
			findall2(_2074,_2076,_2078,_2080,_2088):-retrievefindall(_2078,_2080,_2088).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_findall2_4__1(Prolog* mach);

			static Operation exec_pred_findall2_4__2(Prolog* mach);
		};

	public:
		class pred_copy_term_2 : public Code {

			/*
			
			copy_term(_2116,_2118,_2138):-findall(_2122,_2122=_2116,[_2118],_2138).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_copy_term_2__1(Prolog* mach);
		};

	public:
		class pred_var_1 : public Code {

			/*
			
			var(_2164,_2172):-type_of(_2164,var,_2172).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_var_1__1(Prolog* mach);
		};

	public:
		class pred_atomic_1 : public Code {

			/*
			
			atomic(_2194,_2204):-type_of(_2194,_2196,atomic2(_2196,_2204)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_atomic_1__1(Prolog* mach);
		};

	public:
		class pred_atomic2_1 : public Code {

			/*
			
			atomic2(atom,_2238):-cut(1,_2238).
			atomic2(integer,_2266):-call(_2266).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_atomic2_1__1(Prolog* mach);

			static Operation exec_pred_atomic2_1__2(Prolog* mach);
		};

	public:
		class pred_atom_1 : public Code {

			/*
			
			atom(_2280,_2288):-type_of(_2280,atom,_2288).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_atom_1__1(Prolog* mach);
		};

	public:
		class pred_integer_1 : public Code {

			/*
			
			integer(_2310,_2318):-type_of(_2310,integer,_2318).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_integer_1__1(Prolog* mach);
		};

	public:
		class pred_assumeduring_2 : public Code {

			/*
			
			assumeduring(_2340,_2342,_2356):-assume(_2342-_2348,exec(_2340,unify(1,_2348,_2356))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_assumeduring_2__1(Prolog* mach);
		};

	public:
		class pred_assumed_1 : public Code {

			/*
			
			assumed(_2392,_2402):-allassumed(_2394,m1(_2392,_2394,_2402)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_assumed_1__1(Prolog* mach);
		};

	public:
		class pred_m1_2 : public Code {

			/*
			
			m1(_2432,[_2432-_2434|_2440],_2448):-var(_2434,_2448).
			m1(_2476,[_2472|_2474],_2484):-m1(_2476,_2474,_2484).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_m1_2__1(Prolog* mach);

			static Operation exec_pred_m1_2__2(Prolog* mach);
		};

	public:
		class pred_statistics_2 : public Code {

			/*
			
			statistics(runtime,[_2510,_2516],_2526):-cputime(_2510,_2526).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_statistics_2__1(Prolog* mach);
		};

	public:
		class pred_specialgoal_2 : public Code {

			/*
			
			specialgoal(_2550<_2552,smallerthan(_2550,_2552),_2566):-cut(1,_2566).
			specialgoal(_2590=<_2592,smallerorequal(_2590,_2592),_2606):-cut(1,_2606).
			specialgoal(_2630>_2632,smallerthan(_2632,_2630),_2646):-cut(1,_2646).
			specialgoal(_2670>=_2672,smallerorequal(_2672,_2670),_2686):-cut(1,_2686).
			specialgoal(_2710=:=_2712,arithequal(_2712,_2710),_2726):-cut(1,_2726).
			specialgoal(_2750=_2752,unify(_2752,_2750),_2766):-cut(1,_2766).
			specialgoal((_2790;_2792),or(_2790,_2792),_2806):-cut(1,_2806).
			specialgoal(_2830@<_2832,termsmallerthan(_2830,_2832),_2846):-cut(1,_2846).
			specialgoal(_2870@>_2872,termgreaterthan(_2870,_2872),_2886):-cut(1,_2886).
			specialgoal(_2910@=<_2912,termsmallerequal(_2910,_2912),_2926):-cut(1,_2926).
			specialgoal(_2950@>=_2952,termgreaterequal(_2950,_2952),_2966):-cut(1,_2966).
			specialgoal(_2990==_2992,termequal(_2990,_2992),_3006):-cut(1,_3006).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_specialgoal_2__1(Prolog* mach);

			static Operation exec_pred_specialgoal_2__2(Prolog* mach);

			static Operation exec_pred_specialgoal_2__3(Prolog* mach);

			static Operation exec_pred_specialgoal_2__4(Prolog* mach);

			static Operation exec_pred_specialgoal_2__5(Prolog* mach);

			static Operation exec_pred_specialgoal_2__6(Prolog* mach);

			static Operation exec_pred_specialgoal_2__7(Prolog* mach);

			static Operation exec_pred_specialgoal_2__8(Prolog* mach);

			static Operation exec_pred_specialgoal_2__9(Prolog* mach);

			static Operation exec_pred_specialgoal_2__10(Prolog* mach);

			static Operation exec_pred_specialgoal_2__11(Prolog* mach);

			static Operation exec_pred_specialgoal_2__12(Prolog* mach);
		};

	public:
		class pred_termsmallerthan_2 : public Code {

			/*
			
			termsmallerthan(_3028,_3030,_3038):-compare(<,_3028,_3030,_3038).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_termsmallerthan_2__1(Prolog* mach);
		};

	public:
		class pred_termgreaterthan_2 : public Code {

			/*
			
			termgreaterthan(_3064,_3066,_3074):-compare(>,_3064,_3066,_3074).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_termgreaterthan_2__1(Prolog* mach);
		};

	public:
		class pred_termsmallerequal_2 : public Code {

			/*
			
			termsmallerequal(_3100,_3102,_3112):-compare(_3104,_3100,_3102,smeq(_3104,_3112)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_termsmallerequal_2__1(Prolog* mach);
		};

	public:
		class pred_smeq_1 : public Code {

			/*
			
			smeq(<,_3150):-cut(1,_3150).
			smeq(=,_3178):-call(_3178).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_smeq_1__1(Prolog* mach);

			static Operation exec_pred_smeq_1__2(Prolog* mach);
		};

	public:
		class pred_termgreaterequal_2 : public Code {

			/*
			
			termgreaterequal(_3192,_3194,_3204):-compare(_3196,_3192,_3194,smgr(_3196,_3204)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_termgreaterequal_2__1(Prolog* mach);
		};

	public:
		class pred_smgr_1 : public Code {

			/*
			
			smgr(>,_3242):-cut(1,_3242).
			smgr(=,_3270):-call(_3270).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_smgr_1__1(Prolog* mach);

			static Operation exec_pred_smgr_1__2(Prolog* mach);
		};

	public:
		class pred_termequal_2 : public Code {

			/*
			
			termequal(_3284,_3286,_3294):-compare(=,_3284,_3286,_3294).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_termequal_2__1(Prolog* mach);
		};

	public:
		class pred_not_1 : public Code {

			/*
			
			not(_3320,_3328):-exec(_3320,cut(1,fail(_3328))).
			not(_3358,_3368):-call(_3368).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_not_1__1(Prolog* mach);

			static Operation exec_pred_not_1__2(Prolog* mach);
		};

	public:
		class pred_freeze_2 : public Code {

			/*
			
			freeze(_3382,_3384,_3392):-var(_3382,cut(1,freeze_internal(_3382,_3384,_3392))).
			freeze(_3428,_3430,_3438):-exec(_3430,_3438).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_freeze_2__1(Prolog* mach);

			static Operation exec_pred_freeze_2__2(Prolog* mach);
		};

	public:
		class pred_execpendinggoals_1 : public Code {

			/*
			
			execpendinggoals([],_3466):-execcontinuation(_3466).
			execpendinggoals([_3486|_3488],_3496):-exec(_3486,execpendinggoals(_3488,_3496)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_execpendinggoals_1__1(Prolog* mach);

			static Operation exec_pred_execpendinggoals_1__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef SXX_LIBRARY
