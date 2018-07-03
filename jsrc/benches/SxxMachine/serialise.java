package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class serialise /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("+") ;
final static Const s2 = Data.Intern(".") ;
final static Const s3 = Data.Intern(":-") ;
final static Const s_arrange = Data.Intern("arrange") ;
final static Const s_before = Data.Intern("before") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_numbered = Data.Intern("numbered") ;
final static Const s_pair = Data.Intern("pair") ;
final static Const s_pairlists = Data.Intern("pairlists") ;
final static Const s_serialise = Data.Intern("serialise") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_split = Data.Intern("split") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_tree = Data.Intern("tree") ;
final static Const s_void = Data.Intern("void") ;
final static Int posint1 = Data.Number(1L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_serialise_0 = PredTable.Register("serialise",0, new pred_serialise_0());
final static Operation reg_serialise_2 = PredTable.Register("serialise",2, new pred_serialise_2());
final static Operation reg_pairlists_3 = PredTable.Register("pairlists",3, new pred_pairlists_3());
final static Operation reg_arrange_2 = PredTable.Register("arrange",2, new pred_arrange_2());
final static Operation reg_split_4 = PredTable.Register("split",4, new pred_split_4());
final static Operation reg_before_2 = PredTable.Register("before",2, new pred_before_2());
final static Operation reg_numbered_3 = PredTable.Register("numbered",3, new pred_numbered_3());
public static class pred_top_0 extends Code {

/*

top(_10324):-serialise(_10324).


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
return (Operation)pred_serialise_0::exec_static ;}
}


public static class pred_serialise_0 extends Code {

/*

serialise(_10410):-serialise("ABLE WAS I ERE I SAW ELBA",_10388,_10410).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_serialise_0__1(mach); }
public static Operation exec_pred_serialise_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Const.Intern("ABLE WAS I ERE I SAW ELBA") ;
local_aregs[1] = var1 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_serialise_2::exec_static ;}
}


public static class pred_serialise_2 extends Code {

/*

serialise(_10494,_10496,_10564):-pairlists(_10494,_10496,_10504,arrange(_10504,_10510,numbered(_10510,1,_10518,_10564))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_serialise_2__1(mach); }
public static Operation exec_pred_serialise_2__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3 ;
local_aregs[3] = Data.F(serialise.s_arrange,var3.Deref(),var4,Data.F(serialise.s_numbered,var4.Deref(),serialise.posint1,var5,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_pairlists_3::exec_static ;}
}


public static class pred_pairlists_3 extends Code {

/*

pairlists([_10798|_10800],[_10804|_10806],[pair(_10798,_10804)|_10818],_10874):-pairlists(_10800,_10806,_10818,_10874).
pairlists([],[],[],_11034):-call(_11034).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_pairlists_3__1(mach); }
public static Operation exec_pred_pairlists_3__1(Prolog mach){ mach.FillAlternative(pred_pairlists_3::exec_pred_pairlists_3__2) ;
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
if (!( (areg0).Unify(Data.F(serialise.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(serialise.s2,var3,var4),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(serialise.s2,Data.F(serialise.s_pair,var1.Deref(),var3.Deref()),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_pairlists_3::exec_static ;}
public static Operation exec_pred_pairlists_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_arrange_2 extends Code {

/*

arrange([_11132|_11134],tree(_11138,_11132,_11142),_11216):-split(_11134,_11132,_11156,_11158,arrange(_11156,_11138,arrange(_11158,_11142,_11216))).
arrange([],void,_11486):-call(_11486).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_arrange_2__1(mach); }
public static Operation exec_pred_arrange_2__1(Prolog mach){ mach.FillAlternative(pred_arrange_2::exec_pred_arrange_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(serialise.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(serialise.s_tree,var3,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = var6 ;
local_aregs[4] = Data.F(serialise.s_arrange,var5.Deref(),var3.Deref(),Data.F(serialise.s_arrange,var6.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_split_4::exec_static ;}
public static Operation exec_pred_arrange_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(serialise.s_void,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_split_4 extends Code {

/*

split([_11576|_11578],_11576,_11586,_11588,_11650):-cut(1,split(_11578,_11576,_11586,_11588,_11650)).
split([_11824|_11826],_11838,[_11824|_11832],_11842,_11916):-before(_11824,_11838,cut(1,split(_11826,_11838,_11832,_11842,_11916))).
split([_12140|_12142],_12154,_12156,[_12140|_12148],_12232):-before(_12154,_12140,cut(1,split(_12142,_12154,_12156,_12148,_12232))).
split([],_12458,[],[],_12484):-call(_12484).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_split_4__1(mach); }
public static Operation exec_pred_split_4__1(Prolog mach){ mach.FillAlternative(pred_split_4::exec_pred_split_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(serialise.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = Data.F(serialise.s_split,var2.Deref(),var1.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_split_4__2(Prolog mach){ mach.FillAlternative(pred_split_4::exec_pred_split_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(serialise.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(serialise.s2,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = mach.HC(Data.F(serialise.s_split,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_before_2::exec_static ;}
public static Operation exec_pred_split_4__3(Prolog mach){ mach.FillAlternative(pred_split_4::exec_pred_split_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(serialise.s2,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(serialise.s2,var1.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(Data.F(serialise.s_split,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_before_2::exec_static ;}
public static Operation exec_pred_split_4__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_before_2 extends Code {

/*

before(pair(_12608,_12610),pair(_12614,_12616),_12662):-smallerthan(_12608,_12614,_12662).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_before_2__1(mach); }
public static Operation exec_pred_before_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(serialise.s_pair,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(serialise.s_pair,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_smallerthan_2::exec_static ;}
}


public static class pred_numbered_3 extends Code {

/*

numbered(tree(_12804,pair(_12798,_12800),_12808),_12814,_12816,_12896):-numbered(_12804,_12814,_12800,is(_12834,_12800+1,numbered(_12808,_12834,_12816,_12896))).
numbered(void,_13170,_13170,_13194):-call(_13194).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_numbered_3__1(mach); }
public static Operation exec_pred_numbered_3__1(Prolog mach){ mach.FillAlternative(pred_numbered_3::exec_pred_numbered_3__2) ;
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
if (!( (areg0).Unify(Data.F(serialise.s_tree,var1,Data.F(serialise.s_pair,var2,var3),var4),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var5,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var6,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = Data.F(serialise.s_is,var7,Data.F(serialise.s1,var3.Deref(),serialise.posint1),Data.F(serialise.s_numbered,var4.Deref(),var7.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_numbered_3::exec_static ;}
public static Operation exec_pred_numbered_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(serialise.s_void,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


}


