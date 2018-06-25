import java.util.function.Function; class poly_10 /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("*") ;
static Const s2 = Const.Intern("+") ;
static Const s3 = Const.Intern("-") ;
static Const s4 = Const.Intern(".") ;
static Const s5 = Const.Intern(":-") ;
static Const s6 = Const.Intern("<<") ;
static Const s7 = Const.Intern(">>") ;
static Const s8 = Const.Intern("add_to_order_zero_term") ;
static Const s9 = Const.Intern("call") ;
static Const s10 = Const.Intern("cut") ;
static Const s11 = Const.Intern("is") ;
static Const s12 = Const.Intern("less_than") ;
static Const s13 = Const.Intern("mul_through") ;
static Const s14 = Const.Intern("on_load_poly_10") ;
static Const s15 = Const.Intern("op") ;
static Const s16 = Const.Intern("poly") ;
static Const s17 = Const.Intern("poly_10") ;
static Const s18 = Const.Intern("poly_add") ;
static Const s19 = Const.Intern("poly_exp") ;
static Const s20 = Const.Intern("poly_mul") ;
static Const s21 = Const.Intern("single_term_mul") ;
static Const s22 = Const.Intern("smallerthan") ;
static Const s23 = Const.Intern("term") ;
static Const s24 = Const.Intern("term_add") ;
static Const s25 = Const.Intern("term_mul") ;
static Const s26 = Const.Intern("test_poly") ;
static Const s27 = Const.Intern("top") ;
static Const s28 = Const.Intern("write") ;
static Const s29 = Const.Intern("x") ;
static Const s30 = Const.Intern("xfx") ;
static Const s31 = Const.Intern("y") ;
static Const s32 = Const.Intern("z") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint10 = Term.Number(10) ;
static Int posint700 = Term.Number(700) ;
}


class pred_on_load_poly_10_0 extends Code {

/*

on_load_poly_10(_17278):-write(op(700,xfx,less_than),_17278).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_on_load_poly_10_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_on_load_poly_10_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(poly_10.s15,poly_10.posint700,poly_10.s30,poly_10.s12) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
}


class pred_top_0 extends Code {

/*

top(_17360):-poly_10(_17360).


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
return (Function<PrologMachine,Function>)pred_poly_10_0::exec_static ;}
}


class pred_poly_10_0 extends Code {

/*

poly_10(_17452):-test_poly(_17416,poly_exp(10,_17416,_17424,_17452)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_poly_10_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_poly_10_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = F(poly_10.s19,poly_10.posint10,var1.Deref(),var2,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_test_poly_1::exec_static ;}
}


class pred_test_poly_1 extends Code {

/*

test_poly(_17592,_17708):-poly_add(poly(x,[term(0,1),term(1,1)]),poly(y,[term(1,1)]),_17648,poly_add(poly(z,[term(1,1)]),_17648,_17592,_17708)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_test_poly_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_test_poly_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(poly_10.s16,poly_10.s29,F(poly_10.s4,F(poly_10.s23,poly_10.posint0,poly_10.posint1),F(poly_10.s4,F(poly_10.s23,poly_10.posint1,poly_10.posint1),Const.Nil))) ;
local_aregs[1] = F(poly_10.s16,poly_10.s31,F(poly_10.s4,F(poly_10.s23,poly_10.posint1,poly_10.posint1),Const.Nil)) ;
local_aregs[2] = var2 ;
local_aregs[3] = F(poly_10.s18,F(poly_10.s16,poly_10.s32,F(poly_10.s4,F(poly_10.s23,poly_10.posint1,poly_10.posint1),Const.Nil)),var2.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_poly_add_3::exec_static ;}
}


class pred_less_than_2 extends Code {

/*

less_than(x,y,_17914):-call(_17914).
less_than(y,z,_18028):-call(_18028).
less_than(x,z,_18142):-call(_18142).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_less_than_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_less_than_2__1(PrologMachine mach){ mach.FillAlternative(pred_less_than_2::exec_pred_less_than_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(poly_10.s29))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(poly_10.s31))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_less_than_2__2(PrologMachine mach){ mach.FillAlternative(pred_less_than_2::exec_pred_less_than_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(poly_10.s31))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(poly_10.s32))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_less_than_2__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(poly_10.s29))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(poly_10.s32))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_poly_add_3 extends Code {

/*

poly_add(poly(_18232,_18234),poly(_18232,_18240),poly(_18232,_18246),_18308):-cut(1,term_add(_18234,_18240,_18246,_18308)).
poly_add(poly(_18460,_18462),poly(_18466,_18468),poly(_18460,_18474),_18554):-less_than(_18460,_18466,cut(1,add_to_order_zero_term(_18462,poly(_18466,_18468),_18474,_18554))).
poly_add(_18768,poly(_18756,_18758),poly(_18756,_18764),_18826):-cut(1,add_to_order_zero_term(_18758,_18768,_18764,_18826)).
poly_add(poly(_18978,_18980),_18992,poly(_18978,_18986),_19048):-cut(1,add_to_order_zero_term(_18980,_18992,_18986,_19048)).
poly_add(_19200,_19202,_19204,_19256):-is(_19204,_19200+_19202,_19256).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_poly_add_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_poly_add_3__1(PrologMachine mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(poly_10.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(poly_10.s16,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s24,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_poly_add_3__2(PrologMachine mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__3) ;
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
if (!( (areg0).Unify(F(poly_10.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(poly_10.s16,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(poly_10.s0, new HeapChoice(mach.CUTB),F(poly_10.s8,var2.Deref(),F(poly_10.s16,var3.Deref(),var4.Deref()),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_less_than_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_poly_add_3__3(PrologMachine mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__4) ;
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
if (!( (areg1).Unify(F(poly_10.s16,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var2.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s8,var3.Deref(),var1.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_poly_add_3__4(PrologMachine mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(poly_10.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s8,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_poly_add_3__5(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(poly_10.s2,var1.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_term_add_3 extends Code {

/*

term_add([],_19390,_19390,_19432):-cut(1,_19432).
term_add(_19526,[],_19526,_19570):-cut(1,_19570).
term_add([term(_19664,_19666)|_19672],[term(_19664,_19678)|_19684],[term(_19664,_19690)|_19696],_19772):-cut(1,poly_add(_19666,_19678,_19690,term_add(_19672,_19684,_19696,_19772))).
term_add([term(_19994,_19996)|_20002],[term(_20006,_20008)|_20014],[term(_19994,_19996)|_20026],_20112):-smallerthan(_19994,_20006,cut(1,term_add(_20002,[term(_20006,_20008)|_20014],_20026,_20112))).
term_add(_20350,[term(_20326,_20328)|_20334],[term(_20326,_20328)|_20346],_20402):-term_add(_20350,_20334,_20346,_20402).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_term_add_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_term_add_3__1(PrologMachine mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_term_add_3__2(PrologMachine mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_term_add_3__3(PrologMachine mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__4) ;
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
if (!( (areg0).Unify(F(poly_10.s4,F(poly_10.s23,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(poly_10.s4,F(poly_10.s23,var1.Deref(),var4),var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s4,F(poly_10.s23,var1.Deref(),var6),var7)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s18,var2.Deref(),var4.Deref(),var6.Deref(),F(poly_10.s24,var3.Deref(),var5.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_term_add_3__4(PrologMachine mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__5) ;
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
if (!( (areg0).Unify(F(poly_10.s4,F(poly_10.s23,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(poly_10.s4,F(poly_10.s23,var4,var5),var6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s4,F(poly_10.s23,var1.Deref(),var2.Deref()),var7)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = F(poly_10.s0, new HeapChoice(mach.CUTB),F(poly_10.s24,var3.Deref(),F(poly_10.s4,F(poly_10.s23,var4.Deref(),var5.Deref()),var6.Deref()),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_term_add_3__5(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg1).Unify(F(poly_10.s4,F(poly_10.s23,var2,var3),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s4,F(poly_10.s23,var2.Deref(),var3.Deref()),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_term_add_3::exec_static ;}
}


class pred_add_to_order_zero_term_3 extends Code {

/*

add_to_order_zero_term([term(0,_20556)|_20562],_20580,[term(0,_20568)|_20562],_20636):-cut(1,poly_add(_20556,_20580,_20568,_20636)).
add_to_order_zero_term(_20808,_20802,[term(0,_20802)|_20808],_20838):-call(_20838).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_add_to_order_zero_term_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_add_to_order_zero_term_3__1(PrologMachine mach){ mach.FillAlternative(pred_add_to_order_zero_term_3::exec_pred_add_to_order_zero_term_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(poly_10.s4,F(poly_10.s23,poly_10.posint0,var1),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s4,F(poly_10.s23,poly_10.posint0,var4),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s18,var1.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_add_to_order_zero_term_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s4,F(poly_10.s23,poly_10.posint0,var2.Deref()),var1.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_poly_exp_3 extends Code {

/*

poly_exp(0,_20962,1,_21004):-cut(1,_21004).
poly_exp(_21110,_21112,_21114,_21218):-is(_21124,_21110>>1,is(_21110,_21124<<1,cut(1,poly_exp(_21124,_21112,_21146,poly_mul(_21146,_21146,_21114,_21218))))).
poly_exp(_21552,_21554,_21556,_21636):-is(_21566,_21552-1,poly_exp(_21566,_21554,_21576,poly_mul(_21554,_21576,_21556,_21636))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_poly_exp_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_poly_exp_3__1(PrologMachine mach){ mach.FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(poly_10.posint0))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(poly_10.posint1))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_poly_exp_3__2(PrologMachine mach){ mach.FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__3) ;
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
local_aregs[0] = var4 ;
local_aregs[1] = F(poly_10.s7,var1.Deref(),poly_10.posint1) ;
local_aregs[2] = F(poly_10.s11,var1.Deref(),F(poly_10.s6,var4.Deref(),poly_10.posint1),F(poly_10.s0, new HeapChoice(mach.CUTB),F(poly_10.s19,var4.Deref(),var2.Deref(),var5,F(poly_10.s20,var5.Deref(),var5.Deref(),var3.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_poly_exp_3__3(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var4 ;
local_aregs[1] = F(poly_10.s3,var1.Deref(),poly_10.posint1) ;
local_aregs[2] = F(poly_10.s19,var4.Deref(),var2.Deref(),var5,F(poly_10.s20,var2.Deref(),var5.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_poly_mul_3 extends Code {

/*

poly_mul(poly(_21914,_21916),poly(_21914,_21922),poly(_21914,_21928),_21990):-cut(1,term_mul(_21916,_21922,_21928,_21990)).
poly_mul(poly(_22166,_22168),poly(_22172,_22174),poly(_22166,_22180),_22260):-less_than(_22166,_22172,cut(1,mul_through(_22168,poly(_22172,_22174),_22180,_22260))).
poly_mul(_22498,poly(_22486,_22488),poly(_22486,_22494),_22556):-cut(1,mul_through(_22488,_22498,_22494,_22556)).
poly_mul(poly(_22732,_22734),_22746,poly(_22732,_22740),_22802):-cut(1,mul_through(_22734,_22746,_22740,_22802)).
poly_mul(_22978,_22980,_22982,_23034):-is(_22982,_22978*_22980,_23034).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_poly_mul_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_poly_mul_3__1(PrologMachine mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(poly_10.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(poly_10.s16,var1.Deref(),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s25,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_poly_mul_3__2(PrologMachine mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__3) ;
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
if (!( (areg0).Unify(F(poly_10.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(poly_10.s16,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(poly_10.s0, new HeapChoice(mach.CUTB),F(poly_10.s13,var2.Deref(),F(poly_10.s16,var3.Deref(),var4.Deref()),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_less_than_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_poly_mul_3__3(PrologMachine mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__4) ;
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
if (!( (areg1).Unify(F(poly_10.s16,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var2.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s13,var3.Deref(),var1.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_poly_mul_3__4(PrologMachine mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(poly_10.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s16,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(poly_10.s13,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_poly_mul_3__5(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var3.Deref() ;
local_aregs[1] = F(poly_10.s1,var1.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_term_mul_3 extends Code {

/*

term_mul([],_23192,[],_23234):-cut(1,_23234).
term_mul(_23352,[],[],_23396):-cut(1,_23396).
term_mul([_23514|_23516],_23522,_23524,_23600):-single_term_mul(_23522,_23514,_23532,term_mul(_23516,_23522,_23540,term_add(_23532,_23540,_23524,_23600))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_term_mul_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_term_mul_3__1(PrologMachine mach){ mach.FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_term_mul_3__2(PrologMachine mach){ mach.FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_term_mul_3__3(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(F(poly_10.s4,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = F(poly_10.s25,var2.Deref(),var3.Deref(),var6,F(poly_10.s24,var5.Deref(),var6.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_single_term_mul_3::exec_static ;}
}


class pred_single_term_mul_3 extends Code {

/*

single_term_mul([],_23906,[],_23948):-cut(1,_23948).
single_term_mul([term(_24072,_24074)|_24080],term(_24084,_24086),[term(_24090,_24092)|_24098],_24192):-is(_24090,_24072+_24084,poly_mul(_24074,_24086,_24092,single_term_mul(_24080,term(_24084,_24086),_24098,_24192))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_single_term_mul_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_single_term_mul_3__1(PrologMachine mach){ mach.FillAlternative(pred_single_term_mul_3::exec_pred_single_term_mul_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_single_term_mul_3__2(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(F(poly_10.s4,F(poly_10.s23,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(poly_10.s23,var4,var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s4,F(poly_10.s23,var6,var7),var8)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var6.Deref() ;
local_aregs[1] = F(poly_10.s2,var1.Deref(),var4.Deref()) ;
local_aregs[2] = F(poly_10.s20,var2.Deref(),var5.Deref(),var7.Deref(),F(poly_10.s21,var3.Deref(),F(poly_10.s23,var4.Deref(),var5.Deref()),var8.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_mul_through_3 extends Code {

/*

mul_through([],_24490,[],_24532):-cut(1,_24532).
mul_through([term(_24662,_24664)|_24670],_24688,[term(_24662,_24676)|_24682],_24752):-poly_mul(_24664,_24688,_24676,mul_through(_24670,_24688,_24682,_24752)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_mul_through_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_mul_through_3__1(PrologMachine mach){ mach.FillAlternative(pred_mul_through_3::exec_pred_mul_through_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_mul_through_3__2(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(F(poly_10.s4,F(poly_10.s23,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(poly_10.s4,F(poly_10.s23,var1.Deref(),var5),var6)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = F(poly_10.s13,var3.Deref(),var4.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_poly_mul_3::exec_static ;}
}


