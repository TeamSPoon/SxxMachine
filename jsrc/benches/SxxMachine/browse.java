package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class browse /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("$concat") ;
final static Const s2 = Data.Intern("*") ;
final static Const s3 = Data.Intern(",") ;
final static Const s4 = Data.Intern("-") ;
final static Const s5 = Data.Intern("->") ;
final static Const s6 = Data.Intern(".") ;
final static Const s7 = Data.Intern(":-") ;
final static Const s8 = Data.Intern("=") ;
final static Const s9 = Data.Intern("=:=") ;
final static Const s_a = Data.Intern("a") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_atom = Data.Intern("atom") ;
final static Const s_b = Data.Intern("b") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_dummy = Data.Intern("dummy") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_fill = Data.Intern("fill") ;
final static Const s_functor = Data.Intern("functor") ;
final static Const s_get_pats = Data.Intern("get_pats") ;
final static Const s_init = Data.Intern("init") ;
final static Const s_investigate = Data.Intern("investigate") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_length = Data.Intern("length") ;
final static Const s_match = Data.Intern("match") ;
final static Const s_mod = Data.Intern("mod") ;
final static Const s_nonvar = Data.Intern("nonvar") ;
final static Const s_or = Data.Intern("or") ;
final static Const s_p_investigate = Data.Intern("p_investigate") ;
final static Const s_p_match = Data.Intern("p_match") ;
final static Const s_pattern = Data.Intern("pattern") ;
final static Const s_property = Data.Intern("property") ;
final static Const s_randomize = Data.Intern("randomize") ;
final static Const s_split = Data.Intern("split") ;
final static Const s_star = Data.Intern("star") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_var = Data.Intern("var") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint4 = Data.Number(4L) ;
final static Int posint10 = Data.Number(10L) ;
final static Int posint17 = Data.Number(17L) ;
final static Int posint21 = Data.Number(21L) ;
final static Int posint100 = Data.Number(100L) ;
final static Int posint251 = Data.Number(251L) ;
final static Operation reg_top_0 = PredTable.Register("top",0, new pred_top_0());
final static Operation reg_init_5 = PredTable.Register("init",5, new pred_init_5());
final static Operation reg_init_6 = PredTable.Register("init",6, new pred_init_6());
final static Operation reg_fill_3 = PredTable.Register("fill",3, new pred_fill_3());
final static Operation reg_randomize_3 = PredTable.Register("randomize",3, new pred_randomize_3());
final static Operation reg_split_4 = PredTable.Register("split",4, new pred_split_4());
final static Operation reg_investigate_2 = PredTable.Register("investigate",2, new pred_investigate_2());
final static Operation reg_get_pats_3 = PredTable.Register("get_pats",3, new pred_get_pats_3());
final static Operation reg_get_pats_4 = PredTable.Register("get_pats",4, new pred_get_pats_4());
final static Operation reg_property_3 = PredTable.Register("property",3, new pred_property_3());
final static Operation reg_p_investigate_2 = PredTable.Register("p_investigate",2, new pred_p_investigate_2());
final static Operation reg_p_match_2 = PredTable.Register("p_match",2, new pred_p_match_2());
final static Operation reg_match_2 = PredTable.Register("match",2, new pred_match_2());
final static Operation reg_$0024concat_3 = PredTable.Register("$concat",3, new pred_$0024concat_3());
public static class pred_top_0 extends Code {

/*

top(_6100):-init(100,10,4,[[a,a,a,b,b,b,b,a,a,a,a,a,b,b,a,a,a],[a,a,b,b,b,b,a,a,[a,a],[b,b]],[a,a,a,b,[b,a],b,a,b,a]],_5820,randomize(_5820,_5826,21,cut(1,investigate(_5826,[[star(_5832),_5842,star(_5848),_5842,a,star(_5832),a,star(_5848),star(_5832)],[star(_5832),star(_5848),star(_5848),star(_5832),[star(_5832)],[star(_5848)]],[_5990,_5996,star(_6002),[b,a],star(_6030),_6040,_6046]],_6100)))).


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
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = browse.posint100 ;
local_aregs[1] = browse.posint10 ;
local_aregs[2] = browse.posint4 ;
local_aregs[3] = Data.F(browse.s6,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Const.Nil))))))))))))))))),Data.F(browse.s6,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Const.Nil)),Data.F(browse.s6,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_b,Const.Nil)),Const.Nil)))))))))),Data.F(browse.s6,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_a,Const.Nil)),Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_a,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_a,Const.Nil))))))))),Const.Nil))) ;
local_aregs[4] = var1 ;
local_aregs[5] = Data.F(browse.s_randomize,var1.Deref(),var2,browse.posint21,mach.HC(Data.F(browse.s_investigate,var2.Deref(),Data.F(browse.s6,Data.F(browse.s6,Data.F(browse.s_star,var3),Data.F(browse.s6,var4,Data.F(browse.s6,Data.F(browse.s_star,var5),Data.F(browse.s6,var4.Deref(),Data.F(browse.s6,browse.s_a,Data.F(browse.s6,Data.F(browse.s_star,var3.Deref()),Data.F(browse.s6,browse.s_a,Data.F(browse.s6,Data.F(browse.s_star,var5.Deref()),Data.F(browse.s6,Data.F(browse.s_star,var3.Deref()),Const.Nil))))))))),Data.F(browse.s6,Data.F(browse.s6,Data.F(browse.s_star,var3.Deref()),Data.F(browse.s6,Data.F(browse.s_star,var5.Deref()),Data.F(browse.s6,Data.F(browse.s_star,var5.Deref()),Data.F(browse.s6,Data.F(browse.s_star,var3.Deref()),Data.F(browse.s6,Data.F(browse.s6,Data.F(browse.s_star,var3.Deref()),Const.Nil),Data.F(browse.s6,Data.F(browse.s6,Data.F(browse.s_star,var5.Deref()),Const.Nil),Const.Nil)))))),Data.F(browse.s6,Data.F(browse.s6,var6,Data.F(browse.s6,var7,Data.F(browse.s6,Data.F(browse.s_star,var8),Data.F(browse.s6,Data.F(browse.s6,browse.s_b,Data.F(browse.s6,browse.s_a,Const.Nil)),Data.F(browse.s6,Data.F(browse.s_star,var9),Data.F(browse.s6,var10,Data.F(browse.s6,var11,Const.Nil))))))),Const.Nil))),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_init_5::exec_static ;}
}


public static class pred_init_5 extends Code {

/*

init(_6340,_6342,_6344,_6346,_6348,_6414):-init(_6340,_6342,_6342,_6344,_6346,_6348,_6414).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_init_5__1(mach); }
public static Operation exec_pred_init_5__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
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
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = var4.Deref() ;
local_aregs[5] = var5.Deref() ;
local_aregs[6] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_init_6::exec_static ;}
}


public static class pred_init_6 extends Code {

/*

init(0,_6596,_6598,_6600,_6602,_6604,_6662):-cut(1,_6662).
init(_6762,_6764,_6766,_6768,_6770,[_6756|_6758],_6974):-fill(_6764,[],_6780,get_pats(_6768,_6770,_6788,is(_6798,_6766-_6764,fill(_6798,[pattern(_6788)|_6780],_6756,is(_6828,_6762-1,or((_6764=:=0->_6840 is _6766),_6840 is _6764-1,init(_6828,_6840,_6766,_6768,_6770,_6758,_6974))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
Term aregs[] = mach.RegPull(6);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_init_6__1(mach); }
public static Operation exec_pred_init_6__1(Prolog mach){ mach.FillAlternative(pred_init_6::exec_pred_init_6__2) ;
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
if (!( (areg0).Unify(browse.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg4).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg5).Unify(var5,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_init_6__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[6] ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var12 = Data.V(mach) ;
Var var11 = Data.V(mach) ;
Var var10 = Data.V(mach) ;
Var var9 = Data.V(mach) ;
Var var8 = Data.V(mach) ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
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
if (!( (areg5).Unify(Data.F(browse.s6,var6,var7),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = Const.Nil ;
local_aregs[2] = var8 ;
local_aregs[3] = Data.F(browse.s_get_pats,var4.Deref(),var5.Deref(),var9,Data.F(browse.s_is,var10,Data.F(browse.s4,var3.Deref(),var2.Deref()),Data.F(browse.s_fill,var10.Deref(),Data.F(browse.s6,Data.F(browse.s_pattern,var9.Deref()),var8.Deref()),var6.Deref(),Data.F(browse.s_is,var11,Data.F(browse.s4,var1.Deref(),browse.posint1),Data.F(browse.s_or,Data.F(browse.s5,Data.F(browse.s9,var2.Deref(),browse.posint0),Data.F(browse.s_is,var12,var3.Deref())),Data.F(browse.s_is,var12.Deref(),Data.F(browse.s4,var2.Deref(),browse.posint1)),Data.F(browse.s_init,var11.Deref(),var12.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var7.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[6] = local_aregs[5] = local_aregs[4] = null ;
return (Operation)pred_fill_3::exec_static ;}
}


public static class pred_fill_3 extends Code {

/*

fill(0,_7518,_7518,_7560):-cut(1,_7560).
fill(_7646,_7648,[dummy([])|_7642],_7716):-is(_7660,_7646-1,fill(_7660,_7648,_7642,_7716)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_fill_3__1(mach); }
public static Operation exec_pred_fill_3__1(Prolog mach){ mach.FillAlternative(pred_fill_3::exec_pred_fill_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(browse.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_fill_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(Data.F(browse.s6,Data.F(browse.s_dummy,Const.Nil),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = Data.F(browse.s4,var1.Deref(),browse.posint1) ;
local_aregs[2] = Data.F(browse.s_fill,var4.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_is_2::exec_static ;}
}


public static class pred_randomize_3 extends Code {

/*

randomize([],[],_7904,_7944):-cut(1,_7944).
randomize(_8032,[_8026|_8028],_8036,_8154):-length(_8032,_8042,is(_8058,_8036*17 mod 251,is(_8070,_8058 mod _8042,split(_8070,_8032,_8026,_8082,randomize(_8082,_8028,_8058,_8154))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_randomize_3__1(mach); }
public static Operation exec_pred_randomize_3__1(Prolog mach){ mach.FillAlternative(pred_randomize_3::exec_pred_randomize_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_randomize_3__2(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(browse.s6,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = Data.F(browse.s_is,var6,Data.F(browse.s_mod,Data.F(browse.s2,var4.Deref(),browse.posint17),browse.posint251),Data.F(browse.s_is,var7,Data.F(browse.s_mod,var6.Deref(),var5.Deref()),Data.F(browse.s_split,var7.Deref(),var1.Deref(),var2.Deref(),var8,Data.F(browse.s_randomize,var8.Deref(),var3.Deref(),var6.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_length_2::exec_static ;}
}


public static class pred_split_4 extends Code {

/*

split(0,[_8522|_8524],_8522,_8524,_8580):-cut(1,_8580).
split(_8688,[_8676|_8678],_8692,[_8676|_8684],_8768):-is(_8704,_8688-1,split(_8704,_8678,_8692,_8684,_8768)).


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
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(browse.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var1.Deref(),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2.Deref(),mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_split_4__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
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
if (!( (areg1).Unify(Data.F(browse.s6,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(Data.F(browse.s6,var2.Deref(),var5),mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = Data.F(browse.s4,var1.Deref(),browse.posint1) ;
local_aregs[2] = Data.F(browse.s_split,var6.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_is_2::exec_static ;}
}


public static class pred_investigate_2 extends Code {

/*

investigate([],_8988,_9022):-cut(1,_9022).
investigate([_9108|_9110],_9116,_9182):-property(_9108,pattern,_9124,p_investigate(_9124,_9116,investigate(_9110,_9116,_9182))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_investigate_2__1(mach); }
public static Operation exec_pred_investigate_2__1(Prolog mach){ mach.FillAlternative(pred_investigate_2::exec_pred_investigate_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_investigate_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = browse.s_pattern ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(browse.s_p_investigate,var4.Deref(),var3.Deref(),Data.F(browse.s_investigate,var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_property_3::exec_static ;}
}


public static class pred_get_pats_3 extends Code {

/*

get_pats(_9426,_9428,_9430,_9480):-get_pats(_9426,_9428,_9430,_9428,_9480).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_get_pats_3__1(mach); }
public static Operation exec_pred_get_pats_3__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3.Deref() ;
local_aregs[3] = var2.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_get_pats_4::exec_static ;}
}


public static class pred_get_pats_4 extends Code {

/*

get_pats(0,_1912,[],_1914,_1922):-cut(1,_1922).
get_pats(_1960,[_1950|_1952],[_1950|_1958],_1962,_1978):-is(_1970,_1960-1,get_pats(_1970,_1952,_1958,_1962,_1978)).
get_pats(_2018,[],_2020,_2022,_2030):-get_pats(_2018,_2022,_2020,_2022,_2030).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_get_pats_4__1(mach); }
public static Operation exec_pred_get_pats_4__1(Prolog mach){ mach.FillAlternative(pred_get_pats_4::exec_pred_get_pats_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(browse.posint0,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var2,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_get_pats_4__2(Prolog mach){ mach.FillAlternative(pred_get_pats_4::exec_pred_get_pats_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
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
if (!( (areg1).Unify(Data.F(browse.s6,var2,var3),mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(browse.s6,var2.Deref(),var4),mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var5,mach))) return Prolog.Fail0 ;
local_aregs[0] = var6 ;
local_aregs[1] = Data.F(browse.s4,var1.Deref(),browse.posint1) ;
local_aregs[2] = Data.F(browse.s_get_pats,var6.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_is_2::exec_static ;}
public static Operation exec_pred_get_pats_4__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = var3.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_get_pats_4::exec_static ;}
}


public static class pred_property_3 extends Code {

/*

property([],_2062,_2064,_2072):-fail(_2072).
property([_2096|_2098],_2100,_2102,_2112):-functor(_2096,_2100,_2104,cut(1,arg(1,_2096,_2102,_2112))).
property([_2158|_2160],_2162,_2164,_2172):-property(_2160,_2162,_2164,_2172).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_property_3__1(mach); }
public static Operation exec_pred_property_3__1(Prolog mach){ mach.FillAlternative(pred_property_3::exec_pred_property_3__2) ;
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
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_fail_0::exec_static ;}
public static Operation exec_pred_property_3__2(Prolog mach){ mach.FillAlternative(pred_property_3::exec_pred_property_3__3) ;
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
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = mach.HC(Data.F(browse.s_arg,browse.posint1,var1.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_functor_3::exec_static ;}
public static Operation exec_pred_property_3__3(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_property_3::exec_static ;}
}


public static class pred_p_investigate_2 extends Code {

/*

p_investigate([],_2200,_2210):-call(_2210).
p_investigate([_2228|_2230],_2232,_2240):-p_match(_2232,_2228,p_investigate(_2230,_2232,_2240)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_p_investigate_2__1(mach); }
public static Operation exec_pred_p_investigate_2__1(Prolog mach){ mach.FillAlternative(pred_p_investigate_2::exec_pred_p_investigate_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_p_investigate_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = Data.F(browse.s_p_investigate,var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_p_match_2::exec_static ;}
}


public static class pred_p_match_2 extends Code {

/*

p_match([],_2272,_2282):-call(_2282).
p_match([_2300|_2302],_2304,_2324):-or((match(_2304,_2300),fail),true,p_match(_2302,_2304,_2324)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_p_match_2__1(mach); }
public static Operation exec_pred_p_match_2__1(Prolog mach){ mach.FillAlternative(pred_p_match_2::exec_pred_p_match_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_p_match_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(browse.s3,Data.F(browse.s_match,var3.Deref(),var1.Deref()),browse.s_fail) ;
local_aregs[1] = browse.s_true ;
local_aregs[2] = Data.F(browse.s_p_match,var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_or_2::exec_static ;}
}


public static class pred_match_2 extends Code {

/*

match([],[],_2362):-cut(1,_2362).
match([_2386|_2388],[_2392|_2394],_2402):-var(_2392,cut(1,unify(_2392,_2386,match(_2388,_2394,_2402)))).
match(_2452,[_2448|_2450],_2466):-nonvar(_2448,unify(star(_2456),_2448,cut(1,'$concat'(_2456,_2458,_2452,match(_2458,_2450,_2466))))).
match([_2522|_2524],[_2528|_2530],_2560):-or((atom(_2522)->_2522=_2528),match(_2522,_2528),match(_2524,_2530,_2560)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_match_2__1(mach); }
public static Operation exec_pred_match_2__1(Prolog mach){ mach.FillAlternative(pred_match_2::exec_pred_match_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_match_2__2(Prolog mach){ mach.FillAlternative(pred_match_2::exec_pred_match_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(browse.s6,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = mach.HC(Data.F(browse.s_unify,var3.Deref(),var1.Deref(),Data.F(browse.s_match,var2.Deref(),var4.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_var_1::exec_static ;}
public static Operation exec_pred_match_2__3(Prolog mach){ mach.FillAlternative(pred_match_2::exec_pred_match_2__4) ;
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
if (!( (areg1).Unify(Data.F(browse.s6,var2,var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = Data.F(browse.s_unify,Data.F(browse.s_star,var4),var2.Deref(),mach.HC(Data.F(browse.s1,var4.Deref(),var5,var1.Deref(),Data.F(browse.s_match,var5.Deref(),var3.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_nonvar_1::exec_static ;}
public static Operation exec_pred_match_2__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(browse.s6,var3,var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(browse.s5,Data.F(browse.s_atom,var1.Deref()),Data.F(browse.s8,var1.Deref(),var3.Deref())) ;
local_aregs[1] = Data.F(browse.s_match,var1.Deref(),var3.Deref()) ;
local_aregs[2] = Data.F(browse.s_match,var2.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_or_2::exec_static ;}
}


public static class pred_$0024concat_3 extends Code {

/*

'$concat'([],_2592,_2592,_2602):-call(_2602).
'$concat'([_2622|_2624],_2632,[_2622|_2630],_2640):-'$concat'(_2624,_2632,_2630,_2640).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_$0024concat_3__1(mach); }
public static Operation exec_pred_$0024concat_3__1(Prolog mach){ mach.FillAlternative(pred_$0024concat_3::exec_pred_$0024concat_3__2) ;
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
public static Operation exec_pred_$0024concat_3__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(browse.s6,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(Data.F(browse.s6,var1.Deref(),var4),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_$0024concat_3::exec_static ;}
}


}


