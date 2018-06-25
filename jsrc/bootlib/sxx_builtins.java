import java.util.function.Function; class sxx_builtins /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("*->") ;
static Const s2 = Const.Intern(",") ;
static Const s3 = Const.Intern("->") ;
static Const s4 = Const.Intern(".") ;
static Const s5 = Const.Intern(":-") ;
static Const s6 = Const.Intern(";") ;
static Const s7 = Const.Intern("=") ;
static Const s8 = Const.Intern("\\+") ;
static Const s9 = Const.Intern("call") ;
static Const s10 = Const.Intern("cut") ;
static Const s11 = Const.Intern("dotwo") ;
static Const s12 = Const.Intern("fail") ;
static Const s13 = Const.Intern("forall") ;
static Const s14 = Const.Intern("nb_setarg") ;
static Const s15 = Const.Intern("not") ;
static Const s16 = Const.Intern("one_of_or_else") ;
static Const s17 = Const.Intern("or") ;
static Const s18 = Const.Intern("redo_each_call") ;
static Const s19 = Const.Intern("setup_call_cleanup") ;
static Const s20 = Const.Intern("true") ;
static Const s21 = Const.Intern("undo") ;
static Const s22 = Const.Intern("unify") ;
static Int posint1 = Term.Number(1) ;
}


class pred_or_2 extends Code {

/*

or((_5486->_5488),_5494,_5554):-call(_5486,cut(1,call(_5488,_5554))).
or((_5676->_5678),_5684,_5728):-call(_5684,_5728).
or((_6266*->_6268),_6274,_6370):-unify(dotwo(true),_6282,or((call(_6266),nb_setarg(1,_6282,fail)),(_6282=dotwo(true);_6318),_6370)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_or_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_or_2__1(PrologMachine mach){ mach.FillAlternative(pred_or_2::exec_pred_or_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_builtins.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(sxx_builtins.s0, new HeapChoice(mach.CUTB),F(sxx_builtins.s9,var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call2 ;}
public static Function<PrologMachine,Function> exec_pred_or_2__2(PrologMachine mach){ mach.FillAlternative(pred_or_2::exec_pred_or_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_builtins.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Call2 ;}
public static Function<PrologMachine,Function> exec_pred_or_2__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_builtins.s1,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(sxx_builtins.s11,sxx_builtins.s20) ;
local_aregs[1] = var4 ;
local_aregs[2] = F(sxx_builtins.s17,F(sxx_builtins.s2,F(sxx_builtins.s9,var1.Deref()),F(sxx_builtins.s14,sxx_builtins.posint1,var4.Deref(),sxx_builtins.s12)),F(sxx_builtins.s6,F(sxx_builtins.s7,var4.Deref(),F(sxx_builtins.s11,sxx_builtins.s20)),var5),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_unify_2::exec_static ;}
}


class pred_forall_2 extends Code {

/*

forall(_5808,_5810,_5874):-not(\+ (call(_5808),\+ \+call(_5818)),_5874).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_forall_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_forall_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(sxx_builtins.s8,F(sxx_builtins.s2,F(sxx_builtins.s9,var1.Deref()),F(sxx_builtins.s8,F(sxx_builtins.s8,F(sxx_builtins.s9,var3))))) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_not_1::exec_static ;}
}


class pred_undo_1 extends Code {

/*

undo(_5964,_5992):-call(_5964,_5992).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_undo_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_undo_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call2 ;}
}


class pred_redo_each_call_3 extends Code {

/*

redo_each_call(_6080,_6082,_6084,_6132):-setup_call_cleanup(_6080,_6082,_6084,_6132).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_redo_each_call_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_redo_each_call_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_setup_call_cleanup_3::exec_static ;}
}


class pred_one_of_or_else_3 extends Code {

/*

one_of_or_else(_6526,_6528,_6530,_6582):-or((_6534*->_6536),_6542,_6582).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_one_of_or_else_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_one_of_or_else_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = F(sxx_builtins.s1,var4,var5) ;
local_aregs[1] = var6 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_or_2::exec_static ;}
}


