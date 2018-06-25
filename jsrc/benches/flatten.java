import java.util.function.Function; class flatten /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("!") ;
static Const s2 = Const.Intern("+") ;
static Const s3 = Const.Intern(",") ;
static Const s4 = Const.Intern("-->") ;
static Const s5 = Const.Intern("->") ;
static Const s6 = Const.Intern(".") ;
static Const s7 = Const.Intern(":-") ;
static Const s8 = Const.Intern(";") ;
static Const s9 = Const.Intern("=") ;
static Const s10 = Const.Intern("=..") ;
static Const s11 = Const.Intern("=<") ;
static Const s12 = Const.Intern(">") ;
static Const s13 = Const.Intern("\\+") ;
static Const s14 = Const.Intern("\\=") ;
static Const s15 = Const.Intern("_dummy_") ;
static Const s16 = Const.Intern("a") ;
static Const s17 = Const.Intern("append") ;
static Const s18 = Const.Intern("arg") ;
static Const s19 = Const.Intern("atomic") ;
static Const s20 = Const.Intern("b") ;
static Const s21 = Const.Intern("c") ;
static Const s22 = Const.Intern("call") ;
static Const s23 = Const.Intern("copy") ;
static Const s24 = Const.Intern("copy2") ;
static Const s25 = Const.Intern("cut") ;
static Const s26 = Const.Intern("disj") ;
static Const s27 = Const.Intern("eliminate_disjunctions") ;
static Const s28 = Const.Intern("extract_disj") ;
static Const s29 = Const.Intern("fail") ;
static Const s30 = Const.Intern("find_vars") ;
static Const s31 = Const.Intern("functor") ;
static Const s32 = Const.Intern("gather_disj") ;
static Const s33 = Const.Intern("inst_vars") ;
static Const s34 = Const.Intern("inst_vars_list") ;
static Const s35 = Const.Intern("intersect_sorted_vars") ;
static Const s36 = Const.Intern("intersect_vars") ;
static Const s37 = Const.Intern("is") ;
static Const s38 = Const.Intern("is_disj") ;
static Const s39 = Const.Intern("make_dummy_clauses") ;
static Const s40 = Const.Intern("make_dummy_name") ;
static Const s41 = Const.Intern("make_sym") ;
static Const s42 = Const.Intern("name") ;
static Const s43 = Const.Intern("nonvar") ;
static Const s44 = Const.Intern("not") ;
static Const s45 = Const.Intern("p") ;
static Const s46 = Const.Intern("retrieve_sym") ;
static Const s47 = Const.Intern("smallerorequal") ;
static Const s48 = Const.Intern("smallerthan") ;
static Const s49 = Const.Intern("sort") ;
static Const s50 = Const.Intern("sort_vars") ;
static Const s51 = Const.Intern("split_vars") ;
static Const s52 = Const.Intern("termequal") ;
static Const s53 = Const.Intern("termgreaterthan") ;
static Const s54 = Const.Intern("termsmallerthan") ;
static Const s55 = Const.Intern("top") ;
static Const s56 = Const.Intern("treat_disj") ;
static Const s57 = Const.Intern("true") ;
static Const s58 = Const.Intern("unify") ;
static Const s59 = Const.Intern("var") ;
static Const s60 = Const.Intern("varbag") ;
static Const s61 = Const.Intern("varset") ;
static Const s62 = Const.Intern("{}") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint65 = Term.Number(65) ;
}


class pred_top_0 extends Code {

/*

top(_21506):-eliminate_disjunctions([(a(_21428,_21430,_21432):-b(_21428);c(_21432))],_21464,_21466,[],inst_vars((_21464,_21466),_21506)).
top(_21666):-true(_21666).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.FillAlternative(pred_top_0::exec_pred_top_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = F(flatten.s6,F(flatten.s7,F(flatten.s16,var1,var2,var3),F(flatten.s8,F(flatten.s20,var1.Deref()),F(flatten.s21,var3.Deref()))),Const.Nil) ;
local_aregs[1] = var4 ;
local_aregs[2] = var5 ;
local_aregs[3] = Const.Nil ;
local_aregs[4] = F(flatten.s33,F(flatten.s3,var4.Deref(),var5.Deref()),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_eliminate_disjunctions_4::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_top_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_true_0::exec_static ;}
}


class pred_eliminate_disjunctions_4 extends Code {

/*

eliminate_disjunctions(_21716,_21718,_21720,_21722,_21792):-gather_disj(_21716,_21718,_21730,[],treat_disj(_21730,_21720,_21722,_21792)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_eliminate_disjunctions_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_eliminate_disjunctions_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = Const.Nil ;
local_aregs[4] = F(flatten.s56,var5.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_gather_disj_4::exec_static ;}
}


class pred_gather_disj_4 extends Code {

/*

gather_disj([],[],_22004,_22004,_22028):-call(_22028).
gather_disj([_22134|_22136],_22142,_22144,_22146,_22236):-extract_disj(_22134,_22152,_22144,_22156,unify([_22152|_22162],_22142,gather_disj(_22136,_22162,_22156,_22146,_22236))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_gather_disj_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_gather_disj_4__1(PrologMachine mach){ mach.FillAlternative(pred_gather_disj_4::exec_pred_gather_disj_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_gather_disj_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var6 ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var7 ;
local_aregs[4] = F(flatten.s58,F(flatten.s6,var6.Deref(),var8),var3.Deref(),F(flatten.s32,var2.Deref(),var8.Deref(),var7.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_extract_disj_4::exec_static ;}
}


class pred_extract_disj_4 extends Code {

/*

extract_disj(_22526,(_22520:-_22522),_22530,_22532,_22630):-unify((_22520:-_22538),_22526,cut(1,unify(0,_22548,extract_disj(_22538,_22522,_22530,_22532,_22526,_22548,_22566,_22630)))).
extract_disj(_22946,_22946,_22950,_22950,_22974):-call(_22974).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_extract_disj_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_extract_disj_4__1(PrologMachine mach){ mach.FillAlternative(pred_extract_disj_4::exec_pred_extract_disj_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s7,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(flatten.s7,var2.Deref(),var6) ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s58,flatten.posint0,var7,F(flatten.s28,var6.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),var1.Deref(),var7.Deref(),var8,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_unify_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_extract_disj_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_extract_disj_7 extends Code {

/*

extract_disj((_23086,_23088),(_23092,_23094),_23102,_23104,_23106,_23108,_23110,_23212):-extract_disj(_23086,_23092,_23102,_23120,_23106,_23108,_23126,extract_disj(_23088,_23094,_23120,_23104,_23106,_23126,_23110,_23212)).
extract_disj(_23560,_23562,_23564,_23566,_23568,_23570,_23572,_23694):-is_disj(_23560,_23578,cut(1,unify([disj(_23578,_23570,_23562,_23568)|_23566],_23564,is(_23572,_23570+1,_23694)))).
extract_disj(_23964,_23964,_23968,_23968,_23972,_23974,_23974,_23998):-call(_23998).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
Term aregs[] = mach.RegPull(7);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_extract_disj_7__1(mach); }
public static Function<PrologMachine,Function> exec_pred_extract_disj_7__1(PrologMachine mach){ mach.FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s3,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s3,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var8))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var5.Deref() ;
local_aregs[3] = var10 ;
local_aregs[4] = var7.Deref() ;
local_aregs[5] = var8.Deref() ;
local_aregs[6] = var11 ;
local_aregs[7] = F(flatten.s28,var2.Deref(),var4.Deref(),var10.Deref(),var6.Deref(),var7.Deref(),var11.Deref(),var9.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_extract_disj_7::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_extract_disj_7__2(PrologMachine mach){ mach.FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var6))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var8 ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s58,F(flatten.s6,F(flatten.s26,var8.Deref(),var6.Deref(),var2.Deref(),var5.Deref()),var4.Deref()),var3.Deref(),F(flatten.s37,var7.Deref(),F(flatten.s2,var6.Deref(),flatten.posint1),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_is_disj_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_extract_disj_7__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[7] ;
Term areg6 = local_aregs[6].Deref() ;
Term areg5 = local_aregs[5].Deref() ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg5).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg6).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_is_disj_2 extends Code {

/*

is_disj((_24158->_24160;_24166),(_24158,!,_24160;_24166),_24224):-cut(1,_24224).
is_disj((_24304;_24306),(_24304;_24306),_24340):-call(_24340).
is_disj(not(_24436),(_24436,!,fail;true),_24482):-call(_24482).
is_disj(\+_24578,(_24578,!,fail;true),_24624):-call(_24624).
is_disj(_24720\=_24722,(_24720=_24722,!,fail;true),_24774):-call(_24774).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_is_disj_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_is_disj_2__1(PrologMachine mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s8,F(flatten.s5,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s8,F(flatten.s3,var1.Deref(),F(flatten.s3,flatten.s1,var2.Deref())),var3.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_is_disj_2__2(PrologMachine mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s8,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s8,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_is_disj_2__3(PrologMachine mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s44,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s8,F(flatten.s3,var1.Deref(),F(flatten.s3,flatten.s1,flatten.s29)),flatten.s57)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_is_disj_2__4(PrologMachine mach){ mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s13,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s8,F(flatten.s3,var1.Deref(),F(flatten.s3,flatten.s1,flatten.s29)),flatten.s57)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_is_disj_2__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s14,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s8,F(flatten.s3,F(flatten.s9,var1.Deref(),var2.Deref()),F(flatten.s3,flatten.s1,flatten.s29)),flatten.s57)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_treat_disj_3 extends Code {

/*

treat_disj([],_24872,_24872,_24896):-call(_24896).
treat_disj([disj((_25012;_25014),_25020,_25022,_25024)|_25030],_25036,_25038,_25182):-find_vars((_25012;_25014),_25050,find_vars(_25024,_25056,intersect_vars(_25050,_25056,_25064,make_dummy_name(_25020,_25070,=..(_25022,[_25070|_25064],make_dummy_clauses((_25012;_25014),_25022,_25036,_25098,treat_disj(_25030,_25098,_25038,_25182))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_treat_disj_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_treat_disj_3__1(PrologMachine mach){ mach.FillAlternative(pred_treat_disj_3::exec_pred_treat_disj_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_treat_disj_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var13 = V(mach) ;
Var var12 = V(mach) ;
Var var11 = V(mach) ;
Var var10 = V(mach) ;
Var var9 = V(mach) ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,F(flatten.s26,F(flatten.s8,var1,var2),var3,var4,var5),var6)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var7))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(flatten.s8,var1.Deref(),var2.Deref()) ;
local_aregs[1] = var9 ;
local_aregs[2] = F(flatten.s30,var5.Deref(),var10,F(flatten.s36,var9.Deref(),var10.Deref(),var11,F(flatten.s40,var3.Deref(),var12,F(flatten.s10,var4.Deref(),F(flatten.s6,var12.Deref(),var11.Deref()),F(flatten.s39,F(flatten.s8,var1.Deref(),var2.Deref()),var4.Deref(),var7.Deref(),var13,F(flatten.s56,var6.Deref(),var13.Deref(),var8.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_find_vars_2::exec_static ;}
}


class pred_make_dummy_clauses_4 extends Code {

/*

make_dummy_clauses((_25676;_25678),_25690,[_25682|_25684],_25694,_25774):-cut(1,copy((_25690:-_25676),_25682,make_dummy_clauses(_25678,_25690,_25684,_25694,_25774))).
make_dummy_clauses(_26016,_26018,[_26010|_26012],_26012,_26080):-copy((_26018:-_26016),_26010,_26080).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_make_dummy_clauses_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_make_dummy_clauses_4__1(PrologMachine mach){ mach.FillAlternative(pred_make_dummy_clauses_4::exec_pred_make_dummy_clauses_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s8,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(flatten.s6,var4,var5)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var6))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(flatten.s23,F(flatten.s7,var3.Deref(),var1.Deref()),var4.Deref(),F(flatten.s39,var2.Deref(),var3.Deref(),var5.Deref(),var6.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_make_dummy_clauses_4__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(flatten.s6,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(flatten.s7,var2.Deref(),var1.Deref()) ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_copy_2::exec_static ;}
}


class pred_find_vars_2 extends Code {

/*

find_vars(_26232,_26234,_26288):-find_vars(_26232,_26234,_26242,unify([],_26242,_26288)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_find_vars_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_find_vars_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var3 ;
local_aregs[3] = F(flatten.s58,Const.Nil,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_find_vars_3::exec_static ;}
}


class pred_find_vars_3 extends Code {

/*

find_vars(_26500,[_26500|_26502],_26502,_26560):-var(_26500,cut(1,_26560)).
find_vars(_26708,_26710,_26710,_26762):-atomic(_26708,cut(1,_26762)).
find_vars([_26910|_26912],_26918,_26920,_26988):-cut(1,find_vars(_26910,_26918,_26928,find_vars(_26912,_26928,_26920,_26988))).
find_vars(_27228,_27230,_27232,_27298):- =..(_27228,[_27236|_27238],find_vars(_27238,_27230,_27232,_27298)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_find_vars_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_find_vars_3__1(PrologMachine mach){ mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s6,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(flatten.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_var_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_find_vars_3__2(PrologMachine mach){ mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(flatten.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_atomic_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_find_vars_3__3(PrologMachine mach){ mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(flatten.s30,var1.Deref(),var3.Deref(),var5,F(flatten.s30,var2.Deref(),var5.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_find_vars_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(flatten.s6,var4,var5) ;
local_aregs[2] = F(flatten.s30,var5.Deref(),var2.Deref(),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_sym_system_univ_2::exec_static ;}
}


class pred_intersect_vars_3 extends Code {

/*

intersect_vars(_27518,_27520,_27522,_27594):-sort_vars(_27518,_27528,sort_vars(_27520,_27534,intersect_sorted_vars(_27528,_27534,_27522,_27594))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_intersect_vars_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_intersect_vars_3__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = F(flatten.s50,var2.Deref(),var5,F(flatten.s35,var4.Deref(),var5.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_sort_vars_2::exec_static ;}
}


class pred_make_dummy_name_2 extends Code {

/*

make_dummy_name(_27870,_27872,_27950):-name('_dummy_',_27878,name(_27870,_27884,append(_27878,_27884,_27892,name(_27872,_27892,_27950)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_make_dummy_name_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_make_dummy_name_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = flatten.s15 ;
local_aregs[1] = var3 ;
local_aregs[2] = F(flatten.s42,var1.Deref(),var4,F(flatten.s17,var3.Deref(),var4.Deref(),var5,F(flatten.s42,var2.Deref(),var5.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_name_2::exec_static ;}
}


class pred_append_3 extends Code {

/*

append([],_28276,_28276,_28300):-call(_28300).
append([_28452|_28454],_28466,[_28452|_28460],_28516):-append(_28454,_28466,_28460,_28516).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_append_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_append_3__1(PrologMachine mach){ mach.FillAlternative(pred_append_3::exec_pred_append_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_append_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(flatten.s6,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_append_3::exec_static ;}
}


class pred_copy_2 extends Code {

/*

copy(_28704,_28706,_28778):-varset(_28704,_28712,make_sym(_28712,_28718,copy2(_28704,_28706,_28718,cut(1,_28778)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_copy_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_copy_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = F(flatten.s41,var3.Deref(),var4,F(flatten.s24,var1.Deref(),var2.Deref(),var4.Deref(),F(flatten.s0, new HeapChoice(mach.CUTB),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_varset_2::exec_static ;}
}


class pred_copy2_3 extends Code {

/*

copy2(_29070,_29072,_29074,_29138):-var(_29070,cut(1,retrieve_sym(_29070,_29074,_29072,_29138))).
copy2(_29380,_29382,_29384,_29480):-nonvar(_29380,cut(1,functor(_29380,_29394,_29396,functor(_29382,_29394,_29396,copy2(_29380,_29382,_29384,1,_29396,_29480))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_copy2_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_copy2_3__1(PrologMachine mach){ mach.FillAlternative(pred_copy2_3::exec_pred_copy2_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s46,var1.Deref(),var3.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_var_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_copy2_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s31,var1.Deref(),var4,var5,F(flatten.s31,var2.Deref(),var4.Deref(),var5.Deref(),F(flatten.s24,var1.Deref(),var2.Deref(),var3.Deref(),flatten.posint1,var5.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_nonvar_1::exec_static ;}
}


class pred_copy2_5 extends Code {

/*

copy2(_29878,_29880,_29882,_29884,_29886,_29950):-smallerthan(_29886,_29884,cut(1,_29950)).
copy2(_30170,_30172,_30174,_30176,_30178,_30320):-smallerorequal(_30176,_30178,cut(1,arg(_30176,_30170,_30192,arg(_30176,_30172,_30200,copy2(_30192,_30200,_30174,is(_30218,_30176+1,copy2(_30170,_30172,_30174,_30218,_30178,_30320))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
Term aregs[] = mach.RegPull(5);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_copy2_5__1(mach); }
public static Function<PrologMachine,Function> exec_pred_copy2_5__1(PrologMachine mach){ mach.FillAlternative(pred_copy2_5::exec_pred_copy2_5__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_copy2_5__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[5] ;
Term areg4 = local_aregs[4].Deref() ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var8 = V(mach) ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg4).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4.Deref() ;
local_aregs[1] = var5.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s18,var4.Deref(),var1.Deref(),var6,F(flatten.s18,var4.Deref(),var2.Deref(),var7,F(flatten.s24,var6.Deref(),var7.Deref(),var3.Deref(),F(flatten.s37,var8,F(flatten.s2,var4.Deref(),flatten.posint1),F(flatten.s24,var1.Deref(),var2.Deref(),var3.Deref(),var8.Deref(),var5.Deref(),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[5] = local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerorequal_2::exec_static ;}
}


class pred_retrieve_sym_3 extends Code {

/*

retrieve_sym(_30886,[p(_30874,_30876)|_30882],_30876,_30942):-termequal(_30886,_30874,cut(1,_30942)).
retrieve_sym(_31158,[_31152|_31154],_31162,_31210):-retrieve_sym(_31158,_31154,_31162,_31210).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_retrieve_sym_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_retrieve_sym_3__1(PrologMachine mach){ mach.FillAlternative(pred_retrieve_sym_3::exec_pred_retrieve_sym_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s6,F(flatten.s45,var2,var3),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_termequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_retrieve_sym_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s6,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_retrieve_sym_3::exec_static ;}
}


class pred_make_sym_2 extends Code {

/*

make_sym([],[],_31446):-call(_31446).
make_sym([_31614|_31616],[p(_31614,_31622)|_31628],_31674):-make_sym(_31616,_31628,_31674).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_make_sym_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_make_sym_2__1(PrologMachine mach){ mach.FillAlternative(pred_make_sym_2::exec_pred_make_sym_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_make_sym_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s6,F(flatten.s45,var1.Deref(),var3),var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_make_sym_2::exec_static ;}
}


class pred_varset_2 extends Code {

/*

varset(_31870,_31872,_31924):-varbag(_31870,_31878,sort(_31878,_31872,_31924)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_varset_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_varset_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3 ;
local_aregs[2] = F(flatten.s49,var3.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_varbag_2::exec_static ;}
}


class pred_varbag_2 extends Code {

/*

varbag(_32176,_32178,_32220):-varbag(_32176,_32178,[],_32220).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_varbag_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_varbag_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Const.Nil ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_varbag_3::exec_static ;}
}


class pred_sym_dcg_arrow_2 extends Code {

/*

-->(varbag(_32442),({var(_32442)},!,[_32442]),_32496):-call(_32496).
-->(varbag(_32682),({nonvar(_32682),!,functor(_32682,_32692,_32694)},varbag(_32682,1,_32694)),_32752):-call(_32752).
-->(varbag(_32938,_32940,_32942),({_32940>_32942},!),_32986):-call(_32986).
-->(varbag(_33172,_33174,_33176),({_33174=<_33176},!,{arg(_33174,_33172,_33194)},varbag(_33194),{_33212 is _33174+1},varbag(_33172,_33212,_33176)),_33284):-call(_33284).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sym_dcg_arrow_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__1(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s60,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s3,F(flatten.s62,F(flatten.s59,var1.Deref())),F(flatten.s3,flatten.s1,F(flatten.s6,var1.Deref(),Const.Nil)))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__2(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s60,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s3,F(flatten.s62,F(flatten.s3,F(flatten.s43,var1.Deref()),F(flatten.s3,flatten.s1,F(flatten.s31,var1.Deref(),var2,var3)))),F(flatten.s60,var1.Deref(),flatten.posint1,var3.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__3(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s60,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s3,F(flatten.s62,F(flatten.s12,var2.Deref(),var3.Deref())),flatten.s1)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s60,var1,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s3,F(flatten.s62,F(flatten.s11,var2.Deref(),var3.Deref())),F(flatten.s3,flatten.s1,F(flatten.s3,F(flatten.s62,F(flatten.s18,var2.Deref(),var1.Deref(),var4)),F(flatten.s3,F(flatten.s60,var4.Deref()),F(flatten.s3,F(flatten.s62,F(flatten.s37,var5,F(flatten.s2,var2.Deref(),flatten.posint1))),F(flatten.s60,var1.Deref(),var5.Deref(),var3.Deref()))))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_inst_vars_1 extends Code {

/*

inst_vars(_33470,_33540):-varset(_33470,_33476,unify([65],[_33480],inst_vars_list(_33476,_33480,_33540))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_inst_vars_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_inst_vars_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = F(flatten.s58,F(flatten.s6,flatten.posint65,Const.Nil),F(flatten.s6,var3,Const.Nil),F(flatten.s34,var2.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_varset_2::exec_static ;}
}


class pred_inst_vars_list_2 extends Code {

/*

inst_vars_list([],_33860,_33882):-call(_33882).
inst_vars_list([_34080|_34082],_34088,_34164):-name(_34080,[_34088],is(_34110,_34088+1,inst_vars_list(_34082,_34110,_34164))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_inst_vars_list_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_inst_vars_list_2__1(PrologMachine mach){ mach.FillAlternative(pred_inst_vars_list_2::exec_pred_inst_vars_list_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_inst_vars_list_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(flatten.s6,var3.Deref(),Const.Nil) ;
local_aregs[2] = F(flatten.s37,var4,F(flatten.s2,var3.Deref(),flatten.posint1),F(flatten.s34,var2.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_name_2::exec_static ;}
}


class pred_sort_vars_2 extends Code {

/*

sort_vars(_34490,_34492,_34534):-sort_vars(_34490,_34492,[],_34534).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sort_vars_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sort_vars_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = Const.Nil ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sort_vars_3::exec_static ;}
}


class pred_sort_vars_3 extends Code {

/*

sort_vars([],_34782,_34782,_34806):-call(_34806).
sort_vars([_35030|_35032],_35038,_35040,_35124):-split_vars(_35032,_35030,_35048,_35050,sort_vars(_35048,_35038,[_35030|_35056],sort_vars(_35050,_35056,_35040,_35124))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sort_vars_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sort_vars_3__1(PrologMachine mach){ mach.FillAlternative(pred_sort_vars_3::exec_pred_sort_vars_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sort_vars_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = var6 ;
local_aregs[4] = F(flatten.s50,var5.Deref(),var3.Deref(),F(flatten.s6,var1.Deref(),var7),F(flatten.s50,var6.Deref(),var7.Deref(),var4.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_split_vars_4::exec_static ;}
}


class pred_intersect_sorted_vars_3 extends Code {

/*

intersect_sorted_vars([],_35528,[],_35570):-cut(1,_35570).
intersect_sorted_vars(_35778,[],[],_35804):-call(_35804).
intersect_sorted_vars([_36034|_36036],[_36040|_36042],[_36034|_36048],_36122):-termequal(_36034,_36040,cut(1,intersect_sorted_vars(_36036,_36042,_36048,_36122))).
intersect_sorted_vars([_36450|_36452],[_36456|_36458],_36466,_36538):-termsmallerthan(_36450,_36456,cut(1,intersect_sorted_vars(_36452,[_36456|_36458],_36466,_36538))).
intersect_sorted_vars([_36866|_36868],[_36872|_36874],_36882,_36954):-termgreaterthan(_36866,_36872,cut(1,intersect_sorted_vars([_36866|_36868],_36874,_36882,_36954))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_intersect_sorted_vars_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_intersect_sorted_vars_3__1(PrologMachine mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_intersect_sorted_vars_3__2(PrologMachine mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_intersect_sorted_vars_3__3(PrologMachine mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s6,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(flatten.s6,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s35,var2.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_termequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_intersect_sorted_vars_3__4(PrologMachine mach){ mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s6,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s35,var2.Deref(),F(flatten.s6,var3.Deref(),var4.Deref()),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_termsmallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_intersect_sorted_vars_3__5(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(flatten.s6,var3,var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s35,F(flatten.s6,var1.Deref(),var2.Deref()),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_termgreaterthan_2::exec_static ;}
}


class pred_split_vars_4 extends Code {

/*

split_vars([],_37284,[],[],_37310):-call(_37310).
split_vars([_37560|_37562],_37574,[_37560|_37568],_37578,_37652):-termsmallerthan(_37560,_37574,cut(1,split_vars(_37562,_37574,_37568,_37578,_37652))).
split_vars([_38008|_38010],_38016,_38018,_38020,_38094):-termequal(_38008,_38016,cut(1,split_vars(_38010,_38016,_38018,_38020,_38094))).
split_vars([_38450|_38452],_38464,_38466,[_38450|_38458],_38542):-termgreaterthan(_38450,_38464,cut(1,split_vars(_38452,_38464,_38466,_38458,_38542))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_split_vars_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_split_vars_4__1(PrologMachine mach){ mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_split_vars_4__2(PrologMachine mach){ mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(flatten.s6,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s51,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_termsmallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_split_vars_4__3(PrologMachine mach){ mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s51,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_termequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_split_vars_4__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(flatten.s6,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(flatten.s6,var1.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = F(flatten.s0, new HeapChoice(mach.CUTB),F(flatten.s51,var2.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_termgreaterthan_2::exec_static ;}
}


