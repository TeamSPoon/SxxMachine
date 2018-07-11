using namespace std;

#include "simple_analyzer.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../bootlib/SxxMachine/sxx_library.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  simple_analyzer::s_cut = Data::Intern("cut");
Const* const  simple_analyzer::s1 = Data::Intern("!");
Const* const  simple_analyzer::s2 = Data::Intern("$cut_load");
Const* const  simple_analyzer::s3 = Data::Intern("$cut_part/4_1");
Const* const  simple_analyzer::s4 = Data::Intern("$cut_shallow");
Const* const  simple_analyzer::s5 = Data::Intern("$fac_$cut_part/4_1/5_2");
Const* const  simple_analyzer::s6 = Data::Intern("+");
Const* const  simple_analyzer::s7 = Data::Intern(",");
Const* const  simple_analyzer::s8 = Data::Intern("-");
Const* const  simple_analyzer::s9 = Data::Intern("-->");
Const* const  simple_analyzer::s10 = Data::Intern(".");
Const* const  simple_analyzer::s11 = Data::Intern("/");
Const* const  simple_analyzer::s12 = Data::Intern(":-");
Const* const  simple_analyzer::s13 = Data::Intern(";");
Const* const  simple_analyzer::s14 = Data::Intern("<");
Const* const  simple_analyzer::s15 = Data::Intern("=");
Const* const  simple_analyzer::s16 = Data::Intern("=<");
Const* const  simple_analyzer::s17 = Data::Intern("==");
Const* const  simple_analyzer::s18 = Data::Intern(">");
Const* const  simple_analyzer::s19 = Data::Intern("\\==");
Const* const  simple_analyzer::s_add = Data::Intern("add");
Const* const  simple_analyzer::s_add_set = Data::Intern("add_set");
Const* const  simple_analyzer::s_analyze_closure = Data::Intern("analyze_closure");
Const* const  simple_analyzer::s_analyze_strees = Data::Intern("analyze_strees");
Const* const  simple_analyzer::s_any = Data::Intern("any");
Const* const  simple_analyzer::s_arg = Data::Intern("arg");
Const* const  simple_analyzer::s_bottom = Data::Intern("bottom");
Const* const  simple_analyzer::s_bottom_call = Data::Intern("bottom_call");
Const* const  simple_analyzer::s_call = Data::Intern("call");
Const* const  simple_analyzer::s_call_p = Data::Intern("call_p");
Const* const  simple_analyzer::s_compare = Data::Intern("compare");
Const* const  simple_analyzer::s_create_argument = Data::Intern("create_argument");
Const* const  simple_analyzer::s_create_new_call = Data::Intern("create_new_call");
Const* const  simple_analyzer::s_diffv = Data::Intern("diffv");
Const* const  simple_analyzer::s_diffv_2 = Data::Intern("diffv_2");
Const* const  simple_analyzer::s_diffv_3 = Data::Intern("diffv_3");
Const* const  simple_analyzer::s_dummy = Data::Intern("dummy");
Const* const  simple_analyzer::s_fail = Data::Intern("fail");
Const* const  simple_analyzer::s_filter_dups = Data::Intern("filter_dups");
Const* const  simple_analyzer::s_filter_vars = Data::Intern("filter_vars");
Const* const  simple_analyzer::s_filter_vars_arg = Data::Intern("filter_vars_arg");
Const* const  simple_analyzer::s_functor = Data::Intern("functor");
Const* const  simple_analyzer::s_get = Data::Intern("get");
Const* const  simple_analyzer::s_get_entry_modes = Data::Intern("get_entry_modes");
Const* const  simple_analyzer::s_goal_dupset = Data::Intern("goal_dupset");
Const* const  simple_analyzer::s_goal_dupset_varbag = Data::Intern("goal_dupset_varbag");
Const* const  simple_analyzer::s_goal_dupset_varset = Data::Intern("goal_dupset_varset");
Const* const  simple_analyzer::s_ground = Data::Intern("ground");
Const* const  simple_analyzer::s_ground_flag = Data::Intern("ground_flag");
Const* const  simple_analyzer::s_includev = Data::Intern("includev");
Const* const  simple_analyzer::s_includev_2 = Data::Intern("includev_2");
Const* const  simple_analyzer::s_includev_3 = Data::Intern("includev_3");
Const* const  simple_analyzer::s_init_conj = Data::Intern("init_conj");
Const* const  simple_analyzer::s_init_disj = Data::Intern("init_disj");
Const* const  simple_analyzer::s_init_goal = Data::Intern("init_goal");
Const* const  simple_analyzer::s_init_strees = Data::Intern("init_strees");
Const* const  simple_analyzer::s_intersectv = Data::Intern("intersectv");
Const* const  simple_analyzer::s_intersectv_2 = Data::Intern("intersectv_2");
Const* const  simple_analyzer::s_intersectv_3 = Data::Intern("intersectv_3");
Const* const  simple_analyzer::s_inv = Data::Intern("inv");
Const* const  simple_analyzer::s_inv_2 = Data::Intern("inv_2");
Const* const  simple_analyzer::s_is = Data::Intern("is");
Const* const  simple_analyzer::s_keysort = Data::Intern("keysort");
Const* const  simple_analyzer::s_lattice_modes_arg = Data::Intern("lattice_modes_arg");
Const* const  simple_analyzer::s_lattice_modes_call = Data::Intern("lattice_modes_call");
Const* const  simple_analyzer::s_leaf = Data::Intern("leaf");
Const* const  simple_analyzer::s_lub = Data::Intern("lub");
Const* const  simple_analyzer::s_lub_call = Data::Intern("lub_call");
Const* const  simple_analyzer::s_main = Data::Intern("main");
Const* const  simple_analyzer::s_make_key = Data::Intern("make_key");
Const* const  simple_analyzer::s_membership_flag = Data::Intern("membership_flag");
Const* const  simple_analyzer::s_no = Data::Intern("no");
Const* const  simple_analyzer::s_node = Data::Intern("node");
Const* const  simple_analyzer::s_nonvar = Data::Intern("nonvar");
Const* const  simple_analyzer::s_not = Data::Intern("not");
Const* const  simple_analyzer::s_part = Data::Intern("part");
Const* const  simple_analyzer::s_qsort = Data::Intern("qsort");
Const* const  simple_analyzer::s_seal = Data::Intern("seal");
Const* const  simple_analyzer::s_set = Data::Intern("set");
Const* const  simple_analyzer::s_set_2 = Data::Intern("set_2");
Const* const  simple_analyzer::s_set_command = Data::Intern("set_command");
Const* const  simple_analyzer::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  simple_analyzer::s_smallerthan = Data::Intern("smallerthan");
Const* const  simple_analyzer::s_sort = Data::Intern("sort");
Const* const  simple_analyzer::s_split_unify = Data::Intern("split_unify");
Const* const  simple_analyzer::s_stree = Data::Intern("stree");
Const* const  simple_analyzer::s_sub = Data::Intern("sub");
Const* const  simple_analyzer::s_sub_set = Data::Intern("sub_set");
Const* const  simple_analyzer::s_subsetv = Data::Intern("subsetv");
Const* const  simple_analyzer::s_subsetv_2 = Data::Intern("subsetv_2");
Const* const  simple_analyzer::s_table_command = Data::Intern("table_command");
Const* const  simple_analyzer::s_top = Data::Intern("top");
Const* const  simple_analyzer::s_traverse_conj = Data::Intern("traverse_conj");
Const* const  simple_analyzer::s_traverse_disj = Data::Intern("traverse_disj");
Const* const  simple_analyzer::s_traverse_strees = Data::Intern("traverse_strees");
Const* const  simple_analyzer::s_true = Data::Intern("true");
Const* const  simple_analyzer::s_unify = Data::Intern("unify");
Const* const  simple_analyzer::s_unify_p = Data::Intern("unify_p");
Const* const  simple_analyzer::s_uninit = Data::Intern("uninit");
Const* const  simple_analyzer::s_unionv = Data::Intern("unionv");
Const* const  simple_analyzer::s_unionv_2 = Data::Intern("unionv_2");
Const* const  simple_analyzer::s_unionv_3 = Data::Intern("unionv_3");
Const* const  simple_analyzer::s_unknown = Data::Intern("unknown");
Const* const  simple_analyzer::s_update_goal = Data::Intern("update_goal");
Const* const  simple_analyzer::s_update_table = Data::Intern("update_table");
Const* const  simple_analyzer::s_var = Data::Intern("var");
Const* const  simple_analyzer::s_var_args = Data::Intern("var_args");
Const* const  simple_analyzer::s_varbag = Data::Intern("varbag");
Const* const  simple_analyzer::s_varset = Data::Intern("varset");
Const* const  simple_analyzer::s_yes = Data::Intern("yes");
Const* const  simple_analyzer::s111 = Data::Intern("{}");
Int* const  simple_analyzer::posint0 = Data::Number(0LL);
Int* const  simple_analyzer::posint1 = Data::Number(1LL);
Int* const  simple_analyzer::posint2 = Data::Number(2LL);
Int* const  simple_analyzer::posint3 = Data::Number(3LL);
Int* const  simple_analyzer::posint4 = Data::Number(4LL);
Int* const  simple_analyzer::posint5 = Data::Number(5LL);
Int* const  simple_analyzer::posint6 = Data::Number(6LL);
Operation* const  simple_analyzer::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  simple_analyzer::reg_main_1 = PredTable::Register("main",1, new pred_main_1());
Operation* const  simple_analyzer::reg_analyze_strees_2 = PredTable::Register("analyze_strees",2, new pred_analyze_strees_2());
Operation* const  simple_analyzer::reg_analyze_closure_3 = PredTable::Register("analyze_closure",3, new pred_analyze_closure_3());
Operation* const  simple_analyzer::reg_analyze_closure_4 = PredTable::Register("analyze_closure",4, new pred_analyze_closure_4());
Operation* const  simple_analyzer::reg_init_strees_3 = PredTable::Register("init_strees",3, new pred_init_strees_3());
Operation* const  simple_analyzer::reg_init_conj_3 = PredTable::Register("init_conj",3, new pred_init_conj_3());
Operation* const  simple_analyzer::reg_init_disj_3 = PredTable::Register("init_disj",3, new pred_init_disj_3());
Operation* const  simple_analyzer::reg_init_goal_3 = PredTable::Register("init_goal",3, new pred_init_goal_3());
Operation* const  simple_analyzer::reg_traverse_strees_5 = PredTable::Register("traverse_strees",5, new pred_traverse_strees_5());
Operation* const  simple_analyzer::reg_traverse_disj_6 = PredTable::Register("traverse_disj",6, new pred_traverse_disj_6());
Operation* const  simple_analyzer::reg_traverse_conj_6 = PredTable::Register("traverse_conj",6, new pred_traverse_conj_6());
Operation* const  simple_analyzer::reg_traverse_conj_11 = PredTable::Register("traverse_conj",11, new pred_traverse_conj_11());
Operation* const  simple_analyzer::reg_update_goal_12 = PredTable::Register("update_goal",12, new pred_update_goal_12());
Operation* const  simple_analyzer::reg_update_table_6 = PredTable::Register("update_table",6, new pred_update_table_6());
Operation* const  simple_analyzer::reg_create_new_call_9 = PredTable::Register("create_new_call",9, new pred_create_new_call_9());
Operation* const  simple_analyzer::reg_lub_3 = PredTable::Register("lub",3, new pred_lub_3());
Operation* const  simple_analyzer::reg_bottom_1 = PredTable::Register("bottom",1, new pred_bottom_1());
Operation* const  simple_analyzer::reg_create_argument_6 = PredTable::Register("create_argument",6, new pred_create_argument_6());
Operation* const  simple_analyzer::reg_lub_call_3 = PredTable::Register("lub_call",3, new pred_lub_call_3());
Operation* const  simple_analyzer::reg_lub_call_5 = PredTable::Register("lub_call",5, new pred_lub_call_5());
Operation* const  simple_analyzer::reg_bottom_call_2 = PredTable::Register("bottom_call",2, new pred_bottom_call_2());
Operation* const  simple_analyzer::reg_bottom_call_3 = PredTable::Register("bottom_call",3, new pred_bottom_call_3());
Operation* const  simple_analyzer::reg_lattice_modes_call_3 = PredTable::Register("lattice_modes_call",3, new pred_lattice_modes_call_3());
Operation* const  simple_analyzer::reg_lattice_modes_call_6 = PredTable::Register("lattice_modes_call",6, new pred_lattice_modes_call_6());
Operation* const  simple_analyzer::reg_lattice_modes_arg_4 = PredTable::Register("lattice_modes_arg",4, new pred_lattice_modes_arg_4());
Operation* const  simple_analyzer::reg_get_3 = PredTable::Register("get",3, new pred_get_3());
Operation* const  simple_analyzer::reg_get_6 = PredTable::Register("get",6, new pred_get_6());
Operation* const  simple_analyzer::reg_get_5 = PredTable::Register("get",5, new pred_get_5());
Operation* const  simple_analyzer::reg_set_4 = PredTable::Register("set",4, new pred_set_4());
Operation* const  simple_analyzer::reg_set_2_9 = PredTable::Register("set_2",9, new pred_set_2_9());
Operation* const  simple_analyzer::reg_seal_1 = PredTable::Register("seal",1, new pred_seal_1());
Operation* const  simple_analyzer::reg_membership_flag_3 = PredTable::Register("membership_flag",3, new pred_membership_flag_3());
Operation* const  simple_analyzer::reg_ground_flag_3 = PredTable::Register("ground_flag",3, new pred_ground_flag_3());
Operation* const  simple_analyzer::reg_get_entry_modes_4 = PredTable::Register("get_entry_modes",4, new pred_get_entry_modes_4());
Operation* const  simple_analyzer::reg_get_entry_modes_6 = PredTable::Register("get_entry_modes",6, new pred_get_entry_modes_6());
Operation* const  simple_analyzer::reg_var_args_2 = PredTable::Register("var_args",2, new pred_var_args_2());
Operation* const  simple_analyzer::reg_filter_vars_3 = PredTable::Register("filter_vars",3, new pred_filter_vars_3());
Operation* const  simple_analyzer::reg_$002D$002D$003E_2 = PredTable::Register("-->",2, new SxxMachine::Builtins::pred_$002D$002D$003E_2());
Operation* const  simple_analyzer::reg_goal_dupset_2 = PredTable::Register("goal_dupset",2, new pred_goal_dupset_2());
Operation* const  simple_analyzer::reg_goal_dupset_varset_3 = PredTable::Register("goal_dupset_varset",3, new pred_goal_dupset_varset_3());
Operation* const  simple_analyzer::reg_goal_dupset_varbag_3 = PredTable::Register("goal_dupset_varbag",3, new pred_goal_dupset_varbag_3());
Operation* const  simple_analyzer::reg_make_key_2 = PredTable::Register("make_key",2, new pred_make_key_2());
Operation* const  simple_analyzer::reg_filter_dups_2 = PredTable::Register("filter_dups",2, new pred_filter_dups_2());
Operation* const  simple_analyzer::reg_set_command_3 = PredTable::Register("set_command",3, new pred_set_command_3());
Operation* const  simple_analyzer::reg_table_command_3 = PredTable::Register("table_command",3, new pred_table_command_3());
Operation* const  simple_analyzer::reg_inv_2 = PredTable::Register("inv",2, new pred_inv_2());
Operation* const  simple_analyzer::reg_inv_2_3 = PredTable::Register("inv_2",3, new pred_inv_2_3());
Operation* const  simple_analyzer::reg_intersectv_3 = PredTable::Register("intersectv",3, new pred_intersectv_3());
Operation* const  simple_analyzer::reg_intersectv_2_4 = PredTable::Register("intersectv_2",4, new pred_intersectv_2_4());
Operation* const  simple_analyzer::reg_intersectv_3_6 = PredTable::Register("intersectv_3",6, new pred_intersectv_3_6());
Operation* const  simple_analyzer::reg_diffv_3 = PredTable::Register("diffv",3, new pred_diffv_3());
Operation* const  simple_analyzer::reg_diffv_2_4 = PredTable::Register("diffv_2",4, new pred_diffv_2_4());
Operation* const  simple_analyzer::reg_diffv_3_6 = PredTable::Register("diffv_3",6, new pred_diffv_3_6());
Operation* const  simple_analyzer::reg_unionv_3 = PredTable::Register("unionv",3, new pred_unionv_3());
Operation* const  simple_analyzer::reg_unionv_2_4 = PredTable::Register("unionv_2",4, new pred_unionv_2_4());
Operation* const  simple_analyzer::reg_unionv_3_6 = PredTable::Register("unionv_3",6, new pred_unionv_3_6());
Operation* const  simple_analyzer::reg_includev_3 = PredTable::Register("includev",3, new pred_includev_3());
Operation* const  simple_analyzer::reg_includev_2_3 = PredTable::Register("includev_2",3, new pred_includev_2_3());
Operation* const  simple_analyzer::reg_includev_3_5 = PredTable::Register("includev_3",5, new pred_includev_3_5());
Operation* const  simple_analyzer::reg_subsetv_2 = PredTable::Register("subsetv",2, new pred_subsetv_2());
Operation* const  simple_analyzer::reg_subsetv_2_4 = PredTable::Register("subsetv_2",4, new pred_subsetv_2_4());
Operation* const  simple_analyzer::reg_varset_2 = PredTable::Register("varset",2, new pred_varset_2());
Operation* const  simple_analyzer::reg_varbag_2 = PredTable::Register("varbag",2, new pred_varbag_2());
Operation* const  simple_analyzer::reg_unify_p_1 = PredTable::Register("unify_p",1, new pred_unify_p_1());
Operation* const  simple_analyzer::reg_call_p_1 = PredTable::Register("call_p",1, new pred_call_p_1());
Operation* const  simple_analyzer::reg_split_unify_3 = PredTable::Register("split_unify",3, new pred_split_unify_3());

	Operation* simple_analyzer::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* simple_analyzer::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_main_1::exec_static);
	}

	Operation* simple_analyzer::pred_main_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_main_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_main_1__1(mach));
	}

	Operation* simple_analyzer::pred_main_1::exec_pred_main_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var48 = Data::V(mach);
	Var* var47 = Data::V(mach);
	Var* var46 = Data::V(mach);
	Var* var45 = Data::V(mach);
	Var* var44 = Data::V(mach);
	Var* var43 = Data::V(mach);
	Var* var42 = Data::V(mach);
	Var* var41 = Data::V(mach);
	Var* var40 = Data::V(mach);
	Var* var39 = Data::V(mach);
	Var* var38 = Data::V(mach);
	Var* var37 = Data::V(mach);
	Var* var36 = Data::V(mach);
	Var* var35 = Data::V(mach);
	Var* var34 = Data::V(mach);
	Var* var33 = Data::V(mach);
	Var* var32 = Data::V(mach);
	Var* var31 = Data::V(mach);
	Var* var30 = Data::V(mach);
	Var* var29 = Data::V(mach);
	Var* var28 = Data::V(mach);
	Var* var27 = Data::V(mach);
	Var* var26 = Data::V(mach);
	Var* var25 = Data::V(mach);
	Var* var24 = Data::V(mach);
	Var* var23 = Data::V(mach);
	Var* var22 = Data::V(mach);
	Var* var21 = Data::V(mach);
	Var* var20 = Data::V(mach);
	Var* var19 = Data::V(mach);
	Var* var18 = Data::V(mach);
	Var* var17 = Data::V(mach);
	Var* var16 = Data::V(mach);
	Var* var15 = Data::V(mach);
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s_stree,Data::F(simple_analyzer::s11,simple_analyzer::s_main,simple_analyzer::posint0),Data::F(simple_analyzer::s12,simple_analyzer::s_main,Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_qsort,Data::F(simple_analyzer::s10,simple_analyzer::posint1,Data::F(simple_analyzer::s10,simple_analyzer::posint2,Const::Nil)),var2,Const::Nil),simple_analyzer::s_true),simple_analyzer::s_fail)),Data::F(simple_analyzer::s12,simple_analyzer::s_main,simple_analyzer::s_true),Const::Nil,simple_analyzer::posint1),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s_stree,Data::F(simple_analyzer::s11,simple_analyzer::s_qsort,simple_analyzer::posint3),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s_qsort,var3,var4,var5),Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var3->Deref(), Data::F(simple_analyzer::s10,var6,var7) }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_part, { var7->Deref(), var6->Deref(), var8, var9 }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_qsort, { var9->Deref(), var10, var5->Deref() }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_qsort, { var8->Deref(), var4->Deref(), Data::F(simple_analyzer::s10, { var6->Deref(), var10->Deref() }) }),simple_analyzer::s_true)))),Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var3->Deref(), Const::Nil }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var5->Deref(), var4->Deref() }),simple_analyzer::s_true)),simple_analyzer::s_fail))),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s_qsort,var11,var12,var13),simple_analyzer::s_true),Const::Nil,simple_analyzer::posint1),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s_stree,Data::F(simple_analyzer::s11,simple_analyzer::s_part,simple_analyzer::posint4),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s_part,var14,var15,var16,var17),Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s2,var18),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s3, { var14->Deref(), var15->Deref(), var16->Deref(), var17->Deref(), var18->Deref() }),simple_analyzer::s_true)),simple_analyzer::s_fail)),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s_part,var19,var20,var21,var22),simple_analyzer::s_true),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s_stree,Data::F(simple_analyzer::s11,simple_analyzer::s3,simple_analyzer::posint5),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s3,var23,var24,var25,var26,var27),Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var23->Deref(), Data::F(simple_analyzer::s10,var28,var29) }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s5, { var29->Deref(), var24->Deref(), var25->Deref(), var26->Deref(), var27->Deref(), var28->Deref() }),simple_analyzer::s_true)),Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var23->Deref(), Const::Nil }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var25->Deref(), Const::Nil }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var26->Deref(), Const::Nil }),simple_analyzer::s_true))),simple_analyzer::s_fail))),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s3,var30,var31,var32,var33,var34),simple_analyzer::s_true),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s_stree,Data::F(simple_analyzer::s11,simple_analyzer::s5,simple_analyzer::posint6),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s5,var35,var36,var37,var38,var39,var40),Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var37->Deref(), Data::F(simple_analyzer::s10, { var40->Deref(), var41 }) }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s16, { var40->Deref(), var36->Deref() }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s4, { var39->Deref() }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_part, { var35->Deref(), var36->Deref(), var41->Deref(), var38->Deref() }),simple_analyzer::s_true)))),Data::F(simple_analyzer::s13,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s15, { var38->Deref(), Data::F(simple_analyzer::s10, { var40->Deref(), var42 }) }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_part, { var35->Deref(), var36->Deref(), var37->Deref(), var42->Deref() }),simple_analyzer::s_true)),simple_analyzer::s_fail))),Data::F(simple_analyzer::s12,Data::F(simple_analyzer::s5,var43,var44,var45,var46,var47,var48),simple_analyzer::s_true),Const::Nil,simple_analyzer::posint1),Const::Nil),simple_analyzer::posint1),Const::Nil),simple_analyzer::posint1),Const::Nil)));
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_analyze_strees_2::exec_static);
	}

	Operation* simple_analyzer::pred_analyze_strees_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_analyze_strees_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_analyze_strees_2__1(mach));
	}

	Operation* simple_analyzer::pred_analyze_strees_2::exec_pred_analyze_strees_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = var4;
	local_aregs[3] = Data::F(simple_analyzer::s_seal, { var4->Deref(), Data::F(simple_analyzer::s_analyze_closure, { var1->Deref(), var4->Deref(), var2->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_init_strees_3::exec_static);
	}

	Operation* simple_analyzer::pred_analyze_closure_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_analyze_closure_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_analyze_closure_3__1(mach));
	}

	Operation* simple_analyzer::pred_analyze_closure_3::exec_pred_analyze_closure_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = simple_analyzer::posint0;
	local_aregs[4] = var5;
	local_aregs[5] = Data::F(simple_analyzer::s_analyze_closure, { var1->Deref(), var4->Deref(), var3->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_traverse_strees_5::exec_static);
	}

	Operation* simple_analyzer::pred_analyze_closure_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_analyze_closure_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_analyze_closure_4__1(mach));
	}

	Operation* simple_analyzer::pred_analyze_closure_4::exec_pred_analyze_closure_4__1(Prolog* mach) {
		mach->FillAlternative(pred_analyze_closure_4::exec_pred_analyze_closure_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = simple_analyzer::posint0;
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* simple_analyzer::pred_analyze_closure_4::exec_pred_analyze_closure_4__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = simple_analyzer::posint0;
	local_aregs[1] = var4->Deref();
	local_aregs[2] = mach->HC(Data::F(simple_analyzer::s_analyze_closure, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* simple_analyzer::pred_init_strees_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_init_strees_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_init_strees_3__1(mach));
	}

	Operation* simple_analyzer::pred_init_strees_3::exec_pred_init_strees_3__1(Prolog* mach) {
		mach->FillAlternative(pred_init_strees_3::exec_pred_init_strees_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_true->FindProc(0));
	}

	Operation* simple_analyzer::pred_init_strees_3::exec_pred_init_strees_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(simple_analyzer::s_stree,var5,Data::F(simple_analyzer::s12,var6,var7),var8,var9,var10);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(simple_analyzer::s_bottom_call, { var5->Deref(), var11, Data::F(simple_analyzer::s_table_command,Data::F(simple_analyzer::s_get, { var5->Deref(), var11->Deref() }),var3->Deref(),var12,Data::F(simple_analyzer::s_init_disj, { var7->Deref(), var12->Deref(), var13, Data::F(simple_analyzer::s_init_strees, { var9->Deref(), var13->Deref(), var14, Data::F(simple_analyzer::s_init_strees, { var2->Deref(), var14->Deref(), var4->Deref(), Data::F(simple_analyzer::s_true, { continuation }) }) }) })) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation* simple_analyzer::pred_init_conj_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_init_conj_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_init_conj_3__1(mach));
	}

	Operation* simple_analyzer::pred_init_conj_3::exec_pred_init_conj_3__1(Prolog* mach) {
		mach->FillAlternative(pred_init_conj_3::exec_pred_init_conj_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_true,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_true->FindProc(0));
	}

	Operation* simple_analyzer::pred_init_conj_3::exec_pred_init_conj_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s7,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = Data::F(simple_analyzer::s_init_conj, { var2->Deref(), var5->Deref(), var4->Deref(), Data::F(simple_analyzer::s_true, { continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_init_goal_3::exec_static);
	}

	Operation* simple_analyzer::pred_init_disj_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_init_disj_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_init_disj_3__1(mach));
	}

	Operation* simple_analyzer::pred_init_disj_3::exec_pred_init_disj_3__1(Prolog* mach) {
		mach->FillAlternative(pred_init_disj_3::exec_pred_init_disj_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_fail,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_true->FindProc(0));
	}

	Operation* simple_analyzer::pred_init_disj_3::exec_pred_init_disj_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s13,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = Data::F(simple_analyzer::s_init_disj, { var2->Deref(), var5->Deref(), var4->Deref(), Data::F(simple_analyzer::s_true, { continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_init_conj_3::exec_static);
	}

	Operation* simple_analyzer::pred_init_goal_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_init_goal_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_init_goal_3__1(mach));
	}

	Operation* simple_analyzer::pred_init_goal_3::exec_pred_init_goal_3__1(Prolog* mach) {
		mach->FillAlternative(pred_init_goal_3::exec_pred_init_goal_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(simple_analyzer::s_functor, { var1->Deref(), var4, var5, Data::F(simple_analyzer::s_bottom_call,Data::F(simple_analyzer::s11, { var4->Deref(), var5->Deref() }),var6,Data::F(simple_analyzer::s_table_command,Data::F(simple_analyzer::s_get,Data::F(simple_analyzer::s11, { var4->Deref(), var5->Deref() }),var6->Deref()),var2->Deref(),var3->Deref(),Data::F(simple_analyzer::s_true, { continuation }))) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_call_p_1::exec_static);
	}

	Operation* simple_analyzer::pred_init_goal_3::exec_pred_init_goal_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(simple_analyzer::s_true, { continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_unify_p_1::exec_static);
	}

	Operation* simple_analyzer::pred_traverse_strees_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_traverse_strees_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_traverse_strees_5__1(mach));
	}

	Operation* simple_analyzer::pred_traverse_strees_5::exec_pred_traverse_strees_5__1(Prolog* mach) {
		mach->FillAlternative(pred_traverse_strees_5::exec_pred_traverse_strees_5__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_true->FindProc(0));
	}

	Operation* simple_analyzer::pred_traverse_strees_5::exec_pred_traverse_strees_5__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var16 = Data::V(mach);
	Var* var15 = Data::V(mach);
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(simple_analyzer::s_stree,var7,Data::F(simple_analyzer::s12,var8,var9),var10,var11,var12);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(simple_analyzer::s_traverse_disj, { var8->Deref(), var9->Deref(), var3->Deref(), var13, var5->Deref(), var14, Data::F(simple_analyzer::s_traverse_strees, { var11->Deref(), var13->Deref(), var15, var14->Deref(), var16, Data::F(simple_analyzer::s_traverse_strees, { var2->Deref(), var15->Deref(), var4->Deref(), var16->Deref(), var6->Deref(), Data::F(simple_analyzer::s_true, { continuation }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation* simple_analyzer::pred_traverse_disj_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_traverse_disj_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_traverse_disj_6__1(mach));
	}

	Operation* simple_analyzer::pred_traverse_disj_6::exec_pred_traverse_disj_6__1(Prolog* mach) {
		mach->FillAlternative(pred_traverse_disj_6::exec_pred_traverse_disj_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_fail,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_true->FindProc(0));
	}

	Operation* simple_analyzer::pred_traverse_disj_6::exec_pred_traverse_disj_6__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s13,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var8;
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var9;
	local_aregs[6] = Data::F(simple_analyzer::s_traverse_disj, { var1->Deref(), var3->Deref(), var8->Deref(), var5->Deref(), var9->Deref(), var7->Deref(), Data::F(simple_analyzer::s_true, { continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_traverse_conj_6::exec_static);
	}

	Operation* simple_analyzer::pred_traverse_conj_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_traverse_conj_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_traverse_conj_6__1(mach));
	}

	Operation* simple_analyzer::pred_traverse_conj_6::exec_pred_traverse_conj_6__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var16 = Data::V(mach);
	Var* var15 = Data::V(mach);
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var7;
	local_aregs[2] = Data::F(simple_analyzer::s_functor, { var1->Deref(), var8, var9, Data::F(simple_analyzer::s_table_command,Data::F(simple_analyzer::s_get,Data::F(simple_analyzer::s11, { var8->Deref(), var9->Deref() }),var10),var3->Deref(),var11,Data::F(simple_analyzer::s_get_entry_modes,simple_analyzer::s_uninit,var1->Deref(),var10->Deref(),var12,Data::F(simple_analyzer::s_get_entry_modes,simple_analyzer::s_ground,var1->Deref(),var10->Deref(),var13,Data::F(simple_analyzer::s_traverse_conj, { var2->Deref(), var11->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var13->Deref(), var14, var12->Deref(), var15, var7->Deref(), var16, Data::F(simple_analyzer::s_true, { continuation }) })))) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_varset_2::exec_static);
	}

	Operation* simple_analyzer::pred_traverse_conj_11::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_traverse_conj_11::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
	std::vector<Term*> aregs = mach->RegPull(11);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_traverse_conj_11__1(mach));
	}

	Operation* simple_analyzer::pred_traverse_conj_11::exec_pred_traverse_conj_11__1(Prolog* mach) {
		mach->FillAlternative(pred_traverse_conj_11::exec_pred_traverse_conj_11__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[11];
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_true,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_true->FindProc(0));
	}

	Operation* simple_analyzer::pred_traverse_conj_11::exec_pred_traverse_conj_11__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[11];
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var19 = Data::V(mach);
	Var* var18 = Data::V(mach);
	Var* var17 = Data::V(mach);
	Var* var16 = Data::V(mach);
	Var* var15 = Data::V(mach);
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s7,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var11,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var12,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var13;
	local_aregs[2] = Data::F(simple_analyzer::s_update_goal, { var1->Deref(), var13->Deref(), var3->Deref(), var14, var5->Deref(), var15, var7->Deref(), var16, var9->Deref(), var17, var11->Deref(), var18, Data::F(simple_analyzer::s_unionv, { var13->Deref(), var18->Deref(), var19, Data::F(simple_analyzer::s_traverse_conj, { var2->Deref(), var14->Deref(), var4->Deref(), var15->Deref(), var6->Deref(), var16->Deref(), var8->Deref(), var17->Deref(), var10->Deref(), var19->Deref(), var12->Deref(), Data::F(simple_analyzer::s_true, { continuation }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_varset_2::exec_static);
	}

	Operation* simple_analyzer::pred_update_goal_12::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_update_goal_12::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
	std::vector<Term*> aregs = mach->RegPull(12);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_update_goal_12__1(mach));
	}

	Operation* simple_analyzer::pred_update_goal_12::exec_pred_update_goal_12__1(Prolog* mach) {
		mach->FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var9->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var10;
	local_aregs[2] = var11;
	local_aregs[3] = Data::F(simple_analyzer::s_var, { var10->Deref(), Data::F(simple_analyzer::s_nonvar, { var11->Deref(), Data::F(simple_analyzer::s_varset, { var11->Deref(), var12, Data::F(simple_analyzer::s_subsetv, { var12->Deref(), var5->Deref(), mach->HC(Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_add, { var10->Deref() }),var5->Deref(),var6->Deref(),Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_sub, { var10->Deref() }),var7->Deref(),var8->Deref(),Data::F(simple_analyzer::s_true, { continuation })))) }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_split_unify_3::exec_static);
	}

	Operation* simple_analyzer::pred_update_goal_12::exec_pred_update_goal_12__2(Prolog* mach) {
		mach->FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var15 = Data::V(mach);
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var8->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var9;
	local_aregs[2] = var10;
	local_aregs[3] = Data::F(simple_analyzer::s_var, { var9->Deref(), Data::F(simple_analyzer::s_nonvar, { var10->Deref(), Data::F(simple_analyzer::s_inv, { var9->Deref(), var6->Deref(), mach->HC(Data::F(simple_analyzer::s_diffv, { var2->Deref(), var8->Deref(), var11, Data::F(simple_analyzer::s_diffv, { var11->Deref(), var5->Deref(), var12, Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_add_set, { var12->Deref() }),var6->Deref(),var13,Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_sub, { var9->Deref() }),var13->Deref(),var14,Data::F(simple_analyzer::s_intersectv, { var2->Deref(), var8->Deref(), var15, Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_sub_set, { var15->Deref() }),var14->Deref(),var7->Deref(),Data::F(simple_analyzer::s_true, { continuation })) }))) }) })) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_split_unify_3::exec_static);
	}

	Operation* simple_analyzer::pred_update_goal_12::exec_pred_update_goal_12__3(Prolog* mach) {
		mach->FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var9->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var10;
	local_aregs[2] = var11;
	local_aregs[3] = Data::F(simple_analyzer::s_var, { var10->Deref(), Data::F(simple_analyzer::s_inv, { var10->Deref(), var5->Deref(), mach->HC(Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_add_set, { var2->Deref() }),var5->Deref(),var6->Deref(),Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_sub_set, { var2->Deref() }),var7->Deref(),var8->Deref(),Data::F(simple_analyzer::s_true, { continuation })))) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_split_unify_3::exec_static);
	}

	Operation* simple_analyzer::pred_update_goal_12::exec_pred_update_goal_12__4(Prolog* mach) {
		mach->FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var8->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_sub_set, { var2->Deref() }),var6->Deref(),var7->Deref(),Data::F(simple_analyzer::s_true, { continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_unify_p_1::exec_static);
	}

	Operation* simple_analyzer::pred_update_goal_12::exec_pred_update_goal_12__5(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var15 = Data::V(mach);
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var10->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(simple_analyzer::s_goal_dupset, { var1->Deref(), var11, Data::F(simple_analyzer::s_var_args, { var1->Deref(), var12, Data::F(simple_analyzer::s_functor, { var1->Deref(), var13, var14, Data::F(simple_analyzer::s_functor,var15,var13->Deref(),var14->Deref(),Data::F(simple_analyzer::s_create_new_call,simple_analyzer::posint1,var14->Deref(),var7->Deref(),var12->Deref(),var11->Deref(),var8->Deref(),var10->Deref(),var1->Deref(),var15->Deref(),Data::F(simple_analyzer::s_update_table,Data::F(simple_analyzer::s11, { var13->Deref(), var14->Deref() }),var15->Deref(),var3->Deref(),var4->Deref(),var5->Deref(),var6->Deref(),Data::F(simple_analyzer::s_set_command,Data::F(simple_analyzer::s_sub_set, { var2->Deref() }),var8->Deref(),var9->Deref(),Data::F(simple_analyzer::s_true, { continuation }))))) }) }) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_call_p_1::exec_static);
	}

	Operation* simple_analyzer::pred_update_table_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_update_table_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_update_table_6__1(mach));
	}

	Operation* simple_analyzer::pred_update_table_6::exec_pred_update_table_6__1(Prolog* mach) {
		mach->FillAlternative(pred_update_table_6::exec_pred_update_table_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s11,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(simple_analyzer::s_get,Data::F(simple_analyzer::s11, { var1->Deref(), var2->Deref() }),var8);
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var9;
	local_aregs[3] = Data::F(simple_analyzer::s_lub_call, { var8->Deref(), var3->Deref(), var10, Data::F(simple_analyzer::s19, { var8->Deref(), var10->Deref(), mach->HC(Data::F(simple_analyzer::s_table_command,Data::F(simple_analyzer::s_set,Data::F(simple_analyzer::s11, { var1->Deref(), var2->Deref() }),var10->Deref()),var9->Deref(),var5->Deref(),Data::F(simple_analyzer::s_is, { var7->Deref(), Data::F(simple_analyzer::s6, { var6->Deref(), simple_analyzer::posint1 }), Data::F(simple_analyzer::s_true, { continuation }) }))) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_table_command_3::exec_static);
	}

	Operation* simple_analyzer::pred_update_table_6::exec_pred_update_table_6__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s11,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_create_new_call_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_create_new_call_9::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
	std::vector<Term*> aregs = mach->RegPull(9);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_create_new_call_9__1(mach));
	}

	Operation* simple_analyzer::pred_create_new_call_9::exec_pred_create_new_call_9__1(Prolog* mach) {
		mach->FillAlternative(pred_create_new_call_9::exec_pred_create_new_call_9__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* simple_analyzer::pred_create_new_call_9::exec_pred_create_new_call_9__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var17 = Data::V(mach);
	Var* var16 = Data::V(mach);
	Var* var15 = Data::V(mach);
	Var* var14 = Data::V(mach);
	Var* var13 = Data::V(mach);
	Var* var12 = Data::V(mach);
	Var* var11 = Data::V(mach);
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(Data::F(simple_analyzer::s_arg, { var1->Deref(), var8->Deref(), var10, Data::F(simple_analyzer::s_arg, { var1->Deref(), var9->Deref(), var11, Data::F(simple_analyzer::s_ground_flag, { var10->Deref(), var3->Deref(), var12, Data::F(simple_analyzer::s_membership_flag, { var10->Deref(), var4->Deref(), var13, Data::F(simple_analyzer::s_membership_flag, { var10->Deref(), var5->Deref(), var14, Data::F(simple_analyzer::s_membership_flag, { var10->Deref(), var6->Deref(), var15, Data::F(simple_analyzer::s_membership_flag, { var10->Deref(), var7->Deref(), var16, Data::F(simple_analyzer::s_create_argument, { var12->Deref(), var13->Deref(), var14->Deref(), var15->Deref(), var16->Deref(), var11->Deref(), Data::F(simple_analyzer::s_is,var17,Data::F(simple_analyzer::s6, { var1->Deref(), simple_analyzer::posint1 }),Data::F(simple_analyzer::s_create_new_call, { var17->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation })) }) }) }) }) }) }) }) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* simple_analyzer::pred_lub_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_lub_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lub_3__1(mach));
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__1(Prolog* mach) {
		mach->FillAlternative(pred_lub_3::exec_pred_lub_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_unknown,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__2(Prolog* mach) {
		mach->FillAlternative(pred_lub_3::exec_pred_lub_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_unknown,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__3(Prolog* mach) {
		mach->FillAlternative(pred_lub_3::exec_pred_lub_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__4(Prolog* mach) {
		mach->FillAlternative(pred_lub_3::exec_pred_lub_3__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__5(Prolog* mach) {
		mach->FillAlternative(pred_lub_3::exec_pred_lub_3__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__6(Prolog* mach) {
		mach->FillAlternative(pred_lub_3::exec_pred_lub_3__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(simple_analyzer::s_ground,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_ground,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_ground,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__7(Prolog* mach) {
		mach->FillAlternative(pred_lub_3::exec_pred_lub_3__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_ground,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_3::exec_pred_lub_3__8(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(simple_analyzer::s_ground,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_bottom_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_bottom_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_bottom_1__1(mach));
	}

	Operation* simple_analyzer::pred_bottom_1::exec_pred_bottom_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(simple_analyzer::s_unknown,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_create_argument_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_create_argument_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_create_argument_6__1(mach));
	}

	Operation* simple_analyzer::pred_create_argument_6::exec_pred_create_argument_6__1(Prolog* mach) {
		mach->FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(simple_analyzer::s_ground,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_create_argument_6::exec_pred_create_argument_6__2(Prolog* mach) {
		mach->FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_create_argument_6::exec_pred_create_argument_6__3(Prolog* mach) {
		mach->FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_create_argument_6::exec_pred_create_argument_6__4(Prolog* mach) {
		mach->FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_create_argument_6::exec_pred_create_argument_6__5(Prolog* mach) {
		mach->FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_create_argument_6::exec_pred_create_argument_6__6(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(simple_analyzer::s_any,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lub_call_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_lub_call_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lub_call_3__1(mach));
	}

	Operation* simple_analyzer::pred_lub_call_3::exec_pred_lub_call_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4;
	local_aregs[2] = var5;
	local_aregs[3] = Data::F(simple_analyzer::s_functor, { var2->Deref(), var4->Deref(), var5->Deref(), Data::F(simple_analyzer::s_functor, { var3->Deref(), var4->Deref(), var5->Deref(), Data::F(simple_analyzer::s_lub_call,simple_analyzer::posint1,var5->Deref(),var1->Deref(),var2->Deref(),var3->Deref(),continuation) }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(simple_analyzer::s_functor->FindProc(3));
	}

	Operation* simple_analyzer::pred_lub_call_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_lub_call_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lub_call_5__1(mach));
	}

	Operation* simple_analyzer::pred_lub_call_5::exec_pred_lub_call_5__1(Prolog* mach) {
		mach->FillAlternative(pred_lub_call_5::exec_pred_lub_call_5__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* simple_analyzer::pred_lub_call_5::exec_pred_lub_call_5__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(Data::F(simple_analyzer::s_arg, { var1->Deref(), var3->Deref(), var6, Data::F(simple_analyzer::s_arg, { var1->Deref(), var4->Deref(), var7, Data::F(simple_analyzer::s_arg, { var1->Deref(), var5->Deref(), var8, Data::F(simple_analyzer::s_lub, { var6->Deref(), var7->Deref(), var8->Deref(), Data::F(simple_analyzer::s_is,var9,Data::F(simple_analyzer::s6, { var1->Deref(), simple_analyzer::posint1 }),Data::F(simple_analyzer::s_lub_call, { var9->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation })) }) }) }) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* simple_analyzer::pred_bottom_call_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_bottom_call_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_bottom_call_2__1(mach));
	}

	Operation* simple_analyzer::pred_bottom_call_2::exec_pred_bottom_call_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s11,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_bottom_call,simple_analyzer::posint1,var2->Deref(),var3->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(simple_analyzer::s_functor->FindProc(3));
	}

	Operation* simple_analyzer::pred_bottom_call_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_bottom_call_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_bottom_call_3__1(mach));
	}

	Operation* simple_analyzer::pred_bottom_call_3::exec_pred_bottom_call_3__1(Prolog* mach) {
		mach->FillAlternative(pred_bottom_call_3::exec_pred_bottom_call_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* simple_analyzer::pred_bottom_call_3::exec_pred_bottom_call_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(Data::F(simple_analyzer::s_bottom,var4,Data::F(simple_analyzer::s_arg, { var1->Deref(), var3->Deref(), var4->Deref(), Data::F(simple_analyzer::s_is,var5,Data::F(simple_analyzer::s6, { var1->Deref(), simple_analyzer::posint1 }),Data::F(simple_analyzer::s_bottom_call, { var5->Deref(), var2->Deref(), var3->Deref(), continuation })) })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* simple_analyzer::pred_lattice_modes_call_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_lattice_modes_call_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lattice_modes_call_3__1(mach));
	}

	Operation* simple_analyzer::pred_lattice_modes_call_3::exec_pred_lattice_modes_call_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s11,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(simple_analyzer::s12,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_get, { var3->Deref(), Data::F(simple_analyzer::s11, { var1->Deref(), var2->Deref() }), var6, Data::F(simple_analyzer::s_lattice_modes_call,simple_analyzer::posint1,var2->Deref(),var6->Deref(),var4->Deref(),var5->Deref(),simple_analyzer::s_true,continuation) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(simple_analyzer::s_functor->FindProc(3));
	}

	Operation* simple_analyzer::pred_lattice_modes_call_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_lattice_modes_call_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lattice_modes_call_6__1(mach));
	}

	Operation* simple_analyzer::pred_lattice_modes_call_6::exec_pred_lattice_modes_call_6__1(Prolog* mach) {
		mach->FillAlternative(pred_lattice_modes_call_6::exec_pred_lattice_modes_call_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* simple_analyzer::pred_lattice_modes_call_6::exec_pred_lattice_modes_call_6__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(Data::F(simple_analyzer::s_arg, { var1->Deref(), var3->Deref(), var7, Data::F(simple_analyzer::s_arg, { var1->Deref(), var4->Deref(), var8, Data::F(simple_analyzer::s_lattice_modes_arg, { var7->Deref(), var8->Deref(), var5->Deref(), var9, Data::F(simple_analyzer::s_is,var10,Data::F(simple_analyzer::s6, { var1->Deref(), simple_analyzer::posint1 }),Data::F(simple_analyzer::s_lattice_modes_call, { var10->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var9->Deref(), var6->Deref(), continuation })) }) }) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* simple_analyzer::pred_lattice_modes_arg_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_lattice_modes_arg_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lattice_modes_arg_4__1(mach));
	}

	Operation* simple_analyzer::pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__1(Prolog* mach) {
		mach->FillAlternative(pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_uninit,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_uninit, { var1->Deref() }),var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__2(Prolog* mach) {
		mach->FillAlternative(pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_ground,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_ground, { var1->Deref() }),var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_get_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_get_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_get_3__1(mach));
	}

	Operation* simple_analyzer::pred_get_3::exec_pred_get_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_node,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_get_6::exec_static);
	}

	Operation* simple_analyzer::pred_get_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_get_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_get_6__1(mach));
	}

	Operation* simple_analyzer::pred_get_6::exec_pred_get_6__1(Prolog* mach) {
		mach->FillAlternative(pred_get_6::exec_pred_get_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation* simple_analyzer::pred_get_6::exec_pred_get_6__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_get, { var7->Deref(), var5->Deref(), var6->Deref(), var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_get_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_get_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_get_5__1(mach));
	}

	Operation* simple_analyzer::pred_get_5::exec_pred_get_5__1(Prolog* mach) {
		mach->FillAlternative(pred_get_5::exec_pred_get_5__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s14,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_get_3::exec_static);
	}

	Operation* simple_analyzer::pred_get_5::exec_pred_get_5__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_get_3::exec_static);
	}

	Operation* simple_analyzer::pred_set_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_set_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_4__1(mach));
	}

	Operation* simple_analyzer::pred_set_4::exec_pred_set_4__1(Prolog* mach) {
		mach->FillAlternative(pred_set_4::exec_pred_set_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s_leaf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(simple_analyzer::s_node, { var1->Deref(), var2->Deref(), simple_analyzer::s_leaf, simple_analyzer::s_leaf }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_set_4::exec_pred_set_4__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_node,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(simple_analyzer::s_node, { var1->Deref(), var7, var8, var9 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var10;
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_set_2, { var10->Deref(), var5->Deref(), var6->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_set_2_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_set_2_9::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
	std::vector<Term*> aregs = mach->RegPull(9);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_2_9__1(mach));
	}

	Operation* simple_analyzer::pred_set_2_9::exec_pred_set_2_9__1(Prolog* mach) {
		mach->FillAlternative(pred_set_2_9::exec_pred_set_2_9__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s14,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<Operation*>(pred_set_4::exec_static);
	}

	Operation* simple_analyzer::pred_set_2_9::exec_pred_set_2_9__2(Prolog* mach) {
		mach->FillAlternative(pred_set_2_9::exec_pred_set_2_9__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_set_2_9::exec_pred_set_2_9__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var5->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var6->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<Operation*>(pred_set_4::exec_static);
	}

	Operation* simple_analyzer::pred_seal_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_seal_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_seal_1__1(mach));
	}

	Operation* simple_analyzer::pred_seal_1::exec_pred_seal_1__1(Prolog* mach) {
		mach->FillAlternative(pred_seal_1::exec_pred_seal_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(simple_analyzer::s_leaf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_seal_1::exec_pred_seal_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_node,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = Data::F(simple_analyzer::s_seal, { var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_seal_1::exec_static);
	}

	Operation* simple_analyzer::pred_membership_flag_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_membership_flag_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_membership_flag_3__1(mach));
	}

	Operation* simple_analyzer::pred_membership_flag_3::exec_pred_membership_flag_3__1(Prolog* mach) {
		mach->FillAlternative(pred_membership_flag_3::exec_pred_membership_flag_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_inv_2::exec_static);
	}

	Operation* simple_analyzer::pred_membership_flag_3::exec_pred_membership_flag_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_ground_flag_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_ground_flag_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_ground_flag_3__1(mach));
	}

	Operation* simple_analyzer::pred_ground_flag_3::exec_pred_ground_flag_3__1(Prolog* mach) {
		mach->FillAlternative(pred_ground_flag_3::exec_pred_ground_flag_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_yes,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = Data::F(simple_analyzer::s_subsetv, { var3->Deref(), var2->Deref(), mach->HC(continuation) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_varset_2::exec_static);
	}

	Operation* simple_analyzer::pred_ground_flag_3::exec_pred_ground_flag_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(simple_analyzer::s_no,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_get_entry_modes_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_get_entry_modes_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_get_entry_modes_4__1(mach));
	}

	Operation* simple_analyzer::pred_get_entry_modes_4::exec_pred_get_entry_modes_4__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var5;
	local_aregs[2] = var6;
	local_aregs[3] = Data::F(simple_analyzer::s_get_entry_modes, { var1->Deref(), simple_analyzer::posint1, var6->Deref(), var2->Deref(), var3->Deref(), var7, Data::F(simple_analyzer::s_sort, { var7->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_functor->FindProc(3));
	}

	Operation* simple_analyzer::pred_get_entry_modes_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_get_entry_modes_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_get_entry_modes_6__1(mach));
	}

	Operation* simple_analyzer::pred_get_entry_modes_6::exec_pred_get_entry_modes_6__1(Prolog* mach) {
		mach->FillAlternative(pred_get_entry_modes_6::exec_pred_get_entry_modes_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* simple_analyzer::pred_get_entry_modes_6::exec_pred_get_entry_modes_6__2(Prolog* mach) {
		mach->FillAlternative(pred_get_entry_modes_6::exec_pred_get_entry_modes_6__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Data::F(simple_analyzer::s10,var6,var7),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = Data::F(simple_analyzer::s_arg, { var2->Deref(), var5->Deref(), var1->Deref(), mach->HC(Data::F(simple_analyzer::s_arg, { var2->Deref(), var4->Deref(), var6->Deref(), Data::F(simple_analyzer::s_is,var8,Data::F(simple_analyzer::s6, { var2->Deref(), simple_analyzer::posint1 }),Data::F(simple_analyzer::s_get_entry_modes, { var1->Deref(), var8->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var7->Deref(), continuation })) })) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* simple_analyzer::pred_get_entry_modes_6::exec_pred_get_entry_modes_6__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(simple_analyzer::s_is,var7,Data::F(simple_analyzer::s6, { var2->Deref(), simple_analyzer::posint1 }),Data::F(simple_analyzer::s_get_entry_modes, { var1->Deref(), var7->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* simple_analyzer::pred_var_args_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_var_args_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_var_args_2__1(mach));
	}

	Operation* simple_analyzer::pred_var_args_2::exec_pred_var_args_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = var4;
	local_aregs[3] = Data::F(simple_analyzer::s_filter_vars, { var4->Deref(), var1->Deref(), var5, Data::F(simple_analyzer::s_sort, { var5->Deref(), var2->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(simple_analyzer::s_functor->FindProc(3));
	}

	Operation* simple_analyzer::pred_filter_vars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_filter_vars_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_filter_vars_3__1(mach));
	}

	Operation* simple_analyzer::pred_filter_vars_3::exec_pred_filter_vars_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = Const::Nil;
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_filter_vars_4::exec_static);
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_$002D$002D$003E_2__1(mach));
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_vars,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s16, { var1->Deref(), simple_analyzer::posint0 })),simple_analyzer::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_vars,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s18, { var1->Deref(), simple_analyzer::posint0 })),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_arg, { var1->Deref(), var2->Deref(), var3 })),Data::F(simple_analyzer::s_filter_vars_arg, { var1->Deref(), var2->Deref(), var3->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_vars_arg,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_var, { var3->Deref() })),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s10, { var3->Deref(), Const::Nil }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_is,var4,Data::F(simple_analyzer::s8, { var1->Deref(), simple_analyzer::posint1 }))),Data::F(simple_analyzer::s_filter_vars, { var4->Deref(), var2->Deref() }))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_vars_arg,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_nonvar, { var3->Deref() })),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_is,var4,Data::F(simple_analyzer::s8, { var1->Deref(), simple_analyzer::posint1 }))),Data::F(simple_analyzer::s_filter_vars, { var4->Deref(), var2->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_dups, { Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(simple_analyzer::s1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_dups,Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8,var1,var2),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8,var3,var4),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8,var5,var6),var7)))),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s17, { var1->Deref(), var3->Deref() }),Data::F(simple_analyzer::s17, { var3->Deref(), var5->Deref() }))),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s_filter_dups,Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8, { var3->Deref(), var8 }),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8, { var5->Deref(), var9 }),var7->Deref()))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_dups,Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8,var1,var2),Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8,var3,var4),var5))),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s17, { var1->Deref(), var3->Deref() })),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s10, { var1->Deref(), Const::Nil }),Data::F(simple_analyzer::s_filter_dups, { var5->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_filter_dups,Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8,var1,var2),var3)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s_filter_dups, { var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__9(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_varbag,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_var, { var1->Deref() })),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s10, { var1->Deref(), Const::Nil }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__10(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_varbag,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_nonvar, { var1->Deref() }),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s_functor, { var1->Deref(), var2, var3 })))),Data::F(simple_analyzer::s_varbag, { var1->Deref(), simple_analyzer::posint1, var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__11(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_varbag,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s18, { var2->Deref(), var3->Deref() })),simple_analyzer::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__12(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_varbag,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s16, { var2->Deref(), var3->Deref() })),Data::F(simple_analyzer::s7,simple_analyzer::s1,Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_arg, { var2->Deref(), var1->Deref(), var4 })),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s_varbag, { var4->Deref() }),Data::F(simple_analyzer::s7,Data::F(simple_analyzer::s111,Data::F(simple_analyzer::s_is,var5,Data::F(simple_analyzer::s6, { var2->Deref(), simple_analyzer::posint1 }))),Data::F(simple_analyzer::s_varbag, { var1->Deref(), var5->Deref(), var3->Deref() })))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_goal_dupset_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_goal_dupset_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_goal_dupset_2__1(mach));
	}

	Operation* simple_analyzer::pred_goal_dupset_2::exec_pred_goal_dupset_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_goal_dupset_varbag_3::exec_static);
	}

	Operation* simple_analyzer::pred_goal_dupset_varset_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_goal_dupset_varset_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_goal_dupset_varset_3__1(mach));
	}

	Operation* simple_analyzer::pred_goal_dupset_varset_3::exec_pred_goal_dupset_varset_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = Data::F(simple_analyzer::s_sort, { var4->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_goal_dupset_varbag_3::exec_static);
	}

	Operation* simple_analyzer::pred_goal_dupset_varbag_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_goal_dupset_varbag_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_goal_dupset_varbag_3__1(mach));
	}

	Operation* simple_analyzer::pred_goal_dupset_varbag_3::exec_pred_goal_dupset_varbag_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = Data::F(simple_analyzer::s_make_key, { var3->Deref(), var4, Data::F(simple_analyzer::s_keysort, { var4->Deref(), var5, Data::F(simple_analyzer::s_filter_dups, { var5->Deref(), var2->Deref(), continuation }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_varbag_2::exec_static);
	}

	Operation* simple_analyzer::pred_make_key_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_make_key_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_make_key_2__1(mach));
	}

	Operation* simple_analyzer::pred_make_key_2::exec_pred_make_key_2__1(Prolog* mach) {
		mach->FillAlternative(pred_make_key_2::exec_pred_make_key_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_make_key_2::exec_pred_make_key_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s10,Data::F(simple_analyzer::s8, { var1->Deref(), simple_analyzer::s_dummy }),var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_make_key_2::exec_static);
	}

	Operation* simple_analyzer::pred_filter_dups_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_filter_dups_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_filter_dups_2__1(mach));
	}

	Operation* simple_analyzer::pred_filter_dups_2::exec_pred_filter_dups_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Const::Nil;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_filter_dups_3::exec_static);
	}

	Operation* simple_analyzer::pred_set_command_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_set_command_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_command_3__1(mach));
	}

	Operation* simple_analyzer::pred_set_command_3::exec_pred_set_command_3__1(Prolog* mach) {
		mach->FillAlternative(pred_set_command_3::exec_pred_set_command_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_sub,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = Data::F(simple_analyzer::s10, { var1->Deref(), Const::Nil });
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_diffv_3::exec_static);
	}

	Operation* simple_analyzer::pred_set_command_3::exec_pred_set_command_3__2(Prolog* mach) {
		mach->FillAlternative(pred_set_command_3::exec_pred_set_command_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_add,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_includev_3::exec_static);
	}

	Operation* simple_analyzer::pred_set_command_3::exec_pred_set_command_3__3(Prolog* mach) {
		mach->FillAlternative(pred_set_command_3::exec_pred_set_command_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_sub_set,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_diffv_3::exec_static);
	}

	Operation* simple_analyzer::pred_set_command_3::exec_pred_set_command_3__4(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_add_set,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_unionv_3::exec_static);
	}

	Operation* simple_analyzer::pred_table_command_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_table_command_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_table_command_3__1(mach));
	}

	Operation* simple_analyzer::pred_table_command_3::exec_pred_table_command_3__1(Prolog* mach) {
		mach->FillAlternative(pred_table_command_3::exec_pred_table_command_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_get,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_get_3::exec_static);
	}

	Operation* simple_analyzer::pred_table_command_3::exec_pred_table_command_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s_set,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_set_4::exec_static);
	}

	Operation* simple_analyzer::pred_inv_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_inv_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_inv_2__1(mach));
	}

	Operation* simple_analyzer::pred_inv_2::exec_pred_inv_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s10,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_inv_2, { var4->Deref(), var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_inv_2_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_inv_2_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_inv_2_3__1(mach));
	}

	Operation* simple_analyzer::pred_inv_2_3::exec_pred_inv_2_3__1(Prolog* mach) {
		mach->FillAlternative(pred_inv_2_3::exec_pred_inv_2_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_inv_2_3::exec_pred_inv_2_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_inv_2::exec_static);
	}

	Operation* simple_analyzer::pred_intersectv_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_intersectv_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_intersectv_3__1(mach));
	}

	Operation* simple_analyzer::pred_intersectv_3::exec_pred_intersectv_3__1(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_3::exec_pred_intersectv_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_intersectv_3::exec_pred_intersectv_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_intersectv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_intersectv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_intersectv_2_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_intersectv_2_4__1(mach));
	}

	Operation* simple_analyzer::pred_intersectv_2_4::exec_pred_intersectv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_2_4::exec_pred_intersectv_2_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_intersectv_2_4::exec_pred_intersectv_2_4__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_intersectv_3, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_intersectv_3_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_intersectv_3_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_intersectv_3_6__1(mach));
	}

	Operation* simple_analyzer::pred_intersectv_3_6::exec_pred_intersectv_3_6__1(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s14,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<Operation*>(pred_intersectv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_intersectv_3_6::exec_pred_intersectv_3_6__2(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_intersectv_3::exec_static);
	}

	Operation* simple_analyzer::pred_intersectv_3_6::exec_pred_intersectv_3_6__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<Operation*>(pred_intersectv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_diffv_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_diffv_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_diffv_3__1(mach));
	}

	Operation* simple_analyzer::pred_diffv_3::exec_pred_diffv_3__1(Prolog* mach) {
		mach->FillAlternative(pred_diffv_3::exec_pred_diffv_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_diffv_3::exec_pred_diffv_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_diffv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_diffv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_diffv_2_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_diffv_2_4__1(mach));
	}

	Operation* simple_analyzer::pred_diffv_2_4::exec_pred_diffv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_diffv_2_4::exec_pred_diffv_2_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_diffv_2_4::exec_pred_diffv_2_4__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_diffv_3, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_diffv_3_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_diffv_3_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_diffv_3_6__1(mach));
	}

	Operation* simple_analyzer::pred_diffv_3_6::exec_pred_diffv_3_6__1(Prolog* mach) {
		mach->FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s14,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = Data::F(simple_analyzer::s10, { var3->Deref(), var4->Deref() });
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_diffv_3::exec_static);
	}

	Operation* simple_analyzer::pred_diffv_3_6::exec_pred_diffv_3_6__2(Prolog* mach) {
		mach->FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_diffv_3::exec_static);
	}

	Operation* simple_analyzer::pred_diffv_3_6::exec_pred_diffv_3_6__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<Operation*>(pred_diffv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_unionv_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_unionv_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_unionv_3__1(mach));
	}

	Operation* simple_analyzer::pred_unionv_3::exec_pred_unionv_3__1(Prolog* mach) {
		mach->FillAlternative(pred_unionv_3::exec_pred_unionv_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_unionv_3::exec_pred_unionv_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_unionv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_unionv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_unionv_2_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_unionv_2_4__1(mach));
	}

	Operation* simple_analyzer::pred_unionv_2_4::exec_pred_unionv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_unionv_2_4::exec_pred_unionv_2_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_unionv_2_4::exec_pred_unionv_2_4__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_unionv_3, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_unionv_3_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_unionv_3_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_unionv_3_6__1(mach));
	}

	Operation* simple_analyzer::pred_unionv_3_6::exec_pred_unionv_3_6__1(Prolog* mach) {
		mach->FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s14,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<Operation*>(pred_unionv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_unionv_3_6::exec_pred_unionv_3_6__2(Prolog* mach) {
		mach->FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_unionv_3::exec_static);
	}

	Operation* simple_analyzer::pred_unionv_3_6::exec_pred_unionv_3_6__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Data::F(simple_analyzer::s10, { var3->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<Operation*>(pred_unionv_2_4::exec_static);
	}

	Operation* simple_analyzer::pred_includev_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_includev_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_includev_3__1(mach));
	}

	Operation* simple_analyzer::pred_includev_3::exec_pred_includev_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_includev_2_3::exec_static);
	}

	Operation* simple_analyzer::pred_includev_2_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_includev_2_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_includev_2_3__1(mach));
	}

	Operation* simple_analyzer::pred_includev_2_3::exec_pred_includev_2_3__1(Prolog* mach) {
		mach->FillAlternative(pred_includev_2_3::exec_pred_includev_2_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_includev_2_3::exec_pred_includev_2_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_includev_3, { var5->Deref(), var3->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_includev_3_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_includev_3_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_includev_3_5__1(mach));
	}

	Operation* simple_analyzer::pred_includev_3_5::exec_pred_includev_3_5__1(Prolog* mach) {
		mach->FillAlternative(pred_includev_3_5::exec_pred_includev_3_5__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s14,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(Data::F(simple_analyzer::s10, { var1->Deref(), Data::F(simple_analyzer::s10, { var2->Deref(), var3->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_includev_3_5::exec_pred_includev_3_5__2(Prolog* mach) {
		mach->FillAlternative(pred_includev_3_5::exec_pred_includev_3_5__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(Data::F(simple_analyzer::s10, { var2->Deref(), var3->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_includev_3_5::exec_pred_includev_3_5__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(Data::F(simple_analyzer::s10, { var2->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_includev_2_3::exec_static);
	}

	Operation* simple_analyzer::pred_subsetv_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_subsetv_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_subsetv_2__1(mach));
	}

	Operation* simple_analyzer::pred_subsetv_2::exec_pred_subsetv_2__1(Prolog* mach) {
		mach->FillAlternative(pred_subsetv_2::exec_pred_subsetv_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_subsetv_2::exec_pred_subsetv_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s10,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(simple_analyzer::s10,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = Data::F(simple_analyzer::s_subsetv_2, { var5->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(simple_analyzer::s_compare->FindProc(3));
	}

	Operation* simple_analyzer::pred_subsetv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_subsetv_2_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_subsetv_2_4__1(mach));
	}

	Operation* simple_analyzer::pred_subsetv_2_4::exec_pred_subsetv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_subsetv_2_4::exec_pred_subsetv_2_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_subsetv_2::exec_static);
	}

	Operation* simple_analyzer::pred_subsetv_2_4::exec_pred_subsetv_2_4__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(simple_analyzer::s18,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(simple_analyzer::s10, { var1->Deref(), var2->Deref() });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_subsetv_2::exec_static);
	}

	Operation* simple_analyzer::pred_varset_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_varset_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_varset_2__1(mach));
	}

	Operation* simple_analyzer::pred_varset_2::exec_pred_varset_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = Data::F(simple_analyzer::s_sort, { var3->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_varbag_2::exec_static);
	}

	Operation* simple_analyzer::pred_varbag_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_varbag_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_varbag_2__1(mach));
	}

	Operation* simple_analyzer::pred_varbag_2::exec_pred_varbag_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Const::Nil;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_varbag_3::exec_static);
	}

	Operation* simple_analyzer::pred_unify_p_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_unify_p_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_unify_p_1__1(mach));
	}

	Operation* simple_analyzer::pred_unify_p_1::exec_pred_unify_p_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s15,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_call_p_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_call_p_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_call_p_1__1(mach));
	}

	Operation* simple_analyzer::pred_call_p_1::exec_pred_call_p_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(simple_analyzer::s_unify_p, { var1->Deref() });
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_not_1::exec_static);
	}

	Operation* simple_analyzer::pred_split_unify_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* simple_analyzer::pred_split_unify_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_split_unify_3__1(mach));
	}

	Operation* simple_analyzer::pred_split_unify_3::exec_pred_split_unify_3__1(Prolog* mach) {
		mach->FillAlternative(pred_split_unify_3::exec_pred_split_unify_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s15,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* simple_analyzer::pred_split_unify_3::exec_pred_split_unify_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(simple_analyzer::s15,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}
}
