import java.util.function.Function; class fast_mu /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("+") ;
static Const s2 = Const.Intern("-") ;
static Const s3 = Const.Intern("->") ;
static Const s4 = Const.Intern(".") ;
static Const s5 = Const.Intern("/\\") ;
static Const s6 = Const.Intern(":-") ;
static Const s7 = Const.Intern("=:=") ;
static Const s8 = Const.Intern(">>") ;
static Const s9 = Const.Intern("call") ;
static Const s10 = Const.Intern("derive") ;
static Const s11 = Const.Intern("derive2") ;
static Const s12 = Const.Intern("i") ;
static Const s13 = Const.Intern("is") ;
static Const s14 = Const.Intern("length") ;
static Const s15 = Const.Intern("lower_bound") ;
static Const s16 = Const.Intern("m") ;
static Const s17 = Const.Intern("or") ;
static Const s18 = Const.Intern("rule") ;
static Const s19 = Const.Intern("smallerorequal") ;
static Const s20 = Const.Intern("smallerthan") ;
static Const s21 = Const.Intern("theorem") ;
static Const s22 = Const.Intern("top") ;
static Const s23 = Const.Intern("u") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint2 = Term.Number(2) ;
static Int posint3 = Term.Number(3) ;
static Int posint4 = Term.Number(4) ;
}


class pred_top_0 extends Code {

/*

top(_17332):-theorem([m,u,i,i,u],_17332).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(fast_mu.s4,fast_mu.s16,F(fast_mu.s4,fast_mu.s23,F(fast_mu.s4,fast_mu.s12,F(fast_mu.s4,fast_mu.s12,F(fast_mu.s4,fast_mu.s23,Const.Nil))))) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_theorem_1::exec_static ;}
}


class pred_theorem_1 extends Code {

/*

theorem(_17396,_17480):-length(_17396,_17402,is(_17412,_17402-1,derive([m,i],_17396,1,_17412,_17438,0,_17480))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_theorem_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_theorem_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = F(fast_mu.s13,var3,F(fast_mu.s2,var2.Deref(),fast_mu.posint1),F(fast_mu.s10,F(fast_mu.s4,fast_mu.s16,F(fast_mu.s4,fast_mu.s12,Const.Nil)),var1.Deref(),fast_mu.posint1,var3.Deref(),var4,fast_mu.posint0,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_length_2::exec_static ;}
}


class pred_derive_6 extends Code {

/*

derive(_17728,_17730,_17732,_17734,_17736,_17738,_17812):-derive2(_17728,_17730,_17732,_17734,1,_17736,_17738,_17812).
derive(_18020,_18022,_18024,_18026,_18028,_18030,_18120):-is(_18040,_18030+1,derive(_18020,_18022,_18024,_18026,_18028,_18040,_18120)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_derive_6__1(mach); }
public static Function<PrologMachine,Function> exec_pred_derive_6__1(PrologMachine mach){ mach.FillAlternative(pred_derive_6::exec_pred_derive_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
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
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = fast_mu.posint1 ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = var6.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_derive2_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_derive_6__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
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
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = F(fast_mu.s1,var6.Deref(),fast_mu.posint1) ;
local_aregs[2] = F(fast_mu.s10,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_derive2_7 extends Code {

/*

derive2(_18364,_18364,_18368,_18368,_18372,[],_18376,_18398):-call(_18398).
derive2(_18564,_18566,_18568,_18570,_18572,[rule(_18552,_18554)|_18560],_18576,_18722):-lower_bound(_18568,_18570,_18584,smallerorequal(_18584,_18576,is(_18600,_18576-1,rule(_18564,_18554,_18568,_18612,_18572,_18616,_18552,derive2(_18554,_18566,_18612,_18570,_18616,_18560,_18600,_18722))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_derive2_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_derive2_7__1(PrologMachine mach){ mach.FillAlternative(pred_derive2_7::exec_pred_derive2_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
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
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_derive2_7__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
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
if (!( (areg5).Unify(F(fast_mu.s4,F(fast_mu.s18,var6,var7),var8)))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var10 ;
local_aregs[3] = F(fast_mu.s19,var10.Deref(),var9.Deref(),F(fast_mu.s13,var11,F(fast_mu.s2,var9.Deref(),fast_mu.posint1),F(fast_mu.s18,var1.Deref(),var7.Deref(),var3.Deref(),var12,var5.Deref(),var13,var6.Deref(),F(fast_mu.s11,var7.Deref(),var2.Deref(),var12.Deref(),var4.Deref(),var13.Deref(),var8.Deref(),var11.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Function<PrologMachine,Function>)pred_lower_bound_3::exec_static ;}
}


class pred_rule_7 extends Code {

/*

rule([m|_19236],[m|_19242],_19250,_19252,_19254,_19256,_19258,_19346):-rule(_19236,_19242,_19250,_19252,_19254,_19256,1,i,_19258,_19280,_19280,_19346).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rule_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rule_7__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
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
if (!( (areg0).Unify(F(fast_mu.s4,fast_mu.s16,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(fast_mu.s4,fast_mu.s16,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = fast_mu.posint1 ;
local_aregs[7] = fast_mu.s12 ;
local_aregs[8] = var7.Deref() ;
local_aregs[9] = var8 ;
local_aregs[10] = var8.Deref() ;
local_aregs[11] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_rule_11::exec_static ;}
}


class pred_rule_11 extends Code {

/*

rule([i],[i,u],_19652,_19654,_19656,_19658,_19660,_19662,1,_19666,_19668,_19798):-smallerorequal(_19656,_19660,is(_19658,_19660-2,is(_19654,_19652+1,_19798))).
rule([],_20102,_20104,_20106,_20108,1,_20112,_20114,2,_20102,[],_20220):-is(_20106,_20104+_20104,_20220).
rule([i,i,i|_20430],[u|_20430],_20444,_20446,_20448,_20450,_20452,_20454,3,_20458,_20460,_20590):-smallerorequal(_20448,_20452,is(_20450,_20452-1,is(_20446,_20444-2,_20590))).
rule([u,u|_20900],_20900,_20908,_20910,_20912,_20914,_20916,i,4,_20922,_20924,_21054):-smallerorequal(_20912,_20916,is(_20914,_20916-2,is(_20910,_20908-2,_21054))).
rule([_21356|_21358],[_21356|_21364],_21378,_21380,_21382,_21384,_21386,_21388,_21390,_21392,[_21356|_21370],_21524):-is(_21404,_21386+1,rule(_21358,_21364,_21378,_21380,_21382,_21384,_21404,_21356,_21390,_21392,_21370,_21524)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
Term aregs[] = mach.RegPull(11);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_rule_11__1(mach); }
public static Function<PrologMachine,Function> exec_pred_rule_11__1(PrologMachine mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__2) ;
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
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(fast_mu.s4,fast_mu.s12,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(fast_mu.s4,fast_mu.s12,F(fast_mu.s4,fast_mu.s23,Const.Nil))))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = F(fast_mu.s13,var4.Deref(),F(fast_mu.s2,var5.Deref(),fast_mu.posint2),F(fast_mu.s13,var2.Deref(),F(fast_mu.s1,var1.Deref(),fast_mu.posint1),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rule_11__2(PrologMachine mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__3) ;
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
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(fast_mu.posint1))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint2))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(fast_mu.s1,var2.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rule_11__3(PrologMachine mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__4) ;
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
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(fast_mu.s4,fast_mu.s12,F(fast_mu.s4,fast_mu.s12,F(fast_mu.s4,fast_mu.s12,var1)))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(fast_mu.s4,fast_mu.s23,var1.Deref())))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint3))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = F(fast_mu.s13,var5.Deref(),F(fast_mu.s2,var6.Deref(),fast_mu.posint1),F(fast_mu.s13,var3.Deref(),F(fast_mu.s2,var2.Deref(),fast_mu.posint2),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rule_11__4(PrologMachine mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__5) ;
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
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(fast_mu.s4,fast_mu.s23,F(fast_mu.s4,fast_mu.s23,var1))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(fast_mu.s12))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint4))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = F(fast_mu.s13,var5.Deref(),F(fast_mu.s2,var6.Deref(),fast_mu.posint2),F(fast_mu.s13,var3.Deref(),F(fast_mu.s2,var2.Deref(),fast_mu.posint2),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_rule_11__5(PrologMachine mach){ mach.RemoveChoice() ;
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
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(fast_mu.s4,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(fast_mu.s4,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg7).Unify(var9))) return UpperPrologMachine.Fail0 ;
if (!( (areg8).Unify(var10))) return UpperPrologMachine.Fail0 ;
if (!( (areg9).Unify(var11))) return UpperPrologMachine.Fail0 ;
if (!( (areg10).Unify(F(fast_mu.s4,var1.Deref(),var12)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var13 ;
local_aregs[1] = F(fast_mu.s1,var8.Deref(),fast_mu.posint1) ;
local_aregs[2] = F(fast_mu.s18,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var13.Deref(),var1.Deref(),var10.Deref(),var11.Deref(),var12.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_lower_bound_3 extends Code {

/*

lower_bound(_21896,_21898,1,_21946):-smallerthan(_21896,_21898,_21946).
lower_bound(_22090,_22090,2,_22116):-call(_22116).
lower_bound(_22232,_22234,_22236,_22378):-smallerthan(_22234,_22232,is(_22252,_22232-_22234,is(_22264,_22252/\1,or((_22264=:=0->_22236 is _22252>>1),_22236 is (_22252+1)>>1+1,_22378)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lower_bound_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lower_bound_3__1(PrologMachine mach){ mach.FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(fast_mu.posint1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_lower_bound_3__2(PrologMachine mach){ mach.FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(fast_mu.posint2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_lower_bound_3__3(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(fast_mu.s13,var4,F(fast_mu.s2,var1.Deref(),var2.Deref()),F(fast_mu.s13,var5,F(fast_mu.s5,var4.Deref(),fast_mu.posint1),F(fast_mu.s17,F(fast_mu.s3,F(fast_mu.s7,var5.Deref(),fast_mu.posint0),F(fast_mu.s13,var3.Deref(),F(fast_mu.s8,var4.Deref(),fast_mu.posint1))),F(fast_mu.s13,var3.Deref(),F(fast_mu.s1,F(fast_mu.s8,F(fast_mu.s1,var4.Deref(),fast_mu.posint1),fast_mu.posint1),fast_mu.posint1)),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
}


