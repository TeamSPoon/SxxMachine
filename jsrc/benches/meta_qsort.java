import java.util.function.Function; class meta_qsort /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("!") ;
static Const s2 = Const.Intern(",") ;
static Const s3 = Const.Intern("->") ;
static Const s4 = Const.Intern(".") ;
static Const s5 = Const.Intern(":-") ;
static Const s6 = Const.Intern(";") ;
static Const s7 = Const.Intern("=") ;
static Const s8 = Const.Intern("=<") ;
static Const s9 = Const.Intern("\\+") ;
static Const s10 = Const.Intern("call") ;
static Const s11 = Const.Intern("cut") ;
static Const s12 = Const.Intern("define") ;
static Const s13 = Const.Intern("fail") ;
static Const s14 = Const.Intern("interpret") ;
static Const s15 = Const.Intern("interpret_built_in") ;
static Const s16 = Const.Intern("interpret_disjunction") ;
static Const s17 = Const.Intern("is_built_in") ;
static Const s18 = Const.Intern("meta_qsort") ;
static Const s19 = Const.Intern("nonvar") ;
static Const s20 = Const.Intern("number") ;
static Const s21 = Const.Intern("or") ;
static Const s22 = Const.Intern("partition") ;
static Const s23 = Const.Intern("qsort") ;
static Const s24 = Const.Intern("smallerorequal") ;
static Const s25 = Const.Intern("top") ;
static Const s26 = Const.Intern("true") ;
static Const s27 = Const.Intern("var") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint2 = Term.Number(2) ;
static Int posint4 = Term.Number(4) ;
static Int posint6 = Term.Number(6) ;
static Int posint7 = Term.Number(7) ;
static Int posint8 = Term.Number(8) ;
static Int posint10 = Term.Number(10) ;
static Int posint11 = Term.Number(11) ;
static Int posint17 = Term.Number(17) ;
static Int posint18 = Term.Number(18) ;
static Int posint21 = Term.Number(21) ;
static Int posint27 = Term.Number(27) ;
static Int posint28 = Term.Number(28) ;
static Int posint29 = Term.Number(29) ;
static Int posint31 = Term.Number(31) ;
static Int posint32 = Term.Number(32) ;
static Int posint33 = Term.Number(33) ;
static Int posint37 = Term.Number(37) ;
static Int posint39 = Term.Number(39) ;
static Int posint40 = Term.Number(40) ;
static Int posint46 = Term.Number(46) ;
static Int posint47 = Term.Number(47) ;
static Int posint51 = Term.Number(51) ;
static Int posint53 = Term.Number(53) ;
static Int posint55 = Term.Number(55) ;
static Int posint59 = Term.Number(59) ;
static Int posint61 = Term.Number(61) ;
static Int posint63 = Term.Number(63) ;
static Int posint65 = Term.Number(65) ;
static Int posint66 = Term.Number(66) ;
static Int posint74 = Term.Number(74) ;
static Int posint75 = Term.Number(75) ;
static Int posint81 = Term.Number(81) ;
static Int posint82 = Term.Number(82) ;
static Int posint83 = Term.Number(83) ;
static Int posint85 = Term.Number(85) ;
static Int posint90 = Term.Number(90) ;
static Int posint92 = Term.Number(92) ;
static Int posint94 = Term.Number(94) ;
static Int posint95 = Term.Number(95) ;
static Int posint99 = Term.Number(99) ;
}


class pred_top_0 extends Code {

/*

top(_29764):-meta_qsort(_29764).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_meta_qsort_0::exec_static ;}
}


class pred_meta_qsort_0 extends Code {

/*

meta_qsort(_29836):-interpret(qsort,_29836).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_meta_qsort_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_meta_qsort_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = meta_qsort.s23 ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_interpret_1::exec_static ;}
}


class pred_interpret_1 extends Code {

/*

interpret(_29906,_29972):-interpret(_29906,_29912,or((nonvar(_29912),!,interpret(_29912)),true,_29972)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_interpret_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_interpret_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = F(meta_qsort.s21,F(meta_qsort.s2,F(meta_qsort.s19,var2.Deref()),F(meta_qsort.s2,meta_qsort.s1,F(meta_qsort.s14,var2.Deref()))),meta_qsort.s26,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_interpret_2::exec_static ;}
}


class pred_interpret_2 extends Code {

/*

interpret(_30126,_30128,_30178):-var(_30126,cut(1,fail(_30178))).
interpret((_30304,_30306),_30312,_30398):-cut(1,interpret(_30304,_30318,or((nonvar(_30318)->_30312=(_30318,_30306)),interpret(_30306,_30312),_30398))).
interpret((_30572;_30574),_30580,_30628):-cut(1,interpret_disjunction(_30572,_30574,_30580,_30628)).
interpret((_30760->_30762),_30768,_30822):-cut(1,interpret_disjunction((_30760->_30762),fail,_30768,_30822)).
interpret(\+_30954,_30960,_31014):-cut(1,interpret_disjunction((_30954->fail),true,_30960,_31014)).
interpret(!,true,_31182):-cut(1,_31182).
interpret(_31250,_31252,_31302):-number(_31250,cut(1,fail(_31302))).
interpret(_31428,_31430,_31484):-is_built_in(_31428,cut(1,interpret_built_in(_31428,_31484))).
interpret(_31624,_31626,_31676):-define(_31624,_31632,interpret(_31632,_31676)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_interpret_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_interpret_2__1(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(meta_qsort.s0, new HeapChoice(mach.CUTB),F(meta_qsort.s13,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_var_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__2(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s2,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(meta_qsort.s14,var1.Deref(),var4,F(meta_qsort.s21,F(meta_qsort.s3,F(meta_qsort.s19,var4.Deref()),F(meta_qsort.s7,var3.Deref(),F(meta_qsort.s2,var4.Deref(),var2.Deref()))),F(meta_qsort.s14,var2.Deref(),var3.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__3(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(meta_qsort.s16,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__4(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(meta_qsort.s16,F(meta_qsort.s3,var1.Deref(),var2.Deref()),meta_qsort.s13,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__5(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s9,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(meta_qsort.s16,F(meta_qsort.s3,var1.Deref(),meta_qsort.s13),meta_qsort.s26,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__6(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(meta_qsort.s1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(meta_qsort.s26))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__7(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(meta_qsort.s0, new HeapChoice(mach.CUTB),F(meta_qsort.s13,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_number_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__8(PrologMachine mach){ mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(meta_qsort.s0, new HeapChoice(mach.CUTB),F(meta_qsort.s15,var1.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_is_built_in_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_interpret_2__9(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = F(meta_qsort.s14,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_define_2::exec_static ;}
}


class pred_interpret_disjunction_3 extends Code {

/*

interpret_disjunction((_31824->_31826),_31832,_31834,_31926):-interpret(_31824,_31840,cut(1,or((nonvar(_31840)->_31834=(_31840->_31826)),interpret(_31826,_31834),_31926))).
interpret_disjunction((_32114->_32116),_32122,_32124,_32176):-cut(1,interpret(_32122,_32124,_32176)).
interpret_disjunction(_32308,_32310,_32312,_32358):-interpret(_32308,_32312,_32358).
interpret_disjunction(_32484,_32486,_32488,_32534):-interpret(_32486,_32488,_32534).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_interpret_disjunction_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_interpret_disjunction_3__1(PrologMachine mach){ mach.FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = F(meta_qsort.s0, new HeapChoice(mach.CUTB),F(meta_qsort.s21,F(meta_qsort.s3,F(meta_qsort.s19,var5.Deref()),F(meta_qsort.s7,var4.Deref(),F(meta_qsort.s3,var5.Deref(),var2.Deref()))),F(meta_qsort.s14,var2.Deref(),var4.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_interpret_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_interpret_disjunction_3__2(PrologMachine mach){ mach.FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(meta_qsort.s14,var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_interpret_disjunction_3__3(PrologMachine mach){ mach.FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_interpret_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_interpret_disjunction_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_interpret_2::exec_static ;}
}


class pred_is_built_in_1 extends Code {

/*

is_built_in(true,_32682):-call(_32682).
is_built_in(_32764=<_32766,_32792):-call(_32792).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_is_built_in_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_is_built_in_1__1(PrologMachine mach){ mach.FillAlternative(pred_is_built_in_1::exec_pred_is_built_in_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(meta_qsort.s26))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_is_built_in_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s8,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_interpret_built_in_1 extends Code {

/*

interpret_built_in(true,_32896):-call(_32896).
interpret_built_in(_32984=<_32986,_33024):-smallerorequal(_32984,_32986,_33024).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_interpret_built_in_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_interpret_built_in_1__1(PrologMachine mach){ mach.FillAlternative(pred_interpret_built_in_1::exec_pred_interpret_built_in_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(meta_qsort.s26))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_interpret_built_in_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s8,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
}


class pred_define_2 extends Code {

/*

define(qsort,qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,40,53,59,8],_33454,[]),_33484):-call(_33484).
define(qsort([_33592|_33594],_33600,_33602),(partition(_33594,_33592,_33610,_33612),qsort(_33612,_33618,_33602),qsort(_33610,_33600,[_33592|_33618])),_33674):-call(_33674).
define(qsort([],_33784,_33784),true,_33814):-call(_33814).
define(partition([_33922|_33924],_33936,[_33922|_33930],_33940),(_33922=<_33936,!,partition(_33924,_33936,_33930,_33940)),_33996):-call(_33996).
define(partition([_34104|_34106],_34118,_34120,[_34104|_34112]),partition(_34106,_34118,_34120,_34112),_34160):-call(_34160).
define(partition([],_34270,[],[]),true,_34302):-call(_34302).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_define_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_define_2__1(PrologMachine mach){ mach.FillAlternative(pred_define_2::exec_pred_define_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(meta_qsort.s23))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(meta_qsort.s23,F(meta_qsort.s4,meta_qsort.posint27,F(meta_qsort.s4,meta_qsort.posint74,F(meta_qsort.s4,meta_qsort.posint17,F(meta_qsort.s4,meta_qsort.posint33,F(meta_qsort.s4,meta_qsort.posint94,F(meta_qsort.s4,meta_qsort.posint18,F(meta_qsort.s4,meta_qsort.posint46,F(meta_qsort.s4,meta_qsort.posint83,F(meta_qsort.s4,meta_qsort.posint65,F(meta_qsort.s4,meta_qsort.posint2,F(meta_qsort.s4,meta_qsort.posint32,F(meta_qsort.s4,meta_qsort.posint53,F(meta_qsort.s4,meta_qsort.posint28,F(meta_qsort.s4,meta_qsort.posint85,F(meta_qsort.s4,meta_qsort.posint99,F(meta_qsort.s4,meta_qsort.posint47,F(meta_qsort.s4,meta_qsort.posint28,F(meta_qsort.s4,meta_qsort.posint82,F(meta_qsort.s4,meta_qsort.posint6,F(meta_qsort.s4,meta_qsort.posint11,F(meta_qsort.s4,meta_qsort.posint55,F(meta_qsort.s4,meta_qsort.posint29,F(meta_qsort.s4,meta_qsort.posint39,F(meta_qsort.s4,meta_qsort.posint81,F(meta_qsort.s4,meta_qsort.posint90,F(meta_qsort.s4,meta_qsort.posint37,F(meta_qsort.s4,meta_qsort.posint10,F(meta_qsort.s4,meta_qsort.posint0,F(meta_qsort.s4,meta_qsort.posint66,F(meta_qsort.s4,meta_qsort.posint51,F(meta_qsort.s4,meta_qsort.posint7,F(meta_qsort.s4,meta_qsort.posint21,F(meta_qsort.s4,meta_qsort.posint85,F(meta_qsort.s4,meta_qsort.posint27,F(meta_qsort.s4,meta_qsort.posint31,F(meta_qsort.s4,meta_qsort.posint63,F(meta_qsort.s4,meta_qsort.posint75,F(meta_qsort.s4,meta_qsort.posint4,F(meta_qsort.s4,meta_qsort.posint95,F(meta_qsort.s4,meta_qsort.posint99,F(meta_qsort.s4,meta_qsort.posint11,F(meta_qsort.s4,meta_qsort.posint28,F(meta_qsort.s4,meta_qsort.posint61,F(meta_qsort.s4,meta_qsort.posint74,F(meta_qsort.s4,meta_qsort.posint18,F(meta_qsort.s4,meta_qsort.posint92,F(meta_qsort.s4,meta_qsort.posint40,F(meta_qsort.s4,meta_qsort.posint53,F(meta_qsort.s4,meta_qsort.posint59,F(meta_qsort.s4,meta_qsort.posint8,Const.Nil)))))))))))))))))))))))))))))))))))))))))))))))))),var1,Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_define_2__2(PrologMachine mach){ mach.FillAlternative(pred_define_2::exec_pred_define_2__3) ;
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
if (!( (areg0).Unify(F(meta_qsort.s23,F(meta_qsort.s4,var1,var2),var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(meta_qsort.s2,F(meta_qsort.s22,var2.Deref(),var1.Deref(),var5,var6),F(meta_qsort.s2,F(meta_qsort.s23,var6.Deref(),var7,var4.Deref()),F(meta_qsort.s23,var5.Deref(),var3.Deref(),F(meta_qsort.s4,var1.Deref(),var7.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_define_2__3(PrologMachine mach){ mach.FillAlternative(pred_define_2::exec_pred_define_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s23,Const.Nil,var1,var1.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(meta_qsort.s26))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_define_2__4(PrologMachine mach){ mach.FillAlternative(pred_define_2::exec_pred_define_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s22,F(meta_qsort.s4,var1,var2),var3,F(meta_qsort.s4,var1.Deref(),var4),var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(meta_qsort.s2,F(meta_qsort.s8,var1.Deref(),var3.Deref()),F(meta_qsort.s2,meta_qsort.s1,F(meta_qsort.s22,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref())))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_define_2__5(PrologMachine mach){ mach.FillAlternative(pred_define_2::exec_pred_define_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s22,F(meta_qsort.s4,var1,var2),var3,var4,F(meta_qsort.s4,var1.Deref(),var5))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(meta_qsort.s22,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_define_2__6(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(meta_qsort.s22,Const.Nil,var1,Const.Nil,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(meta_qsort.s26))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


