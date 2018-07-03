package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class ops8 /*extends CodeFile*/ {
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
final static Const s_ops8 = Data.Intern("ops8") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_x = Data.Intern("x") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_ops8_0 = PredTable.Register("ops8",0, new pred_ops8_0());
final static Operation reg_d_3 = PredTable.Register("d",3, new pred_d_3());
public static class pred_top_0 extends Code {

/*

top(_10270):-ops8(_10270).


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
return (Operation)pred_ops8_0::exec_static ;}
}


public static class pred_ops8_0 extends Code {

/*

ops8(_10388):-d((x+1)*((x^2+2)*(x^3+3)),x,_10366,_10388).


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
local_aregs[0] = Data.F(ops8.s1,Data.F(ops8.s2,ops8.s_x,ops8.posint1),Data.F(ops8.s1,Data.F(ops8.s2,Data.F(ops8.s7,ops8.s_x,ops8.posint2),ops8.posint2),Data.F(ops8.s2,Data.F(ops8.s7,ops8.s_x,ops8.posint3),ops8.posint3))) ;
local_aregs[1] = ops8.s_x ;
local_aregs[2] = var1 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_d_3::exec_static ;}
}


public static class pred_d_3 extends Code {

/*

d(_10486+_10488,_10500,_10492+_10494,_10570):-cut(1,d(_10486,_10500,_10492,d(_10488,_10500,_10494,_10570))).
d(_10768-_10770,_10782,_10774-_10776,_10852):-cut(1,d(_10768,_10782,_10774,d(_10770,_10782,_10776,_10852))).
d(_11050*_11052,_11076,_11056*_11052+_11050*_11064,_11146):-cut(1,d(_11050,_11076,_11056,d(_11052,_11076,_11064,_11146))).
d(_11344/_11346,_11382,(_11350*_11346-_11344*_11358)/_11346^2,_11452):-cut(1,d(_11344,_11382,_11350,d(_11346,_11382,_11358,_11452))).
d(_11650^_11652,_11676,_11656*_11652*_11650^_11664,_11760):-cut(1,integer(_11652,is(_11664,_11652-1,d(_11650,_11676,_11656,_11760)))).
d(-_11980,_11990,-_11984,_12046):-cut(1,d(_11980,_11990,_11984,_12046)).
d(exp(_12180),_12196,exp(_12180)*_12190,_12252):-cut(1,d(_12180,_12196,_12190,_12252)).
d(log(_12386),_12398,_12390/_12386,_12454):-cut(1,d(_12386,_12398,_12390,_12454)).
d(_12588,_12588,1,_12632):-cut(1,_12632).
d(_12702,_12704,0,_12728):-call(_12728).


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
if (!( (areg0).Unify(Data.F(ops8.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s2,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(ops8.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(ops8.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s3,var4,var5),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(ops8.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(ops8.s1,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s2,Data.F(ops8.s1,var4,var2.Deref()),Data.F(ops8.s1,var1.Deref(),var5)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(ops8.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(ops8.s5,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s5,Data.F(ops8.s3,Data.F(ops8.s1,var4,var2.Deref()),Data.F(ops8.s1,var1.Deref(),var5)),Data.F(ops8.s7,var2.Deref(),ops8.posint2)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_d,var1.Deref(),var3.Deref(),var4.Deref(),Data.F(ops8.s_d,var2.Deref(),var3.Deref(),var5.Deref(),continuation)) ;
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
if (!( (areg0).Unify(Data.F(ops8.s7,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s1,Data.F(ops8.s1,var4,var2.Deref()),Data.F(ops8.s7,var1.Deref(),var5)),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_integer,var2.Deref(),Data.F(ops8.s_is,var5.Deref(),Data.F(ops8.s3,var2.Deref(),ops8.posint1),Data.F(ops8.s_d,var1.Deref(),var3.Deref(),var4.Deref(),continuation))) ;
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
if (!( (areg0).Unify(Data.F(ops8.s3,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s3,var3),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
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
if (!( (areg0).Unify(Data.F(ops8.s_exp,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s1,Data.F(ops8.s_exp,var1.Deref()),var3),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
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
if (!( (areg0).Unify(Data.F(ops8.s_log,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(ops8.s5,var3,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(ops8.s_d,var1.Deref(),var2.Deref(),var3.Deref(),continuation) ;
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
if (!( (areg2).Unify(ops8.posint1,mach))) return Prolog.Fail0 ;
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
if (!( (areg2).Unify(ops8.posint0,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


