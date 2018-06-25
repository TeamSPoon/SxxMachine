import java.util.function.Function; class sendmore /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("+") ;
static Const s2 = Const.Intern(",") ;
static Const s3 = Const.Intern("-") ;
static Const s4 = Const.Intern("->") ;
static Const s5 = Const.Intern(".") ;
static Const s6 = Const.Intern(":-") ;
static Const s7 = Const.Intern("<") ;
static Const s8 = Const.Intern("=") ;
static Const s9 = Const.Intern("=\\=") ;
static Const s10 = Const.Intern("call") ;
static Const s11 = Const.Intern("digit") ;
static Const s12 = Const.Intern("fail") ;
static Const s13 = Const.Intern("is") ;
static Const s14 = Const.Intern("leftdigit") ;
static Const s15 = Const.Intern("or") ;
static Const s16 = Const.Intern("sumdigit") ;
static Const s17 = Const.Intern("top") ;
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

top(_5262):-digit(_4790,digit(_4794,=\=(_4790,_4794,sumdigit(0,_4790,_4794,_4810,_4812,digit(_4816,=\=(_4816,_4810,=\=(_4816,_4794,=\=(_4816,_4790,digit(_4838,=\=(_4838,_4816,=\=(_4838,_4810,=\=(_4838,_4794,=\=(_4838,_4790,sumdigit(_4812,_4816,_4838,_4794,_4874,digit(_4878,=\=(_4878,_4838,=\=(_4878,_4816,=\=(_4878,_4810,=\=(_4878,_4794,=\=(_4878,_4790,sumdigit(_4874,_4794,_4878,_4816,_4920,leftdigit(_4924,=\=(_4924,_4878,=\=(_4924,_4838,=\=(_4924,_4816,=\=(_4924,_4810,=\=(_4924,_4794,=\=(_4924,_4790,leftdigit(_4964,=\=(_4964,_4924,=\=(_4964,_4878,=\=(_4964,_4838,=\=(_4964,_4816,=\=(_4964,_4810,=\=(_4964,_4794,=\=(_4964,_4790,sumdigit(_4920,_4924,_4964,_4878,_4964,fail(_5262)))))))))))))))))))))))))))))))))))))).
top(_7250):-call(_7250).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.FillAlternative(pred_top_0::exec_pred_top_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
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
local_aregs[1] = F(sendmore.s11,var2,F(sendmore.s9,var1.Deref(),var2.Deref(),F(sendmore.s16,sendmore.posint0,var1.Deref(),var2.Deref(),var3,var4,F(sendmore.s11,var5,F(sendmore.s9,var5.Deref(),var3.Deref(),F(sendmore.s9,var5.Deref(),var2.Deref(),F(sendmore.s9,var5.Deref(),var1.Deref(),F(sendmore.s11,var6,F(sendmore.s9,var6.Deref(),var5.Deref(),F(sendmore.s9,var6.Deref(),var3.Deref(),F(sendmore.s9,var6.Deref(),var2.Deref(),F(sendmore.s9,var6.Deref(),var1.Deref(),F(sendmore.s16,var4.Deref(),var5.Deref(),var6.Deref(),var2.Deref(),var7,F(sendmore.s11,var8,F(sendmore.s9,var8.Deref(),var6.Deref(),F(sendmore.s9,var8.Deref(),var5.Deref(),F(sendmore.s9,var8.Deref(),var3.Deref(),F(sendmore.s9,var8.Deref(),var2.Deref(),F(sendmore.s9,var8.Deref(),var1.Deref(),F(sendmore.s16,var7.Deref(),var2.Deref(),var8.Deref(),var5.Deref(),var9,F(sendmore.s14,var10,F(sendmore.s9,var10.Deref(),var8.Deref(),F(sendmore.s9,var10.Deref(),var6.Deref(),F(sendmore.s9,var10.Deref(),var5.Deref(),F(sendmore.s9,var10.Deref(),var3.Deref(),F(sendmore.s9,var10.Deref(),var2.Deref(),F(sendmore.s9,var10.Deref(),var1.Deref(),F(sendmore.s14,var11,F(sendmore.s9,var11.Deref(),var10.Deref(),F(sendmore.s9,var11.Deref(),var8.Deref(),F(sendmore.s9,var11.Deref(),var6.Deref(),F(sendmore.s9,var11.Deref(),var5.Deref(),F(sendmore.s9,var11.Deref(),var3.Deref(),F(sendmore.s9,var11.Deref(),var2.Deref(),F(sendmore.s9,var11.Deref(),var1.Deref(),F(sendmore.s16,var9.Deref(),var10.Deref(),var11.Deref(),var8.Deref(),var11.Deref(),F(sendmore.s12,continuation))))))))))))))))))))))))))))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_digit_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_top_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_sumdigit_5 extends Code {

/*

sumdigit(_7288,_7290,_7292,_7294,_7296,_7432):-is(_7312,_7288+_7290+_7292,or((_7312<10->_7294=_7312,_7296=0),(_7294 is _7312-10,_7296=1),_7432)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sumdigit_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sumdigit_5__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
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
local_aregs[0] = var6 ;
local_aregs[1] = F(sendmore.s1,F(sendmore.s1,var1.Deref(),var2.Deref()),var3.Deref()) ;
local_aregs[2] = F(sendmore.s15,F(sendmore.s4,F(sendmore.s7,var6.Deref(),sendmore.posint10),F(sendmore.s2,F(sendmore.s8,var4.Deref(),var6.Deref()),F(sendmore.s8,var5.Deref(),sendmore.posint0))),F(sendmore.s2,F(sendmore.s13,var4.Deref(),F(sendmore.s3,var6.Deref(),sendmore.posint10)),F(sendmore.s8,var5.Deref(),sendmore.posint1)),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_digit_1 extends Code {

/*

digit(0,_7634):-call(_7634).
digit(1,_7720):-call(_7720).
digit(2,_7806):-call(_7806).
digit(3,_7892):-call(_7892).
digit(4,_7978):-call(_7978).
digit(5,_8064):-call(_8064).
digit(6,_8150):-call(_8150).
digit(7,_8236):-call(_8236).
digit(8,_8322):-call(_8322).
digit(9,_8408):-call(_8408).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_digit_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_digit_1__1(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint0))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__2(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__3(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__4(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__5(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__6(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__7(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__8(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__9(PrologMachine mach){ mach.FillAlternative(pred_digit_1::exec_pred_digit_1__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_digit_1__10(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_leftdigit_1 extends Code {

/*

leftdigit(1,_8494):-call(_8494).
leftdigit(2,_8586):-call(_8586).
leftdigit(3,_8678):-call(_8678).
leftdigit(4,_8770):-call(_8770).
leftdigit(5,_8862):-call(_8862).
leftdigit(6,_8954):-call(_8954).
leftdigit(7,_9046):-call(_9046).
leftdigit(8,_9138):-call(_9138).
leftdigit(9,_9230):-call(_9230).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_leftdigit_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__1(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__2(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__3(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__4(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__5(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__6(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__7(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__8(PrologMachine mach){ mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_leftdigit_1__9(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sendmore.posint9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


