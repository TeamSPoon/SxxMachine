package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class poly_10 /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("*") ;
final static Const s2 = Data.Intern("+") ;
final static Const s3 = Data.Intern("-") ;
final static Const s4 = Data.Intern(".") ;
final static Const s5 = Data.Intern(":-") ;
final static Const s6 = Data.Intern("<<") ;
final static Const s7 = Data.Intern(">>") ;
final static Const s_add_to_order_zero_term = Data.Intern("add_to_order_zero_term") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_less_than = Data.Intern("less_than") ;
final static Const s_mul_through = Data.Intern("mul_through") ;
final static Const s_on_load_poly_10 = Data.Intern("on_load_poly_10") ;
final static Const s_op = Data.Intern("op") ;
final static Const s_poly = Data.Intern("poly") ;
final static Const s_poly_10 = Data.Intern("poly_10") ;
final static Const s_poly_add = Data.Intern("poly_add") ;
final static Const s_poly_exp = Data.Intern("poly_exp") ;
final static Const s_poly_mul = Data.Intern("poly_mul") ;
final static Const s_single_term_mul = Data.Intern("single_term_mul") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_term = Data.Intern("term") ;
final static Const s_term_add = Data.Intern("term_add") ;
final static Const s_term_mul = Data.Intern("term_mul") ;
final static Const s_test_poly = Data.Intern("test_poly") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_write = Data.Intern("write") ;
final static Const s_x = Data.Intern("x") ;
final static Const s_xfx = Data.Intern("xfx") ;
final static Const s_y = Data.Intern("y") ;
final static Const s_z = Data.Intern("z") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint10 = Data.Number(10L) ;
final static Int posint700 = Data.Number(700L) ;
final static Operation reg_on_load_poly_10_0 = PredTable.Register("on_load_poly_10",0, new pred_on_load_poly_10_0());
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_poly_10_0 = PredTable.Register("poly_10",0, new pred_poly_10_0());
final static Operation reg_test_poly_1 = PredTable.Register("test_poly",1, new pred_test_poly_1());
final static Operation reg_less_than_2 = PredTable.Register("less_than",2, new pred_less_than_2());
final static Operation reg_poly_add_3 = PredTable.Register("poly_add",3, new pred_poly_add_3());
final static Operation reg_term_add_3 = PredTable.Register("term_add",3, new pred_term_add_3());
final static Operation reg_add_to_order_zero_term_3 = PredTable.Register("add_to_order_zero_term",3, new pred_add_to_order_zero_term_3());
final static Operation reg_poly_exp_3 = PredTable.Register("poly_exp",3, new pred_poly_exp_3());
final static Operation reg_poly_mul_3 = PredTable.Register("poly_mul",3, new pred_poly_mul_3());
final static Operation reg_term_mul_3 = PredTable.Register("term_mul",3, new pred_term_mul_3());
final static Operation reg_single_term_mul_3 = PredTable.Register("single_term_mul",3, new pred_single_term_mul_3());
final static Operation reg_mul_through_3 = PredTable.Register("mul_through",3, new pred_mul_through_3());
public static class pred_on_load_poly_10_0 extends Code {

/*

on_load_poly_10(_19898):-write(op(700,xfx,less_than),_19898).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_on_load_poly_10_0__1(mach); }
public static Operation exec_pred_on_load_poly_10_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(poly_10.s_op,poly_10.posint700,poly_10.s_xfx,poly_10.s_less_than) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation) poly_10.s_write.FindProc(1) ;}
}


public static class pred_top_0 extends Code {

/*

top(_19980):-poly_10(_19980).


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
return (Operation)pred_poly_10_0::exec_static ;}
}


public static class pred_poly_10_0 extends Code {

/*

poly_10(_20072):-test_poly(_20036,poly_exp(10,_20036,_20044,_20072)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_poly_10_0__1(mach); }
public static Operation exec_pred_poly_10_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = Data.F(poly_10.s_poly_exp,poly_10.posint10,var1.Deref(),var2,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_test_poly_1::exec_static ;}
}


public static class pred_test_poly_1 extends Code {

/*

test_poly(_20212,_20328):-poly_add(poly(x,[term(0,1),term(1,1)]),poly(y,[term(1,1)]),_20268,poly_add(poly(z,[term(1,1)]),_20268,_20212,_20328)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_test_poly_1__1(mach); }
public static Operation exec_pred_test_poly_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(poly_10.s_poly,poly_10.s_x,Data.F(poly_10.s4,Data.F(poly_10.s_term,poly_10.posint0,poly_10.posint1),Data.F(poly_10.s4,Data.F(poly_10.s_term,poly_10.posint1,poly_10.posint1),Const.Nil))) ;
local_aregs[1] = Data.F(poly_10.s_poly,poly_10.s_y,Data.F(poly_10.s4,Data.F(poly_10.s_term,poly_10.posint1,poly_10.posint1),Const.Nil)) ;
local_aregs[2] = var2 ;
local_aregs[3] = Data.F(poly_10.s_poly_add,Data.F(poly_10.s_poly,poly_10.s_z,Data.F(poly_10.s4,Data.F(poly_10.s_term,poly_10.posint1,poly_10.posint1),Const.Nil)),var2.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_poly_add_3::exec_static ;}
}


public static class pred_less_than_2 extends Code {

/*

less_than(x,y,_20534):-call(_20534).
less_than(y,z,_20648):-call(_20648).
less_than(x,z,_20762):-call(_20762).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_less_than_2__1(mach); }
public static Operation exec_pred_less_than_2__1(Prolog mach){ mach.FillAlternative(pred_less_than_2::exec_pred_less_than_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(poly_10.s_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(poly_10.s_y,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_less_than_2__2(Prolog mach){ mach.FillAlternative(pred_less_than_2::exec_pred_less_than_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(poly_10.s_y,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(poly_10.s_z,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_less_than_2__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(poly_10.s_x,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(poly_10.s_z,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_poly_add_3 extends Code {

/*

poly_add(poly(_20852,_20854),poly(_20852,_20860),poly(_20852,_20866),_20928):-cut(1,term_add(_20854,_20860,_20866,_20928)).
poly_add(poly(_21080,_21082),poly(_21086,_21088),poly(_21080,_21094),_21174):-less_than(_21080,_21086,cut(1,add_to_order_zero_term(_21082,poly(_21086,_21088),_21094,_21174))).
poly_add(_21388,poly(_21376,_21378),poly(_21376,_21384),_21446):-cut(1,add_to_order_zero_term(_21378,_21388,_21384,_21446)).
poly_add(poly(_21598,_21600),_21612,poly(_21598,_21606),_21668):-cut(1,add_to_order_zero_term(_21600,_21612,_21606,_21668)).
poly_add(_21820,_21822,_21824,_21876):-is(_21824,_21820+_21822,_21876).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_poly_add_3__1(mach); }
public static Operation exec_pred_poly_add_3__1(Prolog mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(poly_10.s_poly,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s_poly,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_term_add,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_poly_add_3__2(Prolog mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__3) ;
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
if (!( (areg0).Unify(Data.F(poly_10.s_poly,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s_poly,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(poly_10.s_add_to_order_zero_term,var2.Deref(),Data.F(poly_10.s_poly,var3.Deref(),var4.Deref()),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_less_than_2::exec_static ;}
public static Operation exec_pred_poly_add_3__3(Prolog mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s_poly,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var2.Deref(),var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_add_to_order_zero_term,var3.Deref(),var1.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_poly_add_3__4(Prolog mach){ mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(poly_10.s_poly,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_add_to_order_zero_term,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_poly_add_3__5(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(poly_10.s2,var1.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) poly_10.s_is.FindProc(2) ;}
}


public static class pred_term_add_3 extends Code {

/*

term_add([],_22010,_22010,_22052):-cut(1,_22052).
term_add(_22146,[],_22146,_22190):-cut(1,_22190).
term_add([term(_22284,_22286)|_22292],[term(_22284,_22298)|_22304],[term(_22284,_22310)|_22316],_22392):-cut(1,poly_add(_22286,_22298,_22310,term_add(_22292,_22304,_22316,_22392))).
term_add([term(_22614,_22616)|_22622],[term(_22626,_22628)|_22634],[term(_22614,_22616)|_22646],_22732):-smallerthan(_22614,_22626,cut(1,term_add(_22622,[term(_22626,_22628)|_22634],_22646,_22732))).
term_add(_22970,[term(_22946,_22948)|_22954],[term(_22946,_22948)|_22966],_23022):-term_add(_22970,_22954,_22966,_23022).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_term_add_3__1(mach); }
public static Operation exec_pred_term_add_3__1(Prolog mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_term_add_3__2(Prolog mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_term_add_3__3(Prolog mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__4) ;
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
if (!( (areg0).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1.Deref(),var4),var5),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1.Deref(),var6),var7),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_poly_add,var2.Deref(),var4.Deref(),var6.Deref(),Data.F(poly_10.s_term_add,var3.Deref(),var5.Deref(),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_term_add_3__4(Prolog mach){ mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__5) ;
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
if (!( (areg0).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var4,var5),var6),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1.Deref(),var2.Deref()),var7),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = mach.HC(Data.F(poly_10.s_term_add,var3.Deref(),Data.F(poly_10.s4,Data.F(poly_10.s_term,var4.Deref(),var5.Deref()),var6.Deref()),var7.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
public static Operation exec_pred_term_add_3__5(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg1).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var2.Deref(),var3.Deref()),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_term_add_3::exec_static ;}
}


public static class pred_add_to_order_zero_term_3 extends Code {

/*

add_to_order_zero_term([term(0,_23176)|_23182],_23200,[term(0,_23188)|_23182],_23256):-cut(1,poly_add(_23176,_23200,_23188,_23256)).
add_to_order_zero_term(_23428,_23422,[term(0,_23422)|_23428],_23458):-call(_23458).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_add_to_order_zero_term_3__1(mach); }
public static Operation exec_pred_add_to_order_zero_term_3__1(Prolog mach){ mach.FillAlternative(pred_add_to_order_zero_term_3::exec_pred_add_to_order_zero_term_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,poly_10.posint0,var1),var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,poly_10.posint0,var4),var2.Deref()),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_poly_add,var1.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_add_to_order_zero_term_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,poly_10.posint0,var2.Deref()),var1.Deref()),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_poly_exp_3 extends Code {

/*

poly_exp(0,_23582,1,_23624):-cut(1,_23624).
poly_exp(_23730,_23732,_23734,_23838):-is(_23744,_23730>>1,is(_23730,_23744<<1,cut(1,poly_exp(_23744,_23732,_23766,poly_mul(_23766,_23766,_23734,_23838))))).
poly_exp(_24172,_24174,_24176,_24256):-is(_24186,_24172-1,poly_exp(_24186,_24174,_24196,poly_mul(_24174,_24196,_24176,_24256))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_poly_exp_3__1(mach); }
public static Operation exec_pred_poly_exp_3__1(Prolog mach){ mach.FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(poly_10.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(poly_10.posint1,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_poly_exp_3__2(Prolog mach){ mach.FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__3) ;
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
local_aregs[0] = var4 ;
local_aregs[1] = Data.F(poly_10.s7,var1.Deref(),poly_10.posint1) ;
local_aregs[2] = Data.F(poly_10.s_is,var1.Deref(),Data.F(poly_10.s6,var4.Deref(),poly_10.posint1),mach.HC(Data.F(poly_10.s_poly_exp,var4.Deref(),var2.Deref(),var5,Data.F(poly_10.s_poly_mul,var5.Deref(),var5.Deref(),var3.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) poly_10.s_is.FindProc(2) ;}
public static Operation exec_pred_poly_exp_3__3(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var4 ;
local_aregs[1] = Data.F(poly_10.s3,var1.Deref(),poly_10.posint1) ;
local_aregs[2] = Data.F(poly_10.s_poly_exp,var4.Deref(),var2.Deref(),var5,Data.F(poly_10.s_poly_mul,var2.Deref(),var5.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) poly_10.s_is.FindProc(2) ;}
}


public static class pred_poly_mul_3 extends Code {

/*

poly_mul(poly(_24534,_24536),poly(_24534,_24542),poly(_24534,_24548),_24610):-cut(1,term_mul(_24536,_24542,_24548,_24610)).
poly_mul(poly(_24786,_24788),poly(_24792,_24794),poly(_24786,_24800),_24880):-less_than(_24786,_24792,cut(1,mul_through(_24788,poly(_24792,_24794),_24800,_24880))).
poly_mul(_25118,poly(_25106,_25108),poly(_25106,_25114),_25176):-cut(1,mul_through(_25108,_25118,_25114,_25176)).
poly_mul(poly(_25352,_25354),_25366,poly(_25352,_25360),_25422):-cut(1,mul_through(_25354,_25366,_25360,_25422)).
poly_mul(_25598,_25600,_25602,_25654):-is(_25602,_25598*_25600,_25654).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_poly_mul_3__1(mach); }
public static Operation exec_pred_poly_mul_3__1(Prolog mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(poly_10.s_poly,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s_poly,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_term_mul,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_poly_mul_3__2(Prolog mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__3) ;
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
if (!( (areg0).Unify(Data.F(poly_10.s_poly,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s_poly,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(poly_10.s_mul_through,var2.Deref(),Data.F(poly_10.s_poly,var3.Deref(),var4.Deref()),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_less_than_2::exec_static ;}
public static Operation exec_pred_poly_mul_3__3(Prolog mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s_poly,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var2.Deref(),var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_mul_through,var3.Deref(),var1.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_poly_mul_3__4(Prolog mach){ mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(poly_10.s_poly,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s_poly,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(poly_10.s_mul_through,var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_poly_mul_3__5(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(poly_10.s1,var1.Deref(),var2.Deref()) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) poly_10.s_is.FindProc(2) ;}
}


public static class pred_term_mul_3 extends Code {

/*

term_mul([],_25812,[],_25854):-cut(1,_25854).
term_mul(_25972,[],[],_26016):-cut(1,_26016).
term_mul([_26134|_26136],_26142,_26144,_26220):-single_term_mul(_26142,_26134,_26152,term_mul(_26136,_26142,_26160,term_add(_26152,_26160,_26144,_26220))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_term_mul_3__1(mach); }
public static Operation exec_pred_term_mul_3__1(Prolog mach){ mach.FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_term_mul_3__2(Prolog mach){ mach.FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_term_mul_3__3(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(poly_10.s4,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(poly_10.s_term_mul,var2.Deref(),var3.Deref(),var6,Data.F(poly_10.s_term_add,var5.Deref(),var6.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_single_term_mul_3::exec_static ;}
}


public static class pred_single_term_mul_3 extends Code {

/*

single_term_mul([],_26526,[],_26568):-cut(1,_26568).
single_term_mul([term(_26692,_26694)|_26700],term(_26704,_26706),[term(_26710,_26712)|_26718],_26812):-is(_26710,_26692+_26704,poly_mul(_26694,_26706,_26712,single_term_mul(_26700,term(_26704,_26706),_26718,_26812))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_single_term_mul_3__1(mach); }
public static Operation exec_pred_single_term_mul_3__1(Prolog mach){ mach.FillAlternative(pred_single_term_mul_3::exec_pred_single_term_mul_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_single_term_mul_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(poly_10.s_term,var4,var5),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var6,var7),var8),mach))) return Prolog.Fail0 ;
local_aregs[0] = var6.Deref() ;
local_aregs[1] = Data.F(poly_10.s2,var1.Deref(),var4.Deref()) ;
local_aregs[2] = Data.F(poly_10.s_poly_mul,var2.Deref(),var5.Deref(),var7.Deref(),Data.F(poly_10.s_single_term_mul,var3.Deref(),Data.F(poly_10.s_term,var4.Deref(),var5.Deref()),var8.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation) poly_10.s_is.FindProc(2) ;}
}


public static class pred_mul_through_3 extends Code {

/*

mul_through([],_27110,[],_27152):-cut(1,_27152).
mul_through([term(_27282,_27284)|_27290],_27308,[term(_27282,_27296)|_27302],_27372):-poly_mul(_27284,_27308,_27296,mul_through(_27290,_27308,_27302,_27372)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_mul_through_3__1(mach); }
public static Operation exec_pred_mul_through_3__1(Prolog mach){ mach.FillAlternative(pred_mul_through_3::exec_pred_mul_through_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_mul_through_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1,var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(poly_10.s4,Data.F(poly_10.s_term,var1.Deref(),var5),var6),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = Data.F(poly_10.s_mul_through,var3.Deref(),var4.Deref(),var6.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_poly_mul_3::exec_static ;}
}


}


