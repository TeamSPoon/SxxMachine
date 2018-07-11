package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class mu /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("-") ;
final static Const s2 = Data.Intern(".") ;
final static Const s3 = Data.Intern(":-") ;
final static Const s_a = Data.Intern("a") ;
final static Const s_append = Data.Intern("append") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_i = Data.Intern("i") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_m = Data.Intern("m") ;
final static Const s_mu = Data.Intern("mu") ;
final static Const s_rule = Data.Intern("rule") ;
final static Const s_rule1 = Data.Intern("rule1") ;
final static Const s_rule2 = Data.Intern("rule2") ;
final static Const s_rule3 = Data.Intern("rule3") ;
final static Const s_rule4 = Data.Intern("rule4") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_theorem = Data.Intern("theorem") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_u = Data.Intern("u") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Int posint4 = Data.Number(4L) ;
final static Int posint5 = Data.Number(5L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_mu_0 = PredTable.Register("mu",0, new pred_mu_0());
final static Operation reg_theorem_3 = PredTable.Register("theorem",3, new pred_theorem_3());
final static Operation reg_rule_3 = PredTable.Register("rule",3, new pred_rule_3());
final static Operation reg_rule1_2 = PredTable.Register("rule1",2, new pred_rule1_2());
final static Operation reg_rule2_2 = PredTable.Register("rule2",2, new pred_rule2_2());
final static Operation reg_rule3_2 = PredTable.Register("rule3",2, new pred_rule3_2());
final static Operation reg_rule4_2 = PredTable.Register("rule4",2, new pred_rule4_2());
final static Operation reg_append_3 = PredTable.Register("append",3, new pred_append_3());
public static class pred_top_0 extends Code {

/*

top(_15040):-mu(_15040).


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
return (Operation)pred_mu_0::exec_static ;}
}


public static class pred_mu_0 extends Code {

/*

mu(_15152):-theorem([m,u,i,i,u],5,_15124,cut(1,_15152)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_mu_0__1(mach); }
public static Operation exec_pred_mu_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(mu.s2,mu.s_m,Data.F(mu.s2,mu.s_u,Data.F(mu.s2,mu.s_i,Data.F(mu.s2,mu.s_i,Data.F(mu.s2,mu.s_u,Const.Nil))))) ;
local_aregs[1] = mu.posint5 ;
local_aregs[2] = var1 ;
local_aregs[3] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_theorem_3::exec_static ;}
}


public static class pred_theorem_3 extends Code {

/*

theorem([m,i],_15294,[[a,m,i]],_15318):-call(_15318).
theorem(_15412,_15424,[[_15410|_15412]|_15418],_15518):-smallerthan(0,_15424,is(_15442,_15424-1,theorem(_15448,_15442,_15418,rule(_15410,_15448,_15412,_15518)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_theorem_3__1(mach); }
public static Operation exec_pred_theorem_3__1(Prolog mach){ mach.FillAlternative(pred_theorem_3::exec_pred_theorem_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,mu.s_m,Data.F(mu.s2,mu.s_i,Const.Nil)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(mu.s2,Data.F(mu.s2,mu.s_a,Data.F(mu.s2,mu.s_m,Data.F(mu.s2,mu.s_i,Const.Nil))),Const.Nil),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_theorem_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg2).Unify(Data.F(mu.s2,Data.F(mu.s2,var3,var1.Deref()),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = mu.posint0 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Data.F(mu.s_is,var5,Data.F(mu.s1,var2.Deref(),mu.posint1),Data.F(mu.s_theorem,var6,var5.Deref(),var4.Deref(),Data.F(mu.s_rule,var3.Deref(),var6.Deref(),var1.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


public static class pred_rule_3 extends Code {

/*

rule(1,_15818,_15820,_15866):-rule1(_15818,_15820,_15866).
rule(2,_15988,_15990,_16036):-rule2(_15988,_15990,_16036).
rule(3,_16158,_16160,_16206):-rule3(_16158,_16160,_16206).
rule(4,_16328,_16330,_16376):-rule4(_16328,_16330,_16376).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rule_3__1(mach); }
public static Operation exec_pred_rule_3__1(Prolog mach){ mach.FillAlternative(pred_rule_3::exec_pred_rule_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(mu.posint1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_rule1_2::exec_static ;}
public static Operation exec_pred_rule_3__2(Prolog mach){ mach.FillAlternative(pred_rule_3::exec_pred_rule_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(mu.posint2,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_rule2_2::exec_static ;}
public static Operation exec_pred_rule_3__3(Prolog mach){ mach.FillAlternative(pred_rule_3::exec_pred_rule_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(mu.posint3,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_rule3_2::exec_static ;}
public static Operation exec_pred_rule_3__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(mu.posint4,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_rule4_2::exec_static ;}
}


public static class pred_rule1_2 extends Code {

/*

rule1([i],[i,u],_16538):-call(_16538).
rule1([_16628|_16630],[_16628|_16636],_16682):-rule1(_16630,_16636,_16682).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rule1_2__1(mach); }
public static Operation exec_pred_rule1_2__1(Prolog mach){ mach.FillAlternative(pred_rule1_2::exec_pred_rule1_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(mu.s2,mu.s_i,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(mu.s2,mu.s_i,Data.F(mu.s2,mu.s_u,Const.Nil)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_rule1_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(mu.s2,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_rule1_2::exec_static ;}
}


public static class pred_rule2_2 extends Code {

/*

rule2([m|_16802],[m|_16808],_16856):-append(_16802,_16802,_16808,_16856).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rule2_2__1(mach); }
public static Operation exec_pred_rule2_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,mu.s_m,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(mu.s2,mu.s_m,var2),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_append_3::exec_static ;}
}


public static class pred_rule3_2 extends Code {

/*

rule3([i,i,i|_17008],[u|_17008],_17042):-call(_17042).
rule3([_17144|_17146],[_17144|_17152],_17198):-rule3(_17146,_17152,_17198).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rule3_2__1(mach); }
public static Operation exec_pred_rule3_2__1(Prolog mach){ mach.FillAlternative(pred_rule3_2::exec_pred_rule3_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,mu.s_i,Data.F(mu.s2,mu.s_i,Data.F(mu.s2,mu.s_i,var1))),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(mu.s2,mu.s_u,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_rule3_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(mu.s2,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_rule3_2::exec_static ;}
}


public static class pred_rule4_2 extends Code {

/*

rule4([u,u|_17336],_17336,_17364):-call(_17364).
rule4([_17472|_17474],[_17472|_17480],_17526):-rule4(_17474,_17480,_17526).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_rule4_2__1(mach); }
public static Operation exec_pred_rule4_2__1(Prolog mach){ mach.FillAlternative(pred_rule4_2::exec_pred_rule4_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,mu.s_u,Data.F(mu.s2,mu.s_u,var1)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_rule4_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(mu.s2,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_rule4_2::exec_static ;}
}


public static class pred_append_3 extends Code {

/*

append([],_17664,_17664,_17688):-call(_17688).
append([_17816|_17818],_17830,[_17816|_17824],_17880):-append(_17818,_17830,_17824,_17880).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_append_3__1(mach); }
public static Operation exec_pred_append_3__1(Prolog mach){ mach.FillAlternative(pred_append_3::exec_pred_append_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_append_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(mu.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(mu.s2,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_append_3::exec_static ;}
}


}


