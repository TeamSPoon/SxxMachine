#ifndef SDDA
#define SDDA

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

	class sdda {
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
		static Const* const  s_a;
		static Const* const  s_add_to_list;
		static Const* const  s_all_shared;
		static Const* const  s_atom;
		static Const* const  s_atomic;
		static Const* const  s_bind_all;
		static Const* const  s_body_exit_mode;
		static Const* const  s_build_name;
		static Const* const  s_built_in;
		static Const* const  s_c;
		static Const* const  s_call;
		static Const* const  s_clause_exit_mode;
		static Const* const  s_clause_exit_modes_list;
		static Const* const  s_concat;
		static Const* const  s_do_sdda;
		static Const* const  s_dup;
		static Const* const  s_dup_var;
		static Const* const  s_entry_exit_modes_list;
		static Const* const  s_eqmember;
		static Const* const  s_equiv;
		static Const* const  s_equiv_vars;
		static Const* const  s_fail;
		static Const* const  s_functor;
		static Const* const  s_g;
		static Const* const  s_is;
		static Const* const  s_length;
		static Const* const  s_look_up_act;
		static Const* const  s_make_name;
		static Const* const  s_member;
		static Const* const  s_mod;
		static Const* const  s_name;
		static Const* const  s_name_vars;
		static Const* const  s_nl;
		static Const* const  s_nonvar;
		static Const* const  s_not;
		static Const* const  s_or;
		static Const* const  s_proc_exit_mode;
		static Const* const  s_read_procedures;
		static Const* const  s_smallerthan;
		static Const* const  s_smember;
		static Const* const  s_sumember;
		static Const* const  s_termequal;
		static Const* const  s_test;
		static Const* const  s_top;
		static Const* const  s_true;
		static Const* const  s_umember;
		static Const* const  s_unify;
		static Const* const  s_var;
		static Const* const  s_worst_case;
		static Const* const  s_write;
		static Const* const  s_write_list2;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint3;
		static Int* const  posint26;
		static const Operation reg_top_0;
		static const Operation reg_do_sdda_4;
		static const Operation reg_read_procedures_3;
		static const Operation reg_entry_exit_modes_list_3;
		static const Operation reg_proc_exit_mode_6;
		static const Operation reg_clause_exit_modes_list_6;
		static const Operation reg_clause_exit_mode_5;
		static const Operation reg_body_exit_mode_4;
		static const Operation reg_unify_2;
		static const Operation reg_equiv_2;
		static const Operation reg_equiv_3;
		static const Operation reg_equiv_vars_3;
		static const Operation reg_dup_2;
		static const Operation reg_dup_3;
		static const Operation reg_dup_var_3;
		static const Operation reg_built_in_3;
		static const Operation reg_worst_case_2;
		static const Operation reg_look_up_act_2;
		static const Operation reg_all_shared_2;
		static const Operation reg_bind_all_2;
		static const Operation reg_add_to_list_2;
		static const Operation reg_umember_2;
		static const Operation reg_sumember_2;
		static const Operation reg_member_2;
		static const Operation reg_smember_2;
		static const Operation reg_eqmember_2;
		static const Operation reg_concat_3;
		static const Operation reg_nl_0;
		static const Operation reg_write_list2_3;
		static const Operation reg_name_vars_3;
		static const Operation reg_make_name_2;
		static const Operation reg_build_name_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5382):-do_sdda(test,_5356,_5358,_5360,_5382).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_do_sdda_4 : public Code {

			/*
			
			do_sdda(_5488,_5490,_5492,_5494,_5562):-read_procedures(_5498,_5490,_5502,entry_exit_modes_list(_5498,_5490,_5502,_5562)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_do_sdda_4__1(Prolog* mach);
		};

	public:
		class pred_read_procedures_3 : public Code {

			/*
			
			read_procedures([[a/2,a(_5768,_5770),a(_5780,_5780)|_5788],[c/3,(c(_5810,_5812,_5814):-a(_5810,_5812))|_5832]|_5838],_5858,[c(_5842,_5844,_5846)|_5852],_5900):-cut(1,_5900).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_read_procedures_3__1(Prolog* mach);
		};

	public:
		class pred_entry_exit_modes_list_3 : public Code {

			/*
			
			entry_exit_modes_list(_5970,_5972,_5974,_6018):-var(_5974,_6018).
			entry_exit_modes_list(_6130,_6132,[_6124|_6126],_6238):- =..(_6124,[_6138|_6140],length(_6140,_6152,proc_exit_mode(_6130,_6132,[],_6138/_6152,_6140,_6172,entry_exit_modes_list(_6130,_6132,_6126,_6238)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_entry_exit_modes_list_3__1(Prolog* mach);

			static Operation exec_pred_entry_exit_modes_list_3__2(Prolog* mach);
		};

	public:
		class pred_proc_exit_mode_6 : public Code {

			/*
			
			proc_exit_mode(_6584,_6586,_6588,_6578/_6580,_6592,_6594,_6666):-built_in(_6578/_6580,_6592,_6594,_6666).
			proc_exit_mode(_6836,_6838,_6840,_6830/_6832,_6844,_6846,_6934):-look_up_act([_6830/_6832,_6844,_6846],_6838,_6934).
			proc_exit_mode(_7090,_7092,_7094,_7084/_7086,_7098,_7100,_7292):-umember([_7084/_7086|_7112],_7090,dup(_7112,_7124,clause_exit_modes_list(_7090,_7092,_7094,_7124,_7098,_7138,or((_7138=[]->fail),true,worst_case(_7138,_7100,dup(_7098,_7168,add_to_list([_7084/_7086,_7168,_7100],_7092,_7292))))))).
			proc_exit_mode(_7810,_7812,_7814,_7804/_7806,_7818,_7820,_7938):- =..(_7830,[_7804|_7818],all_shared(_7818,_7820,add_to_list([_7804/_7806,_7818,_7820],_7812,_7938))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_proc_exit_mode_6__1(Prolog* mach);

			static Operation exec_pred_proc_exit_mode_6__2(Prolog* mach);

			static Operation exec_pred_proc_exit_mode_6__3(Prolog* mach);

			static Operation exec_pred_proc_exit_mode_6__4(Prolog* mach);
		};

	public:
		class pred_clause_exit_modes_list_6 : public Code {

			/*
			
			clause_exit_modes_list(_1236,_1238,_1240,_1242,_1244,[],_1252):-var(_1242,cut(1,_1252)).
			clause_exit_modes_list(_1294,_1296,_1298,[_1290|_1292],_1300,_1302,_1322):-eqmember([_1290,_1300],_1298,clause_exit_modes_list(_1294,_1296,_1298,_1292,_1300,_1302,_1322)).
			clause_exit_modes_list(_1382,_1384,_1386,[_1372|_1374],_1388,[_1378|_1380],_1414):-dup(_1388,_1378,clause_exit_mode(_1382,_1384,[[_1372,_1388]|_1386],_1372,_1378,clause_exit_modes_list(_1382,_1384,_1386,_1374,_1388,_1380,_1414))).
			clause_exit_modes_list(_1482,_1484,_1486,[_1478|_1480],_1488,_1490,_1498):-clause_exit_modes_list(_1482,_1484,_1486,_1480,_1488,_1490,_1498).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_clause_exit_modes_list_6__1(Prolog* mach);

			static Operation exec_pred_clause_exit_modes_list_6__2(Prolog* mach);

			static Operation exec_pred_clause_exit_modes_list_6__3(Prolog* mach);

			static Operation exec_pred_clause_exit_modes_list_6__4(Prolog* mach);
		};

	public:
		class pred_clause_exit_mode_5 : public Code {

			/*
			
			clause_exit_mode(_1538,_1540,_1542,_1544,_1546,_1590):-or(_1544=(_1550:-_1552),(_1544=_1550,_1552=true),=..(_1550,[_1580|_1582],unify(_1582,_1546,body_exit_mode(_1538,_1540,_1542,_1552,_1590)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_clause_exit_mode_5__1(Prolog* mach);
		};

	public:
		class pred_body_exit_mode_4 : public Code {

			/*
			
			body_exit_mode(_1654,_1656,_1658,(_1650,_1652),_1666):-body_exit_mode(_1654,_1656,_1658,_1650,body_exit_mode(_1654,_1656,_1658,_1652,_1666)).
			body_exit_mode(_1710,_1712,_1714,_1716,_1742):-functor(_1716,_1718,_1720,=..(_1716,[_1718|_1726],proc_exit_mode(_1710,_1712,_1714,_1718/_1720,_1726,_1734,unify(_1726,_1734,_1742)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_body_exit_mode_4__1(Prolog* mach);

			static Operation exec_pred_body_exit_mode_4__2(Prolog* mach);
		};

	public:
		class pred_unify_2 : public Code {

			/*
			
			unify(_1804,_1804,_1812):-cut(1,_1812).
			unify(_1834,g,_1848):-atomic(_1834,cut(1,not(_1834=[],_1848))).
			unify(g,_1882,_1896):-atomic(_1882,cut(1,not(_1882=[],_1896))).
			unify([_1932|_1934],[_1938|_1940],_1948):-cut(1,unify(_1932,_1938,unify(_1934,_1940,_1948))).
			unify(_1986,_1988,_2008):- =..(_1986,[_1992|_1994],=..(_1988,[_1992|_2000],unify(_1994,_2000,_2008))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_unify_2__1(Prolog* mach);

			static Operation exec_pred_unify_2__2(Prolog* mach);

			static Operation exec_pred_unify_2__3(Prolog* mach);

			static Operation exec_pred_unify_2__4(Prolog* mach);

			static Operation exec_pred_unify_2__5(Prolog* mach);
		};

	public:
		class pred_equiv_2 : public Code {

			/*
			
			equiv(_2048,_2050,_2060):-equiv(_2048,_2050,_2052,_2060).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_equiv_2__1(Prolog* mach);
		};

	public:
		class pred_equiv_3 : public Code {

			/*
			
			equiv(_2086,_2088,_2090,_2098):-termequal(_2086,_2088,cut(1,_2098)).
			equiv(g,_2130,_2132,_2146):-atomic(_2130,cut(1,not(_2130=[],_2146))).
			equiv(_2182,g,_2184,_2198):-atomic(_2182,cut(1,not(_2182=[],_2198))).
			equiv(_2234,_2236,_2238,_2246):-var(_2234,cut(1,var(_2236,equiv_vars(_2234,_2236,_2238,_2246)))).
			equiv(_2292,_2294,_2296,_2304):-var(_2294,cut(1,var(_2292,equiv_vars(_2292,_2294,_2296,_2304)))).
			equiv([_2352|_2354],[_2358|_2360],_2362,_2370):-cut(1,equiv(_2352,_2358,_2362,equiv(_2354,_2360,_2362,_2370))).
			equiv(_2414,_2416,_2418,_2438):- =..(_2414,[_2422|_2424],=..(_2416,[_2422|_2430],equiv(_2424,_2430,_2418,_2438))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_equiv_3__1(Prolog* mach);

			static Operation exec_pred_equiv_3__2(Prolog* mach);

			static Operation exec_pred_equiv_3__3(Prolog* mach);

			static Operation exec_pred_equiv_3__4(Prolog* mach);

			static Operation exec_pred_equiv_3__5(Prolog* mach);

			static Operation exec_pred_equiv_3__6(Prolog* mach);

			static Operation exec_pred_equiv_3__7(Prolog* mach);
		};

	public:
		class pred_equiv_vars_3 : public Code {

			/*
			
			equiv_vars(_2482,_2484,_2486,_2512):-var(_2486,cut(1,unify([[_2482,_2484]|_2504],_2486,_2512))).
			equiv_vars(_2568,_2570,[[_2552,_2558]|_2566],_2578):-termequal(_2568,_2552,cut(1,termequal(_2570,_2558,_2578))).
			equiv_vars(_2636,_2638,[[_2620,_2626]|_2634],_2646):-termequal(_2638,_2626,cut(1,termequal(_2636,_2620,_2646))).
			equiv_vars(_2692,_2694,[_2688|_2690],_2702):-equiv_vars(_2692,_2694,_2690,_2702).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_equiv_vars_3__1(Prolog* mach);

			static Operation exec_pred_equiv_vars_3__2(Prolog* mach);

			static Operation exec_pred_equiv_vars_3__3(Prolog* mach);

			static Operation exec_pred_equiv_vars_3__4(Prolog* mach);
		};

	public:
		class pred_dup_2 : public Code {

			/*
			
			dup(_2730,_2732,_2742):-dup(_2730,_2732,_2734,_2742).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_dup_2__1(Prolog* mach);
		};

	public:
		class pred_dup_3 : public Code {

			/*
			
			dup(_2768,_2770,_2772,_2780):-var(_2768,cut(1,dup_var(_2768,_2770,_2772,_2780))).
			dup(_2820,_2820,_2822,_2830):-atomic(_2820,cut(1,_2830)).
			dup([_2862|_2864],[_2868|_2870],_2872,_2880):-cut(1,dup(_2862,_2868,_2872,dup(_2864,_2870,_2872,_2880))).
			dup(_2924,_2926,_2928,_2950):- =..(_2924,[_2932|_2934],dup(_2934,_2936,_2928,=..(_2926,[_2932|_2936],_2950))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_dup_3__1(Prolog* mach);

			static Operation exec_pred_dup_3__2(Prolog* mach);

			static Operation exec_pred_dup_3__3(Prolog* mach);

			static Operation exec_pred_dup_3__4(Prolog* mach);
		};

	public:
		class pred_dup_var_3 : public Code {

			/*
			
			dup_var(_2994,_2996,_2998,_3024):-var(_2998,cut(1,unify([[_2994,_2996]|_3016],_2998,_3024))).
			dup_var(_3080,_3070,[[_3064,_3070]|_3078],_3088):-termequal(_3080,_3064,cut(1,_3088)).
			dup_var(_3126,_3128,[_3122|_3124],_3136):-dup_var(_3126,_3128,_3124,_3136).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_dup_var_3__1(Prolog* mach);

			static Operation exec_pred_dup_var_3__2(Prolog* mach);

			static Operation exec_pred_dup_var_3__3(Prolog* mach);
		};

	public:
		class pred_built_in_3 : public Code {

			/*
			
			built_in(true/0,[],[],_3178):-call(_3178).
			built_in(fail/0,[],[],_3210):-call(_3210).
			built_in((=)/2,[_3236,_3242],[g,g],_3272):-or(atomic(_3236),atomic(_3242),_3272).
			built_in((=)/2,[_3306,_3312],[_3306,_3306],_3336):-call(_3336).
			built_in((+)/2,[_3362,_3368],[_3362,_3368],_3392):-call(_3392).
			built_in((-)/2,[_3418,_3424],[_3418,_3424],_3448):-call(_3448).
			built_in((*)/2,[_3474,_3480],[_3474,_3480],_3504):-call(_3504).
			built_in((/)/2,[_3530,_3536],[_3530,_3536],_3560):-call(_3560).
			built_in((>=)/2,[_3586,_3592],[_3586,_3592],_3616):-call(_3616).
			built_in((<)/2,[_3642,_3648],[_3642,_3648],_3672):-call(_3672).
			built_in((is)/2,[_3698,_3704],[g,_3704],_3728):-call(_3728).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_built_in_3__1(Prolog* mach);

			static Operation exec_pred_built_in_3__2(Prolog* mach);

			static Operation exec_pred_built_in_3__3(Prolog* mach);

			static Operation exec_pred_built_in_3__4(Prolog* mach);

			static Operation exec_pred_built_in_3__5(Prolog* mach);

			static Operation exec_pred_built_in_3__6(Prolog* mach);

			static Operation exec_pred_built_in_3__7(Prolog* mach);

			static Operation exec_pred_built_in_3__8(Prolog* mach);

			static Operation exec_pred_built_in_3__9(Prolog* mach);

			static Operation exec_pred_built_in_3__10(Prolog* mach);

			static Operation exec_pred_built_in_3__11(Prolog* mach);
		};

	public:
		class pred_worst_case_2 : public Code {

			/*
			
			worst_case([],_3746,_3756):-call(_3756).
			worst_case([_3774|_3776],_3778,_3786):-unify(_3774,_3778,worst_case(_3776,_3778,_3786)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_worst_case_2__1(Prolog* mach);

			static Operation exec_pred_worst_case_2__2(Prolog* mach);
		};

	public:
		class pred_look_up_act_2 : public Code {

			/*
			
			look_up_act(_3818,_3820,_3828):-var(_3820,cut(1,fail(_3828))).
			look_up_act([_3862/_3864,_3874,_3880],[[_3862/_3864,_3898,_3880]|_3912],_3920):-equiv(_3874,_3898,_3920).
			look_up_act([_3946/_3948,_3958,_3964],[_3970|_3972],_4004):-look_up_act([_3946/_3948,_3958,_3964],_3972,_4004).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_look_up_act_2__1(Prolog* mach);

			static Operation exec_pred_look_up_act_2__2(Prolog* mach);

			static Operation exec_pred_look_up_act_2__3(Prolog* mach);
		};

	public:
		class pred_all_shared_2 : public Code {

			/*
			
			all_shared(_4028,_4030,_4044):-unify(_4028,_4032,_4034,bind_all(_4036,_4034,unify(_4028,_4030,_4034,_4044))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_all_shared_2__1(Prolog* mach);
		};

	public:
		class pred_bind_all_2 : public Code {

			/*
			
			bind_all(_4088,_4090,_4098):-var(_4090,_4098).
			bind_all(_4128,[[_4122,_4128]|_4136],_4144):-var(_4128,bind_all(_4128,_4136,_4144)).
			bind_all(_4192,[[_4176,_4182]|_4190],_4200):-bind_all(_4192,_4190,_4200).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_bind_all_2__1(Prolog* mach);

			static Operation exec_pred_bind_all_2__2(Prolog* mach);

			static Operation exec_pred_bind_all_2__3(Prolog* mach);
		};

	public:
		class pred_add_to_list_2 : public Code {

			/*
			
			add_to_list(_4224,_4226,_4240):-var(_4226,unify([_4224|_4232],_4226,_4240)).
			add_to_list(_4276,[_4272|_4274],_4284):-add_to_list(_4276,_4274,_4284).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_add_to_list_2__1(Prolog* mach);

			static Operation exec_pred_add_to_list_2__2(Prolog* mach);
		};

	public:
		class pred_umember_2 : public Code {

			/*
			
			umember(_4308,_4310,_4318):-var(_4310,cut(1,fail(_4318))).
			umember(_4352,[_4352|_4354],_4364):-call(_4364).
			umember(_4386,[_4382|_4384],_4394):-umember(_4386,_4384,_4394).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_umember_2__1(Prolog* mach);

			static Operation exec_pred_umember_2__2(Prolog* mach);

			static Operation exec_pred_umember_2__3(Prolog* mach);
		};

	public:
		class pred_sumember_2 : public Code {

			/*
			
			sumember(_4418,_4420,_4428):-var(_4420,cut(1,fail(_4428))).
			sumember(_4466,[_4462|_4464],_4474):-termequal(_4466,_4462,_4474).
			sumember(_4504,[_4500|_4502],_4512):-sumember(_4504,_4502,_4512).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_sumember_2__1(Prolog* mach);

			static Operation exec_pred_sumember_2__2(Prolog* mach);

			static Operation exec_pred_sumember_2__3(Prolog* mach);
		};

	public:
		class pred_member_2 : public Code {

			/*
			
			member(_4538,[_4538|_4540],_4550):-call(_4550).
			member(_4572,[_4568|_4570],_4580):-member(_4572,_4570,_4580).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_member_2__1(Prolog* mach);

			static Operation exec_pred_member_2__2(Prolog* mach);
		};

	public:
		class pred_smember_2 : public Code {

			/*
			
			smember(_4610,[_4606|_4608],_4618):-termequal(_4610,_4606,_4618).
			smember(_4648,[_4644|_4646],_4656):-smember(_4648,_4646,_4656).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_smember_2__1(Prolog* mach);

			static Operation exec_pred_smember_2__2(Prolog* mach);
		};

	public:
		class pred_eqmember_2 : public Code {

			/*
			
			eqmember(_4686,[_4682|_4684],_4694):-equiv(_4686,_4682,_4694).
			eqmember(_4724,[_4720|_4722],_4732):-eqmember(_4724,_4722,_4732).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_eqmember_2__1(Prolog* mach);

			static Operation exec_pred_eqmember_2__2(Prolog* mach);
		};

	public:
		class pred_concat_3 : public Code {

			/*
			
			concat([],_4756,_4756,_4766):-call(_4766).
			concat([_4786|_4788],_4796,[_4786|_4794],_4804):-concat(_4788,_4796,_4794,_4804).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_concat_3__1(Prolog* mach);

			static Operation exec_pred_concat_3__2(Prolog* mach);
		};

	public:
		class pred_nl_0 : public Code {

			/*
			
			nl(_4840):-call(_4840).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_nl_0__1(Prolog* mach);
		};

	public:
		class pred_write_list2_3 : public Code {

			/*
			
			write_list2([_4854|_4856],_4858,_4860,_4920):-name_vars(_4854,_4858,_4862,write(_4854,or((nonvar(_4856)->write(','),nl,write(' '),write_list2(_4856,_4862,_4860)),_4860=_4862,_4920))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_write_list2_3__1(Prolog* mach);
		};

	public:
		class pred_name_vars_3 : public Code {

			/*
			
			name_vars(_4962,_4964,_4966,_4980):-var(_4962,cut(1,make_name(_4964,_4962,is(_4966,_4964+1,_4980)))).
			name_vars(_5026,_5028,_5028,_5036):-atom(_5026,cut(1,_5036)).
			name_vars([_5068|_5070],_5072,_5074,_5084):-cut(1,name_vars(_5068,_5072,_5076,name_vars(_5070,_5076,_5074,_5084))).
			name_vars(_5128,_5130,_5132,_5146):- =..(_5128,[_5136|_5138],name_vars(_5138,_5130,_5132,_5146)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_name_vars_3__1(Prolog* mach);

			static Operation exec_pred_name_vars_3__2(Prolog* mach);

			static Operation exec_pred_name_vars_3__3(Prolog* mach);

			static Operation exec_pred_name_vars_3__4(Prolog* mach);
		};

	public:
		class pred_make_name_2 : public Code {

			/*
			
			make_name(_5182,_5184,_5222):-is(_5192,_5182//26,is(_5212,_5182 mod 26+"A",build_name(_5192,_5212,_5214,name(_5184,_5214,_5222)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_make_name_2__1(Prolog* mach);
		};

	public:
		class pred_build_name_3 : public Code {

			/*
			
			build_name(0,_5274,[_5274],_5284):-cut(1,_5284).
			build_name(_5314,_5310,[_5310|_5312],_5330):-smallerthan(0,_5314,is(_5322,_5314-1,build_name(_5322,_5310,_5312,_5330))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_build_name_3__1(Prolog* mach);

			static Operation exec_pred_build_name_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef SDDA
