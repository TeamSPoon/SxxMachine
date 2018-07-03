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

top(_5404):-mu(_5404).


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

mu(_5516):-theorem([m,u,i,i,u],5,_5488,cut(1,_5516)).


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

theorem([m,i],_5658,[[a,m,i]],_5682):-call(_5682).
theorem(_5776,_5788,[[_5774|_5776]|_5782],_5882):-smallerthan(0,_5788,is(_5806,_5788-1,theorem(_5812,_5806,_5782,rule(_5774,_5812,_5776,_5882)))).


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

rule(1,_6182,_6184,_6230):-rule1(_6182,_6184,_6230).
rule(2,_6352,_6354,_6400):-rule2(_6352,_6354,_6400).
rule(3,_6522,_6524,_6570):-rule3(_6522,_6524,_6570).
rule(4,_6692,_6694,_6740):-rule4(_6692,_6694,_6740).


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

rule1([i],[i,u],_6902):-call(_6902).
rule1([_6992|_6994],[_6992|_7000],_7046):-rule1(_6994,_7000,_7046).


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

rule2([m|_7166],[m|_7172],_7220):-append(_7166,_7166,_7172,_7220).


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

rule3([i,i,i|_7372],[u|_7372],_7406):-call(_7406).
rule3([_7508|_7510],[_7508|_7516],_7562):-rule3(_7510,_7516,_7562).


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

rule4([u,u|_7700],_7700,_7728):-call(_7728).
rule4([_7836|_7838],[_7836|_7844],_7890):-rule4(_7838,_7844,_7890).


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

append([],_8028,_8028,_8052):-call(_8052).
append([_8180|_8182],_8194,[_8180|_8188],_8244):-append(_8182,_8194,_8188,_8244).


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


