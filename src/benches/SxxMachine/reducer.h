#ifndef REDUCER
#define REDUCER

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

	class reducer {
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
		static Const* const  s_append;
		static Const* const  s_apply;
		static Const* const  s_arg;
		static Const* const  s_arithequal;
		static Const* const  s_atom;
		static Const* const  s_atomic;
		static Const* const  s_b;
		static Const* const  s_bp;
		static Const* const  s_c;
		static Const* const  s_call;
		static Const* const  s_compare;
		static Const* const  s_cond;
		static Const* const  s_cp;
		static Const* const  s_curry;
		static Const* const  s_currylist;
		static Const* const  s_diffv;
		static Const* const  s_diffv_2;
		static Const* const  s_diffv_3;
		static Const* const  s_end;
		static Const* const  s_eval;
		static Const* const  s_eval1;
		static Const* const  s_fac;
		static Const* const  s_false;
		static Const* const  s_functor;
		static Const* const  s_hd;
		static Const* const  s_i;
		static Const* const  s_inserthead;
		static Const* const  s_inserttail;
		static Const* const  s_intersectv;
		static Const* const  s_intersectv_2;
		static Const* const  s_intersectv_3;
		static Const* const  s_intersectv_list;
		static Const* const  s_inv;
		static Const* const  s_inv_2;
		static Const* const  s_is;
		static Const* const  s_k;
		static Const* const  s_list_functor_name;
		static Const* const  s_listify;
		static Const* const  s_listify_list;
		static Const* const  s_make_list;
		static Const* const  s_member;
		static Const* const  s_mod;
		static Const* const  s_notinv;
		static Const* const  s_notinv_2;
		static Const* const  s_notinv_3;
		static Const* const  s_number;
		static Const* const  s_or;
		static Const* const  s_quick;
		static Const* const  s_quick2;
		static Const* const  s_relop;
		static Const* const  s_s;
		static Const* const  s_small_subsetv;
		static Const* const  s_smallerorequal;
		static Const* const  s_smallerthan;
		static Const* const  s_sp;
		static Const* const  s_split;
		static Const* const  s_subsetv;
		static Const* const  s_subsetv_2;
		static Const* const  s_t;
		static Const* const  s_t_append;
		static Const* const  s_t_argvars;
		static Const* const  s_t_def;
		static Const* const  s_t_redex;
		static Const* const  s_t_reduce;
		static Const* const  s_t_rule1;
		static Const* const  s_t_rule2;
		static Const* const  s_t_trans;
		static Const* const  s_t_vars;
		static Const* const  s_termequal;
		static Const* const  s_tl;
		static Const* const  s_top;
		static Const* const  s_true;
		static Const* const  s_try;
		static Const* const  s_unify;
		static Const* const  s_unionv;
		static Const* const  s_unionv_2;
		static Const* const  s_unionv_3;
		static Const* const  s_var;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint3;
		static const Operation reg_top_0;
		static const Operation reg_try_2;
		static const Operation reg_end_1;
		static const Operation reg_list_functor_name_1;
		static const Operation reg_t_def_3;
		static const Operation reg_t_reduce_2;
		static const Operation reg_t_append_4;
		static const Operation reg_t_redex_2;
		static const Operation reg_eval_4;
		static const Operation reg_eval1_3;
		static const Operation reg_relop_3;
		static const Operation reg_t_3;
		static const Operation reg_t_argvars_3;
		static const Operation reg_curry_2;
		static const Operation reg_currylist_3;
		static const Operation reg_t_vars_2;
		static const Operation reg_t_trans_4;
		static const Operation reg_t_rule1_8;
		static const Operation reg_t_rule2_9;
		static const Operation reg_make_list_2;
		static const Operation reg_listify_2;
		static const Operation reg_listify_list_4;
		static const Operation reg_member_2;
		static const Operation reg_append_3;
		static const Operation reg_intersectv_3;
		static const Operation reg_intersectv_2_4;
		static const Operation reg_intersectv_3_6;
		static const Operation reg_intersectv_list_2;
		static const Operation reg_$002D$002D$003E_2;
		static const Operation reg_diffv_3;
		static const Operation reg_diffv_2_4;
		static const Operation reg_diffv_3_6;
		static const Operation reg_unionv_3;
		static const Operation reg_unionv_2_4;
		static const Operation reg_unionv_3_6;
		static const Operation reg_subsetv_2;
		static const Operation reg_subsetv_2_4;
		static const Operation reg_small_subsetv_2;
		static const Operation reg_inv_2;
		static const Operation reg_inv_2_3;
		static const Operation reg_notinv_2;
		static const Operation reg_notinv_2_2;
		static const Operation reg_notinv_3_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5508):-try(fac(3),_5452,try(quick([3,1,2]),_5480,_5508)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_try_2 : public Code {

			/*
			
			try(_5636,_5638,_5714):-listify(_5636,_5644,curry(_5644,_5650,t_reduce(_5650,_5656,make_list(_5656,_5638,_5714)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_try_2__1(Prolog* mach);
		};

	public:
		class pred_end_1 : public Code {

			/*
			
			end(_5964,_6002):-atom(_5964,cut(1,_6002)).
			end(_6092,_6126):-termequal(_6092,[],_6126).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_end_1__1(Prolog* mach);

			static Operation exec_pred_end_1__2(Prolog* mach);
		};

	public:
		class pred_list_functor_name_1 : public Code {

			/*
			
			list_functor_name(_6230,_6272):-functor([_6234|_6236],_6230,_6244,_6272).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_list_functor_name_1__1(Prolog* mach);
		};

	public:
		class pred_t_def_3 : public Code {

			/*
			
			t_def(fac,[_6390],cond(_6390=0,1,_6390*fac(_6390-1)),_6452):-call(_6452).
			t_def(quick,[_6556],cond(_6556=[],[],cond(tl(_6556)=[],_6556,quick2(split(hd(_6556),tl(_6556))))),_6638):-call(_6638).
			t_def(quick2,[_6742],append(quick(hd(_6742)),quick(tl(_6742))),_6796):-call(_6796).
			t_def(split,[_6900,_6906],cond(_6906=[],[[_6900]],cond(hd(_6906)=<_6900,inserthead(hd(_6906),split(_6900,tl(_6906))),inserttail(hd(_6906),split(_6900,tl(_6906))))),_7022):-call(_7022).
			t_def(inserthead,[_7126,_7132],[[_7126|hd(_7132)]|tl(_7132)],_7184):-call(_7184).
			t_def(inserttail,[_7288,_7294],[hd(_7294),_7288|tl(_7294)],_7346):-call(_7346).
			t_def(append,[_7450,_7456],cond(_7450=[],_7456,[hd(_7450)|append(tl(_7450),_7456)]),_7522):-call(_7522).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_def_3__1(Prolog* mach);

			static Operation exec_pred_t_def_3__2(Prolog* mach);

			static Operation exec_pred_t_def_3__3(Prolog* mach);

			static Operation exec_pred_t_def_3__4(Prolog* mach);

			static Operation exec_pred_t_def_3__5(Prolog* mach);

			static Operation exec_pred_t_def_3__6(Prolog* mach);

			static Operation exec_pred_t_def_3__7(Prolog* mach);
		};

	public:
		class pred_t_reduce_2 : public Code {

			/*
			
			t_reduce(_1228,_1230,_1238):-atomic(_1228,cut(1,unify(_1228,_1230,_1238))).
			t_reduce([_1276,_1282|_1284],[_1288,_1294|_1284],_1304):-list_functor_name(_1284,t_reduce(_1282,_1294,cut(1,t_reduce(_1276,_1288,cut(1,_1304))))).
			t_reduce(_1354,_1356,_1370):-t_append(_1358,_1360,_1362,_1354,t_redex(_1362,_1360,cut(1,t_reduce(_1358,_1356,cut(1,_1370))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_reduce_2__1(Prolog* mach);

			static Operation exec_pred_t_reduce_2__2(Prolog* mach);

			static Operation exec_pred_t_reduce_2__3(Prolog* mach);
		};

	public:
		class pred_t_append_4 : public Code {

			/*
			
			t_append(_1426,_1426,_1428,_1428,_1438):-call(_1438).
			t_append([_1460|_1462],_1470,_1472,[_1460|_1468],_1480):-t_append(_1462,_1470,_1472,_1468,_1480).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_append_4__1(Prolog* mach);

			static Operation exec_pred_t_append_4__2(Prolog* mach);
		};

	public:
		class pred_t_redex_2 : public Code {

			/*
			
			t_redex([_1514,_1520,_1526,_1532|sp],[[_1538|_1520],[_1538|_1526]|_1532],_1566):-t_reduce(_1514,_1538,_1566).
			t_redex([_1592,_1598,_1604,_1610|bp],[[_1592|_1598],_1604|_1610],_1640):-call(_1640).
			t_redex([_1658,_1664,_1670,_1676|cp],[_1664,[_1658|_1670]|_1676],_1706):-call(_1706).
			t_redex([_1724,_1730,_1736|s],[[_1742|_1730],_1742|_1736],_1764):-t_reduce(_1724,_1742,_1764).
			t_redex([_1790,_1796,_1802|b],[[_1790|_1796]|_1802],_1826):-call(_1826).
			t_redex([_1844,_1850,_1856|c],[_1850,_1844|_1856],_1880):-call(_1880).
			t_redex([_1898,_1904|k],_1904,_1916):-call(_1916).
			t_redex([_1934|i],_1934,_1946):-call(_1946).
			t_redex([_1964,_1970,_1976|cond],_1970,_1988):-t_reduce(_1976,_1980,unify(true,_1980,cut(1,_1988))).
			t_redex([_2028,_2034,_2040|cond],_2028,_2052):-call(_2052).
			t_redex([_2070|apply],_2074,_2082):-t_reduce(_2070,_2074,_2082).
			t_redex([_2108|hd],_2112,_2134):-list_functor_name(_2114,t_reduce(_2108,[_2118,_2112|_2114],_2134)).
			t_redex([_2166|tl],_2170,_2192):-list_functor_name(_2172,t_reduce(_2166,[_2170,_2182|_2172],_2192)).
			t_redex([_2224,_2230|_2232],_2234,_2276):-end(_2232,member(_2232,[+,-,*,//,mod],t_reduce(_2230,_2266,t_reduce(_2224,_2268,number(_2266,number(_2268,eval(_2232,_2234,_2266,_2268,_2276))))))).
			t_redex([_2348,_2354|_2356],_2358,_2432):-end(_2356,member(_2356,[<,>,=<,>=,=\=,=:=],t_reduce(_2354,_2396,t_reduce(_2348,_2398,number(_2396,number(_2398,or((relop(_2356,_2396,_2398)->_2358=true),_2358=false,cut(1,_2432)))))))).
			t_redex([_2506,_2512|=],_2516,_2552):-t_reduce(_2512,_2518,t_reduce(_2506,_2520,or((_2518=_2520->_2516=true),_2516=false,cut(1,_2552)))).
			t_redex([_2600|_2602],_2604,_2622):-end(_2602,member(_2602,[-],t_reduce(_2600,_2612,number(_2612,eval1(_2602,_2614,_2612,_2622))))).
			t_redex(_2676,_2678,_2696):-append(_2680,_2682,_2676,end(_2682,t_def(_2682,_2684,_2686,t(_2684,_2686,_2688,append(_2680,_2688,_2678,_2696))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_redex_2__1(Prolog* mach);

			static Operation exec_pred_t_redex_2__2(Prolog* mach);

			static Operation exec_pred_t_redex_2__3(Prolog* mach);

			static Operation exec_pred_t_redex_2__4(Prolog* mach);

			static Operation exec_pred_t_redex_2__5(Prolog* mach);

			static Operation exec_pred_t_redex_2__6(Prolog* mach);

			static Operation exec_pred_t_redex_2__7(Prolog* mach);

			static Operation exec_pred_t_redex_2__8(Prolog* mach);

			static Operation exec_pred_t_redex_2__9(Prolog* mach);

			static Operation exec_pred_t_redex_2__10(Prolog* mach);

			static Operation exec_pred_t_redex_2__11(Prolog* mach);

			static Operation exec_pred_t_redex_2__12(Prolog* mach);

			static Operation exec_pred_t_redex_2__13(Prolog* mach);

			static Operation exec_pred_t_redex_2__14(Prolog* mach);

			static Operation exec_pred_t_redex_2__15(Prolog* mach);

			static Operation exec_pred_t_redex_2__16(Prolog* mach);

			static Operation exec_pred_t_redex_2__17(Prolog* mach);

			static Operation exec_pred_t_redex_2__18(Prolog* mach);
		};

	public:
		class pred_eval_4 : public Code {

			/*
			
			eval(+,_2758,_2760,_2762,_2776):-is(_2758,_2760+_2762,_2776).
			eval(-,_2804,_2806,_2808,_2822):-is(_2804,_2806-_2808,_2822).
			eval(*,_2850,_2852,_2854,_2868):-is(_2850,_2852*_2854,_2868).
			eval(//,_2896,_2898,_2900,_2914):-is(_2896,_2898//_2900,_2914).
			eval(mod,_2942,_2944,_2946,_2960):-is(_2942,_2944 mod _2946,_2960).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_eval_4__1(Prolog* mach);

			static Operation exec_pred_eval_4__2(Prolog* mach);

			static Operation exec_pred_eval_4__3(Prolog* mach);

			static Operation exec_pred_eval_4__4(Prolog* mach);

			static Operation exec_pred_eval_4__5(Prolog* mach);
		};

	public:
		class pred_eval1_3 : public Code {

			/*
			
			eval1(-,_2988,_2990,_3002):-is(_2988,-_2990,_3002).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_eval1_3__1(Prolog* mach);
		};

	public:
		class pred_relop_3 : public Code {

			/*
			
			relop(<,_3028,_3030,_3038):-smallerthan(_3028,_3030,_3038).
			relop(>,_3064,_3066,_3074):-smallerthan(_3066,_3064,_3074).
			relop(=<,_3100,_3102,_3110):-smallerorequal(_3100,_3102,_3110).
			relop(>=,_3136,_3138,_3146):-smallerorequal(_3138,_3136,_3146).
			relop(=\=,_3172,_3174,_3182):- =\=(_3172,_3174,_3182).
			relop(=:=,_3208,_3210,_3218):-arithequal(_3210,_3208,_3218).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_relop_3__1(Prolog* mach);

			static Operation exec_pred_relop_3__2(Prolog* mach);

			static Operation exec_pred_relop_3__3(Prolog* mach);

			static Operation exec_pred_relop_3__4(Prolog* mach);

			static Operation exec_pred_relop_3__5(Prolog* mach);

			static Operation exec_pred_relop_3__6(Prolog* mach);
		};

	public:
		class pred_t_3 : public Code {

			/*
			
			t(_3244,_3246,_3248,_3260):-listify(_3246,_3250,curry(_3250,_3252,t_argvars(_3244,_3252,_3248,cut(1,_3260)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_3__1(Prolog* mach);
		};

	public:
		class pred_t_argvars_3 : public Code {

			/*
			
			t_argvars([],_3310,_3310,_3320):-call(_3320).
			t_argvars([_3340|_3342],_3344,_3346,_3358):-t_argvars(_3342,_3344,_3348,t_vars(_3348,_3350,t_trans(_3340,_3348,_3350,_3346,_3358))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_argvars_3__1(Prolog* mach);

			static Operation exec_pred_t_argvars_3__2(Prolog* mach);
		};

	public:
		class pred_curry_2 : public Code {

			/*
			
			curry(_3406,_3406,_3422):-or(var(_3406),atomic(_3406),cut(1,_3422)).
			curry([_3454|_3456],_3458,_3466):-currylist(_3456,_3458,_3454,_3466).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_curry_2__1(Prolog* mach);

			static Operation exec_pred_curry_2__2(Prolog* mach);
		};

	public:
		class pred_currylist_3 : public Code {

			/*
			
			currylist([],_3492,_3492,_3500):-cut(1,_3500).
			currylist([_3526|_3528],_3530,_3532,_3548):-curry(_3526,_3534,currylist(_3528,_3530,[_3534|_3532],_3548)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_currylist_3__1(Prolog* mach);

			static Operation exec_pred_currylist_3__2(Prolog* mach);
		};

	public:
		class pred_t_vars_2 : public Code {

			/*
			
			t_vars(_3586,[[_3586]],_3602):-var(_3586,cut(1,_3602)).
			t_vars(_3636,[[]],_3644):-atomic(_3636,cut(1,_3644)).
			t_vars([_3674],[[]],_3690):-atomic(_3674,cut(1,_3690)).
			t_vars([_3720|_3722],[_3726,[_3732|_3734],[_3744|_3746]],_3772):-t_vars(_3720,[_3732|_3734],t_vars(_3722,[_3744|_3746],unionv(_3732,_3744,_3726,_3772))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_vars_2__1(Prolog* mach);

			static Operation exec_pred_t_vars_2__2(Prolog* mach);

			static Operation exec_pred_t_vars_2__3(Prolog* mach);

			static Operation exec_pred_t_vars_2__4(Prolog* mach);
		};

	public:
		class pred_t_trans_4 : public Code {

			/*
			
			t_trans(_3820,_3816,_3822,[_3816|k],_3850):-or(atomic(_3816),(var(_3816),_3816\==_3820),cut(1,_3850)).
			t_trans(_3884,_3886,_3888,i,_3896):-termequal(_3884,_3886,cut(1,_3896)).
			t_trans(_3942,_3938,[_3932|_3934],[_3938|k],_3950):-notinv(_3942,_3932,_3950).
			t_trans(_4002,[_3980|_3982],[_3986,_3992,_3998],_4004,_4064):-unify([_4008|_4010],_3992,unify([_4014|_4016],_3998,or(end(_3982),(_4016=[_4024,[_4030|_4032]],_4030\==[]),t_rule1(_4002,_3982,_4014,_3998,_3980,_4008,_3992,_4004,_4064)))).
			t_trans(_4158,[_4130,_4136|_4138],[_4142,_4148,_4154],_4160,_4204):-unify([_4164|_4166],_4148,unify([_4170,_4176,_4182],_4154,unify([_4188|_4190],_4182,unify([_4194|_4196],_4176,t_rule2(_4158,_4138,_4136,_4194,_4176,_4130,_4164,_4148,_4160,_4204))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_trans_4__1(Prolog* mach);

			static Operation exec_pred_t_trans_4__2(Prolog* mach);

			static Operation exec_pred_t_trans_4__3(Prolog* mach);

			static Operation exec_pred_t_trans_4__4(Prolog* mach);

			static Operation exec_pred_t_trans_4__5(Prolog* mach);
		};

	public:
		class pred_t_rule1_8 : public Code {

			/*
			
			t_rule1(_4278,_4280,_4282,_4284,_4286,_4288,_4290,_4280,_4298):-notinv(_4278,_4282,termequal(_4278,_4286,cut(1,_4298))).
			t_rule1(_4360,_4356,_4362,_4364,_4366,_4368,_4370,[_4350,_4356|b],_4378):-notinv(_4360,_4362,inv(_4360,_4368,\==(_4360,_4366,cut(1,t_trans(_4360,_4366,_4370,_4350,_4378))))).
			t_rule1(_4460,_4462,_4464,_4466,_4450,_4468,_4470,[_4450,_4456|c],_4478):-notinv(_4460,_4468,cut(1,t_trans(_4460,_4462,_4466,_4456,_4478))).
			t_rule1(_4544,_4546,_4548,_4550,_4552,_4554,_4556,[_4534,_4540|s],_4564):-t_trans(_4544,_4546,_4550,_4540,t_trans(_4544,_4552,_4556,_4534,_4564)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_rule1_8__1(Prolog* mach);

			static Operation exec_pred_t_rule1_8__2(Prolog* mach);

			static Operation exec_pred_t_rule1_8__3(Prolog* mach);

			static Operation exec_pred_t_rule1_8__4(Prolog* mach);
		};

	public:
		class pred_t_rule2_9 : public Code {

			/*
			
			t_rule2(_4628,_4624,_4630,_4632,_4634,_4618,_4636,_4638,[_4618,_4624|c],_4646):-termequal(_4628,_4630,notinv(_4628,_4636,cut(1,_4646))).
			t_rule2(_4710,_4706,_4712,_4714,_4716,_4718,_4720,_4722,[_4700,_4706|s],_4730):-termequal(_4710,_4712,cut(1,t_trans(_4710,_4718,_4722,_4700,_4730))).
			t_rule2(_4804,_4800,_4806,_4808,_4810,_4788,_4812,_4814,[_4788,_4794,_4800|cp],_4822):-inv(_4804,_4808,notinv(_4804,_4812,cut(1,t_trans(_4804,_4806,_4810,_4794,_4822)))).
			t_rule2(_4904,_4900,_4906,_4908,_4910,_4912,_4914,_4916,[_4888,_4894,_4900|sp],_4924):-inv(_4904,_4908,cut(1,t_trans(_4904,_4906,_4910,_4894,t_trans(_4904,_4912,_4916,_4888,_4924)))).
			t_rule2(_4998,_4996,_4994,_5000,_5002,_5004,_5006,_5008,[_4994|_4996],_5016):-termequal(_4998,_5004,cut(1,_5016)).
			t_rule2(_5078,_5074,_5068,_5080,_5082,_5084,_5086,_5088,[_5062,_5068,_5074|bp],_5096):-t_trans(_5078,_5084,_5088,_5062,_5096).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_t_rule2_9__1(Prolog* mach);

			static Operation exec_pred_t_rule2_9__2(Prolog* mach);

			static Operation exec_pred_t_rule2_9__3(Prolog* mach);

			static Operation exec_pred_t_rule2_9__4(Prolog* mach);

			static Operation exec_pred_t_rule2_9__5(Prolog* mach);

			static Operation exec_pred_t_rule2_9__6(Prolog* mach);
		};

	public:
		class pred_make_list_2 : public Code {

			/*
			
			make_list(_5138,_5138,_5146):-atomic(_5138,_5146).
			make_list([_5170,_5176|_5178],[_5176|_5184],_5192):-list_functor_name(_5178,make_list(_5170,_5184,_5192)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_make_list_2__1(Prolog* mach);

			static Operation exec_pred_make_list_2__2(Prolog* mach);
		};

	public:
		class pred_listify_2 : public Code {

			/*
			
			listify(_5222,_5222,_5238):-or(var(_5222),atomic(_5222),cut(1,_5238)).
			listify(_5274,[_5270|_5272],_5284):-functor(_5274,_5270,_5276,listify_list(1,_5276,_5274,_5272,_5284)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_listify_2__1(Prolog* mach);

			static Operation exec_pred_listify_2__2(Prolog* mach);
		};

	public:
		class pred_listify_list_4 : public Code {

			/*
			
			listify_list(_5322,_5324,_5326,[],_5334):-smallerthan(_5324,_5322,cut(1,_5334)).
			listify_list(_5374,_5376,_5378,[_5370|_5372],_5396):-smallerorequal(_5374,_5376,cut(1,arg(_5374,_5378,_5380,listify(_5380,_5370,is(_5388,_5374+1,listify_list(_5388,_5376,_5378,_5372,_5396)))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_listify_list_4__1(Prolog* mach);

			static Operation exec_pred_listify_list_4__2(Prolog* mach);
		};

	public:
		class pred_member_2 : public Code {

			/*
			
			member(_5470,[_5470|_5472],_5482):-call(_5482).
			member(_5504,[_5500|_5502],_5512):-member(_5504,_5502,_5512).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_member_2__1(Prolog* mach);

			static Operation exec_pred_member_2__2(Prolog* mach);
		};

	public:
		class pred_append_3 : public Code {

			/*
			
			append([],_5536,_5536,_5546):-call(_5546).
			append([_5566|_5568],_5576,[_5566|_5574],_5584):-append(_5568,_5576,_5574,_5584).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_append_3__1(Prolog* mach);

			static Operation exec_pred_append_3__2(Prolog* mach);
		};

	public:
		class pred_intersectv_3 : public Code {

			/*
			
			intersectv([],_5612,[],_5622):-call(_5622).
			intersectv([_5642|_5644],_5646,_5648,_5656):-intersectv_2(_5646,_5642,_5644,_5648,_5656).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_intersectv_3__1(Prolog* mach);

			static Operation exec_pred_intersectv_3__2(Prolog* mach);
		};

	public:
		class pred_intersectv_2_4 : public Code {

			/*
			
			intersectv_2([],_5686,_5688,[],_5698):-call(_5698).
			intersectv_2([_5720|_5722],_5724,_5726,_5728,_5738):-compare(_5730,_5724,_5720,intersectv_3(_5730,_5724,_5726,_5720,_5722,_5728,_5738)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_intersectv_2_4__1(Prolog* mach);

			static Operation exec_pred_intersectv_2_4__2(Prolog* mach);
		};

	public:
		class pred_intersectv_3_6 : public Code {

			/*
			
			intersectv_3(<,_5784,_5786,_5788,_5790,_5792,_5800):-intersectv_2(_5786,_5788,_5790,_5792,_5800).
			intersectv_3(=,_5838,_5842,_5844,_5846,[_5838|_5840],_5854):-intersectv(_5842,_5846,_5840,_5854).
			intersectv_3(>,_5888,_5890,_5892,_5894,_5896,_5904):-intersectv_2(_5894,_5888,_5890,_5896,_5904).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_intersectv_3_6__1(Prolog* mach);

			static Operation exec_pred_intersectv_3_6__2(Prolog* mach);

			static Operation exec_pred_intersectv_3_6__3(Prolog* mach);
		};

	public:
		class pred_intersectv_list_2 : public Code {

			/*
			
			intersectv_list([],[],_5948):-call(_5948).
			intersectv_list([_5966|_5968],_5970,_5978):-intersectv_list(_5968,_5966,_5970,_5978).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_intersectv_list_2__1(Prolog* mach);

			static Operation exec_pred_intersectv_list_2__2(Prolog* mach);
		};

	public:
		class pred_$002D$002D$003E_2 : public Code {

			/*
			
			-->(intersectv_list([]),[],_6016):-call(_6016).
			-->(intersectv_list([_6034|_6036]),(intersectv(_6034),intersectv_list(_6036)),_6064):-call(_6064).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__1(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__2(Prolog* mach);
		};

	public:
		class pred_diffv_3 : public Code {

			/*
			
			diffv([],_6080,[],_6090):-call(_6090).
			diffv([_6110|_6112],_6114,_6116,_6124):-diffv_2(_6114,_6110,_6112,_6116,_6124).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_diffv_3__1(Prolog* mach);

			static Operation exec_pred_diffv_3__2(Prolog* mach);
		};

	public:
		class pred_diffv_2_4 : public Code {

			/*
			
			diffv_2([],_6156,_6158,[_6156|_6158],_6168):-call(_6168).
			diffv_2([_6190|_6192],_6194,_6196,_6198,_6208):-compare(_6200,_6194,_6190,diffv_3(_6200,_6194,_6196,_6190,_6192,_6198,_6208)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_diffv_2_4__1(Prolog* mach);

			static Operation exec_pred_diffv_2_4__2(Prolog* mach);
		};

	public:
		class pred_diffv_3_6 : public Code {

			/*
			
			diffv_3(<,_6256,_6260,_6262,_6264,[_6256|_6258],_6278):-diffv(_6260,[_6262|_6264],_6258,_6278).
			diffv_3(=,_6312,_6314,_6316,_6318,_6320,_6328):-diffv(_6314,_6318,_6320,_6328).
			diffv_3(>,_6362,_6364,_6366,_6368,_6370,_6378):-diffv_2(_6368,_6362,_6364,_6370,_6378).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_diffv_3_6__1(Prolog* mach);

			static Operation exec_pred_diffv_3_6__2(Prolog* mach);

			static Operation exec_pred_diffv_3_6__3(Prolog* mach);
		};

	public:
		class pred_unionv_3 : public Code {

			/*
			
			unionv([],_6414,_6414,_6424):-call(_6424).
			unionv([_6444|_6446],_6448,_6450,_6458):-unionv_2(_6448,_6444,_6446,_6450,_6458).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_unionv_3__1(Prolog* mach);

			static Operation exec_pred_unionv_3__2(Prolog* mach);
		};

	public:
		class pred_unionv_2_4 : public Code {

			/*
			
			unionv_2([],_6490,_6492,[_6490|_6492],_6502):-call(_6502).
			unionv_2([_6524|_6526],_6528,_6530,_6532,_6542):-compare(_6534,_6528,_6524,unionv_3(_6534,_6528,_6530,_6524,_6526,_6532,_6542)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_unionv_2_4__1(Prolog* mach);

			static Operation exec_pred_unionv_2_4__2(Prolog* mach);
		};

	public:
		class pred_unionv_3_6 : public Code {

			/*
			
			unionv_3(<,_6590,_6594,_6596,_6598,[_6590|_6592],_6606):-unionv_2(_6594,_6596,_6598,_6592,_6606).
			unionv_3(=,_6644,_6648,_6650,_6652,[_6644|_6646],_6660):-unionv(_6648,_6652,_6646,_6660).
			unionv_3(>,_6700,_6702,_6696,_6704,[_6696|_6698],_6712):-unionv_2(_6704,_6700,_6702,_6698,_6712).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_unionv_3_6__1(Prolog* mach);

			static Operation exec_pred_unionv_3_6__2(Prolog* mach);

			static Operation exec_pred_unionv_3_6__3(Prolog* mach);
		};

	public:
		class pred_subsetv_2 : public Code {

			/*
			
			subsetv([],_6748,_6758):-call(_6758).
			subsetv([_6776|_6778],[_6782|_6784],_6794):-compare(_6786,_6776,_6782,subsetv_2(_6786,_6776,_6778,_6784,_6794)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_subsetv_2__1(Prolog* mach);

			static Operation exec_pred_subsetv_2__2(Prolog* mach);
		};

	public:
		class pred_subsetv_2_4 : public Code {

			/*
			
			subsetv_2(=,_6832,_6834,_6836,_6844):-subsetv(_6834,_6836,_6844).
			subsetv_2(>,_6872,_6874,_6876,_6890):-subsetv([_6872|_6874],_6876,_6890).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_subsetv_2_4__1(Prolog* mach);

			static Operation exec_pred_subsetv_2_4__2(Prolog* mach);
		};

	public:
		class pred_small_subsetv_2 : public Code {

			/*
			
			small_subsetv([],_6918,_6928):-call(_6928).
			small_subsetv([_6946|_6948],_6950,_6958):-inv(_6946,_6950,small_subsetv(_6948,_6950,_6958)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_small_subsetv_2__1(Prolog* mach);

			static Operation exec_pred_small_subsetv_2__2(Prolog* mach);
		};

	public:
		class pred_inv_2 : public Code {

			/*
			
			inv(_6996,[_6992|_6994],_7006):-compare(_6998,_6996,_6992,inv_2(_6998,_6996,_6994,_7006)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_inv_2__1(Prolog* mach);
		};

	public:
		class pred_inv_2_3 : public Code {

			/*
			
			inv_2(=,_7042,_7044,_7054):-call(_7054).
			inv_2(>,_7072,_7074,_7082):-inv(_7072,_7074,_7082).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_inv_2_3__1(Prolog* mach);

			static Operation exec_pred_inv_2_3__2(Prolog* mach);
		};

	public:
		class pred_notinv_2 : public Code {

			/*
			
			notinv(_7108,_7110,_7118):-notinv_2(_7110,_7108,_7118).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_notinv_2__1(Prolog* mach);
		};

	public:
		class pred_notinv_2_2 : public Code {

			/*
			
			notinv_2([],_7142,_7152):-call(_7152).
			notinv_2([_7170|_7172],_7174,_7184):-compare(_7176,_7174,_7170,notinv_3(_7176,_7174,_7172,_7184)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_notinv_2_2__1(Prolog* mach);

			static Operation exec_pred_notinv_2_2__2(Prolog* mach);
		};

	public:
		class pred_notinv_3_3 : public Code {

			/*
			
			notinv_3(<,_7220,_7222,_7232):-call(_7232).
			notinv_3(>,_7250,_7252,_7260):-notinv_2(_7252,_7250,_7260).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_notinv_3_3__1(Prolog* mach);

			static Operation exec_pred_notinv_3_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef REDUCER
