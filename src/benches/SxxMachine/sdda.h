#ifndef SDDA
#define SDDA

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
	static Operation* const  reg_top_0;
	static Operation* const  reg_do_sdda_4;
	static Operation* const  reg_read_procedures_3;
	static Operation* const  reg_entry_exit_modes_list_3;
	static Operation* const  reg_proc_exit_mode_6;
	static Operation* const  reg_clause_exit_modes_list_6;
	static Operation* const  reg_clause_exit_mode_5;
	static Operation* const  reg_body_exit_mode_4;
	static Operation* const  reg_unify_2;
	static Operation* const  reg_equiv_2;
	static Operation* const  reg_equiv_3;
	static Operation* const  reg_equiv_vars_3;
	static Operation* const  reg_dup_2;
	static Operation* const  reg_dup_3;
	static Operation* const  reg_dup_var_3;
	static Operation* const  reg_built_in_3;
	static Operation* const  reg_worst_case_2;
	static Operation* const  reg_look_up_act_2;
	static Operation* const  reg_all_shared_2;
	static Operation* const  reg_bind_all_2;
	static Operation* const  reg_add_to_list_2;
	static Operation* const  reg_umember_2;
	static Operation* const  reg_sumember_2;
	static Operation* const  reg_member_2;
	static Operation* const  reg_smember_2;
	static Operation* const  reg_eqmember_2;
	static Operation* const  reg_concat_3;
	static Operation* const  reg_nl_0;
	static Operation* const  reg_write_list2_3;
	static Operation* const  reg_name_vars_3;
	static Operation* const  reg_make_name_2;
	static Operation* const  reg_build_name_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_5388):-do_sdda(test,_5362,_5364,_5366,_5388).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_do_sdda_4 : public Code {

	/*
	
	do_sdda(_5494,_5496,_5498,_5500,_5568):-read_procedures(_5504,_5496,_5508,entry_exit_modes_list(_5504,_5496,_5508,_5568)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_do_sdda_4__1(Prolog* mach);
	};


public:
	class pred_read_procedures_3 : public Code {

	/*
	
	read_procedures([[a/2,a(_5774,_5776),a(_5786,_5786)|_5794],[c/3,(c(_5816,_5818,_5820):-a(_5816,_5818))|_5838]|_5844],_5864,[c(_5848,_5850,_5852)|_5858],_5906):-cut(1,_5906).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_procedures_3__1(Prolog* mach);
	};


public:
	class pred_entry_exit_modes_list_3 : public Code {

	/*
	
	entry_exit_modes_list(_5976,_5978,_5980,_6024):-var(_5980,_6024).
	entry_exit_modes_list(_6136,_6138,[_6130|_6132],_6244):- =..(_6130,[_6144|_6146],length(_6146,_6158,proc_exit_mode(_6136,_6138,[],_6144/_6158,_6146,_6178,entry_exit_modes_list(_6136,_6138,_6132,_6244)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_entry_exit_modes_list_3__1(Prolog* mach);
	static Operation* exec_pred_entry_exit_modes_list_3__2(Prolog* mach);
	};


public:
	class pred_proc_exit_mode_6 : public Code {

	/*
	
	proc_exit_mode(_6590,_6592,_6594,_6584/_6586,_6598,_6600,_6672):-built_in(_6584/_6586,_6598,_6600,_6672).
	proc_exit_mode(_6842,_6844,_6846,_6836/_6838,_6850,_6852,_6940):-look_up_act([_6836/_6838,_6850,_6852],_6844,_6940).
	proc_exit_mode(_7096,_7098,_7100,_7090/_7092,_7104,_7106,_7298):-umember([_7090/_7092|_7118],_7096,dup(_7118,_7130,clause_exit_modes_list(_7096,_7098,_7100,_7130,_7104,_7144,or((_7144=[]->fail),true,worst_case(_7144,_7106,dup(_7104,_7174,add_to_list([_7090/_7092,_7174,_7106],_7098,_7298))))))).
	proc_exit_mode(_7816,_7818,_7820,_7810/_7812,_7824,_7826,_7944):- =..(_7836,[_7810|_7824],all_shared(_7824,_7826,add_to_list([_7810/_7812,_7824,_7826],_7818,_7944))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_proc_exit_mode_6__1(Prolog* mach);
	static Operation* exec_pred_proc_exit_mode_6__2(Prolog* mach);
	static Operation* exec_pred_proc_exit_mode_6__3(Prolog* mach);
	static Operation* exec_pred_proc_exit_mode_6__4(Prolog* mach);
	};


public:
	class pred_clause_exit_modes_list_6 : public Code {

	/*
	
	clause_exit_modes_list(_8194,_8196,_8198,_8200,_8202,[],_8272):-var(_8200,cut(1,_8272)).
	clause_exit_modes_list(_8426,_8428,_8430,[_8420|_8422],_8434,_8436,_8532):-eqmember([_8420,_8434],_8430,clause_exit_modes_list(_8426,_8428,_8430,_8422,_8434,_8436,_8532)).
	clause_exit_modes_list(_8806,_8808,_8810,[_8794|_8796],_8814,[_8800|_8802],_8936):-dup(_8814,_8800,clause_exit_mode(_8806,_8808,[[_8794,_8814]|_8810],_8794,_8800,clause_exit_modes_list(_8806,_8808,_8810,_8796,_8814,_8802,_8936))).
	clause_exit_modes_list(_9296,_9298,_9300,[_9290|_9292],_9304,_9306,_9378):-clause_exit_modes_list(_9296,_9298,_9300,_9292,_9304,_9306,_9378).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_clause_exit_modes_list_6__1(Prolog* mach);
	static Operation* exec_pred_clause_exit_modes_list_6__2(Prolog* mach);
	static Operation* exec_pred_clause_exit_modes_list_6__3(Prolog* mach);
	static Operation* exec_pred_clause_exit_modes_list_6__4(Prolog* mach);
	};


public:
	class pred_clause_exit_mode_5 : public Code {

	/*
	
	clause_exit_mode(_9590,_9592,_9594,_9596,_9598,_9732):-or(_9596=(_9602:-_9604),(_9596=_9602,_9604=true),=..(_9602,[_9638|_9640],unify(_9640,_9598,body_exit_mode(_9590,_9592,_9594,_9604,_9732)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_clause_exit_mode_5__1(Prolog* mach);
	};


public:
	class pred_body_exit_mode_4 : public Code {

	/*
	
	body_exit_mode(_10076,_10078,_10080,(_10070,_10072),_10154):-body_exit_mode(_10076,_10078,_10080,_10070,body_exit_mode(_10076,_10078,_10080,_10072,_10154)).
	body_exit_mode(_10412,_10414,_10416,_10418,_10528):-functor(_10418,_10424,_10426,=..(_10418,[_10424|_10432],proc_exit_mode(_10412,_10414,_10416,_10424/_10426,_10432,_10458,unify(_10432,_10458,_10528)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_body_exit_mode_4__1(Prolog* mach);
	static Operation* exec_pred_body_exit_mode_4__2(Prolog* mach);
	};


public:
	class pred_unify_2 : public Code {

	/*
	
	unify(_10900,_10900,_10936):-cut(1,_10936).
	unify(_11034,g,_11096):-atomic(_11034,cut(1,not(_11034=[],_11096))).
	unify(g,_11272,_11332):-atomic(_11272,cut(1,not(_11272=[],_11332))).
	unify([_11506|_11508],[_11512|_11514],_11578):-cut(1,unify(_11506,_11512,unify(_11508,_11514,_11578))).
	unify(_11776,_11778,_11854):- =..(_11776,[_11782|_11784],=..(_11778,[_11782|_11796],unify(_11784,_11796,_11854))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_unify_2__1(Prolog* mach);
	static Operation* exec_pred_unify_2__2(Prolog* mach);
	static Operation* exec_pred_unify_2__3(Prolog* mach);
	static Operation* exec_pred_unify_2__4(Prolog* mach);
	static Operation* exec_pred_unify_2__5(Prolog* mach);
	};


public:
	class pred_equiv_2 : public Code {

	/*
	
	equiv(_12096,_12098,_12140):-equiv(_12096,_12098,_12106,_12140).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_equiv_2__1(Prolog* mach);
	};


public:
	class pred_equiv_3 : public Code {

	/*
	
	equiv(_12302,_12304,_12306,_12358):-termequal(_12302,_12304,cut(1,_12358)).
	equiv(g,_12534,_12536,_12602):-atomic(_12534,cut(1,not(_12534=[],_12602))).
	equiv(_12796,g,_12800,_12866):-atomic(_12796,cut(1,not(_12796=[],_12866))).
	equiv(_13060,_13062,_13064,_13138):-var(_13060,cut(1,var(_13062,equiv_vars(_13060,_13062,_13064,_13138)))).
	equiv(_13392,_13394,_13396,_13470):-var(_13394,cut(1,var(_13392,equiv_vars(_13392,_13394,_13396,_13470)))).
	equiv([_13724|_13726],[_13730|_13732],_13740,_13808):-cut(1,equiv(_13724,_13730,_13740,equiv(_13726,_13732,_13740,_13808))).
	equiv(_14054,_14056,_14058,_14142):- =..(_14054,[_14062|_14064],=..(_14056,[_14062|_14076],equiv(_14064,_14076,_14058,_14142))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_equiv_3__1(Prolog* mach);
	static Operation* exec_pred_equiv_3__2(Prolog* mach);
	static Operation* exec_pred_equiv_3__3(Prolog* mach);
	static Operation* exec_pred_equiv_3__4(Prolog* mach);
	static Operation* exec_pred_equiv_3__5(Prolog* mach);
	static Operation* exec_pred_equiv_3__6(Prolog* mach);
	static Operation* exec_pred_equiv_3__7(Prolog* mach);
	};


public:
	class pred_equiv_vars_3 : public Code {

	/*
	
	equiv_vars(_14418,_14420,_14422,_14502):-var(_14422,cut(1,unify([[_14418,_14420]|_14444],_14422,_14502))).
	equiv_vars(_14736,_14738,[[_14718,_14724]|_14732],_14804):-termequal(_14736,_14718,cut(1,termequal(_14738,_14724,_14804))).
	equiv_vars(_15058,_15060,[[_15040,_15046]|_15054],_15126):-termequal(_15060,_15046,cut(1,termequal(_15058,_15040,_15126))).
	equiv_vars(_15368,_15370,[_15362|_15364],_15420):-equiv_vars(_15368,_15370,_15364,_15420).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_equiv_vars_3__1(Prolog* mach);
	static Operation* exec_pred_equiv_vars_3__2(Prolog* mach);
	static Operation* exec_pred_equiv_vars_3__3(Prolog* mach);
	static Operation* exec_pred_equiv_vars_3__4(Prolog* mach);
	};


public:
	class pred_dup_2 : public Code {

	/*
	
	dup(_2730,_2732,_2742):-dup(_2730,_2732,_2734,_2742).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_dup_2__1(Prolog* mach);
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
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_dup_3__1(Prolog* mach);
	static Operation* exec_pred_dup_3__2(Prolog* mach);
	static Operation* exec_pred_dup_3__3(Prolog* mach);
	static Operation* exec_pred_dup_3__4(Prolog* mach);
	};


public:
	class pred_dup_var_3 : public Code {

	/*
	
	dup_var(_2994,_2996,_2998,_3024):-var(_2998,cut(1,unify([[_2994,_2996]|_3016],_2998,_3024))).
	dup_var(_3080,_3070,[[_3064,_3070]|_3078],_3088):-termequal(_3080,_3064,cut(1,_3088)).
	dup_var(_3126,_3128,[_3122|_3124],_3136):-dup_var(_3126,_3128,_3124,_3136).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_dup_var_3__1(Prolog* mach);
	static Operation* exec_pred_dup_var_3__2(Prolog* mach);
	static Operation* exec_pred_dup_var_3__3(Prolog* mach);
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
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_built_in_3__1(Prolog* mach);
	static Operation* exec_pred_built_in_3__2(Prolog* mach);
	static Operation* exec_pred_built_in_3__3(Prolog* mach);
	static Operation* exec_pred_built_in_3__4(Prolog* mach);
	static Operation* exec_pred_built_in_3__5(Prolog* mach);
	static Operation* exec_pred_built_in_3__6(Prolog* mach);
	static Operation* exec_pred_built_in_3__7(Prolog* mach);
	static Operation* exec_pred_built_in_3__8(Prolog* mach);
	static Operation* exec_pred_built_in_3__9(Prolog* mach);
	static Operation* exec_pred_built_in_3__10(Prolog* mach);
	static Operation* exec_pred_built_in_3__11(Prolog* mach);
	};


public:
	class pred_worst_case_2 : public Code {

	/*
	
	worst_case([],_3746,_3756):-call(_3756).
	worst_case([_3774|_3776],_3778,_3786):-unify(_3774,_3778,worst_case(_3776,_3778,_3786)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_worst_case_2__1(Prolog* mach);
	static Operation* exec_pred_worst_case_2__2(Prolog* mach);
	};


public:
	class pred_look_up_act_2 : public Code {

	/*
	
	look_up_act(_3818,_3820,_3828):-var(_3820,cut(1,fail(_3828))).
	look_up_act([_3862/_3864,_3874,_3880],[[_3862/_3864,_3898,_3880]|_3912],_3920):-equiv(_3874,_3898,_3920).
	look_up_act([_3946/_3948,_3958,_3964],[_3970|_3972],_4004):-look_up_act([_3946/_3948,_3958,_3964],_3972,_4004).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_look_up_act_2__1(Prolog* mach);
	static Operation* exec_pred_look_up_act_2__2(Prolog* mach);
	static Operation* exec_pred_look_up_act_2__3(Prolog* mach);
	};


public:
	class pred_all_shared_2 : public Code {

	/*
	
	all_shared(_4028,_4030,_4044):-unify(_4028,_4032,_4034,bind_all(_4036,_4034,unify(_4028,_4030,_4034,_4044))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_all_shared_2__1(Prolog* mach);
	};


public:
	class pred_bind_all_2 : public Code {

	/*
	
	bind_all(_4088,_4090,_4098):-var(_4090,_4098).
	bind_all(_4128,[[_4122,_4128]|_4136],_4144):-var(_4128,bind_all(_4128,_4136,_4144)).
	bind_all(_4192,[[_4176,_4182]|_4190],_4200):-bind_all(_4192,_4190,_4200).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_bind_all_2__1(Prolog* mach);
	static Operation* exec_pred_bind_all_2__2(Prolog* mach);
	static Operation* exec_pred_bind_all_2__3(Prolog* mach);
	};


public:
	class pred_add_to_list_2 : public Code {

	/*
	
	add_to_list(_4224,_4226,_4240):-var(_4226,unify([_4224|_4232],_4226,_4240)).
	add_to_list(_4276,[_4272|_4274],_4284):-add_to_list(_4276,_4274,_4284).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_add_to_list_2__1(Prolog* mach);
	static Operation* exec_pred_add_to_list_2__2(Prolog* mach);
	};


public:
	class pred_umember_2 : public Code {

	/*
	
	umember(_4308,_4310,_4318):-var(_4310,cut(1,fail(_4318))).
	umember(_4352,[_4352|_4354],_4364):-call(_4364).
	umember(_4386,[_4382|_4384],_4394):-umember(_4386,_4384,_4394).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_umember_2__1(Prolog* mach);
	static Operation* exec_pred_umember_2__2(Prolog* mach);
	static Operation* exec_pred_umember_2__3(Prolog* mach);
	};


public:
	class pred_sumember_2 : public Code {

	/*
	
	sumember(_4418,_4420,_4428):-var(_4420,cut(1,fail(_4428))).
	sumember(_4466,[_4462|_4464],_4474):-termequal(_4466,_4462,_4474).
	sumember(_4504,[_4500|_4502],_4512):-sumember(_4504,_4502,_4512).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sumember_2__1(Prolog* mach);
	static Operation* exec_pred_sumember_2__2(Prolog* mach);
	static Operation* exec_pred_sumember_2__3(Prolog* mach);
	};


public:
	class pred_member_2 : public Code {

	/*
	
	member(_4538,[_4538|_4540],_4550):-call(_4550).
	member(_4572,[_4568|_4570],_4580):-member(_4572,_4570,_4580).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_member_2__1(Prolog* mach);
	static Operation* exec_pred_member_2__2(Prolog* mach);
	};


public:
	class pred_smember_2 : public Code {

	/*
	
	smember(_4610,[_4606|_4608],_4618):-termequal(_4610,_4606,_4618).
	smember(_4648,[_4644|_4646],_4656):-smember(_4648,_4646,_4656).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_smember_2__1(Prolog* mach);
	static Operation* exec_pred_smember_2__2(Prolog* mach);
	};


public:
	class pred_eqmember_2 : public Code {

	/*
	
	eqmember(_4686,[_4682|_4684],_4694):-equiv(_4686,_4682,_4694).
	eqmember(_4724,[_4720|_4722],_4732):-eqmember(_4724,_4722,_4732).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_eqmember_2__1(Prolog* mach);
	static Operation* exec_pred_eqmember_2__2(Prolog* mach);
	};


public:
	class pred_concat_3 : public Code {

	/*
	
	concat([],_4756,_4756,_4766):-call(_4766).
	concat([_4786|_4788],_4796,[_4786|_4794],_4804):-concat(_4788,_4796,_4794,_4804).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_concat_3__1(Prolog* mach);
	static Operation* exec_pred_concat_3__2(Prolog* mach);
	};


public:
	class pred_nl_0 : public Code {

	/*
	
	nl(_4840):-call(_4840).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_nl_0__1(Prolog* mach);
	};


public:
	class pred_write_list2_3 : public Code {

	/*
	
	write_list2([_4854|_4856],_4858,_4860,_4920):-name_vars(_4854,_4858,_4862,write(_4854,or((nonvar(_4856)->write(','),nl,write(' '),write_list2(_4856,_4862,_4860)),_4860=_4862,_4920))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_write_list2_3__1(Prolog* mach);
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
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_name_vars_3__1(Prolog* mach);
	static Operation* exec_pred_name_vars_3__2(Prolog* mach);
	static Operation* exec_pred_name_vars_3__3(Prolog* mach);
	static Operation* exec_pred_name_vars_3__4(Prolog* mach);
	};


public:
	class pred_make_name_2 : public Code {

	/*
	
	make_name(_5182,_5184,_5222):-is(_5192,_5182//26,is(_5212,_5182 mod 26+"A",build_name(_5192,_5212,_5214,name(_5184,_5214,_5222)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_make_name_2__1(Prolog* mach);
	};


public:
	class pred_build_name_3 : public Code {

	/*
	
	build_name(0,_5274,[_5274],_5284):-cut(1,_5284).
	build_name(_5314,_5310,[_5310|_5312],_5330):-smallerthan(0,_5314,is(_5322,_5314-1,build_name(_5322,_5310,_5312,_5330))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_build_name_3__1(Prolog* mach);
	static Operation* exec_pred_build_name_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef SDDA
