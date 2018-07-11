#ifndef SIMPLE_ANALYZER
#define SIMPLE_ANALYZER

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class simple_analyzer {
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
	static Const* const  s_add;
	static Const* const  s_add_set;
	static Const* const  s_analyze_closure;
	static Const* const  s_analyze_strees;
	static Const* const  s_any;
	static Const* const  s_arg;
	static Const* const  s_bottom;
	static Const* const  s_bottom_call;
	static Const* const  s_call;
	static Const* const  s_call_p;
	static Const* const  s_compare;
	static Const* const  s_create_argument;
	static Const* const  s_create_new_call;
	static Const* const  s_diffv;
	static Const* const  s_diffv_2;
	static Const* const  s_diffv_3;
	static Const* const  s_dummy;
	static Const* const  s_fail;
	static Const* const  s_filter_dups;
	static Const* const  s_filter_vars;
	static Const* const  s_filter_vars_arg;
	static Const* const  s_functor;
	static Const* const  s_get;
	static Const* const  s_get_entry_modes;
	static Const* const  s_goal_dupset;
	static Const* const  s_goal_dupset_varbag;
	static Const* const  s_goal_dupset_varset;
	static Const* const  s_ground;
	static Const* const  s_ground_flag;
	static Const* const  s_includev;
	static Const* const  s_includev_2;
	static Const* const  s_includev_3;
	static Const* const  s_init_conj;
	static Const* const  s_init_disj;
	static Const* const  s_init_goal;
	static Const* const  s_init_strees;
	static Const* const  s_intersectv;
	static Const* const  s_intersectv_2;
	static Const* const  s_intersectv_3;
	static Const* const  s_inv;
	static Const* const  s_inv_2;
	static Const* const  s_is;
	static Const* const  s_keysort;
	static Const* const  s_lattice_modes_arg;
	static Const* const  s_lattice_modes_call;
	static Const* const  s_leaf;
	static Const* const  s_lub;
	static Const* const  s_lub_call;
	static Const* const  s_main;
	static Const* const  s_make_key;
	static Const* const  s_membership_flag;
	static Const* const  s_no;
	static Const* const  s_node;
	static Const* const  s_nonvar;
	static Const* const  s_not;
	static Const* const  s_part;
	static Const* const  s_qsort;
	static Const* const  s_seal;
	static Const* const  s_set;
	static Const* const  s_set_2;
	static Const* const  s_set_command;
	static Const* const  s_smallerorequal;
	static Const* const  s_smallerthan;
	static Const* const  s_sort;
	static Const* const  s_split_unify;
	static Const* const  s_stree;
	static Const* const  s_sub;
	static Const* const  s_sub_set;
	static Const* const  s_subsetv;
	static Const* const  s_subsetv_2;
	static Const* const  s_table_command;
	static Const* const  s_top;
	static Const* const  s_traverse_conj;
	static Const* const  s_traverse_disj;
	static Const* const  s_traverse_strees;
	static Const* const  s_true;
	static Const* const  s_unify;
	static Const* const  s_unify_p;
	static Const* const  s_uninit;
	static Const* const  s_unionv;
	static Const* const  s_unionv_2;
	static Const* const  s_unionv_3;
	static Const* const  s_unknown;
	static Const* const  s_update_goal;
	static Const* const  s_update_table;
	static Const* const  s_var;
	static Const* const  s_var_args;
	static Const* const  s_varbag;
	static Const* const  s_varset;
	static Const* const  s_yes;
	static Const* const  s111;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Int* const  posint4;
	static Int* const  posint5;
	static Int* const  posint6;
	static Operation* const  reg_top_0;
	static Operation* const  reg_main_1;
	static Operation* const  reg_analyze_strees_2;
	static Operation* const  reg_analyze_closure_3;
	static Operation* const  reg_analyze_closure_4;
	static Operation* const  reg_init_strees_3;
	static Operation* const  reg_init_conj_3;
	static Operation* const  reg_init_disj_3;
	static Operation* const  reg_init_goal_3;
	static Operation* const  reg_traverse_strees_5;
	static Operation* const  reg_traverse_disj_6;
	static Operation* const  reg_traverse_conj_6;
	static Operation* const  reg_traverse_conj_11;
	static Operation* const  reg_update_goal_12;
	static Operation* const  reg_update_table_6;
	static Operation* const  reg_create_new_call_9;
	static Operation* const  reg_lub_3;
	static Operation* const  reg_bottom_1;
	static Operation* const  reg_create_argument_6;
	static Operation* const  reg_lub_call_3;
	static Operation* const  reg_lub_call_5;
	static Operation* const  reg_bottom_call_2;
	static Operation* const  reg_bottom_call_3;
	static Operation* const  reg_lattice_modes_call_3;
	static Operation* const  reg_lattice_modes_call_6;
	static Operation* const  reg_lattice_modes_arg_4;
	static Operation* const  reg_get_3;
	static Operation* const  reg_get_6;
	static Operation* const  reg_get_5;
	static Operation* const  reg_set_4;
	static Operation* const  reg_set_2_9;
	static Operation* const  reg_seal_1;
	static Operation* const  reg_membership_flag_3;
	static Operation* const  reg_ground_flag_3;
	static Operation* const  reg_get_entry_modes_4;
	static Operation* const  reg_get_entry_modes_6;
	static Operation* const  reg_var_args_2;
	static Operation* const  reg_filter_vars_3;
	static Operation* const  reg_$002D$002D$003E_2;
	static Operation* const  reg_goal_dupset_2;
	static Operation* const  reg_goal_dupset_varset_3;
	static Operation* const  reg_goal_dupset_varbag_3;
	static Operation* const  reg_make_key_2;
	static Operation* const  reg_filter_dups_2;
	static Operation* const  reg_set_command_3;
	static Operation* const  reg_table_command_3;
	static Operation* const  reg_inv_2;
	static Operation* const  reg_inv_2_3;
	static Operation* const  reg_intersectv_3;
	static Operation* const  reg_intersectv_2_4;
	static Operation* const  reg_intersectv_3_6;
	static Operation* const  reg_diffv_3;
	static Operation* const  reg_diffv_2_4;
	static Operation* const  reg_diffv_3_6;
	static Operation* const  reg_unionv_3;
	static Operation* const  reg_unionv_2_4;
	static Operation* const  reg_unionv_3_6;
	static Operation* const  reg_includev_3;
	static Operation* const  reg_includev_2_3;
	static Operation* const  reg_includev_3_5;
	static Operation* const  reg_subsetv_2;
	static Operation* const  reg_subsetv_2_4;
	static Operation* const  reg_varset_2;
	static Operation* const  reg_varbag_2;
	static Operation* const  reg_unify_p_1;
	static Operation* const  reg_call_p_1;
	static Operation* const  reg_split_unify_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_15330):-main(_15308,_15330).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_main_1 : public Code {

	/*
	
	main(_15394,_16054):-analyze_strees([stree(main/0,(main:-qsort([1,2],_15418,[]),true;fail),(main:-true),[],1),stree(qsort/3,(qsort(_15472,_15474,_15476):-_15472=[_15480|_15482],part(_15482,_15480,_15496,_15498),qsort(_15498,_15504,_15476),qsort(_15496,_15474,[_15480|_15504]),true;_15472=[],_15476=_15474,true;fail),(qsort(_15590,_15592,_15594):-true),[],1),stree(part/4,(part(_15628,_15630,_15632,_15634):-'$cut_load'(_15638),'$cut_part/4_1'(_15628,_15630,_15632,_15634,_15638),true;fail),(part(_15678,_15680,_15682,_15684):-true),[stree('$cut_part/4_1'/5,('$cut_part/4_1'(_15700,_15702,_15704,_15706,_15708):-_15700=[_15712|_15714],'$fac_$cut_part/4_1/5_2'(_15714,_15702,_15704,_15706,_15708,_15712),true;_15700=[],_15704=[],_15706=[],true;fail),('$cut_part/4_1'(_15804,_15806,_15808,_15810,_15812):-true),[stree('$fac_$cut_part/4_1/5_2'/6,('$fac_$cut_part/4_1/5_2'(_15828,_15830,_15832,_15834,_15836,_15838):-_15832=[_15838|_15844],_15838=<_15830,'$cut_shallow'(_15836),part(_15828,_15830,_15844,_15834),true;_15834=[_15838|_15900],part(_15828,_15830,_15832,_15900),true;fail),('$fac_$cut_part/4_1/5_2'(_15950,_15952,_15954,_15956,_15958,_15960):-true),[],1)],1)],1)],_15394,_16054).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_main_1__1(Prolog* mach);
	};


public:
	class pred_analyze_strees_2 : public Code {

	/*
	
	analyze_strees(_16146,_16148,_16214):-init_strees(_16146,_16154,_16156,seal(_16156,analyze_closure(_16146,_16156,_16148,_16214))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_analyze_strees_2__1(Prolog* mach);
	};


public:
	class pred_analyze_closure_3 : public Code {

	/*
	
	analyze_closure(_16434,_16436,_16438,_16506):-traverse_strees(_16434,_16436,_16446,0,_16450,analyze_closure(_16434,_16446,_16438,_16450,_16506)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_analyze_closure_3__1(Prolog* mach);
	};


public:
	class pred_analyze_closure_4 : public Code {

	/*
	
	analyze_closure(_16746,_16748,_16748,_16752,_16810):-smallerorequal(_16752,0,cut(1,_16810)).
	analyze_closure(_16956,_16958,_16960,_16962,_17034):-smallerthan(0,_16962,cut(1,analyze_closure(_16956,_16958,_16960,_17034))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_analyze_closure_4__1(Prolog* mach);
	static Operation* exec_pred_analyze_closure_4__2(Prolog* mach);
	};


public:
	class pred_init_strees_3 : public Code {

	/*
	
	init_strees([],_17246,_17246,_17288):-true(_17288).
	init_strees([_17392|_17394],_17400,_17402,_17546):-unify(stree(_17412,(_17406:-_17408),_17416,_17418,_17420),_17392,bottom_call(_17412,_17432,table_command(get(_17412,_17432),_17400,_17446,init_disj(_17408,_17446,_17454,init_strees(_17418,_17454,_17462,init_strees(_17394,_17462,_17402,true(_17546))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_init_strees_3__1(Prolog* mach);
	static Operation* exec_pred_init_strees_3__2(Prolog* mach);
	};


public:
	class pred_init_conj_3 : public Code {

	/*
	
	init_conj(true,_1516,_1516,_1524):-true(_1524).
	init_conj((_1548,_1550),_1552,_1554,_1564):-init_goal(_1548,_1552,_1556,init_conj(_1550,_1556,_1554,true(_1564))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_init_conj_3__1(Prolog* mach);
	static Operation* exec_pred_init_conj_3__2(Prolog* mach);
	};


public:
	class pred_init_disj_3 : public Code {

	/*
	
	init_disj(fail,_1606,_1606,_1614):-true(_1614).
	init_disj((_1638;_1640),_1642,_1644,_1654):-init_conj(_1638,_1642,_1646,init_disj(_1640,_1646,_1644,true(_1654))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_init_disj_3__1(Prolog* mach);
	static Operation* exec_pred_init_disj_3__2(Prolog* mach);
	};


public:
	class pred_init_goal_3 : public Code {

	/*
	
	init_goal(_1696,_1698,_1700,_1732):-call_p(_1696,cut(1,functor(_1696,_1702,_1704,bottom_call(_1702/_1704,_1712,table_command(get(_1702/_1704,_1712),_1698,_1700,true(_1732)))))).
	init_goal(_1794,_1796,_1796,_1804):-unify_p(_1794,cut(1,true(_1804))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_init_goal_3__1(Prolog* mach);
	static Operation* exec_pred_init_goal_3__2(Prolog* mach);
	};


public:
	class pred_traverse_strees_5 : public Code {

	/*
	
	traverse_strees([],_1838,_1838,_1840,_1840,_1848):-true(_1848).
	traverse_strees([_1876|_1878],_1880,_1882,_1884,_1886,_1920):-unify(stree(_1896,(_1890:-_1892),_1900,_1902,_1904),_1876,traverse_disj(_1890,_1892,_1880,_1906,_1884,_1908,traverse_strees(_1902,_1906,_1910,_1908,_1912,traverse_strees(_1878,_1910,_1882,_1912,_1886,true(_1920))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_traverse_strees_5__1(Prolog* mach);
	static Operation* exec_pred_traverse_strees_5__2(Prolog* mach);
	};


public:
	class pred_traverse_disj_6 : public Code {

	/*
	
	traverse_disj(_1998,fail,_2000,_2000,_2002,_2002,_2010):-true(_2010).
	traverse_disj(_2044,(_2040;_2042),_2046,_2048,_2050,_2052,_2064):-traverse_conj(_2044,_2040,_2046,_2054,_2050,_2056,traverse_disj(_2044,_2042,_2054,_2048,_2056,_2052,true(_2064))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_traverse_disj_6__1(Prolog* mach);
	static Operation* exec_pred_traverse_disj_6__2(Prolog* mach);
	};


public:
	class pred_traverse_conj_6 : public Code {

	/*
	
	traverse_conj(_2124,_2126,_2128,_2130,_2132,_2134,_2172):-varset(_2124,_2136,functor(_2124,_2138,_2140,table_command(get(_2138/_2140,_2152),_2128,_2154,get_entry_modes(uninit,_2124,_2152,_2156,get_entry_modes(ground,_2124,_2152,_2158,traverse_conj(_2126,_2154,_2130,_2132,_2134,_2158,_2160,_2156,_2162,_2136,_2164,true(_2172))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_traverse_conj_6__1(Prolog* mach);
	};


public:
	class pred_traverse_conj_11 : public Code {

	/*
	
	traverse_conj(true,_2278,_2278,_2280,_2280,_2282,_2282,_2284,_2284,_2286,_2286,_2294):-true(_2294).
	traverse_conj((_2334,_2336),_2338,_2340,_2342,_2344,_2346,_2348,_2350,_2352,_2354,_2356,_2378):-varset(_2334,_2358,update_goal(_2334,_2358,_2338,_2360,_2342,_2362,_2346,_2364,_2350,_2366,_2354,_2368,unionv(_2358,_2368,_2370,traverse_conj(_2336,_2360,_2340,_2362,_2344,_2364,_2348,_2366,_2352,_2370,_2356,true(_2378))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_traverse_conj_11__1(Prolog* mach);
	static Operation* exec_pred_traverse_conj_11__2(Prolog* mach);
	};


public:
	class pred_update_goal_12 : public Code {

	/*
	
	update_goal(_2488,_2490,_2492,_2492,_2494,_2494,_2496,_2498,_2500,_2502,_2504,_2504,_2526):-split_unify(_2488,_2506,_2508,var(_2506,nonvar(_2508,varset(_2508,_2510,subsetv(_2510,_2496,cut(1,set_command(add(_2506),_2496,_2498,set_command(sub(_2506),_2500,_2502,true(_2526))))))))).
	update_goal(_2630,_2632,_2634,_2634,_2636,_2636,_2638,_2638,_2640,_2642,_2644,_2644,_2678):-split_unify(_2630,_2646,_2648,var(_2646,nonvar(_2648,inv(_2646,_2640,cut(1,diffv(_2632,_2644,_2650,diffv(_2650,_2638,_2652,set_command(add_set(_2652),_2640,_2658,set_command(sub(_2646),_2658,_2664,intersectv(_2632,_2644,_2666,set_command(sub_set(_2666),_2664,_2642,true(_2678)))))))))))).
	update_goal(_2814,_2816,_2818,_2818,_2820,_2820,_2822,_2824,_2826,_2828,_2830,_2830,_2850):-split_unify(_2814,_2832,_2834,var(_2832,inv(_2832,_2822,cut(1,set_command(add_set(_2816),_2822,_2824,set_command(sub_set(_2816),_2826,_2828,true(_2850))))))).
	update_goal(_2940,_2942,_2944,_2944,_2946,_2946,_2948,_2948,_2950,_2952,_2954,_2954,_2966):-unify_p(_2940,cut(1,set_command(sub_set(_2942),_2950,_2952,true(_2966)))).
	update_goal(_3028,_3030,_3032,_3034,_3036,_3038,_3040,_3040,_3042,_3044,_3046,_3046,_3074):-call_p(_3028,cut(1,goal_dupset(_3028,_3048,var_args(_3028,_3050,functor(_3028,_3052,_3054,functor(_3056,_3052,_3054,create_new_call(1,_3054,_3040,_3050,_3048,_3042,_3046,_3028,_3056,update_table(_3052/_3054,_3056,_3032,_3034,_3036,_3038,set_command(sub_set(_3030),_3042,_3044,true(_3074)))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_update_goal_12__1(Prolog* mach);
	static Operation* exec_pred_update_goal_12__2(Prolog* mach);
	static Operation* exec_pred_update_goal_12__3(Prolog* mach);
	static Operation* exec_pred_update_goal_12__4(Prolog* mach);
	static Operation* exec_pred_update_goal_12__5(Prolog* mach);
	};


public:
	class pred_update_table_6 : public Code {

	/*
	
	update_table(_3212/_3214,_3216,_3218,_3220,_3222,_3224,_3266):-table_command(get(_3212/_3214,_3236),_3218,_3238,lub_call(_3236,_3216,_3240,\==(_3236,_3240,cut(1,table_command(set(_3212/_3214,_3240),_3238,_3220,is(_3224,_3222+1,true(_3266))))))).
	update_table(_3348/_3350,_3352,_3354,_3354,_3356,_3356,_3366):-call(_3366).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_update_table_6__1(Prolog* mach);
	static Operation* exec_pred_update_table_6__2(Prolog* mach);
	};


public:
	class pred_create_new_call_9 : public Code {

	/*
	
	create_new_call(_3390,_3392,_3394,_3396,_3398,_3400,_3402,_3404,_3406,_3414):-smallerthan(_3392,_3390,cut(1,_3414)).
	create_new_call(_3458,_3460,_3462,_3464,_3466,_3468,_3470,_3472,_3474,_3504):-smallerorequal(_3458,_3460,cut(1,arg(_3458,_3472,_3476,arg(_3458,_3474,_3478,ground_flag(_3476,_3462,_3480,membership_flag(_3476,_3464,_3482,membership_flag(_3476,_3466,_3484,membership_flag(_3476,_3468,_3486,membership_flag(_3476,_3470,_3488,create_argument(_3480,_3482,_3484,_3486,_3488,_3478,is(_3496,_3458+1,create_new_call(_3496,_3460,_3462,_3464,_3466,_3468,_3470,_3472,_3474,_3504)))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_create_new_call_9__1(Prolog* mach);
	static Operation* exec_pred_create_new_call_9__2(Prolog* mach);
	};


public:
	class pred_lub_3 : public Code {

	/*
	
	lub(unknown,_3664,_3664,_3672):-cut(1,_3672).
	lub(_3696,unknown,_3696,_3704):-cut(1,_3704).
	lub(any,_3728,any,_3736):-cut(1,_3736).
	lub(_3760,any,any,_3768):-cut(1,_3768).
	lub(uninit,uninit,uninit,_3798):-cut(1,_3798).
	lub(ground,ground,ground,_3828):-cut(1,_3828).
	lub(uninit,ground,any,_3858):-cut(1,_3858).
	lub(ground,uninit,any,_3888):-cut(1,_3888).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lub_3__1(Prolog* mach);
	static Operation* exec_pred_lub_3__2(Prolog* mach);
	static Operation* exec_pred_lub_3__3(Prolog* mach);
	static Operation* exec_pred_lub_3__4(Prolog* mach);
	static Operation* exec_pred_lub_3__5(Prolog* mach);
	static Operation* exec_pred_lub_3__6(Prolog* mach);
	static Operation* exec_pred_lub_3__7(Prolog* mach);
	static Operation* exec_pred_lub_3__8(Prolog* mach);
	};


public:
	class pred_bottom_1 : public Code {

	/*
	
	bottom(unknown,_3920):-call(_3920).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_bottom_1__1(Prolog* mach);
	};


public:
	class pred_create_argument_6 : public Code {

	/*
	
	create_argument(yes,_3934,_3936,_3938,_3940,ground,_3948):-cut(1,_3948).
	create_argument(no,yes,no,yes,_3978,uninit,_3986):-cut(1,_3986).
	create_argument(no,yes,no,_4016,no,uninit,_4024):-cut(1,_4024).
	create_argument(no,yes,_4054,no,yes,any,_4062):-cut(1,_4062).
	create_argument(no,yes,yes,_4092,_4094,any,_4102):-cut(1,_4102).
	create_argument(no,no,_4132,_4134,_4136,any,_4144):-cut(1,_4144).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_create_argument_6__1(Prolog* mach);
	static Operation* exec_pred_create_argument_6__2(Prolog* mach);
	static Operation* exec_pred_create_argument_6__3(Prolog* mach);
	static Operation* exec_pred_create_argument_6__4(Prolog* mach);
	static Operation* exec_pred_create_argument_6__5(Prolog* mach);
	static Operation* exec_pred_create_argument_6__6(Prolog* mach);
	};


public:
	class pred_lub_call_3 : public Code {

	/*
	
	lub_call(_4174,_4176,_4178,_4190):-functor(_4174,_4180,_4182,functor(_4176,_4180,_4182,functor(_4178,_4180,_4182,lub_call(1,_4182,_4174,_4176,_4178,_4190)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lub_call_3__1(Prolog* mach);
	};


public:
	class pred_lub_call_5 : public Code {

	/*
	
	lub_call(_4252,_4254,_4256,_4258,_4260,_4268):-smallerthan(_4254,_4252,cut(1,_4268)).
	lub_call(_4304,_4306,_4308,_4310,_4312,_4334):-smallerorequal(_4304,_4306,cut(1,arg(_4304,_4308,_4314,arg(_4304,_4310,_4316,arg(_4304,_4312,_4318,lub(_4314,_4316,_4318,is(_4326,_4304+1,lub_call(_4326,_4306,_4308,_4310,_4312,_4334)))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lub_call_5__1(Prolog* mach);
	static Operation* exec_pred_lub_call_5__2(Prolog* mach);
	};


public:
	class pred_bottom_call_2 : public Code {

	/*
	
	bottom_call(_4434/_4436,_4438,_4446):-functor(_4438,_4434,_4436,bottom_call(1,_4436,_4438,_4446)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_bottom_call_2__1(Prolog* mach);
	};


public:
	class pred_bottom_call_3 : public Code {

	/*
	
	bottom_call(_4482,_4484,_4486,_4494):-smallerthan(_4484,_4482,cut(1,_4494)).
	bottom_call(_4526,_4528,_4530,_4548):-smallerorequal(_4526,_4528,cut(1,bottom(_4532,arg(_4526,_4530,_4532,is(_4540,_4526+1,bottom_call(_4540,_4528,_4530,_4548)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_bottom_call_3__1(Prolog* mach);
	static Operation* exec_pred_bottom_call_3__2(Prolog* mach);
	};


public:
	class pred_lattice_modes_call_3 : public Code {

	/*
	
	lattice_modes_call(_4616/_4618,_4626,(_4622:-_4624),_4642):-functor(_4622,_4616,_4618,get(_4626,_4616/_4618,_4634,lattice_modes_call(1,_4618,_4634,_4622,_4624,true,_4642))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lattice_modes_call_3__1(Prolog* mach);
	};


public:
	class pred_lattice_modes_call_6 : public Code {

	/*
	
	lattice_modes_call(_4696,_4698,_4700,_4702,_4704,_4704,_4712):-smallerthan(_4698,_4696,cut(1,_4712)).
	lattice_modes_call(_4750,_4752,_4754,_4756,_4758,_4760,_4782):-smallerorequal(_4750,_4752,cut(1,arg(_4750,_4754,_4762,arg(_4750,_4756,_4764,lattice_modes_arg(_4762,_4764,_4758,_4766,is(_4774,_4750+1,lattice_modes_call(_4774,_4752,_4754,_4756,_4766,_4760,_4782))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lattice_modes_call_6__1(Prolog* mach);
	static Operation* exec_pred_lattice_modes_call_6__2(Prolog* mach);
	};


public:
	class pred_lattice_modes_arg_4 : public Code {

	/*
	
	lattice_modes_arg(uninit,_4878,(uninit(_4878),_4884),_4884,_4892):-cut(1,_4892).
	lattice_modes_arg(ground,_4920,(ground(_4920),_4926),_4926,_4934):-cut(1,_4934).
	lattice_modes_arg(_4960,_4962,_4964,_4964,_4974):-call(_4974).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lattice_modes_arg_4__1(Prolog* mach);
	static Operation* exec_pred_lattice_modes_arg_4__2(Prolog* mach);
	static Operation* exec_pred_lattice_modes_arg_4__3(Prolog* mach);
	};


public:
	class pred_get_3 : public Code {

	/*
	
	get(node(_4996,_4998,_5000,_5002),_5004,_5006,_5014):-get(_4996,_4998,_5000,_5002,_5004,_5006,_5014).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_3__1(Prolog* mach);
	};


public:
	class pred_get_6 : public Code {

	/*
	
	get(_5048,_5050,_5052,_5054,_5056,_5050,_5064):-unify(_5048,_5056,cut(1,_5064)).
	get(_5102,_5104,_5106,_5108,_5110,_5112,_5122):-compare(_5114,_5110,_5102,get(_5114,_5110,_5112,_5106,_5108,_5122)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_6__1(Prolog* mach);
	static Operation* exec_pred_get_6__2(Prolog* mach);
	};


public:
	class pred_get_5 : public Code {

	/*
	
	get(<,_5170,_5172,_5174,_5176,_5184):-get(_5174,_5170,_5172,_5184).
	get(>,_5216,_5218,_5220,_5222,_5230):-get(_5222,_5216,_5218,_5230).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_5__1(Prolog* mach);
	static Operation* exec_pred_get_5__2(Prolog* mach);
	};


public:
	class pred_set_4 : public Code {

	/*
	
	set(leaf,_5264,_5266,node(_5264,_5266,leaf,leaf),_5280):-call(_5280).
	set(node(_5302,_5304,_5306,_5308),_5320,_5322,node(_5302,_5314,_5316,_5318),_5332):-compare(_5324,_5320,_5302,set_2(_5324,_5320,_5322,_5304,_5306,_5308,_5314,_5316,_5318,_5332)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_set_4__1(Prolog* mach);
	static Operation* exec_pred_set_4__2(Prolog* mach);
	};


public:
	class pred_set_2_9 : public Code {

	/*
	
	set_2(<,_5384,_5386,_5388,_5390,_5392,_5388,_5394,_5392,_5402):-set(_5390,_5384,_5386,_5394,_5402).
	set_2(=,_5444,_5446,_5448,_5450,_5452,_5446,_5450,_5452,_5462):-call(_5462).
	set_2(>,_5492,_5494,_5496,_5498,_5500,_5496,_5498,_5502,_5510):-set(_5500,_5492,_5494,_5502,_5510).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_set_2_9__1(Prolog* mach);
	static Operation* exec_pred_set_2_9__2(Prolog* mach);
	static Operation* exec_pred_set_2_9__3(Prolog* mach);
	};


public:
	class pred_seal_1 : public Code {

	/*
	
	seal(leaf,_5560):-call(_5560).
	seal(node(_5576,_5578,_5580,_5582),_5590):-seal(_5580,seal(_5582,_5590)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_seal_1__1(Prolog* mach);
	static Operation* exec_pred_seal_1__2(Prolog* mach);
	};


public:
	class pred_membership_flag_3 : public Code {

	/*
	
	membership_flag(_5616,_5618,yes,_5626):-inv(_5616,_5618,cut(1,_5626)).
	membership_flag(_5658,_5660,no,_5670):-call(_5670).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_membership_flag_3__1(Prolog* mach);
	static Operation* exec_pred_membership_flag_3__2(Prolog* mach);
	};


public:
	class pred_ground_flag_3 : public Code {

	/*
	
	ground_flag(_5688,_5690,yes,_5700):-varset(_5688,_5692,subsetv(_5692,_5690,cut(1,_5700))).
	ground_flag(_5740,_5742,no,_5752):-call(_5752).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ground_flag_3__1(Prolog* mach);
	static Operation* exec_pred_ground_flag_3__2(Prolog* mach);
	};


public:
	class pred_get_entry_modes_4 : public Code {

	/*
	
	get_entry_modes(_5770,_5772,_5774,_5776,_5790):-functor(_5772,_5778,_5780,get_entry_modes(_5770,1,_5780,_5772,_5774,_5782,sort(_5782,_5776,_5790))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_entry_modes_4__1(Prolog* mach);
	};


public:
	class pred_get_entry_modes_6 : public Code {

	/*
	
	get_entry_modes(_5844,_5846,_5848,_5850,_5852,[],_5860):-smallerthan(_5848,_5846,cut(1,_5860)).
	get_entry_modes(_5904,_5906,_5908,_5910,_5912,[_5900|_5902],_5928):-smallerorequal(_5906,_5908,arg(_5906,_5912,_5904,cut(1,arg(_5906,_5910,_5900,is(_5920,_5906+1,get_entry_modes(_5904,_5920,_5908,_5910,_5912,_5902,_5928)))))).
	get_entry_modes(_6010,_6012,_6014,_6016,_6018,_6020,_6036):-smallerorequal(_6012,_6014,cut(1,is(_6028,_6012+1,get_entry_modes(_6010,_6028,_6014,_6016,_6018,_6020,_6036)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_entry_modes_6__1(Prolog* mach);
	static Operation* exec_pred_get_entry_modes_6__2(Prolog* mach);
	static Operation* exec_pred_get_entry_modes_6__3(Prolog* mach);
	};


public:
	class pred_var_args_2 : public Code {

	/*
	
	var_args(_6098,_6100,_6114):-functor(_6098,_6102,_6104,filter_vars(_6104,_6098,_6106,sort(_6106,_6100,_6114))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_var_args_2__1(Prolog* mach);
	};


public:
	class pred_filter_vars_3 : public Code {

	/*
	
	filter_vars(_6158,_6160,_6162,_6170):-filter_vars(_6158,_6160,_6162,[],_6170).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_filter_vars_3__1(Prolog* mach);
	};


public:
	class pred_$002D$002D$003E_2 : public Code {

	/*
	
	-->(filter_vars(_6202,_6204),({_6202=<0},!),_6230):-call(_6230).
	-->(filter_vars(_6248,_6250),({_6248>0},!,{arg(_6248,_6250,_6268)},filter_vars_arg(_6248,_6250,_6268)),_6308):-call(_6308).
	-->(filter_vars_arg(_6326,_6328,_6330),({var(_6330)},!,[_6330],{_6354 is _6326-1},filter_vars(_6354,_6328)),_6400):-call(_6400).
	-->(filter_vars_arg(_6418,_6420,_6422),({nonvar(_6422)},!,{_6440 is _6418-1},filter_vars(_6440,_6420)),_6480):-call(_6480).
	-->(filter_dups([]),!,_6770):-call(_6770).
	-->(filter_dups([_6788-_6790,_6800-_6802,_6812-_6814|_6820]),({_6788==_6800,_6800==_6812},!,filter_dups([_6800-_6852,_6812-_6864|_6820])),_6896):-call(_6896).
	-->(filter_dups([_6914-_6916,_6926-_6928|_6934]),({_6914==_6926},!,[_6914],filter_dups(_6934)),_6986):-call(_6986).
	-->(filter_dups([_7004-_7006|_7012]),(!,filter_dups(_7012)),_7036):-call(_7036).
	-->(varbag(_8942),({var(_8942)},!,[_8942]),_8978):-call(_8978).
	-->(varbag(_8996),({nonvar(_8996),!,functor(_8996,_9006,_9008)},varbag(_8996,1,_9008)),_9048):-call(_9048).
	-->(varbag(_9066,_9068,_9070),({_9068>_9070},!),_9096):-call(_9096).
	-->(varbag(_9114,_9116,_9118),({_9116=<_9118},!,{arg(_9116,_9114,_9136)},varbag(_9136),{_9154 is _9116+1},varbag(_9114,_9154,_9118)),_9208):-call(_9208).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__1(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__2(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__3(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__4(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__5(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__6(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__7(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__8(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__9(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__10(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__11(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__12(Prolog* mach);
	};


public:
	class pred_goal_dupset_2 : public Code {

	/*
	
	goal_dupset(_6496,_6498,_6508):-goal_dupset_varbag(_6496,_6498,_6500,_6508).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_goal_dupset_2__1(Prolog* mach);
	};


public:
	class pred_goal_dupset_varset_3 : public Code {

	/*
	
	goal_dupset_varset(_6534,_6536,_6538,_6548):-goal_dupset_varbag(_6534,_6536,_6540,sort(_6540,_6538,_6548)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_goal_dupset_varset_3__1(Prolog* mach);
	};


public:
	class pred_goal_dupset_varbag_3 : public Code {

	/*
	
	goal_dupset_varbag(_6584,_6586,_6588,_6600):-varbag(_6584,_6588,make_key(_6588,_6590,keysort(_6590,_6592,filter_dups(_6592,_6586,_6600)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_goal_dupset_varbag_3__1(Prolog* mach);
	};


public:
	class pred_make_key_2 : public Code {

	/*
	
	make_key([],[],_6658):-call(_6658).
	make_key([_6676|_6678],[_6676-dummy|_6690],_6698):-make_key(_6678,_6690,_6698).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_make_key_2__1(Prolog* mach);
	static Operation* exec_pred_make_key_2__2(Prolog* mach);
	};


public:
	class pred_filter_dups_2 : public Code {

	/*
	
	filter_dups(_6722,_6724,_6732):-filter_dups(_6722,_6724,[],_6732).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_filter_dups_2__1(Prolog* mach);
	};


public:
	class pred_set_command_3 : public Code {

	/*
	
	set_command(sub(_7054),_7056,_7058,_7072):-diffv(_7056,[_7054],_7058,_7072).
	set_command(add(_7102),_7104,_7106,_7114):-includev(_7102,_7104,_7106,_7114).
	set_command(sub_set(_7144),_7146,_7148,_7156):-diffv(_7146,_7144,_7148,_7156).
	set_command(add_set(_7186),_7188,_7190,_7198):-unionv(_7186,_7188,_7190,_7198).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_set_command_3__1(Prolog* mach);
	static Operation* exec_pred_set_command_3__2(Prolog* mach);
	static Operation* exec_pred_set_command_3__3(Prolog* mach);
	static Operation* exec_pred_set_command_3__4(Prolog* mach);
	};


public:
	class pred_table_command_3 : public Code {

	/*
	
	table_command(get(_7228,_7230),_7232,_7232,_7240):-get(_7232,_7228,_7230,_7240).
	table_command(set(_7270,_7272),_7274,_7276,_7284):-set(_7274,_7270,_7272,_7276,_7284).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_table_command_3__1(Prolog* mach);
	static Operation* exec_pred_table_command_3__2(Prolog* mach);
	};


public:
	class pred_inv_2 : public Code {

	/*
	
	inv(_7320,[_7316|_7318],_7330):-compare(_7322,_7320,_7316,inv_2(_7322,_7320,_7318,_7330)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_inv_2__1(Prolog* mach);
	};


public:
	class pred_inv_2_3 : public Code {

	/*
	
	inv_2(=,_7366,_7368,_7378):-call(_7378).
	inv_2(>,_7396,_7398,_7406):-inv(_7396,_7398,_7406).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_inv_2_3__1(Prolog* mach);
	static Operation* exec_pred_inv_2_3__2(Prolog* mach);
	};


public:
	class pred_intersectv_3 : public Code {

	/*
	
	intersectv([],_7432,[],_7442):-call(_7442).
	intersectv([_7462|_7464],_7466,_7468,_7476):-intersectv_2(_7466,_7462,_7464,_7468,_7476).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_intersectv_3__1(Prolog* mach);
	static Operation* exec_pred_intersectv_3__2(Prolog* mach);
	};


public:
	class pred_intersectv_2_4 : public Code {

	/*
	
	intersectv_2([],_7506,_7508,[],_7518):-call(_7518).
	intersectv_2([_7540|_7542],_7544,_7546,_7548,_7558):-compare(_7550,_7544,_7540,intersectv_3(_7550,_7544,_7546,_7540,_7542,_7548,_7558)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_intersectv_2_4__1(Prolog* mach);
	static Operation* exec_pred_intersectv_2_4__2(Prolog* mach);
	};


public:
	class pred_intersectv_3_6 : public Code {

	/*
	
	intersectv_3(<,_7604,_7606,_7608,_7610,_7612,_7620):-intersectv_2(_7606,_7608,_7610,_7612,_7620).
	intersectv_3(=,_7658,_7662,_7664,_7666,[_7658|_7660],_7674):-intersectv(_7662,_7666,_7660,_7674).
	intersectv_3(>,_7708,_7710,_7712,_7714,_7716,_7724):-intersectv_2(_7714,_7708,_7710,_7716,_7724).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_intersectv_3_6__1(Prolog* mach);
	static Operation* exec_pred_intersectv_3_6__2(Prolog* mach);
	static Operation* exec_pred_intersectv_3_6__3(Prolog* mach);
	};


public:
	class pred_diffv_3 : public Code {

	/*
	
	diffv([],_7760,[],_7770):-call(_7770).
	diffv([_7790|_7792],_7794,_7796,_7804):-diffv_2(_7794,_7790,_7792,_7796,_7804).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_diffv_3__1(Prolog* mach);
	static Operation* exec_pred_diffv_3__2(Prolog* mach);
	};


public:
	class pred_diffv_2_4 : public Code {

	/*
	
	diffv_2([],_7836,_7840,[_7836],_7850):-call(_7850).
	diffv_2([_7872|_7874],_7876,_7878,_7880,_7890):-compare(_7882,_7876,_7872,diffv_3(_7882,_7876,_7878,_7872,_7874,_7880,_7890)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_diffv_2_4__1(Prolog* mach);
	static Operation* exec_pred_diffv_2_4__2(Prolog* mach);
	};


public:
	class pred_diffv_3_6 : public Code {

	/*
	
	diffv_3(<,_7938,_7942,_7944,_7946,[_7938|_7940],_7960):-diffv(_7942,[_7944|_7946],_7940,_7960).
	diffv_3(=,_7994,_7996,_7998,_8000,_8002,_8010):-diffv(_7996,_8000,_8002,_8010).
	diffv_3(>,_8044,_8046,_8048,_8050,_8052,_8060):-diffv_2(_8050,_8044,_8046,_8052,_8060).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_diffv_3_6__1(Prolog* mach);
	static Operation* exec_pred_diffv_3_6__2(Prolog* mach);
	static Operation* exec_pred_diffv_3_6__3(Prolog* mach);
	};


public:
	class pred_unionv_3 : public Code {

	/*
	
	unionv([],_8096,_8096,_8106):-call(_8106).
	unionv([_8126|_8128],_8130,_8132,_8140):-unionv_2(_8130,_8126,_8128,_8132,_8140).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_unionv_3__1(Prolog* mach);
	static Operation* exec_pred_unionv_3__2(Prolog* mach);
	};


public:
	class pred_unionv_2_4 : public Code {

	/*
	
	unionv_2([],_8172,_8174,[_8172|_8174],_8184):-call(_8184).
	unionv_2([_8206|_8208],_8210,_8212,_8214,_8224):-compare(_8216,_8210,_8206,unionv_3(_8216,_8210,_8212,_8206,_8208,_8214,_8224)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_unionv_2_4__1(Prolog* mach);
	static Operation* exec_pred_unionv_2_4__2(Prolog* mach);
	};


public:
	class pred_unionv_3_6 : public Code {

	/*
	
	unionv_3(<,_8272,_8276,_8278,_8280,[_8272|_8274],_8288):-unionv_2(_8276,_8278,_8280,_8274,_8288).
	unionv_3(=,_8326,_8330,_8332,_8334,[_8326|_8328],_8342):-unionv(_8330,_8334,_8328,_8342).
	unionv_3(>,_8382,_8384,_8378,_8386,[_8378|_8380],_8394):-unionv_2(_8386,_8382,_8384,_8380,_8394).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_unionv_3_6__1(Prolog* mach);
	static Operation* exec_pred_unionv_3_6__2(Prolog* mach);
	static Operation* exec_pred_unionv_3_6__3(Prolog* mach);
	};


public:
	class pred_includev_3 : public Code {

	/*
	
	includev(_8430,_8432,_8434,_8442):-includev_2(_8432,_8430,_8434,_8442).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_includev_3__1(Prolog* mach);
	};


public:
	class pred_includev_2_3 : public Code {

	/*
	
	includev_2([],_8472,[_8472],_8484):-call(_8484).
	includev_2([_8504|_8506],_8508,_8510,_8520):-compare(_8512,_8508,_8504,includev_3(_8512,_8508,_8504,_8506,_8510,_8520)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_includev_2_3__1(Prolog* mach);
	static Operation* exec_pred_includev_2_3__2(Prolog* mach);
	};


public:
	class pred_includev_3_5 : public Code {

	/*
	
	includev_3(<,_8564,_8570,_8572,[_8564,_8570|_8572],_8582):-call(_8582).
	includev_3(=,_8610,_8606,_8608,[_8606|_8608],_8620):-call(_8620).
	includev_3(>,_8648,_8644,_8650,[_8644|_8646],_8658):-includev_2(_8650,_8648,_8646,_8658).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_includev_3_5__1(Prolog* mach);
	static Operation* exec_pred_includev_3_5__2(Prolog* mach);
	static Operation* exec_pred_includev_3_5__3(Prolog* mach);
	};


public:
	class pred_subsetv_2 : public Code {

	/*
	
	subsetv([],_8690,_8700):-call(_8700).
	subsetv([_8718|_8720],[_8724|_8726],_8736):-compare(_8728,_8718,_8724,subsetv_2(_8728,_8718,_8720,_8726,_8736)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_subsetv_2__1(Prolog* mach);
	static Operation* exec_pred_subsetv_2__2(Prolog* mach);
	};


public:
	class pred_subsetv_2_4 : public Code {

	/*
	
	subsetv_2(=,_8774,_8776,_8778,_8786):-subsetv(_8776,_8778,_8786).
	subsetv_2(>,_8814,_8816,_8818,_8832):-subsetv([_8814|_8816],_8818,_8832).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_subsetv_2_4__1(Prolog* mach);
	static Operation* exec_pred_subsetv_2_4__2(Prolog* mach);
	};


public:
	class pred_varset_2 : public Code {

	/*
	
	varset(_8860,_8862,_8872):-varbag(_8860,_8864,sort(_8864,_8862,_8872)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_varset_2__1(Prolog* mach);
	};


public:
	class pred_varbag_2 : public Code {

	/*
	
	varbag(_8904,_8906,_8914):-varbag(_8904,_8906,[],_8914).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_varbag_2__1(Prolog* mach);
	};


public:
	class pred_unify_p_1 : public Code {

	/*
	
	unify_p(_9226=_9228,_9238):-call(_9238).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_unify_p_1__1(Prolog* mach);
	};


public:
	class pred_call_p_1 : public Code {

	/*
	
	call_p(_9252,_9264):-not(unify_p(_9252),_9264).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_call_p_1__1(Prolog* mach);
	};


public:
	class pred_split_unify_3 : public Code {

	/*
	
	split_unify(_9286=_9288,_9286,_9288,_9298):-call(_9298).
	split_unify(_9318=_9320,_9320,_9318,_9330):-call(_9330).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_split_unify_3__1(Prolog* mach);
	static Operation* exec_pred_split_unify_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef SIMPLE_ANALYZER
