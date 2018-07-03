package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class queens_8 /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("+") ;
final static Const s2 = Data.Intern("-") ;
final static Const s3 = Data.Intern(".") ;
final static Const s4 = Data.Intern(":-") ;
final static Const s5 = Data.Intern("=\\=") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_not_attack = Data.Intern("not_attack") ;
final static Const s_queens = Data.Intern("queens") ;
final static Const s_range = Data.Intern("range") ;
final static Const s_select = Data.Intern("select") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_top = Data.Intern("top") ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint8 = Data.Number(8L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_queens_2 = PredTable.Register("queens",2, new pred_queens_2());
final static Operation reg_queens_3 = PredTable.Register("queens",3, new pred_queens_3());
final static Operation reg_not_attack_2 = PredTable.Register("not_attack",2, new pred_not_attack_2());
final static Operation reg_not_attack_3 = PredTable.Register("not_attack",3, new pred_not_attack_3());
final static Operation reg_select_3 = PredTable.Register("select",3, new pred_select_3());
final static Operation reg_range_3 = PredTable.Register("range",3, new pred_range_3());
public static class pred_top_0 extends Code {

/*

top(_10276):-queens(8,_10248,fail(_10276)).
top(_10394):-call(_10394).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_top_0__1(mach); }
public static Operation exec_pred_top_0__1(Prolog mach){ mach.FillAlternative(pred_top_0::exec_pred_top_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = queens_8.posint8 ;
local_aregs[1] = var1 ;
local_aregs[2] = Data.F(queens_8.s_fail,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_queens_2::exec_static ;}
public static Operation exec_pred_top_0__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
}


public static class pred_queens_2 extends Code {

/*

queens(_10432,_10434,_10490):-range(1,_10432,_10442,queens(_10442,[],_10434,_10490)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_queens_2__1(mach); }
public static Operation exec_pred_queens_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = queens_8.posint1 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3 ;
local_aregs[3] = Data.F(queens_8.s_queens,var3.Deref(),Const.Nil,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_range_3::exec_static ;}
}


public static class pred_queens_3 extends Code {

/*

queens([],_10670,_10670,_10694):-call(_10694).
queens(_10786,_10788,_10790,_10870):-select(_10786,_10796,_10798,not_attack(_10788,_10798,queens(_10796,[_10798|_10788],_10790,_10870))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_queens_3__1(mach); }
public static Operation exec_pred_queens_3__1(Prolog mach){ mach.FillAlternative(pred_queens_3::exec_pred_queens_3__2) ;
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
public static Operation exec_pred_queens_3__2(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = Data.F(queens_8.s_not_attack,var2.Deref(),var5.Deref(),Data.F(queens_8.s_queens,var4.Deref(),Data.F(queens_8.s3,var5.Deref(),var2.Deref()),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_select_3::exec_static ;}
}


public static class pred_not_attack_2 extends Code {

/*

not_attack(_11112,_11114,_11156):-not_attack(_11112,_11114,1,_11156).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_not_attack_2__1(mach); }
public static Operation exec_pred_not_attack_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = queens_8.posint1 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_not_attack_3::exec_static ;}
}


public static class pred_not_attack_3 extends Code {

/*

not_attack([],_11284,_11286,_11326):-cut(1,_11326).
not_attack([_11408|_11410],_11416,_11418,_11520):- =\=(_11416,_11408+_11418,=\=(_11416,_11408-_11418,is(_11452,_11418+1,not_attack(_11410,_11416,_11452,_11520)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_not_attack_3__1(mach); }
public static Operation exec_pred_not_attack_3__1(Prolog mach){ mach.FillAlternative(pred_not_attack_3::exec_pred_not_attack_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_not_attack_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(Data.F(queens_8.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = Data.F(queens_8.s1,var1.Deref(),var4.Deref()) ;
local_aregs[2] = Data.F(queens_8.s5,var3.Deref(),Data.F(queens_8.s2,var1.Deref(),var4.Deref()),Data.F(queens_8.s_is,var5,Data.F(queens_8.s1,var4.Deref(),queens_8.posint1),Data.F(queens_8.s_not_attack,var2.Deref(),var3.Deref(),var5.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_$003D$005C$003D_2::exec_static ;}
}


public static class pred_select_3 extends Code {

/*

select([_11810|_11812],_11812,_11810,_11842):-call(_11842).
select([_11952|_11954],[_11952|_11960],_11968,_12016):-select(_11954,_11960,_11968,_12016).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_select_3__1(mach); }
public static Operation exec_pred_select_3__1(Prolog mach){ mach.FillAlternative(pred_select_3::exec_pred_select_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(queens_8.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_select_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(queens_8.s3,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(queens_8.s3,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_select_3::exec_static ;}
}


public static class pred_range_3 extends Code {

/*

range(_12162,_12162,[_12162],_12212):-cut(1,_12212).
range(_12306,_12314,[_12306|_12308],_12394):-smallerthan(_12306,_12314,is(_12332,_12306+1,range(_12332,_12314,_12308,_12394))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_range_3__1(mach); }
public static Operation exec_pred_range_3__1(Prolog mach){ mach.FillAlternative(pred_range_3::exec_pred_range_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(queens_8.s3,var1.Deref(),Const.Nil),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_range_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(queens_8.s3,var1.Deref(),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Data.F(queens_8.s_is,var4,Data.F(queens_8.s1,var1.Deref(),queens_8.posint1),Data.F(queens_8.s_range,var4.Deref(),var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


}


