package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class derive /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("*") ;
final static Const s2 = Data.Intern("+") ;
final static Const s3 = Data.Intern("-") ;
final static Const s4 = Data.Intern(".") ;
final static Const s5 = Data.Intern("/") ;
final static Const s6 = Data.Intern(":-") ;
final static Const s7 = Data.Intern("^") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_d = Data.Intern("d") ;
final static Const s_divide10 = Data.Intern("divide10") ;
final static Const s_exp = Data.Intern("exp") ;
final static Const s_integer = Data.Intern("integer") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_log = Data.Intern("log") ;
final static Const s_log10 = Data.Intern("log10") ;
final static Const s_ops8 = Data.Intern("ops8") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_x = Data.Intern("x") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_ops8_0 = PredTable.Register("ops8",0, new pred_ops8_0());
final static Operation reg_log10_0 = PredTable.Register("log10",0, new pred_log10_0());
final static Operation reg_divide10_0 = PredTable.Register("divide10",0, new pred_divide10_0());
final static Operation reg_d_3 = PredTable.Register("d",3, new pred_d_3());
public static class pred_top_0 extends Code {

/*

top(_10308):-ops8(log10(divide10(_10308))).


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
local_aregs[0] = Data.F(derive.s_log10,Data.F(derive.s_divide10,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_ops8_0::exec_static ;}
}


public static class pred_ops8_0 extends Code {

/*

ops8(_10470):-d((x+1)*((x^2+2)*(x^3+3)),x,_10448,_10470).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_ops8_0__1(mach); }
public static Operation exec_pred_ops8_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(derive.s1,Data.F(derive.s2,derive.s_x,derive.posint1),Data.F(derive.s1,Data.F(derive.s2,Data.F(derive.s7,derive.s_x,derive.posint2),derive.posint2),Data.F(derive.s2,Data.F(derive.s7,derive.s_x,derive.posint3),derive.posint3))) ;
local_aregs[1] = derive.s_x ;
local_aregs[2] = var1 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_d_3::exec_static ;}
}


public static class pred_log10_0 extends Code {

/*

log10(_10634):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_10612,_10634).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_log10_0__1(mach); }
public static Operation exec_pred_log10_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,Data.F(derive.s_log,derive.s_x)))))))))) ;
local_aregs[1] = derive.s_x ;
local_aregs[2] = var1 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_d_3::exec_static ;}
}


public static class pred_divide10_0 extends Code {

/*

divide10(_10818):-d(x/x/x/x/x/x/x/x/x/x,x,_10796,_10818).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_divide10_0__1(mach); }
public static Operation exec_pred_divide10_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(derive.s5,Data.F(derive.s5,Data.F(derive.s5,Data.F(derive.s5,Data.F(derive.s5,Data.F(derive.s5,Data.F(derive.s5,Data.F(derive.s5,Data.F(derive.s5,derive.s_x,derive.s_x),derive.s_x),derive.s_x),derive.s_x),derive.s_x),derive.s_x),derive.s_x),derive.s_x),derive.s_x) ;
local_aregs[1] = derive.s_x ;
local_aregs[2] = var1 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_d_3::exec_static ;}
}


public static class pred_d_3 extends Code {

/*

d(_10928+_10930,_10942,_10934+_10936,_11012):-cut(1,d(_10928,_10942,_10934,d(_10930,_10942,_10936,_11012))).
d(_11222-_11224,_11236,_11228-_11230,_11306):-cut(1,d(_11222,_11236,_11228,d(_11224,_11236,_11230,_11306))).
d(_11516*_11518,_11542,_11522*_11518+_11516*_11530,_11612):-cut(1,d(_11516,_11542,_11522,d(_11518,_11542,_11530,_11612))).
d(_11822/_11824,_11860,(_11828*_11824-_11822*_11836)/_11824^2,_11930):-cut(1,d(_11822,_11860,_11828,d(_11824,_11860,_11836,_11930))).
d(_12140^_12142,_12166,_12146*_12142*_12140^_12154,_12250):-cut(1,integer(_12142,is(_12154,_12142-1,d(_12140,_12166,_12146,_12250)))).
d(-_12482,_12492,-_12486,_12548):-cut(1,d(_12482,_12492,_12486,_12548)).
d(exp(_12694),_12710,exp(_12694)*_12704,_12766):-cut(1,d(_12694,_12710,_12704,_12766)).
d(log(_12912),_12924,_12916/_12912,_12980):-cut(1,d(_12912,_12924,_12916,_12980)).
d(_13126,_13126,1,_13170):-cut(1,_13170).
d(_13252,_13254,0,_13278):-call(_13278).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_d_3__1(mach); }
public static Operation exec_pred_d_3__1(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s2,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(derive.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__2(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s3,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(derive.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__3(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s1,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s2,Data.F(derive.s1,var4,var2.Deref()),Data.F(derive.s1,var1.Deref(),var5)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(derive.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__4(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s5,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s5,Data.F(derive.s3,Data.F(derive.s1,var4,var2.Deref()),Data.F(derive.s1,var1.Deref(),var5)),Data.F(derive.s7,var2.Deref(),derive.posint2)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(derive.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__5(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s1,Data.F(derive.s1,var4,var2.Deref()),Data.F(derive.s7,var1.Deref(),var5)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_integer,var2.Deref(),Data.F(derive.s_is,var5.Deref(),Data.F(derive.s3,var2.Deref(),derive.posint1),Data.F(derive.s_d,var1.Deref(),var3.Deref(),var4.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__6(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s3,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s3,var3),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__7(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s_exp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s1,Data.F(derive.s_exp,var1.Deref()),var3),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__8(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(derive.s_log,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(derive.s5,var3,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(derive.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__9(Prolog mach){ mach.FillAlternative(pred_d_3::exec_pred_d_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(derive.posint1,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_d_3__10(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(derive.posint0,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


