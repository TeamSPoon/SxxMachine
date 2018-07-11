package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class prover /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("#") ;
final static Const s2 = Data.Intern("&") ;
final static Const s3 = Data.Intern("+") ;
final static Const s4 = Data.Intern("-") ;
final static Const s5 = Data.Intern(".") ;
final static Const s6 = Data.Intern(":-") ;
final static Const s_a = Data.Intern("a") ;
final static Const s_add_conjunction = Data.Intern("add_conjunction") ;
final static Const s_b = Data.Intern("b") ;
final static Const s_c = Data.Intern("c") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_expand = Data.Intern("expand") ;
final static Const s_extend = Data.Intern("extend") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_fs = Data.Intern("fs") ;
final static Const s_fx = Data.Intern("fx") ;
final static Const s_implies = Data.Intern("implies") ;
final static Const s_includes = Data.Intern("includes") ;
final static Const s_on_load_prover = Data.Intern("on_load_prover") ;
final static Const s_op = Data.Intern("op") ;
final static Const s_opposite = Data.Intern("opposite") ;
final static Const s_problem = Data.Intern("problem") ;
final static Const s_prover = Data.Intern("prover") ;
final static Const s_refute = Data.Intern("refute") ;
final static Const s_refuted = Data.Intern("refuted") ;
final static Const s_to_be = Data.Intern("to_be") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_write = Data.Intern("write") ;
final static Const s_xfy = Data.Intern("xfy") ;
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
final static Int posint500 = Data.Number(500L) ;
final static Int posint850 = Data.Number(850L) ;
final static Int posint950 = Data.Number(950L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_on_load_prover_0 = PredTable.Register("on_load_prover",0, new pred_on_load_prover_0());
final static Operation reg_prover_0 = PredTable.Register("prover",0, new pred_prover_0());
final static Operation reg_problem_3 = PredTable.Register("problem",3, new pred_problem_3());
final static Operation reg_implies_2 = PredTable.Register("implies",2, new pred_implies_2());
final static Operation reg_opposite_2 = PredTable.Register("opposite",2, new pred_opposite_2());
final static Operation reg_add_conjunction_3 = PredTable.Register("add_conjunction",3, new pred_add_conjunction_3());
final static Operation reg_expand_3 = PredTable.Register("expand",3, new pred_expand_3());
final static Operation reg_includes_2 = PredTable.Register("includes",2, new pred_includes_2());
final static Operation reg_extend_6 = PredTable.Register("extend",6, new pred_extend_6());
final static Operation reg_refute_1 = PredTable.Register("refute",1, new pred_refute_1());
public static class pred_top_0 extends Code {

/*

top(_24640):-prover(_24640).


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
return (Operation)pred_prover_0::exec_static ;}
}


public static class pred_on_load_prover_0 extends Code {

/*

on_load_prover(_24740):-write(op(950,xfy,#),_24740).
on_load_prover(_24860):-write(op(850,xfy,&),_24860).
on_load_prover(_24980):-write(op(500,fx,+),_24980).
on_load_prover(_25100):-write(op(500,fx,-),_25100).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_on_load_prover_0__1(mach); }
public static Operation exec_pred_on_load_prover_0__1(Prolog mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(prover.s_op,prover.posint950,prover.s_xfy,prover.s1) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) prover.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_prover_0__2(Prolog mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(prover.s_op,prover.posint850,prover.s_xfy,prover.s2) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) prover.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_prover_0__3(Prolog mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(prover.s_op,prover.posint500,prover.s_fx,prover.s3) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) prover.s_write.FindProc(1) ;}
public static Operation exec_pred_on_load_prover_0__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(prover.s_op,prover.posint500,prover.s_fx,prover.s4) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) prover.s_write.FindProc(1) ;}
}


public static class pred_prover_0 extends Code {

/*

prover(_25214):-problem(_25170,_25172,_25174,implies(_25172,_25174,fail(_25214))).
prover(_25408):-call(_25408).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_prover_0__1(mach); }
public static Operation exec_pred_prover_0__1(Prolog mach){ mach.FillAlternative(pred_prover_0::exec_pred_prover_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = var2 ;
local_aregs[2] = var3 ;
local_aregs[3] = Data.F(prover.s_implies,var2.Deref(),var3.Deref(),Data.F(prover.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_problem_3::exec_static ;}
public static Operation exec_pred_prover_0__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
}


public static class pred_problem_3 extends Code {

/*

problem(1,-a,+a,_25492):-call(_25492).
problem(2,+a,-a& -a,_25634):-call(_25634).
problem(3,-a,+to_be# -to_be,_25776):-call(_25776).
problem(4,-a& -a,-a,_25918):-call(_25918).
problem(5,-a,+b# -a,_26060):-call(_26060).
problem(6,-a& -b,-b& -a,_26212):-call(_26212).
problem(7,-a,-b# +b& -a,_26364):-call(_26364).
problem(8,-a# -b# +c,-b# -a# +c,_26536):-call(_26536).
problem(9,-a# +b,+b& -c# -a# +c,_26708):-call(_26708).
problem(10,(-a# +c)&(-b# +c),-a& -b# +c,_26890):-call(_26890).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_problem_3__1(mach); }
public static Operation exec_pred_problem_3__1(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s4,prover.s_a),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s3,prover.s_a),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__2(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint2,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s3,prover.s_a),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s2,Data.F(prover.s4,prover.s_a),Data.F(prover.s4,prover.s_a)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__3(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint3,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s4,prover.s_a),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s1,Data.F(prover.s3,prover.s_to_be),Data.F(prover.s4,prover.s_to_be)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__4(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint4,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s2,Data.F(prover.s4,prover.s_a),Data.F(prover.s4,prover.s_a)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s4,prover.s_a),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__5(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint5,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s4,prover.s_a),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s1,Data.F(prover.s3,prover.s_b),Data.F(prover.s4,prover.s_a)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__6(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint6,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s2,Data.F(prover.s4,prover.s_a),Data.F(prover.s4,prover.s_b)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s2,Data.F(prover.s4,prover.s_b),Data.F(prover.s4,prover.s_a)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__7(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint7,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s4,prover.s_a),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s1,Data.F(prover.s4,prover.s_b),Data.F(prover.s2,Data.F(prover.s3,prover.s_b),Data.F(prover.s4,prover.s_a))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__8(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint8,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s1,Data.F(prover.s4,prover.s_a),Data.F(prover.s1,Data.F(prover.s4,prover.s_b),Data.F(prover.s3,prover.s_c))),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s1,Data.F(prover.s4,prover.s_b),Data.F(prover.s1,Data.F(prover.s4,prover.s_a),Data.F(prover.s3,prover.s_c))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__9(Prolog mach){ mach.FillAlternative(pred_problem_3::exec_pred_problem_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint9,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s1,Data.F(prover.s4,prover.s_a),Data.F(prover.s3,prover.s_b)),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s1,Data.F(prover.s2,Data.F(prover.s3,prover.s_b),Data.F(prover.s4,prover.s_c)),Data.F(prover.s1,Data.F(prover.s4,prover.s_a),Data.F(prover.s3,prover.s_c))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_problem_3__10(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.posint10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s2,Data.F(prover.s1,Data.F(prover.s4,prover.s_a),Data.F(prover.s3,prover.s_c)),Data.F(prover.s1,Data.F(prover.s4,prover.s_b),Data.F(prover.s3,prover.s_c))),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s1,Data.F(prover.s2,Data.F(prover.s4,prover.s_a),Data.F(prover.s4,prover.s_b)),Data.F(prover.s3,prover.s_c)),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_implies_2 extends Code {

/*

implies(_26988,_26990,_27054):-opposite(_26990,_26996,add_conjunction(_26988,_26996,fs([],[],[],[]),_27054)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_implies_2__1(mach); }
public static Operation exec_pred_implies_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = Data.F(prover.s_add_conjunction,var1.Deref(),var3.Deref(),Data.F(prover.s_fs,Const.Nil,Const.Nil,Const.Nil,Const.Nil),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_opposite_2::exec_static ;}
}


public static class pred_opposite_2 extends Code {

/*

opposite(_27236&_27238,_27242#_27244,_27308):-cut(1,opposite(_27236,_27242,opposite(_27238,_27244,_27308))).
opposite(_27488#_27490,_27494&_27496,_27560):-cut(1,opposite(_27488,_27494,opposite(_27490,_27496,_27560))).
opposite(+_27740,-_27740,_27784):-cut(1,_27784).
opposite(-_27864,+_27864,_27896):-call(_27896).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_opposite_2__1(mach); }
public static Operation exec_pred_opposite_2__1(Prolog mach){ mach.FillAlternative(pred_opposite_2::exec_pred_opposite_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(prover.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s1,var3,var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(prover.s_opposite,var1.Deref(),var3.Deref(),Data.F(prover.s_opposite,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opposite_2__2(Prolog mach){ mach.FillAlternative(pred_opposite_2::exec_pred_opposite_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(prover.s1,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s2,var3,var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(prover.s_opposite,var1.Deref(),var3.Deref(),Data.F(prover.s_opposite,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opposite_2__3(Prolog mach){ mach.FillAlternative(pred_opposite_2::exec_pred_opposite_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(prover.s3,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s4,var1.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_opposite_2__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(prover.s4,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s3,var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_add_conjunction_3 extends Code {

/*

add_conjunction(_27992,_27994,_27996,_28068):-expand(_27992,_27996,_28004,expand(_27994,_28004,_28012,refute(_28012,_28068))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_add_conjunction_3__1(mach); }
public static Operation exec_pred_add_conjunction_3__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(prover.s_expand,var2.Deref(),var4.Deref(),var5,Data.F(prover.s_refute,var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_expand_3::exec_static ;}
}


public static class pred_expand_3 extends Code {

/*

expand(_28320,refuted,refuted,_28364):-cut(1,_28364).
expand(_28464&_28466,fs(_28470,_28472,_28474,_28476),refuted,_28542):-includes(_28470,_28464&_28466,cut(1,_28542)).
expand(_28692&_28694,fs(_28698,_28700,_28702,_28704),fs(_28698,_28700,_28702,_28704),_28780):-includes(_28700,_28692&_28694,cut(1,_28780)).
expand(_28930&_28932,fs(_28936,_28938,_28940,_28942),_28950,_29040):-cut(1,expand(_28930,fs(_28936,[_28930&_28932|_28938],_28940,_28942),_28980,expand(_28932,_28980,_28950,_29040))).
expand(_29268#_29270,fs(_29274,_29276,_29278,_29280),_29288,_29376):-cut(1,opposite(_29268#_29270,_29300,extend(_29300,_29274,_29276,_29304,fs(_29304,_29276,_29278,_29280),_29288,_29376))).
expand(+_29632,fs(_29636,_29638,_29640,_29642),_29650,_29720):-cut(1,extend(_29632,_29640,_29642,_29658,fs(_29636,_29638,_29658,_29642),_29650,_29720)).
expand(-_29926,fs(_29930,_29932,_29934,_29936),_29944,_30008):-extend(_29926,_29936,_29934,_29954,fs(_29930,_29932,_29934,_29954),_29944,_30008).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_expand_3__1(mach); }
public static Operation exec_pred_expand_3__1(Prolog mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(prover.s_refuted,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(prover.s_refuted,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_expand_3__2(Prolog mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__3) ;
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
if (!( (areg0).Unify(Data.F(prover.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s_fs,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(prover.s_refuted,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(prover.s2,var1.Deref(),var2.Deref()) ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_includes_2::exec_static ;}
public static Operation exec_pred_expand_3__3(Prolog mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__4) ;
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
if (!( (areg0).Unify(Data.F(prover.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s_fs,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(prover.s_fs,var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = Data.F(prover.s2,var1.Deref(),var2.Deref()) ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_includes_2::exec_static ;}
public static Operation exec_pred_expand_3__4(Prolog mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg0).Unify(Data.F(prover.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s_fs,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(prover.s_expand,var1.Deref(),Data.F(prover.s_fs,var3.Deref(),Data.F(prover.s5,Data.F(prover.s2,var1.Deref(),var2.Deref()),var4.Deref()),var5.Deref(),var6.Deref()),var8,Data.F(prover.s_expand,var2.Deref(),var8.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_expand_3__5(Prolog mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg0).Unify(Data.F(prover.s1,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s_fs,var3,var4,var5,var6),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var7,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(prover.s_opposite,Data.F(prover.s1,var1.Deref(),var2.Deref()),var8,Data.F(prover.s_extend,var8.Deref(),var3.Deref(),var4.Deref(),var9,Data.F(prover.s_fs,var9.Deref(),var4.Deref(),var5.Deref(),var6.Deref()),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_expand_3__6(Prolog mach){ mach.FillAlternative(pred_expand_3::exec_pred_expand_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg0).Unify(Data.F(prover.s3,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s_fs,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(prover.s_extend,var1.Deref(),var4.Deref(),var5.Deref(),var7,Data.F(prover.s_fs,var2.Deref(),var3.Deref(),var7.Deref(),var5.Deref()),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_expand_3__7(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg0).Unify(Data.F(prover.s4,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(prover.s_fs,var2,var3,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = Data.F(prover.s_fs,var2.Deref(),var3.Deref(),var4.Deref(),var7.Deref()) ;
local_aregs[5] = var6.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_extend_6::exec_static ;}
}


public static class pred_includes_2 extends Code {

/*

includes([_30208|_30210],_30208,_30250):-cut(1,_30250).
includes([_30348|_30350],_30356,_30396):-includes(_30350,_30356,_30396).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_includes_2__1(mach); }
public static Operation exec_pred_includes_2__1(Prolog mach){ mach.FillAlternative(pred_includes_2::exec_pred_includes_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(prover.s5,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_includes_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(prover.s5,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_includes_2::exec_static ;}
}


public static class pred_extend_6 extends Code {

/*

extend(_30538,_30540,_30542,_30544,_30546,refuted,_30618):-includes(_30542,_30538,cut(1,_30618)).
extend(_30804,_30806,_30808,_30806,_30812,_30812,_30884):-includes(_30806,_30804,cut(1,_30884)).
extend(_31070,_31072,_31080,[_31070|_31072],_31084,_31084,_31108):-call(_31108).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_extend_6__1(mach); }
public static Operation exec_pred_extend_6__1(Prolog mach){ mach.FillAlternative(pred_extend_6::exec_pred_extend_6__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
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
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(prover.s_refuted,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_includes_2::exec_static ;}
public static Operation exec_pred_extend_6__2(Prolog mach){ mach.FillAlternative(pred_extend_6::exec_pred_extend_6__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
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
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_includes_2::exec_static ;}
public static Operation exec_pred_extend_6__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
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
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(prover.s5,var1.Deref(),var2.Deref()),mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var4.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_refute_1 extends Code {

/*

refute(refuted,_31312):-cut(1,_31312).
refute(fs([_31414&_31416|_31422],_31428,_31430,_31432),_31546):-opposite(_31414,_31442,opposite(_31416,_31448,unify(fs(_31422,_31428,_31430,_31432),_31462,add_conjunction(_31442,_31416,_31462,add_conjunction(_31442,_31448,_31462,add_conjunction(_31414,_31448,_31462,_31546)))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_refute_1__1(mach); }
public static Operation exec_pred_refute_1__1(Prolog mach){ mach.FillAlternative(pred_refute_1::exec_pred_refute_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(prover.s_refuted,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
public static Operation exec_pred_refute_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
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
if (!( (areg0).Unify(Data.F(prover.s_fs,Data.F(prover.s5,Data.F(prover.s2,var1,var2),var3),var4,var5,var6),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var7 ;
local_aregs[2] = Data.F(prover.s_opposite,var2.Deref(),var8,Data.F(prover.s_unify,Data.F(prover.s_fs,var3.Deref(),var4.Deref(),var5.Deref(),var6.Deref()),var9,Data.F(prover.s_add_conjunction,var7.Deref(),var2.Deref(),var9.Deref(),Data.F(prover.s_add_conjunction,var7.Deref(),var8.Deref(),var9.Deref(),Data.F(prover.s_add_conjunction,var1.Deref(),var8.Deref(),var9.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_opposite_2::exec_static ;}
}


}


