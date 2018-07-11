package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class sdda /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern(" ") ;
final static Const s2 = Data.Intern("*") ;
final static Const s3 = Data.Intern("+") ;
final static Const s4 = Data.Intern(",") ;
final static Const s5 = Data.Intern("-") ;
final static Const s6 = Data.Intern("->") ;
final static Const s7 = Data.Intern(".") ;
final static Const s8 = Data.Intern("/") ;
final static Const s9 = Data.Intern("//") ;
final static Const s10 = Data.Intern(":-") ;
final static Const s11 = Data.Intern("<") ;
final static Const s12 = Data.Intern("=") ;
final static Const s13 = Data.Intern("=..") ;
final static Const s14 = Data.Intern(">=") ;
final static Const s_a = Data.Intern("a") ;
final static Const s_add_to_list = Data.Intern("add_to_list") ;
final static Const s_all_shared = Data.Intern("all_shared") ;
final static Const s_atom = Data.Intern("atom") ;
final static Const s_atomic = Data.Intern("atomic") ;
final static Const s_bind_all = Data.Intern("bind_all") ;
final static Const s_body_exit_mode = Data.Intern("body_exit_mode") ;
final static Const s_build_name = Data.Intern("build_name") ;
final static Const s_built_in = Data.Intern("built_in") ;
final static Const s_c = Data.Intern("c") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_clause_exit_mode = Data.Intern("clause_exit_mode") ;
final static Const s_clause_exit_modes_list = Data.Intern("clause_exit_modes_list") ;
final static Const s_concat = Data.Intern("concat") ;
final static Const s_do_sdda = Data.Intern("do_sdda") ;
final static Const s_dup = Data.Intern("dup") ;
final static Const s_dup_var = Data.Intern("dup_var") ;
final static Const s_entry_exit_modes_list = Data.Intern("entry_exit_modes_list") ;
final static Const s_eqmember = Data.Intern("eqmember") ;
final static Const s_equiv = Data.Intern("equiv") ;
final static Const s_equiv_vars = Data.Intern("equiv_vars") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_g = Data.Intern("g") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_length = Data.Intern("length") ;
final static Const s_look_up_act = Data.Intern("look_up_act") ;
final static Const s_make_name = Data.Intern("make_name") ;
final static Const s_member = Data.Intern("member") ;
final static Const s_mod = Data.Intern("mod") ;
final static Const s_name = Data.Intern("name") ;
final static Const s_name_vars = Data.Intern("name_vars") ;
final static Const s_nl = Data.Intern("nl") ;
final static Const s_nonvar = Data.Intern("nonvar") ;
final static Const s_not = Data.Intern("not") ;
final static Const s_or = Data.Intern("or") ;
final static Const s_proc_exit_mode = Data.Intern("proc_exit_mode") ;
final static Const s_read_procedures = Data.Intern("read_procedures") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_smember = Data.Intern("smember") ;
final static Const s_sumember = Data.Intern("sumember") ;
final static Const s_termequal = Data.Intern("termequal") ;
final static Const s_test = Data.Intern("test") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_umember = Data.Intern("umember") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_var = Data.Intern("var") ;
final static Const s_worst_case = Data.Intern("worst_case") ;
final static Const s_write = Data.Intern("write") ;
final static Const s_write_list2 = Data.Intern("write_list2") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Int posint26 = Data.Number(26L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_do_sdda_4 = PredTable.Register("do_sdda",4, new pred_do_sdda_4());
final static Operation reg_read_procedures_3 = PredTable.Register("read_procedures",3, new pred_read_procedures_3());
final static Operation reg_entry_exit_modes_list_3 = PredTable.Register("entry_exit_modes_list",3, new pred_entry_exit_modes_list_3());
final static Operation reg_proc_exit_mode_6 = PredTable.Register("proc_exit_mode",6, new pred_proc_exit_mode_6());
final static Operation reg_clause_exit_modes_list_6 = PredTable.Register("clause_exit_modes_list",6, new pred_clause_exit_modes_list_6());
final static Operation reg_clause_exit_mode_5 = PredTable.Register("clause_exit_mode",5, new pred_clause_exit_mode_5());
final static Operation reg_body_exit_mode_4 = PredTable.Register("body_exit_mode",4, new pred_body_exit_mode_4());
final static Operation reg_unify_2 = PredTable.Register("unify",2, new pred_unify_2());
final static Operation reg_equiv_2 = PredTable.Register("equiv",2, new pred_equiv_2());
final static Operation reg_equiv_3 = PredTable.Register("equiv",3, new pred_equiv_3());
final static Operation reg_equiv_vars_3 = PredTable.Register("equiv_vars",3, new pred_equiv_vars_3());
final static Operation reg_dup_2 = PredTable.Register("dup",2, new pred_dup_2());
final static Operation reg_dup_3 = PredTable.Register("dup",3, new pred_dup_3());
final static Operation reg_dup_var_3 = PredTable.Register("dup_var",3, new pred_dup_var_3());
final static Operation reg_built_in_3 = PredTable.Register("built_in",3, new pred_built_in_3());
final static Operation reg_worst_case_2 = PredTable.Register("worst_case",2, new pred_worst_case_2());
final static Operation reg_look_up_act_2 = PredTable.Register("look_up_act",2, new pred_look_up_act_2());
final static Operation reg_all_shared_2 = PredTable.Register("all_shared",2, new pred_all_shared_2());
final static Operation reg_bind_all_2 = PredTable.Register("bind_all",2, new pred_bind_all_2());
final static Operation reg_add_to_list_2 = PredTable.Register("add_to_list",2, new pred_add_to_list_2());
final static Operation reg_umember_2 = PredTable.Register("umember",2, new pred_umember_2());
final static Operation reg_sumember_2 = PredTable.Register("sumember",2, new pred_sumember_2());
final static Operation reg_member_2 = PredTable.Register("member",2, new pred_member_2());
final static Operation reg_smember_2 = PredTable.Register("smember",2, new pred_smember_2());
final static Operation reg_eqmember_2 = PredTable.Register("eqmember",2, new pred_eqmember_2());
final static Operation reg_concat_3 = PredTable.Register("concat",3, new pred_concat_3());
final static Operation reg_nl_0 = PredTable.Register("nl",0, new pred_nl_0());
final static Operation reg_write_list2_3 = PredTable.Register("write_list2",3, new pred_write_list2_3());
final static Operation reg_name_vars_3 = PredTable.Register("name_vars",3, new pred_name_vars_3());
final static Operation reg_make_name_2 = PredTable.Register("make_name",2, new pred_make_name_2());
final static Operation reg_build_name_3 = PredTable.Register("build_name",3, new pred_build_name_3());
public static class pred_top_0 extends Code {

/*

top(_5388):-do_sdda(test,_5362,_5364,_5366,_5388).


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
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = sdda.s_test ;
local_aregs[1] = var1 ;
local_aregs[2] = var2 ;
local_aregs[3] = var3 ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_do_sdda_4::exec_static ;}
}


public static class pred_do_sdda_4 extends Code {

/*

do_sdda(_5494,_5496,_5498,_5500,_5568):-read_procedures(_5504,_5496,_5508,entry_exit_modes_list(_5504,_5496,_5508,_5568)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_do_sdda_4__1(mach); }
public static Operation exec_pred_do_sdda_4__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var6 ;
local_aregs[3] = Data.F(sdda.s_entry_exit_modes_list,var5.Deref(),var2.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation)pred_read_procedures_3::exec_static ;}
}


public static class pred_read_procedures_3 extends Code {

/*

read_procedures([[a/2,a(_5774,_5776),a(_5786,_5786)|_5794],[c/3,(c(_5816,_5818,_5820):-a(_5816,_5818))|_5838]|_5844],_5864,[c(_5848,_5850,_5852)|_5858],_5906):-cut(1,_5906).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_read_procedures_3__1(mach); }
public static Operation exec_pred_read_procedures_3__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(sdda.s7,Data.F(sdda.s7,Data.F(sdda.s8,sdda.s_a,sdda.posint2),Data.F(sdda.s7,Data.F(sdda.s_a,var1,var2),Data.F(sdda.s7,Data.F(sdda.s_a,var3,var3.Deref()),var4))),Data.F(sdda.s7,Data.F(sdda.s7,Data.F(sdda.s8,sdda.s_c,sdda.posint3),Data.F(sdda.s7,Data.F(sdda.s10,Data.F(sdda.s_c,var5,var6,var7),Data.F(sdda.s_a,var5.Deref(),var6.Deref())),var8)),var9)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var10,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,Data.F(sdda.s_c,var11,var12,var13),var14),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
}


public static class pred_entry_exit_modes_list_3 extends Code {

/*

entry_exit_modes_list(_5976,_5978,_5980,_6024):-var(_5980,_6024).
entry_exit_modes_list(_6136,_6138,[_6130|_6132],_6244):- =..(_6130,[_6144|_6146],length(_6146,_6158,proc_exit_mode(_6136,_6138,[],_6144/_6158,_6146,_6178,entry_exit_modes_list(_6136,_6138,_6132,_6244)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_entry_exit_modes_list_3__1(mach); }
public static Operation exec_pred_entry_exit_modes_list_3__1(Prolog mach){ mach.FillAlternative(pred_entry_exit_modes_list_3::exec_pred_entry_exit_modes_list_3__2) ;
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
local_aregs[0] = var3.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_entry_exit_modes_list_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg2).Unify(Data.F(sdda.s7,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(sdda.s7,var5,var6) ;
local_aregs[2] = Data.F(sdda.s_length,var6.Deref(),var7,Data.F(sdda.s_proc_exit_mode,var1.Deref(),var2.Deref(),Const.Nil,Data.F(sdda.s8,var5.Deref(),var7.Deref()),var6.Deref(),var8,Data.F(sdda.s_entry_exit_modes_list,var1.Deref(),var2.Deref(),var4.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) sdda.s13.FindProc(2) ;}
}


public static class pred_proc_exit_mode_6 extends Code {

/*

proc_exit_mode(_6590,_6592,_6594,_6584/_6586,_6598,_6600,_6672):-built_in(_6584/_6586,_6598,_6600,_6672).
proc_exit_mode(_6842,_6844,_6846,_6836/_6838,_6850,_6852,_6940):-look_up_act([_6836/_6838,_6850,_6852],_6844,_6940).
proc_exit_mode(_7096,_7098,_7100,_7090/_7092,_7104,_7106,_7298):-umember([_7090/_7092|_7118],_7096,dup(_7118,_7130,clause_exit_modes_list(_7096,_7098,_7100,_7130,_7104,_7144,or((_7144=[]->fail),true,worst_case(_7144,_7106,dup(_7104,_7174,add_to_list([_7090/_7092,_7174,_7106],_7098,_7298))))))).
proc_exit_mode(_7816,_7818,_7820,_7810/_7812,_7824,_7826,_7944):- =..(_7836,[_7810|_7824],all_shared(_7824,_7826,add_to_list([_7810/_7812,_7824,_7826],_7818,_7944))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_proc_exit_mode_6__1(mach); }
public static Operation exec_pred_proc_exit_mode_6__1(Prolog mach){ mach.FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__2) ;
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
if (!( (areg3).Unify(Data.F(sdda.s8,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(sdda.s8,var4.Deref(),var5.Deref()) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = var7.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_built_in_3::exec_static ;}
public static Operation exec_pred_proc_exit_mode_6__2(Prolog mach){ mach.FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__3) ;
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
if (!( (areg3).Unify(Data.F(sdda.s8,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(sdda.s7,Data.F(sdda.s8,var4.Deref(),var5.Deref()),Data.F(sdda.s7,var6.Deref(),Data.F(sdda.s7,var7.Deref(),Const.Nil))) ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_look_up_act_2::exec_static ;}
public static Operation exec_pred_proc_exit_mode_6__3(Prolog mach){ mach.FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
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
if (!( (areg3).Unify(Data.F(sdda.s8,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(sdda.s7,Data.F(sdda.s8,var4.Deref(),var5.Deref()),var8) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(sdda.s_dup,var8.Deref(),var9,Data.F(sdda.s_clause_exit_modes_list,var1.Deref(),var2.Deref(),var3.Deref(),var9.Deref(),var6.Deref(),var10,Data.F(sdda.s_or,Data.F(sdda.s6,Data.F(sdda.s12,var10.Deref(),Const.Nil),sdda.s_fail),sdda.s_true,Data.F(sdda.s_worst_case,var10.Deref(),var7.Deref(),Data.F(sdda.s_dup,var6.Deref(),var11,Data.F(sdda.s_add_to_list,Data.F(sdda.s7,Data.F(sdda.s8,var4.Deref(),var5.Deref()),Data.F(sdda.s7,var11.Deref(),Data.F(sdda.s7,var7.Deref(),Const.Nil))),var2.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_umember_2::exec_static ;}
public static Operation exec_pred_proc_exit_mode_6__4(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg3).Unify(Data.F(sdda.s8,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = var8 ;
local_aregs[1] = Data.F(sdda.s7,var4.Deref(),var6.Deref()) ;
local_aregs[2] = Data.F(sdda.s_all_shared,var6.Deref(),var7.Deref(),Data.F(sdda.s_add_to_list,Data.F(sdda.s7,Data.F(sdda.s8,var4.Deref(),var5.Deref()),Data.F(sdda.s7,var6.Deref(),Data.F(sdda.s7,var7.Deref(),Const.Nil))),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation) sdda.s13.FindProc(2) ;}
}


public static class pred_clause_exit_modes_list_6 extends Code {

/*

clause_exit_modes_list(_8194,_8196,_8198,_8200,_8202,[],_8272):-var(_8200,cut(1,_8272)).
clause_exit_modes_list(_8426,_8428,_8430,[_8420|_8422],_8434,_8436,_8532):-eqmember([_8420,_8434],_8430,clause_exit_modes_list(_8426,_8428,_8430,_8422,_8434,_8436,_8532)).
clause_exit_modes_list(_8806,_8808,_8810,[_8794|_8796],_8814,[_8800|_8802],_8936):-dup(_8814,_8800,clause_exit_mode(_8806,_8808,[[_8794,_8814]|_8810],_8794,_8800,clause_exit_modes_list(_8806,_8808,_8810,_8796,_8814,_8802,_8936))).
clause_exit_modes_list(_9296,_9298,_9300,[_9290|_9292],_9304,_9306,_9378):-clause_exit_modes_list(_9296,_9298,_9300,_9292,_9304,_9306,_9378).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_clause_exit_modes_list_6__1(mach); }
public static Operation exec_pred_clause_exit_modes_list_6__1(Prolog mach){ mach.FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__2) ;
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
local_aregs[0] = var4.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_clause_exit_modes_list_6__2(Prolog mach){ mach.FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__3) ;
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
if (!( (areg3).Unify(Data.F(sdda.s7,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(sdda.s7,var4.Deref(),Data.F(sdda.s7,var6.Deref(),Const.Nil)) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(sdda.s_clause_exit_modes_list,var1.Deref(),var2.Deref(),var3.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_eqmember_2::exec_static ;}
public static Operation exec_pred_clause_exit_modes_list_6__3(Prolog mach){ mach.FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__4) ;
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
if (!( (areg3).Unify(Data.F(sdda.s7,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(sdda.s7,var7,var8),mach))) return Prolog.Fail0 ;
local_aregs[0] = var6.Deref() ;
local_aregs[1] = var7.Deref() ;
local_aregs[2] = Data.F(sdda.s_clause_exit_mode,var1.Deref(),var2.Deref(),Data.F(sdda.s7,Data.F(sdda.s7,var4.Deref(),Data.F(sdda.s7,var6.Deref(),Const.Nil)),var3.Deref()),var4.Deref(),var7.Deref(),Data.F(sdda.s_clause_exit_modes_list,var1.Deref(),var2.Deref(),var3.Deref(),var5.Deref(),var6.Deref(),var8.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_dup_2::exec_static ;}
public static Operation exec_pred_clause_exit_modes_list_6__4(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg3).Unify(Data.F(sdda.s7,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = var6.Deref() ;
local_aregs[5] = var7.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_clause_exit_modes_list_6::exec_static ;}
}


public static class pred_clause_exit_mode_5 extends Code {

/*

clause_exit_mode(_9590,_9592,_9594,_9596,_9598,_9732):-or(_9596=(_9602:-_9604),(_9596=_9602,_9604=true),=..(_9602,[_9638|_9640],unify(_9640,_9598,body_exit_mode(_9590,_9592,_9594,_9604,_9732)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_clause_exit_mode_5__1(mach); }
public static Operation exec_pred_clause_exit_mode_5__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = Data.F(sdda.s12,var4.Deref(),Data.F(sdda.s10,var6,var7)) ;
local_aregs[1] = Data.F(sdda.s4,Data.F(sdda.s12,var4.Deref(),var6.Deref()),Data.F(sdda.s12,var7.Deref(),sdda.s_true)) ;
local_aregs[2] = Data.F(sdda.s13,var6.Deref(),Data.F(sdda.s7,var8,var9),Data.F(sdda.s_unify,var9.Deref(),var5.Deref(),Data.F(sdda.s_body_exit_mode,var1.Deref(),var2.Deref(),var3.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_or_2::exec_static ;}
}


public static class pred_body_exit_mode_4 extends Code {

/*

body_exit_mode(_10076,_10078,_10080,(_10070,_10072),_10154):-body_exit_mode(_10076,_10078,_10080,_10070,body_exit_mode(_10076,_10078,_10080,_10072,_10154)).
body_exit_mode(_10412,_10414,_10416,_10418,_10528):-functor(_10418,_10424,_10426,=..(_10418,[_10424|_10432],proc_exit_mode(_10412,_10414,_10416,_10424/_10426,_10432,_10458,unify(_10432,_10458,_10528)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_body_exit_mode_4__1(mach); }
public static Operation exec_pred_body_exit_mode_4__1(Prolog mach){ mach.FillAlternative(pred_body_exit_mode_4::exec_pred_body_exit_mode_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
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
if (!( (areg3).Unify(Data.F(sdda.s4,var4,var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = Data.F(sdda.s_body_exit_mode,var1.Deref(),var2.Deref(),var3.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_body_exit_mode_4::exec_static ;}
public static Operation exec_pred_body_exit_mode_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
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
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = var6 ;
local_aregs[3] = Data.F(sdda.s13,var4.Deref(),Data.F(sdda.s7,var5.Deref(),var7),Data.F(sdda.s_proc_exit_mode,var1.Deref(),var2.Deref(),var3.Deref(),Data.F(sdda.s8,var5.Deref(),var6.Deref()),var7.Deref(),var8,Data.F(sdda.s_unify,var7.Deref(),var8.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation) sdda.s_functor.FindProc(3) ;}
}


public static class pred_unify_2 extends Code {

/*

unify(_10900,_10900,_10936):-cut(1,_10936).
unify(_11034,g,_11096):-atomic(_11034,cut(1,not(_11034=[],_11096))).
unify(g,_11272,_11332):-atomic(_11272,cut(1,not(_11272=[],_11332))).
unify([_11506|_11508],[_11512|_11514],_11578):-cut(1,unify(_11506,_11512,unify(_11508,_11514,_11578))).
unify(_11776,_11778,_11854):- =..(_11776,[_11782|_11784],=..(_11778,[_11782|_11796],unify(_11784,_11796,_11854))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_unify_2__1(mach); }
public static Operation exec_pred_unify_2__1(Prolog mach){ mach.FillAlternative(pred_unify_2::exec_pred_unify_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_unify_2__2(Prolog mach){ mach.FillAlternative(pred_unify_2::exec_pred_unify_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(sdda.s_g,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_not,Data.F(sdda.s12,var1.Deref(),Const.Nil),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_atomic.FindProc(1) ;}
public static Operation exec_pred_unify_2__3(Prolog mach){ mach.FillAlternative(pred_unify_2::exec_pred_unify_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(sdda.s_g,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_not,Data.F(sdda.s12,var1.Deref(),Const.Nil),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_atomic.FindProc(1) ;}
public static Operation exec_pred_unify_2__4(Prolog mach){ mach.FillAlternative(pred_unify_2::exec_pred_unify_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var3,var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(sdda.s_unify,var1.Deref(),var3.Deref(),Data.F(sdda.s_unify,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_unify_2__5(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = Data.F(sdda.s7,var3,var4) ;
local_aregs[2] = Data.F(sdda.s13,var2.Deref(),Data.F(sdda.s7,var3.Deref(),var5),Data.F(sdda.s_unify,var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) sdda.s13.FindProc(2) ;}
}


public static class pred_equiv_2 extends Code {

/*

equiv(_12096,_12098,_12140):-equiv(_12096,_12098,_12106,_12140).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_equiv_2__1(mach); }
public static Operation exec_pred_equiv_2__1(Prolog mach){ mach.RemoveChoice() ;
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
return (Operation)pred_equiv_3::exec_static ;}
}


public static class pred_equiv_3 extends Code {

/*

equiv(_12302,_12304,_12306,_12358):-termequal(_12302,_12304,cut(1,_12358)).
equiv(g,_12534,_12536,_12602):-atomic(_12534,cut(1,not(_12534=[],_12602))).
equiv(_12796,g,_12800,_12866):-atomic(_12796,cut(1,not(_12796=[],_12866))).
equiv(_13060,_13062,_13064,_13138):-var(_13060,cut(1,var(_13062,equiv_vars(_13060,_13062,_13064,_13138)))).
equiv(_13392,_13394,_13396,_13470):-var(_13394,cut(1,var(_13392,equiv_vars(_13392,_13394,_13396,_13470)))).
equiv([_13724|_13726],[_13730|_13732],_13740,_13808):-cut(1,equiv(_13724,_13730,_13740,equiv(_13726,_13732,_13740,_13808))).
equiv(_14054,_14056,_14058,_14142):- =..(_14054,[_14062|_14064],=..(_14056,[_14062|_14076],equiv(_14064,_14076,_14058,_14142))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_equiv_3__1(mach); }
public static Operation exec_pred_equiv_3__1(Prolog mach){ mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__2) ;
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
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_equiv_3__2(Prolog mach){ mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(sdda.s_g,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_not,Data.F(sdda.s12,var1.Deref(),Const.Nil),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_atomic.FindProc(1) ;}
public static Operation exec_pred_equiv_3__3(Prolog mach){ mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(sdda.s_g,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_not,Data.F(sdda.s12,var1.Deref(),Const.Nil),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_atomic.FindProc(1) ;}
public static Operation exec_pred_equiv_3__4(Prolog mach){ mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__5) ;
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
local_aregs[1] = mach.HC(Data.F(sdda.s_var,var2.Deref(),Data.F(sdda.s_equiv_vars,var1.Deref(),var2.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_equiv_3__5(Prolog mach){ mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__6) ;
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
local_aregs[1] = mach.HC(Data.F(sdda.s_var,var1.Deref(),Data.F(sdda.s_equiv_vars,var1.Deref(),var2.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_equiv_3__6(Prolog mach){ mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__7) ;
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
if (!( (areg0).Unify(Data.F(sdda.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(sdda.s_equiv,var1.Deref(),var3.Deref(),var5.Deref(),Data.F(sdda.s_equiv,var2.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equiv_3__7(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = Data.F(sdda.s7,var4,var5) ;
local_aregs[2] = Data.F(sdda.s13,var2.Deref(),Data.F(sdda.s7,var4.Deref(),var6),Data.F(sdda.s_equiv,var5.Deref(),var6.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) sdda.s13.FindProc(2) ;}
}


public static class pred_equiv_vars_3 extends Code {

/*

equiv_vars(_14418,_14420,_14422,_14502):-var(_14422,cut(1,unify([[_14418,_14420]|_14444],_14422,_14502))).
equiv_vars(_14736,_14738,[[_14718,_14724]|_14732],_14804):-termequal(_14736,_14718,cut(1,termequal(_14738,_14724,_14804))).
equiv_vars(_15058,_15060,[[_15040,_15046]|_15054],_15126):-termequal(_15060,_15046,cut(1,termequal(_15058,_15040,_15126))).
equiv_vars(_15368,_15370,[_15362|_15364],_15420):-equiv_vars(_15368,_15370,_15364,_15420).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_equiv_vars_3__1(mach); }
public static Operation exec_pred_equiv_vars_3__1(Prolog mach){ mach.FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__2) ;
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
local_aregs[0] = var3.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_unify,Data.F(sdda.s7,Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),var4),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_equiv_vars_3__2(Prolog mach){ mach.FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__3) ;
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
if (!( (areg2).Unify(Data.F(sdda.s7,Data.F(sdda.s7,var3,Data.F(sdda.s7,var4,Const.Nil)),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(sdda.s_termequal,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_equiv_vars_3__3(Prolog mach){ mach.FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__4) ;
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
if (!( (areg2).Unify(Data.F(sdda.s7,Data.F(sdda.s7,var3,Data.F(sdda.s7,var4,Const.Nil)),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = mach.HC(Data.F(sdda.s_termequal,var1.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_equiv_vars_3__4(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(Data.F(sdda.s7,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_equiv_vars_3::exec_static ;}
}


public static class pred_dup_2 extends Code {

/*

dup(_2730,_2732,_2742):-dup(_2730,_2732,_2734,_2742).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_dup_2__1(mach); }
public static Operation exec_pred_dup_2__1(Prolog mach){ mach.RemoveChoice() ;
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
return (Operation)pred_dup_3::exec_static ;}
}


public static class pred_dup_3 extends Code {

/*

dup(_2768,_2770,_2772,_2780):-var(_2768,cut(1,dup_var(_2768,_2770,_2772,_2780))).
dup(_2820,_2820,_2822,_2830):-atomic(_2820,cut(1,_2830)).
dup([_2862|_2864],[_2868|_2870],_2872,_2880):-cut(1,dup(_2862,_2868,_2872,dup(_2864,_2870,_2872,_2880))).
dup(_2924,_2926,_2928,_2950):- =..(_2924,[_2932|_2934],dup(_2934,_2936,_2928,=..(_2926,[_2932|_2936],_2950))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_dup_3__1(mach); }
public static Operation exec_pred_dup_3__1(Prolog mach){ mach.FillAlternative(pred_dup_3::exec_pred_dup_3__2) ;
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
local_aregs[1] = mach.HC(Data.F(sdda.s_dup_var,var1.Deref(),var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_dup_3__2(Prolog mach){ mach.FillAlternative(pred_dup_3::exec_pred_dup_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_atomic.FindProc(1) ;}
public static Operation exec_pred_dup_3__3(Prolog mach){ mach.FillAlternative(pred_dup_3::exec_pred_dup_3__4) ;
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
if (!( (areg0).Unify(Data.F(sdda.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(sdda.s_dup,var1.Deref(),var3.Deref(),var5.Deref(),Data.F(sdda.s_dup,var2.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_dup_3__4(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = Data.F(sdda.s7,var4,var5) ;
local_aregs[2] = Data.F(sdda.s_dup,var5.Deref(),var6,var3.Deref(),Data.F(sdda.s13,var2.Deref(),Data.F(sdda.s7,var4.Deref(),var6.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) sdda.s13.FindProc(2) ;}
}


public static class pred_dup_var_3 extends Code {

/*

dup_var(_2994,_2996,_2998,_3024):-var(_2998,cut(1,unify([[_2994,_2996]|_3016],_2998,_3024))).
dup_var(_3080,_3070,[[_3064,_3070]|_3078],_3088):-termequal(_3080,_3064,cut(1,_3088)).
dup_var(_3126,_3128,[_3122|_3124],_3136):-dup_var(_3126,_3128,_3124,_3136).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_dup_var_3__1(mach); }
public static Operation exec_pred_dup_var_3__1(Prolog mach){ mach.FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__2) ;
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
local_aregs[0] = var3.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_unify,Data.F(sdda.s7,Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),var4),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_dup_var_3__2(Prolog mach){ mach.FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__3) ;
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
if (!( (areg2).Unify(Data.F(sdda.s7,Data.F(sdda.s7,var3,Data.F(sdda.s7,var2.Deref(),Const.Nil)),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_dup_var_3__3(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(Data.F(sdda.s7,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_dup_var_3::exec_static ;}
}


public static class pred_built_in_3 extends Code {

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

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_built_in_3__1(mach); }
public static Operation exec_pred_built_in_3__1(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s_true,sdda.posint0),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__2(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s_fail,sdda.posint0),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__3(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s12,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,sdda.s_g,Data.F(sdda.s7,sdda.s_g,Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(sdda.s_atomic,var1.Deref()) ;
local_aregs[1] = Data.F(sdda.s_atomic,var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_or_2::exec_static ;}
public static Operation exec_pred_built_in_3__4(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s12,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var1.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__5(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s3,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__6(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s5,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__7(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s2,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__8(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s8,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__9(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s14,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__10(Prolog mach){ mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s11,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Data.F(sdda.s7,var2.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_built_in_3__11(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s8,sdda.s_is,sdda.posint2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1,Data.F(sdda.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,sdda.s_g,Data.F(sdda.s7,var2.Deref(),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_worst_case_2 extends Code {

/*

worst_case([],_3746,_3756):-call(_3756).
worst_case([_3774|_3776],_3778,_3786):-unify(_3774,_3778,worst_case(_3776,_3778,_3786)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_worst_case_2__1(mach); }
public static Operation exec_pred_worst_case_2__1(Prolog mach){ mach.FillAlternative(pred_worst_case_2::exec_pred_worst_case_2__2) ;
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
public static Operation exec_pred_worst_case_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(sdda.s_worst_case,var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_unify_2::exec_static ;}
}


public static class pred_look_up_act_2 extends Code {

/*

look_up_act(_3818,_3820,_3828):-var(_3820,cut(1,fail(_3828))).
look_up_act([_3862/_3864,_3874,_3880],[[_3862/_3864,_3898,_3880]|_3912],_3920):-equiv(_3874,_3898,_3920).
look_up_act([_3946/_3948,_3958,_3964],[_3970|_3972],_4004):-look_up_act([_3946/_3948,_3958,_3964],_3972,_4004).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_look_up_act_2__1(mach); }
public static Operation exec_pred_look_up_act_2__1(Prolog mach){ mach.FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_look_up_act_2__2(Prolog mach){ mach.FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s7,Data.F(sdda.s8,var1,var2),Data.F(sdda.s7,var3,Data.F(sdda.s7,var4,Const.Nil))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,Data.F(sdda.s7,Data.F(sdda.s8,var1.Deref(),var2.Deref()),Data.F(sdda.s7,var5,Data.F(sdda.s7,var4.Deref(),Const.Nil))),var6),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_equiv_2::exec_static ;}
public static Operation exec_pred_look_up_act_2__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s7,Data.F(sdda.s8,var1,var2),Data.F(sdda.s7,var3,Data.F(sdda.s7,var4,Const.Nil))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var5,var6),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(sdda.s7,Data.F(sdda.s8,var1.Deref(),var2.Deref()),Data.F(sdda.s7,var3.Deref(),Data.F(sdda.s7,var4.Deref(),Const.Nil))) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_look_up_act_2::exec_static ;}
}


public static class pred_all_shared_2 extends Code {

/*

all_shared(_4028,_4030,_4044):-unify(_4028,_4032,_4034,bind_all(_4036,_4034,unify(_4028,_4030,_4034,_4044))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_all_shared_2__1(mach); }
public static Operation exec_pred_all_shared_2__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[3] = Data.F(sdda.s_bind_all,var5,var4.Deref(),Data.F(sdda.s_unify,var1.Deref(),var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) sdda.s_unify.FindProc(3) ;}
}


public static class pred_bind_all_2 extends Code {

/*

bind_all(_4088,_4090,_4098):-var(_4090,_4098).
bind_all(_4128,[[_4122,_4128]|_4136],_4144):-var(_4128,bind_all(_4128,_4136,_4144)).
bind_all(_4192,[[_4176,_4182]|_4190],_4200):-bind_all(_4192,_4190,_4200).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_bind_all_2__1(mach); }
public static Operation exec_pred_bind_all_2__1(Prolog mach){ mach.FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_bind_all_2__2(Prolog mach){ mach.FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,Data.F(sdda.s7,var2,Data.F(sdda.s7,var1.Deref(),Const.Nil)),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(sdda.s_bind_all,var1.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_bind_all_2__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,Data.F(sdda.s7,var2,Data.F(sdda.s7,var3,Const.Nil)),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_bind_all_2::exec_static ;}
}


public static class pred_add_to_list_2 extends Code {

/*

add_to_list(_4224,_4226,_4240):-var(_4226,unify([_4224|_4232],_4226,_4240)).
add_to_list(_4276,[_4272|_4274],_4284):-add_to_list(_4276,_4274,_4284).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_add_to_list_2__1(mach); }
public static Operation exec_pred_add_to_list_2__1(Prolog mach){ mach.FillAlternative(pred_add_to_list_2::exec_pred_add_to_list_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = Data.F(sdda.s_unify,Data.F(sdda.s7,var1.Deref(),var3),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_add_to_list_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_add_to_list_2::exec_static ;}
}


public static class pred_umember_2 extends Code {

/*

umember(_4308,_4310,_4318):-var(_4310,cut(1,fail(_4318))).
umember(_4352,[_4352|_4354],_4364):-call(_4364).
umember(_4386,[_4382|_4384],_4394):-umember(_4386,_4384,_4394).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_umember_2__1(mach); }
public static Operation exec_pred_umember_2__1(Prolog mach){ mach.FillAlternative(pred_umember_2::exec_pred_umember_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_umember_2__2(Prolog mach){ mach.FillAlternative(pred_umember_2::exec_pred_umember_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_umember_2__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_umember_2::exec_static ;}
}


public static class pred_sumember_2 extends Code {

/*

sumember(_4418,_4420,_4428):-var(_4420,cut(1,fail(_4428))).
sumember(_4466,[_4462|_4464],_4474):-termequal(_4466,_4462,_4474).
sumember(_4504,[_4500|_4502],_4512):-sumember(_4504,_4502,_4512).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_sumember_2__1(mach); }
public static Operation exec_pred_sumember_2__1(Prolog mach){ mach.FillAlternative(pred_sumember_2::exec_pred_sumember_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = mach.HC(Data.F(sdda.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_sumember_2__2(Prolog mach){ mach.FillAlternative(pred_sumember_2::exec_pred_sumember_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_sumember_2__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_sumember_2::exec_static ;}
}


public static class pred_member_2 extends Code {

/*

member(_4538,[_4538|_4540],_4550):-call(_4550).
member(_4572,[_4568|_4570],_4580):-member(_4572,_4570,_4580).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_member_2__1(mach); }
public static Operation exec_pred_member_2__1(Prolog mach){ mach.FillAlternative(pred_member_2::exec_pred_member_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_member_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_member_2::exec_static ;}
}


public static class pred_smember_2 extends Code {

/*

smember(_4610,[_4606|_4608],_4618):-termequal(_4610,_4606,_4618).
smember(_4648,[_4644|_4646],_4656):-smember(_4648,_4646,_4656).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_smember_2__1(mach); }
public static Operation exec_pred_smember_2__1(Prolog mach){ mach.FillAlternative(pred_smember_2::exec_pred_smember_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_smember_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_smember_2::exec_static ;}
}


public static class pred_eqmember_2 extends Code {

/*

eqmember(_4686,[_4682|_4684],_4694):-equiv(_4686,_4682,_4694).
eqmember(_4724,[_4720|_4722],_4732):-eqmember(_4724,_4722,_4732).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_eqmember_2__1(mach); }
public static Operation exec_pred_eqmember_2__1(Prolog mach){ mach.FillAlternative(pred_eqmember_2::exec_pred_eqmember_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_equiv_2::exec_static ;}
public static Operation exec_pred_eqmember_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(sdda.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_eqmember_2::exec_static ;}
}


public static class pred_concat_3 extends Code {

/*

concat([],_4756,_4756,_4766):-call(_4766).
concat([_4786|_4788],_4796,[_4786|_4794],_4804):-concat(_4788,_4796,_4794,_4804).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_concat_3__1(mach); }
public static Operation exec_pred_concat_3__1(Prolog mach){ mach.FillAlternative(pred_concat_3::exec_pred_concat_3__2) ;
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
public static Operation exec_pred_concat_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(sdda.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_concat_3::exec_static ;}
}


public static class pred_nl_0 extends Code {

/*

nl(_4840):-call(_4840).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_nl_0__1(mach); }
public static Operation exec_pred_nl_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
}


public static class pred_write_list2_3 extends Code {

/*

write_list2([_4854|_4856],_4858,_4860,_4920):-name_vars(_4854,_4858,_4862,write(_4854,or((nonvar(_4856)->write(','),nl,write(' '),write_list2(_4856,_4862,_4860)),_4860=_4862,_4920))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_write_list2_3__1(mach); }
public static Operation exec_pred_write_list2_3__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(sdda.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(sdda.s_write,var1.Deref(),Data.F(sdda.s_or,Data.F(sdda.s6,Data.F(sdda.s_nonvar,var2.Deref()),Data.F(sdda.s4,Data.F(sdda.s_write,sdda.s4),Data.F(sdda.s4,sdda.s_nl,Data.F(sdda.s4,Data.F(sdda.s_write,sdda.s1),Data.F(sdda.s_write_list2,var2.Deref(),var5.Deref(),var4.Deref()))))),Data.F(sdda.s12,var4.Deref(),var5.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_name_vars_3::exec_static ;}
}


public static class pred_name_vars_3 extends Code {

/*

name_vars(_4962,_4964,_4966,_4980):-var(_4962,cut(1,make_name(_4964,_4962,is(_4966,_4964+1,_4980)))).
name_vars(_5026,_5028,_5028,_5036):-atom(_5026,cut(1,_5036)).
name_vars([_5068|_5070],_5072,_5074,_5084):-cut(1,name_vars(_5068,_5072,_5076,name_vars(_5070,_5076,_5074,_5084))).
name_vars(_5128,_5130,_5132,_5146):- =..(_5128,[_5136|_5138],name_vars(_5138,_5130,_5132,_5146)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_name_vars_3__1(mach); }
public static Operation exec_pred_name_vars_3__1(Prolog mach){ mach.FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__2) ;
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
local_aregs[1] = mach.HC(Data.F(sdda.s_make_name,var2.Deref(),var1.Deref(),Data.F(sdda.s_is,var3.Deref(),Data.F(sdda.s3,var2.Deref(),sdda.posint1),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_var.FindProc(1) ;}
public static Operation exec_pred_name_vars_3__2(Prolog mach){ mach.FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__3) ;
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
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) sdda.s_atom.FindProc(1) ;}
public static Operation exec_pred_name_vars_3__3(Prolog mach){ mach.FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__4) ;
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
if (!( (areg0).Unify(Data.F(sdda.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(sdda.s_name_vars,var1.Deref(),var3.Deref(),var5,Data.F(sdda.s_name_vars,var2.Deref(),var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_name_vars_3__4(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = Data.F(sdda.s7,var4,var5) ;
local_aregs[2] = Data.F(sdda.s_name_vars,var5.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) sdda.s13.FindProc(2) ;}
}


public static class pred_make_name_2 extends Code {

/*

make_name(_5182,_5184,_5222):-is(_5192,_5182//26,is(_5212,_5182 mod 26+"A",build_name(_5192,_5212,_5214,name(_5184,_5214,_5222)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_make_name_2__1(mach); }
public static Operation exec_pred_make_name_2__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var3 ;
local_aregs[1] = Data.F(sdda.s9,var1.Deref(),sdda.posint26) ;
local_aregs[2] = Data.F(sdda.s_is,var4,Data.F(sdda.s3,Data.F(sdda.s_mod,var1.Deref(),sdda.posint26),Const.Intern("A")),Data.F(sdda.s_build_name,var3.Deref(),var4.Deref(),var5,Data.F(sdda.s_name,var2.Deref(),var5.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) sdda.s_is.FindProc(2) ;}
}


public static class pred_build_name_3 extends Code {

/*

build_name(0,_5274,[_5274],_5284):-cut(1,_5284).
build_name(_5314,_5310,[_5310|_5312],_5330):-smallerthan(0,_5314,is(_5322,_5314-1,build_name(_5322,_5310,_5312,_5330))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_build_name_3__1(mach); }
public static Operation exec_pred_build_name_3__1(Prolog mach){ mach.FillAlternative(pred_build_name_3::exec_pred_build_name_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(sdda.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(sdda.s7,var1.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_build_name_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(Data.F(sdda.s7,var2.Deref(),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = sdda.posint0 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(sdda.s_is,var4,Data.F(sdda.s5,var1.Deref(),sdda.posint1),Data.F(sdda.s_build_name,var4.Deref(),var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


}


