import java.util.function.Function; class boyer /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern(" milliseconds") ;
static Const s2 = Const.Intern(",") ;
static Const s3 = Const.Intern("-") ;
static Const s4 = Const.Intern("->") ;
static Const s5 = Const.Intern(".") ;
static Const s6 = Const.Intern(":-") ;
static Const s7 = Const.Intern(";") ;
static Const s8 = Const.Intern("=") ;
static Const s9 = Const.Intern("a") ;
static Const s10 = Const.Intern("add1") ;
static Const s11 = Const.Intern("and") ;
static Const s12 = Const.Intern("append") ;
static Const s13 = Const.Intern("arg") ;
static Const s14 = Const.Intern("assignedp") ;
static Const s15 = Const.Intern("assignment") ;
static Const s16 = Const.Intern("assume_false") ;
static Const s17 = Const.Intern("assume_true") ;
static Const s18 = Const.Intern("atomic") ;
static Const s19 = Const.Intern("b") ;
static Const s20 = Const.Intern("big_plus") ;
static Const s21 = Const.Intern("big_plus1") ;
static Const s22 = Const.Intern("boolean") ;
static Const s23 = Const.Intern("boyer_difference") ;
static Const s24 = Const.Intern("boyer_member") ;
static Const s25 = Const.Intern("c") ;
static Const s26 = Const.Intern("call") ;
static Const s27 = Const.Intern("car") ;
static Const s28 = Const.Intern("cdr") ;
static Const s29 = Const.Intern("codegen") ;
static Const s30 = Const.Intern("compile") ;
static Const s31 = Const.Intern("cons") ;
static Const s32 = Const.Intern("count_list") ;
static Const s33 = Const.Intern("countps_") ;
static Const s34 = Const.Intern("countps_loop") ;
static Const s35 = Const.Intern("cut") ;
static Const s36 = Const.Intern("d") ;
static Const s37 = Const.Intern("decr") ;
static Const s38 = Const.Intern("delete") ;
static Const s39 = Const.Intern("divides") ;
static Const s40 = Const.Intern("dsort") ;
static Const s41 = Const.Intern("eq") ;
static Const s42 = Const.Intern("eqp") ;
static Const s43 = Const.Intern("equal") ;
static Const s44 = Const.Intern("even1") ;
static Const s45 = Const.Intern("exec") ;
static Const s46 = Const.Intern("execution time is ") ;
static Const s47 = Const.Intern("exp") ;
static Const s48 = Const.Intern("f") ;
static Const s49 = Const.Intern("fact_") ;
static Const s50 = Const.Intern("fact_loop") ;
static Const s51 = Const.Intern("fail") ;
static Const s52 = Const.Intern("falsep") ;
static Const s53 = Const.Intern("falsify") ;
static Const s54 = Const.Intern("falsify1") ;
static Const s55 = Const.Intern("fix") ;
static Const s56 = Const.Intern("flatten") ;
static Const s57 = Const.Intern("functor") ;
static Const s58 = Const.Intern("gcd") ;
static Const s59 = Const.Intern("get") ;
static Const s60 = Const.Intern("go") ;
static Const s61 = Const.Intern("gopher") ;
static Const s62 = Const.Intern("greatereqp") ;
static Const s63 = Const.Intern("greatereqpr") ;
static Const s64 = Const.Intern("greaterp") ;
static Const s65 = Const.Intern("greatest_factor") ;
static Const s66 = Const.Intern("if") ;
static Const s67 = Const.Intern("iff") ;
static Const s68 = Const.Intern("implies") ;
static Const s69 = Const.Intern("intersect") ;
static Const s70 = Const.Intern("is") ;
static Const s71 = Const.Intern("last") ;
static Const s72 = Const.Intern("length") ;
static Const s73 = Const.Intern("lesseqp") ;
static Const s74 = Const.Intern("lessp") ;
static Const s75 = Const.Intern("listp") ;
static Const s76 = Const.Intern("mc_flatten") ;
static Const s77 = Const.Intern("meaning") ;
static Const s78 = Const.Intern("myboyer_member") ;
static Const s79 = Const.Intern("mylength") ;
static Const s80 = Const.Intern("myplus") ;
static Const s81 = Const.Intern("nlistp") ;
static Const s82 = Const.Intern("normalize") ;
static Const s83 = Const.Intern("not") ;
static Const s84 = Const.Intern("nth") ;
static Const s85 = Const.Intern("numberp") ;
static Const s86 = Const.Intern("odd") ;
static Const s87 = Const.Intern("optimize") ;
static Const s88 = Const.Intern("or") ;
static Const s89 = Const.Intern("plus_fringe") ;
static Const s90 = Const.Intern("plus_tree") ;
static Const s91 = Const.Intern("power_eval") ;
static Const s92 = Const.Intern("power_rep") ;
static Const s93 = Const.Intern("prime") ;
static Const s94 = Const.Intern("prime1") ;
static Const s95 = Const.Intern("prime_list") ;
static Const s96 = Const.Intern("quotient") ;
static Const s97 = Const.Intern("remainder") ;
static Const s98 = Const.Intern("reverse") ;
static Const s99 = Const.Intern("reverse_") ;
static Const s100 = Const.Intern("reverse_loop") ;
static Const s101 = Const.Intern("rewrite") ;
static Const s102 = Const.Intern("rewrite_args") ;
static Const s103 = Const.Intern("runtime") ;
static Const s104 = Const.Intern("samefringe") ;
static Const s105 = Const.Intern("set") ;
static Const s106 = Const.Intern("sigma") ;
static Const s107 = Const.Intern("sort2") ;
static Const s108 = Const.Intern("sort_lp") ;
static Const s109 = Const.Intern("statistics") ;
static Const s110 = Const.Intern("t") ;
static Const s111 = Const.Intern("tautology") ;
static Const s112 = Const.Intern("tautology_checker") ;
static Const s113 = Const.Intern("tautologyp") ;
static Const s114 = Const.Intern("times") ;
static Const s115 = Const.Intern("times_list") ;
static Const s116 = Const.Intern("top") ;
static Const s117 = Const.Intern("true") ;
static Const s118 = Const.Intern("truep") ;
static Const s119 = Const.Intern("unify") ;
static Const s120 = Const.Intern("value") ;
static Const s121 = Const.Intern("wff") ;
static Const s122 = Const.Intern("write") ;
static Const s123 = Const.Intern("x") ;
static Const s124 = Const.Intern("y") ;
static Const s125 = Const.Intern("zero") ;
static Const s126 = Const.Intern("zerop") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint2 = Term.Number(2) ;
static Int posint6 = Term.Number(6) ;
}


class pred_go_0 extends Code {

/*

go(_4984):-statistics(runtime,[_4858,_4864],wff(_4876,rewrite(_4876,_4882,tautology(_4882,[],[],statistics(runtime,[_4894,_4900],write('execution time is ',write(_4900,write(' milliseconds',_4984)))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_go_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_go_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = boyer.s103 ;
local_aregs[1] = F(boyer.s5,var1,F(boyer.s5,var2,Const.Nil)) ;
local_aregs[2] = F(boyer.s121,var3,F(boyer.s101,var3.Deref(),var4,F(boyer.s111,var4.Deref(),Const.Nil,Const.Nil,F(boyer.s109,boyer.s103,F(boyer.s5,var5,F(boyer.s5,var6,Const.Nil)),F(boyer.s122,boyer.s46,F(boyer.s122,var6.Deref(),F(boyer.s122,boyer.s1,continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_statistics_2::exec_static ;}
}


class pred_top_0 extends Code {

/*

top(_5418):-wff(_5370,rewrite(_5370,_5376,tautology(_5376,[],[],_5418))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = F(boyer.s101,var1.Deref(),var2,F(boyer.s111,var2.Deref(),Const.Nil,Const.Nil,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_wff_1::exec_static ;}
}


class pred_wff_1 extends Code {

/*

wff(implies(and(implies(_5602,_5604),and(implies(_5604,_5610),and(implies(_5610,_5616),implies(_5616,_5622)))),implies(_5602,_5622)),_5842):-unify(f(myplus(myplus(a,b),myplus(c,zero))),_5602,unify(f(times(times(a,b),myplus(c,d))),_5604,unify(f(reverse(append(append(a,b),[]))),_5610,unify(equal(myplus(a,b),boyer_difference(x,y)),_5616,unify(lessp(remainder(a,b),boyer_member(a,length(b))),_5622,_5842))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_wff_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_wff_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s68,F(boyer.s11,F(boyer.s68,var1,var2),F(boyer.s11,F(boyer.s68,var2.Deref(),var3),F(boyer.s11,F(boyer.s68,var3.Deref(),var4),F(boyer.s68,var4.Deref(),var5)))),F(boyer.s68,var1.Deref(),var5.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(boyer.s48,F(boyer.s80,F(boyer.s80,boyer.s9,boyer.s19),F(boyer.s80,boyer.s25,boyer.s125))) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(boyer.s119,F(boyer.s48,F(boyer.s114,F(boyer.s114,boyer.s9,boyer.s19),F(boyer.s80,boyer.s25,boyer.s36))),var2.Deref(),F(boyer.s119,F(boyer.s48,F(boyer.s98,F(boyer.s12,F(boyer.s12,boyer.s9,boyer.s19),Const.Nil))),var3.Deref(),F(boyer.s119,F(boyer.s43,F(boyer.s80,boyer.s9,boyer.s19),F(boyer.s23,boyer.s123,boyer.s124)),var4.Deref(),F(boyer.s119,F(boyer.s74,F(boyer.s97,boyer.s9,boyer.s19),F(boyer.s24,boyer.s9,F(boyer.s72,boyer.s19))),var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_unify_2::exec_static ;}
}


class pred_tautology_1 extends Code {

/*

tautology(_6170,_6218):-rewrite(_6170,_6176,tautology(_6176,[],[],_6218)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_tautology_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_tautology_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = F(boyer.s111,var2.Deref(),Const.Nil,Const.Nil,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_rewrite_2::exec_static ;}
}


class pred_tautology_3 extends Code {

/*

tautology(_6386,_6388,_6390,_6578):-or((truep(_6386,_6388)->true),(falsep(_6386,_6390)->fail;_6386=if(_6418,_6420,_6422)->(truep(_6418,_6388)->tautology(_6420,_6388,_6390);falsep(_6418,_6390)->tautology(_6422,_6388,_6390);tautology(_6420,[_6418|_6388],_6390),tautology(_6422,_6388,[_6418|_6390]))),cut(1,_6578)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_tautology_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_tautology_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(boyer.s4,F(boyer.s118,var1.Deref(),var2.Deref()),boyer.s117) ;
local_aregs[1] = F(boyer.s7,F(boyer.s4,F(boyer.s52,var1.Deref(),var3.Deref()),boyer.s51),F(boyer.s4,F(boyer.s8,var1.Deref(),F(boyer.s66,var4,var5,var6)),F(boyer.s7,F(boyer.s4,F(boyer.s118,var4.Deref(),var2.Deref()),F(boyer.s111,var5.Deref(),var2.Deref(),var3.Deref())),F(boyer.s7,F(boyer.s4,F(boyer.s52,var4.Deref(),var3.Deref()),F(boyer.s111,var6.Deref(),var2.Deref(),var3.Deref())),F(boyer.s2,F(boyer.s111,var5.Deref(),F(boyer.s5,var4.Deref(),var2.Deref()),var3.Deref()),F(boyer.s111,var6.Deref(),var2.Deref(),F(boyer.s5,var4.Deref(),var3.Deref()))))))) ;
local_aregs[2] = F(boyer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_or_2::exec_static ;}
}


class pred_rewrite_2 extends Code {

/*

rewrite(_6716,_6716,_6762):-atomic(_6716,cut(1,_6762)).
rewrite(_6878,_6880,_6992):-functor(_6878,_6886,_6888,functor(_6892,_6886,_6888,rewrite_args(_6888,_6878,_6892,or((equal(_6892,_6910),rewrite(_6910,_6880)),_6880=_6892,cut(1,_6992))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rewrite_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rewrite_2__1(PrologMachine mach){ mach.FillAlternative(pred_rewrite_2::exec_pred_rewrite_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(boyer.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_atomic_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rewrite_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = var4 ;
local_aregs[3] = F(boyer.s57,var5,var3.Deref(),var4.Deref(),F(boyer.s102,var4.Deref(),var1.Deref(),var5.Deref(),F(boyer.s88,F(boyer.s2,F(boyer.s43,var5.Deref(),var6),F(boyer.s101,var6.Deref(),var2.Deref())),F(boyer.s8,var2.Deref(),var5.Deref()),F(boyer.s0, new HeapChoice(mach.CUTB),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_functor_3::exec_static ;}
}


class pred_rewrite_args_3 extends Code {

/*

rewrite_args(0,_7322,_7324,_7364):-cut(1,_7364).
rewrite_args(_7458,_7460,_7462,_7568):-arg(_7458,_7460,_7470,arg(_7458,_7462,_7478,rewrite(_7470,_7478,is(_7494,_7458-1,rewrite_args(_7494,_7460,_7462,_7568))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rewrite_args_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rewrite_args_3__1(PrologMachine mach){ mach.FillAlternative(pred_rewrite_args_3::exec_pred_rewrite_args_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(boyer.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_rewrite_args_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = F(boyer.s13,var1.Deref(),var3.Deref(),var5,F(boyer.s101,var4.Deref(),var5.Deref(),F(boyer.s70,var6,F(boyer.s3,var1.Deref(),boyer.posint1),F(boyer.s102,var6.Deref(),var2.Deref(),var3.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_arg_3::exec_static ;}
}


class pred_truep_2 extends Code {

/*

truep(t,_7950,_7984):-cut(1,_7984).
truep(_8076,_8078,_8118):-boyer_member(_8076,_8078,_8118).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_truep_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_truep_2__1(PrologMachine mach){ mach.FillAlternative(pred_truep_2::exec_pred_truep_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(boyer.s110))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_truep_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_boyer_member_2::exec_static ;}
}


class pred_falsep_2 extends Code {

/*

falsep(f,_8256,_8290):-cut(1,_8290).
falsep(_8388,_8390,_8430):-boyer_member(_8388,_8390,_8430).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_falsep_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_falsep_2__1(PrologMachine mach){ mach.FillAlternative(pred_falsep_2::exec_pred_falsep_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(boyer.s48))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_falsep_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_boyer_member_2::exec_static ;}
}


class pred_boyer_member_2 extends Code {

/*

boyer_member(_8572,[_8572|_8574],_8614):-cut(1,_8614).
boyer_member(_8724,[_8718|_8720],_8766):-boyer_member(_8724,_8720,_8766).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_boyer_member_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_boyer_member_2__1(PrologMachine mach){ mach.FillAlternative(pred_boyer_member_2::exec_pred_boyer_member_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s5,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_boyer_member_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s5,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_boyer_member_2::exec_static ;}
}


class pred_equal_2 extends Code {

/*

equal(and(_8914,_8916),if(_8914,if(_8916,t,f),f),_8960):-call(_8960).
equal(append(append(_9086,_9088),_9094),append(_9086,append(_9088,_9094)),_9134):-call(_9134).
equal(assignment(_9266,append(_9260,_9262)),if(assignedp(_9266,_9260),assignment(_9266,_9260),assignment(_9266,_9262)),_9322):-call(_9322).
equal(assume_false(_9448,_9450),cons(cons(_9448,f),_9450),_9490):-call(_9490).
equal(assume_true(_9616,_9618),cons(cons(_9616,t),_9618),_9658):-call(_9658).
equal(boolean(_9784),or(equal(_9784,t),equal(_9784,f)),_9830):-call(_9830).
equal(car(gopher(_9956)),if(listp(_9956),car(flatten(_9956)),zero),_10008):-call(_10008).
equal(compile(_10134),reverse(codegen(optimize(_10134),[])),_10176):-call(_10176).
equal(count_list(_10308,sort_lp(_10302,_10304)),myplus(count_list(_10308,_10302),count_list(_10308,_10304)),_10356):-call(_10356).
equal(countps_(_10482,_10484),countps_loop(_10482,_10484,zero),_10520):-call(_10520).
equal(boyer_difference(_10646,_10648),_10654,_10696):-boyer_difference(_10646,_10648,_10654,_10696).
equal(divides(_10864,_10866),zerop(remainder(_10866,_10864)),_10904):-call(_10904).
equal(dsort(_11030),sort2(_11030),_11062):-call(_11062).
equal(eqp(_11188,_11190),equal(fix(_11188),fix(_11190)),_11232):-call(_11232).
equal(equal(_11358,_11360),_11366,_11408):-eq(_11358,_11360,_11366,_11408).
equal(even1(_11576),if(zerop(_11576),t,odd(decr(_11576))),_11624):-call(_11624).
equal(exec(append(_11750,_11752),_11758,_11760),exec(_11752,exec(_11750,_11758,_11760),_11760),_11804):-call(_11804).
equal(exp(_11930,_11932),_11938,_11980):-exp(_11930,_11932,_11938,_11980).
equal(fact_(_12148),fact_loop(_12148,1),_12182):-call(_12182).
equal(falsify(_12308),falsify1(normalize(_12308),[]),_12346):-call(_12346).
equal(fix(_12472),if(numberp(_12472),_12472,zero),_12512):-call(_12512).
equal(flatten(cdr(gopher(_12638))),if(listp(_12638),cdr(flatten(_12638)),cons(zero,[])),_12700):-call(_12700).
equal(gcd(_12826,_12828),_12834,_12876):-gcd(_12826,_12828,_12834,_12876).
equal(get(_13052,set(_13044,_13046,_13048)),if(eqp(_13052,_13044),_13046,get(_13052,_13048)),_13102):-call(_13102).
equal(greatereqp(_13228,_13230),not(lessp(_13228,_13230)),_13268):-call(_13268).
equal(greatereqpr(_13394,_13396),not(lessp(_13394,_13396)),_13434):-call(_13434).
equal(greaterp(_13560,_13562),lessp(_13562,_13560),_13596):-call(_13596).
equal(if(if(_13722,_13724,_13726),_13732,_13734),if(_13722,if(_13724,_13732,_13734),if(_13726,_13732,_13734)),_13786):-call(_13786).
equal(iff(_13912,_13914),and(implies(_13912,_13914),implies(_13914,_13912)),_13960):-call(_13960).
equal(implies(_14086,_14088),if(_14086,if(_14088,t,f),t),_14132):-call(_14132).
equal(last(append(_14258,_14260)),if(listp(_14260),last(_14260),if(listp(_14258),cons(car(last(_14258))),_14260)),_14332):-call(_14332).
equal(length(_14458),_14464,_14504):-mylength(_14458,_14464,_14504).
equal(lesseqp(_14658,_14660),not(lessp(_14660,_14658)),_14698):-call(_14698).
equal(lessp(_14824,_14826),_14832,_14874):-lessp(_14824,_14826,_14832,_14874).
equal(listp(gopher(_15042)),listp(_15042),_15078):-call(_15078).
equal(mc_flatten(_15204,_15206),append(flatten(_15204),_15206),_15244):-call(_15244).
equal(meaning(_15370,_15372),_15378,_15420):-meaning(_15370,_15372,_15378,_15420).
equal(boyer_member(_15588,_15590),_15596,_15638):-myboyer_member(_15588,_15590,_15596,_15638).
equal(not(_15806),if(_15806,f,t),_15842):-call(_15842).
equal(nth(_15968,_15970),_15976,_16018):-nth(_15968,_15970,_15976,_16018).
equal(numberp(greatest_factor(_16186,_16188)),not(and(or(zerop(_16188),equal(_16188,1)),not(numberp(_16186)))),_16254):-call(_16254).
equal(or(_16380,_16382),if(_16380,t,if(_16382,t,f),f),_16428):-call(_16428).
equal(myplus(_16554,_16556),_16562,_16604):-myplus(_16554,_16556,_16562,_16604).
equal(power_eval(_16772,_16774),_16780,_16822):-power_eval(_16772,_16774,_16780,_16822).
equal(prime(_16990),and(not(zerop(_16990)),and(not(equal(_16990,add1(zero))),prime1(_16990,decr(_16990)))),_17062):-call(_17062).
equal(prime_list(append(_17188,_17190)),and(prime_list(_17188),prime_list(_17190)),_17236):-call(_17236).
equal(quotient(_17362,_17364),_17370,_17412):-quotient(_17362,_17364,_17370,_17412).
equal(remainder(_17580,_17582),_17588,_17630):-remainder(_17580,_17582,_17588,_17630).
equal(reverse_(_17798),reverse_loop(_17798,[]),_17832):-call(_17832).
equal(reverse(append(_17958,_17960)),append(reverse(_17960),reverse(_17958)),_18006):-call(_18006).
equal(reverse_loop(_18132,_18134),_18140,_18182):-reverse_loop(_18132,_18134,_18140,_18182).
equal(samefringe(_18350,_18352),equal(flatten(_18350),flatten(_18352)),_18394):-call(_18394).
equal(sigma(zero,_18522),quotient(times(_18522,add1(_18522)),2),_18566):-call(_18566).
equal(sort2(delete(_18692,_18694)),delete(_18692,sort2(_18694)),_18736):-call(_18736).
equal(tautology_checker(_18862),tautologyp(normalize(_18862),[]),_18900):-call(_18900).
equal(times(_19026,_19028),_19034,_19076):-times(_19026,_19028,_19034,_19076).
equal(times_list(append(_19244,_19246)),times(times_list(_19244),times_list(_19246)),_19292):-call(_19292).
equal(value(normalize(_19418),_19424),value(_19418,_19424),_19458):-call(_19458).
equal(zerop(_19584),or(equal(_19584,zero),not(numberp(_19584))),_19632):-call(_19632).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_equal_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_equal_2__1(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s11,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,var1.Deref(),F(boyer.s66,var2.Deref(),boyer.s110,boyer.s48),boyer.s48)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__2(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s12,F(boyer.s12,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s12,var1.Deref(),F(boyer.s12,var2.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__3(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s15,var1,F(boyer.s12,var2,var3))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,F(boyer.s14,var1.Deref(),var2.Deref()),F(boyer.s15,var1.Deref(),var2.Deref()),F(boyer.s15,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__4(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s31,F(boyer.s31,var1.Deref(),boyer.s48),var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__5(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s17,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s31,F(boyer.s31,var1.Deref(),boyer.s110),var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__6(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s22,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s88,F(boyer.s43,var1.Deref(),boyer.s110),F(boyer.s43,var1.Deref(),boyer.s48))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__7(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s27,F(boyer.s61,var1))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,F(boyer.s75,var1.Deref()),F(boyer.s27,F(boyer.s56,var1.Deref())),boyer.s125)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__8(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s30,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s98,F(boyer.s29,F(boyer.s87,var1.Deref()),Const.Nil))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__9(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s32,var1,F(boyer.s108,var2,var3))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,F(boyer.s32,var1.Deref(),var2.Deref()),F(boyer.s32,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__10(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s33,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s34,var1.Deref(),var2.Deref(),boyer.s125)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__11(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s23,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_boyer_difference_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__12(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s39,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s126,F(boyer.s97,var2.Deref(),var1.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__13(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s40,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s107,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__14(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s42,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s43,F(boyer.s55,var1.Deref()),F(boyer.s55,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__15(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s43,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_eq_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__16(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s44,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,F(boyer.s126,var1.Deref()),boyer.s110,F(boyer.s86,F(boyer.s37,var1.Deref())))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__17(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s45,F(boyer.s12,var1,var2),var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s45,var2.Deref(),F(boyer.s45,var1.Deref(),var3.Deref(),var4.Deref()),var4.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__18(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s47,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_exp_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__19(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s49,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s50,var1.Deref(),boyer.posint1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__20(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s53,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s54,F(boyer.s82,var1.Deref()),Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__21(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s55,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,F(boyer.s85,var1.Deref()),var1.Deref(),boyer.s125)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__22(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s56,F(boyer.s28,F(boyer.s61,var1)))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,F(boyer.s75,var1.Deref()),F(boyer.s28,F(boyer.s56,var1.Deref())),F(boyer.s31,boyer.s125,Const.Nil))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__23(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s58,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_gcd_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__24(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s59,var1,F(boyer.s105,var2,var3,var4))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,F(boyer.s42,var1.Deref(),var2.Deref()),var3.Deref(),F(boyer.s59,var1.Deref(),var4.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__25(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s62,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s83,F(boyer.s74,var1.Deref(),var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__26(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s63,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s83,F(boyer.s74,var1.Deref(),var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__27(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s64,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s74,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__28(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__29) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s66,F(boyer.s66,var1,var2,var3),var4,var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,var1.Deref(),F(boyer.s66,var2.Deref(),var4.Deref(),var5.Deref()),F(boyer.s66,var3.Deref(),var4.Deref(),var5.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__29(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__30) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s67,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s11,F(boyer.s68,var1.Deref(),var2.Deref()),F(boyer.s68,var2.Deref(),var1.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__30(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__31) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s68,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,var1.Deref(),F(boyer.s66,var2.Deref(),boyer.s110,boyer.s48),boyer.s110)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__31(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__32) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s71,F(boyer.s12,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,F(boyer.s75,var2.Deref()),F(boyer.s71,var2.Deref()),F(boyer.s66,F(boyer.s75,var1.Deref()),F(boyer.s31,F(boyer.s27,F(boyer.s71,var1.Deref()))),var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__32(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__33) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s72,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_mylength_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__33(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__34) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s73,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s83,F(boyer.s74,var2.Deref(),var1.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__34(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__35) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s74,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_lessp_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__35(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__36) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s75,F(boyer.s61,var1))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s75,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__36(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__37) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s76,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s12,F(boyer.s56,var1.Deref()),var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__37(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__38) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s77,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_meaning_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__38(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__39) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s24,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_myboyer_member_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__39(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__40) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s83,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,var1.Deref(),boyer.s48,boyer.s110)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__40(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__41) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s84,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_nth_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__41(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__42) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s85,F(boyer.s65,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s83,F(boyer.s11,F(boyer.s88,F(boyer.s126,var2.Deref()),F(boyer.s43,var2.Deref(),boyer.posint1)),F(boyer.s83,F(boyer.s85,var1.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__42(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__43) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s88,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s66,var1.Deref(),boyer.s110,F(boyer.s66,var2.Deref(),boyer.s110,boyer.s48),boyer.s48)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__43(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__44) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_myplus_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__44(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__45) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s91,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_power_eval_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__45(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__46) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s93,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s11,F(boyer.s83,F(boyer.s126,var1.Deref())),F(boyer.s11,F(boyer.s83,F(boyer.s43,var1.Deref(),F(boyer.s10,boyer.s125))),F(boyer.s94,var1.Deref(),F(boyer.s37,var1.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__46(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__47) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s95,F(boyer.s12,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s11,F(boyer.s95,var1.Deref()),F(boyer.s95,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__47(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__48) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s96,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_quotient_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__48(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__49) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s97,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_remainder_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__49(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__50) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s99,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s100,var1.Deref(),Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__50(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__51) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s98,F(boyer.s12,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s12,F(boyer.s98,var2.Deref()),F(boyer.s98,var1.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__51(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__52) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s100,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_reverse_loop_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__52(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__53) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s104,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s43,F(boyer.s56,var1.Deref()),F(boyer.s56,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__53(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__54) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s106,boyer.s125,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s96,F(boyer.s114,var1.Deref(),F(boyer.s10,var1.Deref())),boyer.posint2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__54(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__55) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s107,F(boyer.s38,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s38,var1.Deref(),F(boyer.s107,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__55(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__56) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s112,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s113,F(boyer.s82,var1.Deref()),Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__56(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__57) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_times_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__57(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__58) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s115,F(boyer.s12,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s114,F(boyer.s115,var1.Deref()),F(boyer.s115,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__58(PrologMachine mach){ mach.FillAlternative(pred_equal_2::exec_pred_equal_2__59) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s120,F(boyer.s82,var1),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s120,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_equal_2__59(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s126,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s88,F(boyer.s43,var1.Deref(),boyer.s125),F(boyer.s83,F(boyer.s85,var1.Deref())))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_boyer_difference_3 extends Code {

/*

boyer_difference(_4294,_4294,zero,_4302):-cut(1,_4302).
boyer_difference(myplus(_4328,_4330),_4328,fix(_4330),_4342):-cut(1,_4342).
boyer_difference(myplus(_4368,_4370),_4370,fix(_4368),_4382):-cut(1,_4382).
boyer_difference(myplus(_4408,_4410),myplus(_4408,_4416),boyer_difference(_4410,_4416),_4430):-cut(1,_4430).
boyer_difference(myplus(_4462,myplus(_4456,_4458)),_4456,myplus(_4462,_4458),_4478):-cut(1,_4478).
boyer_difference(add1(myplus(_4504,_4506)),_4506,add1(_4504),_4522):-cut(1,_4522).
boyer_difference(add1(add1(_4548)),2,fix(_4548),_4566):-call(_4566).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_boyer_difference_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_boyer_difference_3__1(PrologMachine mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_boyer_difference_3__2(PrologMachine mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s55,var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_boyer_difference_3__3(PrologMachine mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s55,var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_boyer_difference_3__4(PrologMachine mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s23,var2.Deref(),var3.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_boyer_difference_3__5(PrologMachine mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,F(boyer.s80,var2,var3))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,var1.Deref(),var3.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_boyer_difference_3__6(PrologMachine mach){ mach.FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s10,F(boyer.s80,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s10,var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_boyer_difference_3__7(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s10,F(boyer.s10,var1))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.posint2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s55,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_eq_3 extends Code {

/*

eq(myplus(_4586,_4588),zero,and(zerop(_4586),zerop(_4588)),_4610):-cut(1,_4610).
eq(myplus(_4636,_4638),myplus(_4636,_4644),equal(fix(_4638),fix(_4644)),_4666):-cut(1,_4666).
eq(zero,boyer_difference(_4692,_4694),not(lessp(_4694,_4692)),_4712):-cut(1,_4712).
eq(_4738,boyer_difference(_4738,_4740),and(numberp(_4738),and(or(equal(_4738,zero),zerop(_4740)))),_4778):-cut(1,_4778).
eq(times(_4804,_4806),zero,or(zerop(_4804),zerop(_4806)),_4828):-cut(1,_4828).
eq(append(_4854,_4856),append(_4854,_4862),equal(_4856,_4862),_4876):-cut(1,_4876).
eq(flatten(_4902),cons(_4906,[]),and(nlistp(_4902),equal(_4902,_4906)),_4932):-cut(1,_4932).
eq(greatest_factor(_4958,_4960),zero,and(or(zerop(_4960),equal(_4960,1)),equal(_4958,zero)),_4996):-cut(1,_4996).
eq(greatest_factor(_5022,_5024),1,equal(_5022,1),_5038):-cut(1,_5038).
eq(_5066,times(_5064,_5066),and(numberp(_5066),or(equal(_5066,zero),equal(_5064,1))),_5102):-cut(1,_5102).
eq(_5128,times(_5128,_5130),or(equal(_5128,zero),and(numberp(_5128),equal(_5130,1))),_5166):-cut(1,_5166).
eq(times(_5192,_5194),1,and(not(equal(_5192,zero)),and(not(equal(_5194,zero)),and(numberp(_5192),and(numberp(_5194),and(equal(decr(_5192),zero),equal(decr(_5194),zero)))))),_5280):-cut(1,_5280).
eq(boyer_difference(_5306,_5308),boyer_difference(_5312,_5308),if(lessp(_5306,_5308),not(lessp(_5308,_5312)),if(lessp(_5312,_5308),not(lessp(_5308,_5306)),equal(fix(_5306),fix(_5312)))),_5384):-cut(1,_5384).
eq(lessp(_5410,_5412),_5424,if(lessp(_5410,_5412),equal(t,_5424),equal(f,_5424)),_5448):-call(_5448).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_eq_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_eq_3__1(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s126,var1.Deref()),F(boyer.s126,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__2(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s43,F(boyer.s55,var2.Deref()),F(boyer.s55,var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__3(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s23,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s83,F(boyer.s74,var2.Deref(),var1.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__4(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s23,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s85,var1.Deref()),F(boyer.s11,F(boyer.s88,F(boyer.s43,var1.Deref(),boyer.s125),F(boyer.s126,var2.Deref()))))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__5(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s88,F(boyer.s126,var1.Deref()),F(boyer.s126,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__6(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s12,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s12,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s43,var2.Deref(),var3.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__7(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s56,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s31,var2,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s81,var1.Deref()),F(boyer.s43,var1.Deref(),var2.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__8(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s65,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s88,F(boyer.s126,var2.Deref()),F(boyer.s43,var2.Deref(),boyer.posint1)),F(boyer.s43,var1.Deref(),boyer.s125))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__9(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s65,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s43,var1.Deref(),boyer.posint1)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__10(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s114,var2,var1.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s85,var1.Deref()),F(boyer.s88,F(boyer.s43,var1.Deref(),boyer.s125),F(boyer.s43,var2.Deref(),boyer.posint1)))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__11(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s114,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s88,F(boyer.s43,var1.Deref(),boyer.s125),F(boyer.s11,F(boyer.s85,var1.Deref()),F(boyer.s43,var2.Deref(),boyer.posint1)))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__12(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s83,F(boyer.s43,var1.Deref(),boyer.s125)),F(boyer.s11,F(boyer.s83,F(boyer.s43,var2.Deref(),boyer.s125)),F(boyer.s11,F(boyer.s85,var1.Deref()),F(boyer.s11,F(boyer.s85,var2.Deref()),F(boyer.s11,F(boyer.s43,F(boyer.s37,var1.Deref()),boyer.s125),F(boyer.s43,F(boyer.s37,var2.Deref()),boyer.s125))))))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__13(PrologMachine mach){ mach.FillAlternative(pred_eq_3::exec_pred_eq_3__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s23,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s23,var3,var2.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s66,F(boyer.s74,var1.Deref(),var2.Deref()),F(boyer.s83,F(boyer.s74,var2.Deref(),var3.Deref())),F(boyer.s66,F(boyer.s74,var3.Deref(),var2.Deref()),F(boyer.s83,F(boyer.s74,var2.Deref(),var1.Deref())),F(boyer.s43,F(boyer.s55,var1.Deref()),F(boyer.s55,var3.Deref()))))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_eq_3__14(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s74,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s66,F(boyer.s74,var1.Deref(),var2.Deref()),F(boyer.s43,boyer.s110,var3.Deref()),F(boyer.s43,boyer.s48,var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_exp_3 extends Code {

/*

exp(_5474,myplus(_5468,_5470),times(exp(_5474,_5468),exp(_5474,_5470)),_5496):-cut(1,_5496).
exp(_5528,times(_5522,_5524),exp(exp(_5528,_5522),_5524),_5546):-call(_5546).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_exp_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_exp_3__1(PrologMachine mach){ mach.FillAlternative(pred_exp_3::exec_pred_exp_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s114,F(boyer.s47,var1.Deref(),var2.Deref()),F(boyer.s47,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_exp_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s114,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s47,F(boyer.s47,var1.Deref(),var2.Deref()),var3.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_gcd_3 extends Code {

/*

gcd(_5568,_5566,gcd(_5566,_5568),_5576):-cut(1,_5576).
gcd(times(_5602,_5604),times(_5608,_5604),times(_5604,gcd(_5602,_5608)),_5632):-call(_5632).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_gcd_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_gcd_3__1(PrologMachine mach){ mach.FillAlternative(pred_gcd_3::exec_pred_gcd_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s58,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_gcd_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s114,var3,var2.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s114,var2.Deref(),F(boyer.s58,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_mylength_2 extends Code {

/*

mylength(reverse(_5652),length(_5652),_5666):-call(_5666).
mylength(cons(_5714,cons(_5708,cons(_5702,cons(_5696,cons(_5690,cons(_5684,_5686)))))),myplus(6,length(_5686)),_5736):-call(_5736).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_mylength_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_mylength_2__1(PrologMachine mach){ mach.FillAlternative(pred_mylength_2::exec_pred_mylength_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s98,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s72,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_mylength_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s31,var1,F(boyer.s31,var2,F(boyer.s31,var3,F(boyer.s31,var4,F(boyer.s31,var5,F(boyer.s31,var6,var7))))))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,boyer.posint6,F(boyer.s72,var7.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_lessp_3 extends Code {

/*

lessp(remainder(_5754,_5756),_5756,not(zerop(_5756)),_5772):-cut(1,_5772).
lessp(quotient(_5798,_5800),_5798,and(not(zerop(_5798)),or(zerop(_5800),not(equal(_5800,1)))),_5842):-cut(1,_5842).
lessp(remainder(_5868,_5870),_5868,and(not(zerop(_5870)),and(not(zerop(_5868)),not(lessp(_5868,_5870)))),_5916):-cut(1,_5916).
lessp(myplus(_5942,_5944),myplus(_5942,_5950),lessp(_5944,_5950),_5964):-cut(1,_5964).
lessp(times(_5990,_5992),times(_5996,_5992),and(not(zerop(_5992)),lessp(_5990,_5996)),_6026):-cut(1,_6026).
lessp(_6054,myplus(_6052,_6054),not(zerop(_6052)),_6070):-cut(1,_6070).
lessp(length(delete(_6096,_6098)),length(_6098),boyer_member(_6096,_6098),_6122):-call(_6122).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lessp_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lessp_3__1(PrologMachine mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s97,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s83,F(boyer.s126,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lessp_3__2(PrologMachine mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s96,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s83,F(boyer.s126,var1.Deref())),F(boyer.s88,F(boyer.s126,var2.Deref()),F(boyer.s83,F(boyer.s43,var2.Deref(),boyer.posint1))))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lessp_3__3(PrologMachine mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s97,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s83,F(boyer.s126,var2.Deref())),F(boyer.s11,F(boyer.s83,F(boyer.s126,var1.Deref())),F(boyer.s83,F(boyer.s74,var1.Deref(),var2.Deref()))))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lessp_3__4(PrologMachine mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s74,var2.Deref(),var3.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lessp_3__5(PrologMachine mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s114,var3,var2.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s83,F(boyer.s126,var2.Deref())),F(boyer.s74,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lessp_3__6(PrologMachine mach){ mach.FillAlternative(pred_lessp_3::exec_pred_lessp_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,var2,var1.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s83,F(boyer.s126,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_lessp_3__7(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s72,F(boyer.s38,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s72,var2.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s24,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_meaning_3 extends Code {

/*

meaning(plus_tree(append(_6142,_6144)),_6158,myplus(meaning(plus_tree(_6142),_6158),meaning(plus_tree(_6144),_6158)),_6182):-cut(1,_6182).
meaning(plus_tree(plus_fringe(_6208)),_6218,fix(meaning(_6208,_6218)),_6230):-cut(1,_6230).
meaning(plus_tree(delete(_6256,_6258)),_6278,if(boyer_member(_6256,_6258),boyer_difference(meaning(plus_tree(_6258),_6278),meaning(_6256,_6278)),meaning(plus_tree(_6258),_6278)),_6318):-call(_6318).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_meaning_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_meaning_3__1(PrologMachine mach){ mach.FillAlternative(pred_meaning_3::exec_pred_meaning_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s90,F(boyer.s12,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,F(boyer.s77,F(boyer.s90,var1.Deref()),var3.Deref()),F(boyer.s77,F(boyer.s90,var2.Deref()),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_meaning_3__2(PrologMachine mach){ mach.FillAlternative(pred_meaning_3::exec_pred_meaning_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s90,F(boyer.s89,var1))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s55,F(boyer.s77,var1.Deref(),var2.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_meaning_3__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s90,F(boyer.s38,var1,var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s66,F(boyer.s24,var1.Deref(),var2.Deref()),F(boyer.s23,F(boyer.s77,F(boyer.s90,var2.Deref()),var3.Deref()),F(boyer.s77,var1.Deref(),var3.Deref())),F(boyer.s77,F(boyer.s90,var2.Deref()),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_myboyer_member_3 extends Code {

/*

myboyer_member(_6344,append(_6338,_6340),or(boyer_member(_6344,_6338),boyer_member(_6344,_6340)),_6366):-cut(1,_6366).
myboyer_member(_6396,reverse(_6392),boyer_member(_6396,_6392),_6406):-cut(1,_6406).
myboyer_member(_6438,intersect(_6432,_6434),and(boyer_member(_6438,_6432),boyer_member(_6438,_6434)),_6462):-call(_6462).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_myboyer_member_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_myboyer_member_3__1(PrologMachine mach){ mach.FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s12,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s88,F(boyer.s24,var1.Deref(),var2.Deref()),F(boyer.s24,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_myboyer_member_3__2(PrologMachine mach){ mach.FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s98,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s24,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_myboyer_member_3__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s69,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s11,F(boyer.s24,var1.Deref(),var2.Deref()),F(boyer.s24,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_nth_3 extends Code {

/*

nth(zero,_6480,zero,_6490):-call(_6490).
nth([],_6510,if(zerop(_6510),[],zero),_6528):-call(_6528).
nth(append(_6548,_6550),_6556,append(nth(_6548,_6556),nth(_6550,boyer_difference(_6556,length(_6548)))),_6588):-call(_6588).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_nth_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_nth_3__1(PrologMachine mach){ mach.FillAlternative(pred_nth_3::exec_pred_nth_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_nth_3__2(PrologMachine mach){ mach.FillAlternative(pred_nth_3::exec_pred_nth_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s66,F(boyer.s126,var1.Deref()),Const.Nil,boyer.s125)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_nth_3__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s12,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s12,F(boyer.s84,var1.Deref(),var3.Deref()),F(boyer.s84,var2.Deref(),F(boyer.s23,var3.Deref(),F(boyer.s72,var1.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_myplus_3 extends Code {

/*

myplus(myplus(_6608,_6610),_6616,myplus(_6608,myplus(_6610,_6616)),_6630):-cut(1,_6630).
myplus(remainder(_6656,_6658),times(_6658,quotient(_6656,_6658)),fix(_6656),_6682):-cut(1,_6682).
myplus(_6716,add1(_6708),if(numberp(_6708),add1(myplus(_6716,_6708)),add1(_6716)),_6744):-call(_6744).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_myplus_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_myplus_3__1(PrologMachine mach){ mach.FillAlternative(pred_myplus_3::exec_pred_myplus_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,var1.Deref(),F(boyer.s80,var2.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_myplus_3__2(PrologMachine mach){ mach.FillAlternative(pred_myplus_3::exec_pred_myplus_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s97,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s114,var2.Deref(),F(boyer.s96,var1.Deref(),var2.Deref()))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s55,var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_myplus_3__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s10,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s66,F(boyer.s85,var2.Deref()),F(boyer.s10,F(boyer.s80,var1.Deref(),var2.Deref())),F(boyer.s10,var1.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_power_eval_3 extends Code {

/*

power_eval(big_plus1(_6764,_6766,_6768),_6768,myplus(power_eval(_6764,_6768),_6766),_6788):-cut(1,_6788).
power_eval(power_rep(_6814,_6816),_6816,fix(_6814),_6828):-cut(1,_6828).
power_eval(big_plus(_6854,_6856,_6858,_6860),_6860,myplus(_6858,myplus(power_eval(_6854,_6860),power_eval(_6856,_6860))),_6892):-cut(1,_6892).
power_eval(big_plus(power_rep(_6918,_6920),power_rep(_6924,_6920),zero,_6920),_6920,myplus(_6918,_6924),_6952):-call(_6952).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_power_eval_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_power_eval_3__1(PrologMachine mach){ mach.FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s21,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,F(boyer.s91,var1.Deref(),var3.Deref()),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_power_eval_3__2(PrologMachine mach){ mach.FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s92,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s55,var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_power_eval_3__3(PrologMachine mach){ mach.FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s20,var1,var2,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,var3.Deref(),F(boyer.s80,F(boyer.s91,var1.Deref(),var4.Deref()),F(boyer.s91,var2.Deref(),var4.Deref())))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_power_eval_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s20,F(boyer.s92,var1,var2),F(boyer.s92,var3,var2.Deref()),boyer.s125,var2.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,var1.Deref(),var3.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_quotient_3 extends Code {

/*

quotient(myplus(_6972,myplus(_6972,_6974)),2,myplus(_6972,quotient(_6974,2)),_7002):-call(_7002).
quotient(times(_7022,_7024),_7022,if(zerop(_7022),zero,fix(_7024)),_7050):-call(_7050).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_quotient_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_quotient_3__1(PrologMachine mach){ mach.FillAlternative(pred_quotient_3::exec_pred_quotient_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s80,var1,F(boyer.s80,var1.Deref(),var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.posint2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,var1.Deref(),F(boyer.s96,var2.Deref(),boyer.posint2))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_quotient_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s66,F(boyer.s126,var1.Deref()),boyer.s125,F(boyer.s55,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_remainder_3 extends Code {

/*

remainder(_7068,1,zero,_7076):-cut(1,_7076).
remainder(_7100,_7100,zero,_7108):-cut(1,_7108).
remainder(times(_7134,_7136),_7136,zero,_7144):-cut(1,_7144).
remainder(times(_7170,_7172),_7170,zero,_7182):-call(_7182).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_remainder_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_remainder_3__1(PrologMachine mach){ mach.FillAlternative(pred_remainder_3::exec_pred_remainder_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(boyer.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_remainder_3__2(PrologMachine mach){ mach.FillAlternative(pred_remainder_3::exec_pred_remainder_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_remainder_3__3(PrologMachine mach){ mach.FillAlternative(pred_remainder_3::exec_pred_remainder_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_remainder_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(boyer.s125))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_reverse_loop_3 extends Code {

/*

reverse_loop(_7202,_7208,append(reverse(_7202),_7208),_7216):-cut(1,_7216).
reverse_loop(_7242,[],reverse(_7242),_7252):-call(_7252).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_reverse_loop_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_reverse_loop_3__1(PrologMachine mach){ mach.FillAlternative(pred_reverse_loop_3::exec_pred_reverse_loop_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s12,F(boyer.s98,var1.Deref()),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_reverse_loop_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s98,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_times_3 extends Code {

/*

times(_7278,myplus(_7272,_7274),myplus(times(_7278,_7272),times(_7278,_7274)),_7300):-cut(1,_7300).
times(times(_7326,_7328),_7334,times(_7326,times(_7328,_7334)),_7348):-cut(1,_7348).
times(_7382,boyer_difference(_7374,_7376),boyer_difference(times(_7374,_7382),times(_7376,_7382)),_7402):-cut(1,_7402).
times(_7436,add1(_7428),if(numberp(_7428),myplus(_7436,times(_7436,_7428)),fix(_7436)),_7466):-call(_7466).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_times_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_times_3__1(PrologMachine mach){ mach.FillAlternative(pred_times_3::exec_pred_times_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s80,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s80,F(boyer.s114,var1.Deref(),var2.Deref()),F(boyer.s114,var1.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_times_3__2(PrologMachine mach){ mach.FillAlternative(pred_times_3::exec_pred_times_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(boyer.s114,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s114,var1.Deref(),F(boyer.s114,var2.Deref(),var3.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_times_3__3(PrologMachine mach){ mach.FillAlternative(pred_times_3::exec_pred_times_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s23,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s23,F(boyer.s114,var2.Deref(),var1.Deref()),F(boyer.s114,var3.Deref(),var1.Deref()))))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_times_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(boyer.s10,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(boyer.s66,F(boyer.s85,var2.Deref()),F(boyer.s80,var1.Deref(),F(boyer.s114,var1.Deref(),var2.Deref())),F(boyer.s55,var1.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


