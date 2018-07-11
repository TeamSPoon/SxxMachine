package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class boyer /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern(" milliseconds") ;
final static Const s2 = Data.Intern(",") ;
final static Const s3 = Data.Intern("-") ;
final static Const s4 = Data.Intern("->") ;
final static Const s5 = Data.Intern(".") ;
final static Const s6 = Data.Intern(":-") ;
final static Const s7 = Data.Intern(";") ;
final static Const s8 = Data.Intern("=") ;
final static Const s_a = Data.Intern("a") ;
final static Const s_add1 = Data.Intern("add1") ;
final static Const s_and = Data.Intern("and") ;
final static Const s_append = Data.Intern("append") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_assignedp = Data.Intern("assignedp") ;
final static Const s_assignment = Data.Intern("assignment") ;
final static Const s_assume_false = Data.Intern("assume_false") ;
final static Const s_assume_true = Data.Intern("assume_true") ;
final static Const s_atomic = Data.Intern("atomic") ;
final static Const s_b = Data.Intern("b") ;
final static Const s_big_plus = Data.Intern("big_plus") ;
final static Const s_big_plus1 = Data.Intern("big_plus1") ;
final static Const s_boolean = Data.Intern("boolean") ;
final static Const s_boyer_difference = Data.Intern("boyer_difference") ;
final static Const s_boyer_member = Data.Intern("boyer_member") ;
final static Const s_c = Data.Intern("c") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_car = Data.Intern("car") ;
final static Const s_cdr = Data.Intern("cdr") ;
final static Const s_codegen = Data.Intern("codegen") ;
final static Const s_compile = Data.Intern("compile") ;
final static Const s_cons = Data.Intern("cons") ;
final static Const s_count_list = Data.Intern("count_list") ;
final static Const s_countps_ = Data.Intern("countps_") ;
final static Const s_countps_loop = Data.Intern("countps_loop") ;
final static Const s_d = Data.Intern("d") ;
final static Const s_decr = Data.Intern("decr") ;
final static Const s_delete = Data.Intern("delete") ;
final static Const s_divides = Data.Intern("divides") ;
final static Const s_dsort = Data.Intern("dsort") ;
final static Const s_eq = Data.Intern("eq") ;
final static Const s_eqp = Data.Intern("eqp") ;
final static Const s_equal = Data.Intern("equal") ;
final static Const s_even1 = Data.Intern("even1") ;
final static Const s_exec = Data.Intern("exec") ;
final static Const s46 = Data.Intern("execution time is ") ;
final static Const s_exp = Data.Intern("exp") ;
final static Const s_f = Data.Intern("f") ;
final static Const s_fact_ = Data.Intern("fact_") ;
final static Const s_fact_loop = Data.Intern("fact_loop") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_falsep = Data.Intern("falsep") ;
final static Const s_falsify = Data.Intern("falsify") ;
final static Const s_falsify1 = Data.Intern("falsify1") ;
final static Const s_fix = Data.Intern("fix") ;
final static Const s_flatten = Data.Intern("flatten") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_gcd = Data.Intern("gcd") ;
final static Const s_get = Data.Intern("get") ;
final static Const s_go = Data.Intern("go") ;
final static Const s_gopher = Data.Intern("gopher") ;
final static Const s_greatereqp = Data.Intern("greatereqp") ;
final static Const s_greatereqpr = Data.Intern("greatereqpr") ;
final static Const s_greaterp = Data.Intern("greaterp") ;
final static Const s_greatest_factor = Data.Intern("greatest_factor") ;
final static Const s_if = Data.Intern("if") ;
final static Const s_iff = Data.Intern("iff") ;
final static Const s_implies = Data.Intern("implies") ;
final static Const s_intersect = Data.Intern("intersect") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_last = Data.Intern("last") ;
final static Const s_length = Data.Intern("length") ;
final static Const s_lesseqp = Data.Intern("lesseqp") ;
final static Const s_lessp = Data.Intern("lessp") ;
final static Const s_listp = Data.Intern("listp") ;
final static Const s_mc_flatten = Data.Intern("mc_flatten") ;
final static Const s_meaning = Data.Intern("meaning") ;
final static Const s_myboyer_member = Data.Intern("myboyer_member") ;
final static Const s_mylength = Data.Intern("mylength") ;
final static Const s_myplus = Data.Intern("myplus") ;
final static Const s_nlistp = Data.Intern("nlistp") ;
final static Const s_normalize = Data.Intern("normalize") ;
final static Const s_not = Data.Intern("not") ;
final static Const s_nth = Data.Intern("nth") ;
final static Const s_numberp = Data.Intern("numberp") ;
final static Const s_odd = Data.Intern("odd") ;
final static Const s_optimize = Data.Intern("optimize") ;
final static Const s_or = Data.Intern("or") ;
final static Const s_plus_fringe = Data.Intern("plus_fringe") ;
final static Const s_plus_tree = Data.Intern("plus_tree") ;
final static Const s_power_eval = Data.Intern("power_eval") ;
final static Const s_power_rep = Data.Intern("power_rep") ;
final static Const s_prime = Data.Intern("prime") ;
final static Const s_prime1 = Data.Intern("prime1") ;
final static Const s_prime_list = Data.Intern("prime_list") ;
final static Const s_quotient = Data.Intern("quotient") ;
final static Const s_remainder = Data.Intern("remainder") ;
final static Const s_reverse = Data.Intern("reverse") ;
final static Const s_reverse_ = Data.Intern("reverse_") ;
final static Const s_reverse_loop = Data.Intern("reverse_loop") ;
final static Const s_rewrite = Data.Intern("rewrite") ;
final static Const s_rewrite_args = Data.Intern("rewrite_args") ;
final static Const s_runtime = Data.Intern("runtime") ;
final static Const s_samefringe = Data.Intern("samefringe") ;
final static Const s_set = Data.Intern("set") ;
final static Const s_sigma = Data.Intern("sigma") ;
final static Const s_sort2 = Data.Intern("sort2") ;
final static Const s_sort_lp = Data.Intern("sort_lp") ;
final static Const s_statistics = Data.Intern("statistics") ;
final static Const s_t = Data.Intern("t") ;
final static Const s_tautology = Data.Intern("tautology") ;
final static Const s_tautology_checker = Data.Intern("tautology_checker") ;
final static Const s_tautologyp = Data.Intern("tautologyp") ;
final static Const s_times = Data.Intern("times") ;
final static Const s_times_list = Data.Intern("times_list") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_truep = Data.Intern("truep") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_value = Data.Intern("value") ;
final static Const s_wff = Data.Intern("wff") ;
final static Const s_write = Data.Intern("write") ;
final static Const s_x = Data.Intern("x") ;
final static Const s_y = Data.Intern("y") ;
final static Const s_zero = Data.Intern("zero") ;
final static Const s_zerop = Data.Intern("zerop") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint6 = Data.Number(6L) ;
final static Operation reg_go_0 = PredTable.Register("go",0, new pred_go_0());
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_wff_1 = PredTable.Register("wff",1, new pred_wff_1());
final static Operation reg_tautology_1 = PredTable.Register("tautology",1, new pred_tautology_1());
final static Operation reg_tautology_3 = PredTable.Register("tautology",3, new pred_tautology_3());
final static Operation reg_rewrite_2 = PredTable.Register("rewrite",2, new pred_rewrite_2());
final static Operation reg_rewrite_args_3 = PredTable.Register("rewrite_args",3, new pred_rewrite_args_3());
final static Operation reg_truep_2 = PredTable.Register("truep",2, new pred_truep_2());
final static Operation reg_falsep_2 = PredTable.Register("falsep",2, new pred_falsep_2());
final static Operation reg_boyer_member_2 = PredTable.Register("boyer_member",2, new pred_boyer_member_2());
final static Operation reg_equal_2 = PredTable.Register("equal",2, new pred_equal_2());
final static Operation reg_boyer_difference_3 = PredTable.Register("boyer_difference",3, new pred_boyer_difference_3());
final static Operation reg_eq_3 = PredTable.Register("eq",3, new pred_eq_3());
final static Operation reg_exp_3 = PredTable.Register("exp",3, new pred_exp_3());
final static Operation reg_gcd_3 = PredTable.Register("gcd",3, new pred_gcd_3());
final static Operation reg_mylength_2 = PredTable.Register("mylength",2, new pred_mylength_2());
final static Operation reg_lessp_3 = PredTable.Register("lessp",3, new pred_lessp_3());
final static Operation reg_meaning_3 = PredTable.Register("meaning",3, new pred_meaning_3());
final static Operation reg_myboyer_member_3 = PredTable.Register("myboyer_member",3, new pred_myboyer_member_3());
final static Operation reg_nth_3 = PredTable.Register("nth",3, new pred_nth_3());
final static Operation reg_myplus_3 = PredTable.Register("myplus",3, new pred_myplus_3());
final static Operation reg_power_eval_3 = PredTable.Register("power_eval",3, new pred_power_eval_3());
final static Operation reg_quotient_3 = PredTable.Register("quotient",3, new pred_quotient_3());
final static Operation reg_remainder_3 = PredTable.Register("remainder",3, new pred_remainder_3());
final static Operation reg_reverse_loop_3 = PredTable.Register("reverse_loop",3, new pred_reverse_loop_3());
final static Operation reg_times_3 = PredTable.Register("times",3, new pred_times_3());
public static class pred_go_0 extends Code {

/*

go(_5648):-statistics(runtime,[_5522,_5528],wff(_5540,rewrite(_5540,_5546,tautology(_5546,[],[],statistics(runtime,[_5558,_5564],write('execution time is ',write(_5564,write(' milliseconds',_5648)))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_go_0__1(mach); }
public static Operation exec_pred_go_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = boyer.s_runtime ;
local_aregs[1] = Data.F(boyer.s5,var1,Data.F(boyer.s5,var2,Const.Nil)) ;
local_aregs[2] = Data.F(boyer.s_wff,var3,Data.F(boyer.s_rewrite,var3.Deref(),var4,Data.F(boyer.s_tautology,var4.Deref(),Const.Nil,Const.Nil,Data.F(boyer.s_statistics,boyer.s_runtime,Data.F(boyer.s5,var5,Data.F(boyer.s5,var6,Const.Nil)),Data.F(boyer.s_write,boyer.s46,Data.F(boyer.s_write,var6.Deref(),Data.F(boyer.s_write,boyer.s1,continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) boyer.s_statistics.FindProc(2) ;}
}


public static class pred_top_0 extends Code {

/*

top(_6082):-wff(_6034,rewrite(_6034,_6040,tautology(_6040,[],[],_6082))).


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
local_aregs[0] = var1 ;
local_aregs[1] = Data.F(boyer.s_rewrite,var1.Deref(),var2,Data.F(boyer.s_tautology,var2.Deref(),Const.Nil,Const.Nil,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_wff_1::exec_static ;}
}


public static class pred_wff_1 extends Code {

/*

wff(implies(and(implies(_6266,_6268),and(implies(_6268,_6274),and(implies(_6274,_6280),implies(_6280,_6286)))),implies(_6266,_6286)),_6506):-unify(f(myplus(myplus(a,b),myplus(c,zero))),_6266,unify(f(times(times(a,b),myplus(c,d))),_6268,unify(f(reverse(append(append(a,b),[]))),_6274,unify(equal(myplus(a,b),boyer_difference(x,y)),_6280,unify(lessp(remainder(a,b),boyer_member(a,length(b))),_6286,_6506))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_wff_1__1(mach); }
public static Operation exec_pred_wff_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_implies,Data.F(boyer.s_and,Data.F(boyer.s_implies,var1,var2),Data.F(boyer.s_and,Data.F(boyer.s_implies,var2.Deref(),var3),Data.F(boyer.s_and,Data.F(boyer.s_implies,var3.Deref(),var4),Data.F(boyer.s_implies,var4.Deref(),var5)))),Data.F(boyer.s_implies,var1.Deref(),var5.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(boyer.s_f,Data.F(boyer.s_myplus,Data.F(boyer.s_myplus,boyer.s_a,boyer.s_b),Data.F(boyer.s_myplus,boyer.s_c,boyer.s_zero))) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(boyer.s_unify,Data.F(boyer.s_f,Data.F(boyer.s_times,Data.F(boyer.s_times,boyer.s_a,boyer.s_b),Data.F(boyer.s_myplus,boyer.s_c,boyer.s_d))),var2.Deref(),Data.F(boyer.s_unify,Data.F(boyer.s_f,Data.F(boyer.s_reverse,Data.F(boyer.s_append,Data.F(boyer.s_append,boyer.s_a,boyer.s_b),Const.Nil))),var3.Deref(),Data.F(boyer.s_unify,Data.F(boyer.s_equal,Data.F(boyer.s_myplus,boyer.s_a,boyer.s_b),Data.F(boyer.s_boyer_difference,boyer.s_x,boyer.s_y)),var4.Deref(),Data.F(boyer.s_unify,Data.F(boyer.s_lessp,Data.F(boyer.s_remainder,boyer.s_a,boyer.s_b),Data.F(boyer.s_boyer_member,boyer.s_a,Data.F(boyer.s_length,boyer.s_b))),var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_unify_2::exec_static ;}
}


public static class pred_tautology_1 extends Code {

/*

tautology(_6834,_6882):-rewrite(_6834,_6840,tautology(_6840,[],[],_6882)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_tautology_1__1(mach); }
public static Operation exec_pred_tautology_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = Data.F(boyer.s_tautology,var2.Deref(),Const.Nil,Const.Nil,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_rewrite_2::exec_static ;}
}


public static class pred_tautology_3 extends Code {

/*

tautology(_7050,_7052,_7054,_7242):-or((truep(_7050,_7052)->true),(falsep(_7050,_7054)->fail;_7050=if(_7082,_7084,_7086)->(truep(_7082,_7052)->tautology(_7084,_7052,_7054);falsep(_7082,_7054)->tautology(_7086,_7052,_7054);tautology(_7084,[_7082|_7052],_7054),tautology(_7086,_7052,[_7082|_7054]))),cut(1,_7242)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_tautology_3__1(mach); }
public static Operation exec_pred_tautology_3__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = Data.F(boyer.s4,Data.F(boyer.s_truep,var1.Deref(),var2.Deref()),boyer.s_true) ;
local_aregs[1] = Data.F(boyer.s7,Data.F(boyer.s4,Data.F(boyer.s_falsep,var1.Deref(),var3.Deref()),boyer.s_fail),Data.F(boyer.s4,Data.F(boyer.s8,var1.Deref(),Data.F(boyer.s_if,var4,var5,var6)),Data.F(boyer.s7,Data.F(boyer.s4,Data.F(boyer.s_truep,var4.Deref(),var2.Deref()),Data.F(boyer.s_tautology,var5.Deref(),var2.Deref(),var3.Deref())),Data.F(boyer.s7,Data.F(boyer.s4,Data.F(boyer.s_falsep,var4.Deref(),var3.Deref()),Data.F(boyer.s_tautology,var6.Deref(),var2.Deref(),var3.Deref())),Data.F(boyer.s2,Data.F(boyer.s_tautology,var5.Deref(),Data.F(boyer.s5,var4.Deref(),var2.Deref()),var3.Deref()),Data.F(boyer.s_tautology,var6.Deref(),var2.Deref(),Data.F(boyer.s5,var4.Deref(),var3.Deref()))))))) ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_or_2::exec_static ;}
}


public static class pred_rewrite_2 extends Code {

/*

rewrite(_7380,_7380,_7426):-atomic(_7380,cut(1,_7426)).
rewrite(_7542,_7544,_7656):-functor(_7542,_7550,_7552,functor(_7556,_7550,_7552,rewrite_args(_7552,_7542,_7556,or((equal(_7556,_7574),rewrite(_7574,_7544)),_7544=_7556,cut(1,_7656))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rewrite_2__1(mach); }
public static Operation exec_pred_rewrite_2__1(Prolog mach){ mach.FillAlternative(pred_rewrite_2::exec_pred_rewrite_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation) boyer.s_atomic.FindProc(1) ;}
public static Operation exec_pred_rewrite_2__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(boyer.s_functor,var5,var3.Deref(),var4.Deref(),Data.F(boyer.s_rewrite_args,var4.Deref(),var1.Deref(),var5.Deref(),Data.F(boyer.s_or,Data.F(boyer.s2,Data.F(boyer.s_equal,var5.Deref(),var6),Data.F(boyer.s_rewrite,var6.Deref(),var2.Deref())),Data.F(boyer.s8,var2.Deref(),var5.Deref()),mach.HC(continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) boyer.s_functor.FindProc(3) ;}
}


public static class pred_rewrite_args_3 extends Code {

/*

rewrite_args(0,_7986,_7988,_8028):-cut(1,_8028).
rewrite_args(_8122,_8124,_8126,_8232):-arg(_8122,_8124,_8134,arg(_8122,_8126,_8142,rewrite(_8134,_8142,is(_8158,_8122-1,rewrite_args(_8158,_8124,_8126,_8232))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rewrite_args_3__1(mach); }
public static Operation exec_pred_rewrite_args_3__1(Prolog mach){ mach.FillAlternative(pred_rewrite_args_3::exec_pred_rewrite_args_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(boyer.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_rewrite_args_3__2(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(boyer.s_arg,var1.Deref(),var3.Deref(),var5,Data.F(boyer.s_rewrite,var4.Deref(),var5.Deref(),Data.F(boyer.s_is,var6,Data.F(boyer.s3,var1.Deref(),boyer.posint1),Data.F(boyer.s_rewrite_args,var6.Deref(),var2.Deref(),var3.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) boyer.s_arg.FindProc(3) ;}
}


public static class pred_truep_2 extends Code {

/*

truep(t,_8614,_8648):-cut(1,_8648).
truep(_8740,_8742,_8782):-boyer_member(_8740,_8742,_8782).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_truep_2__1(mach); }
public static Operation exec_pred_truep_2__1(Prolog mach){ mach.FillAlternative(pred_truep_2::exec_pred_truep_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(boyer.s_t,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_truep_2__2(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_boyer_member_2::exec_static ;}
}


public static class pred_falsep_2 extends Code {

/*

falsep(f,_8920,_8954):-cut(1,_8954).
falsep(_9052,_9054,_9094):-boyer_member(_9052,_9054,_9094).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_falsep_2__1(mach); }
public static Operation exec_pred_falsep_2__1(Prolog mach){ mach.FillAlternative(pred_falsep_2::exec_pred_falsep_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(boyer.s_f,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_falsep_2__2(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_boyer_member_2::exec_static ;}
}


public static class pred_boyer_member_2 extends Code {

/*

boyer_member(_9236,[_9236|_9238],_9278):-cut(1,_9278).
boyer_member(_9388,[_9382|_9384],_9430):-boyer_member(_9388,_9384,_9430).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_boyer_member_2__1(mach); }
public static Operation exec_pred_boyer_member_2__1(Prolog mach){ mach.FillAlternative(pred_boyer_member_2::exec_pred_boyer_member_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s5,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_boyer_member_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s5,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_boyer_member_2::exec_static ;}
}


public static class pred_equal_2 extends Code {

/*

equal(and(_9578,_9580),if(_9578,if(_9580,t,f),f),_9624):-call(_9624).
equal(append(append(_9750,_9752),_9758),append(_9750,append(_9752,_9758)),_9798):-call(_9798).
equal(assignment(_9930,append(_9924,_9926)),if(assignedp(_9930,_9924),assignment(_9930,_9924),assignment(_9930,_9926)),_9986):-call(_9986).
equal(assume_false(_10112,_10114),cons(cons(_10112,f),_10114),_10154):-call(_10154).
equal(assume_true(_10280,_10282),cons(cons(_10280,t),_10282),_10322):-call(_10322).
equal(boolean(_10448),or(equal(_10448,t),equal(_10448,f)),_10494):-call(_10494).
equal(car(gopher(_10620)),if(listp(_10620),car(flatten(_10620)),zero),_10672):-call(_10672).
equal(compile(_10798),reverse(codegen(optimize(_10798),[])),_10840):-call(_10840).
equal(count_list(_10972,sort_lp(_10966,_10968)),myplus(count_list(_10972,_10966),count_list(_10972,_10968)),_11020):-call(_11020).
equal(countps_(_11146,_11148),countps_loop(_11146,_11148,zero),_11184):-call(_11184).
equal(boyer_difference(_11310,_11312),_11318,_11360):-boyer_difference(_11310,_11312,_11318,_11360).
equal(divides(_11528,_11530),zerop(remainder(_11530,_11528)),_11568):-call(_11568).
equal(dsort(_11694),sort2(_11694),_11726):-call(_11726).
equal(eqp(_11852,_11854),equal(fix(_11852),fix(_11854)),_11896):-call(_11896).
equal(equal(_12022,_12024),_12030,_12072):-eq(_12022,_12024,_12030,_12072).
equal(even1(_12240),if(zerop(_12240),t,odd(decr(_12240))),_12288):-call(_12288).
equal(exec(append(_12414,_12416),_12422,_12424),exec(_12416,exec(_12414,_12422,_12424),_12424),_12468):-call(_12468).
equal(exp(_12594,_12596),_12602,_12644):-exp(_12594,_12596,_12602,_12644).
equal(fact_(_12812),fact_loop(_12812,1),_12846):-call(_12846).
equal(falsify(_12972),falsify1(normalize(_12972),[]),_13010):-call(_13010).
equal(fix(_13136),if(numberp(_13136),_13136,zero),_13176):-call(_13176).
equal(flatten(cdr(gopher(_13302))),if(listp(_13302),cdr(flatten(_13302)),cons(zero,[])),_13364):-call(_13364).
equal(gcd(_13490,_13492),_13498,_13540):-gcd(_13490,_13492,_13498,_13540).
equal(get(_13716,set(_13708,_13710,_13712)),if(eqp(_13716,_13708),_13710,get(_13716,_13712)),_13766):-call(_13766).
equal(greatereqp(_13892,_13894),not(lessp(_13892,_13894)),_13932):-call(_13932).
equal(greatereqpr(_14058,_14060),not(lessp(_14058,_14060)),_14098):-call(_14098).
equal(greaterp(_14224,_14226),lessp(_14226,_14224),_14260):-call(_14260).
equal(if(if(_14386,_14388,_14390),_14396,_14398),if(_14386,if(_14388,_14396,_14398),if(_14390,_14396,_14398)),_14450):-call(_14450).
equal(iff(_14576,_14578),and(implies(_14576,_14578),implies(_14578,_14576)),_14624):-call(_14624).
equal(implies(_14750,_14752),if(_14750,if(_14752,t,f),t),_14796):-call(_14796).
equal(last(append(_14922,_14924)),if(listp(_14924),last(_14924),if(listp(_14922),cons(car(last(_14922))),_14924)),_14996):-call(_14996).
equal(length(_15122),_15128,_15168):-mylength(_15122,_15128,_15168).
equal(lesseqp(_15322,_15324),not(lessp(_15324,_15322)),_15362):-call(_15362).
equal(lessp(_15488,_15490),_15496,_15538):-lessp(_15488,_15490,_15496,_15538).
equal(listp(gopher(_15706)),listp(_15706),_15742):-call(_15742).
equal(mc_flatten(_15868,_15870),append(flatten(_15868),_15870),_15908):-call(_15908).
equal(meaning(_16034,_16036),_16042,_16084):-meaning(_16034,_16036,_16042,_16084).
equal(boyer_member(_16252,_16254),_16260,_16302):-myboyer_member(_16252,_16254,_16260,_16302).
equal(not(_16470),if(_16470,f,t),_16506):-call(_16506).
equal(nth(_16632,_16634),_16640,_16682):-nth(_16632,_16634,_16640,_16682).
equal(numberp(greatest_factor(_16850,_16852)),not(and(or(zerop(_16852),equal(_16852,1)),not(numberp(_16850)))),_16918):-call(_16918).
equal(or(_17044,_17046),if(_17044,t,if(_17046,t,f),f),_17092):-call(_17092).
equal(myplus(_17218,_17220),_17226,_17268):-myplus(_17218,_17220,_17226,_17268).
equal(power_eval(_17436,_17438),_17444,_17486):-power_eval(_17436,_17438,_17444,_17486).
equal(prime(_17654),and(not(zerop(_17654)),and(not(equal(_17654,add1(zero))),prime1(_17654,decr(_17654)))),_17726):-call(_17726).
equal(prime_list(append(_17852,_17854)),and(prime_list(_17852),prime_list(_17854)),_17900):-call(_17900).
equal(quotient(_18026,_18028),_18034,_18076):-quotient(_18026,_18028,_18034,_18076).
equal(remainder(_18244,_18246),_18252,_18294):-remainder(_18244,_18246,_18252,_18294).
equal(reverse_(_18462),reverse_loop(_18462,[]),_18496):-call(_18496).
equal(reverse(append(_18622,_18624)),append(reverse(_18624),reverse(_18622)),_18670):-call(_18670).
equal(reverse_loop(_18796,_18798),_18804,_18846):-reverse_loop(_18796,_18798,_18804,_18846).
equal(samefringe(_19014,_19016),equal(flatten(_19014),flatten(_19016)),_19058):-call(_19058).
equal(sigma(zero,_19186),quotient(times(_19186,add1(_19186)),2),_19230):-call(_19230).
equal(sort2(delete(_19356,_19358)),delete(_19356,sort2(_19358)),_19400):-call(_19400).
equal(tautology_checker(_19526),tautologyp(normalize(_19526),[]),_19564):-call(_19564).
equal(times(_19690,_19692),_19698,_19740):-times(_19690,_19692,_19698,_19740).
equal(times_list(append(_19908,_19910)),times(times_list(_19908),times_list(_19910)),_19956):-call(_19956).
equal(value(normalize(_20082),_20088),value(_20082,_20088),_20122):-call(_20122).
equal(zerop(_20248),or(equal(_20248,zero),not(numberp(_20248))),_20296):-call(_20296).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_equal_2__1(mach); }
public static Operation exec_pred_equal_2__1(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_and,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,var1.Deref(),Data.F(boyer.s_if,var2.Deref(),boyer.s_t,boyer.s_f),boyer.s_f),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__2(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_append,Data.F(boyer.s_append,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_append,var1.Deref(),Data.F(boyer.s_append,var2.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__3(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_assignment,var1,Data.F(boyer.s_append,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,Data.F(boyer.s_assignedp,var1.Deref(),var2.Deref()),Data.F(boyer.s_assignment,var1.Deref(),var2.Deref()),Data.F(boyer.s_assignment,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__4(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_assume_false,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_cons,Data.F(boyer.s_cons,var1.Deref(),boyer.s_f),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__5(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_assume_true,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_cons,Data.F(boyer.s_cons,var1.Deref(),boyer.s_t),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__6(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_boolean,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_or,Data.F(boyer.s_equal,var1.Deref(),boyer.s_t),Data.F(boyer.s_equal,var1.Deref(),boyer.s_f)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__7(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_car,Data.F(boyer.s_gopher,var1)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,Data.F(boyer.s_listp,var1.Deref()),Data.F(boyer.s_car,Data.F(boyer.s_flatten,var1.Deref())),boyer.s_zero),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__8(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_compile,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_reverse,Data.F(boyer.s_codegen,Data.F(boyer.s_optimize,var1.Deref()),Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__9(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_count_list,var1,Data.F(boyer.s_sort_lp,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,Data.F(boyer.s_count_list,var1.Deref(),var2.Deref()),Data.F(boyer.s_count_list,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__10(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_countps_,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_countps_loop,var1.Deref(),var2.Deref(),boyer.s_zero),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__11(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_boyer_difference,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_boyer_difference_3::exec_static ;}
public static Operation exec_pred_equal_2__12(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_divides,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_zerop,Data.F(boyer.s_remainder,var2.Deref(),var1.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__13(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_dsort,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_sort2,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__14(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_eqp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_equal,Data.F(boyer.s_fix,var1.Deref()),Data.F(boyer.s_fix,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__15(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_equal,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_eq_3::exec_static ;}
public static Operation exec_pred_equal_2__16(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_even1,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,Data.F(boyer.s_zerop,var1.Deref()),boyer.s_t,Data.F(boyer.s_odd,Data.F(boyer.s_decr,var1.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__17(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_exec,Data.F(boyer.s_append,var1,var2),var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_exec,var2.Deref(),Data.F(boyer.s_exec,var1.Deref(),var3.Deref(),var4.Deref()),var4.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__18(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_exp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_exp_3::exec_static ;}
public static Operation exec_pred_equal_2__19(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_fact_,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_fact_loop,var1.Deref(),boyer.posint1),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__20(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_falsify,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_falsify1,Data.F(boyer.s_normalize,var1.Deref()),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__21(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_fix,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,Data.F(boyer.s_numberp,var1.Deref()),var1.Deref(),boyer.s_zero),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__22(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_flatten,Data.F(boyer.s_cdr,Data.F(boyer.s_gopher,var1))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,Data.F(boyer.s_listp,var1.Deref()),Data.F(boyer.s_cdr,Data.F(boyer.s_flatten,var1.Deref())),Data.F(boyer.s_cons,boyer.s_zero,Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__23(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_gcd,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_gcd_3::exec_static ;}
public static Operation exec_pred_equal_2__24(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_get,var1,Data.F(boyer.s_set,var2,var3,var4)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,Data.F(boyer.s_eqp,var1.Deref(),var2.Deref()),var3.Deref(),Data.F(boyer.s_get,var1.Deref(),var4.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__25(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_greatereqp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_not,Data.F(boyer.s_lessp,var1.Deref(),var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__26(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_greatereqpr,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_not,Data.F(boyer.s_lessp,var1.Deref(),var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__27(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_greaterp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_lessp,var2.Deref(),var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__28(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__29) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_if,Data.F(boyer.s_if,var1,var2,var3),var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,var1.Deref(),Data.F(boyer.s_if,var2.Deref(),var4.Deref(),var5.Deref()),Data.F(boyer.s_if,var3.Deref(),var4.Deref(),var5.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__29(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__30) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_iff,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_and,Data.F(boyer.s_implies,var1.Deref(),var2.Deref()),Data.F(boyer.s_implies,var2.Deref(),var1.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__30(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__31) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_implies,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,var1.Deref(),Data.F(boyer.s_if,var2.Deref(),boyer.s_t,boyer.s_f),boyer.s_t),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__31(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__32) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_last,Data.F(boyer.s_append,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,Data.F(boyer.s_listp,var2.Deref()),Data.F(boyer.s_last,var2.Deref()),Data.F(boyer.s_if,Data.F(boyer.s_listp,var1.Deref()),Data.F(boyer.s_cons,Data.F(boyer.s_car,Data.F(boyer.s_last,var1.Deref()))),var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__32(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__33) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_length,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_mylength_2::exec_static ;}
public static Operation exec_pred_equal_2__33(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__34) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_lesseqp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_not,Data.F(boyer.s_lessp,var2.Deref(),var1.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__34(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__35) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_lessp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_lessp_3::exec_static ;}
public static Operation exec_pred_equal_2__35(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__36) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_listp,Data.F(boyer.s_gopher,var1)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_listp,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__36(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__37) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_mc_flatten,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_append,Data.F(boyer.s_flatten,var1.Deref()),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__37(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__38) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_meaning,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_meaning_3::exec_static ;}
public static Operation exec_pred_equal_2__38(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__39) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_boyer_member,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_myboyer_member_3::exec_static ;}
public static Operation exec_pred_equal_2__39(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__40) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_not,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,var1.Deref(),boyer.s_f,boyer.s_t),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__40(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__41) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_nth,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_nth_3::exec_static ;}
public static Operation exec_pred_equal_2__41(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__42) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_numberp,Data.F(boyer.s_greatest_factor,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_not,Data.F(boyer.s_and,Data.F(boyer.s_or,Data.F(boyer.s_zerop,var2.Deref()),Data.F(boyer.s_equal,var2.Deref(),boyer.posint1)),Data.F(boyer.s_not,Data.F(boyer.s_numberp,var1.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__42(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__43) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_or,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_if,var1.Deref(),boyer.s_t,Data.F(boyer.s_if,var2.Deref(),boyer.s_t,boyer.s_f),boyer.s_f),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__43(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__44) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_myplus_3::exec_static ;}
public static Operation exec_pred_equal_2__44(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__45) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_power_eval,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_power_eval_3::exec_static ;}
public static Operation exec_pred_equal_2__45(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__46) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_prime,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_zerop,var1.Deref())),Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_equal,var1.Deref(),Data.F(boyer.s_add1,boyer.s_zero))),Data.F(boyer.s_prime1,var1.Deref(),Data.F(boyer.s_decr,var1.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__46(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__47) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_prime_list,Data.F(boyer.s_append,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_and,Data.F(boyer.s_prime_list,var1.Deref()),Data.F(boyer.s_prime_list,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__47(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__48) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_quotient,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_quotient_3::exec_static ;}
public static Operation exec_pred_equal_2__48(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__49) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_remainder,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_remainder_3::exec_static ;}
public static Operation exec_pred_equal_2__49(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__50) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_reverse_,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_reverse_loop,var1.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__50(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__51) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_reverse,Data.F(boyer.s_append,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_append,Data.F(boyer.s_reverse,var2.Deref()),Data.F(boyer.s_reverse,var1.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__51(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__52) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_reverse_loop,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_reverse_loop_3::exec_static ;}
public static Operation exec_pred_equal_2__52(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__53) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_samefringe,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_equal,Data.F(boyer.s_flatten,var1.Deref()),Data.F(boyer.s_flatten,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__53(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__54) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_sigma,boyer.s_zero,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_quotient,Data.F(boyer.s_times,var1.Deref(),Data.F(boyer.s_add1,var1.Deref())),boyer.posint2),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__54(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__55) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_sort2,Data.F(boyer.s_delete,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_delete,var1.Deref(),Data.F(boyer.s_sort2,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__55(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__56) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_tautology_checker,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_tautologyp,Data.F(boyer.s_normalize,var1.Deref()),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__56(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__57) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_times_3::exec_static ;}
public static Operation exec_pred_equal_2__57(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__58) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times_list,Data.F(boyer.s_append,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_times,Data.F(boyer.s_times_list,var1.Deref()),Data.F(boyer.s_times_list,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__58(Prolog mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__59) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_value,Data.F(boyer.s_normalize,var1),var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_value,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_equal_2__59(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_zerop,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_or,Data.F(boyer.s_equal,var1.Deref(),boyer.s_zero),Data.F(boyer.s_not,Data.F(boyer.s_numberp,var1.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_boyer_difference_3 extends Code {

/*

boyer_difference(_4306,_4306,zero,_4314):-cut(1,_4314).
boyer_difference(myplus(_4340,_4342),_4340,fix(_4342),_4354):-cut(1,_4354).
boyer_difference(myplus(_4380,_4382),_4382,fix(_4380),_4394):-cut(1,_4394).
boyer_difference(myplus(_4420,_4422),myplus(_4420,_4428),boyer_difference(_4422,_4428),_4442):-cut(1,_4442).
boyer_difference(myplus(_4474,myplus(_4468,_4470)),_4468,myplus(_4474,_4470),_4490):-cut(1,_4490).
boyer_difference(add1(myplus(_4516,_4518)),_4518,add1(_4516),_4534):-cut(1,_4534).
boyer_difference(add1(add1(_4560)),2,fix(_4560),_4578):-call(_4578).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_boyer_difference_3__1(mach); }
public static Operation exec_pred_boyer_difference_3__1(Prolog mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_boyer_difference_3__2(Prolog mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_fix,var2.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_boyer_difference_3__3(Prolog mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_fix,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_boyer_difference_3__4(Prolog mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_boyer_difference,var2.Deref(),var3.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_boyer_difference_3__5(Prolog mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,Data.F(boyer.s_myplus,var2,var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,var1.Deref(),var3.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_boyer_difference_3__6(Prolog mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_add1,Data.F(boyer.s_myplus,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_add1,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_boyer_difference_3__7(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_add1,Data.F(boyer.s_add1,var1)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.posint2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_fix,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_eq_3 extends Code {

/*

eq(myplus(_4598,_4600),zero,and(zerop(_4598),zerop(_4600)),_4622):-cut(1,_4622).
eq(myplus(_4648,_4650),myplus(_4648,_4656),equal(fix(_4650),fix(_4656)),_4678):-cut(1,_4678).
eq(zero,boyer_difference(_4704,_4706),not(lessp(_4706,_4704)),_4724):-cut(1,_4724).
eq(_4750,boyer_difference(_4750,_4752),and(numberp(_4750),and(or(equal(_4750,zero),zerop(_4752)))),_4790):-cut(1,_4790).
eq(times(_4816,_4818),zero,or(zerop(_4816),zerop(_4818)),_4840):-cut(1,_4840).
eq(append(_4866,_4868),append(_4866,_4874),equal(_4868,_4874),_4888):-cut(1,_4888).
eq(flatten(_4914),cons(_4918,[]),and(nlistp(_4914),equal(_4914,_4918)),_4944):-cut(1,_4944).
eq(greatest_factor(_4970,_4972),zero,and(or(zerop(_4972),equal(_4972,1)),equal(_4970,zero)),_5008):-cut(1,_5008).
eq(greatest_factor(_5034,_5036),1,equal(_5034,1),_5050):-cut(1,_5050).
eq(_5078,times(_5076,_5078),and(numberp(_5078),or(equal(_5078,zero),equal(_5076,1))),_5114):-cut(1,_5114).
eq(_5140,times(_5140,_5142),or(equal(_5140,zero),and(numberp(_5140),equal(_5142,1))),_5178):-cut(1,_5178).
eq(times(_5204,_5206),1,and(not(equal(_5204,zero)),and(not(equal(_5206,zero)),and(numberp(_5204),and(numberp(_5206),and(equal(decr(_5204),zero),equal(decr(_5206),zero)))))),_5292):-cut(1,_5292).
eq(boyer_difference(_5318,_5320),boyer_difference(_5324,_5320),if(lessp(_5318,_5320),not(lessp(_5320,_5324)),if(lessp(_5324,_5320),not(lessp(_5320,_5318)),equal(fix(_5318),fix(_5324)))),_5396):-cut(1,_5396).
eq(lessp(_5422,_5424),_5436,if(lessp(_5422,_5424),equal(t,_5436),equal(f,_5436)),_5460):-call(_5460).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_eq_3__1(mach); }
public static Operation exec_pred_eq_3__1(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_zerop,var1.Deref()),Data.F(boyer.s_zerop,var2.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__2(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_equal,Data.F(boyer.s_fix,var2.Deref()),Data.F(boyer.s_fix,var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__3(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_boyer_difference,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_not,Data.F(boyer.s_lessp,var2.Deref(),var1.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__4(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_boyer_difference,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_numberp,var1.Deref()),Data.F(boyer.s_and,Data.F(boyer.s_or,Data.F(boyer.s_equal,var1.Deref(),boyer.s_zero),Data.F(boyer.s_zerop,var2.Deref())))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__5(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_or,Data.F(boyer.s_zerop,var1.Deref()),Data.F(boyer.s_zerop,var2.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__6(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_append,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_append,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_equal,var2.Deref(),var3.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__7(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_flatten,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_cons,var2,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_nlistp,var1.Deref()),Data.F(boyer.s_equal,var1.Deref(),var2.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__8(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_greatest_factor,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_or,Data.F(boyer.s_zerop,var2.Deref()),Data.F(boyer.s_equal,var2.Deref(),boyer.posint1)),Data.F(boyer.s_equal,var1.Deref(),boyer.s_zero)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__9(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_greatest_factor,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.posint1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_equal,var1.Deref(),boyer.posint1),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__10(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_times,var2,var1.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_numberp,var1.Deref()),Data.F(boyer.s_or,Data.F(boyer.s_equal,var1.Deref(),boyer.s_zero),Data.F(boyer.s_equal,var2.Deref(),boyer.posint1))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__11(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_times,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_or,Data.F(boyer.s_equal,var1.Deref(),boyer.s_zero),Data.F(boyer.s_and,Data.F(boyer.s_numberp,var1.Deref()),Data.F(boyer.s_equal,var2.Deref(),boyer.posint1))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__12(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.posint1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_equal,var1.Deref(),boyer.s_zero)),Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_equal,var2.Deref(),boyer.s_zero)),Data.F(boyer.s_and,Data.F(boyer.s_numberp,var1.Deref()),Data.F(boyer.s_and,Data.F(boyer.s_numberp,var2.Deref()),Data.F(boyer.s_and,Data.F(boyer.s_equal,Data.F(boyer.s_decr,var1.Deref()),boyer.s_zero),Data.F(boyer.s_equal,Data.F(boyer.s_decr,var2.Deref()),boyer.s_zero)))))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__13(Prolog mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_boyer_difference,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_boyer_difference,var3,var2.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_if,Data.F(boyer.s_lessp,var1.Deref(),var2.Deref()),Data.F(boyer.s_not,Data.F(boyer.s_lessp,var2.Deref(),var3.Deref())),Data.F(boyer.s_if,Data.F(boyer.s_lessp,var3.Deref(),var2.Deref()),Data.F(boyer.s_not,Data.F(boyer.s_lessp,var2.Deref(),var1.Deref())),Data.F(boyer.s_equal,Data.F(boyer.s_fix,var1.Deref()),Data.F(boyer.s_fix,var3.Deref())))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_eq_3__14(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_lessp,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_if,Data.F(boyer.s_lessp,var1.Deref(),var2.Deref()),Data.F(boyer.s_equal,boyer.s_t,var3.Deref()),Data.F(boyer.s_equal,boyer.s_f,var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_exp_3 extends Code {

/*

exp(_5486,myplus(_5480,_5482),times(exp(_5486,_5480),exp(_5486,_5482)),_5508):-cut(1,_5508).
exp(_5540,times(_5534,_5536),exp(exp(_5540,_5534),_5536),_5558):-call(_5558).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_exp_3__1(mach); }
public static Operation exec_pred_exp_3__1(Prolog mach){ mach.FillAlternative(pred_exp_3::exec_pred_exp_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_times,Data.F(boyer.s_exp,var1.Deref(),var2.Deref()),Data.F(boyer.s_exp,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_exp_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_times,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_exp,Data.F(boyer.s_exp,var1.Deref(),var2.Deref()),var3.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_gcd_3 extends Code {

/*

gcd(_5580,_5578,gcd(_5578,_5580),_5588):-cut(1,_5588).
gcd(times(_5614,_5616),times(_5620,_5616),times(_5616,gcd(_5614,_5620)),_5644):-call(_5644).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_gcd_3__1(mach); }
public static Operation exec_pred_gcd_3__1(Prolog mach){ mach.FillAlternative(pred_gcd_3::exec_pred_gcd_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_gcd,var2.Deref(),var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_gcd_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_times,var3,var2.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_times,var2.Deref(),Data.F(boyer.s_gcd,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_mylength_2 extends Code {

/*

mylength(reverse(_5664),length(_5664),_5678):-call(_5678).
mylength(cons(_5726,cons(_5720,cons(_5714,cons(_5708,cons(_5702,cons(_5696,_5698)))))),myplus(6,length(_5698)),_5748):-call(_5748).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_mylength_2__1(mach); }
public static Operation exec_pred_mylength_2__1(Prolog mach){ mach.FillAlternative(pred_mylength_2::exec_pred_mylength_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_reverse,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_length,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_mylength_2__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(boyer.s_cons,var1,Data.F(boyer.s_cons,var2,Data.F(boyer.s_cons,var3,Data.F(boyer.s_cons,var4,Data.F(boyer.s_cons,var5,Data.F(boyer.s_cons,var6,var7)))))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,boyer.posint6,Data.F(boyer.s_length,var7.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_lessp_3 extends Code {

/*

lessp(remainder(_5766,_5768),_5768,not(zerop(_5768)),_5784):-cut(1,_5784).
lessp(quotient(_5810,_5812),_5810,and(not(zerop(_5810)),or(zerop(_5812),not(equal(_5812,1)))),_5854):-cut(1,_5854).
lessp(remainder(_5880,_5882),_5880,and(not(zerop(_5882)),and(not(zerop(_5880)),not(lessp(_5880,_5882)))),_5928):-cut(1,_5928).
lessp(myplus(_5954,_5956),myplus(_5954,_5962),lessp(_5956,_5962),_5976):-cut(1,_5976).
lessp(times(_6002,_6004),times(_6008,_6004),and(not(zerop(_6004)),lessp(_6002,_6008)),_6038):-cut(1,_6038).
lessp(_6066,myplus(_6064,_6066),not(zerop(_6064)),_6082):-cut(1,_6082).
lessp(length(delete(_6108,_6110)),length(_6110),boyer_member(_6108,_6110),_6134):-call(_6134).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lessp_3__1(mach); }
public static Operation exec_pred_lessp_3__1(Prolog mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_remainder,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_not,Data.F(boyer.s_zerop,var2.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lessp_3__2(Prolog mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_quotient,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_zerop,var1.Deref())),Data.F(boyer.s_or,Data.F(boyer.s_zerop,var2.Deref()),Data.F(boyer.s_not,Data.F(boyer.s_equal,var2.Deref(),boyer.posint1)))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lessp_3__3(Prolog mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_remainder,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_zerop,var2.Deref())),Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_zerop,var1.Deref())),Data.F(boyer.s_not,Data.F(boyer.s_lessp,var1.Deref(),var2.Deref())))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lessp_3__4(Prolog mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_lessp,var2.Deref(),var3.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lessp_3__5(Prolog mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_times,var3,var2.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_not,Data.F(boyer.s_zerop,var2.Deref())),Data.F(boyer.s_lessp,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lessp_3__6(Prolog mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,var2,var1.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_not,Data.F(boyer.s_zerop,var2.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lessp_3__7(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_length,Data.F(boyer.s_delete,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_length,var2.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_boyer_member,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_meaning_3 extends Code {

/*

meaning(plus_tree(append(_6154,_6156)),_6170,myplus(meaning(plus_tree(_6154),_6170),meaning(plus_tree(_6156),_6170)),_6194):-cut(1,_6194).
meaning(plus_tree(plus_fringe(_6220)),_6230,fix(meaning(_6220,_6230)),_6242):-cut(1,_6242).
meaning(plus_tree(delete(_6268,_6270)),_6290,if(boyer_member(_6268,_6270),boyer_difference(meaning(plus_tree(_6270),_6290),meaning(_6268,_6290)),meaning(plus_tree(_6270),_6290)),_6330):-call(_6330).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_meaning_3__1(mach); }
public static Operation exec_pred_meaning_3__1(Prolog mach){ mach.FillAlternative(pred_meaning_3::exec_pred_meaning_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_plus_tree,Data.F(boyer.s_append,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,Data.F(boyer.s_meaning,Data.F(boyer.s_plus_tree,var1.Deref()),var3.Deref()),Data.F(boyer.s_meaning,Data.F(boyer.s_plus_tree,var2.Deref()),var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_meaning_3__2(Prolog mach){ mach.FillAlternative(pred_meaning_3::exec_pred_meaning_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_plus_tree,Data.F(boyer.s_plus_fringe,var1)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_fix,Data.F(boyer.s_meaning,var1.Deref(),var2.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_meaning_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_plus_tree,Data.F(boyer.s_delete,var1,var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_if,Data.F(boyer.s_boyer_member,var1.Deref(),var2.Deref()),Data.F(boyer.s_boyer_difference,Data.F(boyer.s_meaning,Data.F(boyer.s_plus_tree,var2.Deref()),var3.Deref()),Data.F(boyer.s_meaning,var1.Deref(),var3.Deref())),Data.F(boyer.s_meaning,Data.F(boyer.s_plus_tree,var2.Deref()),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_myboyer_member_3 extends Code {

/*

myboyer_member(_6356,append(_6350,_6352),or(boyer_member(_6356,_6350),boyer_member(_6356,_6352)),_6378):-cut(1,_6378).
myboyer_member(_6408,reverse(_6404),boyer_member(_6408,_6404),_6418):-cut(1,_6418).
myboyer_member(_6450,intersect(_6444,_6446),and(boyer_member(_6450,_6444),boyer_member(_6450,_6446)),_6474):-call(_6474).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_myboyer_member_3__1(mach); }
public static Operation exec_pred_myboyer_member_3__1(Prolog mach){ mach.FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_append,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_or,Data.F(boyer.s_boyer_member,var1.Deref(),var2.Deref()),Data.F(boyer.s_boyer_member,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_myboyer_member_3__2(Prolog mach){ mach.FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_reverse,var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_boyer_member,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_myboyer_member_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_intersect,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_and,Data.F(boyer.s_boyer_member,var1.Deref(),var2.Deref()),Data.F(boyer.s_boyer_member,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_nth_3 extends Code {

/*

nth(zero,_6492,zero,_6502):-call(_6502).
nth([],_6522,if(zerop(_6522),[],zero),_6540):-call(_6540).
nth(append(_6560,_6562),_6568,append(nth(_6560,_6568),nth(_6562,boyer_difference(_6568,length(_6560)))),_6600):-call(_6600).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_nth_3__1(mach); }
public static Operation exec_pred_nth_3__1(Prolog mach){ mach.FillAlternative(pred_nth_3::exec_pred_nth_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_nth_3__2(Prolog mach){ mach.FillAlternative(pred_nth_3::exec_pred_nth_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_if,Data.F(boyer.s_zerop,var1.Deref()),Const.Nil,boyer.s_zero),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_nth_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_append,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_append,Data.F(boyer.s_nth,var1.Deref(),var3.Deref()),Data.F(boyer.s_nth,var2.Deref(),Data.F(boyer.s_boyer_difference,var3.Deref(),Data.F(boyer.s_length,var1.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_myplus_3 extends Code {

/*

myplus(myplus(_6620,_6622),_6628,myplus(_6620,myplus(_6622,_6628)),_6642):-cut(1,_6642).
myplus(remainder(_6668,_6670),times(_6670,quotient(_6668,_6670)),fix(_6668),_6694):-cut(1,_6694).
myplus(_6728,add1(_6720),if(numberp(_6720),add1(myplus(_6728,_6720)),add1(_6728)),_6756):-call(_6756).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_myplus_3__1(mach); }
public static Operation exec_pred_myplus_3__1(Prolog mach){ mach.FillAlternative(pred_myplus_3::exec_pred_myplus_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,var1.Deref(),Data.F(boyer.s_myplus,var2.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_myplus_3__2(Prolog mach){ mach.FillAlternative(pred_myplus_3::exec_pred_myplus_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_remainder,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_times,var2.Deref(),Data.F(boyer.s_quotient,var1.Deref(),var2.Deref())),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_fix,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_myplus_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_add1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_if,Data.F(boyer.s_numberp,var2.Deref()),Data.F(boyer.s_add1,Data.F(boyer.s_myplus,var1.Deref(),var2.Deref())),Data.F(boyer.s_add1,var1.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_power_eval_3 extends Code {

/*

power_eval(big_plus1(_6776,_6778,_6780),_6780,myplus(power_eval(_6776,_6780),_6778),_6800):-cut(1,_6800).
power_eval(power_rep(_6826,_6828),_6828,fix(_6826),_6840):-cut(1,_6840).
power_eval(big_plus(_6866,_6868,_6870,_6872),_6872,myplus(_6870,myplus(power_eval(_6866,_6872),power_eval(_6868,_6872))),_6904):-cut(1,_6904).
power_eval(big_plus(power_rep(_6930,_6932),power_rep(_6936,_6932),zero,_6932),_6932,myplus(_6930,_6936),_6964):-call(_6964).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_power_eval_3__1(mach); }
public static Operation exec_pred_power_eval_3__1(Prolog mach){ mach.FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_big_plus1,var1,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,Data.F(boyer.s_power_eval,var1.Deref(),var3.Deref()),var2.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_power_eval_3__2(Prolog mach){ mach.FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_power_rep,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_fix,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_power_eval_3__3(Prolog mach){ mach.FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_big_plus,var1,var2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,var3.Deref(),Data.F(boyer.s_myplus,Data.F(boyer.s_power_eval,var1.Deref(),var4.Deref()),Data.F(boyer.s_power_eval,var2.Deref(),var4.Deref()))),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_power_eval_3__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_big_plus,Data.F(boyer.s_power_rep,var1,var2),Data.F(boyer.s_power_rep,var3,var2.Deref()),boyer.s_zero,var2.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,var1.Deref(),var3.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_quotient_3 extends Code {

/*

quotient(myplus(_6984,myplus(_6984,_6986)),2,myplus(_6984,quotient(_6986,2)),_7014):-call(_7014).
quotient(times(_7034,_7036),_7034,if(zerop(_7034),zero,fix(_7036)),_7062):-call(_7062).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_quotient_3__1(mach); }
public static Operation exec_pred_quotient_3__1(Prolog mach){ mach.FillAlternative(pred_quotient_3::exec_pred_quotient_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_myplus,var1,Data.F(boyer.s_myplus,var1.Deref(),var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.posint2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,var1.Deref(),Data.F(boyer.s_quotient,var2.Deref(),boyer.posint2)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_quotient_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_if,Data.F(boyer.s_zerop,var1.Deref()),boyer.s_zero,Data.F(boyer.s_fix,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_remainder_3 extends Code {

/*

remainder(_7080,1,zero,_7088):-cut(1,_7088).
remainder(_7112,_7112,zero,_7120):-cut(1,_7120).
remainder(times(_7146,_7148),_7148,zero,_7156):-cut(1,_7156).
remainder(times(_7182,_7184),_7182,zero,_7194):-call(_7194).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_remainder_3__1(mach); }
public static Operation exec_pred_remainder_3__1(Prolog mach){ mach.FillAlternative(pred_remainder_3::exec_pred_remainder_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(boyer.posint1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_remainder_3__2(Prolog mach){ mach.FillAlternative(pred_remainder_3::exec_pred_remainder_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_remainder_3__3(Prolog mach){ mach.FillAlternative(pred_remainder_3::exec_pred_remainder_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_remainder_3__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(boyer.s_zero,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_reverse_loop_3 extends Code {

/*

reverse_loop(_7214,_7220,append(reverse(_7214),_7220),_7228):-cut(1,_7228).
reverse_loop(_7254,[],reverse(_7254),_7264):-call(_7264).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_reverse_loop_3__1(mach); }
public static Operation exec_pred_reverse_loop_3__1(Prolog mach){ mach.FillAlternative(pred_reverse_loop_3::exec_pred_reverse_loop_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_append,Data.F(boyer.s_reverse,var1.Deref()),var2.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_reverse_loop_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_reverse,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_times_3 extends Code {

/*

times(_7290,myplus(_7284,_7286),myplus(times(_7290,_7284),times(_7290,_7286)),_7312):-cut(1,_7312).
times(times(_7338,_7340),_7346,times(_7338,times(_7340,_7346)),_7360):-cut(1,_7360).
times(_7394,boyer_difference(_7386,_7388),boyer_difference(times(_7386,_7394),times(_7388,_7394)),_7414):-cut(1,_7414).
times(_7448,add1(_7440),if(numberp(_7440),myplus(_7448,times(_7448,_7440)),fix(_7448)),_7478):-call(_7478).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_times_3__1(mach); }
public static Operation exec_pred_times_3__1(Prolog mach){ mach.FillAlternative(pred_times_3::exec_pred_times_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_myplus,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_myplus,Data.F(boyer.s_times,var1.Deref(),var2.Deref()),Data.F(boyer.s_times,var1.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_times_3__2(Prolog mach){ mach.FillAlternative(pred_times_3::exec_pred_times_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(boyer.s_times,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_times,var1.Deref(),Data.F(boyer.s_times,var2.Deref(),var3.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_times_3__3(Prolog mach){ mach.FillAlternative(pred_times_3::exec_pred_times_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_boyer_difference,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_boyer_difference,Data.F(boyer.s_times,var2.Deref(),var1.Deref()),Data.F(boyer.s_times,var3.Deref(),var1.Deref())),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_times_3__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(boyer.s_add1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(boyer.s_if,Data.F(boyer.s_numberp,var2.Deref()),Data.F(boyer.s_myplus,var1.Deref(),Data.F(boyer.s_times,var1.Deref(),var2.Deref())),Data.F(boyer.s_fix,var1.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


