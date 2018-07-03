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

top(_5470):-prover(_5470).


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

on_load_prover(_5570):-write(op(950,xfy,#),_5570).
on_load_prover(_5690):-write(op(850,xfy,&),_5690).
on_load_prover(_5810):-write(op(500,fx,+),_5810).
on_load_prover(_5930):-write(op(500,fx,-),_5930).


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
return (Operation)pred_write_1::exec_static ;}
public static Operation exec_pred_on_load_prover_0__2(Prolog mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(prover.s_op,prover.posint850,prover.s_xfy,prover.s2) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_write_1::exec_static ;}
public static Operation exec_pred_on_load_prover_0__3(Prolog mach){ mach.FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(prover.s_op,prover.posint500,prover.s_fx,prover.s3) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_write_1::exec_static ;}
public static Operation exec_pred_on_load_prover_0__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(prover.s_op,prover.posint500,prover.s_fx,prover.s4) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_write_1::exec_static ;}
}


public static class pred_prover_0 extends Code {

/*

prover(_6044):-problem(_6000,_6002,_6004,implies(_6002,_6004,fail(_6044))).
prover(_6238):-call(_6238).


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

problem(1,-a,+a,_6322):-call(_6322).
problem(2,+a,-a& -a,_6464):-call(_6464).
problem(3,-a,+to_be# -to_be,_6606):-call(_6606).
problem(4,-a& -a,-a,_6748):-call(_6748).
problem(5,-a,+b# -a,_6890):-call(_6890).
problem(6,-a& -b,-b& -a,_7042):-call(_7042).
problem(7,-a,-b# +b& -a,_7194):-call(_7194).
problem(8,-a# -b# +c,-b# -a# +c,_7366):-call(_7366).
problem(9,-a# +b,+b& -c# -a# +c,_7538):-call(_7538).
problem(10,(-a# +c)&(-b# +c),-a& -b# +c,_7720):-call(_7720).


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

implies(_7818,_7820,_7884):-opposite(_7820,_7826,add_conjunction(_7818,_7826,fs([],[],[],[]),_7884)).


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

opposite(_8066&_8068,_8072#_8074,_8138):-cut(1,opposite(_8066,_8072,opposite(_8068,_8074,_8138))).
opposite(_8318#_8320,_8324&_8326,_8390):-cut(1,opposite(_8318,_8324,opposite(_8320,_8326,_8390))).
opposite(+_8570,-_8570,_8614):-cut(1,_8614).
opposite(-_8694,+_8694,_8726):-call(_8726).


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

add_conjunction(_8822,_8824,_8826,_8898):-expand(_8822,_8826,_8834,expand(_8824,_8834,_8842,refute(_8842,_8898))).


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

expand(_9150,refuted,refuted,_9194):-cut(1,_9194).
expand(_9294&_9296,fs(_9300,_9302,_9304,_9306),refuted,_9372):-includes(_9300,_9294&_9296,cut(1,_9372)).
expand(_9522&_9524,fs(_9528,_9530,_9532,_9534),fs(_9528,_9530,_9532,_9534),_9610):-includes(_9530,_9522&_9524,cut(1,_9610)).
expand(_9760&_9762,fs(_9766,_9768,_9770,_9772),_9780,_9870):-cut(1,expand(_9760,fs(_9766,[_9760&_9762|_9768],_9770,_9772),_9810,expand(_9762,_9810,_9780,_9870))).
expand(_10098#_10100,fs(_10104,_10106,_10108,_10110),_10118,_10206):-cut(1,opposite(_10098#_10100,_10130,extend(_10130,_10104,_10106,_10134,fs(_10134,_10106,_10108,_10110),_10118,_10206))).
expand(+_10462,fs(_10466,_10468,_10470,_10472),_10480,_10550):-cut(1,extend(_10462,_10470,_10472,_10488,fs(_10466,_10468,_10488,_10472),_10480,_10550)).
expand(-_10756,fs(_10760,_10762,_10764,_10766),_10774,_10838):-extend(_10756,_10766,_10764,_10784,fs(_10760,_10762,_10764,_10784),_10774,_10838).


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

includes([_2064|_2066],_2064,_2074):-cut(1,_2074).
includes([_2098|_2100],_2102,_2110):-includes(_2100,_2102,_2110).


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

extend(_2134,_2136,_2138,_2140,_2142,refuted,_2150):-includes(_2138,_2134,cut(1,_2150)).
extend(_2188,_2190,_2192,_2190,_2194,_2194,_2202):-includes(_2190,_2188,cut(1,_2202)).
extend(_2242,_2244,_2246,[_2242|_2244],_2248,_2248,_2258):-call(_2258).


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

refute(refuted,_2288):-cut(1,_2288).
refute(fs([_2310&_2312|_2318],_2324,_2326,_2328),_2352):-opposite(_2310,_2330,opposite(_2312,_2332,unify(fs(_2318,_2324,_2326,_2328),_2344,add_conjunction(_2330,_2312,_2344,add_conjunction(_2330,_2332,_2344,add_conjunction(_2310,_2332,_2344,_2352)))))).


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


