package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class perfect /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("*") ;
final static Const s2 = Data.Intern("+") ;
final static Const s3 = Data.Intern("-") ;
final static Const s4 = Data.Intern(".") ;
final static Const s5 = Data.Intern(":-") ;
final static Const s_arithequal = Data.Intern("arithequal") ;
final static Const s_calc = Data.Intern("calc") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_divisible = Data.Intern("divisible") ;
final static Const s_findall = Data.Intern("findall") ;
final static Const s_generateList = Data.Intern("generateList") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_isprime = Data.Intern("isprime") ;
final static Const s_listperf = Data.Intern("listperf") ;
final static Const s_mod = Data.Intern("mod") ;
final static Const s_not = Data.Intern("not") ;
final static Const s_ok = Data.Intern("ok") ;
final static Const s_perfect = Data.Intern("perfect") ;
final static Const s_power = Data.Intern("power") ;
final static Const s_smallerorequal = Data.Intern("smallerorequal") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_top = Data.Intern("top") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint6 = Data.Number(6L) ;
final static Int posint28 = Data.Number(28L) ;
final static Int posint100 = Data.Number(100L) ;
final static Int posint496 = Data.Number(496L) ;
final static Int posint8128 = Data.Number(8128L) ;
final static Int posint2096128 = Data.Number(2096128L) ;
final static Int posint33550336 = Data.Number(33550336L) ;
final static Int posint8589869056 = Data.BigInt("8589869056") ;
final static Int posint137438691328 = Data.BigInt("137438691328") ;
final static Int posint35184367894528 = Data.BigInt("35184367894528") ;
final static Int posint144115187807420416 = Data.BigInt("144115187807420416") ;
final static Int posint2305843008139952128 = Data.BigInt("2305843008139952128") ;
final static Int posint9444732965670570950656 = Data.BigInt("9444732965670570950656") ;
final static Int posint2417851639228158837784576 = Data.BigInt("2417851639228158837784576") ;
final static Int posint38685626227663735544086528 = Data.BigInt("38685626227663735544086528") ;
final static Int posint9903520314282971830448816128 = Data.BigInt("9903520314282971830448816128") ;
final static Int posint40564819207303336344294875201536 = Data.BigInt("40564819207303336344294875201536") ;
final static Int posint166153499473114483824745506383331328 = Data.BigInt("166153499473114483824745506383331328") ;
final static Int posint2658455991569831744654692615953842176 = Data.BigInt("2658455991569831744654692615953842176") ;
final static Int posint10889035741470030830754200461521744560128 = Data.BigInt("10889035741470030830754200461521744560128") ;
final static Int posint2787593149816327892690784192460327776944128 = Data.BigInt("2787593149816327892690784192460327776944128") ;
final static Int posint44601490397061246283066714178813853366747136 = Data.BigInt("44601490397061246283066714178813853366747136") ;
final static Int posint182687704666362864775460301858080473799697891328 = Data.BigInt("182687704666362864775460301858080473799697891328") ;
final static Int posint46768052394588893382517909811217778170473142550528 = Data.BigInt("46768052394588893382517909811217778170473142550528") ;
final static Int posint191561942608236107294793378084303638130997321548169216 = Data.BigInt("191561942608236107294793378084303638130997321548169216") ;
final static Int posint12554203470773361527671578846336104669690446551334525075456 = Data.BigInt("12554203470773361527671578846336104669690446551334525075456") ;
final static Int posint3213876088517980551083924184681057554444177758164088967397376 = Data.BigInt("3213876088517980551083924184681057554444177758164088967397376") ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_ok_1 = PredTable.Register("ok",1, new pred_ok_1());
final static Operation reg_divisible_2 = PredTable.Register("divisible",2, new pred_divisible_2());
final static Operation reg_isprime_2 = PredTable.Register("isprime",2, new pred_isprime_2());
final static Operation reg_power_3 = PredTable.Register("power",3, new pred_power_3());
final static Operation reg_calc_3 = PredTable.Register("calc",3, new pred_calc_3());
final static Operation reg_listperf_2 = PredTable.Register("listperf",2, new pred_listperf_2());
final static Operation reg_generateList_2 = PredTable.Register("generateList",2, new pred_generateList_2());
final static Operation reg_perfect_2 = PredTable.Register("perfect",2, new pred_perfect_2());
public static class pred_top_0 extends Code {

/*

top(_15092):-findall(_15052,perfect(100,_15052),_15060,ok(_15060,_15092)).


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
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = Data.F(perfect.s_perfect,perfect.posint100,var1.Deref()) ;
local_aregs[2] = var2 ;
local_aregs[3] = Data.F(perfect.s_ok,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_findall_3::exec_static ;}
}


public static class pred_ok_1 extends Code {

/*

ok([3213876088517980551083924184681057554444177758164088967397376,12554203470773361527671578846336104669690446551334525075456,191561942608236107294793378084303638130997321548169216,46768052394588893382517909811217778170473142550528,182687704666362864775460301858080473799697891328,44601490397061246283066714178813853366747136,2787593149816327892690784192460327776944128,10889035741470030830754200461521744560128,2658455991569831744654692615953842176,166153499473114483824745506383331328,40564819207303336344294875201536,9903520314282971830448816128,38685626227663735544086528,2417851639228158837784576,9444732965670570950656,2305843008139952128,144115187807420416,35184367894528,137438691328,8589869056,33550336,2096128,8128,496,28,6],_15580):-call(_15580).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_ok_1__1(mach); }
public static Operation exec_pred_ok_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(perfect.s4,perfect.posint3213876088517980551083924184681057554444177758164088967397376,Data.F(perfect.s4,perfect.posint12554203470773361527671578846336104669690446551334525075456,Data.F(perfect.s4,perfect.posint191561942608236107294793378084303638130997321548169216,Data.F(perfect.s4,perfect.posint46768052394588893382517909811217778170473142550528,Data.F(perfect.s4,perfect.posint182687704666362864775460301858080473799697891328,Data.F(perfect.s4,perfect.posint44601490397061246283066714178813853366747136,Data.F(perfect.s4,perfect.posint2787593149816327892690784192460327776944128,Data.F(perfect.s4,perfect.posint10889035741470030830754200461521744560128,Data.F(perfect.s4,perfect.posint2658455991569831744654692615953842176,Data.F(perfect.s4,perfect.posint166153499473114483824745506383331328,Data.F(perfect.s4,perfect.posint40564819207303336344294875201536,Data.F(perfect.s4,perfect.posint9903520314282971830448816128,Data.F(perfect.s4,perfect.posint38685626227663735544086528,Data.F(perfect.s4,perfect.posint2417851639228158837784576,Data.F(perfect.s4,perfect.posint9444732965670570950656,Data.F(perfect.s4,perfect.posint2305843008139952128,Data.F(perfect.s4,perfect.posint144115187807420416,Data.F(perfect.s4,perfect.posint35184367894528,Data.F(perfect.s4,perfect.posint137438691328,Data.F(perfect.s4,perfect.posint8589869056,Data.F(perfect.s4,perfect.posint33550336,Data.F(perfect.s4,perfect.posint2096128,Data.F(perfect.s4,perfect.posint8128,Data.F(perfect.s4,perfect.posint496,Data.F(perfect.s4,perfect.posint28,Data.F(perfect.s4,perfect.posint6,Const.Nil)))))))))))))))))))))))))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_divisible_2 extends Code {

/*

divisible(_15638,_15640,_15716):-is(_15650,_15640*_15640,smallerorequal(_15650,_15638,arithequal(0,_15638 mod _15640,_15716))).
divisible(_15934,_15936,_16006):-smallerthan(_15936,_15934,is(_15952,_15936+1,divisible(_15934,_15952,_16006))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_divisible_2__1(mach); }
public static Operation exec_pred_divisible_2__1(Prolog mach){ mach.FillAlternative(pred_divisible_2::exec_pred_divisible_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = Data.F(perfect.s1,var2.Deref(),var2.Deref()) ;
local_aregs[2] = Data.F(perfect.s_smallerorequal,var3.Deref(),var1.Deref(),Data.F(perfect.s_arithequal,perfect.posint0,Data.F(perfect.s_mod,var1.Deref(),var2.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_is_2::exec_static ;}
public static Operation exec_pred_divisible_2__2(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(perfect.s_is,var3,Data.F(perfect.s2,var2.Deref(),perfect.posint1),Data.F(perfect.s_divisible,var1.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


public static class pred_isprime_2 extends Code {

/*

isprime([_16218|_16220],_16218,_16294):-is(_16230,2,smallerthan(1,_16218,not(divisible(_16218,_16230),_16294))).
isprime([_16502|_16504],_16510,_16550):-isprime(_16504,_16510,_16550).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_isprime_2__1(mach); }
public static Operation exec_pred_isprime_2__1(Prolog mach){ mach.FillAlternative(pred_isprime_2::exec_pred_isprime_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(perfect.s4,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = perfect.posint2 ;
local_aregs[2] = Data.F(perfect.s_smallerthan,perfect.posint1,var1.Deref(),Data.F(perfect.s_not,Data.F(perfect.s_divisible,var1.Deref(),var3.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_is_2::exec_static ;}
public static Operation exec_pred_isprime_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(perfect.s4,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_isprime_2::exec_static ;}
}


public static class pred_power_3 extends Code {

/*

power(_16662,0,1,_16706):-cut(1,_16706).
power(_16788,_16790,_16792,_16876):-is(_16802,_16790-1,power(_16788,_16802,_16812,is(_16792,_16812*_16788,_16876))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_power_3__1(mach); }
public static Operation exec_pred_power_3__1(Prolog mach){ mach.FillAlternative(pred_power_3::exec_pred_power_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(perfect.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(perfect.posint1,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_power_3__2(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = Data.F(perfect.s3,var2.Deref(),perfect.posint1) ;
local_aregs[2] = Data.F(perfect.s_power,var1.Deref(),var4.Deref(),var5,Data.F(perfect.s_is,var3.Deref(),Data.F(perfect.s1,var5.Deref(),var1.Deref()),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_is_2::exec_static ;}
}


public static class pred_calc_3 extends Code {

/*

calc(2,_17118,_17120,_17224):-power(2,_17118,_17128,is(_17138,_17128-1,power(2,_17118-1,_17154,is(_17120,_17138*_17154,_17224)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_calc_3__1(mach); }
public static Operation exec_pred_calc_3__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(perfect.posint2,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = perfect.posint2 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3 ;
local_aregs[3] = Data.F(perfect.s_is,var4,Data.F(perfect.s3,var3.Deref(),perfect.posint1),Data.F(perfect.s_power,perfect.posint2,Data.F(perfect.s3,var1.Deref(),perfect.posint1),var5,Data.F(perfect.s_is,var2.Deref(),Data.F(perfect.s1,var4.Deref(),var5.Deref()),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_power_3::exec_static ;}
}


public static class pred_listperf_2 extends Code {

/*

listperf([_17534|_17536],_17542,_17584):-calc(2,_17534,_17542,_17584).
listperf([_17728|_17730],_17736,_17776):-listperf(_17730,_17736,_17776).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_listperf_2__1(mach); }
public static Operation exec_pred_listperf_2__1(Prolog mach){ mach.FillAlternative(pred_listperf_2::exec_pred_listperf_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(perfect.s4,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = perfect.posint2 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_calc_3::exec_static ;}
public static Operation exec_pred_listperf_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(perfect.s4,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_listperf_2::exec_static ;}
}


public static class pred_generateList_2 extends Code {

/*

generateList(0,[],_17930):-call(_17930).
generateList(_18044,[_18038|_18040],_18134):-smallerthan(0,_18044,is(_18038,_18044+1,is(_18074,_18044-1,generateList(_18074,_18040,_18134)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_generateList_2__1(mach); }
public static Operation exec_pred_generateList_2__1(Prolog mach){ mach.FillAlternative(pred_generateList_2::exec_pred_generateList_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(perfect.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_generateList_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(perfect.s4,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = perfect.posint0 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(perfect.s_is,var2.Deref(),Data.F(perfect.s2,var1.Deref(),perfect.posint1),Data.F(perfect.s_is,var4,Data.F(perfect.s3,var1.Deref(),perfect.posint1),Data.F(perfect.s_generateList,var4.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


public static class pred_perfect_2 extends Code {

/*

perfect(_18426,_18428,_18500):-generateList(_18426,_18434,findall(_18440,isprime(_18434,_18440),_18448,listperf(_18448,_18428,_18500))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_perfect_2__1(mach); }
public static Operation exec_pred_perfect_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = Data.F(perfect.s_findall,var4,Data.F(perfect.s_isprime,var3.Deref(),var4.Deref()),var5,Data.F(perfect.s_listperf,var5.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_generateList_2::exec_static ;}
}


}


