import java.util.function.Function; class prover /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("#") ;
static Const s2 = Const.Intern("&") ;
static Const s3 = Const.Intern("+") ;
static Const s4 = Const.Intern("-") ;
static Const s5 = Const.Intern(".") ;
static Const s6 = Const.Intern(":-") ;
static Const s7 = Const.Intern("a") ;
static Const s8 = Const.Intern("add_conjunction") ;
static Const s9 = Const.Intern("b") ;
static Const s10 = Const.Intern("c") ;
static Const s11 = Const.Intern("call") ;
static Const s12 = Const.Intern("cut") ;
static Const s13 = Const.Intern("expand") ;
static Const s14 = Const.Intern("extend") ;
static Const s15 = Const.Intern("fail") ;
static Const s16 = Const.Intern("fs") ;
static Const s17 = Const.Intern("fx") ;
static Const s18 = Const.Intern("implies") ;
static Const s19 = Const.Intern("includes") ;
static Const s20 = Const.Intern("on_load_prover") ;
static Const s21 = Const.Intern("op") ;
static Const s22 = Const.Intern("opposite") ;
static Const s23 = Const.Intern("problem") ;
static Const s24 = Const.Intern("prover") ;
static Const s25 = Const.Intern("refute") ;
static Const s26 = Const.Intern("refuted") ;
static Const s27 = Const.Intern("to_be") ;
static Const s28 = Const.Intern("top") ;
static Const s29 = Const.Intern("unify") ;
static Const s30 = Const.Intern("write") ;
static Const s31 = Const.Intern("xfy") ;
static Int posint1 = Term.Number(1) ;
static Int posint2 = Term.Number(2) ;
static Int posint3 = Term.Number(3) ;
static Int posint4 = Term.Number(4) ;
static Int posint5 = Term.Number(5) ;
static Int posint6 = Term.Number(6) ;
static Int posint7 = Term.Number(7) ;
static Int posint8 = Term.Number(8) ;
static Int posint9 = Term.Number(9) ;
static Int posint10 = Term.Number(10) ;
static Int posint500 = Term.Number(500) ;
static Int posint850 = Term.Number(850) ;
static Int posint950 = Term.Number(950) ;
}


class pred_top_0 extends Code {

/*

top(_21366):-prover(_21366).


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
return (Function<PrologMachine,Function>)pred_prover_0::exec_static ;}
}


class pred_on_load_prover_0 extends Code {

/*

on_load_prover(_21466):-write(op(950,xfy,#),_21466).
on_load_prover(_21586):-write(op(850,xfy,&),_21586).
on_load_prover(_21706):-write(op(500,fx,+),_21706).
on_load_prover(_21826):-write(op(500,fx,-),_21826).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_on_load_prover_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_on_load_prover_0__1(PrologMachine mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(prover.s21,prover.posint950,prover.s31,prover.s1) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_on_load_prover_0__2(PrologMachine mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(prover.s21,prover.posint850,prover.s31,prover.s2) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_on_load_prover_0__3(PrologMachine mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(prover.s21,prover.posint500,prover.s17,prover.s3) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_on_load_prover_0__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(prover.s21,prover.posint500,prover.s17,prover.s4) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
}


class pred_prover_0 extends Code {

/*

prover(_21940):-problem(_21896,_21898,_21900,implies(_21898,_21900,fail(_21940))).
prover(_22134):-call(_22134).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_prover_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_prover_0__1(PrologMachine mach){ mach.FillAlternative(pred_prover_0::exec_pred_prover_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = F(prover.s18,var2.Deref(),var3.Deref(),F(prover.s15,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_problem_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_prover_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_problem_3 extends Code {

/*

problem(1,-a,+a,_22218):-call(_22218).
problem(2,+a,-a& -a,_22360):-call(_22360).
problem(3,-a,+to_be# -to_be,_22502):-call(_22502).
problem(4,-a& -a,-a,_22644):-call(_22644).
problem(5,-a,+b# -a,_22786):-call(_22786).
problem(6,-a& -b,-b& -a,_22938):-call(_22938).
problem(7,-a,-b# +b& -a,_23090):-call(_23090).
problem(8,-a# -b# +c,-b# -a# +c,_23262):-call(_23262).
problem(9,-a# +b,+b& -c# -a# +c,_23434):-call(_23434).
problem(10,(-a# +c)&(-b# +c),-a& -b# +c,_23616):-call(_23616).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_problem_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_problem_3__1(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s4,prover.s7)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s3,prover.s7)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__2(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint2))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s3,prover.s7)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s2,F(prover.s4,prover.s7),F(prover.s4,prover.s7))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__3(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s4,prover.s7)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s1,F(prover.s3,prover.s27),F(prover.s4,prover.s27))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__4(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint4))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s2,F(prover.s4,prover.s7),F(prover.s4,prover.s7))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s4,prover.s7)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__5(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint5))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s4,prover.s7)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s1,F(prover.s3,prover.s9),F(prover.s4,prover.s7))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__6(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint6))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s2,F(prover.s4,prover.s7),F(prover.s4,prover.s9))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s2,F(prover.s4,prover.s9),F(prover.s4,prover.s7))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__7(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint7))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s4,prover.s7)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s1,F(prover.s4,prover.s9),F(prover.s2,F(prover.s3,prover.s9),F(prover.s4,prover.s7)))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__8(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint8))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s1,F(prover.s4,prover.s7),F(prover.s1,F(prover.s4,prover.s9),F(prover.s3,prover.s10)))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s1,F(prover.s4,prover.s9),F(prover.s1,F(prover.s4,prover.s7),F(prover.s3,prover.s10)))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__9(PrologMachine mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint9))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s1,F(prover.s4,prover.s7),F(prover.s3,prover.s9))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s1,F(prover.s2,F(prover.s3,prover.s9),F(prover.s4,prover.s10)),F(prover.s1,F(prover.s4,prover.s7),F(prover.s3,prover.s10)))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_problem_3__10(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint10))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s2,F(prover.s1,F(prover.s4,prover.s7),F(prover.s3,prover.s10)),F(prover.s1,F(prover.s4,prover.s9),F(prover.s3,prover.s10)))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s1,F(prover.s2,F(prover.s4,prover.s7),F(prover.s4,prover.s9)),F(prover.s3,prover.s10))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_implies_2 extends Code {

/*

implies(_23714,_23716,_23780):-opposite(_23716,_23722,add_conjunction(_23714,_23722,fs([],[],[],[]),_23780)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_implies_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_implies_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = F(prover.s8,var1.Deref(),var3.Deref(),F(prover.s16,Const.Nil,Const.Nil,Const.Nil,Const.Nil),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_opposite_2::exec_static ;}
}


class pred_opposite_2 extends Code {

/*

opposite(_23962&_23964,_23968#_23970,_24034):-cut(1,opposite(_23962,_23968,opposite(_23964,_23970,_24034))).
opposite(_24214#_24216,_24220&_24222,_24286):-cut(1,opposite(_24214,_24220,opposite(_24216,_24222,_24286))).
opposite(+_24466,-_24466,_24510):-cut(1,_24510).
opposite(-_24590,+_24590,_24622):-call(_24622).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_opposite_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_opposite_2__1(PrologMachine mach){ mach.FillAlternative(pred_opposite_2::exec_pred_opposite_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s2,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s1,var3,var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(prover.s22,var1.Deref(),var3.Deref(),F(prover.s22,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_opposite_2__2(PrologMachine mach){ mach.FillAlternative(pred_opposite_2::exec_pred_opposite_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s1,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s2,var3,var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(prover.s22,var1.Deref(),var3.Deref(),F(prover.s22,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_opposite_2__3(PrologMachine mach){ mach.FillAlternative(pred_opposite_2::exec_pred_opposite_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s3,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s4,var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_opposite_2__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s4,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s3,var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_add_conjunction_3 extends Code {

/*

add_conjunction(_24718,_24720,_24722,_24794):-expand(_24718,_24722,_24730,expand(_24720,_24730,_24738,refute(_24738,_24794))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_add_conjunction_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_add_conjunction_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = F(prover.s13,var2.Deref(),var4.Deref(),var5,F(prover.s25,var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_expand_3::exec_static ;}
}


class pred_expand_3 extends Code {

/*

expand(_25046,refuted,refuted,_25090):-cut(1,_25090).
expand(_25190&_25192,fs(_25196,_25198,_25200,_25202),refuted,_25268):-includes(_25196,_25190&_25192,cut(1,_25268)).
expand(_25418&_25420,fs(_25424,_25426,_25428,_25430),fs(_25424,_25426,_25428,_25430),_25506):-includes(_25426,_25418&_25420,cut(1,_25506)).
expand(_25656&_25658,fs(_25662,_25664,_25666,_25668),_25676,_25766):-cut(1,expand(_25656,fs(_25662,[_25656&_25658|_25664],_25666,_25668),_25706,expand(_25658,_25706,_25676,_25766))).
expand(_25994#_25996,fs(_26000,_26002,_26004,_26006),_26014,_26102):-cut(1,opposite(_25994#_25996,_26026,extend(_26026,_26000,_26002,_26030,fs(_26030,_26002,_26004,_26006),_26014,_26102))).
expand(+_26358,fs(_26362,_26364,_26366,_26368),_26376,_26446):-cut(1,extend(_26358,_26366,_26368,_26384,fs(_26362,_26364,_26384,_26368),_26376,_26446)).
expand(-_26652,fs(_26656,_26658,_26660,_26662),_26670,_26734):-extend(_26652,_26662,_26660,_26680,fs(_26656,_26658,_26660,_26680),_26670,_26734).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_expand_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_expand_3__1(PrologMachine mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(prover.s26))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(prover.s26))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_expand_3__2(PrologMachine mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__3) ;
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
if (!( (areg0).Unify(F(prover.s2,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s16,var3,var4,var5,var6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(prover.s26))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(prover.s2,var1.Deref(),var2.Deref()) ;
local_aregs[2] = F(prover.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_includes_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_expand_3__3(PrologMachine mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__4) ;
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
if (!( (areg0).Unify(F(prover.s2,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s16,var3,var4,var5,var6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(prover.s16,var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = F(prover.s2,var1.Deref(),var2.Deref()) ;
local_aregs[2] = F(prover.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_includes_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_expand_3__4(PrologMachine mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s2,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s16,var3,var4,var5,var6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var7))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(prover.s13,var1.Deref(),F(prover.s16,var3.Deref(),F(prover.s5,F(prover.s2,var1.Deref(),var2.Deref()),var4.Deref()),var5.Deref(),var6.Deref()),var8,F(prover.s13,var2.Deref(),var8.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_expand_3__5(PrologMachine mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s1,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s16,var3,var4,var5,var6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var7))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(prover.s22,F(prover.s1,var1.Deref(),var2.Deref()),var8,F(prover.s14,var8.Deref(),var3.Deref(),var4.Deref(),var9,F(prover.s16,var9.Deref(),var4.Deref(),var5.Deref(),var6.Deref()),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_expand_3__6(PrologMachine mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s3,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s16,var2,var3,var4,var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var6))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(prover.s14,var1.Deref(),var4.Deref(),var5.Deref(),var7,F(prover.s16,var2.Deref(),var3.Deref(),var7.Deref(),var5.Deref()),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_expand_3__7(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s4,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(prover.s16,var2,var3,var4,var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = F(prover.s16,var2.Deref(),var3.Deref(),var4.Deref(),var7.Deref()) ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_extend_6::exec_static ;}
}


class pred_includes_2 extends Code {

/*

includes([_26934|_26936],_26934,_26976):-cut(1,_26976).
includes([_27074|_27076],_27082,_27122):-includes(_27076,_27082,_27122).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_includes_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_includes_2__1(PrologMachine mach){ mach.FillAlternative(pred_includes_2::exec_pred_includes_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_includes_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_includes_2::exec_static ;}
}


class pred_extend_6 extends Code {

/*

extend(_27264,_27266,_27268,_27270,_27272,refuted,_27344):-includes(_27268,_27264,cut(1,_27344)).
extend(_27530,_27532,_27534,_27532,_27538,_27538,_27610):-includes(_27532,_27530,cut(1,_27610)).
extend(_27796,_27798,_27806,[_27796|_27798],_27810,_27810,_27834):-call(_27834).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_extend_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_extend_6__1(PrologMachine mach){ mach.FillAlternative(pred_extend_6::exec_pred_extend_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(prover.s26))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(prover.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_includes_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_extend_6__2(PrologMachine mach){ mach.FillAlternative(pred_extend_6::exec_pred_extend_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(prover.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_includes_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_extend_6__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(prover.s5,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_refute_1 extends Code {

/*

refute(refuted,_28038):-cut(1,_28038).
refute(fs([_28140&_28142|_28148],_28154,_28156,_28158),_28272):-opposite(_28140,_28168,opposite(_28142,_28174,unify(fs(_28148,_28154,_28156,_28158),_28188,add_conjunction(_28168,_28142,_28188,add_conjunction(_28168,_28174,_28188,add_conjunction(_28140,_28174,_28188,_28272)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_refute_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_refute_1__1(PrologMachine mach){ mach.FillAlternative(pred_refute_1::exec_pred_refute_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.s26))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_refute_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(prover.s16,F(prover.s5,F(prover.s2,var1,var2),var3),var4,var5,var6)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var7 ;
local_aregs[2] = F(prover.s22,var2.Deref(),var8,F(prover.s29,F(prover.s16,var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref()),var9,F(prover.s8,var7.Deref(),var2.Deref(),var9.Deref(),F(prover.s8,var7.Deref(),var8.Deref(),var9.Deref(),F(prover.s8,var1.Deref(),var8.Deref(),var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_opposite_2::exec_static ;}
}


