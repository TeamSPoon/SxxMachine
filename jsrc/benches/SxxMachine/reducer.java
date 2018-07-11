package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class reducer /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("*") ;
final static Const s2 = Data.Intern("+") ;
final static Const s3 = Data.Intern(",") ;
final static Const s4 = Data.Intern("-") ;
final static Const s5 = Data.Intern("-->") ;
final static Const s6 = Data.Intern("->") ;
final static Const s7 = Data.Intern(".") ;
final static Const s8 = Data.Intern("//") ;
final static Const s9 = Data.Intern(":-") ;
final static Const s10 = Data.Intern("<") ;
final static Const s11 = Data.Intern("=") ;
final static Const s12 = Data.Intern("=:=") ;
final static Const s13 = Data.Intern("=<") ;
final static Const s14 = Data.Intern("=\\=") ;
final static Const s15 = Data.Intern(">") ;
final static Const s16 = Data.Intern(">=") ;
final static Const s17 = Data.Intern("\\==") ;
final static Const s_append = Data.Intern("append") ;
final static Const s_apply = Data.Intern("apply") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_arithequal = Data.Intern("arithequal") ;
final static Const s_atom = Data.Intern("atom") ;
final static Const s_atomic = Data.Intern("atomic") ;
final static Const s_b = Data.Intern("b") ;
final static Const s_bp = Data.Intern("bp") ;
final static Const s_c = Data.Intern("c") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_compare = Data.Intern("compare") ;
final static Const s_cond = Data.Intern("cond") ;
final static Const s_cp = Data.Intern("cp") ;
final static Const s_curry = Data.Intern("curry") ;
final static Const s_currylist = Data.Intern("currylist") ;
final static Const s_diffv = Data.Intern("diffv") ;
final static Const s_diffv_2 = Data.Intern("diffv_2") ;
final static Const s_diffv_3 = Data.Intern("diffv_3") ;
final static Const s_end = Data.Intern("end") ;
final static Const s_eval = Data.Intern("eval") ;
final static Const s_eval1 = Data.Intern("eval1") ;
final static Const s_fac = Data.Intern("fac") ;
final static Const s_false = Data.Intern("false") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_hd = Data.Intern("hd") ;
final static Const s_i = Data.Intern("i") ;
final static Const s_inserthead = Data.Intern("inserthead") ;
final static Const s_inserttail = Data.Intern("inserttail") ;
final static Const s_intersectv = Data.Intern("intersectv") ;
final static Const s_intersectv_2 = Data.Intern("intersectv_2") ;
final static Const s_intersectv_3 = Data.Intern("intersectv_3") ;
final static Const s_intersectv_list = Data.Intern("intersectv_list") ;
final static Const s_inv = Data.Intern("inv") ;
final static Const s_inv_2 = Data.Intern("inv_2") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_k = Data.Intern("k") ;
final static Const s_list_functor_name = Data.Intern("list_functor_name") ;
final static Const s_listify = Data.Intern("listify") ;
final static Const s_listify_list = Data.Intern("listify_list") ;
final static Const s_make_list = Data.Intern("make_list") ;
final static Const s_member = Data.Intern("member") ;
final static Const s_mod = Data.Intern("mod") ;
final static Const s_notinv = Data.Intern("notinv") ;
final static Const s_notinv_2 = Data.Intern("notinv_2") ;
final static Const s_notinv_3 = Data.Intern("notinv_3") ;
final static Const s_number = Data.Intern("number") ;
final static Const s_or = Data.Intern("or") ;
final static Const s_quick = Data.Intern("quick") ;
final static Const s_quick2 = Data.Intern("quick2") ;
final static Const s_relop = Data.Intern("relop") ;
final static Const s_s = Data.Intern("s") ;
final static Const s_small_subsetv = Data.Intern("small_subsetv") ;
final static Const s_smallerorequal = Data.Intern("smallerorequal") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_sp = Data.Intern("sp") ;
final static Const s_split = Data.Intern("split") ;
final static Const s_subsetv = Data.Intern("subsetv") ;
final static Const s_subsetv_2 = Data.Intern("subsetv_2") ;
final static Const s_t = Data.Intern("t") ;
final static Const s_t_append = Data.Intern("t_append") ;
final static Const s_t_argvars = Data.Intern("t_argvars") ;
final static Const s_t_def = Data.Intern("t_def") ;
final static Const s_t_redex = Data.Intern("t_redex") ;
final static Const s_t_reduce = Data.Intern("t_reduce") ;
final static Const s_t_rule1 = Data.Intern("t_rule1") ;
final static Const s_t_rule2 = Data.Intern("t_rule2") ;
final static Const s_t_trans = Data.Intern("t_trans") ;
final static Const s_t_vars = Data.Intern("t_vars") ;
final static Const s_termequal = Data.Intern("termequal") ;
final static Const s_tl = Data.Intern("tl") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_try = Data.Intern("try") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_unionv = Data.Intern("unionv") ;
final static Const s_unionv_2 = Data.Intern("unionv_2") ;
final static Const s_unionv_3 = Data.Intern("unionv_3") ;
final static Const s_var = Data.Intern("var") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_try_2 = PredTable.Register("try",2, new pred_try_2());
final static Operation reg_end_1 = PredTable.Register("end",1, new pred_end_1());
final static Operation reg_list_functor_name_1 = PredTable.Register("list_functor_name",1, new pred_list_functor_name_1());
final static Operation reg_t_def_3 = PredTable.Register("t_def",3, new pred_t_def_3());
final static Operation reg_t_reduce_2 = PredTable.Register("t_reduce",2, new pred_t_reduce_2());
final static Operation reg_t_append_4 = PredTable.Register("t_append",4, new pred_t_append_4());
final static Operation reg_t_redex_2 = PredTable.Register("t_redex",2, new pred_t_redex_2());
final static Operation reg_eval_4 = PredTable.Register("eval",4, new pred_eval_4());
final static Operation reg_eval1_3 = PredTable.Register("eval1",3, new pred_eval1_3());
final static Operation reg_relop_3 = PredTable.Register("relop",3, new pred_relop_3());
final static Operation reg_t_3 = PredTable.Register("t",3, new pred_t_3());
final static Operation reg_t_argvars_3 = PredTable.Register("t_argvars",3, new pred_t_argvars_3());
final static Operation reg_curry_2 = PredTable.Register("curry",2, new pred_curry_2());
final static Operation reg_currylist_3 = PredTable.Register("currylist",3, new pred_currylist_3());
final static Operation reg_t_vars_2 = PredTable.Register("t_vars",2, new pred_t_vars_2());
final static Operation reg_t_trans_4 = PredTable.Register("t_trans",4, new pred_t_trans_4());
final static Operation reg_t_rule1_8 = PredTable.Register("t_rule1",8, new pred_t_rule1_8());
final static Operation reg_t_rule2_9 = PredTable.Register("t_rule2",9, new pred_t_rule2_9());
final static Operation reg_make_list_2 = PredTable.Register("make_list",2, new pred_make_list_2());
final static Operation reg_listify_2 = PredTable.Register("listify",2, new pred_listify_2());
final static Operation reg_listify_list_4 = PredTable.Register("listify_list",4, new pred_listify_list_4());
final static Operation reg_member_2 = PredTable.Register("member",2, new pred_member_2());
final static Operation reg_append_3 = PredTable.Register("append",3, new pred_append_3());
final static Operation reg_intersectv_3 = PredTable.Register("intersectv",3, new pred_intersectv_3());
final static Operation reg_intersectv_2_4 = PredTable.Register("intersectv_2",4, new pred_intersectv_2_4());
final static Operation reg_intersectv_3_6 = PredTable.Register("intersectv_3",6, new pred_intersectv_3_6());
final static Operation reg_intersectv_list_2 = PredTable.Register("intersectv_list",2, new pred_intersectv_list_2());
final static Operation reg_$002D$002D$003E_2 = PredTable.Register("-->",2, new pred_$002D$002D$003E_2());
final static Operation reg_diffv_3 = PredTable.Register("diffv",3, new pred_diffv_3());
final static Operation reg_diffv_2_4 = PredTable.Register("diffv_2",4, new pred_diffv_2_4());
final static Operation reg_diffv_3_6 = PredTable.Register("diffv_3",6, new pred_diffv_3_6());
final static Operation reg_unionv_3 = PredTable.Register("unionv",3, new pred_unionv_3());
final static Operation reg_unionv_2_4 = PredTable.Register("unionv_2",4, new pred_unionv_2_4());
final static Operation reg_unionv_3_6 = PredTable.Register("unionv_3",6, new pred_unionv_3_6());
final static Operation reg_subsetv_2 = PredTable.Register("subsetv",2, new pred_subsetv_2());
final static Operation reg_subsetv_2_4 = PredTable.Register("subsetv_2",4, new pred_subsetv_2_4());
final static Operation reg_small_subsetv_2 = PredTable.Register("small_subsetv",2, new pred_small_subsetv_2());
final static Operation reg_inv_2 = PredTable.Register("inv",2, new pred_inv_2());
final static Operation reg_inv_2_3 = PredTable.Register("inv_2",3, new pred_inv_2_3());
final static Operation reg_notinv_2 = PredTable.Register("notinv",2, new pred_notinv_2());
final static Operation reg_notinv_2_2 = PredTable.Register("notinv_2",2, new pred_notinv_2_2());
final static Operation reg_notinv_3_3 = PredTable.Register("notinv_3",3, new pred_notinv_3_3());
public static class pred_top_0 extends Code {

/*

top(_43804):-try(fac(3),_43748,try(quick([3,1,2]),_43776,_43804)).


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
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(reducer.s_fac,reducer.posint3) ;
local_aregs[1] = var1 ;
local_aregs[2] = Data.F(reducer.s_try,Data.F(reducer.s_quick,Data.F(reducer.s7,reducer.posint3,Data.F(reducer.s7,reducer.posint1,Data.F(reducer.s7,reducer.posint2,Const.Nil)))),var2,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_try_2::exec_static ;}
}


public static class pred_try_2 extends Code {

/*

try(_43932,_43934,_44010):-listify(_43932,_43940,curry(_43940,_43946,t_reduce(_43946,_43952,make_list(_43952,_43934,_44010)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_try_2__1(mach); }
public static Operation exec_pred_try_2__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[2] = Data.F(reducer.s_curry,var3.Deref(),var4,Data.F(reducer.s_t_reduce,var4.Deref(),var5,Data.F(reducer.s_make_list,var5.Deref(),var2.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_listify_2::exec_static ;}
}


public static class pred_end_1 extends Code {

/*

end(_44260,_44298):-atom(_44260,cut(1,_44298)).
end(_44388,_44422):-termequal(_44388,[],_44422).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_end_1__1(mach); }
public static Operation exec_pred_end_1__1(Prolog mach){ mach.FillAlternative(pred_end_1::exec_pred_end_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) reducer.s_atom.FindProc(1) ;}
public static Operation exec_pred_end_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Const.Nil ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_termequal_2::exec_static ;}
}


public static class pred_list_functor_name_1 extends Code {

/*

list_functor_name(_44526,_44568):-functor([_44530|_44532],_44526,_44540,_44568).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_list_functor_name_1__1(mach); }
public static Operation exec_pred_list_functor_name_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(reducer.s7,var2,var3) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) reducer.s_functor.FindProc(3) ;}
}


public static class pred_t_def_3 extends Code {

/*

t_def(fac,[_44686],cond(_44686=0,1,_44686*fac(_44686-1)),_44748):-call(_44748).
t_def(quick,[_44852],cond(_44852=[],[],cond(tl(_44852)=[],_44852,quick2(split(hd(_44852),tl(_44852))))),_44934):-call(_44934).
t_def(quick2,[_45038],append(quick(hd(_45038)),quick(tl(_45038))),_45092):-call(_45092).
t_def(split,[_45196,_45202],cond(_45202=[],[[_45196]],cond(hd(_45202)=<_45196,inserthead(hd(_45202),split(_45196,tl(_45202))),inserttail(hd(_45202),split(_45196,tl(_45202))))),_45318):-call(_45318).
t_def(inserthead,[_45422,_45428],[[_45422|hd(_45428)]|tl(_45428)],_45480):-call(_45480).
t_def(inserttail,[_45584,_45590],[hd(_45590),_45584|tl(_45590)],_45642):-call(_45642).
t_def(append,[_45746,_45752],cond(_45746=[],_45752,[hd(_45746)|append(tl(_45746),_45752)]),_45818):-call(_45818).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_def_3__1(mach); }
public static Operation exec_pred_t_def_3__1(Prolog mach){ mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_fac,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var1,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s_cond,Data.F(reducer.s11,var1.Deref(),reducer.posint0),reducer.posint1,Data.F(reducer.s1,var1.Deref(),Data.F(reducer.s_fac,Data.F(reducer.s4,var1.Deref(),reducer.posint1)))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_def_3__2(Prolog mach){ mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_quick,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var1,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s_cond,Data.F(reducer.s11,var1.Deref(),Const.Nil),Const.Nil,Data.F(reducer.s_cond,Data.F(reducer.s11,Data.F(reducer.s_tl,var1.Deref()),Const.Nil),var1.Deref(),Data.F(reducer.s_quick2,Data.F(reducer.s_split,Data.F(reducer.s_hd,var1.Deref()),Data.F(reducer.s_tl,var1.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_def_3__3(Prolog mach){ mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_quick2,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var1,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s_append,Data.F(reducer.s_quick,Data.F(reducer.s_hd,var1.Deref())),Data.F(reducer.s_quick,Data.F(reducer.s_tl,var1.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_def_3__4(Prolog mach){ mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_split,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s_cond,Data.F(reducer.s11,var2.Deref(),Const.Nil),Data.F(reducer.s7,Data.F(reducer.s7,var1.Deref(),Const.Nil),Const.Nil),Data.F(reducer.s_cond,Data.F(reducer.s13,Data.F(reducer.s_hd,var2.Deref()),var1.Deref()),Data.F(reducer.s_inserthead,Data.F(reducer.s_hd,var2.Deref()),Data.F(reducer.s_split,var1.Deref(),Data.F(reducer.s_tl,var2.Deref()))),Data.F(reducer.s_inserttail,Data.F(reducer.s_hd,var2.Deref()),Data.F(reducer.s_split,var1.Deref(),Data.F(reducer.s_tl,var2.Deref()))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_def_3__5(Prolog mach){ mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_inserthead,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s7,Data.F(reducer.s7,var1.Deref(),Data.F(reducer.s_hd,var2.Deref())),Data.F(reducer.s_tl,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_def_3__6(Prolog mach){ mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_inserttail,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s7,Data.F(reducer.s_hd,var2.Deref()),Data.F(reducer.s7,var1.Deref(),Data.F(reducer.s_tl,var2.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_def_3__7(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_append,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s_cond,Data.F(reducer.s11,var1.Deref(),Const.Nil),var2.Deref(),Data.F(reducer.s7,Data.F(reducer.s_hd,var1.Deref()),Data.F(reducer.s_append,Data.F(reducer.s_tl,var1.Deref()),var2.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_t_reduce_2 extends Code {

/*

t_reduce(_45922,_45924,_45980):-atomic(_45922,cut(1,unify(_45922,_45924,_45980))).
t_reduce([_46152,_46158|_46160],[_46164,_46170|_46160],_46252):-list_functor_name(_46160,t_reduce(_46158,_46170,cut(1,t_reduce(_46152,_46164,cut(1,_46252))))).
t_reduce(_46474,_46476,_46556):-t_append(_46480,_46482,_46484,_46474,t_redex(_46484,_46482,cut(1,t_reduce(_46480,_46476,cut(1,_46556))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_reduce_2__1(mach); }
public static Operation exec_pred_t_reduce_2__1(Prolog mach){ mach.FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(reducer.s_unify,var1.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) reducer.s_atomic.FindProc(1) ;}
public static Operation exec_pred_t_reduce_2__2(Prolog mach){ mach.FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var4,Data.F(reducer.s7,var5,var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(reducer.s_t_reduce,var2.Deref(),var5.Deref(),mach.HC(Data.F(reducer.s_t_reduce,var1.Deref(),var4.Deref(),mach.HC(continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_list_functor_name_1::exec_static ;}
public static Operation exec_pred_t_reduce_2__3(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = var1.Deref() ;
local_aregs[4] = Data.F(reducer.s_t_redex,var5.Deref(),var4.Deref(),mach.HC(Data.F(reducer.s_t_reduce,var3.Deref(),var2.Deref(),mach.HC(continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_append_4::exec_static ;}
}


public static class pred_t_append_4 extends Code {

/*

t_append(_46820,_46820,_46824,_46824,_46848):-call(_46848).
t_append([_46978|_46980],_46992,_46994,[_46978|_46986],_47052):-t_append(_46980,_46992,_46994,_46986,_47052).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_append_4__1(mach); }
public static Operation exec_pred_t_append_4__1(Prolog mach){ mach.FillAlternative(pred_t_append_4::exec_pred_t_append_4__2) ;
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
public static Operation exec_pred_t_append_4__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(reducer.s7,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_append_4::exec_static ;}
}


public static class pred_t_redex_2 extends Code {

/*

t_redex([_47226,_47232,_47238,_47244|sp],[[_47250|_47232],[_47250|_47238]|_47244],_47316):-t_reduce(_47226,_47250,_47316).
t_redex([_47452,_47458,_47464,_47470|bp],[[_47452|_47458],_47464|_47470],_47518):-call(_47518).
t_redex([_47626,_47632,_47638,_47644|cp],[_47632,[_47626|_47638]|_47644],_47692):-call(_47692).
t_redex([_47800,_47806,_47812|s],[[_47818|_47806],_47818|_47812],_47878):-t_reduce(_47800,_47818,_47878).
t_redex([_48014,_48020,_48026|b],[[_48014|_48020]|_48026],_48068):-call(_48068).
t_redex([_48176,_48182,_48188|c],[_48182,_48176|_48188],_48230):-call(_48230).
t_redex([_48338,_48344|k],_48344,_48374):-call(_48374).
t_redex([_48482|i],_48482,_48512):-call(_48512).
t_redex([_48620,_48626,_48632|cond],_48626,_48698):-t_reduce(_48632,_48646,unify(true,_48646,cut(1,_48698))).
t_redex([_48896,_48902,_48908|cond],_48896,_48938):-call(_48938).
t_redex([_49046|apply],_49054,_49094):-t_reduce(_49046,_49054,_49094).
t_redex([_49230|hd],_49238,_49300):-list_functor_name(_49242,t_reduce(_49230,[_49246,_49238|_49242],_49300)).
t_redex([_49472|tl],_49480,_49542):-list_functor_name(_49484,t_reduce(_49472,[_49480,_49494|_49484],_49542)).
t_redex([_49714,_49720|_49722],_49728,_49868):-end(_49722,member(_49722,[+,-,*,//,mod],t_reduce(_49720,_49774,t_reduce(_49714,_49780,number(_49774,number(_49780,eval(_49722,_49728,_49774,_49780,_49868))))))).
t_redex([_50290,_50296|_50298],_50304,_50478):-end(_50298,member(_50298,[<,>,=<,>=,=\=,=:=],t_reduce(_50296,_50356,t_reduce(_50290,_50362,number(_50356,number(_50362,or((relop(_50298,_50356,_50362)->_50304=true),_50304=false,cut(1,_50478)))))))).
t_redex([_50884,_50890|=],_50898,_50992):-t_reduce(_50890,_50904,t_reduce(_50884,_50910,or((_50904=_50910->_50898=true),_50898=false,cut(1,_50992)))).
t_redex([_51240|_51242],_51248,_51340):-end(_51242,member(_51242,[-],t_reduce(_51240,_51270,number(_51270,eval1(_51242,_51280,_51270,_51340))))).
t_redex(_51662,_51664,_51758):-append(_51668,_51670,_51662,end(_51670,t_def(_51670,_51682,_51684,t(_51682,_51684,_51692,append(_51668,_51692,_51664,_51758))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_redex_2__1(mach); }
public static Operation exec_pred_t_redex_2__1(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,Data.F(reducer.s7,var4,reducer.s_sp)))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,Data.F(reducer.s7,var5,var2.Deref()),Data.F(reducer.s7,Data.F(reducer.s7,var5.Deref(),var3.Deref()),var4.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_reduce_2::exec_static ;}
public static Operation exec_pred_t_redex_2__2(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,Data.F(reducer.s7,var4,reducer.s_bp)))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,Data.F(reducer.s7,var1.Deref(),var2.Deref()),Data.F(reducer.s7,var3.Deref(),var4.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_redex_2__3(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,Data.F(reducer.s7,var4,reducer.s_cp)))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var2.Deref(),Data.F(reducer.s7,Data.F(reducer.s7,var1.Deref(),var3.Deref()),var4.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_redex_2__4(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,reducer.s_s))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,Data.F(reducer.s7,var4,var2.Deref()),Data.F(reducer.s7,var4.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_reduce_2::exec_static ;}
public static Operation exec_pred_t_redex_2__5(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,reducer.s_b))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,Data.F(reducer.s7,var1.Deref(),var2.Deref()),var3.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_redex_2__6(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,reducer.s_c))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var2.Deref(),Data.F(reducer.s7,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_redex_2__7(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,reducer.s_k)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_redex_2__8(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,reducer.s_i),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_redex_2__9(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,reducer.s_cond))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = Data.F(reducer.s_unify,reducer.s_true,var4.Deref(),mach.HC(continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_reduce_2::exec_static ;}
public static Operation exec_pred_t_redex_2__10(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,reducer.s_cond))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_t_redex_2__11(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,reducer.s_apply),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_reduce_2::exec_static ;}
public static Operation exec_pred_t_redex_2__12(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,reducer.s_hd),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = Data.F(reducer.s_t_reduce,var1.Deref(),Data.F(reducer.s7,var4,Data.F(reducer.s7,var2.Deref(),var3.Deref())),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_list_functor_name_1::exec_static ;}
public static Operation exec_pred_t_redex_2__13(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,reducer.s_tl),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = Data.F(reducer.s_t_reduce,var1.Deref(),Data.F(reducer.s7,var2.Deref(),Data.F(reducer.s7,var4,var3.Deref())),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_list_functor_name_1::exec_static ;}
public static Operation exec_pred_t_redex_2__14(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__15) ;
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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(reducer.s_member,var3.Deref(),Data.F(reducer.s7,reducer.s2,Data.F(reducer.s7,reducer.s4,Data.F(reducer.s7,reducer.s1,Data.F(reducer.s7,reducer.s8,Data.F(reducer.s7,reducer.s_mod,Const.Nil))))),Data.F(reducer.s_t_reduce,var2.Deref(),var5,Data.F(reducer.s_t_reduce,var1.Deref(),var6,Data.F(reducer.s_number,var5.Deref(),Data.F(reducer.s_number,var6.Deref(),Data.F(reducer.s_eval,var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_end_1::exec_static ;}
public static Operation exec_pred_t_redex_2__15(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__16) ;
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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(reducer.s_member,var3.Deref(),Data.F(reducer.s7,reducer.s10,Data.F(reducer.s7,reducer.s15,Data.F(reducer.s7,reducer.s13,Data.F(reducer.s7,reducer.s16,Data.F(reducer.s7,reducer.s14,Data.F(reducer.s7,reducer.s12,Const.Nil)))))),Data.F(reducer.s_t_reduce,var2.Deref(),var5,Data.F(reducer.s_t_reduce,var1.Deref(),var6,Data.F(reducer.s_number,var5.Deref(),Data.F(reducer.s_number,var6.Deref(),Data.F(reducer.s_or,Data.F(reducer.s6,Data.F(reducer.s_relop,var3.Deref(),var5.Deref(),var6.Deref()),Data.F(reducer.s11,var4.Deref(),reducer.s_true)),Data.F(reducer.s11,var4.Deref(),reducer.s_false),mach.HC(continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_end_1::exec_static ;}
public static Operation exec_pred_t_redex_2__16(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,reducer.s11)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = Data.F(reducer.s_t_reduce,var1.Deref(),var5,Data.F(reducer.s_or,Data.F(reducer.s6,Data.F(reducer.s11,var4.Deref(),var5.Deref()),Data.F(reducer.s11,var3.Deref(),reducer.s_true)),Data.F(reducer.s11,var3.Deref(),reducer.s_false),mach.HC(continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_reduce_2::exec_static ;}
public static Operation exec_pred_t_redex_2__17(Prolog mach){ mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = Data.F(reducer.s_member,var2.Deref(),Data.F(reducer.s7,reducer.s4,Const.Nil),Data.F(reducer.s_t_reduce,var1.Deref(),var4,Data.F(reducer.s_number,var4.Deref(),Data.F(reducer.s_eval1,var2.Deref(),var5,var4.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_end_1::exec_static ;}
public static Operation exec_pred_t_redex_2__18(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
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
local_aregs[0] = var3 ;
local_aregs[1] = var4 ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(reducer.s_end,var4.Deref(),Data.F(reducer.s_t_def,var4.Deref(),var5,var6,Data.F(reducer.s_t,var5.Deref(),var6.Deref(),var7,Data.F(reducer.s_append,var3.Deref(),var7.Deref(),var2.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_append_3::exec_static ;}
}


public static class pred_eval_4 extends Code {

/*

eval(+,_2758,_2760,_2762,_2776):-is(_2758,_2760+_2762,_2776).
eval(-,_2804,_2806,_2808,_2822):-is(_2804,_2806-_2808,_2822).
eval(*,_2850,_2852,_2854,_2868):-is(_2850,_2852*_2854,_2868).
eval(//,_2896,_2898,_2900,_2914):-is(_2896,_2898//_2900,_2914).
eval(mod,_2942,_2944,_2946,_2960):-is(_2942,_2944 mod _2946,_2960).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_eval_4__1(mach); }
public static Operation exec_pred_eval_4__1(Prolog mach){ mach.FillAlternative(pred_eval_4::exec_pred_eval_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s2,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(reducer.s2,var2.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation) reducer.s_is.FindProc(2) ;}
public static Operation exec_pred_eval_4__2(Prolog mach){ mach.FillAlternative(pred_eval_4::exec_pred_eval_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s4,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(reducer.s4,var2.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation) reducer.s_is.FindProc(2) ;}
public static Operation exec_pred_eval_4__3(Prolog mach){ mach.FillAlternative(pred_eval_4::exec_pred_eval_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(reducer.s1,var2.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation) reducer.s_is.FindProc(2) ;}
public static Operation exec_pred_eval_4__4(Prolog mach){ mach.FillAlternative(pred_eval_4::exec_pred_eval_4__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s8,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(reducer.s8,var2.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation) reducer.s_is.FindProc(2) ;}
public static Operation exec_pred_eval_4__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s_mod,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(reducer.s_mod,var2.Deref(),var3.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation) reducer.s_is.FindProc(2) ;}
}


public static class pred_eval1_3 extends Code {

/*

eval1(-,_2988,_2990,_3002):-is(_2988,-_2990,_3002).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_eval1_3__1(mach); }
public static Operation exec_pred_eval1_3__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s4,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(reducer.s4,var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) reducer.s_is.FindProc(2) ;}
}


public static class pred_relop_3 extends Code {

/*

relop(<,_3028,_3030,_3038):-smallerthan(_3028,_3030,_3038).
relop(>,_3064,_3066,_3074):-smallerthan(_3066,_3064,_3074).
relop(=<,_3100,_3102,_3110):-smallerorequal(_3100,_3102,_3110).
relop(>=,_3136,_3138,_3146):-smallerorequal(_3138,_3136,_3146).
relop(=\=,_3172,_3174,_3182):- =\=(_3172,_3174,_3182).
relop(=:=,_3208,_3210,_3218):-arithequal(_3210,_3208,_3218).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_relop_3__1(mach); }
public static Operation exec_pred_relop_3__1(Prolog mach){ mach.FillAlternative(pred_relop_3::exec_pred_relop_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_relop_3__2(Prolog mach){ mach.FillAlternative(pred_relop_3::exec_pred_relop_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_relop_3__3(Prolog mach){ mach.FillAlternative(pred_relop_3::exec_pred_relop_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s13,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_relop_3__4(Prolog mach){ mach.FillAlternative(pred_relop_3::exec_pred_relop_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s16,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_relop_3__5(Prolog mach){ mach.FillAlternative(pred_relop_3::exec_pred_relop_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s14,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) reducer.s14.FindProc(2) ;}
public static Operation exec_pred_relop_3__6(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s12,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_arithequal_2::exec_static ;}
}


public static class pred_t_3 extends Code {

/*

t(_3244,_3246,_3248,_3260):-listify(_3246,_3250,curry(_3250,_3252,t_argvars(_3244,_3252,_3248,cut(1,_3260)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_3__1(mach); }
public static Operation exec_pred_t_3__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = Data.F(reducer.s_curry,var4.Deref(),var5,Data.F(reducer.s_t_argvars,var1.Deref(),var5.Deref(),var3.Deref(),mach.HC(continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_listify_2::exec_static ;}
}


public static class pred_t_argvars_3 extends Code {

/*

t_argvars([],_3310,_3310,_3320):-call(_3320).
t_argvars([_3340|_3342],_3344,_3346,_3358):-t_argvars(_3342,_3344,_3348,t_vars(_3348,_3350,t_trans(_3340,_3348,_3350,_3346,_3358))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_argvars_3__1(mach); }
public static Operation exec_pred_t_argvars_3__1(Prolog mach){ mach.FillAlternative(pred_t_argvars_3::exec_pred_t_argvars_3__2) ;
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
public static Operation exec_pred_t_argvars_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(reducer.s_t_vars,var5.Deref(),var6,Data.F(reducer.s_t_trans,var1.Deref(),var5.Deref(),var6.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_argvars_3::exec_static ;}
}


public static class pred_curry_2 extends Code {

/*

curry(_3406,_3406,_3422):-or(var(_3406),atomic(_3406),cut(1,_3422)).
curry([_3454|_3456],_3458,_3466):-currylist(_3456,_3458,_3454,_3466).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_curry_2__1(mach); }
public static Operation exec_pred_curry_2__1(Prolog mach){ mach.FillAlternative(pred_curry_2::exec_pred_curry_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(reducer.s_var,var1.Deref()) ;
local_aregs[1] = Data.F(reducer.s_atomic,var1.Deref()) ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_or_2::exec_static ;}
public static Operation exec_pred_curry_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_currylist_3::exec_static ;}
}


public static class pred_currylist_3 extends Code {

/*

currylist([],_3492,_3492,_3500):-cut(1,_3500).
currylist([_3526|_3528],_3530,_3532,_3548):-curry(_3526,_3534,currylist(_3528,_3530,[_3534|_3532],_3548)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_currylist_3__1(mach); }
public static Operation exec_pred_currylist_3__1(Prolog mach){ mach.FillAlternative(pred_currylist_3::exec_pred_currylist_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_currylist_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = Data.F(reducer.s_currylist,var2.Deref(),var3.Deref(),Data.F(reducer.s7,var5.Deref(),var4.Deref()),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_curry_2::exec_static ;}
}


public static class pred_t_vars_2 extends Code {

/*

t_vars(_3586,[[_3586]],_3602):-var(_3586,cut(1,_3602)).
t_vars(_3636,[[]],_3644):-atomic(_3636,cut(1,_3644)).
t_vars([_3674],[[]],_3690):-atomic(_3674,cut(1,_3690)).
t_vars([_3720|_3722],[_3726,[_3732|_3734],[_3744|_3746]],_3772):-t_vars(_3720,[_3732|_3734],t_vars(_3722,[_3744|_3746],unionv(_3732,_3744,_3726,_3772))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_vars_2__1(mach); }
public static Operation exec_pred_t_vars_2__1(Prolog mach){ mach.FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,Data.F(reducer.s7,var1.Deref(),Const.Nil),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) reducer.s_var.FindProc(1) ;}
public static Operation exec_pred_t_vars_2__2(Prolog mach){ mach.FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,Const.Nil,Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) reducer.s_atomic.FindProc(1) ;}
public static Operation exec_pred_t_vars_2__3(Prolog mach){ mach.FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,Const.Nil,Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) reducer.s_atomic.FindProc(1) ;}
public static Operation exec_pred_t_vars_2__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var3,Data.F(reducer.s7,Data.F(reducer.s7,var4,var5),Data.F(reducer.s7,Data.F(reducer.s7,var6,var7),Const.Nil))),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = Data.F(reducer.s7,var4.Deref(),var5.Deref()) ;
local_aregs[2] = Data.F(reducer.s_t_vars,var2.Deref(),Data.F(reducer.s7,var6.Deref(),var7.Deref()),Data.F(reducer.s_unionv,var4.Deref(),var6.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_t_vars_2::exec_static ;}
}


public static class pred_t_trans_4 extends Code {

/*

t_trans(_3820,_3816,_3822,[_3816|k],_3850):-or(atomic(_3816),(var(_3816),_3816\==_3820),cut(1,_3850)).
t_trans(_3884,_3886,_3888,i,_3896):-termequal(_3884,_3886,cut(1,_3896)).
t_trans(_3942,_3938,[_3932|_3934],[_3938|k],_3950):-notinv(_3942,_3932,_3950).
t_trans(_4002,[_3980|_3982],[_3986,_3992,_3998],_4004,_4064):-unify([_4008|_4010],_3992,unify([_4014|_4016],_3998,or(end(_3982),(_4016=[_4024,[_4030|_4032]],_4030\==[]),t_rule1(_4002,_3982,_4014,_3998,_3980,_4008,_3992,_4004,_4064)))).
t_trans(_4158,[_4130,_4136|_4138],[_4142,_4148,_4154],_4160,_4204):-unify([_4164|_4166],_4148,unify([_4170,_4176,_4182],_4154,unify([_4188|_4190],_4182,unify([_4194|_4196],_4176,t_rule2(_4158,_4138,_4136,_4194,_4176,_4130,_4164,_4148,_4160,_4204))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_trans_4__1(mach); }
public static Operation exec_pred_t_trans_4__1(Prolog mach){ mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__2) ;
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
if (!( (areg3).Unify(Data.F(reducer.s7,var2.Deref(),reducer.s_k),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(reducer.s_atomic,var2.Deref()) ;
local_aregs[1] = Data.F(reducer.s3,Data.F(reducer.s_var,var2.Deref()),Data.F(reducer.s17,var2.Deref(),var1.Deref())) ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_or_2::exec_static ;}
public static Operation exec_pred_t_trans_4__2(Prolog mach){ mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__3) ;
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
if (!( (areg3).Unify(reducer.s_i,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_t_trans_4__3(Prolog mach){ mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__4) ;
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
if (!( (areg2).Unify(Data.F(reducer.s7,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(reducer.s7,var2.Deref(),reducer.s_k),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_notinv_2::exec_static ;}
public static Operation exec_pred_t_trans_4__4(Prolog mach){ mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s7,var4,Data.F(reducer.s7,var5,Data.F(reducer.s7,var6,Const.Nil))),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(reducer.s7,var8,var9) ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = Data.F(reducer.s_unify,Data.F(reducer.s7,var10,var11),var6.Deref(),Data.F(reducer.s_or,Data.F(reducer.s_end,var3.Deref()),Data.F(reducer.s3,Data.F(reducer.s11,var11.Deref(),Data.F(reducer.s7,var12,Data.F(reducer.s7,Data.F(reducer.s7,var13,var14),Const.Nil))),Data.F(reducer.s17,var13.Deref(),Const.Nil)),Data.F(reducer.s_t_rule1,var1.Deref(),var3.Deref(),var10.Deref(),var6.Deref(),var2.Deref(),var8.Deref(),var5.Deref(),var7.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_unify_2::exec_static ;}
public static Operation exec_pred_t_trans_4__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
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
if (!( (areg1).Unify(Data.F(reducer.s7,var2,Data.F(reducer.s7,var3,var4)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s7,var5,Data.F(reducer.s7,var6,Data.F(reducer.s7,var7,Const.Nil))),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var8,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(reducer.s7,var9,var10) ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = Data.F(reducer.s_unify,Data.F(reducer.s7,var11,Data.F(reducer.s7,var12,Data.F(reducer.s7,var13,Const.Nil))),var7.Deref(),Data.F(reducer.s_unify,Data.F(reducer.s7,var14,var15),var13.Deref(),Data.F(reducer.s_unify,Data.F(reducer.s7,var16,var17),var12.Deref(),Data.F(reducer.s_t_rule2,var1.Deref(),var4.Deref(),var3.Deref(),var16.Deref(),var12.Deref(),var2.Deref(),var9.Deref(),var6.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_unify_2::exec_static ;}
}


public static class pred_t_rule1_8 extends Code {

/*

t_rule1(_4278,_4280,_4282,_4284,_4286,_4288,_4290,_4280,_4298):-notinv(_4278,_4282,termequal(_4278,_4286,cut(1,_4298))).
t_rule1(_4360,_4356,_4362,_4364,_4366,_4368,_4370,[_4350,_4356|b],_4378):-notinv(_4360,_4362,inv(_4360,_4368,\==(_4360,_4366,cut(1,t_trans(_4360,_4366,_4370,_4350,_4378))))).
t_rule1(_4460,_4462,_4464,_4466,_4450,_4468,_4470,[_4450,_4456|c],_4478):-notinv(_4460,_4468,cut(1,t_trans(_4460,_4462,_4466,_4456,_4478))).
t_rule1(_4544,_4546,_4548,_4550,_4552,_4554,_4556,[_4534,_4540|s],_4564):-t_trans(_4544,_4546,_4550,_4540,t_trans(_4544,_4552,_4556,_4534,_4564)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
Term aregs[] = mach.RegPull(8);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_rule1_8__1(mach); }
public static Operation exec_pred_t_rule1_8__1(Prolog mach){ mach.FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
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
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(reducer.s_termequal,var1.Deref(),var5.Deref(),mach.HC(continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_notinv_2::exec_static ;}
public static Operation exec_pred_t_rule1_8__2(Prolog mach){ mach.FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
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
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(Data.F(reducer.s7,var8,Data.F(reducer.s7,var2.Deref(),reducer.s_b)),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(reducer.s_inv,var1.Deref(),var6.Deref(),Data.F(reducer.s17,var1.Deref(),var5.Deref(),mach.HC(Data.F(reducer.s_t_trans,var1.Deref(),var5.Deref(),var7.Deref(),var8.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_notinv_2::exec_static ;}
public static Operation exec_pred_t_rule1_8__3(Prolog mach){ mach.FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
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
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(Data.F(reducer.s7,var5.Deref(),Data.F(reducer.s7,var8,reducer.s_c)),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = mach.HC(Data.F(reducer.s_t_trans,var1.Deref(),var2.Deref(),var4.Deref(),var8.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_notinv_2::exec_static ;}
public static Operation exec_pred_t_rule1_8__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[8] ;
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
if (!( (areg7).Unify(Data.F(reducer.s7,var8,Data.F(reducer.s7,var9,reducer.s_s)),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var9.Deref() ;
local_aregs[4] = Data.F(reducer.s_t_trans,var1.Deref(),var5.Deref(),var7.Deref(),var8.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_t_trans_4::exec_static ;}
}


public static class pred_t_rule2_9 extends Code {

/*

t_rule2(_4628,_4624,_4630,_4632,_4634,_4618,_4636,_4638,[_4618,_4624|c],_4646):-termequal(_4628,_4630,notinv(_4628,_4636,cut(1,_4646))).
t_rule2(_4710,_4706,_4712,_4714,_4716,_4718,_4720,_4722,[_4700,_4706|s],_4730):-termequal(_4710,_4712,cut(1,t_trans(_4710,_4718,_4722,_4700,_4730))).
t_rule2(_4804,_4800,_4806,_4808,_4810,_4788,_4812,_4814,[_4788,_4794,_4800|cp],_4822):-inv(_4804,_4808,notinv(_4804,_4812,cut(1,t_trans(_4804,_4806,_4810,_4794,_4822)))).
t_rule2(_4904,_4900,_4906,_4908,_4910,_4912,_4914,_4916,[_4888,_4894,_4900|sp],_4924):-inv(_4904,_4908,cut(1,t_trans(_4904,_4906,_4910,_4894,t_trans(_4904,_4912,_4916,_4888,_4924)))).
t_rule2(_4998,_4996,_4994,_5000,_5002,_5004,_5006,_5008,[_4994|_4996],_5016):-termequal(_4998,_5004,cut(1,_5016)).
t_rule2(_5078,_5074,_5068,_5080,_5082,_5084,_5086,_5088,[_5062,_5068,_5074|bp],_5096):-t_trans(_5078,_5084,_5088,_5062,_5096).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
Term aregs[] = mach.RegPull(9);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_t_rule2_9__1(mach); }
public static Operation exec_pred_t_rule2_9__1(Prolog mach){ mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__2) ;
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
if (!( (areg8).Unify(Data.F(reducer.s7,var6.Deref(),Data.F(reducer.s7,var2.Deref(),reducer.s_c)),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(reducer.s_notinv,var1.Deref(),var7.Deref(),mach.HC(continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_t_rule2_9__2(Prolog mach){ mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__3) ;
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
if (!( (areg8).Unify(Data.F(reducer.s7,var9,Data.F(reducer.s7,var2.Deref(),reducer.s_s)),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(reducer.s_t_trans,var1.Deref(),var6.Deref(),var8.Deref(),var9.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_t_rule2_9__3(Prolog mach){ mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__4) ;
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
if (!( (areg8).Unify(Data.F(reducer.s7,var6.Deref(),Data.F(reducer.s7,var9,Data.F(reducer.s7,var2.Deref(),reducer.s_cp))),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = Data.F(reducer.s_notinv,var1.Deref(),var7.Deref(),mach.HC(Data.F(reducer.s_t_trans,var1.Deref(),var3.Deref(),var5.Deref(),var9.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_inv_2::exec_static ;}
public static Operation exec_pred_t_rule2_9__4(Prolog mach){ mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__5) ;
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
if (!( (areg8).Unify(Data.F(reducer.s7,var9,Data.F(reducer.s7,var10,Data.F(reducer.s7,var2.Deref(),reducer.s_sp))),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = mach.HC(Data.F(reducer.s_t_trans,var1.Deref(),var3.Deref(),var5.Deref(),var10.Deref(),Data.F(reducer.s_t_trans,var1.Deref(),var6.Deref(),var8.Deref(),var9.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_inv_2::exec_static ;}
public static Operation exec_pred_t_rule2_9__5(Prolog mach){ mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__6) ;
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
if (!( (areg8).Unify(Data.F(reducer.s7,var3.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_termequal_2::exec_static ;}
public static Operation exec_pred_t_rule2_9__6(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg8).Unify(Data.F(reducer.s7,var9,Data.F(reducer.s7,var3.Deref(),Data.F(reducer.s7,var2.Deref(),reducer.s_bp))),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = var8.Deref() ;
local_aregs[3] = var9.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_t_trans_4::exec_static ;}
}


public static class pred_make_list_2 extends Code {

/*

make_list(_5138,_5138,_5146):-atomic(_5138,_5146).
make_list([_5170,_5176|_5178],[_5176|_5184],_5192):-list_functor_name(_5178,make_list(_5170,_5184,_5192)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_make_list_2__1(mach); }
public static Operation exec_pred_make_list_2__1(Prolog mach){ mach.FillAlternative(pred_make_list_2::exec_pred_make_list_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) reducer.s_atomic.FindProc(1) ;}
public static Operation exec_pred_make_list_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,Data.F(reducer.s7,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var2.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(reducer.s_make_list,var1.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_list_functor_name_1::exec_static ;}
}


public static class pred_listify_2 extends Code {

/*

listify(_5222,_5222,_5238):-or(var(_5222),atomic(_5222),cut(1,_5238)).
listify(_5274,[_5270|_5272],_5284):-functor(_5274,_5270,_5276,listify_list(1,_5276,_5274,_5272,_5284)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_listify_2__1(mach); }
public static Operation exec_pred_listify_2__1(Prolog mach){ mach.FillAlternative(pred_listify_2::exec_pred_listify_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(reducer.s_var,var1.Deref()) ;
local_aregs[1] = Data.F(reducer.s_atomic,var1.Deref()) ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_or_2::exec_static ;}
public static Operation exec_pred_listify_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(reducer.s_listify_list,reducer.posint1,var4.Deref(),var1.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) reducer.s_functor.FindProc(3) ;}
}


public static class pred_listify_list_4 extends Code {

/*

listify_list(_5322,_5324,_5326,[],_5334):-smallerthan(_5324,_5322,cut(1,_5334)).
listify_list(_5374,_5376,_5378,[_5370|_5372],_5396):-smallerorequal(_5374,_5376,cut(1,arg(_5374,_5378,_5380,listify(_5380,_5370,is(_5388,_5374+1,listify_list(_5388,_5376,_5378,_5372,_5396)))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_listify_list_4__1(mach); }
public static Operation exec_pred_listify_list_4__1(Prolog mach){ mach.FillAlternative(pred_listify_list_4::exec_pred_listify_list_4__2) ;
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
if (!( (areg3).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_listify_list_4__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg3).Unify(Data.F(reducer.s7,var4,var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(Data.F(reducer.s_arg,var1.Deref(),var3.Deref(),var6,Data.F(reducer.s_listify,var6.Deref(),var4.Deref(),Data.F(reducer.s_is,var7,Data.F(reducer.s2,var1.Deref(),reducer.posint1),Data.F(reducer.s_listify_list,var7.Deref(),var2.Deref(),var3.Deref(),var5.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
}


public static class pred_member_2 extends Code {

/*

member(_5470,[_5470|_5472],_5482):-call(_5482).
member(_5504,[_5500|_5502],_5512):-member(_5504,_5502,_5512).


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
if (!( (areg1).Unify(Data.F(reducer.s7,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
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
if (!( (areg1).Unify(Data.F(reducer.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_member_2::exec_static ;}
}


public static class pred_append_3 extends Code {

/*

append([],_5536,_5536,_5546):-call(_5546).
append([_5566|_5568],_5576,[_5566|_5574],_5584):-append(_5568,_5576,_5574,_5584).


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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(reducer.s7,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_append_3::exec_static ;}
}


public static class pred_intersectv_3 extends Code {

/*

intersectv([],_5612,[],_5622):-call(_5622).
intersectv([_5642|_5644],_5646,_5648,_5656):-intersectv_2(_5646,_5642,_5644,_5648,_5656).


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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
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

intersectv_2([],_5686,_5688,[],_5698):-call(_5698).
intersectv_2([_5720|_5722],_5724,_5726,_5728,_5738):-compare(_5730,_5724,_5720,intersectv_3(_5730,_5724,_5726,_5720,_5722,_5728,_5738)).


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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(reducer.s_intersectv_3,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation) reducer.s_compare.FindProc(3) ;}
}


public static class pred_intersectv_3_6 extends Code {

/*

intersectv_3(<,_5784,_5786,_5788,_5790,_5792,_5800):-intersectv_2(_5786,_5788,_5790,_5792,_5800).
intersectv_3(=,_5838,_5842,_5844,_5846,[_5838|_5840],_5854):-intersectv(_5842,_5846,_5840,_5854).
intersectv_3(>,_5888,_5890,_5892,_5894,_5896,_5904):-intersectv_2(_5894,_5888,_5890,_5896,_5904).


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
if (!( (areg0).Unify(reducer.s10,mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(reducer.s11,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(reducer.s7,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(reducer.s15,mach))) return Prolog.Fail0 ;
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


public static class pred_intersectv_list_2 extends Code {

/*

intersectv_list([],[],_5948):-call(_5948).
intersectv_list([_5966|_5968],_5970,_5978):-intersectv_list(_5968,_5966,_5970,_5978).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_intersectv_list_2__1(mach); }
public static Operation exec_pred_intersectv_list_2__1(Prolog mach){ mach.FillAlternative(pred_intersectv_list_2::exec_pred_intersectv_list_2__2) ;
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
public static Operation exec_pred_intersectv_list_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_intersectv_list_3::exec_static ;}
}


public static class pred_$002D$002D$003E_2 extends Code {

/*

-->(intersectv_list([]),[],_6016):-call(_6016).
-->(intersectv_list([_6034|_6036]),(intersectv(_6034),intersectv_list(_6036)),_6064):-call(_6064).


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
if (!( (areg0).Unify(Data.F(reducer.s_intersectv_list,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s_intersectv_list,Data.F(reducer.s7,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s3,Data.F(reducer.s_intersectv,var1.Deref()),Data.F(reducer.s_intersectv_list,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_diffv_3 extends Code {

/*

diffv([],_6080,[],_6090):-call(_6090).
diffv([_6110|_6112],_6114,_6116,_6124):-diffv_2(_6114,_6110,_6112,_6116,_6124).


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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
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

diffv_2([],_6156,_6158,[_6156|_6158],_6168):-call(_6168).
diffv_2([_6190|_6192],_6194,_6196,_6198,_6208):-compare(_6200,_6194,_6190,diffv_3(_6200,_6194,_6196,_6190,_6192,_6198,_6208)).


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
if (!( (areg3).Unify(Data.F(reducer.s7,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(reducer.s_diffv_3,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation) reducer.s_compare.FindProc(3) ;}
}


public static class pred_diffv_3_6 extends Code {

/*

diffv_3(<,_6256,_6260,_6262,_6264,[_6256|_6258],_6278):-diffv(_6260,[_6262|_6264],_6258,_6278).
diffv_3(=,_6312,_6314,_6316,_6318,_6320,_6328):-diffv(_6314,_6318,_6320,_6328).
diffv_3(>,_6362,_6364,_6366,_6368,_6370,_6378):-diffv_2(_6368,_6362,_6364,_6370,_6378).


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
if (!( (areg0).Unify(reducer.s10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(reducer.s7,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = Data.F(reducer.s7,var3.Deref(),var4.Deref()) ;
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
if (!( (areg0).Unify(reducer.s11,mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(reducer.s15,mach))) return Prolog.Fail0 ;
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

unionv([],_6414,_6414,_6424):-call(_6424).
unionv([_6444|_6446],_6448,_6450,_6458):-unionv_2(_6448,_6444,_6446,_6450,_6458).


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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
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

unionv_2([],_6490,_6492,[_6490|_6492],_6502):-call(_6502).
unionv_2([_6524|_6526],_6528,_6530,_6532,_6542):-compare(_6534,_6528,_6524,unionv_3(_6534,_6528,_6530,_6524,_6526,_6532,_6542)).


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
if (!( (areg3).Unify(Data.F(reducer.s7,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(reducer.s_unionv_3,var6.Deref(),var3.Deref(),var4.Deref(),var1.Deref(),var2.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = null ;
return (Operation) reducer.s_compare.FindProc(3) ;}
}


public static class pred_unionv_3_6 extends Code {

/*

unionv_3(<,_6590,_6594,_6596,_6598,[_6590|_6592],_6606):-unionv_2(_6594,_6596,_6598,_6592,_6606).
unionv_3(=,_6644,_6648,_6650,_6652,[_6644|_6646],_6660):-unionv(_6648,_6652,_6646,_6660).
unionv_3(>,_6700,_6702,_6696,_6704,[_6696|_6698],_6712):-unionv_2(_6704,_6700,_6702,_6698,_6712).


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
if (!( (areg0).Unify(reducer.s10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(reducer.s7,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(reducer.s11,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(reducer.s7,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(reducer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(reducer.s7,var3.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = null ;
return (Operation)pred_unionv_2_4::exec_static ;}
}


public static class pred_subsetv_2 extends Code {

/*

subsetv([],_6748,_6758):-call(_6758).
subsetv([_6776|_6778],[_6782|_6784],_6794):-compare(_6786,_6776,_6782,subsetv_2(_6786,_6776,_6778,_6784,_6794)).


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
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(reducer.s7,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = Data.F(reducer.s_subsetv_2,var5.Deref(),var1.Deref(),var2.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) reducer.s_compare.FindProc(3) ;}
}


public static class pred_subsetv_2_4 extends Code {

/*

subsetv_2(=,_6832,_6834,_6836,_6844):-subsetv(_6834,_6836,_6844).
subsetv_2(>,_6872,_6874,_6876,_6890):-subsetv([_6872|_6874],_6876,_6890).


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
if (!( (areg0).Unify(reducer.s11,mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(reducer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(reducer.s7,var1.Deref(),var2.Deref()) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_subsetv_2::exec_static ;}
}


public static class pred_small_subsetv_2 extends Code {

/*

small_subsetv([],_6918,_6928):-call(_6928).
small_subsetv([_6946|_6948],_6950,_6958):-inv(_6946,_6950,small_subsetv(_6948,_6950,_6958)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_small_subsetv_2__1(mach); }
public static Operation exec_pred_small_subsetv_2__1(Prolog mach){ mach.FillAlternative(pred_small_subsetv_2::exec_pred_small_subsetv_2__2) ;
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
public static Operation exec_pred_small_subsetv_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = Data.F(reducer.s_small_subsetv,var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_inv_2::exec_static ;}
}


public static class pred_inv_2 extends Code {

/*

inv(_6996,[_6992|_6994],_7006):-compare(_6998,_6996,_6992,inv_2(_6998,_6996,_6994,_7006)).


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
if (!( (areg1).Unify(Data.F(reducer.s7,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = Data.F(reducer.s_inv_2,var4.Deref(),var1.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) reducer.s_compare.FindProc(3) ;}
}


public static class pred_inv_2_3 extends Code {

/*

inv_2(=,_7042,_7044,_7054):-call(_7054).
inv_2(>,_7072,_7074,_7082):-inv(_7072,_7074,_7082).


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
if (!( (areg0).Unify(reducer.s11,mach))) return Prolog.Fail0 ;
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
if (!( (areg0).Unify(reducer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_inv_2::exec_static ;}
}


public static class pred_notinv_2 extends Code {

/*

notinv(_7108,_7110,_7118):-notinv_2(_7110,_7108,_7118).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_notinv_2__1(mach); }
public static Operation exec_pred_notinv_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_notinv_2_2::exec_static ;}
}


public static class pred_notinv_2_2 extends Code {

/*

notinv_2([],_7142,_7152):-call(_7152).
notinv_2([_7170|_7172],_7174,_7184):-compare(_7176,_7174,_7170,notinv_3(_7176,_7174,_7172,_7184)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_notinv_2_2__1(mach); }
public static Operation exec_pred_notinv_2_2__1(Prolog mach){ mach.FillAlternative(pred_notinv_2_2::exec_pred_notinv_2_2__2) ;
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
public static Operation exec_pred_notinv_2_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(reducer.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = Data.F(reducer.s_notinv_3,var4.Deref(),var3.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) reducer.s_compare.FindProc(3) ;}
}


public static class pred_notinv_3_3 extends Code {

/*

notinv_3(<,_7220,_7222,_7232):-call(_7232).
notinv_3(>,_7250,_7252,_7260):-notinv_2(_7252,_7250,_7260).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_notinv_3_3__1(mach); }
public static Operation exec_pred_notinv_3_3__1(Prolog mach){ mach.FillAlternative(pred_notinv_3_3::exec_pred_notinv_3_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_notinv_3_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(reducer.s15,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_notinv_2_2::exec_static ;}
}


}


