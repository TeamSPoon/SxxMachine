package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class times10 /*extends CodeFile*/ {
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
final static Const s_exp = Data.Intern("exp") ;
final static Const s_integer = Data.Intern("integer") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_log = Data.Intern("log") ;
final static Const s_times10 = Data.Intern("times10") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_x = Data.Intern("x") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_times10_0 = PredTable.Register("times10",0, new pred_times10_0());
final static Operation reg_d_3 = PredTable.Register("d",3, new pred_d_3());
public static class pred_top_0 extends Code {

/*

top(_10124):-times10(_10124).


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
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_times10_0::exec_static ;}
}


public static class pred_times10_0 extends Code {

/*

times10(_10254):-d(x*x*x*x*x*x*x*x*x*x,x,_10232,_10254).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_times10_0__1(mach); }
public static Operation exec_pred_times10_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(times10.s1,Data.F(times10.s1,Data.F(times10.s1,Data.F(times10.s1,Data.F(times10.s1,Data.F(times10.s1,Data.F(times10.s1,Data.F(times10.s1,Data.F(times10.s1,times10.s_x,times10.s_x),times10.s_x),times10.s_x),times10.s_x),times10.s_x),times10.s_x),times10.s_x),times10.s_x),times10.s_x) ;
local_aregs[1] = times10.s_x ;
local_aregs[2] = var1 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_d_3::exec_static ;}
}


public static class pred_d_3 extends Code {

/*

d(_10352+_10354,_10366,_10358+_10360,_10436):-cut(1,d(_10352,_10366,_10358,d(_10354,_10366,_10360,_10436))).
d(_10634-_10636,_10648,_10640-_10642,_10718):-cut(1,d(_10634,_10648,_10640,d(_10636,_10648,_10642,_10718))).
d(_10916*_10918,_10942,_10922*_10918+_10916*_10930,_11012):-cut(1,d(_10916,_10942,_10922,d(_10918,_10942,_10930,_11012))).
d(_11210/_11212,_11248,(_11216*_11212-_11210*_11224)/_11212^2,_11318):-cut(1,d(_11210,_11248,_11216,d(_11212,_11248,_11224,_11318))).
d(_11516^_11518,_11542,_11522*_11518*_11516^_11530,_11626):-cut(1,integer(_11518,is(_11530,_11518-1,d(_11516,_11542,_11522,_11626)))).
d(-_11846,_11856,-_11850,_11912):-cut(1,d(_11846,_11856,_11850,_11912)).
d(exp(_12046),_12062,exp(_12046)*_12056,_12118):-cut(1,d(_12046,_12062,_12056,_12118)).
d(log(_12252),_12264,_12256/_12252,_12320):-cut(1,d(_12252,_12264,_12256,_12320)).
d(_12454,_12454,1,_12498):-cut(1,_12498).
d(_12568,_12570,0,_12594):-call(_12594).


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
if (!( (areg0).Unify(Data.F(times10.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s2,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(times10.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(times10.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s3,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(times10.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(times10.s1,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s2,Data.F(times10.s1,var4,var2.Deref()),Data.F(times10.s1,var1.Deref(),var5)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(times10.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(times10.s5,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s5,Data.F(times10.s3,Data.F(times10.s1,var4,var2.Deref()),Data.F(times10.s1,var1.Deref(),var5)),Data.F(times10.s7,var2.Deref(),times10.posint2)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(times10.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(times10.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s1,Data.F(times10.s1,var4,var2.Deref()),Data.F(times10.s7,var1.Deref(),var5)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_integer,var2.Deref(),Data.F(times10.s_is,var5.Deref(),Data.F(times10.s3,var2.Deref(),times10.posint1),Data.F(times10.s_d,var1.Deref(),var3.Deref(),var4.Deref(),continuation))) ;
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
if (!( (areg0).Unify(Data.F(times10.s3,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s3,var3),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
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
if (!( (areg0).Unify(Data.F(times10.s_exp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s1,Data.F(times10.s_exp,var1.Deref()),var3),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
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
if (!( (areg0).Unify(Data.F(times10.s_log,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(times10.s5,var3,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(times10.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
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
if (!( (areg2).Unify(times10.posint1,mach))) return Prolog.Fail0 ;
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
if (!( (areg2).Unify(times10.posint0,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


