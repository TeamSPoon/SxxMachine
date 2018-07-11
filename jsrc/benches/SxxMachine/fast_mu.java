package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class fast_mu /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("+") ;
final static Const s2 = Data.Intern("-") ;
final static Const s3 = Data.Intern("->") ;
final static Const s4 = Data.Intern(".") ;
final static Const s5 = Data.Intern("/\\") ;
final static Const s6 = Data.Intern(":-") ;
final static Const s7 = Data.Intern("=:=") ;
final static Const s8 = Data.Intern(">>") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_derive = Data.Intern("derive") ;
final static Const s_derive2 = Data.Intern("derive2") ;
final static Const s_i = Data.Intern("i") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_length = Data.Intern("length") ;
final static Const s_lower_bound = Data.Intern("lower_bound") ;
final static Const s_m = Data.Intern("m") ;
final static Const s_or = Data.Intern("or") ;
final static Const s_rule = Data.Intern("rule") ;
final static Const s_smallerorequal = Data.Intern("smallerorequal") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_theorem = Data.Intern("theorem") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_u = Data.Intern("u") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Int posint4 = Data.Number(4L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_theorem_1 = PredTable.Register("theorem",1, new pred_theorem_1());
final static Operation reg_derive_6 = PredTable.Register("derive",6, new pred_derive_6());
final static Operation reg_derive2_7 = PredTable.Register("derive2",7, new pred_derive2_7());
final static Operation reg_rule_7 = PredTable.Register("rule",7, new pred_rule_7());
final static Operation reg_rule_11 = PredTable.Register("rule",11, new pred_rule_11());
final static Operation reg_lower_bound_3 = PredTable.Register("lower_bound",3, new pred_lower_bound_3());
public static class pred_top_0 extends Code {

/*

top(_19954):-theorem([m,u,i,i,u],_19954).


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
local_aregs[0] = Data.F(fast_mu.s4,fast_mu.s_m,Data.F(fast_mu.s4,fast_mu.s_u,Data.F(fast_mu.s4,fast_mu.s_i,Data.F(fast_mu.s4,fast_mu.s_i,Data.F(fast_mu.s4,fast_mu.s_u,Const.Nil))))) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_theorem_1::exec_static ;}
}


public static class pred_theorem_1 extends Code {

/*

theorem(_20018,_20102):-length(_20018,_20024,is(_20034,_20024-1,derive([m,i],_20018,1,_20034,_20060,0,_20102))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_theorem_1__1(mach); }
public static Operation exec_pred_theorem_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = Data.F(fast_mu.s_is,var3,Data.F(fast_mu.s2,var2.Deref(),fast_mu.posint1),Data.F(fast_mu.s_derive,Data.F(fast_mu.s4,fast_mu.s_m,Data.F(fast_mu.s4,fast_mu.s_i,Const.Nil)),var1.Deref(),fast_mu.posint1,var3.Deref(),var4,fast_mu.posint0,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) fast_mu.s_length.FindProc(2) ;}
}


public static class pred_derive_6 extends Code {

/*

derive(_20350,_20352,_20354,_20356,_20358,_20360,_20434):-derive2(_20350,_20352,_20354,_20356,1,_20358,_20360,_20434).
derive(_20642,_20644,_20646,_20648,_20650,_20652,_20742):-is(_20662,_20652+1,derive(_20642,_20644,_20646,_20648,_20650,_20662,_20742)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_derive_6__1(mach); }
public static Operation exec_pred_derive_6__1(Prolog mach){ mach.FillAlternative(pred_derive_6::exec_pred_derive_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = fast_mu.posint1 ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = var6.Deref() ;
local_aregs[7] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_derive2_7::exec_static ;}
public static Operation exec_pred_derive_6__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var7 ;
local_aregs[1] = Data.F(fast_mu.s1,var6.Deref(),fast_mu.posint1) ;
local_aregs[2] = Data.F(fast_mu.s_derive,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var7.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation) fast_mu.s_is.FindProc(2) ;}
}


public static class pred_derive2_7 extends Code {

/*

derive2(_20986,_20986,_20990,_20990,_20994,[],_20998,_21020):-call(_21020).
derive2(_21186,_21188,_21190,_21192,_21194,[rule(_21174,_21176)|_21182],_21198,_21344):-lower_bound(_21190,_21192,_21206,smallerorequal(_21206,_21198,is(_21222,_21198-1,rule(_21186,_21176,_21190,_21234,_21194,_21238,_21174,derive2(_21176,_21188,_21234,_21192,_21238,_21182,_21222,_21344))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_derive2_7__1(mach); }
public static Operation exec_pred_derive2_7__1(Prolog mach){ mach.FillAlternative(pred_derive2_7::exec_pred_derive2_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_derive2_7__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(Data.F(fast_mu.s4,Data.F(fast_mu.s_rule,var6,var7),var8),mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var9,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var10 ;
local_aregs[3] = Data.F(fast_mu.s_smallerorequal,var10.Deref(),var9.Deref(),Data.F(fast_mu.s_is,var11,Data.F(fast_mu.s2,var9.Deref(),fast_mu.posint1),Data.F(fast_mu.s_rule,var1.Deref(),var7.Deref(),var3.Deref(),var12,var5.Deref(),var13,var6.Deref(),Data.F(fast_mu.s_derive2,var7.Deref(),var2.Deref(),var12.Deref(),var4.Deref(),var13.Deref(),var8.Deref(),var11.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_lower_bound_3::exec_static ;}
}


public static class pred_rule_7 extends Code {

/*

rule([m|_21858],[m|_21864],_21872,_21874,_21876,_21878,_21880,_21968):-rule(_21858,_21864,_21872,_21874,_21876,_21878,1,i,_21880,_21902,_21902,_21968).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rule_7__1(mach); }
public static Operation exec_pred_rule_7__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
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
if (!( (areg0).Unify(Data.F(fast_mu.s4,fast_mu.s_m,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(fast_mu.s4,fast_mu.s_m,var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var7,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var4.Deref() ;
local_aregs[4] = var5.Deref() ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = fast_mu.posint1 ;
local_aregs[7] = fast_mu.s_i ;
local_aregs[8] = var7.Deref() ;
local_aregs[9] = var8 ;
local_aregs[10] = var8.Deref() ;
local_aregs[11] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_rule_11::exec_static ;}
}


public static class pred_rule_11 extends Code {

/*

rule([i],[i,u],_22274,_22276,_22278,_22280,_22282,_22284,1,_22288,_22290,_22420):-smallerorequal(_22278,_22282,is(_22280,_22282-2,is(_22276,_22274+1,_22420))).
rule([],_22724,_22726,_22728,_22730,1,_22734,_22736,2,_22724,[],_22842):-is(_22728,_22726+_22726,_22842).
rule([i,i,i|_23052],[u|_23052],_23066,_23068,_23070,_23072,_23074,_23076,3,_23080,_23082,_23212):-smallerorequal(_23070,_23074,is(_23072,_23074-1,is(_23068,_23066-2,_23212))).
rule([u,u|_23522],_23522,_23530,_23532,_23534,_23536,_23538,i,4,_23544,_23546,_23676):-smallerorequal(_23534,_23538,is(_23536,_23538-2,is(_23532,_23530-2,_23676))).
rule([_23978|_23980],[_23978|_23986],_24000,_24002,_24004,_24006,_24008,_24010,_24012,_24014,[_23978|_23992],_24146):-is(_24026,_24008+1,rule(_23980,_23986,_24000,_24002,_24004,_24006,_24026,_23978,_24012,_24014,_23992,_24146)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
Term aregs[] = mach.RegPull(11);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rule_11__1(mach); }
public static Operation exec_pred_rule_11__1(Prolog mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
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
if (!( (areg0).Unify(Data.F(fast_mu.s4,fast_mu.s_i,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(fast_mu.s4,fast_mu.s_i,Data.F(fast_mu.s4,fast_mu.s_u,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint1,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var8,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = Data.F(fast_mu.s_is,var4.Deref(),Data.F(fast_mu.s2,var5.Deref(),fast_mu.posint2),Data.F(fast_mu.s_is,var2.Deref(),Data.F(fast_mu.s1,var1.Deref(),fast_mu.posint1),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_rule_11__2(Prolog mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(fast_mu.posint1,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint2,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(fast_mu.s1,var2.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation) fast_mu.s_is.FindProc(2) ;}
public static Operation exec_pred_rule_11__3(Prolog mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
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
if (!( (areg0).Unify(Data.F(fast_mu.s4,fast_mu.s_i,Data.F(fast_mu.s4,fast_mu.s_i,Data.F(fast_mu.s4,fast_mu.s_i,var1))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(fast_mu.s4,fast_mu.s_u,var1.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint3,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var9,mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = Data.F(fast_mu.s_is,var5.Deref(),Data.F(fast_mu.s2,var6.Deref(),fast_mu.posint1),Data.F(fast_mu.s_is,var3.Deref(),Data.F(fast_mu.s2,var2.Deref(),fast_mu.posint2),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_rule_11__4(Prolog mach){ mach.FillAlternative(pred_rule_11::exec_pred_rule_11__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
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
if (!( (areg0).Unify(Data.F(fast_mu.s4,fast_mu.s_u,Data.F(fast_mu.s4,fast_mu.s_u,var1)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(fast_mu.s_i,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(fast_mu.posint4,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(var8,mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var6.Deref() ;
local_aregs[2] = Data.F(fast_mu.s_is,var5.Deref(),Data.F(fast_mu.s2,var6.Deref(),fast_mu.posint2),Data.F(fast_mu.s_is,var3.Deref(),Data.F(fast_mu.s2,var2.Deref(),fast_mu.posint2),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_smallerorequal_2::exec_static ;}
public static Operation exec_pred_rule_11__5(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[11] ;
Term areg10 = local_aregs[10].Deref() ;
Term areg9 = local_aregs[9].Deref() ;
Term areg8 = local_aregs[8].Deref() ;
Term areg7 = local_aregs[7].Deref() ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
if (!( (areg0).Unify(Data.F(fast_mu.s4,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(fast_mu.s4,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var6,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var7,mach))) return Prolog.Fail0 ;
if (!( (areg6).Unify(var8,mach))) return Prolog.Fail0 ;
if (!( (areg7).Unify(var9,mach))) return Prolog.Fail0 ;
if (!( (areg8).Unify(var10,mach))) return Prolog.Fail0 ;
if (!( (areg9).Unify(var11,mach))) return Prolog.Fail0 ;
if (!( (areg10).Unify(Data.F(fast_mu.s4,var1.Deref(),var12),mach))) return Prolog.Fail0 ;
local_aregs[0] = var13 ;
local_aregs[1] = Data.F(fast_mu.s1,var8.Deref(),fast_mu.posint1) ;
local_aregs[2] = Data.F(fast_mu.s_rule,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref(),var7.Deref(),var13.Deref(),var1.Deref(),var10.Deref(),var11.Deref(),var12.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation) fast_mu.s_is.FindProc(2) ;}
}


public static class pred_lower_bound_3 extends Code {

/*

lower_bound(_24518,_24520,1,_24568):-smallerthan(_24518,_24520,_24568).
lower_bound(_24712,_24712,2,_24738):-call(_24738).
lower_bound(_24854,_24856,_24858,_25000):-smallerthan(_24856,_24854,is(_24874,_24854-_24856,is(_24886,_24874/\1,or((_24886=:=0->_24858 is _24874>>1),_24858 is (_24874+1)>>1+1,_25000)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_lower_bound_3__1(mach); }
public static Operation exec_pred_lower_bound_3__1(Prolog mach){ mach.FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(fast_mu.posint1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_lower_bound_3__2(Prolog mach){ mach.FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(fast_mu.posint2,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_lower_bound_3__3(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(fast_mu.s_is,var4,Data.F(fast_mu.s2,var1.Deref(),var2.Deref()),Data.F(fast_mu.s_is,var5,Data.F(fast_mu.s5,var4.Deref(),fast_mu.posint1),Data.F(fast_mu.s_or,Data.F(fast_mu.s3,Data.F(fast_mu.s7,var5.Deref(),fast_mu.posint0),Data.F(fast_mu.s_is,var3.Deref(),Data.F(fast_mu.s8,var4.Deref(),fast_mu.posint1))),Data.F(fast_mu.s_is,var3.Deref(),Data.F(fast_mu.s1,Data.F(fast_mu.s8,Data.F(fast_mu.s1,var4.Deref(),fast_mu.posint1),fast_mu.posint1),fast_mu.posint1)),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


}


