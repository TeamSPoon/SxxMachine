package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class query /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("*") ;
final static Const s2 = Data.Intern(".") ;
final static Const s3 = Data.Intern("//") ;
final static Const s4 = Data.Intern(":-") ;
final static Const s_area = Data.Intern("area") ;
final static Const s_argentina = Data.Intern("argentina") ;
final static Const s_bangladesh = Data.Intern("bangladesh") ;
final static Const s_brazil = Data.Intern("brazil") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_china = Data.Intern("china") ;
final static Const s_density = Data.Intern("density") ;
final static Const s_egypt = Data.Intern("egypt") ;
final static Const s_ethiopia = Data.Intern("ethiopia") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_france = Data.Intern("france") ;
final static Const s_india = Data.Intern("india") ;
final static Const s_indonesia = Data.Intern("indonesia") ;
final static Const s_iran = Data.Intern("iran") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_italy = Data.Intern("italy") ;
final static Const s_japan = Data.Intern("japan") ;
final static Const s_mexico = Data.Intern("mexico") ;
final static Const s_nigeria = Data.Intern("nigeria") ;
final static Const s_pakistan = Data.Intern("pakistan") ;
final static Const s_philippines = Data.Intern("philippines") ;
final static Const s_poland = Data.Intern("poland") ;
final static Const s_pop = Data.Intern("pop") ;
final static Const s_query = Data.Intern("query") ;
final static Const s_s_korea = Data.Intern("s_korea") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_spain = Data.Intern("spain") ;
final static Const s_thailand = Data.Intern("thailand") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_turkey = Data.Intern("turkey") ;
final static Const s_uk = Data.Intern("uk") ;
final static Const s_usa = Data.Intern("usa") ;
final static Const s_ussr = Data.Intern("ussr") ;
final static Const s_w_germany = Data.Intern("w_germany") ;
final static Int posint20 = Data.Number(20L) ;
final static Int posint21 = Data.Number(21L) ;
final static Int posint37 = Data.Number(37L) ;
final static Int posint55 = Data.Number(55L) ;
final static Int posint86 = Data.Number(86L) ;
final static Int posint90 = Data.Number(90L) ;
final static Int posint96 = Data.Number(96L) ;
final static Int posint100 = Data.Number(100L) ;
final static Int posint116 = Data.Number(116L) ;
final static Int posint121 = Data.Number(121L) ;
final static Int posint148 = Data.Number(148L) ;
final static Int posint190 = Data.Number(190L) ;
final static Int posint200 = Data.Number(200L) ;
final static Int posint213 = Data.Number(213L) ;
final static Int posint251 = Data.Number(251L) ;
final static Int posint272 = Data.Number(272L) ;
final static Int posint296 = Data.Number(296L) ;
final static Int posint311 = Data.Number(311L) ;
final static Int posint320 = Data.Number(320L) ;
final static Int posint335 = Data.Number(335L) ;
final static Int posint337 = Data.Number(337L) ;
final static Int posint350 = Data.Number(350L) ;
final static Int posint352 = Data.Number(352L) ;
final static Int posint364 = Data.Number(364L) ;
final static Int posint373 = Data.Number(373L) ;
final static Int posint383 = Data.Number(383L) ;
final static Int posint386 = Data.Number(386L) ;
final static Int posint410 = Data.Number(410L) ;
final static Int posint415 = Data.Number(415L) ;
final static Int posint525 = Data.Number(525L) ;
final static Int posint554 = Data.Number(554L) ;
final static Int posint559 = Data.Number(559L) ;
final static Int posint570 = Data.Number(570L) ;
final static Int posint581 = Data.Number(581L) ;
final static Int posint613 = Data.Number(613L) ;
final static Int posint620 = Data.Number(620L) ;
final static Int posint628 = Data.Number(628L) ;
final static Int posint682 = Data.Number(682L) ;
final static Int posint750 = Data.Number(750L) ;
final static Int posint764 = Data.Number(764L) ;
final static Int posint1042 = Data.Number(1042L) ;
final static Int posint1080 = Data.Number(1080L) ;
final static Int posint1097 = Data.Number(1097L) ;
final static Int posint1139 = Data.Number(1139L) ;
final static Int posint1276 = Data.Number(1276L) ;
final static Int posint2119 = Data.Number(2119L) ;
final static Int posint2521 = Data.Number(2521L) ;
final static Int posint3288 = Data.Number(3288L) ;
final static Int posint3380 = Data.Number(3380L) ;
final static Int posint3609 = Data.Number(3609L) ;
final static Int posint5863 = Data.Number(5863L) ;
final static Int posint8250 = Data.Number(8250L) ;
final static Int posint8708 = Data.Number(8708L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_query_0 = PredTable.Register("query",0, new pred_query_0());
final static Operation reg_query_1 = PredTable.Register("query",1, new pred_query_1());
final static Operation reg_density_2 = PredTable.Register("density",2, new pred_density_2());
final static Operation reg_pop_2 = PredTable.Register("pop",2, new pred_pop_2());
final static Operation reg_area_2 = PredTable.Register("area",2, new pred_area_2());
public static class pred_top_0 extends Code {

/*

top(_38962):-query(_38962).


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
return (Operation)pred_query_0::exec_static ;}
}


public static class pred_query_0 extends Code {

/*

query(_39040):-query(_39012,fail(_39040)).
query(_39150):-call(_39150).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_query_0__1(mach); }
public static Operation exec_pred_query_0__1(Prolog mach){ mach.FillAlternative(pred_query_0::exec_pred_query_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = Data.F(query.s_fail,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_query_1::exec_static ;}
public static Operation exec_pred_query_0__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
}


public static class pred_query_1 extends Code {

/*

query([_39194,_39200,_39206,_39212],_39324):-density(_39194,_39200,density(_39206,_39212,smallerthan(_39212,_39200,is(_39246,20*_39200,is(_39258,21*_39212,smallerthan(_39246,_39258,_39324)))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_query_1__1(mach); }
public static Operation exec_pred_query_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(query.s2,var1,Data.F(query.s2,var2,Data.F(query.s2,var3,Data.F(query.s2,var4,Const.Nil)))),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Data.F(query.s_density,var3.Deref(),var4.Deref(),Data.F(query.s_smallerthan,var4.Deref(),var2.Deref(),Data.F(query.s_is,var5,Data.F(query.s1,query.posint20,var2.Deref()),Data.F(query.s_is,var6,Data.F(query.s1,query.posint21,var4.Deref()),Data.F(query.s_smallerthan,var5.Deref(),var6.Deref(),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_density_2::exec_static ;}
}


public static class pred_density_2 extends Code {

/*

density(_39684,_39686,_39762):-pop(_39684,_39692,area(_39684,_39698,is(_39686,_39692*100//_39698,_39762))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_density_2__1(mach); }
public static Operation exec_pred_density_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = Data.F(query.s_area,var1.Deref(),var4,Data.F(query.s_is,var2.Deref(),Data.F(query.s3,Data.F(query.s1,var3.Deref(),query.posint100),var4.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_pop_2::exec_static ;}
}


public static class pred_pop_2 extends Code {

/*

pop(china,8250,_39998):-call(_39998).
pop(india,5863,_40112):-call(_40112).
pop(ussr,2521,_40226):-call(_40226).
pop(usa,2119,_40340):-call(_40340).
pop(indonesia,1276,_40454):-call(_40454).
pop(japan,1097,_40568):-call(_40568).
pop(brazil,1042,_40682):-call(_40682).
pop(bangladesh,750,_40796):-call(_40796).
pop(pakistan,682,_40910):-call(_40910).
pop(w_germany,620,_41024):-call(_41024).
pop(nigeria,613,_41138):-call(_41138).
pop(mexico,581,_41252):-call(_41252).
pop(uk,559,_41366):-call(_41366).
pop(italy,554,_41480):-call(_41480).
pop(france,525,_41594):-call(_41594).
pop(philippines,415,_41708):-call(_41708).
pop(thailand,410,_41822):-call(_41822).
pop(turkey,383,_41936):-call(_41936).
pop(egypt,364,_42050):-call(_42050).
pop(spain,352,_42164):-call(_42164).
pop(poland,337,_42278):-call(_42278).
pop(s_korea,335,_42392):-call(_42392).
pop(iran,320,_42506):-call(_42506).
pop(ethiopia,272,_42620):-call(_42620).
pop(argentina,251,_42734):-call(_42734).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_pop_2__1(mach); }
public static Operation exec_pred_pop_2__1(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_china,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint8250,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__2(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_india,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint5863,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__3(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_ussr,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint2521,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__4(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_usa,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint2119,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__5(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_indonesia,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint1276,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__6(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_japan,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint1097,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__7(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_brazil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint1042,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__8(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_bangladesh,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint750,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__9(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_pakistan,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint682,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__10(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_w_germany,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint620,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__11(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_nigeria,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint613,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__12(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_mexico,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint581,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__13(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_uk,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint559,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__14(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_italy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint554,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__15(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_france,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint525,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__16(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_philippines,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint415,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__17(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_thailand,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint410,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__18(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_turkey,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint383,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__19(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_egypt,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint364,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__20(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_spain,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint352,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__21(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_poland,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint337,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__22(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_s_korea,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint335,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__23(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_iran,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint320,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__24(Prolog mach){ mach.FillAlternative(pred_pop_2::exec_pred_pop_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_ethiopia,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint272,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_pop_2__25(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_argentina,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint251,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_area_2 extends Code {

/*

area(china,3380,_42848):-call(_42848).
area(india,1139,_42968):-call(_42968).
area(ussr,8708,_43088):-call(_43088).
area(usa,3609,_43208):-call(_43208).
area(indonesia,570,_43328):-call(_43328).
area(japan,148,_43448):-call(_43448).
area(brazil,3288,_43568):-call(_43568).
area(bangladesh,55,_43688):-call(_43688).
area(pakistan,311,_43808):-call(_43808).
area(w_germany,96,_43928):-call(_43928).
area(nigeria,373,_44048):-call(_44048).
area(mexico,764,_44168):-call(_44168).
area(uk,86,_44288):-call(_44288).
area(italy,116,_44408):-call(_44408).
area(france,213,_44528):-call(_44528).
area(philippines,90,_44648):-call(_44648).
area(thailand,200,_44768):-call(_44768).
area(turkey,296,_44888):-call(_44888).
area(egypt,386,_45008):-call(_45008).
area(spain,190,_45128):-call(_45128).
area(poland,121,_45248):-call(_45248).
area(s_korea,37,_45368):-call(_45368).
area(iran,628,_45488):-call(_45488).
area(ethiopia,350,_45608):-call(_45608).
area(argentina,1080,_45728):-call(_45728).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_area_2__1(mach); }
public static Operation exec_pred_area_2__1(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_china,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint3380,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__2(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_india,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint1139,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__3(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_ussr,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint8708,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__4(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_usa,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint3609,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__5(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_indonesia,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint570,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__6(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_japan,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint148,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__7(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_brazil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint3288,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__8(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_bangladesh,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint55,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__9(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_pakistan,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint311,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__10(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_w_germany,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint96,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__11(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_nigeria,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint373,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__12(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_mexico,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint764,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__13(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_uk,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint86,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__14(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_italy,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint116,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__15(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_france,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint213,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__16(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_philippines,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint90,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__17(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_thailand,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint200,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__18(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_turkey,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint296,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__19(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_egypt,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint386,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__20(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_spain,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint190,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__21(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_poland,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint121,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__22(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_s_korea,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint37,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__23(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_iran,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint628,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__24(Prolog mach){ mach.FillAlternative(pred_area_2::exec_pred_area_2__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_ethiopia,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint350,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_area_2__25(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(query.s_argentina,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(query.posint1080,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


