package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class tak /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("-") ;
final static Const s2 = Data.Intern(".") ;
final static Const s3 = Data.Intern(":-") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_smallerorequal = Data.Intern("smallerorequal") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_tak = Data.Intern("tak") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_unify = Data.Intern("unify") ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint6 = Data.Number(6L) ;
final static Int posint12 = Data.Number(12L) ;
final static Int posint18 = Data.Number(18L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_tak_0 = PredTable.Register("tak",0, new pred_tak_0());
final static Operation reg_tak_4 = PredTable.Register("tak",4, new pred_tak_4());
public static class pred_top_0 extends Code {

/*

top(_5326):-tak(_5326).


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
return (Operation)pred_tak_0::exec_static ;}
}


public static class pred_tak_0 extends Code {

/*

tak(_5404):-tak(18,12,6,_5382,_5404).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_tak_0__1(mach); }
public static Operation exec_pred_tak_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = tak.posint18 ;
local_aregs[1] = tak.posint12 ;
local_aregs[2] = tak.posint6 ;
local_aregs[3] = var1 ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_tak_4::exec_static ;}
}


public static class pred_tak_4 extends Code {

/*

tak(_5516,_5518,_5520,_5522,_5586):-smallerorequal(_5516,_5518,unify(_5522,_5520,_5586)).
tak(_5770,_5772,_5774,_5776,_5946):-smallerthan(_5772,_5770,is(_5792,_5770-1,tak(_5792,_5772,_5774,_5804,is(_5814,_5772-1,tak(_5814,_5774,_5770,_5826,is(_5836,_5774-1,tak(_5836,_5770,_5772,_5848,tak(_5804,_5826,_5848,_5776,_5946)))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_tak_4__1(mach); }
public static Operation exec_pred_tak_4__1(Prolog mach){ mach.FillAlternative(pred_tak_4::exec_pred_tak_4__2) ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Data.F(tak.s_unify,var4.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_tak_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(tak.s_is,var5,Data.F(tak.s1,var1.Deref(),tak.posint1),Data.F(tak.s_tak,var5.Deref(),var2.Deref(),var3.Deref(),var6,Data.F(tak.s_is,var7,Data.F(tak.s1,var2.Deref(),tak.posint1),Data.F(tak.s_tak,var7.Deref(),var3.Deref(),var1.Deref(),var8,Data.F(tak.s_is,var9,Data.F(tak.s1,var3.Deref(),tak.posint1),Data.F(tak.s_tak,var9.Deref(),var1.Deref(),var2.Deref(),var10,Data.F(tak.s_tak,var6.Deref(),var8.Deref(),var10.Deref(),var4.Deref(),continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


}


