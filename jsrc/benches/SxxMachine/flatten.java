package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class flatten /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("!") ;
final static Const s2 = Data.Intern("+") ;
final static Const s3 = Data.Intern(",") ;
final static Const s4 = Data.Intern("-->") ;
final static Const s5 = Data.Intern("->") ;
final static Const s6 = Data.Intern(".") ;
final static Const s7 = Data.Intern(":-") ;
final static Const s8 = Data.Intern(";") ;
final static Const s9 = Data.Intern("=") ;
final static Const s10 = Data.Intern("=..") ;
final static Const s11 = Data.Intern("=<") ;
final static Const s12 = Data.Intern(">") ;
final static Const s13 = Data.Intern("\\+") ;
final static Const s14 = Data.Intern("\\=") ;
final static Const s__dummy_ = Data.Intern("_dummy_") ;
final static Const s_a = Data.Intern("a") ;
final static Const s_append = Data.Intern("append") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_atomic = Data.Intern("atomic") ;
final static Const s_b = Data.Intern("b") ;
final static Const s_c = Data.Intern("c") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_copy = Data.Intern("copy") ;
final static Const s_copy2 = Data.Intern("copy2") ;
final static Const s_disj = Data.Intern("disj") ;
final static Const s_eliminate_disjunctions = Data.Intern("eliminate_disjunctions") ;
final static Const s_extract_disj = Data.Intern("extract_disj") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_find_vars = Data.Intern("find_vars") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_gather_disj = Data.Intern("gather_disj") ;
final static Const s_inst_vars = Data.Intern("inst_vars") ;
final static Const s_inst_vars_list = Data.Intern("inst_vars_list") ;
final static Const s_intersect_sorted_vars = Data.Intern("intersect_sorted_vars") ;
final static Const s_intersect_vars = Data.Intern("intersect_vars") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_is_disj = Data.Intern("is_disj") ;
final static Const s_make_dummy_clauses = Data.Intern("make_dummy_clauses") ;
final static Const s_make_dummy_name = Data.Intern("make_dummy_name") ;
final static Const s_make_sym = Data.Intern("make_sym") ;
final static Const s_name = Data.Intern("name") ;
final static Const s_nonvar = Data.Intern("nonvar") ;
final static Const s_not = Data.Intern("not") ;
final static Const s_p = Data.Intern("p") ;
final static Const s_retrieve_sym = Data.Intern("retrieve_sym") ;
final static Const s_smallerorequal = Data.Intern("smallerorequal") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_sort = Data.Intern("sort") ;
final static Const s_sort_vars = Data.Intern("sort_vars") ;
final static Const s_split_vars = Data.Intern("split_vars") ;
final static Const s_termequal = Data.Intern("termequal") ;
final static Const s_termgreaterthan = Data.Intern("termgreaterthan") ;
final static Const s_termsmallerthan = Data.Intern("termsmallerthan") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_treat_disj = Data.Intern("treat_disj") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_var = Data.Intern("var") ;
final static Const s_varbag = Data.Intern("varbag") ;
final static Const s_varset = Data.Intern("varset") ;
final static Const s62 = Data.Intern("{}") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint65 = Data.Number(65L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_eliminate_disjunctions_4 = PredTable.Register("eliminate_disjunctions",4, new pred_eliminate_disjunctions_4());
final static Operation reg_gather_disj_4 = PredTable.Register("gather_disj",4, new pred_gather_disj_4());
final static Operation reg_extract_disj_4 = PredTable.Register("extract_disj",4, new pred_extract_disj_4());
final static Operation reg_extract_disj_7 = PredTable.Register("extract_disj",7, new pred_extract_disj_7());
final static Operation reg_is_disj_2 = PredTable.Register("is_disj",2, new pred_is_disj_2());
final static Operation reg_treat_disj_3 = PredTable.Register("treat_disj",3, new pred_treat_disj_3());
final static Operation reg_make_dummy_clauses_4 = PredTable.Register("make_dummy_clauses",4, new pred_make_dummy_clauses_4());
final static Operation reg_find_vars_2 = PredTable.Register("find_vars",2, new pred_find_vars_2());
final static Operation reg_find_vars_3 = PredTable.Register("find_vars",3, new pred_find_vars_3());
final static Operation reg_intersect_vars_3 = PredTable.Register("intersect_vars",3, new pred_intersect_vars_3());
final static Operation reg_make_dummy_name_2 = PredTable.Register("make_dummy_name",2, new pred_make_dummy_name_2());
final static Operation reg_append_3 = PredTable.Register("append",3, new pred_append_3());
final static Operation reg_copy_2 = PredTable.Register("copy",2, new pred_copy_2());
final static Operation reg_copy2_3 = PredTable.Register("copy2",3, new pred_copy2_3());
final static Operation reg_copy2_5 = PredTable.Register("copy2",5, new pred_copy2_5());
final static Operation reg_retrieve_sym_3 = PredTable.Register("retrieve_sym",3, new pred_retrieve_sym_3());
final static Operation reg_make_sym_2 = PredTable.Register("make_sym",2, new pred_make_sym_2());
final static Operation reg_varset_2 = PredTable.Register("varset",2, new pred_varset_2());
final static Operation reg_varbag_2 = PredTable.Register("varbag",2, new pred_varbag_2());
final static Operation reg_$002D$002D$003E_2 = PredTable.Register("-->",2, new pred_$002D$002D$003E_2());
final static Operation reg_inst_vars_1 = PredTable.Register("inst_vars",1, new pred_inst_vars_1());
final static Operation reg_inst_vars_list_2 = PredTable.Register("inst_vars_list",2, new pred_inst_vars_list_2());
final static Operation reg_sort_vars_2 = PredTable.Register("sort_vars",2, new pred_sort_vars_2());
final static Operation reg_sort_vars_3 = PredTable.Register("sort_vars",3, new pred_sort_vars_3());
final static Operation reg_intersect_sorted_vars_3 = PredTable.Register("intersect_sorted_vars",3, new pred_intersect_sorted_vars_3());
final static Operation reg_split_vars_4 = PredTable.Register("split_vars",4, new pred_split_vars_4());
public static class pred_top_0 extends Code {

/*

top(_24778):-eliminate_disjunctions([(a(_24700,_24702,_24704):-b(_24700);c(_24704))],_24736,_24738,[],inst_vars((_24736,_24738),_24778)).
top(_24938):-true(_24938).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_top_0__1(mach); }
public static Operation exec_pred_top_0__1(Prolog mach){ mach.FillAlternative(pred_top_0::exec_pred_top_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(flatten.s6,Data.F(flatten.s7,Data.F(flatten.s_a,var1,var2,var3),Data.F(flatten.s8,Data.F(flatten.s_b,var1.Deref()),Data.F(flatten.s_c,var3.Deref()))),Const.Nil) ;
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = Const.Nil ;
local_aregs[4] = Data.F(flatten.s_inst_vars,Data.F(flatten.s3,var4.Deref(),var5.Deref()),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_eliminate_disjunctions_4::exec_static ;}
public static Operation exec_pred_top_0__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) flatten.s_true.FindProc(0) ;}
}


public static class pred_eliminate_disjunctions_4 extends Code {

/*

eliminate_disjunctions(_24988,_24990,_24992,_24994,_25064):-gather_disj(_24988,_24990,_25002,[],treat_disj(_25002,_24992,_24994,_25064)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_eliminate_disjunctions_4__1(mach); }
public static Operation exec_pred_eliminate_disjunctions_4__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = Const.Nil ;
local_aregs[4] = Data.F(flatten.s_treat_disj,var5.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_gather_disj_4::exec_static ;}
}


public static class pred_gather_disj_4 extends Code {

/*

gather_disj([],[],_25276,_25276,_25300):-call(_25300).
gather_disj([_25406|_25408],_25414,_25416,_25418,_25508):-extract_disj(_25406,_25424,_25416,_25428,unify([_25424|_25434],_25414,gather_disj(_25408,_25434,_25428,_25418,_25508))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_gather_disj_4__1(mach); }
public static Operation exec_pred_gather_disj_4__1(Prolog mach){ mach.FillAlternative(pred_gather_disj_4::exec_pred_gather_disj_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_gather_disj_4__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var6 ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = Data.F(flatten.s_unify,Data.F(flatten.s6,var6.Deref(),var8),var3.Deref(),Data.F(flatten.s_gather_disj,var2.Deref(),var8.Deref(),var7.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_extract_disj_4::exec_static ;}
}


public static class pred_extract_disj_4 extends Code {

/*

extract_disj(_25798,(_25792:-_25794),_25802,_25804,_25902):-unify((_25792:-_25810),_25798,cut(1,unify(0,_25820,extract_disj(_25810,_25794,_25802,_25804,_25798,_25820,_25838,_25902)))).
extract_disj(_26218,_26218,_26222,_26222,_26246):-call(_26246).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_extract_disj_4__1(mach); }
public static Operation exec_pred_extract_disj_4__1(Prolog mach){ mach.FillAlternative(pred_extract_disj_4::exec_pred_extract_disj_4__2) ;
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
if (!( (areg1).Unify(Data.F(flatten.s7,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(flatten.s7,var2.Deref(),var6) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_unify,flatten.posint0,var7,Data.F(flatten.s_extract_disj,var6.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var1.Deref(),var7.Deref(),var8,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_unify_2::exec_static ;}
public static Operation exec_pred_extract_disj_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_extract_disj_7 extends Code {

/*

extract_disj((_26358,_26360),(_26364,_26366),_26374,_26376,_26378,_26380,_26382,_26484):-extract_disj(_26358,_26364,_26374,_26392,_26378,_26380,_26398,extract_disj(_26360,_26366,_26392,_26376,_26378,_26398,_26382,_26484)).
extract_disj(_26832,_26834,_26836,_26838,_26840,_26842,_26844,_26966):-is_disj(_26832,_26850,cut(1,unify([disj(_26850,_26842,_26834,_26840)|_26838],_26836,is(_26844,_26842+1,_26966)))).
extract_disj(_27236,_27236,_27240,_27240,_27244,_27246,_27246,_27270):-call(_27270).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_extract_disj_7__1(mach); }
public static Operation exec_pred_extract_disj_7__1(Prolog mach){ mach.FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
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
if (!( (areg0).Unify(Data.F(flatten.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s3,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var9,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var10 ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = var8.Deref() ;
local_aregs[6] = var11 ;
local_aregs[7] = Data.F(flatten.s_extract_disj,var2.Deref(),var4.Deref(),var10.Deref(),var6.Deref(),var7.Deref(),var11.Deref(),var9.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_extract_disj_7::exec_static ;}
public static Operation exec_pred_extract_disj_7__2(Prolog mach){ mach.FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
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
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var8 ;
local_aregs[2] = mach.HC(Data.F(flatten.s_unify,Data.F(flatten.s6,Data.F(flatten.s_disj,var8.Deref(),var6.Deref(),var2.Deref(),var5.Deref()),var4.Deref()),var3.Deref(),Data.F(flatten.s_is,var7.Deref(),Data.F(flatten.s2,var6.Deref(),flatten.posint1),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_is_disj_2::exec_static ;}
public static Operation exec_pred_extract_disj_7__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_is_disj_2 extends Code {

/*

is_disj((_27430->_27432;_27438),(_27430,!,_27432;_27438),_27496):-cut(1,_27496).
is_disj((_27576;_27578),(_27576;_27578),_27612):-call(_27612).
is_disj(not(_27708),(_27708,!,fail;true),_27754):-call(_27754).
is_disj(\+_27850,(_27850,!,fail;true),_27896):-call(_27896).
is_disj(_27992\=_27994,(_27992=_27994,!,fail;true),_28046):-call(_28046).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_is_disj_2__1(mach); }
public static Operation exec_pred_is_disj_2__1(Prolog mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s8,Data.F(flatten.s5,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s8,Data.F(flatten.s3,var1.Deref(),Data.F(flatten.s3,flatten.s1,var2.Deref())),var3.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_is_disj_2__2(Prolog mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s8,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s8,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_is_disj_2__3(Prolog mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s_not,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s8,Data.F(flatten.s3,var1.Deref(),Data.F(flatten.s3,flatten.s1,flatten.s_fail)),flatten.s_true),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_is_disj_2__4(Prolog mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s13,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s8,Data.F(flatten.s3,var1.Deref(),Data.F(flatten.s3,flatten.s1,flatten.s_fail)),flatten.s_true),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_is_disj_2__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s14,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s8,Data.F(flatten.s3,Data.F(flatten.s9,var1.Deref(),var2.Deref()),Data.F(flatten.s3,flatten.s1,flatten.s_fail)),flatten.s_true),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_treat_disj_3 extends Code {

/*

treat_disj([],_28144,_28144,_28168):-call(_28168).
treat_disj([disj((_28284;_28286),_28292,_28294,_28296)|_28302],_28308,_28310,_28454):-find_vars((_28284;_28286),_28322,find_vars(_28296,_28328,intersect_vars(_28322,_28328,_28336,make_dummy_name(_28292,_28342,=..(_28294,[_28342|_28336],make_dummy_clauses((_28284;_28286),_28294,_28308,_28370,treat_disj(_28302,_28370,_28310,_28454))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_treat_disj_3__1(mach); }
public static Operation exec_pred_treat_disj_3__1(Prolog mach){ mach.FillAlternative(pred_treat_disj_3::exec_pred_treat_disj_3__2) ;
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
public static Operation exec_pred_treat_disj_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,Data.F(flatten.s_disj,Data.F(flatten.s8,var1,var2),var3,var4,var5),var6),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var8,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(flatten.s8,var1.Deref(),var2.Deref()) ;
local_aregs[1] = var9 ;
local_aregs[2] = Data.F(flatten.s_find_vars,var5.Deref(),var10,Data.F(flatten.s_intersect_vars,var9.Deref(),var10.Deref(),var11,Data.F(flatten.s_make_dummy_name,var3.Deref(),var12,Data.F(flatten.s10,var4.Deref(),Data.F(flatten.s6,var12.Deref(),var11.Deref()),Data.F(flatten.s_make_dummy_clauses,Data.F(flatten.s8,var1.Deref(),var2.Deref()),var4.Deref(),var7.Deref(),var13,Data.F(flatten.s_treat_disj,var6.Deref(),var13.Deref(),var8.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_find_vars_2::exec_static ;}
}


public static class pred_make_dummy_clauses_4 extends Code {

/*

make_dummy_clauses((_28948;_28950),_28962,[_28954|_28956],_28966,_29046):-cut(1,copy((_28962:-_28948),_28954,make_dummy_clauses(_28950,_28962,_28956,_28966,_29046))).
make_dummy_clauses(_29288,_29290,[_29282|_29284],_29284,_29352):-copy((_29290:-_29288),_29282,_29352).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_make_dummy_clauses_4__1(mach); }
public static Operation exec_pred_make_dummy_clauses_4__1(Prolog mach){ mach.FillAlternative(pred_make_dummy_clauses_4::exec_pred_make_dummy_clauses_4__2) ;
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
if (!( (areg0).Unify(Data.F(flatten.s8,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(flatten.s6,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var6,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(flatten.s_copy,Data.F(flatten.s7,var3.Deref(),var1.Deref()),var4.Deref(),Data.F(flatten.s_make_dummy_clauses,var2.Deref(),var3.Deref(),var5.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_make_dummy_clauses_4__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(Data.F(flatten.s6,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(flatten.s7,var2.Deref(),var1.Deref()) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_copy_2::exec_static ;}
}


public static class pred_find_vars_2 extends Code {

/*

find_vars(_29504,_29506,_29560):-find_vars(_29504,_29506,_29514,unify([],_29514,_29560)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_find_vars_2__1(mach); }
public static Operation exec_pred_find_vars_2__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[3] = Data.F(flatten.s_unify,Const.Nil,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_find_vars_3::exec_static ;}
}


public static class pred_find_vars_3 extends Code {

/*

find_vars(_29772,[_29772|_29774],_29774,_29832):-var(_29772,cut(1,_29832)).
find_vars(_29980,_29982,_29982,_30034):-atomic(_29980,cut(1,_30034)).
find_vars([_30182|_30184],_30190,_30192,_30260):-cut(1,find_vars(_30182,_30190,_30200,find_vars(_30184,_30200,_30192,_30260))).
find_vars(_30500,_30502,_30504,_30570):- =..(_30500,[_30508|_30510],find_vars(_30510,_30502,_30504,_30570)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_find_vars_3__1(mach); }
public static Operation exec_pred_find_vars_3__1(Prolog mach){ mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s6,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) flatten.s_var.FindProc(1) ;}
public static Operation exec_pred_find_vars_3__2(Prolog mach){ mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__3) ;
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
return (Operation) flatten.s_atomic.FindProc(1) ;}
public static Operation exec_pred_find_vars_3__3(Prolog mach){ mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__4) ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(flatten.s_find_vars,var1.Deref(),var3.Deref(),var5,Data.F(flatten.s_find_vars,var2.Deref(),var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_find_vars_3__4(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = Data.F(flatten.s6,var4,var5) ;
local_aregs[2] = Data.F(flatten.s_find_vars,var5.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) flatten.s10.FindProc(2) ;}
}


public static class pred_intersect_vars_3 extends Code {

/*

intersect_vars(_30790,_30792,_30794,_30866):-sort_vars(_30790,_30800,sort_vars(_30792,_30806,intersect_sorted_vars(_30800,_30806,_30794,_30866))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_intersect_vars_3__1(mach); }
public static Operation exec_pred_intersect_vars_3__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[2] = Data.F(flatten.s_sort_vars,var2.Deref(),var5,Data.F(flatten.s_intersect_sorted_vars,var4.Deref(),var5.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_sort_vars_2::exec_static ;}
}


public static class pred_make_dummy_name_2 extends Code {

/*

make_dummy_name(_31142,_31144,_31222):-name('_dummy_',_31150,name(_31142,_31156,append(_31150,_31156,_31164,name(_31144,_31164,_31222)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_make_dummy_name_2__1(mach); }
public static Operation exec_pred_make_dummy_name_2__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = flatten.s__dummy_ ;
local_aregs[1] = var3 ;
local_aregs[2] = Data.F(flatten.s_name,var1.Deref(),var4,Data.F(flatten.s_append,var3.Deref(),var4.Deref(),var5,Data.F(flatten.s_name,var2.Deref(),var5.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) flatten.s_name.FindProc(2) ;}
}


public static class pred_append_3 extends Code {

/*

append([],_31548,_31548,_31572):-call(_31572).
append([_31724|_31726],_31738,[_31724|_31732],_31788):-append(_31726,_31738,_31732,_31788).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_append_3__1(mach); }
public static Operation exec_pred_append_3__1(Prolog mach){ mach.FillAlternative(pred_append_3::exec_pred_append_3__2) ;
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
public static Operation exec_pred_append_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(flatten.s6,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_append_3::exec_static ;}
}


public static class pred_copy_2 extends Code {

/*

copy(_31976,_31978,_32050):-varset(_31976,_31984,make_sym(_31984,_31990,copy2(_31976,_31978,_31990,cut(1,_32050)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_copy_2__1(mach); }
public static Operation exec_pred_copy_2__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[2] = Data.F(flatten.s_make_sym,var3.Deref(),var4,Data.F(flatten.s_copy2,var1.Deref(),var2.Deref(),var4.Deref(),mach.HC(continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_varset_2::exec_static ;}
}


public static class pred_copy2_3 extends Code {

/*

copy2(_32342,_32344,_32346,_32410):-var(_32342,cut(1,retrieve_sym(_32342,_32346,_32344,_32410))).
copy2(_32652,_32654,_32656,_32752):-nonvar(_32652,cut(1,functor(_32652,_32666,_32668,functor(_32654,_32666,_32668,copy2(_32652,_32654,_32656,1,_32668,_32752))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_copy2_3__1(mach); }
public static Operation exec_pred_copy2_3__1(Prolog mach){ mach.FillAlternative(pred_copy2_3::exec_pred_copy2_3__2) ;
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
local_aregs[1] = mach.HC(Data.F(flatten.s_retrieve_sym,var1.Deref(),var3.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) flatten.s_var.FindProc(1) ;}
public static Operation exec_pred_copy2_3__2(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = mach.HC(Data.F(flatten.s_functor,var1.Deref(),var4,var5,Data.F(flatten.s_functor,var2.Deref(),var4.Deref(),var5.Deref(),Data.F(flatten.s_copy2,var1.Deref(),var2.Deref(),var3.Deref(),flatten.posint1,var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Operation) flatten.s_nonvar.FindProc(1) ;}
}


public static class pred_copy2_5 extends Code {

/*

copy2(_33150,_33152,_33154,_33156,_33158,_33222):-smallerthan(_33158,_33156,cut(1,_33222)).
copy2(_33442,_33444,_33446,_33448,_33450,_33592):-smallerorequal(_33448,_33450,cut(1,arg(_33448,_33442,_33464,arg(_33448,_33444,_33472,copy2(_33464,_33472,_33446,is(_33490,_33448+1,copy2(_33442,_33444,_33446,_33490,_33450,_33592))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_copy2_5__1(mach); }
public static Operation exec_pred_copy2_5__1(Prolog mach){ mach.FillAlternative(pred_copy2_5::exec_pred_copy2_5__2) ;
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
local_aregs[0] = var5.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_copy2_5__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
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
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_arg,var4.Deref(),var1.Deref(),var6,Data.F(flatten.s_arg,var4.Deref(),var2.Deref(),var7,Data.F(flatten.s_copy2,var6.Deref(),var7.Deref(),var3.Deref(),Data.F(flatten.s_is,var8,Data.F(flatten.s2,var4.Deref(),flatten.posint1),Data.F(flatten.s_copy2,var1.Deref(),var2.Deref(),var3.Deref(),var8.Deref(),var5.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
}


public static class pred_retrieve_sym_3 extends Code {

/*

retrieve_sym(_34158,[p(_34146,_34148)|_34154],_34148,_34214):-termequal(_34158,_34146,cut(1,_34214)).
retrieve_sym(_34430,[_34424|_34426],_34434,_34482):-retrieve_sym(_34430,_34426,_34434,_34482).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_retrieve_sym_3__1(mach); }
public static Operation exec_pred_retrieve_sym_3__1(Prolog mach){ mach.FillAlternative(pred_retrieve_sym_3::exec_pred_retrieve_sym_3__2) ;
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
if (!( (areg1).Unify(Data.F(flatten.s6,Data.F(flatten.s_p,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_retrieve_sym_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg1).Unify(Data.F(flatten.s6,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_retrieve_sym_3::exec_static ;}
}


public static class pred_make_sym_2 extends Code {

/*

make_sym([],[],_34718):-call(_34718).
make_sym([_34886|_34888],[p(_34886,_34894)|_34900],_34946):-make_sym(_34888,_34900,_34946).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_make_sym_2__1(mach); }
public static Operation exec_pred_make_sym_2__1(Prolog mach){ mach.FillAlternative(pred_make_sym_2::exec_pred_make_sym_2__2) ;
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
public static Operation exec_pred_make_sym_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s6,Data.F(flatten.s_p,var1.Deref(),var3),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_make_sym_2::exec_static ;}
}


public static class pred_varset_2 extends Code {

/*

varset(_35142,_35144,_35196):-varbag(_35142,_35150,sort(_35150,_35144,_35196)).


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
local_aregs[2] = Data.F(flatten.s_sort,var3.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_varbag_2::exec_static ;}
}


public static class pred_varbag_2 extends Code {

/*

varbag(_35448,_35450,_35492):-varbag(_35448,_35450,[],_35492).


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


public static class pred_$002D$002D$003E_2 extends Code {

/*

-->(varbag(_2790),({var(_2790)},!,[_2790]),_2826):-call(_2826).
-->(varbag(_2844),({nonvar(_2844),!,functor(_2844,_2854,_2856)},varbag(_2844,1,_2856)),_2896):-call(_2896).
-->(varbag(_2914,_2916,_2918),({_2916>_2918},!),_2944):-call(_2944).
-->(varbag(_2962,_2964,_2966),({_2964=<_2966},!,{arg(_2964,_2962,_2984)},varbag(_2984),{_3002 is _2964+1},varbag(_2962,_3002,_2966)),_3056):-call(_3056).


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
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s_varbag,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s3,Data.F(flatten.s62,Data.F(flatten.s_var,var1.Deref())),Data.F(flatten.s3,flatten.s1,Data.F(flatten.s6,var1.Deref(),Const.Nil))),mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(Data.F(flatten.s_varbag,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s3,Data.F(flatten.s62,Data.F(flatten.s3,Data.F(flatten.s_nonvar,var1.Deref()),Data.F(flatten.s3,flatten.s1,Data.F(flatten.s_functor,var1.Deref(),var2,var3)))),Data.F(flatten.s_varbag,var1.Deref(),flatten.posint1,var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__3(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s_varbag,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s3,Data.F(flatten.s62,Data.F(flatten.s12,var2.Deref(),var3.Deref())),flatten.s1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s_varbag,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s3,Data.F(flatten.s62,Data.F(flatten.s11,var2.Deref(),var3.Deref())),Data.F(flatten.s3,flatten.s1,Data.F(flatten.s3,Data.F(flatten.s62,Data.F(flatten.s_arg,var2.Deref(),var1.Deref(),var4)),Data.F(flatten.s3,Data.F(flatten.s_varbag,var4.Deref()),Data.F(flatten.s3,Data.F(flatten.s62,Data.F(flatten.s_is,var5,Data.F(flatten.s2,var2.Deref(),flatten.posint1))),Data.F(flatten.s_varbag,var1.Deref(),var5.Deref(),var3.Deref())))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_inst_vars_1 extends Code {

/*

inst_vars(_3072,_3094):-varset(_3072,_3074,unify([65],[_3078],inst_vars_list(_3074,_3078,_3094))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_inst_vars_1__1(mach); }
public static Operation exec_pred_inst_vars_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = Data.F(flatten.s_unify,Data.F(flatten.s6,flatten.posint65,Const.Nil),Data.F(flatten.s6,var3,Const.Nil),Data.F(flatten.s_inst_vars_list,var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_varset_2::exec_static ;}
}


public static class pred_inst_vars_list_2 extends Code {

/*

inst_vars_list([],_3132,_3142):-call(_3142).
inst_vars_list([_3160|_3162],_3164,_3186):-name(_3160,[_3164],is(_3178,_3164+1,inst_vars_list(_3162,_3178,_3186))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_inst_vars_list_2__1(mach); }
public static Operation exec_pred_inst_vars_list_2__1(Prolog mach){ mach.FillAlternative(pred_inst_vars_list_2::exec_pred_inst_vars_list_2__2) ;
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
public static Operation exec_pred_inst_vars_list_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(flatten.s6,var3.Deref(),Const.Nil) ;
local_aregs[2] = Data.F(flatten.s_is,var4,Data.F(flatten.s2,var3.Deref(),flatten.posint1),Data.F(flatten.s_inst_vars_list,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) flatten.s_name.FindProc(2) ;}
}


public static class pred_sort_vars_2 extends Code {

/*

sort_vars(_3226,_3228,_3236):-sort_vars(_3226,_3228,[],_3236).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_sort_vars_2__1(mach); }
public static Operation exec_pred_sort_vars_2__1(Prolog mach){ mach.RemoveChoice() ;
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
return (Operation)pred_sort_vars_3::exec_static ;}
}


public static class pred_sort_vars_3 extends Code {

/*

sort_vars([],_3262,_3262,_3272):-call(_3272).
sort_vars([_3292|_3294],_3296,_3298,_3316):-split_vars(_3294,_3292,_3300,_3302,sort_vars(_3300,_3296,[_3292|_3308],sort_vars(_3302,_3308,_3298,_3316))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_sort_vars_3__1(mach); }
public static Operation exec_pred_sort_vars_3__1(Prolog mach){ mach.FillAlternative(pred_sort_vars_3::exec_pred_sort_vars_3__2) ;
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
public static Operation exec_pred_sort_vars_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = var6 ;
local_aregs[4] = Data.F(flatten.s_sort_vars,var5.Deref(),var3.Deref(),Data.F(flatten.s6,var1.Deref(),var7),Data.F(flatten.s_sort_vars,var6.Deref(),var7.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_split_vars_4::exec_static ;}
}


public static class pred_intersect_sorted_vars_3 extends Code {

/*

intersect_sorted_vars([],_3366,[],_3374):-cut(1,_3374).
intersect_sorted_vars(_3398,[],[],_3408):-call(_3408).
intersect_sorted_vars([_3428|_3430],[_3434|_3436],[_3428|_3442],_3450):-termequal(_3428,_3434,cut(1,intersect_sorted_vars(_3430,_3436,_3442,_3450))).
intersect_sorted_vars([_3494|_3496],[_3500|_3502],_3504,_3518):-termsmallerthan(_3494,_3500,cut(1,intersect_sorted_vars(_3496,[_3500|_3502],_3504,_3518))).
intersect_sorted_vars([_3562|_3564],[_3568|_3570],_3572,_3586):-termgreaterthan(_3562,_3568,cut(1,intersect_sorted_vars([_3562|_3564],_3570,_3572,_3586))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_intersect_sorted_vars_3__1(mach); }
public static Operation exec_pred_intersect_sorted_vars_3__1(Prolog mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_intersect_sorted_vars_3__2(Prolog mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_intersect_sorted_vars_3__3(Prolog mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__4) ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s6,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(flatten.s6,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_intersect_sorted_vars,var2.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_intersect_sorted_vars_3__4(Prolog mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__5) ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s6,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_intersect_sorted_vars,var2.Deref(),Data.F(flatten.s6,var3.Deref(),var4.Deref()),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termsmallerthan_2::exec_static ;}
public static Operation exec_pred_intersect_sorted_vars_3__5(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(flatten.s6,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_intersect_sorted_vars,Data.F(flatten.s6,var1.Deref(),var2.Deref()),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_termgreaterthan_2::exec_static ;}
}


public static class pred_split_vars_4 extends Code {

/*

split_vars([],_3628,[],[],_3638):-call(_3638).
split_vars([_3660|_3662],_3670,[_3660|_3668],_3672,_3680):-termsmallerthan(_3660,_3670,cut(1,split_vars(_3662,_3670,_3668,_3672,_3680))).
split_vars([_3728|_3730],_3732,_3734,_3736,_3744):-termequal(_3728,_3732,cut(1,split_vars(_3730,_3732,_3734,_3736,_3744))).
split_vars([_3792|_3794],_3802,_3804,[_3792|_3800],_3812):-termgreaterthan(_3792,_3802,cut(1,split_vars(_3794,_3802,_3804,_3800,_3812))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_split_vars_4__1(mach); }
public static Operation exec_pred_split_vars_4__1(Prolog mach){ mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_split_vars_4__2(Prolog mach){ mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__3) ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(flatten.s6,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_split_vars,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_termsmallerthan_2::exec_static ;}
public static Operation exec_pred_split_vars_4__3(Prolog mach){ mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__4) ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_split_vars,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_split_vars_4__4(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(flatten.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(flatten.s6,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(flatten.s_split_vars,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_termgreaterthan_2::exec_static ;}
}


}


