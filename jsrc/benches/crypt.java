import java.util.function.Function; class crypt /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("*") ;
static Const s2 = Const.Intern("+") ;
static Const s3 = Const.Intern(".") ;
static Const s4 = Const.Intern("//") ;
static Const s5 = Const.Intern(":-") ;
static Const s6 = Const.Intern("call") ;
static Const s7 = Const.Intern("cut") ;
static Const s8 = Const.Intern("even") ;
static Const s9 = Const.Intern("is") ;
static Const s10 = Const.Intern("lefteven") ;
static Const s11 = Const.Intern("mod") ;
static Const s12 = Const.Intern("mult") ;
static Const s13 = Const.Intern("odd") ;
static Const s14 = Const.Intern("sum") ;
static Const s15 = Const.Intern("top") ;
static Const s16 = Const.Intern("zero") ;
static Int posint0 = Term.Number(0) ;
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
}


class pred_top_0 extends Code {

/*

top(_5234):-odd(_4840,even(_4844,even(_4848,even(_4852,mult([_4848,_4844,_4840],_4852,[_4874,_4880,_4886,_4892|_4894],lefteven(_4892,odd(_4886,even(_4880,even(_4874,zero(_4894,lefteven(_4926,mult([_4848,_4844,_4840],_4926,[_4948,_4954,_4960|_4962],lefteven(_4960,odd(_4954,even(_4948,zero(_4962,sum([_4874,_4880,_4886,_4892],[0,_4948,_4954,_4960],[_5038,_5044,_5050,_5056|_5058],odd(_5056,odd(_5050,even(_5044,even(_5038,zero(_5058,_5234)))))))))))))))))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var19 = V(mach) ;
Var var18 = V(mach) ;
Var var17 = V(mach) ;
Var var16 = V(mach) ;
Var var15 = V(mach) ;
Var var14 = V(mach) ;
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
local_aregs[0] = var1 ;
local_aregs[1] = F(crypt.s8,var2,F(crypt.s8,var3,F(crypt.s8,var4,F(crypt.s12,F(crypt.s3,var3.Deref(),F(crypt.s3,var2.Deref(),F(crypt.s3,var1.Deref(),Const.Nil))),var4.Deref(),F(crypt.s3,var5,F(crypt.s3,var6,F(crypt.s3,var7,F(crypt.s3,var8,var9)))),F(crypt.s10,var8.Deref(),F(crypt.s13,var7.Deref(),F(crypt.s8,var6.Deref(),F(crypt.s8,var5.Deref(),F(crypt.s16,var9.Deref(),F(crypt.s10,var10,F(crypt.s12,F(crypt.s3,var3.Deref(),F(crypt.s3,var2.Deref(),F(crypt.s3,var1.Deref(),Const.Nil))),var10.Deref(),F(crypt.s3,var11,F(crypt.s3,var12,F(crypt.s3,var13,var14))),F(crypt.s10,var13.Deref(),F(crypt.s13,var12.Deref(),F(crypt.s8,var11.Deref(),F(crypt.s16,var14.Deref(),F(crypt.s14,F(crypt.s3,var5.Deref(),F(crypt.s3,var6.Deref(),F(crypt.s3,var7.Deref(),F(crypt.s3,var8.Deref(),Const.Nil)))),F(crypt.s3,crypt.posint0,F(crypt.s3,var11.Deref(),F(crypt.s3,var12.Deref(),F(crypt.s3,var13.Deref(),Const.Nil)))),F(crypt.s3,var15,F(crypt.s3,var16,F(crypt.s3,var17,F(crypt.s3,var18,var19)))),F(crypt.s13,var18.Deref(),F(crypt.s13,var17.Deref(),F(crypt.s8,var16.Deref(),F(crypt.s8,var15.Deref(),F(crypt.s16,var19.Deref(),continuation))))))))))))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_odd_1::exec_static ;}
}


class pred_sum_3 extends Code {

/*

sum(_6138,_6140,_6142,_6192):-sum(_6138,_6140,0,_6142,_6192).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sum_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sum_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[2] = crypt.posint0 ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sum_4::exec_static ;}
}


class pred_sum_4 extends Code {

/*

sum([_6328|_6330],[_6334|_6336],_6350,[_6340|_6342],_6474):-cut(1,is(_6368,_6328+_6334+_6350,is(_6340,_6368 mod 10,is(_6392,_6368//10,sum(_6330,_6336,_6392,_6342,_6474))))).
sum([],_6782,0,_6782,_6832):-cut(1,_6832).
sum(_6910,[],0,_6910,_6962):-cut(1,_6962).
sum([],[_7040|_7042],_7056,[_7046|_7048],_7174):-cut(1,is(_7068,_7040+_7056,is(_7080,_7068//10,is(_7046,_7068 mod 10,sum([],_7042,_7080,_7048,_7174))))).
sum([_7480|_7482],[],_7496,[_7486|_7488],_7614):-cut(1,is(_7508,_7480+_7496,is(_7520,_7508//10,is(_7486,_7508 mod 10,sum([],_7482,_7520,_7488,_7614))))).
sum([],[],_7920,[_7920],_7954):-call(_7954).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sum_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sum_4__1(PrologMachine mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
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
if (!( (areg0).Unify(F(crypt.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(crypt.s3,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(crypt.s3,var6,var7)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(crypt.s9,var8,F(crypt.s2,F(crypt.s2,var1.Deref(),var3.Deref()),var5.Deref()),F(crypt.s9,var6.Deref(),F(crypt.s11,var8.Deref(),crypt.posint10),F(crypt.s9,var9,F(crypt.s4,var8.Deref(),crypt.posint10),F(crypt.s14,var2.Deref(),var4.Deref(),var9.Deref(),var7.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_sum_4__2(PrologMachine mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(crypt.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_sum_4__3(PrologMachine mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(crypt.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_sum_4__4(PrologMachine mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
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
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(crypt.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(crypt.s3,var4,var5)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(crypt.s9,var6,F(crypt.s2,var1.Deref(),var3.Deref()),F(crypt.s9,var7,F(crypt.s4,var6.Deref(),crypt.posint10),F(crypt.s9,var4.Deref(),F(crypt.s11,var6.Deref(),crypt.posint10),F(crypt.s14,Const.Nil,var2.Deref(),var7.Deref(),var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_sum_4__5(PrologMachine mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
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
if (!( (areg0).Unify(F(crypt.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(crypt.s3,var4,var5)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(crypt.s9,var6,F(crypt.s2,var1.Deref(),var3.Deref()),F(crypt.s9,var7,F(crypt.s4,var6.Deref(),crypt.posint10),F(crypt.s9,var4.Deref(),F(crypt.s11,var6.Deref(),crypt.posint10),F(crypt.s14,Const.Nil,var2.Deref(),var7.Deref(),var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_sum_4__6(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(crypt.s3,var1.Deref(),Const.Nil)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_mult_3 extends Code {

/*

mult(_8060,_8062,_8064,_8114):-mult(_8060,_8062,0,_8064,_8114).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_mult_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_mult_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[2] = crypt.posint0 ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_mult_4::exec_static ;}
}


class pred_mult_4 extends Code {

/*

mult([_8262|_8264],_8276,_8278,[_8268|_8270],_8396):-is(_8296,_8262*_8276+_8278,is(_8268,_8296 mod 10,is(_8320,_8296//10,mult(_8264,_8276,_8320,_8270,_8396)))).
mult([],_8722,_8724,[_8708,_8714],_8802):-is(_8708,_8724 mod 10,is(_8714,_8724//10,_8802)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_mult_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_mult_4__1(PrologMachine mach){ mach.FillAlternative(pred_mult_4::exec_pred_mult_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
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
if (!( (areg0).Unify(F(crypt.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(crypt.s3,var5,var6)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = F(crypt.s2,F(crypt.s1,var1.Deref(),var3.Deref()),var4.Deref()) ;
local_aregs[2] = F(crypt.s9,var5.Deref(),F(crypt.s11,var7.Deref(),crypt.posint10),F(crypt.s9,var8,F(crypt.s4,var7.Deref(),crypt.posint10),F(crypt.s12,var2.Deref(),var3.Deref(),var8.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_mult_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(crypt.s3,var3,F(crypt.s3,var4,Const.Nil))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(crypt.s11,var2.Deref(),crypt.posint10) ;
local_aregs[2] = F(crypt.s9,var4.Deref(),F(crypt.s4,var2.Deref(),crypt.posint10),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_zero_1 extends Code {

/*

zero([],_9008):-call(_9008).
zero([0|_9092],_9128):-zero(_9092,_9128).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_zero_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_zero_1__1(PrologMachine mach){ mach.FillAlternative(pred_zero_1::exec_pred_zero_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_zero_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(crypt.s3,crypt.posint0,var1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_zero_1::exec_static ;}
}


class pred_odd_1 extends Code {

/*

odd(1,_9252):-call(_9252).
odd(3,_9362):-call(_9362).
odd(5,_9472):-call(_9472).
odd(7,_9582):-call(_9582).
odd(9,_9692):-call(_9692).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_odd_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_odd_1__1(PrologMachine mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_odd_1__2(PrologMachine mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_odd_1__3(PrologMachine mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_odd_1__4(PrologMachine mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_odd_1__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_even_1 extends Code {

/*

even(0,_9802):-call(_9802).
even(2,_9918):-call(_9918).
even(4,_10034):-call(_10034).
even(6,_10150):-call(_10150).
even(8,_10266):-call(_10266).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_even_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_even_1__1(PrologMachine mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint0))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_even_1__2(PrologMachine mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_even_1__3(PrologMachine mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_even_1__4(PrologMachine mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_even_1__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_lefteven_1 extends Code {

/*

lefteven(2,_10382):-call(_10382).
lefteven(4,_10504):-call(_10504).
lefteven(6,_10626):-call(_10626).
lefteven(8,_10748):-call(_10748).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_lefteven_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_lefteven_1__1(PrologMachine mach){ mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_lefteven_1__2(PrologMachine mach){ mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_lefteven_1__3(PrologMachine mach){ mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_lefteven_1__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


