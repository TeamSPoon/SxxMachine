package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class simple_analyzer /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("!") ;
final static Const s2 = Data.Intern("$cut_load") ;
final static Const s3 = Data.Intern("$cut_part/4_1") ;
final static Const s4 = Data.Intern("$cut_shallow") ;
final static Const s5 = Data.Intern("$fac_$cut_part/4_1/5_2") ;
final static Const s6 = Data.Intern("+") ;
final static Const s7 = Data.Intern(",") ;
final static Const s8 = Data.Intern("-") ;
final static Const s9 = Data.Intern("-->") ;
final static Const s10 = Data.Intern(".") ;
final static Const s11 = Data.Intern("/") ;
final static Const s12 = Data.Intern(":-") ;
final static Const s13 = Data.Intern(";") ;
final static Const s14 = Data.Intern("<") ;
final static Const s15 = Data.Intern("=") ;
final static Const s16 = Data.Intern("=<") ;
final static Const s17 = Data.Intern("==") ;
final static Const s18 = Data.Intern(">") ;
final static Const s19 = Data.Intern("\\==") ;
final static Const s_add = Data.Intern("add") ;
final static Const s_add_set = Data.Intern("add_set") ;
final static Const s_analyze_closure = Data.Intern("analyze_closure") ;
final static Const s_analyze_strees = Data.Intern("analyze_strees") ;
final static Const s_any = Data.Intern("any") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_bottom = Data.Intern("bottom") ;
final static Const s_bottom_call = Data.Intern("bottom_call") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_call_p = Data.Intern("call_p") ;
final static Const s_compare = Data.Intern("compare") ;
final static Const s_create_argument = Data.Intern("create_argument") ;
final static Const s_create_new_call = Data.Intern("create_new_call") ;
final static Const s_diffv = Data.Intern("diffv") ;
final static Const s_diffv_2 = Data.Intern("diffv_2") ;
final static Const s_diffv_3 = Data.Intern("diffv_3") ;
final static Const s_dummy = Data.Intern("dummy") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_filter_dups = Data.Intern("filter_dups") ;
final static Const s_filter_vars = Data.Intern("filter_vars") ;
final static Const s_filter_vars_arg = Data.Intern("filter_vars_arg") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_get = Data.Intern("get") ;
final static Const s_get_entry_modes = Data.Intern("get_entry_modes") ;
final static Const s_goal_dupset = Data.Intern("goal_dupset") ;
final static Const s_goal_dupset_varbag = Data.Intern("goal_dupset_varbag") ;
final static Const s_goal_dupset_varset = Data.Intern("goal_dupset_varset") ;
final static Const s_ground = Data.Intern("ground") ;
final static Const s_ground_flag = Data.Intern("ground_flag") ;
final static Const s_includev = Data.Intern("includev") ;
final static Const s_includev_2 = Data.Intern("includev_2") ;
final static Const s_includev_3 = Data.Intern("includev_3") ;
final static Const s_init_conj = Data.Intern("init_conj") ;
final static Const s_init_disj = Data.Intern("init_disj") ;
final static Const s_init_goal = Data.Intern("init_goal") ;
final static Const s_init_strees = Data.Intern("init_strees") ;
final static Const s_intersectv = Data.Intern("intersectv") ;
final static Const s_intersectv_2 = Data.Intern("intersectv_2") ;
final static Const s_intersectv_3 = Data.Intern("intersectv_3") ;
final static Const s_inv = Data.Intern("inv") ;
final static Const s_inv_2 = Data.Intern("inv_2") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_keysort = Data.Intern("keysort") ;
final static Const s_lattice_modes_arg = Data.Intern("lattice_modes_arg") ;
final static Const s_lattice_modes_call = Data.Intern("lattice_modes_call") ;
final static Const s_leaf = Data.Intern("leaf") ;
final static Const s_lub = Data.Intern("lub") ;
final static Const s_lub_call = Data.Intern("lub_call") ;
final static Const s_main = Data.Intern("main") ;
final static Const s_make_key = Data.Intern("make_key") ;
final static Const s_membership_flag = Data.Intern("membership_flag") ;
final static Const s_no = Data.Intern("no") ;
final static Const s_node = Data.Intern("node") ;
final static Const s_nonvar = Data.Intern("nonvar") ;
final static Const s_not = Data.Intern("not") ;
final static Const s_part = Data.Intern("part") ;
final static Const s_qsort = Data.Intern("qsort") ;
final static Const s_seal = Data.Intern("seal") ;
final static Const s_set = Data.Intern("set") ;
final static Const s_set_2 = Data.Intern("set_2") ;
final static Const s_set_command = Data.Intern("set_command") ;
final static Const s_smallerorequal = Data.Intern("smallerorequal") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_sort = Data.Intern("sort") ;
final static Const s_split_unify = Data.Intern("split_unify") ;
final static Const s_stree = Data.Intern("stree") ;
final static Const s_sub = Data.Intern("sub") ;
final static Const s_sub_set = Data.Intern("sub_set") ;
final static Const s_subsetv = Data.Intern("subsetv") ;
final static Const s_subsetv_2 = Data.Intern("subsetv_2") ;
final static Const s_table_command = Data.Intern("table_command") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_traverse_conj = Data.Intern("traverse_conj") ;
final static Const s_traverse_disj = Data.Intern("traverse_disj") ;
final static Const s_traverse_strees = Data.Intern("traverse_strees") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_unify_p = Data.Intern("unify_p") ;
final static Const s_uninit = Data.Intern("uninit") ;
final static Const s_unionv = Data.Intern("unionv") ;
final static Const s_unionv_2 = Data.Intern("unionv_2") ;
final static Const s_unionv_3 = Data.Intern("unionv_3") ;
final static Const s_unknown = Data.Intern("unknown") ;
final static Const s_update_goal = Data.Intern("update_goal") ;
final static Const s_update_table = Data.Intern("update_table") ;
final static Const s_var = Data.Intern("var") ;
final static Const s_var_args = Data.Intern("var_args") ;
final static Const s_varbag = Data.Intern("varbag") ;
final static Const s_varset = Data.Intern("varset") ;
final static Const s_yes = Data.Intern("yes") ;
final static Const s111 = Data.Intern("{}") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Int posint4 = Data.Number(4L) ;
final static Int posint5 = Data.Number(5L) ;
final static Int posint6 = Data.Number(6L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_main_1 = PredTable.Register("main",1, new pred_main_1());
final static Operation reg_analyze_strees_2 = PredTable.Register("analyze_strees",2, new pred_analyze_strees_2());
final static Operation reg_analyze_closure_3 = PredTable.Register("analyze_closure",3, new pred_analyze_closure_3());
final static Operation reg_analyze_closure_4 = PredTable.Register("analyze_closure",4, new pred_analyze_closure_4());
final static Operation reg_init_strees_3 = PredTable.Register("init_strees",3, new pred_init_strees_3());
final static Operation reg_init_conj_3 = PredTable.Register("init_conj",3, new pred_init_conj_3());
final static Operation reg_init_disj_3 = PredTable.Register("init_disj",3, new pred_init_disj_3());
final static Operation reg_init_goal_3 = PredTable.Register("init_goal",3, new pred_init_goal_3());
final static Operation reg_traverse_strees_5 = PredTable.Register("traverse_strees",5, new pred_traverse_strees_5());
final static Operation reg_traverse_disj_6 = PredTable.Register("traverse_disj",6, new pred_traverse_disj_6());
final static Operation reg_traverse_conj_6 = PredTable.Register("traverse_conj",6, new pred_traverse_conj_6());
final static Operation reg_traverse_conj_11 = PredTable.Register("traverse_conj",11, new pred_traverse_conj_11());
final static Operation reg_update_goal_12 = PredTable.Register("update_goal",12, new pred_update_goal_12());
final static Operation reg_update_table_6 = PredTable.Register("update_table",6, new pred_update_table_6());
final static Operation reg_create_new_call_9 = PredTable.Register("create_new_call",9, new pred_create_new_call_9());
final static Operation reg_lub_3 = PredTable.Register("lub",3, new pred_lub_3());
final static Operation reg_bottom_1 = PredTable.Register("bottom",1, new pred_bottom_1());
final static Operation reg_create_argument_6 = PredTable.Register("create_argument",6, new pred_create_argument_6());
final static Operation reg_lub_call_3 = PredTable.Register("lub_call",3, new pred_lub_call_3());
final static Operation reg_lub_call_5 = PredTable.Register("lub_call",5, new pred_lub_call_5());
final static Operation reg_bottom_call_2 = PredTable.Register("bottom_call",2, new pred_bottom_call_2());
final static Operation reg_bottom_call_3 = PredTable.Register("bottom_call",3, new pred_bottom_call_3());
final static Operation reg_lattice_modes_call_3 = PredTable.Register("lattice_modes_call",3, new pred_lattice_modes_call_3());
final static Operation reg_lattice_modes_call_6 = PredTable.Register("lattice_modes_call",6, new pred_lattice_modes_call_6());
final static Operation reg_lattice_modes_arg_4 = PredTable.Register("lattice_modes_arg",4, new pred_lattice_modes_arg_4());
final static Operation reg_get_3 = PredTable.Register("get",3, new pred_get_3());
final static Operation reg_get_6 = PredTable.Register("get",6, new pred_get_6());
final static Operation reg_get_5 = PredTable.Register("get",5, new pred_get_5());
final static Operation reg_set_4 = PredTable.Register("set",4, new pred_set_4());
final static Operation reg_set_2_9 = PredTable.Register("set_2",9, new pred_set_2_9());
final static Operation reg_seal_1 = PredTable.Register("seal",1, new pred_seal_1());
final static Operation reg_membership_flag_3 = PredTable.Register("membership_flag",3, new pred_membership_flag_3());
final static Operation reg_ground_flag_3 = PredTable.Register("ground_flag",3, new pred_ground_flag_3());
final static Operation reg_get_entry_modes_4 = PredTable.Register("get_entry_modes",4, new pred_get_entry_modes_4());
final static Operation reg_get_entry_modes_6 = PredTable.Register("get_entry_modes",6, new pred_get_entry_modes_6());
final static Operation reg_var_args_2 = PredTable.Register("var_args",2, new pred_var_args_2());
final static Operation reg_filter_vars_3 = PredTable.Register("filter_vars",3, new pred_filter_vars_3());
final static Operation reg_$002D$002D$003E_2 = PredTable.Register("-->",2, new pred_$002D$002D$003E_2());
final static Operation reg_goal_dupset_2 = PredTable.Register("goal_dupset",2, new pred_goal_dupset_2());
final static Operation reg_goal_dupset_varset_3 = PredTable.Register("goal_dupset_varset",3, new pred_goal_dupset_varset_3());
final static Operation reg_goal_dupset_varbag_3 = PredTable.Register("goal_dupset_varbag",3, new pred_goal_dupset_varbag_3());
final static Operation reg_make_key_2 = PredTable.Register("make_key",2, new pred_make_key_2());
final static Operation reg_filter_dups_2 = PredTable.Register("filter_dups",2, new pred_filter_dups_2());
final static Operation reg_set_command_3 = PredTable.Register("set_command",3, new pred_set_command_3());
final static Operation reg_table_command_3 = PredTable.Register("table_command",3, new pred_table_command_3());
final static Operation reg_inv_2 = PredTable.Register("inv",2, new pred_inv_2());
final static Operation reg_inv_2_3 = PredTable.Register("inv_2",3, new pred_inv_2_3());
final static Operation reg_intersectv_3 = PredTable.Register("intersectv",3, new pred_intersectv_3());
final static Operation reg_intersectv_2_4 = PredTable.Register("intersectv_2",4, new pred_intersectv_2_4());
final static Operation reg_intersectv_3_6 = PredTable.Register("intersectv_3",6, new pred_intersectv_3_6());
final static Operation reg_diffv_3 = PredTable.Register("diffv",3, new pred_diffv_3());
final static Operation reg_diffv_2_4 = PredTable.Register("diffv_2",4, new pred_diffv_2_4());
final static Operation reg_diffv_3_6 = PredTable.Register("diffv_3",6, new pred_diffv_3_6());
final static Operation reg_unionv_3 = PredTable.Register("unionv",3, new pred_unionv_3());
final static Operation reg_unionv_2_4 = PredTable.Register("unionv_2",4, new pred_unionv_2_4());
final static Operation reg_unionv_3_6 = PredTable.Register("unionv_3",6, new pred_unionv_3_6());
final static Operation reg_includev_3 = PredTable.Register("includev",3, new pred_includev_3());
final static Operation reg_includev_2_3 = PredTable.Register("includev_2",3, new pred_includev_2_3());
final static Operation reg_includev_3_5 = PredTable.Register("includev_3",5, new pred_includev_3_5());
final static Operation reg_subsetv_2 = PredTable.Register("subsetv",2, new pred_subsetv_2());
final static Operation reg_subsetv_2_4 = PredTable.Register("subsetv_2",4, new pred_subsetv_2_4());
final static Operation reg_varset_2 = PredTable.Register("varset",2, new pred_varset_2());
final static Operation reg_varbag_2 = PredTable.Register("varbag",2, new pred_varbag_2());
final static Operation reg_unify_p_1 = PredTable.Register("unify_p",1, new pred_unify_p_1());
final static Operation reg_call_p_1 = PredTable.Register("call_p",1, new pred_call_p_1());
final static Operation reg_split_unify_3 = PredTable.Register("split_unify",3, new pred_split_unify_3());
public static class pred_top_0 extends Code {

/*

top(_466):-main(_458,_466).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_top_0__1(mach); }
public static Operation exec_pred_top_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_main_1::exec_static ;}
}


public static class pred_main_1 extends Code {

/*

main(_484,_1118):-analyze_strees([stree(main/0,(main:-qsort([1,2],_508,[]),true;fail),(main:-true),[],1),stree(qsort/3,(qsort(_562,_564,_566):-_562=[_570|_572],part(_572,_570,_586,_588),qsort(_588,_594,_566),qsort(_586,_564,[_570|_594]),true;_562=[],_566=_564,true;fail),(qsort(_680,_682,_684):-true),[],1),stree(part/4,(part(_718,_720,_722,_724):-'$cut_load'(_728),'$cut_part/4_1'(_718,_720,_722,_724,_728),true;fail),(part(_768,_770,_772,_774):-true),[stree('$cut_part/4_1'/5,('$cut_part/4_1'(_790,_792,_794,_796,_798):-_790=[_802|_804],'$fac_$cut_part/4_1/5_2'(_804,_792,_794,_796,_798,_802),true;_790=[],_794=[],_796=[],true;fail),('$cut_part/4_1'(_894,_896,_898,_900,_902):-true),[stree('$fac_$cut_part/4_1/5_2'/6,('$fac_$cut_part/4_1/5_2'(_918,_920,_922,_924,_926,_928):-_922=[_928|_934],_928=<_920,'$cut_shallow'(_926),part(_918,_920,_934,_924),true;_924=[_928|_990],part(_918,_920,_922,_990),true;fail),('$fac_$cut_part/4_1/5_2'(_1040,_1042,_1044,_1046,_1048,_1050):-true),[],1)],1)],1)],_484,_1118).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_main_1__1(mach); }
public static Operation exec_pred_main_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var48 = Data.V(mach) ;
Var var47 = Data.V(mach) ;
Var var46 = Data.V(mach) ;
Var var45 = Data.V(mach) ;
Var var44 = Data.V(mach) ;
Var var43 = Data.V(mach) ;
Var var42 = Data.V(mach) ;
Var var41 = Data.V(mach) ;
Var var40 = Data.V(mach) ;
Var var39 = Data.V(mach) ;
Var var38 = Data.V(mach) ;
Var var37 = Data.V(mach) ;
Var var36 = Data.V(mach) ;
Var var35 = Data.V(mach) ;
Var var34 = Data.V(mach) ;
Var var33 = Data.V(mach) ;
Var var32 = Data.V(mach) ;
Var var31 = Data.V(mach) ;
Var var30 = Data.V(mach) ;
Var var29 = Data.V(mach) ;
Var var28 = Data.V(mach) ;
Var var27 = Data.V(mach) ;
Var var26 = Data.V(mach) ;
Var var25 = Data.V(mach) ;
Var var24 = Data.V(mach) ;
Var var23 = Data.V(mach) ;
Var var22 = Data.V(mach) ;
Var var21 = Data.V(mach) ;
Var var20 = Data.V(mach) ;
Var var19 = Data.V(mach) ;
Var var18 = Data.V(mach) ;
Var var17 = Data.V(mach) ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s_stree,Data.F(simple_analyzer.s11,simple_analyzer.s_main,simple_analyzer.posint0),Data.F(simple_analyzer.s12,simple_analyzer.s_main,Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_qsort,Data.F(simple_analyzer.s10,simple_analyzer.posint1,Data.F(simple_analyzer.s10,simple_analyzer.posint2,Const.Nil)),var2,Const.Nil),simple_analyzer.s_true),simple_analyzer.s_fail)),Data.F(simple_analyzer.s12,simple_analyzer.s_main,simple_analyzer.s_true),Const.Nil,simple_analyzer.posint1),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s_stree,Data.F(simple_analyzer.s11,simple_analyzer.s_qsort,simple_analyzer.posint3),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s_qsort,var3,var4,var5),Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var3.Deref(),Data.F(simple_analyzer.s10,var6,var7)),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_part,var7.Deref(),var6.Deref(),var8,var9),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_qsort,var9.Deref(),var10,var5.Deref()),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_qsort,var8.Deref(),var4.Deref(),Data.F(simple_analyzer.s10,var6.Deref(),var10.Deref())),simple_analyzer.s_true)))),Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var3.Deref(),Const.Nil),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var5.Deref(),var4.Deref()),simple_analyzer.s_true)),simple_analyzer.s_fail))),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s_qsort,var11,var12,var13),simple_analyzer.s_true),Const.Nil,simple_analyzer.posint1),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s_stree,Data.F(simple_analyzer.s11,simple_analyzer.s_part,simple_analyzer.posint4),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s_part,var14,var15,var16,var17),Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s2,var18),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s3,var14.Deref(),var15.Deref(),var16.Deref(),var17.Deref(),var18.Deref()),simple_analyzer.s_true)),simple_analyzer.s_fail)),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s_part,var19,var20,var21,var22),simple_analyzer.s_true),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s_stree,Data.F(simple_analyzer.s11,simple_analyzer.s3,simple_analyzer.posint5),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s3,var23,var24,var25,var26,var27),Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var23.Deref(),Data.F(simple_analyzer.s10,var28,var29)),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s5,var29.Deref(),var24.Deref(),var25.Deref(),var26.Deref(),var27.Deref(),var28.Deref()),simple_analyzer.s_true)),Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var23.Deref(),Const.Nil),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var25.Deref(),Const.Nil),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var26.Deref(),Const.Nil),simple_analyzer.s_true))),simple_analyzer.s_fail))),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s3,var30,var31,var32,var33,var34),simple_analyzer.s_true),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s_stree,Data.F(simple_analyzer.s11,simple_analyzer.s5,simple_analyzer.posint6),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s5,var35,var36,var37,var38,var39,var40),Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var37.Deref(),Data.F(simple_analyzer.s10,var40.Deref(),var41)),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s16,var40.Deref(),var36.Deref()),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s4,var39.Deref()),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_part,var35.Deref(),var36.Deref(),var41.Deref(),var38.Deref()),simple_analyzer.s_true)))),Data.F(simple_analyzer.s13,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s15,var38.Deref(),Data.F(simple_analyzer.s10,var40.Deref(),var42)),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_part,var35.Deref(),var36.Deref(),var37.Deref(),var42.Deref()),simple_analyzer.s_true)),simple_analyzer.s_fail))),Data.F(simple_analyzer.s12,Data.F(simple_analyzer.s5,var43,var44,var45,var46,var47,var48),simple_analyzer.s_true),Const.Nil,simple_analyzer.posint1),Const.Nil),simple_analyzer.posint1),Const.Nil),simple_analyzer.posint1),Const.Nil))) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_analyze_strees_2::exec_static ;}
}


public static class pred_analyze_strees_2 extends Code {

/*

analyze_strees(_1140,_1142,_1154):-init_strees(_1140,_1144,_1146,seal(_1146,analyze_closure(_1140,_1146,_1142,_1154))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_analyze_strees_2__1(mach); }
public static Operation exec_pred_analyze_strees_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(simple_analyzer.s_seal,var4.Deref(),Data.F(simple_analyzer.s_analyze_closure,var1.Deref(),var4.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_init_strees_3::exec_static ;}
}


public static class pred_analyze_closure_3 extends Code {

/*

analyze_closure(_1196,_1198,_1200,_1212):-traverse_strees(_1196,_1198,_1202,0,_1204,analyze_closure(_1196,_1202,_1200,_1204,_1212)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_analyze_closure_3__1(mach); }
public static Operation exec_pred_analyze_closure_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = simple_analyzer.posint0 ;
local_aregs[4] = var5 ;
local_aregs[5] = Data.F(simple_analyzer.s_analyze_closure,var1.Deref(),var4.Deref(),var3.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_traverse_strees_5::exec_static ;}
}


public static class pred_analyze_closure_4 extends Code {

/*

analyze_closure(_1256,_1258,_1258,_1260,_1268):-smallerorequal(_1260,0,cut(1,_1268)).
analyze_closure(_1302,_1304,_1306,_1308,_1316):-smallerthan(0,_1308,cut(1,analyze_closure(_1302,_1304,_1306,_1316))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_analyze_closure_4__1(mach); }
public static Operation exec_pred_analyze_closure_4__1(Prolog mach){ mach.FillAlternative(pred_analyze_closure_4::exec_pred_analyze_closure_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = simple_analyzer.posint0 ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_analyze_closure_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = simple_analyzer.posint0 ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = mach.HC(Data.F(simple_analyzer.s_analyze_closure,var1.Deref(),var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


public static class pred_init_strees_3 extends Code {

/*

init_strees([],_1360,_1360,_1368):-true(_1368).
init_strees([_1392|_1394],_1396,_1398,_1438):-unify(stree(_1408,(_1402:-_1404),_1412,_1414,_1416),_1392,bottom_call(_1408,_1418,table_command(get(_1408,_1418),_1396,_1426,init_disj(_1404,_1426,_1428,init_strees(_1414,_1428,_1430,init_strees(_1394,_1430,_1398,true(_1438))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_init_strees_3__1(mach); }
public static Operation exec_pred_init_strees_3__1(Prolog mach){ mach.FillAlternative(pred_init_strees_3::exec_pred_init_strees_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_true_0::exec_static ;}
public static Operation exec_pred_init_strees_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(simple_analyzer.s_stree,var5,Data.F(simple_analyzer.s12,var6,var7),var8,var9,var10) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(simple_analyzer.s_bottom_call,var5.Deref(),var11,Data.F(simple_analyzer.s_table_command,Data.F(simple_analyzer.s_get,var5.Deref(),var11.Deref()),var3.Deref(),var12,Data.F(simple_analyzer.s_init_disj,var7.Deref(),var12.Deref(),var13,Data.F(simple_analyzer.s_init_strees,var9.Deref(),var13.Deref(),var14,Data.F(simple_analyzer.s_init_strees,var2.Deref(),var14.Deref(),var4.Deref(),Data.F(simple_analyzer.s_true,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_unify_2::exec_static ;}
}


public static class pred_init_conj_3 extends Code {

/*

init_conj(true,_1516,_1516,_1524):-true(_1524).
init_conj((_1548,_1550),_1552,_1554,_1564):-init_goal(_1548,_1552,_1556,init_conj(_1550,_1556,_1554,true(_1564))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_init_conj_3__1(mach); }
public static Operation exec_pred_init_conj_3__1(Prolog mach){ mach.FillAlternative(pred_init_conj_3::exec_pred_init_conj_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_true,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_true_0::exec_static ;}
public static Operation exec_pred_init_conj_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(simple_analyzer.s_init_conj,var2.Deref(),var5.Deref(),var4.Deref(),Data.F(simple_analyzer.s_true,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_init_goal_3::exec_static ;}
}


public static class pred_init_disj_3 extends Code {

/*

init_disj(fail,_1606,_1606,_1614):-true(_1614).
init_disj((_1638;_1640),_1642,_1644,_1654):-init_conj(_1638,_1642,_1646,init_disj(_1640,_1646,_1644,true(_1654))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_init_disj_3__1(mach); }
public static Operation exec_pred_init_disj_3__1(Prolog mach){ mach.FillAlternative(pred_init_disj_3::exec_pred_init_disj_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_fail,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_true_0::exec_static ;}
public static Operation exec_pred_init_disj_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s13,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(simple_analyzer.s_init_disj,var2.Deref(),var5.Deref(),var4.Deref(),Data.F(simple_analyzer.s_true,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_init_conj_3::exec_static ;}
}


public static class pred_init_goal_3 extends Code {

/*

init_goal(_1696,_1698,_1700,_1732):-call_p(_1696,cut(1,functor(_1696,_1702,_1704,bottom_call(_1702/_1704,_1712,table_command(get(_1702/_1704,_1712),_1698,_1700,true(_1732)))))).
init_goal(_1794,_1796,_1796,_1804):-unify_p(_1794,cut(1,true(_1804))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_init_goal_3__1(mach); }
public static Operation exec_pred_init_goal_3__1(Prolog mach){ mach.FillAlternative(pred_init_goal_3::exec_pred_init_goal_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(simple_analyzer.s_functor,var1.Deref(),var4,var5,Data.F(simple_analyzer.s_bottom_call,Data.F(simple_analyzer.s11,var4.Deref(),var5.Deref()),var6,Data.F(simple_analyzer.s_table_command,Data.F(simple_analyzer.s_get,Data.F(simple_analyzer.s11,var4.Deref(),var5.Deref()),var6.Deref()),var2.Deref(),var3.Deref(),Data.F(simple_analyzer.s_true,continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation)pred_call_p_1::exec_static ;}
public static Operation exec_pred_init_goal_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(simple_analyzer.s_true,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation)pred_unify_p_1::exec_static ;}
}


public static class pred_traverse_strees_5 extends Code {

/*

traverse_strees([],_1838,_1838,_1840,_1840,_1848):-true(_1848).
traverse_strees([_1876|_1878],_1880,_1882,_1884,_1886,_1920):-unify(stree(_1896,(_1890:-_1892),_1900,_1902,_1904),_1876,traverse_disj(_1890,_1892,_1880,_1906,_1884,_1908,traverse_strees(_1902,_1906,_1910,_1908,_1912,traverse_strees(_1878,_1910,_1882,_1912,_1886,true(_1920))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_traverse_strees_5__1(mach); }
public static Operation exec_pred_traverse_strees_5__1(Prolog mach){ mach.FillAlternative(pred_traverse_strees_5::exec_pred_traverse_strees_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_true_0::exec_static ;}
public static Operation exec_pred_traverse_strees_5__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(simple_analyzer.s_stree,var7,Data.F(simple_analyzer.s12,var8,var9),var10,var11,var12) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(simple_analyzer.s_traverse_disj,var8.Deref(),var9.Deref(),var3.Deref(),var13,var5.Deref(),var14,Data.F(simple_analyzer.s_traverse_strees,var11.Deref(),var13.Deref(),var15,var14.Deref(),var16,Data.F(simple_analyzer.s_traverse_strees,var2.Deref(),var15.Deref(),var4.Deref(),var16.Deref(),var6.Deref(),Data.F(simple_analyzer.s_true,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_unify_2::exec_static ;}
}


public static class pred_traverse_disj_6 extends Code {

/*

traverse_disj(_1998,fail,_2000,_2000,_2002,_2002,_2010):-true(_2010).
traverse_disj(_2044,(_2040;_2042),_2046,_2048,_2050,_2052,_2064):-traverse_conj(_2044,_2040,_2046,_2054,_2050,_2056,traverse_disj(_2044,_2042,_2054,_2048,_2056,_2052,true(_2064))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_traverse_disj_6__1(mach); }
public static Operation exec_pred_traverse_disj_6__1(Prolog mach){ mach.FillAlternative(pred_traverse_disj_6::exec_pred_traverse_disj_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_fail,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_true_0::exec_static ;}
public static Operation exec_pred_traverse_disj_6__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s13,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var8 ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var9 ;
local_aregs[6] = Data.F(simple_analyzer.s_traverse_disj,var1.Deref(),var3.Deref(),var8.Deref(),var5.Deref(),var9.Deref(),var7.Deref(),Data.F(simple_analyzer.s_true,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_traverse_conj_6::exec_static ;}
}


public static class pred_traverse_conj_6 extends Code {

/*

traverse_conj(_2124,_2126,_2128,_2130,_2132,_2134,_2172):-varset(_2124,_2136,functor(_2124,_2138,_2140,table_command(get(_2138/_2140,_2152),_2128,_2154,get_entry_modes(uninit,_2124,_2152,_2156,get_entry_modes(ground,_2124,_2152,_2158,traverse_conj(_2126,_2154,_2130,_2132,_2134,_2158,_2160,_2156,_2162,_2136,_2164,true(_2172))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_traverse_conj_6__1(mach); }
public static Operation exec_pred_traverse_conj_6__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var7 ;
local_aregs[2] = Data.F(simple_analyzer.s_functor,var1.Deref(),var8,var9,Data.F(simple_analyzer.s_table_command,Data.F(simple_analyzer.s_get,Data.F(simple_analyzer.s11,var8.Deref(),var9.Deref()),var10),var3.Deref(),var11,Data.F(simple_analyzer.s_get_entry_modes,simple_analyzer.s_uninit,var1.Deref(),var10.Deref(),var12,Data.F(simple_analyzer.s_get_entry_modes,simple_analyzer.s_ground,var1.Deref(),var10.Deref(),var13,Data.F(simple_analyzer.s_traverse_conj,var2.Deref(),var11.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var13.Deref(),var14,var12.Deref(),var15,var7.Deref(),var16,Data.F(simple_analyzer.s_true,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_varset_2::exec_static ;}
}


public static class pred_traverse_conj_11 extends Code {

/*

traverse_conj(true,_2278,_2278,_2280,_2280,_2282,_2282,_2284,_2284,_2286,_2286,_2294):-true(_2294).
traverse_conj((_2334,_2336),_2338,_2340,_2342,_2344,_2346,_2348,_2350,_2352,_2354,_2356,_2378):-varset(_2334,_2358,update_goal(_2334,_2358,_2338,_2360,_2342,_2362,_2346,_2364,_2350,_2366,_2354,_2368,unionv(_2358,_2368,_2370,traverse_conj(_2336,_2360,_2340,_2362,_2344,_2364,_2348,_2366,_2352,_2370,_2356,true(_2378))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
Term aregs[] = mach.RegPull(11);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_traverse_conj_11__1(mach); }
public static Operation exec_pred_traverse_conj_11__1(Prolog mach){ mach.FillAlternative(pred_traverse_conj_11::exec_pred_traverse_conj_11__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_true,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var5.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_true_0::exec_static ;}
public static Operation exec_pred_traverse_conj_11__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var19 = Data.V(mach) ;
Var var18 = Data.V(mach) ;
Var var17 = Data.V(mach) ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var9,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var10,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var11,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var12,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var13 ;
local_aregs[2] = Data.F(simple_analyzer.s_update_goal,var1.Deref(),var13.Deref(),var3.Deref(),var14,var5.Deref(),var15,var7.Deref(),var16,var9.Deref(),var17,var11.Deref(),var18,Data.F(simple_analyzer.s_unionv,var13.Deref(),var18.Deref(),var19,Data.F(simple_analyzer.s_traverse_conj,var2.Deref(),var14.Deref(),var4.Deref(),var15.Deref(),var6.Deref(),var16.Deref(),var8.Deref(),var17.Deref(),var10.Deref(),var19.Deref(),var12.Deref(),Data.F(simple_analyzer.s_true,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_varset_2::exec_static ;}
}


public static class pred_update_goal_12 extends Code {

/*

update_goal(_2488,_2490,_2492,_2492,_2494,_2494,_2496,_2498,_2500,_2502,_2504,_2504,_2526):-split_unify(_2488,_2506,_2508,var(_2506,nonvar(_2508,varset(_2508,_2510,subsetv(_2510,_2496,cut(1,set_command(add(_2506),_2496,_2498,set_command(sub(_2506),_2500,_2502,true(_2526))))))))).
update_goal(_2630,_2632,_2634,_2634,_2636,_2636,_2638,_2638,_2640,_2642,_2644,_2644,_2678):-split_unify(_2630,_2646,_2648,var(_2646,nonvar(_2648,inv(_2646,_2640,cut(1,diffv(_2632,_2644,_2650,diffv(_2650,_2638,_2652,set_command(add_set(_2652),_2640,_2658,set_command(sub(_2646),_2658,_2664,intersectv(_2632,_2644,_2666,set_command(sub_set(_2666),_2664,_2642,true(_2678)))))))))))).
update_goal(_2814,_2816,_2818,_2818,_2820,_2820,_2822,_2824,_2826,_2828,_2830,_2830,_2850):-split_unify(_2814,_2832,_2834,var(_2832,inv(_2832,_2822,cut(1,set_command(add_set(_2816),_2822,_2824,set_command(sub_set(_2816),_2826,_2828,true(_2850))))))).
update_goal(_2940,_2942,_2944,_2944,_2946,_2946,_2948,_2948,_2950,_2952,_2954,_2954,_2966):-unify_p(_2940,cut(1,set_command(sub_set(_2942),_2950,_2952,true(_2966)))).
update_goal(_3028,_3030,_3032,_3034,_3036,_3038,_3040,_3040,_3042,_3044,_3046,_3046,_3074):-call_p(_3028,cut(1,goal_dupset(_3028,_3048,var_args(_3028,_3050,functor(_3028,_3052,_3054,functor(_3056,_3052,_3054,create_new_call(1,_3054,_3040,_3050,_3048,_3042,_3046,_3028,_3056,update_table(_3052/_3054,_3056,_3032,_3034,_3036,_3038,set_command(sub_set(_3030),_3042,_3044,true(_3074)))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
Term aregs[] = mach.RegPull(12);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_update_goal_12__1(mach); }
public static Operation exec_pred_update_goal_12__1(Prolog mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var9,mach))) return Prolog.Fail0 ;
if (!( (areg11).Unify(var9.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var10 ;
local_aregs[2] = var11 ;
local_aregs[3] = Data.F(simple_analyzer.s_var,var10.Deref(),Data.F(simple_analyzer.s_nonvar,var11.Deref(),Data.F(simple_analyzer.s_varset,var11.Deref(),var12,Data.F(simple_analyzer.s_subsetv,var12.Deref(),var5.Deref(),mach.HC(Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_add,var10.Deref()),var5.Deref(),var6.Deref(),Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_sub,var10.Deref()),var7.Deref(),var8.Deref(),Data.F(simple_analyzer.s_true,continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_split_unify_3::exec_static ;}
public static Operation exec_pred_update_goal_12__2(Prolog mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var5.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg11).Unify(var8.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var9 ;
local_aregs[2] = var10 ;
local_aregs[3] = Data.F(simple_analyzer.s_var,var9.Deref(),Data.F(simple_analyzer.s_nonvar,var10.Deref(),Data.F(simple_analyzer.s_inv,var9.Deref(),var6.Deref(),mach.HC(Data.F(simple_analyzer.s_diffv,var2.Deref(),var8.Deref(),var11,Data.F(simple_analyzer.s_diffv,var11.Deref(),var5.Deref(),var12,Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_add_set,var12.Deref()),var6.Deref(),var13,Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_sub,var9.Deref()),var13.Deref(),var14,Data.F(simple_analyzer.s_intersectv,var2.Deref(),var8.Deref(),var15,Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_sub_set,var15.Deref()),var14.Deref(),var7.Deref(),Data.F(simple_analyzer.s_true,continuation))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_split_unify_3::exec_static ;}
public static Operation exec_pred_update_goal_12__3(Prolog mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var9,mach))) return Prolog.Fail0 ;
if (!( (areg11).Unify(var9.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var10 ;
local_aregs[2] = var11 ;
local_aregs[3] = Data.F(simple_analyzer.s_var,var10.Deref(),Data.F(simple_analyzer.s_inv,var10.Deref(),var5.Deref(),mach.HC(Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_add_set,var2.Deref()),var5.Deref(),var6.Deref(),Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_sub_set,var2.Deref()),var7.Deref(),var8.Deref(),Data.F(simple_analyzer.s_true,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_split_unify_3::exec_static ;}
public static Operation exec_pred_update_goal_12__4(Prolog mach){ mach.FillAlternative(pred_update_goal_12::exec_pred_update_goal_12__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var5.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg11).Unify(var8.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_sub_set,var2.Deref()),var6.Deref(),var7.Deref(),Data.F(simple_analyzer.s_true,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Operation)pred_unify_p_1::exec_static ;}
public static Operation exec_pred_update_goal_12__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[12] ;
Term areg11 = local_aregs[11].Deref() ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var7.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var9,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var10,mach))) return Prolog.Fail0 ;
if (!( (areg11).Unify(var10.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(simple_analyzer.s_goal_dupset,var1.Deref(),var11,Data.F(simple_analyzer.s_var_args,var1.Deref(),var12,Data.F(simple_analyzer.s_functor,var1.Deref(),var13,var14,Data.F(simple_analyzer.s_functor,var15,var13.Deref(),var14.Deref(),Data.F(simple_analyzer.s_create_new_call,simple_analyzer.posint1,var14.Deref(),var7.Deref(),var12.Deref(),var11.Deref(),var8.Deref(),var10.Deref(),var1.Deref(),var15.Deref(),Data.F(simple_analyzer.s_update_table,Data.F(simple_analyzer.s11,var13.Deref(),var14.Deref()),var15.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),Data.F(simple_analyzer.s_set_command,Data.F(simple_analyzer.s_sub_set,var2.Deref()),var8.Deref(),var9.Deref(),Data.F(simple_analyzer.s_true,continuation))))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Operation)pred_call_p_1::exec_static ;}
}


public static class pred_update_table_6 extends Code {

/*

update_table(_3212/_3214,_3216,_3218,_3220,_3222,_3224,_3266):-table_command(get(_3212/_3214,_3236),_3218,_3238,lub_call(_3236,_3216,_3240,\==(_3236,_3240,cut(1,table_command(set(_3212/_3214,_3240),_3238,_3220,is(_3224,_3222+1,true(_3266))))))).
update_table(_3348/_3350,_3352,_3354,_3354,_3356,_3356,_3366):-call(_3366).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_update_table_6__1(mach); }
public static Operation exec_pred_update_table_6__1(Prolog mach){ mach.FillAlternative(pred_update_table_6::exec_pred_update_table_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s11,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(simple_analyzer.s_get,Data.F(simple_analyzer.s11,var1.Deref(),var2.Deref()),var8) ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var9 ;
local_aregs[3] = Data.F(simple_analyzer.s_lub_call,var8.Deref(),var3.Deref(),var10,Data.F(simple_analyzer.s19,var8.Deref(),var10.Deref(),mach.HC(Data.F(simple_analyzer.s_table_command,Data.F(simple_analyzer.s_set,Data.F(simple_analyzer.s11,var1.Deref(),var2.Deref()),var10.Deref()),var9.Deref(),var5.Deref(),Data.F(simple_analyzer.s_is,var7.Deref(),Data.F(simple_analyzer.s6,var6.Deref(),simple_analyzer.posint1),Data.F(simple_analyzer.s_true,continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_table_command_3::exec_static ;}
public static Operation exec_pred_update_table_6__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s11,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_create_new_call_9 extends Code {

/*

create_new_call(_3390,_3392,_3394,_3396,_3398,_3400,_3402,_3404,_3406,_3414):-smallerthan(_3392,_3390,cut(1,_3414)).
create_new_call(_3458,_3460,_3462,_3464,_3466,_3468,_3470,_3472,_3474,_3504):-smallerorequal(_3458,_3460,cut(1,arg(_3458,_3472,_3476,arg(_3458,_3474,_3478,ground_flag(_3476,_3462,_3480,membership_flag(_3476,_3464,_3482,membership_flag(_3476,_3466,_3484,membership_flag(_3476,_3468,_3486,membership_flag(_3476,_3470,_3488,create_argument(_3480,_3482,_3484,_3486,_3488,_3478,is(_3496,_3458+1,create_new_call(_3496,_3460,_3462,_3464,_3466,_3468,_3470,_3472,_3474,_3504)))))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_create_new_call_9__1(mach); }
public static Operation exec_pred_create_new_call_9__1(Prolog mach){ mach.FillAlternative(pred_create_new_call_9::exec_pred_create_new_call_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var9,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_create_new_call_9__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var17 = Data.V(mach) ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var9,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(Data.F(simple_analyzer.s_arg,var1.Deref(),var8.Deref(),var10,Data.F(simple_analyzer.s_arg,var1.Deref(),var9.Deref(),var11,Data.F(simple_analyzer.s_ground_flag,var10.Deref(),var3.Deref(),var12,Data.F(simple_analyzer.s_membership_flag,var10.Deref(),var4.Deref(),var13,Data.F(simple_analyzer.s_membership_flag,var10.Deref(),var5.Deref(),var14,Data.F(simple_analyzer.s_membership_flag,var10.Deref(),var6.Deref(),var15,Data.F(simple_analyzer.s_membership_flag,var10.Deref(),var7.Deref(),var16,Data.F(simple_analyzer.s_create_argument,var12.Deref(),var13.Deref(),var14.Deref(),var15.Deref(),var16.Deref(),var11.Deref(),Data.F(simple_analyzer.s_is,var17,Data.F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),Data.F(simple_analyzer.s_create_new_call,var17.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
}


public static class pred_lub_3 extends Code {

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

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lub_3__1(mach); }
public static Operation exec_pred_lub_3__1(Prolog mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_unknown,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lub_3__2(Prolog mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_unknown,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lub_3__3(Prolog mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lub_3__4(Prolog mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lub_3__5(Prolog mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lub_3__6(Prolog mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s_ground,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_ground,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_ground,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lub_3__7(Prolog mach){ mach.FillAlternative(pred_lub_3::exec_pred_lub_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_ground,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lub_3__8(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s_ground,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
}


public static class pred_bottom_1 extends Code {

/*

bottom(unknown,_3920):-call(_3920).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_bottom_1__1(mach); }
public static Operation exec_pred_bottom_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s_unknown,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_create_argument_6 extends Code {

/*

create_argument(yes,_3934,_3936,_3938,_3940,ground,_3948):-cut(1,_3948).
create_argument(no,yes,no,yes,_3978,uninit,_3986):-cut(1,_3986).
create_argument(no,yes,no,_4016,no,uninit,_4024):-cut(1,_4024).
create_argument(no,yes,_4054,no,yes,any,_4062):-cut(1,_4062).
create_argument(no,yes,yes,_4092,_4094,any,_4102):-cut(1,_4102).
create_argument(no,no,_4132,_4134,_4136,any,_4144):-cut(1,_4144).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_create_argument_6__1(mach); }
public static Operation exec_pred_create_argument_6__1(Prolog mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s_ground,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_create_argument_6__2(Prolog mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_create_argument_6__3(Prolog mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_create_argument_6__4(Prolog mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_create_argument_6__5(Prolog mach){ mach.FillAlternative(pred_create_argument_6::exec_pred_create_argument_6__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_create_argument_6__6(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(simple_analyzer.s_any,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
}


public static class pred_lub_call_3 extends Code {

/*

lub_call(_4174,_4176,_4178,_4190):-functor(_4174,_4180,_4182,functor(_4176,_4180,_4182,functor(_4178,_4180,_4182,lub_call(1,_4182,_4174,_4176,_4178,_4190)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lub_call_3__1(mach); }
public static Operation exec_pred_lub_call_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(simple_analyzer.s_functor,var2.Deref(),var4.Deref(),var5.Deref(),Data.F(simple_analyzer.s_functor,var3.Deref(),var4.Deref(),var5.Deref(),Data.F(simple_analyzer.s_lub_call,simple_analyzer.posint1,var5.Deref(),var1.Deref(),var2.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_functor_3::exec_static ;}
}


public static class pred_lub_call_5 extends Code {

/*

lub_call(_4252,_4254,_4256,_4258,_4260,_4268):-smallerthan(_4254,_4252,cut(1,_4268)).
lub_call(_4304,_4306,_4308,_4310,_4312,_4334):-smallerorequal(_4304,_4306,cut(1,arg(_4304,_4308,_4314,arg(_4304,_4310,_4316,arg(_4304,_4312,_4318,lub(_4314,_4316,_4318,is(_4326,_4304+1,lub_call(_4326,_4306,_4308,_4310,_4312,_4334)))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lub_call_5__1(mach); }
public static Operation exec_pred_lub_call_5__1(Prolog mach){ mach.FillAlternative(pred_lub_call_5::exec_pred_lub_call_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_lub_call_5__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(Data.F(simple_analyzer.s_arg,var1.Deref(),var3.Deref(),var6,Data.F(simple_analyzer.s_arg,var1.Deref(),var4.Deref(),var7,Data.F(simple_analyzer.s_arg,var1.Deref(),var5.Deref(),var8,Data.F(simple_analyzer.s_lub,var6.Deref(),var7.Deref(),var8.Deref(),Data.F(simple_analyzer.s_is,var9,Data.F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),Data.F(simple_analyzer.s_lub_call,var9.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
}


public static class pred_bottom_call_2 extends Code {

/*

bottom_call(_4434/_4436,_4438,_4446):-functor(_4438,_4434,_4436,bottom_call(1,_4436,_4438,_4446)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_bottom_call_2__1(mach); }
public static Operation exec_pred_bottom_call_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s11,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_bottom_call,simple_analyzer.posint1,var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_functor_3::exec_static ;}
}


public static class pred_bottom_call_3 extends Code {

/*

bottom_call(_4482,_4484,_4486,_4494):-smallerthan(_4484,_4482,cut(1,_4494)).
bottom_call(_4526,_4528,_4530,_4548):-smallerorequal(_4526,_4528,cut(1,bottom(_4532,arg(_4526,_4530,_4532,is(_4540,_4526+1,bottom_call(_4540,_4528,_4530,_4548)))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_bottom_call_3__1(mach); }
public static Operation exec_pred_bottom_call_3__1(Prolog mach){ mach.FillAlternative(pred_bottom_call_3::exec_pred_bottom_call_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_bottom_call_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(Data.F(simple_analyzer.s_bottom,var4,Data.F(simple_analyzer.s_arg,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(simple_analyzer.s_is,var5,Data.F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),Data.F(simple_analyzer.s_bottom_call,var5.Deref(),var2.Deref(),var3.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
}


public static class pred_lattice_modes_call_3 extends Code {

/*

lattice_modes_call(_4616/_4618,_4626,(_4622:-_4624),_4642):-functor(_4622,_4616,_4618,get(_4626,_4616/_4618,_4634,lattice_modes_call(1,_4618,_4634,_4622,_4624,true,_4642))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lattice_modes_call_3__1(mach); }
public static Operation exec_pred_lattice_modes_call_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s11,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(simple_analyzer.s12,var4,var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_get,var3.Deref(),Data.F(simple_analyzer.s11,var1.Deref(),var2.Deref()),var6,Data.F(simple_analyzer.s_lattice_modes_call,simple_analyzer.posint1,var2.Deref(),var6.Deref(),var4.Deref(),var5.Deref(),simple_analyzer.s_true,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_functor_3::exec_static ;}
}


public static class pred_lattice_modes_call_6 extends Code {

/*

lattice_modes_call(_4696,_4698,_4700,_4702,_4704,_4704,_4712):-smallerthan(_4698,_4696,cut(1,_4712)).
lattice_modes_call(_4750,_4752,_4754,_4756,_4758,_4760,_4782):-smallerorequal(_4750,_4752,cut(1,arg(_4750,_4754,_4762,arg(_4750,_4756,_4764,lattice_modes_arg(_4762,_4764,_4758,_4766,is(_4774,_4750+1,lattice_modes_call(_4774,_4752,_4754,_4756,_4766,_4760,_4782))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lattice_modes_call_6__1(mach); }
public static Operation exec_pred_lattice_modes_call_6__1(Prolog mach){ mach.FillAlternative(pred_lattice_modes_call_6::exec_pred_lattice_modes_call_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_lattice_modes_call_6__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(Data.F(simple_analyzer.s_arg,var1.Deref(),var3.Deref(),var7,Data.F(simple_analyzer.s_arg,var1.Deref(),var4.Deref(),var8,Data.F(simple_analyzer.s_lattice_modes_arg,var7.Deref(),var8.Deref(),var5.Deref(),var9,Data.F(simple_analyzer.s_is,var10,Data.F(simple_analyzer.s6,var1.Deref(),simple_analyzer.posint1),Data.F(simple_analyzer.s_lattice_modes_call,var10.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var9.Deref(),var6.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
}


public static class pred_lattice_modes_arg_4 extends Code {

/*

lattice_modes_arg(uninit,_4878,(uninit(_4878),_4884),_4884,_4892):-cut(1,_4892).
lattice_modes_arg(ground,_4920,(ground(_4920),_4926),_4926,_4934):-cut(1,_4934).
lattice_modes_arg(_4960,_4962,_4964,_4964,_4974):-call(_4974).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lattice_modes_arg_4__1(mach); }
public static Operation exec_pred_lattice_modes_arg_4__1(Prolog mach){ mach.FillAlternative(pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_uninit,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_uninit,var1.Deref()),var2),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lattice_modes_arg_4__2(Prolog mach){ mach.FillAlternative(pred_lattice_modes_arg_4::exec_pred_lattice_modes_arg_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_ground,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_ground,var1.Deref()),var2),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lattice_modes_arg_4__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_get_3 extends Code {

/*

get(node(_4996,_4998,_5000,_5002),_5004,_5006,_5014):-get(_4996,_4998,_5000,_5002,_5004,_5006,_5014).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_get_3__1(mach); }
public static Operation exec_pred_get_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_node,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_get_6::exec_static ;}
}


public static class pred_get_6 extends Code {

/*

get(_5048,_5050,_5052,_5054,_5056,_5050,_5064):-unify(_5048,_5056,cut(1,_5064)).
get(_5102,_5104,_5106,_5108,_5110,_5112,_5122):-compare(_5114,_5110,_5102,get(_5114,_5110,_5112,_5106,_5108,_5122)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_get_6__1(mach); }
public static Operation exec_pred_get_6__1(Prolog mach){ mach.FillAlternative(pred_get_6::exec_pred_get_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_unify_2::exec_static ;}
public static Operation exec_pred_get_6__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_get,var7.Deref(),var5.Deref(),var6.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_get_5 extends Code {

/*

get(<,_5170,_5172,_5174,_5176,_5184):-get(_5174,_5170,_5172,_5184).
get(>,_5216,_5218,_5220,_5222,_5230):-get(_5222,_5216,_5218,_5230).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_get_5__1(mach); }
public static Operation exec_pred_get_5__1(Prolog mach){ mach.FillAlternative(pred_get_5::exec_pred_get_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_get_3::exec_static ;}
public static Operation exec_pred_get_5__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_get_3::exec_static ;}
}


public static class pred_set_4 extends Code {

/*

set(leaf,_5264,_5266,node(_5264,_5266,leaf,leaf),_5280):-call(_5280).
set(node(_5302,_5304,_5306,_5308),_5320,_5322,node(_5302,_5314,_5316,_5318),_5332):-compare(_5324,_5320,_5302,set_2(_5324,_5320,_5322,_5304,_5306,_5308,_5314,_5316,_5318,_5332)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_set_4__1(mach); }
public static Operation exec_pred_set_4__1(Prolog mach){ mach.FillAlternative(pred_set_4::exec_pred_set_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s_leaf,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(simple_analyzer.s_node,var1.Deref(),var2.Deref(),simple_analyzer.s_leaf,simple_analyzer.s_leaf),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_set_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_node,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(simple_analyzer.s_node,var1.Deref(),var7,var8,var9),mach))) return Prolog.Fail0 ;
local_aregs[0] = var10 ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_set_2,var10.Deref(),var5.Deref(),var6.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var7.Deref(),var8.Deref(),var9.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_set_2_9 extends Code {

/*

set_2(<,_5384,_5386,_5388,_5390,_5392,_5388,_5394,_5392,_5402):-set(_5390,_5384,_5386,_5394,_5402).
set_2(=,_5444,_5446,_5448,_5450,_5452,_5446,_5450,_5452,_5462):-call(_5462).
set_2(>,_5492,_5494,_5496,_5498,_5500,_5496,_5498,_5502,_5510):-set(_5500,_5492,_5494,_5502,_5510).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_set_2_9__1(mach); }
public static Operation exec_pred_set_2_9__1(Prolog mach){ mach.FillAlternative(pred_set_2_9::exec_pred_set_2_9__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var5.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_set_4::exec_static ;}
public static Operation exec_pred_set_2_9__2(Prolog mach){ mach.FillAlternative(pred_set_2_9::exec_pred_set_2_9__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var5.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_set_2_9__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[9] ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var5.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var6.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_set_4::exec_static ;}
}


public static class pred_seal_1 extends Code {

/*

seal(leaf,_5560):-call(_5560).
seal(node(_5576,_5578,_5580,_5582),_5590):-seal(_5580,seal(_5582,_5590)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_seal_1__1(mach); }
public static Operation exec_pred_seal_1__1(Prolog mach){ mach.FillAlternative(pred_seal_1::exec_pred_seal_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(simple_analyzer.s_leaf,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_seal_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_node,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(simple_analyzer.s_seal,var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_seal_1::exec_static ;}
}


public static class pred_membership_flag_3 extends Code {

/*

membership_flag(_5616,_5618,yes,_5626):-inv(_5616,_5618,cut(1,_5626)).
membership_flag(_5658,_5660,no,_5670):-call(_5670).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_membership_flag_3__1(mach); }
public static Operation exec_pred_membership_flag_3__1(Prolog mach){ mach.FillAlternative(pred_membership_flag_3::exec_pred_membership_flag_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_inv_2::exec_static ;}
public static Operation exec_pred_membership_flag_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_ground_flag_3 extends Code {

/*

ground_flag(_5688,_5690,yes,_5700):-varset(_5688,_5692,subsetv(_5692,_5690,cut(1,_5700))).
ground_flag(_5740,_5742,no,_5752):-call(_5752).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_ground_flag_3__1(mach); }
public static Operation exec_pred_ground_flag_3__1(Prolog mach){ mach.FillAlternative(pred_ground_flag_3::exec_pred_ground_flag_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_yes,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = Data.F(simple_analyzer.s_subsetv,var3.Deref(),var2.Deref(),mach.HC(continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_varset_2::exec_static ;}
public static Operation exec_pred_ground_flag_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(simple_analyzer.s_no,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_get_entry_modes_4 extends Code {

/*

get_entry_modes(_5770,_5772,_5774,_5776,_5790):-functor(_5772,_5778,_5780,get_entry_modes(_5770,1,_5780,_5772,_5774,_5782,sort(_5782,_5776,_5790))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_get_entry_modes_4__1(mach); }
public static Operation exec_pred_get_entry_modes_4__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = var6 ;
local_aregs[3] = Data.F(simple_analyzer.s_get_entry_modes,var1.Deref(),simple_analyzer.posint1,var6.Deref(),var2.Deref(),var3.Deref(),var7,Data.F(simple_analyzer.s_sort,var7.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation)pred_functor_3::exec_static ;}
}


public static class pred_get_entry_modes_6 extends Code {

/*

get_entry_modes(_5844,_5846,_5848,_5850,_5852,[],_5860):-smallerthan(_5848,_5846,cut(1,_5860)).
get_entry_modes(_5904,_5906,_5908,_5910,_5912,[_5900|_5902],_5928):-smallerorequal(_5906,_5908,arg(_5906,_5912,_5904,cut(1,arg(_5906,_5910,_5900,is(_5920,_5906+1,get_entry_modes(_5904,_5920,_5908,_5910,_5912,_5902,_5928)))))).
get_entry_modes(_6010,_6012,_6014,_6016,_6018,_6020,_6036):-smallerorequal(_6012,_6014,cut(1,is(_6028,_6012+1,get_entry_modes(_6010,_6028,_6014,_6016,_6018,_6020,_6036)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_get_entry_modes_6__1(mach); }
public static Operation exec_pred_get_entry_modes_6__1(Prolog mach){ mach.FillAlternative(pred_get_entry_modes_6::exec_pred_get_entry_modes_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_get_entry_modes_6__2(Prolog mach){ mach.FillAlternative(pred_get_entry_modes_6::exec_pred_get_entry_modes_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(simple_analyzer.s10,var6,var7),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(simple_analyzer.s_arg,var2.Deref(),var5.Deref(),var1.Deref(),mach.HC(Data.F(simple_analyzer.s_arg,var2.Deref(),var4.Deref(),var6.Deref(),Data.F(simple_analyzer.s_is,var8,Data.F(simple_analyzer.s6,var2.Deref(),simple_analyzer.posint1),Data.F(simple_analyzer.s_get_entry_modes,var1.Deref(),var8.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var7.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_get_entry_modes_6__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(simple_analyzer.s_is,var7,Data.F(simple_analyzer.s6,var2.Deref(),simple_analyzer.posint1),Data.F(simple_analyzer.s_get_entry_modes,var1.Deref(),var7.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
}


public static class pred_var_args_2 extends Code {

/*

var_args(_6098,_6100,_6114):-functor(_6098,_6102,_6104,filter_vars(_6104,_6098,_6106,sort(_6106,_6100,_6114))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_var_args_2__1(mach); }
public static Operation exec_pred_var_args_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(simple_analyzer.s_filter_vars,var4.Deref(),var1.Deref(),var5,Data.F(simple_analyzer.s_sort,var5.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_functor_3::exec_static ;}
}


public static class pred_filter_vars_3 extends Code {

/*

filter_vars(_6158,_6160,_6162,_6170):-filter_vars(_6158,_6160,_6162,[],_6170).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_filter_vars_3__1(mach); }
public static Operation exec_pred_filter_vars_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = Const.Nil ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_filter_vars_4::exec_static ;}
}


public static class pred_$002D$002D$003E_2 extends Code {

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

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_$002D$002D$003E_2__1(mach); }
public static Operation exec_pred_$002D$002D$003E_2__1(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_vars,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s16,var1.Deref(),simple_analyzer.posint0)),simple_analyzer.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__2(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_vars,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s18,var1.Deref(),simple_analyzer.posint0)),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_arg,var1.Deref(),var2.Deref(),var3)),Data.F(simple_analyzer.s_filter_vars_arg,var1.Deref(),var2.Deref(),var3.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__3(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_vars_arg,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_var,var3.Deref())),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s10,var3.Deref(),Const.Nil),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_is,var4,Data.F(simple_analyzer.s8,var1.Deref(),simple_analyzer.posint1))),Data.F(simple_analyzer.s_filter_vars,var4.Deref(),var2.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__4(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_vars_arg,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_nonvar,var3.Deref())),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_is,var4,Data.F(simple_analyzer.s8,var1.Deref(),simple_analyzer.posint1))),Data.F(simple_analyzer.s_filter_vars,var4.Deref(),var2.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__5(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_dups,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(simple_analyzer.s1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__6(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_dups,Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var1,var2),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var3,var4),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var5,var6),var7)))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s17,var1.Deref(),var3.Deref()),Data.F(simple_analyzer.s17,var3.Deref(),var5.Deref()))),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s_filter_dups,Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var3.Deref(),var8),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var5.Deref(),var9),var7.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__7(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_dups,Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var1,var2),Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var3,var4),var5))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s17,var1.Deref(),var3.Deref())),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s10,var1.Deref(),Const.Nil),Data.F(simple_analyzer.s_filter_dups,var5.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__8(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_filter_dups,Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var1,var2),var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s_filter_dups,var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__9(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_varbag,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_var,var1.Deref())),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s10,var1.Deref(),Const.Nil))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__10(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_varbag,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_nonvar,var1.Deref()),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s_functor,var1.Deref(),var2,var3)))),Data.F(simple_analyzer.s_varbag,var1.Deref(),simple_analyzer.posint1,var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__11(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_varbag,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s18,var2.Deref(),var3.Deref())),simple_analyzer.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__12(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_varbag,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s16,var2.Deref(),var3.Deref())),Data.F(simple_analyzer.s7,simple_analyzer.s1,Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_arg,var2.Deref(),var1.Deref(),var4)),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s_varbag,var4.Deref()),Data.F(simple_analyzer.s7,Data.F(simple_analyzer.s111,Data.F(simple_analyzer.s_is,var5,Data.F(simple_analyzer.s6,var2.Deref(),simple_analyzer.posint1))),Data.F(simple_analyzer.s_varbag,var1.Deref(),var5.Deref(),var3.Deref())))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_goal_dupset_2 extends Code {

/*

goal_dupset(_6496,_6498,_6508):-goal_dupset_varbag(_6496,_6498,_6500,_6508).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_goal_dupset_2__1(mach); }
public static Operation exec_pred_goal_dupset_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_goal_dupset_varbag_3::exec_static ;}
}


public static class pred_goal_dupset_varset_3 extends Code {

/*

goal_dupset_varset(_6534,_6536,_6538,_6548):-goal_dupset_varbag(_6534,_6536,_6540,sort(_6540,_6538,_6548)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_goal_dupset_varset_3__1(mach); }
public static Operation exec_pred_goal_dupset_varset_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(simple_analyzer.s_sort,var4.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_goal_dupset_varbag_3::exec_static ;}
}


public static class pred_goal_dupset_varbag_3 extends Code {

/*

goal_dupset_varbag(_6584,_6586,_6588,_6600):-varbag(_6584,_6588,make_key(_6588,_6590,keysort(_6590,_6592,filter_dups(_6592,_6586,_6600)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_goal_dupset_varbag_3__1(mach); }
public static Operation exec_pred_goal_dupset_varbag_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(simple_analyzer.s_make_key,var3.Deref(),var4,Data.F(simple_analyzer.s_keysort,var4.Deref(),var5,Data.F(simple_analyzer.s_filter_dups,var5.Deref(),var2.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_varbag_2::exec_static ;}
}


public static class pred_make_key_2 extends Code {

/*

make_key([],[],_6658):-call(_6658).
make_key([_6676|_6678],[_6676-dummy|_6690],_6698):-make_key(_6678,_6690,_6698).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_make_key_2__1(mach); }
public static Operation exec_pred_make_key_2__1(Prolog mach){ mach.FillAlternative(pred_make_key_2::exec_pred_make_key_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_make_key_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s10,Data.F(simple_analyzer.s8,var1.Deref(),simple_analyzer.s_dummy),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_make_key_2::exec_static ;}
}


public static class pred_filter_dups_2 extends Code {

/*

filter_dups(_6722,_6724,_6732):-filter_dups(_6722,_6724,[],_6732).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_filter_dups_2__1(mach); }
public static Operation exec_pred_filter_dups_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Const.Nil ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_filter_dups_3::exec_static ;}
}


public static class pred_set_command_3 extends Code {

/*

set_command(sub(_7054),_7056,_7058,_7072):-diffv(_7056,[_7054],_7058,_7072).
set_command(add(_7102),_7104,_7106,_7114):-includev(_7102,_7104,_7106,_7114).
set_command(sub_set(_7144),_7146,_7148,_7156):-diffv(_7146,_7144,_7148,_7156).
set_command(add_set(_7186),_7188,_7190,_7198):-unionv(_7186,_7188,_7190,_7198).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_set_command_3__1(mach); }
public static Operation exec_pred_set_command_3__1(Prolog mach){ mach.FillAlternative(pred_set_command_3::exec_pred_set_command_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_sub,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = Data.F(simple_analyzer.s10,var1.Deref(),Const.Nil) ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_diffv_3::exec_static ;}
public static Operation exec_pred_set_command_3__2(Prolog mach){ mach.FillAlternative(pred_set_command_3::exec_pred_set_command_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_add,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_includev_3::exec_static ;}
public static Operation exec_pred_set_command_3__3(Prolog mach){ mach.FillAlternative(pred_set_command_3::exec_pred_set_command_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_sub_set,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_diffv_3::exec_static ;}
public static Operation exec_pred_set_command_3__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_add_set,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_unionv_3::exec_static ;}
}


public static class pred_table_command_3 extends Code {

/*

table_command(get(_7228,_7230),_7232,_7232,_7240):-get(_7232,_7228,_7230,_7240).
table_command(set(_7270,_7272),_7274,_7276,_7284):-set(_7274,_7270,_7272,_7276,_7284).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_table_command_3__1(mach); }
public static Operation exec_pred_table_command_3__1(Prolog mach){ mach.FillAlternative(pred_table_command_3::exec_pred_table_command_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_get,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_get_3::exec_static ;}
public static Operation exec_pred_table_command_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s_set,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_set_4::exec_static ;}
}


public static class pred_inv_2 extends Code {

/*

inv(_7320,[_7316|_7318],_7330):-compare(_7322,_7320,_7316,inv_2(_7322,_7320,_7318,_7330)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_inv_2__1(mach); }
public static Operation exec_pred_inv_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s10,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_inv_2,var4.Deref(),var1.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_inv_2_3 extends Code {

/*

inv_2(=,_7366,_7368,_7378):-call(_7378).
inv_2(>,_7396,_7398,_7406):-inv(_7396,_7398,_7406).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_inv_2_3__1(mach); }
public static Operation exec_pred_inv_2_3__1(Prolog mach){ mach.FillAlternative(pred_inv_2_3::exec_pred_inv_2_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_inv_2_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_inv_2::exec_static ;}
}


public static class pred_intersectv_3 extends Code {

/*

intersectv([],_7432,[],_7442):-call(_7442).
intersectv([_7462|_7464],_7466,_7468,_7476):-intersectv_2(_7466,_7462,_7464,_7468,_7476).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_intersectv_3__1(mach); }
public static Operation exec_pred_intersectv_3__1(Prolog mach){ mach.FillAlternative(pred_intersectv_3::exec_pred_intersectv_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_intersectv_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_intersectv_2_4::exec_static ;}
}


public static class pred_intersectv_2_4 extends Code {

/*

intersectv_2([],_7506,_7508,[],_7518):-call(_7518).
intersectv_2([_7540|_7542],_7544,_7546,_7548,_7558):-compare(_7550,_7544,_7540,intersectv_3(_7550,_7544,_7546,_7540,_7542,_7548,_7558)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_intersectv_2_4__1(mach); }
public static Operation exec_pred_intersectv_2_4__1(Prolog mach){ mach.FillAlternative(pred_intersectv_2_4::exec_pred_intersectv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_intersectv_2_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_intersectv_3,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_intersectv_3_6 extends Code {

/*

intersectv_3(<,_7604,_7606,_7608,_7610,_7612,_7620):-intersectv_2(_7606,_7608,_7610,_7612,_7620).
intersectv_3(=,_7658,_7662,_7664,_7666,[_7658|_7660],_7674):-intersectv(_7662,_7666,_7660,_7674).
intersectv_3(>,_7708,_7710,_7712,_7714,_7716,_7724):-intersectv_2(_7714,_7708,_7710,_7716,_7724).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_intersectv_3_6__1(mach); }
public static Operation exec_pred_intersectv_3_6__1(Prolog mach){ mach.FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_intersectv_2_4::exec_static ;}
public static Operation exec_pred_intersectv_3_6__2(Prolog mach){ mach.FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(simple_analyzer.s10,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_intersectv_3::exec_static ;}
public static Operation exec_pred_intersectv_3_6__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_intersectv_2_4::exec_static ;}
}


public static class pred_diffv_3 extends Code {

/*

diffv([],_7760,[],_7770):-call(_7770).
diffv([_7790|_7792],_7794,_7796,_7804):-diffv_2(_7794,_7790,_7792,_7796,_7804).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_diffv_3__1(mach); }
public static Operation exec_pred_diffv_3__1(Prolog mach){ mach.FillAlternative(pred_diffv_3::exec_pred_diffv_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_diffv_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_diffv_2_4::exec_static ;}
}


public static class pred_diffv_2_4 extends Code {

/*

diffv_2([],_7836,_7840,[_7836],_7850):-call(_7850).
diffv_2([_7872|_7874],_7876,_7878,_7880,_7890):-compare(_7882,_7876,_7872,diffv_3(_7882,_7876,_7878,_7872,_7874,_7880,_7890)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_diffv_2_4__1(mach); }
public static Operation exec_pred_diffv_2_4__1(Prolog mach){ mach.FillAlternative(pred_diffv_2_4::exec_pred_diffv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(simple_analyzer.s10,var1.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_diffv_2_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_diffv_3,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_diffv_3_6 extends Code {

/*

diffv_3(<,_7938,_7942,_7944,_7946,[_7938|_7940],_7960):-diffv(_7942,[_7944|_7946],_7940,_7960).
diffv_3(=,_7994,_7996,_7998,_8000,_8002,_8010):-diffv(_7996,_8000,_8002,_8010).
diffv_3(>,_8044,_8046,_8048,_8050,_8052,_8060):-diffv_2(_8050,_8044,_8046,_8052,_8060).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_diffv_3_6__1(mach); }
public static Operation exec_pred_diffv_3_6__1(Prolog mach){ mach.FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(simple_analyzer.s10,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = Data.F(simple_analyzer.s10,var3.Deref(),var4.Deref()) ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_diffv_3::exec_static ;}
public static Operation exec_pred_diffv_3_6__2(Prolog mach){ mach.FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_diffv_3::exec_static ;}
public static Operation exec_pred_diffv_3_6__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_diffv_2_4::exec_static ;}
}


public static class pred_unionv_3 extends Code {

/*

unionv([],_8096,_8096,_8106):-call(_8106).
unionv([_8126|_8128],_8130,_8132,_8140):-unionv_2(_8130,_8126,_8128,_8132,_8140).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_unionv_3__1(mach); }
public static Operation exec_pred_unionv_3__1(Prolog mach){ mach.FillAlternative(pred_unionv_3::exec_pred_unionv_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_unionv_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_unionv_2_4::exec_static ;}
}


public static class pred_unionv_2_4 extends Code {

/*

unionv_2([],_8172,_8174,[_8172|_8174],_8184):-call(_8184).
unionv_2([_8206|_8208],_8210,_8212,_8214,_8224):-compare(_8216,_8210,_8206,unionv_3(_8216,_8210,_8212,_8206,_8208,_8214,_8224)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_unionv_2_4__1(mach); }
public static Operation exec_pred_unionv_2_4__1(Prolog mach){ mach.FillAlternative(pred_unionv_2_4::exec_pred_unionv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(simple_analyzer.s10,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_unionv_2_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_unionv_3,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_unionv_3_6 extends Code {

/*

unionv_3(<,_8272,_8276,_8278,_8280,[_8272|_8274],_8288):-unionv_2(_8276,_8278,_8280,_8274,_8288).
unionv_3(=,_8326,_8330,_8332,_8334,[_8326|_8328],_8342):-unionv(_8330,_8334,_8328,_8342).
unionv_3(>,_8382,_8384,_8378,_8386,[_8378|_8380],_8394):-unionv_2(_8386,_8382,_8384,_8380,_8394).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_unionv_3_6__1(mach); }
public static Operation exec_pred_unionv_3_6__1(Prolog mach){ mach.FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(simple_analyzer.s10,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_unionv_2_4::exec_static ;}
public static Operation exec_pred_unionv_3_6__2(Prolog mach){ mach.FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(simple_analyzer.s10,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_unionv_3::exec_static ;}
public static Operation exec_pred_unionv_3_6__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(simple_analyzer.s10,var3.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_unionv_2_4::exec_static ;}
}


public static class pred_includev_3 extends Code {

/*

includev(_8430,_8432,_8434,_8442):-includev_2(_8432,_8430,_8434,_8442).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_includev_3__1(mach); }
public static Operation exec_pred_includev_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_includev_2_3::exec_static ;}
}


public static class pred_includev_2_3 extends Code {

/*

includev_2([],_8472,[_8472],_8484):-call(_8484).
includev_2([_8504|_8506],_8508,_8510,_8520):-compare(_8512,_8508,_8504,includev_3(_8512,_8508,_8504,_8506,_8510,_8520)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_includev_2_3__1(mach); }
public static Operation exec_pred_includev_2_3__1(Prolog mach){ mach.FillAlternative(pred_includev_2_3::exec_pred_includev_2_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(simple_analyzer.s10,var1.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_includev_2_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_includev_3,var5.Deref(),var3.Deref(),var1.Deref(),var2.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_includev_3_5 extends Code {

/*

includev_3(<,_8564,_8570,_8572,[_8564,_8570|_8572],_8582):-call(_8582).
includev_3(=,_8610,_8606,_8608,[_8606|_8608],_8620):-call(_8620).
includev_3(>,_8648,_8644,_8650,[_8644|_8646],_8658):-includev_2(_8650,_8648,_8646,_8658).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_includev_3_5__1(mach); }
public static Operation exec_pred_includev_3_5__1(Prolog mach){ mach.FillAlternative(pred_includev_3_5::exec_pred_includev_3_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s14,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(Data.F(simple_analyzer.s10,var1.Deref(),Data.F(simple_analyzer.s10,var2.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_includev_3_5__2(Prolog mach){ mach.FillAlternative(pred_includev_3_5::exec_pred_includev_3_5__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(Data.F(simple_analyzer.s10,var2.Deref(),var3.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_includev_3_5__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(Data.F(simple_analyzer.s10,var2.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_includev_2_3::exec_static ;}
}


public static class pred_subsetv_2 extends Code {

/*

subsetv([],_8690,_8700):-call(_8700).
subsetv([_8718|_8720],[_8724|_8726],_8736):-compare(_8728,_8718,_8724,subsetv_2(_8728,_8718,_8720,_8726,_8736)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_subsetv_2__1(mach); }
public static Operation exec_pred_subsetv_2__1(Prolog mach){ mach.FillAlternative(pred_subsetv_2::exec_pred_subsetv_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_subsetv_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s10,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(simple_analyzer.s10,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = Data.F(simple_analyzer.s_subsetv_2,var5.Deref(),var1.Deref(),var2.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_compare_3::exec_static ;}
}


public static class pred_subsetv_2_4 extends Code {

/*

subsetv_2(=,_8774,_8776,_8778,_8786):-subsetv(_8776,_8778,_8786).
subsetv_2(>,_8814,_8816,_8818,_8832):-subsetv([_8814|_8816],_8818,_8832).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_subsetv_2_4__1(mach); }
public static Operation exec_pred_subsetv_2_4__1(Prolog mach){ mach.FillAlternative(pred_subsetv_2_4::exec_pred_subsetv_2_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_subsetv_2::exec_static ;}
public static Operation exec_pred_subsetv_2_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(simple_analyzer.s18,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(simple_analyzer.s10,var1.Deref(),var2.Deref()) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_subsetv_2::exec_static ;}
}


public static class pred_varset_2 extends Code {

/*

varset(_8860,_8862,_8872):-varbag(_8860,_8864,sort(_8864,_8862,_8872)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_varset_2__1(mach); }
public static Operation exec_pred_varset_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = Data.F(simple_analyzer.s_sort,var3.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_varbag_2::exec_static ;}
}


public static class pred_varbag_2 extends Code {

/*

varbag(_8904,_8906,_8914):-varbag(_8904,_8906,[],_8914).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_varbag_2__1(mach); }
public static Operation exec_pred_varbag_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Const.Nil ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_varbag_3::exec_static ;}
}


public static class pred_unify_p_1 extends Code {

/*

unify_p(_9226=_9228,_9238):-call(_9238).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_unify_p_1__1(mach); }
public static Operation exec_pred_unify_p_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s15,var1,var2),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_call_p_1 extends Code {

/*

call_p(_9252,_9264):-not(unify_p(_9252),_9264).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_call_p_1__1(mach); }
public static Operation exec_pred_call_p_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(simple_analyzer.s_unify_p,var1.Deref()) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_not_1::exec_static ;}
}


public static class pred_split_unify_3 extends Code {

/*

split_unify(_9286=_9288,_9286,_9288,_9298):-call(_9298).
split_unify(_9318=_9320,_9320,_9318,_9330):-call(_9330).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_split_unify_3__1(mach); }
public static Operation exec_pred_split_unify_3__1(Prolog mach){ mach.FillAlternative(pred_split_unify_3::exec_pred_split_unify_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s15,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_split_unify_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(simple_analyzer.s15,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


