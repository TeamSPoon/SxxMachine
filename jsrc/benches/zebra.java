import java.util.function.Function; class zebra /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern(".") ;
static Const s2 = Const.Intern(":-") ;
static Const s3 = Const.Intern("blue") ;
static Const s4 = Const.Intern("call") ;
static Const s5 = Const.Intern("chesterfields") ;
static Const s6 = Const.Intern("coffee") ;
static Const s7 = Const.Intern("cut") ;
static Const s8 = Const.Intern("dog") ;
static Const s9 = Const.Intern("english") ;
static Const s10 = Const.Intern("fox") ;
static Const s11 = Const.Intern("green") ;
static Const s12 = Const.Intern("horse") ;
static Const s13 = Const.Intern("house") ;
static Const s14 = Const.Intern("houses") ;
static Const s15 = Const.Intern("ivory") ;
static Const s16 = Const.Intern("japanese") ;
static Const s17 = Const.Intern("kools") ;
static Const s18 = Const.Intern("lucky_strikes") ;
static Const s19 = Const.Intern("member") ;
static Const s20 = Const.Intern("milk") ;
static Const s21 = Const.Intern("next_to") ;
static Const s22 = Const.Intern("nl") ;
static Const s23 = Const.Intern("norwegian") ;
static Const s24 = Const.Intern("orange_juice") ;
static Const s25 = Const.Intern("parliaments") ;
static Const s26 = Const.Intern("print_houses") ;
static Const s27 = Const.Intern("red") ;
static Const s28 = Const.Intern("right_of") ;
static Const s29 = Const.Intern("snails") ;
static Const s30 = Const.Intern("spanish") ;
static Const s31 = Const.Intern("tea") ;
static Const s32 = Const.Intern("top") ;
static Const s33 = Const.Intern("ukrainian") ;
static Const s34 = Const.Intern("unify") ;
static Const s35 = Const.Intern("water") ;
static Const s36 = Const.Intern("winstons") ;
static Const s37 = Const.Intern("write") ;
static Const s38 = Const.Intern("yellow") ;
static Const s39 = Const.Intern("zebra") ;
static Int posint1 = Term.Number(1) ;
}


class pred_top_0 extends Code {

/*

top(_5176):-houses(_4678,member(house(red,english,_4686,_4688,_4690),_4678,member(house(_4700,spanish,dog,_4706,_4708),_4678,member(house(green,_4720,_4722,coffee,_4726),_4678,member(house(_4736,ukrainian,_4740,tea,_4744),_4678,right_of(house(green,_4756,_4758,_4760,_4762),house(ivory,_4768,_4770,_4772,_4774),_4678,member(house(_4786,_4788,snails,_4792,winstons),_4678,member(house(yellow,_4806,_4808,_4810,kools),_4678,unify([_4822,_4828,house(_4834,_4836,_4838,milk,_4842),_4852,_4858],_4678,unify([house(_4870,norwegian,_4874,_4876,_4878)|_4884],_4678,next_to(house(_4894,_4896,_4898,_4900,chesterfields),house(_4906,_4908,fox,_4912,_4914),_4678,next_to(house(_4926,_4928,_4930,_4932,kools),house(_4938,_4940,horse,_4944,_4946),_4678,member(house(_4958,_4960,_4962,orange_juice,lucky_strikes),_4678,member(house(_4976,japanese,_4980,_4982,parliaments),_4678,next_to(house(_4994,norwegian,_4998,_5000,_5002),house(blue,_5008,_5010,_5012,_5014),_4678,member(house(_5026,_5028,zebra,_5032,_5034),_4678,member(house(_5044,_5046,_5048,water,_5052),_4678,_5176))))))))))))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var78 = V(mach) ;
Var var77 = V(mach) ;
Var var76 = V(mach) ;
Var var75 = V(mach) ;
Var var74 = V(mach) ;
Var var73 = V(mach) ;
Var var72 = V(mach) ;
Var var71 = V(mach) ;
Var var70 = V(mach) ;
Var var69 = V(mach) ;
Var var68 = V(mach) ;
Var var67 = V(mach) ;
Var var66 = V(mach) ;
Var var65 = V(mach) ;
Var var64 = V(mach) ;
Var var63 = V(mach) ;
Var var62 = V(mach) ;
Var var61 = V(mach) ;
Var var60 = V(mach) ;
Var var59 = V(mach) ;
Var var58 = V(mach) ;
Var var57 = V(mach) ;
Var var56 = V(mach) ;
Var var55 = V(mach) ;
Var var54 = V(mach) ;
Var var53 = V(mach) ;
Var var52 = V(mach) ;
Var var51 = V(mach) ;
Var var50 = V(mach) ;
Var var49 = V(mach) ;
Var var48 = V(mach) ;
Var var47 = V(mach) ;
Var var46 = V(mach) ;
Var var45 = V(mach) ;
Var var44 = V(mach) ;
Var var43 = V(mach) ;
Var var42 = V(mach) ;
Var var41 = V(mach) ;
Var var40 = V(mach) ;
Var var39 = V(mach) ;
Var var38 = V(mach) ;
Var var37 = V(mach) ;
Var var36 = V(mach) ;
Var var35 = V(mach) ;
Var var34 = V(mach) ;
Var var33 = V(mach) ;
Var var32 = V(mach) ;
Var var31 = V(mach) ;
Var var30 = V(mach) ;
Var var29 = V(mach) ;
Var var28 = V(mach) ;
Var var27 = V(mach) ;
Var var26 = V(mach) ;
Var var25 = V(mach) ;
Var var24 = V(mach) ;
Var var23 = V(mach) ;
Var var22 = V(mach) ;
Var var21 = V(mach) ;
Var var20 = V(mach) ;
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
local_aregs[1] = F(zebra.s19,F(zebra.s13,zebra.s27,zebra.s9,var2,var3,var4),var1.Deref(),F(zebra.s19,F(zebra.s13,var5,zebra.s30,zebra.s8,var6,var7),var1.Deref(),F(zebra.s19,F(zebra.s13,zebra.s11,var8,var9,zebra.s6,var10),var1.Deref(),F(zebra.s19,F(zebra.s13,var11,zebra.s33,var12,zebra.s31,var13),var1.Deref(),F(zebra.s28,F(zebra.s13,zebra.s11,var14,var15,var16,var17),F(zebra.s13,zebra.s15,var18,var19,var20,var21),var1.Deref(),F(zebra.s19,F(zebra.s13,var22,var23,zebra.s29,var24,zebra.s36),var1.Deref(),F(zebra.s19,F(zebra.s13,zebra.s38,var25,var26,var27,zebra.s17),var1.Deref(),F(zebra.s34,F(zebra.s1,var28,F(zebra.s1,var29,F(zebra.s1,F(zebra.s13,var30,var31,var32,zebra.s20,var33),F(zebra.s1,var34,F(zebra.s1,var35,Const.Nil))))),var1.Deref(),F(zebra.s34,F(zebra.s1,F(zebra.s13,var36,zebra.s23,var37,var38,var39),var40),var1.Deref(),F(zebra.s21,F(zebra.s13,var41,var42,var43,var44,zebra.s5),F(zebra.s13,var45,var46,zebra.s10,var47,var48),var1.Deref(),F(zebra.s21,F(zebra.s13,var49,var50,var51,var52,zebra.s17),F(zebra.s13,var53,var54,zebra.s12,var55,var56),var1.Deref(),F(zebra.s19,F(zebra.s13,var57,var58,var59,zebra.s24,zebra.s18),var1.Deref(),F(zebra.s19,F(zebra.s13,var60,zebra.s16,var61,var62,zebra.s25),var1.Deref(),F(zebra.s21,F(zebra.s13,var63,zebra.s23,var64,var65,var66),F(zebra.s13,zebra.s3,var67,var68,var69,var70),var1.Deref(),F(zebra.s19,F(zebra.s13,var71,var72,zebra.s39,var73,var74),var1.Deref(),F(zebra.s19,F(zebra.s13,var75,var76,var77,zebra.s35,var78),var1.Deref(),continuation)))))))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_houses_1::exec_static ;}
}


class pred_houses_1 extends Code {

/*

houses([house(_6108,_6110,_6112,_6114,_6116),house(_6126,_6128,_6130,_6132,_6134),house(_6144,_6146,_6148,_6150,_6152),house(_6162,_6164,_6166,_6168,_6170),house(_6180,_6182,_6184,_6186,_6188)],_6220):-call(_6220).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_houses_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_houses_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var25 = V(mach) ;
Var var24 = V(mach) ;
Var var23 = V(mach) ;
Var var22 = V(mach) ;
Var var21 = V(mach) ;
Var var20 = V(mach) ;
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
if (!( (areg0).Unify(F(zebra.s1,F(zebra.s13,var1,var2,var3,var4,var5),F(zebra.s1,F(zebra.s13,var6,var7,var8,var9,var10),F(zebra.s1,F(zebra.s13,var11,var12,var13,var14,var15),F(zebra.s1,F(zebra.s13,var16,var17,var18,var19,var20),F(zebra.s1,F(zebra.s13,var21,var22,var23,var24,var25),Const.Nil)))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_right_of_3 extends Code {

/*

right_of(_6284,_6278,[_6278,_6284|_6286],_6316):-call(_6316).
right_of(_6414,_6416,[_6408|_6410],_6466):-right_of(_6414,_6416,_6410,_6466).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_right_of_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_right_of_3__1(PrologMachine mach){ mach.FillAlternative(pred_right_of_3::exec_pred_right_of_3__2) ;
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
if (!( (areg2).Unify(F(zebra.s1,var2.Deref(),F(zebra.s1,var1.Deref(),var3))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_right_of_3__2(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(F(zebra.s1,var3,var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_right_of_3::exec_static ;}
}


class pred_next_to_3 extends Code {

/*

next_to(_6594,_6600,[_6594,_6600|_6602],_6632):-call(_6632).
next_to(_6736,_6730,[_6730,_6736|_6738],_6768):-call(_6768).
next_to(_6872,_6874,[_6866|_6868],_6924):-next_to(_6872,_6874,_6868,_6924).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_next_to_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_next_to_3__1(PrologMachine mach){ mach.FillAlternative(pred_next_to_3::exec_pred_next_to_3__2) ;
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
if (!( (areg2).Unify(F(zebra.s1,var1.Deref(),F(zebra.s1,var2.Deref(),var3))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_next_to_3__2(PrologMachine mach){ mach.FillAlternative(pred_next_to_3::exec_pred_next_to_3__3) ;
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
if (!( (areg2).Unify(F(zebra.s1,var2.Deref(),F(zebra.s1,var1.Deref(),var3))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_next_to_3__3(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(F(zebra.s1,var3,var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_next_to_3::exec_static ;}
}


class pred_member_2 extends Code {

/*

member(_7058,[_7058|_7060],_7088):-call(_7088).
member(_7184,[_7178|_7180],_7226):-member(_7184,_7180,_7226).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_member_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_member_2__1(PrologMachine mach){ mach.FillAlternative(pred_member_2::exec_pred_member_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(zebra.s1,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_member_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(zebra.s1,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_member_2::exec_static ;}
}


class pred_print_houses_1 extends Code {

/*

print_houses([_7344|_7346],_7404):-cut(1,write(_7344,nl(print_houses(_7346,_7404)))).
print_houses([],_7592):-call(_7592).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_print_houses_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_print_houses_1__1(PrologMachine mach){ mach.FillAlternative(pred_print_houses_1::exec_pred_print_houses_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(zebra.s1,var1,var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(zebra.s37,var1.Deref(),F(zebra.s22,F(zebra.s26,var2.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_print_houses_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


