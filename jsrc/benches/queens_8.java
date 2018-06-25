import java.util.function.Function; class queens_8 /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("+") ;
static Const s2 = Const.Intern("-") ;
static Const s3 = Const.Intern(".") ;
static Const s4 = Const.Intern(":-") ;
static Const s5 = Const.Intern("=\\=") ;
static Const s6 = Const.Intern("call") ;
static Const s7 = Const.Intern("cut") ;
static Const s8 = Const.Intern("fail") ;
static Const s9 = Const.Intern("is") ;
static Const s10 = Const.Intern("not_attack") ;
static Const s11 = Const.Intern("queens") ;
static Const s12 = Const.Intern("range") ;
static Const s13 = Const.Intern("select") ;
static Const s14 = Const.Intern("smallerthan") ;
static Const s15 = Const.Intern("top") ;
static Int posint1 = Term.Number(1) ;
static Int posint8 = Term.Number(8) ;
}


class pred_top_0 extends Code {

/*

top(_29646):-queens(8,_29618,fail(_29646)).
top(_29764):-call(_29764).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.FillAlternative(pred_top_0::exec_pred_top_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = V(mach) ;
local_aregs[0] = queens_8.posint8 ;
local_aregs[1] = var1 ;
local_aregs[2] = F(queens_8.s8,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_queens_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_top_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_queens_2 extends Code {

/*

queens(_29802,_29804,_29860):-range(1,_29802,_29812,queens(_29812,[],_29804,_29860)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_queens_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_queens_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = queens_8.posint1 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3 ;
local_aregs[3] = F(queens_8.s11,var3.Deref(),Const.Nil,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_range_3::exec_static ;}
}


class pred_queens_3 extends Code {

/*

queens([],_30040,_30040,_30064):-call(_30064).
queens(_30156,_30158,_30160,_30240):-select(_30156,_30166,_30168,not_attack(_30158,_30168,queens(_30166,[_30168|_30158],_30160,_30240))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_queens_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_queens_3__1(PrologMachine mach){ mach.FillAlternative(pred_queens_3::exec_pred_queens_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_queens_3__2(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = F(queens_8.s10,var2.Deref(),var5.Deref(),F(queens_8.s11,var4.Deref(),F(queens_8.s3,var5.Deref(),var2.Deref()),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_select_3::exec_static ;}
}


class pred_not_attack_2 extends Code {

/*

not_attack(_30482,_30484,_30526):-not_attack(_30482,_30484,1,_30526).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_not_attack_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_not_attack_2__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[2] = queens_8.posint1 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_not_attack_3::exec_static ;}
}


class pred_not_attack_3 extends Code {

/*

not_attack([],_30654,_30656,_30696):-cut(1,_30696).
not_attack([_30778|_30780],_30786,_30788,_30890):- =\=(_30786,_30778+_30788,=\=(_30786,_30778-_30788,is(_30822,_30788+1,not_attack(_30780,_30786,_30822,_30890)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_not_attack_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_not_attack_3__1(PrologMachine mach){ mach.FillAlternative(pred_not_attack_3::exec_pred_not_attack_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_not_attack_3__2(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(F(queens_8.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(queens_8.s1,var1.Deref(),var4.Deref()) ;
local_aregs[2] = F(queens_8.s5,var3.Deref(),F(queens_8.s2,var1.Deref(),var4.Deref()),F(queens_8.s9,var5,F(queens_8.s1,var4.Deref(),queens_8.posint1),F(queens_8.s10,var2.Deref(),var3.Deref(),var5.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_sym__c61_system_notequals_2::exec_static ;}
}


class pred_select_3 extends Code {

/*

select([_31180|_31182],_31182,_31180,_31212):-call(_31212).
select([_31322|_31324],[_31322|_31330],_31338,_31386):-select(_31324,_31330,_31338,_31386).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_select_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_select_3__1(PrologMachine mach){ mach.FillAlternative(pred_select_3::exec_pred_select_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(queens_8.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_select_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(queens_8.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(queens_8.s3,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_select_3::exec_static ;}
}


class pred_range_3 extends Code {

/*

range(_31532,_31532,[_31532],_31582):-cut(1,_31582).
range(_31676,_31684,[_31676|_31678],_31764):-smallerthan(_31676,_31684,is(_31702,_31676+1,range(_31702,_31684,_31678,_31764))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_range_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_range_3__1(PrologMachine mach){ mach.FillAlternative(pred_range_3::exec_pred_range_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(queens_8.s3,var1.Deref(),Const.Nil)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_range_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(queens_8.s3,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(queens_8.s9,var4,F(queens_8.s1,var1.Deref(),queens_8.posint1),F(queens_8.s12,var4.Deref(),var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
}


