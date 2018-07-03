package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class crypt /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("*") ;
final static Const s2 = Data.Intern("+") ;
final static Const s3 = Data.Intern(".") ;
final static Const s4 = Data.Intern("//") ;
final static Const s5 = Data.Intern(":-") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_even = Data.Intern("even") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_lefteven = Data.Intern("lefteven") ;
final static Const s_mod = Data.Intern("mod") ;
final static Const s_mult = Data.Intern("mult") ;
final static Const s_odd = Data.Intern("odd") ;
final static Const s_sum = Data.Intern("sum") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_zero = Data.Intern("zero") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Int posint4 = Data.Number(4L) ;
final static Int posint5 = Data.Number(5L) ;
final static Int posint6 = Data.Number(6L) ;
final static Int posint7 = Data.Number(7L) ;
final static Int posint8 = Data.Number(8L) ;
final static Int posint9 = Data.Number(9L) ;
final static Int posint10 = Data.Number(10L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_sum_3 = PredTable.Register("sum",3, new pred_sum_3());
final static Operation reg_sum_4 = PredTable.Register("sum",4, new pred_sum_4());
final static Operation reg_mult_3 = PredTable.Register("mult",3, new pred_mult_3());
final static Operation reg_mult_4 = PredTable.Register("mult",4, new pred_mult_4());
final static Operation reg_zero_1 = PredTable.Register("zero",1, new pred_zero_1());
final static Operation reg_odd_1 = PredTable.Register("odd",1, new pred_odd_1());
final static Operation reg_even_1 = PredTable.Register("even",1, new pred_even_1());
final static Operation reg_lefteven_1 = PredTable.Register("lefteven",1, new pred_lefteven_1());
public static class pred_top_0 extends Code {

/*

top(_5898):-odd(_5504,even(_5508,even(_5512,even(_5516,mult([_5512,_5508,_5504],_5516,[_5538,_5544,_5550,_5556|_5558],lefteven(_5556,odd(_5550,even(_5544,even(_5538,zero(_5558,lefteven(_5590,mult([_5512,_5508,_5504],_5590,[_5612,_5618,_5624|_5626],lefteven(_5624,odd(_5618,even(_5612,zero(_5626,sum([_5538,_5544,_5550,_5556],[0,_5612,_5618,_5624],[_5702,_5708,_5714,_5720|_5722],odd(_5720,odd(_5714,even(_5708,even(_5702,zero(_5722,_5898)))))))))))))))))))))).


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
local_aregs[1] = Data.F(crypt.s_even,var2,Data.F(crypt.s_even,var3,Data.F(crypt.s_even,var4,Data.F(crypt.s_mult,Data.F(crypt.s3,var3.Deref(),Data.F(crypt.s3,var2.Deref(),Data.F(crypt.s3,var1.Deref(),Const.Nil))),var4.Deref(),Data.F(crypt.s3,var5,Data.F(crypt.s3,var6,Data.F(crypt.s3,var7,Data.F(crypt.s3,var8,var9)))),Data.F(crypt.s_lefteven,var8.Deref(),Data.F(crypt.s_odd,var7.Deref(),Data.F(crypt.s_even,var6.Deref(),Data.F(crypt.s_even,var5.Deref(),Data.F(crypt.s_zero,var9.Deref(),Data.F(crypt.s_lefteven,var10,Data.F(crypt.s_mult,Data.F(crypt.s3,var3.Deref(),Data.F(crypt.s3,var2.Deref(),Data.F(crypt.s3,var1.Deref(),Const.Nil))),var10.Deref(),Data.F(crypt.s3,var11,Data.F(crypt.s3,var12,Data.F(crypt.s3,var13,var14))),Data.F(crypt.s_lefteven,var13.Deref(),Data.F(crypt.s_odd,var12.Deref(),Data.F(crypt.s_even,var11.Deref(),Data.F(crypt.s_zero,var14.Deref(),Data.F(crypt.s_sum,Data.F(crypt.s3,var5.Deref(),Data.F(crypt.s3,var6.Deref(),Data.F(crypt.s3,var7.Deref(),Data.F(crypt.s3,var8.Deref(),Const.Nil)))),Data.F(crypt.s3,crypt.posint0,Data.F(crypt.s3,var11.Deref(),Data.F(crypt.s3,var12.Deref(),Data.F(crypt.s3,var13.Deref(),Const.Nil)))),Data.F(crypt.s3,var15,Data.F(crypt.s3,var16,Data.F(crypt.s3,var17,Data.F(crypt.s3,var18,var19)))),Data.F(crypt.s_odd,var18.Deref(),Data.F(crypt.s_odd,var17.Deref(),Data.F(crypt.s_even,var16.Deref(),Data.F(crypt.s_even,var15.Deref(),Data.F(crypt.s_zero,var19.Deref(),continuation))))))))))))))))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_odd_1::exec_static ;}
}


public static class pred_sum_3 extends Code {

/*

sum(_6802,_6804,_6806,_6856):-sum(_6802,_6804,0,_6806,_6856).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_sum_3__1(mach); }
public static Operation exec_pred_sum_3__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = crypt.posint0 ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_sum_4::exec_static ;}
}


public static class pred_sum_4 extends Code {

/*

sum([_6992|_6994],[_6998|_7000],_7014,[_7004|_7006],_7138):-cut(1,is(_7032,_6992+_6998+_7014,is(_7004,_7032 mod 10,is(_7056,_7032//10,sum(_6994,_7000,_7056,_7006,_7138))))).
sum([],_7446,0,_7446,_7496):-cut(1,_7496).
sum(_7574,[],0,_7574,_7626):-cut(1,_7626).
sum([],[_7704|_7706],_7720,[_7710|_7712],_7838):-cut(1,is(_7732,_7704+_7720,is(_7744,_7732//10,is(_7710,_7732 mod 10,sum([],_7706,_7744,_7712,_7838))))).
sum([_8144|_8146],[],_8160,[_8150|_8152],_8278):-cut(1,is(_8172,_8144+_8160,is(_8184,_8172//10,is(_8150,_8172 mod 10,sum([],_8146,_8184,_8152,_8278))))).
sum([],[],_8584,[_8584],_8618):-call(_8618).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_sum_4__1(mach); }
public static Operation exec_pred_sum_4__1(Prolog mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(crypt.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(crypt.s3,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(crypt.s3,var6,var7),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(crypt.s_is,var8,Data.F(crypt.s2,Data.F(crypt.s2,var1.Deref(),var3.Deref()),var5.Deref()),Data.F(crypt.s_is,var6.Deref(),Data.F(crypt.s_mod,var8.Deref(),crypt.posint10),Data.F(crypt.s_is,var9,Data.F(crypt.s4,var8.Deref(),crypt.posint10),Data.F(crypt.s_sum,var2.Deref(),var4.Deref(),var9.Deref(),var7.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_sum_4__2(Prolog mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(crypt.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_sum_4__3(Prolog mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(crypt.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_sum_4__4(Prolog mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(crypt.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(crypt.s3,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(crypt.s_is,var6,Data.F(crypt.s2,var1.Deref(),var3.Deref()),Data.F(crypt.s_is,var7,Data.F(crypt.s4,var6.Deref(),crypt.posint10),Data.F(crypt.s_is,var4.Deref(),Data.F(crypt.s_mod,var6.Deref(),crypt.posint10),Data.F(crypt.s_sum,Const.Nil,var2.Deref(),var7.Deref(),var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_sum_4__5(Prolog mach){ mach.FillAlternative(pred_sum_4::exec_pred_sum_4__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(crypt.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(crypt.s3,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(crypt.s_is,var6,Data.F(crypt.s2,var1.Deref(),var3.Deref()),Data.F(crypt.s_is,var7,Data.F(crypt.s4,var6.Deref(),crypt.posint10),Data.F(crypt.s_is,var4.Deref(),Data.F(crypt.s_mod,var6.Deref(),crypt.posint10),Data.F(crypt.s_sum,Const.Nil,var2.Deref(),var7.Deref(),var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_sum_4__6(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(crypt.s3,var1.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_mult_3 extends Code {

/*

mult(_8724,_8726,_8728,_8778):-mult(_8724,_8726,0,_8728,_8778).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_mult_3__1(mach); }
public static Operation exec_pred_mult_3__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = crypt.posint0 ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_mult_4::exec_static ;}
}


public static class pred_mult_4 extends Code {

/*

mult([_8926|_8928],_8940,_8942,[_8932|_8934],_9060):-is(_8960,_8926*_8940+_8942,is(_8932,_8960 mod 10,is(_8984,_8960//10,mult(_8928,_8940,_8984,_8934,_9060)))).
mult([],_9386,_9388,[_9372,_9378],_9466):-is(_9372,_9388 mod 10,is(_9378,_9388//10,_9466)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_mult_4__1(mach); }
public static Operation exec_pred_mult_4__1(Prolog mach){ mach.FillAlternative(pred_mult_4::exec_pred_mult_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(crypt.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(crypt.s3,var5,var6),mach))) return Prolog.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = Data.F(crypt.s2,Data.F(crypt.s1,var1.Deref(),var3.Deref()),var4.Deref()) ;
local_aregs[2] = Data.F(crypt.s_is,var5.Deref(),Data.F(crypt.s_mod,var7.Deref(),crypt.posint10),Data.F(crypt.s_is,var8,Data.F(crypt.s4,var7.Deref(),crypt.posint10),Data.F(crypt.s_mult,var2.Deref(),var3.Deref(),var8.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_is_2::exec_static ;}
public static Operation exec_pred_mult_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(crypt.s3,var3,Data.F(crypt.s3,var4,Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(crypt.s_mod,var2.Deref(),crypt.posint10) ;
local_aregs[2] = Data.F(crypt.s_is,var4.Deref(),Data.F(crypt.s4,var2.Deref(),crypt.posint10),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_is_2::exec_static ;}
}


public static class pred_zero_1 extends Code {

/*

zero([],_9672):-call(_9672).
zero([0|_9756],_9792):-zero(_9756,_9792).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_zero_1__1(mach); }
public static Operation exec_pred_zero_1__1(Prolog mach){ mach.FillAlternative(pred_zero_1::exec_pred_zero_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_zero_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(crypt.s3,crypt.posint0,var1),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_zero_1::exec_static ;}
}


public static class pred_odd_1 extends Code {

/*

odd(1,_9916):-call(_9916).
odd(3,_10026):-call(_10026).
odd(5,_10136):-call(_10136).
odd(7,_10246):-call(_10246).
odd(9,_10356):-call(_10356).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_odd_1__1(mach); }
public static Operation exec_pred_odd_1__1(Prolog mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_odd_1__2(Prolog mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint3,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_odd_1__3(Prolog mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint5,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_odd_1__4(Prolog mach){ mach.FillAlternative(pred_odd_1::exec_pred_odd_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint7,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_odd_1__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint9,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_even_1 extends Code {

/*

even(0,_10466):-call(_10466).
even(2,_10582):-call(_10582).
even(4,_10698):-call(_10698).
even(6,_10814):-call(_10814).
even(8,_10930):-call(_10930).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_even_1__1(mach); }
public static Operation exec_pred_even_1__1(Prolog mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint0,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_even_1__2(Prolog mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_even_1__3(Prolog mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_even_1__4(Prolog mach){ mach.FillAlternative(pred_even_1::exec_pred_even_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint6,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_even_1__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint8,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_lefteven_1 extends Code {

/*

lefteven(2,_11046):-call(_11046).
lefteven(4,_11168):-call(_11168).
lefteven(6,_11290):-call(_11290).
lefteven(8,_11412):-call(_11412).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lefteven_1__1(mach); }
public static Operation exec_pred_lefteven_1__1(Prolog mach){ mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lefteven_1__2(Prolog mach){ mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lefteven_1__3(Prolog mach){ mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint6,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lefteven_1__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(crypt.posint8,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


