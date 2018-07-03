package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class zebra /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern(".") ;
final static Const s2 = Data.Intern(":-") ;
final static Const s_blue = Data.Intern("blue") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_chesterfields = Data.Intern("chesterfields") ;
final static Const s_coffee = Data.Intern("coffee") ;
final static Const s_dog = Data.Intern("dog") ;
final static Const s_english = Data.Intern("english") ;
final static Const s_fox = Data.Intern("fox") ;
final static Const s_green = Data.Intern("green") ;
final static Const s_horse = Data.Intern("horse") ;
final static Const s_house = Data.Intern("house") ;
final static Const s_houses = Data.Intern("houses") ;
final static Const s_ivory = Data.Intern("ivory") ;
final static Const s_japanese = Data.Intern("japanese") ;
final static Const s_kools = Data.Intern("kools") ;
final static Const s_lucky_strikes = Data.Intern("lucky_strikes") ;
final static Const s_member = Data.Intern("member") ;
final static Const s_milk = Data.Intern("milk") ;
final static Const s_next_to = Data.Intern("next_to") ;
final static Const s_nl = Data.Intern("nl") ;
final static Const s_norwegian = Data.Intern("norwegian") ;
final static Const s_orange_juice = Data.Intern("orange_juice") ;
final static Const s_parliaments = Data.Intern("parliaments") ;
final static Const s_print_houses = Data.Intern("print_houses") ;
final static Const s_red = Data.Intern("red") ;
final static Const s_right_of = Data.Intern("right_of") ;
final static Const s_snails = Data.Intern("snails") ;
final static Const s_spanish = Data.Intern("spanish") ;
final static Const s_tea = Data.Intern("tea") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_ukrainian = Data.Intern("ukrainian") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_water = Data.Intern("water") ;
final static Const s_winstons = Data.Intern("winstons") ;
final static Const s_write = Data.Intern("write") ;
final static Const s_yellow = Data.Intern("yellow") ;
final static Const s_zebra = Data.Intern("zebra") ;
final static Int posint1 = Data.Number(1L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_houses_1 = PredTable.Register("houses",1, new pred_houses_1());
final static Operation reg_right_of_3 = PredTable.Register("right_of",3, new pred_right_of_3());
final static Operation reg_next_to_3 = PredTable.Register("next_to",3, new pred_next_to_3());
final static Operation reg_member_2 = PredTable.Register("member",2, new pred_member_2());
final static Operation reg_print_houses_1 = PredTable.Register("print_houses",1, new pred_print_houses_1());
public static class pred_top_0 extends Code {

/*

top(_5840):-houses(_5342,member(house(red,english,_5350,_5352,_5354),_5342,member(house(_5364,spanish,dog,_5370,_5372),_5342,member(house(green,_5384,_5386,coffee,_5390),_5342,member(house(_5400,ukrainian,_5404,tea,_5408),_5342,right_of(house(green,_5420,_5422,_5424,_5426),house(ivory,_5432,_5434,_5436,_5438),_5342,member(house(_5450,_5452,snails,_5456,winstons),_5342,member(house(yellow,_5470,_5472,_5474,kools),_5342,unify([_5486,_5492,house(_5498,_5500,_5502,milk,_5506),_5516,_5522],_5342,unify([house(_5534,norwegian,_5538,_5540,_5542)|_5548],_5342,next_to(house(_5558,_5560,_5562,_5564,chesterfields),house(_5570,_5572,fox,_5576,_5578),_5342,next_to(house(_5590,_5592,_5594,_5596,kools),house(_5602,_5604,horse,_5608,_5610),_5342,member(house(_5622,_5624,_5626,orange_juice,lucky_strikes),_5342,member(house(_5640,japanese,_5644,_5646,parliaments),_5342,next_to(house(_5658,norwegian,_5662,_5664,_5666),house(blue,_5672,_5674,_5676,_5678),_5342,member(house(_5690,_5692,zebra,_5696,_5698),_5342,member(house(_5708,_5710,_5712,water,_5716),_5342,_5840))))))))))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_top_0__1(mach); }
public static Operation exec_pred_top_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var78 = Data.V(mach) ;
Var var77 = Data.V(mach) ;
Var var76 = Data.V(mach) ;
Var var75 = Data.V(mach) ;
Var var74 = Data.V(mach) ;
Var var73 = Data.V(mach) ;
Var var72 = Data.V(mach) ;
Var var71 = Data.V(mach) ;
Var var70 = Data.V(mach) ;
Var var69 = Data.V(mach) ;
Var var68 = Data.V(mach) ;
Var var67 = Data.V(mach) ;
Var var66 = Data.V(mach) ;
Var var65 = Data.V(mach) ;
Var var64 = Data.V(mach) ;
Var var63 = Data.V(mach) ;
Var var62 = Data.V(mach) ;
Var var61 = Data.V(mach) ;
Var var60 = Data.V(mach) ;
Var var59 = Data.V(mach) ;
Var var58 = Data.V(mach) ;
Var var57 = Data.V(mach) ;
Var var56 = Data.V(mach) ;
Var var55 = Data.V(mach) ;
Var var54 = Data.V(mach) ;
Var var53 = Data.V(mach) ;
Var var52 = Data.V(mach) ;
Var var51 = Data.V(mach) ;
Var var50 = Data.V(mach) ;
Var var49 = Data.V(mach) ;
Var var48 = Data.V(mach) ;
Var var47 = Data.V(mach) ;
Var var46 = Data.V(mach) ;
Var var45 = Data.V(mach) ;
Var var44 = Data.V(mach) ;
Var var43 = Data.V(mach) ;
Var var42 = Data.V(mach) ;
Var var41 = Data.V(mach) ;
Var var40 = Data.V(mach) ;
Var var39 = Data.V(mach) ;
Var var38 = Data.V(mach) ;
Var var37 = Data.V(mach) ;
Var var36 = Data.V(mach) ;
Var var35 = Data.V(mach) ;
Var var34 = Data.V(mach) ;
Var var33 = Data.V(mach) ;
Var var32 = Data.V(mach) ;
Var var31 = Data.V(mach) ;
Var var30 = Data.V(mach) ;
Var var29 = Data.V(mach) ;
Var var28 = Data.V(mach) ;
Var var27 = Data.V(mach) ;
Var var26 = Data.V(mach) ;
Var var25 = Data.V(mach) ;
Var var24 = Data.V(mach) ;
Var var23 = Data.V(mach) ;
Var var22 = Data.V(mach) ;
Var var21 = Data.V(mach) ;
Var var20 = Data.V(mach) ;
Var var19 = Data.V(mach) ;
Var var18 = Data.V(mach) ;
Var var17 = Data.V(mach) ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = Data.F(zebra.s_member,Data.F(zebra.s_house,zebra.s_red,zebra.s_english,var2,var3,var4),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,var5,zebra.s_spanish,zebra.s_dog,var6,var7),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,zebra.s_green,var8,var9,zebra.s_coffee,var10),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,var11,zebra.s_ukrainian,var12,zebra.s_tea,var13),var1.Deref(),Data.F(zebra.s_right_of,Data.F(zebra.s_house,zebra.s_green,var14,var15,var16,var17),Data.F(zebra.s_house,zebra.s_ivory,var18,var19,var20,var21),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,var22,var23,zebra.s_snails,var24,zebra.s_winstons),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,zebra.s_yellow,var25,var26,var27,zebra.s_kools),var1.Deref(),Data.F(zebra.s_unify,Data.F(zebra.s1,var28,Data.F(zebra.s1,var29,Data.F(zebra.s1,Data.F(zebra.s_house,var30,var31,var32,zebra.s_milk,var33),Data.F(zebra.s1,var34,Data.F(zebra.s1,var35,Const.Nil))))),var1.Deref(),Data.F(zebra.s_unify,Data.F(zebra.s1,Data.F(zebra.s_house,var36,zebra.s_norwegian,var37,var38,var39),var40),var1.Deref(),Data.F(zebra.s_next_to,Data.F(zebra.s_house,var41,var42,var43,var44,zebra.s_chesterfields),Data.F(zebra.s_house,var45,var46,zebra.s_fox,var47,var48),var1.Deref(),Data.F(zebra.s_next_to,Data.F(zebra.s_house,var49,var50,var51,var52,zebra.s_kools),Data.F(zebra.s_house,var53,var54,zebra.s_horse,var55,var56),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,var57,var58,var59,zebra.s_orange_juice,zebra.s_lucky_strikes),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,var60,zebra.s_japanese,var61,var62,zebra.s_parliaments),var1.Deref(),Data.F(zebra.s_next_to,Data.F(zebra.s_house,var63,zebra.s_norwegian,var64,var65,var66),Data.F(zebra.s_house,zebra.s_blue,var67,var68,var69,var70),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,var71,var72,zebra.s_zebra,var73,var74),var1.Deref(),Data.F(zebra.s_member,Data.F(zebra.s_house,var75,var76,var77,zebra.s_water,var78),var1.Deref(),continuation)))))))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_houses_1::exec_static ;}
}


public static class pred_houses_1 extends Code {

/*

houses([house(_6772,_6774,_6776,_6778,_6780),house(_6790,_6792,_6794,_6796,_6798),house(_6808,_6810,_6812,_6814,_6816),house(_6826,_6828,_6830,_6832,_6834),house(_6844,_6846,_6848,_6850,_6852)],_6884):-call(_6884).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_houses_1__1(mach); }
public static Operation exec_pred_houses_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var25 = Data.V(mach) ;
Var var24 = Data.V(mach) ;
Var var23 = Data.V(mach) ;
Var var22 = Data.V(mach) ;
Var var21 = Data.V(mach) ;
Var var20 = Data.V(mach) ;
Var var19 = Data.V(mach) ;
Var var18 = Data.V(mach) ;
Var var17 = Data.V(mach) ;
Var var16 = Data.V(mach) ;
Var var15 = Data.V(mach) ;
Var var14 = Data.V(mach) ;
Var var13 = Data.V(mach) ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(zebra.s1,Data.F(zebra.s_house,var1,var2,var3,var4,var5),Data.F(zebra.s1,Data.F(zebra.s_house,var6,var7,var8,var9,var10),Data.F(zebra.s1,Data.F(zebra.s_house,var11,var12,var13,var14,var15),Data.F(zebra.s1,Data.F(zebra.s_house,var16,var17,var18,var19,var20),Data.F(zebra.s1,Data.F(zebra.s_house,var21,var22,var23,var24,var25),Const.Nil))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_right_of_3 extends Code {

/*

right_of(_6948,_6942,[_6942,_6948|_6950],_6980):-call(_6980).
right_of(_7078,_7080,[_7072|_7074],_7130):-right_of(_7078,_7080,_7074,_7130).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_right_of_3__1(mach); }
public static Operation exec_pred_right_of_3__1(Prolog mach){ mach.FillAlternative(pred_right_of_3::exec_pred_right_of_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(zebra.s1,var2.Deref(),Data.F(zebra.s1,var1.Deref(),var3)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_right_of_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(zebra.s1,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_right_of_3::exec_static ;}
}


public static class pred_next_to_3 extends Code {

/*

next_to(_7258,_7264,[_7258,_7264|_7266],_7296):-call(_7296).
next_to(_7400,_7394,[_7394,_7400|_7402],_7432):-call(_7432).
next_to(_7536,_7538,[_7530|_7532],_7588):-next_to(_7536,_7538,_7532,_7588).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_next_to_3__1(mach); }
public static Operation exec_pred_next_to_3__1(Prolog mach){ mach.FillAlternative(pred_next_to_3::exec_pred_next_to_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(zebra.s1,var1.Deref(),Data.F(zebra.s1,var2.Deref(),var3)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_next_to_3__2(Prolog mach){ mach.FillAlternative(pred_next_to_3::exec_pred_next_to_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(zebra.s1,var2.Deref(),Data.F(zebra.s1,var1.Deref(),var3)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_next_to_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(zebra.s1,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_next_to_3::exec_static ;}
}


public static class pred_member_2 extends Code {

/*

member(_7722,[_7722|_7724],_7752):-call(_7752).
member(_7848,[_7842|_7844],_7890):-member(_7848,_7844,_7890).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_member_2__1(mach); }
public static Operation exec_pred_member_2__1(Prolog mach){ mach.FillAlternative(pred_member_2::exec_pred_member_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(zebra.s1,var1.Deref(),var2),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_member_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(zebra.s1,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_member_2::exec_static ;}
}


public static class pred_print_houses_1 extends Code {

/*

print_houses([_8008|_8010],_8068):-cut(1,write(_8008,nl(print_houses(_8010,_8068)))).
print_houses([],_8256):-call(_8256).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_print_houses_1__1(mach); }
public static Operation exec_pred_print_houses_1__1(Prolog mach){ mach.FillAlternative(pred_print_houses_1::exec_pred_print_houses_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(zebra.s1,var1,var2),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(zebra.s_write,var1.Deref(),Data.F(zebra.s_nl,Data.F(zebra.s_print_houses,var2.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
public static Operation exec_pred_print_houses_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


