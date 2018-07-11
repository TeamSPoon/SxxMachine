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

top(_34226):-queens(8,_34198,fail(_34226)).
top(_34344):-call(_34344).


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

queens(_34382,_34384,_34440):-range(1,_34382,_34392,queens(_34392,[],_34384,_34440)).


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

queens([],_34620,_34620,_34644):-call(_34644).
queens(_34736,_34738,_34740,_34820):-select(_34736,_34746,_34748,not_attack(_34738,_34748,queens(_34746,[_34748|_34738],_34740,_34820))).


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

not_attack(_35062,_35064,_35106):-not_attack(_35062,_35064,1,_35106).


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

not_attack([],_35234,_35236,_35276):-cut(1,_35276).
not_attack([_35358|_35360],_35366,_35368,_35470):- =\=(_35366,_35358+_35368,=\=(_35366,_35358-_35368,is(_35402,_35368+1,not_attack(_35360,_35366,_35402,_35470)))).


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
return (Operation) queens_8.s5.FindProc(2) ;}
}


public static class pred_select_3 extends Code {

/*

select([_35760|_35762],_35762,_35760,_35792):-call(_35792).
select([_35902|_35904],[_35902|_35910],_35918,_35966):-select(_35904,_35910,_35918,_35966).


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

range(_36112,_36112,[_36112],_36162):-cut(1,_36162).
range(_36256,_36264,[_36256|_36258],_36344):-smallerthan(_36256,_36264,is(_36282,_36256+1,range(_36282,_36264,_36258,_36344))).


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


