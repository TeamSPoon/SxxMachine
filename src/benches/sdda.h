#ifndef SDDA
#define SDDA

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class sdda {
public:
	static Const* s0;
	static Const* s1;
	static Const* s2;
	static Const* s3;
	static Const* s4;
	static Const* s5;
	static Const* s6;
	static Const* s7;
	static Const* s8;
	static Const* s9;
	static Const* s10;
	static Const* s11;
	static Const* s12;
	static Const* s13;
	static Const* s14;
	static Const* s15;
	static Const* s16;
	static Const* s17;
	static Const* s18;
	static Const* s19;
	static Const* s20;
	static Const* s21;
	static Const* s22;
	static Const* s23;
	static Const* s24;
	static Const* s25;
	static Const* s26;
	static Const* s27;
	static Const* s28;
	static Const* s29;
	static Const* s30;
	static Const* s31;
	static Const* s32;
	static Const* s33;
	static Const* s34;
	static Const* s35;
	static Const* s36;
	static Const* s37;
	static Const* s38;
	static Const* s39;
	static Const* s40;
	static Const* s41;
	static Const* s42;
	static Const* s43;
	static Const* s44;
	static Const* s45;
	static Const* s46;
	static Const* s47;
	static Const* s48;
	static Const* s49;
	static Const* s50;
	static Const* s51;
	static Const* s52;
	static Const* s53;
	static Const* s54;
	static Const* s55;
	static Const* s56;
	static Const* s57;
	static Const* s58;
	static Const* s59;
	static Const* s60;
	static Const* s61;
	static Const* s62;
	static Const* s63;
	static Const* s64;
	static Const* s65;
	static Const* s66;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint26;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_8774):-do_sdda(test,_8748,_8750,_8752,_8774).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_do_sdda_4 : public Code {

	/*
	 * 
	 * do_sdda(_8880,_8882,_8884,_8886,_8954):-read_procedures(_8890,_8882,_8894,
	 * entry_exit_modes_list(_8890,_8882,_8894,_8954)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_read_procedures_3 : public Code {

	/*
	 * 
	 * read_procedures([[a/2,a(_9160,_9162),a(_9172,_9172)|_9180],[c/3,(c(_9202,
	 * _9204,_9206):-a(_9202,_9204))|_9224]|_9230],_9250,[c(_9234,_9236,_9238)|_9244
	 * ],_9292):-cut(1,_9292).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_entry_exit_modes_list_3 : public Code {

	/*
	 * 
	 * entry_exit_modes_list(_9362,_9364,_9366,_9410):-var(_9366,_9410).
	 * entry_exit_modes_list(_9522,_9524,[_9516|_9518],_9630):-
	 * =..(_9516,[_9530|_9532],length(_9532,_9544,proc_exit_mode(_9522,_9524,[],
	 * _9530/_9544,_9532,_9564,entry_exit_modes_list(_9522,_9524,_9518,_9630)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_proc_exit_mode_6 : public Code {

	/*
	 * 
	 * proc_exit_mode(_9976,_9978,_9980,_9970/_9972,_9984,_9986,_10058):-built_in(
	 * _9970/_9972,_9984,_9986,_10058).
	 * proc_exit_mode(_10228,_10230,_10232,_10222/_10224,_10236,_10238,_10326):-
	 * look_up_act([_10222/_10224,_10236,_10238],_10230,_10326).
	 * proc_exit_mode(_10482,_10484,_10486,_10476/_10478,_10490,_10492,_10684):-
	 * umember([_10476/_10478|_10504],_10482,dup(_10504,_10516,
	 * clause_exit_modes_list(_10482,_10484,_10486,_10516,_10490,_10530,or((_10530=[
	 * ]->fail),true,worst_case(_10530,_10492,dup(_10490,_10560,add_to_list([_10476/
	 * _10478,_10560,_10492],_10484,_10684))))))).
	 * proc_exit_mode(_11202,_11204,_11206,_11196/_11198,_11210,_11212,_11330):-
	 * =..(_11222,[_11196|_11210],all_shared(_11210,_11212,add_to_list([_11196/
	 * _11198,_11210,_11212],_11204,_11330))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_clause_exit_modes_list_6 : public Code {

	/*
	 * 
	 * clause_exit_modes_list(_11580,_11582,_11584,_11586,_11588,[],_11658):-var(
	 * _11586,cut(1,_11658)).
	 * clause_exit_modes_list(_11812,_11814,_11816,[_11806|_11808],_11820,_11822,
	 * _11918):-eqmember([_11806,_11820],_11816,clause_exit_modes_list(_11812,_11814
	 * ,_11816,_11808,_11820,_11822,_11918)).
	 * clause_exit_modes_list(_12192,_12194,_12196,[_12180|_12182],_12200,[_12186|
	 * _12188],_12322):-dup(_12200,_12186,clause_exit_mode(_12192,_12194,[[_12180,
	 * _12200]|_12196],_12180,_12186,clause_exit_modes_list(_12192,_12194,_12196,
	 * _12182,_12200,_12188,_12322))).
	 * clause_exit_modes_list(_12682,_12684,_12686,[_12676|_12678],_12690,_12692,
	 * _12764):-clause_exit_modes_list(_12682,_12684,_12686,_12678,_12690,_12692,
	 * _12764).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_clause_exit_mode_5 : public Code {

	/*
	 * 
	 * clause_exit_mode(_12976,_12978,_12980,_12982,_12984,_13118):-or(_12982=(
	 * _12988:-_12990),(_12982=_12988,_12990=true),=..(_12988,[_13024|_13026],unify(
	 * _13026,_12984,body_exit_mode(_12976,_12978,_12980,_12990,_13118)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_body_exit_mode_4 : public Code {

	/*
	 * 
	 * body_exit_mode(_13462,_13464,_13466,(_13456,_13458),_13540):-body_exit_mode(
	 * _13462,_13464,_13466,_13456,body_exit_mode(_13462,_13464,_13466,_13458,_13540
	 * )).
	 * body_exit_mode(_13798,_13800,_13802,_13804,_13914):-functor(_13804,_13810,
	 * _13812,=..(_13804,[_13810|_13818],proc_exit_mode(_13798,_13800,_13802,_13810/
	 * _13812,_13818,_13844,unify(_13818,_13844,_13914)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_unify_2 : public Code {

	/*
	 * 
	 * unify(_14286,_14286,_14322):-cut(1,_14322).
	 * unify(_14420,g,_14482):-atomic(_14420,cut(1,not(_14420=[],_14482))).
	 * unify(g,_14658,_14718):-atomic(_14658,cut(1,not(_14658=[],_14718))).
	 * unify([_14892|_14894],[_14898|_14900],_14964):-cut(1,unify(_14892,_14898,
	 * unify(_14894,_14900,_14964))). unify(_15162,_15164,_15240):-
	 * =..(_15162,[_15168|_15170],=..(_15164,[_15168|_15182],unify(_15170,_15182,
	 * _15240))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_equiv_2 : public Code {

	/*
	 * 
	 * equiv(_15482,_15484,_15526):-equiv(_15482,_15484,_15492,_15526).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_equiv_3 : public Code {

	/*
	 * 
	 * equiv(_15688,_15690,_15692,_15744):-termequal(_15688,_15690,cut(1,_15744)).
	 * equiv(g,_15920,_15922,_15988):-atomic(_15920,cut(1,not(_15920=[],_15988))).
	 * equiv(_16182,g,_16186,_16252):-atomic(_16182,cut(1,not(_16182=[],_16252))).
	 * equiv(_16446,_16448,_16450,_16524):-var(_16446,cut(1,var(_16448,equiv_vars(
	 * _16446,_16448,_16450,_16524)))).
	 * equiv(_16778,_16780,_16782,_16856):-var(_16780,cut(1,var(_16778,equiv_vars(
	 * _16778,_16780,_16782,_16856)))).
	 * equiv([_17110|_17112],[_17116|_17118],_17126,_17194):-cut(1,equiv(_17110,
	 * _17116,_17126,equiv(_17112,_17118,_17126,_17194))).
	 * equiv(_17440,_17442,_17444,_17528):-
	 * =..(_17440,[_17448|_17450],=..(_17442,[_17448|_17462],equiv(_17450,_17462,
	 * _17444,_17528))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_equiv_vars_3 : public Code {

	/*
	 * 
	 * equiv_vars(_17804,_17806,_17808,_17888):-var(_17808,cut(1,unify([[_17804,
	 * _17806]|_17830],_17808,_17888))).
	 * equiv_vars(_18122,_18124,[[_18104,_18110]|_18118],_18190):-termequal(_18122,
	 * _18104,cut(1,termequal(_18124,_18110,_18190))).
	 * equiv_vars(_18444,_18446,[[_18426,_18432]|_18440],_18512):-termequal(_18446,
	 * _18432,cut(1,termequal(_18444,_18426,_18512))).
	 * equiv_vars(_18754,_18756,[_18748|_18750],_18806):-equiv_vars(_18754,_18756,
	 * _18750,_18806).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_dup_2 : public Code {

	/*
	 * 
	 * dup(_18988,_18990,_19032):-dup(_18988,_18990,_18998,_19032).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_dup_3 : public Code {

	/*
	 * 
	 * dup(_19212,_19214,_19216,_19280):-var(_19212,cut(1,dup_var(_19212,_19214,
	 * _19216,_19280))).
	 * dup(_19516,_19516,_19520,_19570):-atomic(_19516,cut(1,_19570)).
	 * dup([_19742|_19744],[_19748|_19750],_19758,_19826):-cut(1,dup(_19742,_19748,
	 * _19758,dup(_19744,_19750,_19758,_19826))). dup(_20090,_20092,_20094,_20178):-
	 * =..(_20090,[_20098|_20100],dup(_20100,_20112,_20094,=..(_20092,[_20098|_20112
	 * ],_20178))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_dup_var_3 : public Code {

	/*
	 * 
	 * dup_var(_20472,_20474,_20476,_20556):-var(_20476,cut(1,unify([[_20472,_20474]
	 * |_20498],_20476,_20556))).
	 * dup_var(_20808,_20796,[[_20790,_20796]|_20804],_20864):-termequal(_20808,
	 * _20790,cut(1,_20864)).
	 * dup_var(_21068,_21070,[_21062|_21064],_21120):-dup_var(_21068,_21070,_21064,
	 * _21120).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_built_in_3 : public Code {

	/*
	 * 
	 * built_in(true/0,[],[],_21352):-call(_21352).
	 * built_in(fail/0,[],[],_21554):-call(_21554).
	 * built_in((=)/2,[_21730,_21736],[g,g],_21812):-or(atomic(_21730),atomic(_21736
	 * ),_21812).
	 * built_in((=)/2,[_22016,_22022],[_22016,_22016],_22066):-call(_22066).
	 * built_in((+)/2,[_22242,_22248],[_22242,_22248],_22292):-call(_22292).
	 * built_in((-)/2,[_22468,_22474],[_22468,_22474],_22518):-call(_22518).
	 * built_in((*)/2,[_22694,_22700],[_22694,_22700],_22744):-call(_22744).
	 * built_in((/)/2,[_22920,_22926],[_22920,_22926],_22970):-call(_22970).
	 * built_in((>=)/2,[_23146,_23152],[_23146,_23152],_23196):-call(_23196).
	 * built_in((<)/2,[_23372,_23378],[_23372,_23378],_23422):-call(_23422).
	 * built_in((is)/2,[_23598,_23604],[g,_23604],_23648):-call(_23648).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_worst_case_2 : public Code {

	/*
	 * 
	 * worst_case([],_23820,_23842):-call(_23842).
	 * worst_case([_24004|_24006],_24012,_24064):-unify(_24004,_24012,worst_case(
	 * _24006,_24012,_24064)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_look_up_act_2 : public Code {

	/*
	 * 
	 * look_up_act(_24304,_24306,_24356):-var(_24306,cut(1,fail(_24356))).
	 * look_up_act([_24566/_24568,_24578,_24584],[[_24566/_24568,_24602,_24584]|
	 * _24616],_24662):-equiv(_24578,_24602,_24662).
	 * look_up_act([_24858/_24860,_24870,_24876],[_24882|_24884],_24954):-
	 * look_up_act([_24858/_24860,_24870,_24876],_24884,_24954).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_all_shared_2 : public Code {

	/*
	 * 
	 * all_shared(_25150,_25152,_25220):-unify(_25150,_25158,_25160,bind_all(_25164,
	 * _25160,unify(_25150,_25152,_25160,_25220))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_bind_all_2 : public Code {

	/*
	 * 
	 * bind_all(_25550,_25552,_25590):-var(_25552,_25590).
	 * bind_all(_25790,[[_25784,_25790]|_25798],_25854):-var(_25790,bind_all(_25790,
	 * _25798,_25854)).
	 * bind_all(_26116,[[_26098,_26104]|_26112],_26158):-bind_all(_26116,_26112,
	 * _26158).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_add_to_list_2 : public Code {

	/*
	 * 
	 * add_to_list(_4212,_4214,_4228):-var(_4214,unify([_4212|_4220],_4214,_4228)).
	 * add_to_list(_4264,[_4260|_4262],_4272):-add_to_list(_4264,_4262,_4272).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_umember_2 : public Code {

	/*
	 * 
	 * umember(_4296,_4298,_4306):-var(_4298,cut(1,fail(_4306))).
	 * umember(_4340,[_4340|_4342],_4352):-call(_4352).
	 * umember(_4374,[_4370|_4372],_4382):-umember(_4374,_4372,_4382).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sumember_2 : public Code {

	/*
	 * 
	 * sumember(_4406,_4408,_4416):-var(_4408,cut(1,fail(_4416))).
	 * sumember(_4454,[_4450|_4452],_4462):-termequal(_4454,_4450,_4462).
	 * sumember(_4492,[_4488|_4490],_4500):-sumember(_4492,_4490,_4500).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_member_2 : public Code {

	/*
	 * 
	 * member(_4526,[_4526|_4528],_4538):-call(_4538).
	 * member(_4560,[_4556|_4558],_4568):-member(_4560,_4558,_4568).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_smember_2 : public Code {

	/*
	 * 
	 * smember(_4598,[_4594|_4596],_4606):-termequal(_4598,_4594,_4606).
	 * smember(_4636,[_4632|_4634],_4644):-smember(_4636,_4634,_4644).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_eqmember_2 : public Code {

	/*
	 * 
	 * eqmember(_4674,[_4670|_4672],_4682):-equiv(_4674,_4670,_4682).
	 * eqmember(_4712,[_4708|_4710],_4720):-eqmember(_4712,_4710,_4720).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_concat_3 : public Code {

	/*
	 * 
	 * concat([],_4744,_4744,_4754):-call(_4754).
	 * concat([_4774|_4776],_4784,[_4774|_4782],_4792):-concat(_4776,_4784,_4782,
	 * _4792).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_nl_0 : public Code {

	/*
	 * 
	 * nl(_4828):-call(_4828).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_list2_3 : public Code {

	/*
	 * 
	 * write_list2([_4842|_4844],_4846,_4848,_4908):-name_vars(_4842,_4846,_4850,
	 * write(_4842,or((nonvar(_4844)->write(','),nl,write('
	 * '),write_list2(_4844,_4850,_4848)),_4848=_4850,_4908))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_name_vars_3 : public Code {

	/*
	 * 
	 * name_vars(_4950,_4952,_4954,_4968):-var(_4950,cut(1,make_name(_4952,_4950,is(
	 * _4954,_4952+1,_4968)))).
	 * name_vars(_5014,_5016,_5016,_5024):-atom(_5014,cut(1,_5024)).
	 * name_vars([_5056|_5058],_5060,_5062,_5072):-cut(1,name_vars(_5056,_5060,_5064
	 * ,name_vars(_5058,_5064,_5062,_5072))). name_vars(_5116,_5118,_5120,_5134):-
	 * =..(_5116,[_5124|_5126],name_vars(_5126,_5118,_5120,_5134)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_make_name_2 : public Code {

	/*
	 * 
	 * make_name(_5170,_5172,_5210):-is(_5180,_5170//26,is(_5200,_5170 mod
	 * 26+"A",build_name(_5180,_5200,_5202,name(_5172,_5202,_5210)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_build_name_3 : public Code {

	/*
	 * 
	 * build_name(0,_5262,[_5262],_5272):-cut(1,_5272).
	 * build_name(_5302,_5298,[_5298|_5300],_5318):-smallerthan(0,_5302,is(_5310,
	 * _5302-1,build_name(_5310,_5298,_5300,_5318))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef SDDA
