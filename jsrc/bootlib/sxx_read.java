import java.util.function.Function; class sxx_read /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("#") ;
static Const s2 = Const.Intern("(") ;
static Const s3 = Const.Intern(")") ;
static Const s4 = Const.Intern("*") ;
static Const s5 = Const.Intern("+") ;
static Const s6 = Const.Intern(",") ;
static Const s7 = Const.Intern("-") ;
static Const s8 = Const.Intern("->") ;
static Const s9 = Const.Intern(".") ;
static Const s10 = Const.Intern("/") ;
static Const s11 = Const.Intern("//") ;
static Const s12 = Const.Intern(":") ;
static Const s13 = Const.Intern(":-") ;
static Const s14 = Const.Intern(";") ;
static Const s15 = Const.Intern("<") ;
static Const s16 = Const.Intern("<<") ;
static Const s17 = Const.Intern("=") ;
static Const s18 = Const.Intern("=..") ;
static Const s19 = Const.Intern("=:=") ;
static Const s20 = Const.Intern("=<") ;
static Const s21 = Const.Intern("==") ;
static Const s22 = Const.Intern(">") ;
static Const s23 = Const.Intern(">=") ;
static Const s24 = Const.Intern(">>") ;
static Const s25 = Const.Intern("?-") ;
static Const s26 = Const.Intern("@<") ;
static Const s27 = Const.Intern("@=<") ;
static Const s28 = Const.Intern("@>") ;
static Const s29 = Const.Intern("@>=") ;
static Const s30 = Const.Intern("[") ;
static Const s31 = Const.Intern("]") ;
static Const s32 = Const.Intern("^") ;
static Const s33 = Const.Intern("_") ;
static Const s34 = Const.Intern("ap") ;
static Const s35 = Const.Intern("call") ;
static Const s36 = Const.Intern("collectvars") ;
static Const s37 = Const.Intern("const") ;
static Const s38 = Const.Intern("cut") ;
static Const s39 = Const.Intern("end_of_clause") ;
static Const s40 = Const.Intern("end_of_file") ;
static Const s41 = Const.Intern("fail") ;
static Const s42 = Const.Intern("fx") ;
static Const s43 = Const.Intern("fy") ;
static Const s44 = Const.Intern("getargs") ;
static Const s45 = Const.Intern("halt") ;
static Const s46 = Const.Intern("infix") ;
static Const s47 = Const.Intern("int") ;
static Const s48 = Const.Intern("is") ;
static Const s49 = Const.Intern("maketerm") ;
static Const s50 = Const.Intern("mod") ;
static Const s51 = Const.Intern("newprec") ;
static Const s52 = Const.Intern("nexttoken") ;
static Const s53 = Const.Intern("noteq") ;
static Const s54 = Const.Intern("notvmember") ;
static Const s55 = Const.Intern("prefix") ;
static Const s56 = Const.Intern("read") ;
static Const s57 = Const.Intern("readall") ;
static Const s58 = Const.Intern("smallerorequal") ;
static Const s59 = Const.Intern("unify") ;
static Const s60 = Const.Intern("univ") ;
static Const s61 = Const.Intern("var") ;
static Const s62 = Const.Intern("vread") ;
static Const s63 = Const.Intern("xfx") ;
static Const s64 = Const.Intern("xfy") ;
static Const s65 = Const.Intern("yfx") ;
static Const s66 = Const.Intern("|") ;
static Int posint1 = Term.Number(1) ;
static Int posint200 = Term.Number(200) ;
static Int posint300 = Term.Number(300) ;
static Int posint400 = Term.Number(400) ;
static Int posint500 = Term.Number(500) ;
static Int posint550 = Term.Number(550) ;
static Int posint700 = Term.Number(700) ;
static Int posint900 = Term.Number(900) ;
static Int posint1000 = Term.Number(1000) ;
static Int posint1050 = Term.Number(1050) ;
static Int posint1100 = Term.Number(1100) ;
static Int posint1200 = Term.Number(1200) ;
}


class pred_vread_2 extends Code {

/*

vread(_5384,_5386,_5468):-nexttoken(_5390,readall(_5390,_5396,maketerm(_5396,_5384,cut(1,collectvars(_5396,[],_5386,_5468))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_vread_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_vread_2__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var3 ;
local_aregs[1] = F(sxx_read.s57,var3.Deref(),var4,F(sxx_read.s49,var4.Deref(),var1.Deref(),F(sxx_read.s0, new HeapChoice(mach.CUTB),F(sxx_read.s36,var4.Deref(),Const.Nil,var2.Deref(),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_nexttoken_1::exec_static ;}
}


class pred_read_1 extends Code {

/*

read(_456,_468):-nexttoken(_458,readall(_458,_460,maketerm(_460,_456,cut(1,_468)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_read_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_read_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = F(sxx_read.s57,var2.Deref(),var3,F(sxx_read.s49,var3.Deref(),var1.Deref(),F(sxx_read.s0, new HeapChoice(mach.CUTB),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_nexttoken_1::exec_static ;}
}


class pred_collectvars_3 extends Code {

/*

collectvars([],_510,_510,_518):-cut(1,_518).
collectvars([var(_544,_546,_548)|_554],_556,_558,_578):-noteq(_546,'_',notvmember(_546,_556,cut(1,collectvars(_554,[_544=_546|_556],_558,_578)))).
collectvars([_630|_632],_634,_636,_644):-collectvars(_632,_634,_636,_644).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_collectvars_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_collectvars_3__1(PrologMachine mach){ mach.FillAlternative(pred_collectvars_3::exec_pred_collectvars_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_collectvars_3__2(PrologMachine mach){ mach.FillAlternative(pred_collectvars_3::exec_pred_collectvars_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s61,var1,var2,var3),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var5))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = sxx_read.s33 ;
local_aregs[2] = F(sxx_read.s54,var2.Deref(),var5.Deref(),F(sxx_read.s0, new HeapChoice(mach.CUTB),F(sxx_read.s36,var4.Deref(),F(sxx_read.s9,F(sxx_read.s17,var1.Deref(),var2.Deref()),var5.Deref()),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_noteq_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_collectvars_3__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_collectvars_3::exec_static ;}
}


class pred_notvmember_2 extends Code {

/*

notvmember(_672,[],_680):-cut(1,_680).
notvmember(_706,[_704=_706|_712],_720):-cut(1,fail(_720)).
notvmember(_752,[_748|_750],_760):-notvmember(_752,_750,_760).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_notvmember_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_notvmember_2__1(PrologMachine mach){ mach.FillAlternative(pred_notvmember_2::exec_pred_notvmember_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_notvmember_2__2(PrologMachine mach){ mach.FillAlternative(pred_notvmember_2::exec_pred_notvmember_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_read.s9,F(sxx_read.s17,var2,var1.Deref()),var3)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s41,continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_notvmember_2__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_read.s9,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_notvmember_2::exec_static ;}
}


class pred_readall_2 extends Code {

/*

readall(end_of_file,_784,_792):-cut(1,halt(_792)).
readall(end_of_clause,_818,_826):-cut(1,unify([],_818,_826)).
readall(_858,[_858|_860],_870):-nexttoken(_862,readall(_862,_860,_870)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_readall_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_readall_2__1(PrologMachine mach){ mach.FillAlternative(pred_readall_2::exec_pred_readall_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_read.s40))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s45,continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_readall_2__2(PrologMachine mach){ mach.FillAlternative(pred_readall_2::exec_pred_readall_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_read.s39))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s59,Const.Nil,var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_readall_2__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_read.s9,var1.Deref(),var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = F(sxx_read.s57,var3.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_nexttoken_1::exec_static ;}
}


class pred_infix_3 extends Code {

/*

infix(1200,xfx,:-,_908):-call(_908).
infix(1000,xfy,',',_934):-call(_934).
infix(1100,xfy,;,_960):-call(_960).
infix(1050,xfy,->,_986):-call(_986).
infix(700,xfx,=,_1012):-call(_1012).
infix(700,xfx,is,_1038):-call(_1038).
infix(700,xfx,=..,_1064):-call(_1064).
infix(700,xfx,==,_1090):-call(_1090).
infix(700,xfx,@<,_1116):-call(_1116).
infix(700,xfx,@>,_1142):-call(_1142).
infix(700,xfx,@=<,_1168):-call(_1168).
infix(700,xfx,@>=,_1188):-call(_1188).
infix(700,xfx,=:=,_1214):-call(_1214).
infix(700,xfx,<,_1240):-call(_1240).
infix(700,xfx,=<,_1266):-call(_1266).
infix(700,xfx,>,_1292):-call(_1292).
infix(700,xfx,>=,_1318):-call(_1318).
infix(550,xfy,:,_1344):-call(_1344).
infix(500,yfx,+,_1370):-call(_1370).
infix(500,yfx,-,_1396):-call(_1396).
infix(500,yfx,#,_1422):-call(_1422).
infix(400,yfx,*,_1448):-call(_1448).
infix(400,yfx,/,_1474):-call(_1474).
infix(400,yfx,//,_1500):-call(_1500).
infix(400,yfx,<<,_1526):-call(_1526).
infix(400,yfx,>>,_1552):-call(_1552).
infix(300,xfx,mod,_1578):-call(_1578).
infix(200,xfy,^,_1604):-call(_1604).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_infix_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_infix_3__1(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint1200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s13))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__2(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint1000))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s64))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s6))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__3(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint1100))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s64))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s14))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__4(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint1050))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s64))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__5(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s17))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__6(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s48))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__7(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s18))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__8(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s21))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__9(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s26))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__10(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s28))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__11(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s27))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__12(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s29))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__13(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s19))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__14(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s15))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__15(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s20))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__16(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s22))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__17(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint700))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s23))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__18(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint550))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s64))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s12))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__19(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__20) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__20(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__21) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__21(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__22) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__22(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__23) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__23(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__24) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s10))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__24(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__25) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s11))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__25(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__26) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s16))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__26(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__27) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint400))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s24))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__27(PrologMachine mach){ mach.FillAlternative(pred_infix_3::exec_pred_infix_3__28) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint300))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s50))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_infix_3__28(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s64))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s32))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_prefix_3 extends Code {

/*

prefix(1200,fx,:-,_1630):-call(_1630).
prefix(1200,fx,?-,_1656):-call(_1656).
prefix(500,fx,+,_1682):-call(_1682).
prefix(500,fx,-,_1708):-call(_1708).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_prefix_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_prefix_3__1(PrologMachine mach){ mach.FillAlternative(pred_prefix_3::exec_pred_prefix_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint1200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s42))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s13))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prefix_3__2(PrologMachine mach){ mach.FillAlternative(pred_prefix_3::exec_pred_prefix_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint1200))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s42))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s25))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prefix_3__3(PrologMachine mach){ mach.FillAlternative(pred_prefix_3::exec_pred_prefix_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s42))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_prefix_3__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_read.posint500))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(sxx_read.s42))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(sxx_read.s7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_maketerm_3 extends Code {

/*

maketerm([var(_1728,_1730,_1732)],_1740,_1742,_1750):-unify(_1728,_1740,cut(1,_1750)).
maketerm([int(_1784)],_1792,_1794,_1802):-cut(1,unify(_1784,_1792,_1802)).
maketerm([const(_1836)],_1844,_1846,_1854):-cut(1,unify(_1836,_1844,_1854)).
maketerm([const(_1888),const('(')|_1904],_1906,_1908,_1918):-getargs(_1904,_1910,univ(_1906,_1888,_1910,_1918)).
maketerm(_1954,_1956,_1958,_2002):-ap(_1970,[const(_1962)|_1968],_1954,infix(_1972,_1974,_1962,smallerorequal(_1972,_1958,newprec(_1974,_1972,_1976,_1978,maketerm(_1970,_1980,_1976,maketerm(_1968,_1982,_1978,univ(_1956,_1962,[_1980,_1982],_2002))))))).
maketerm([const(_2092)|_2098],_2100,_2102,_2124):-prefix(_2104,_2106,_2092,smallerorequal(_2104,_2102,newprec(_2106,_2104,_2108,maketerm(_2098,_2110,_2108,univ(_2100,_2092,[_2110],_2124))))).
maketerm([const('[')|_2198],[_2202|_2204],_2206,_2236):-ap(_2218,[const(',')|_2216],_2198,maketerm(_2218,_2202,900,maketerm([const('[')|_2216],_2204,900,_2236))).
maketerm([const('[')|_2292],[_2296|_2298],_2300,_2332):-ap(_2312,[const('|')|_2310],_2292,ap(_2324,[const(']')],_2310,maketerm(_2312,_2296,900,maketerm(_2324,_2298,900,_2332)))).
maketerm([const('(')|_2398],_2400,_2402,_2422):-ap(_2414,[const(')')],_2398,cut(1,maketerm(_2414,_2400,_2422))).
maketerm([const('[')|_2472],[_2476],_2480,_2500):-ap(_2492,[const(']')],_2472,maketerm(_2492,_2476,900,_2500)).
maketerm([const('['),const(']')],[],_2558,_2568):-call(_2568).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_maketerm_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_maketerm_3__1(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__2) ;
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
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s61,var1,var2,var3),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = F(sxx_read.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_unify_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__2(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s47,var1),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s59,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__3(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,var1),Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s59,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__4(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__5) ;
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
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,var1),F(sxx_read.s9,F(sxx_read.s37,sxx_read.s2),var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var5 ;
local_aregs[2] = F(sxx_read.s60,var3.Deref(),var1.Deref(),var5.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_getargs_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__5(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = F(sxx_read.s9,F(sxx_read.s37,var5),var6) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s46,var7,var8,var5.Deref(),F(sxx_read.s58,var7.Deref(),var3.Deref(),F(sxx_read.s51,var8.Deref(),var7.Deref(),var9,var10,F(sxx_read.s49,var4.Deref(),var11,var9.Deref(),F(sxx_read.s49,var6.Deref(),var12,var10.Deref(),F(sxx_read.s60,var2.Deref(),var5.Deref(),F(sxx_read.s9,var11.Deref(),F(sxx_read.s9,var12.Deref(),Const.Nil)),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__6(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
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
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,var1),var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var6 ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s58,var5.Deref(),var4.Deref(),F(sxx_read.s51,var6.Deref(),var5.Deref(),var7,F(sxx_read.s49,var2.Deref(),var8,var7.Deref(),F(sxx_read.s60,var3.Deref(),var1.Deref(),F(sxx_read.s9,var8.Deref(),Const.Nil),continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_prefix_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__7(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,sxx_read.s30),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_read.s9,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = F(sxx_read.s9,F(sxx_read.s37,sxx_read.s6),var6) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s49,var5.Deref(),var2.Deref(),sxx_read.posint900,F(sxx_read.s49,F(sxx_read.s9,F(sxx_read.s37,sxx_read.s30),var6.Deref()),var3.Deref(),sxx_read.posint900,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__8(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__9) ;
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
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,sxx_read.s30),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_read.s9,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = F(sxx_read.s9,F(sxx_read.s37,sxx_read.s66),var6) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s34,var7,F(sxx_read.s9,F(sxx_read.s37,sxx_read.s31),Const.Nil),var6.Deref(),F(sxx_read.s49,var5.Deref(),var2.Deref(),sxx_read.posint900,F(sxx_read.s49,var7.Deref(),var3.Deref(),sxx_read.posint900,continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__9(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,sxx_read.s2),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = F(sxx_read.s9,F(sxx_read.s37,sxx_read.s3),Const.Nil) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s0, new HeapChoice(mach.CUTB),F(sxx_read.s49,var4.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__10(PrologMachine mach){ mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,sxx_read.s30),var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_read.s9,var2,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = F(sxx_read.s9,F(sxx_read.s37,sxx_read.s31),Const.Nil) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s49,var4.Deref(),var2.Deref(),sxx_read.posint900,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_maketerm_3__11(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,F(sxx_read.s37,sxx_read.s30),F(sxx_read.s9,F(sxx_read.s37,sxx_read.s31),Const.Nil))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_newprec_4 extends Code {

/*

newprec(xfx,_2586,_2588,_2590,_2610):-cut(1,is(_2588,_2586-1,is(_2590,_2586-1,_2610))).
newprec(xfy,_2652,_2654,_2656,_2670):-cut(1,is(_2654,_2652-1,unify(_2652,_2656,_2670))).
newprec(yfx,_2712,_2714,_2716,_2730):-cut(1,is(_2716,_2712-1,unify(_2712,_2714,_2730))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_newprec_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_newprec_4__1(PrologMachine mach){ mach.FillAlternative(pred_newprec_4::exec_pred_newprec_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_read.s63))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s48,var2.Deref(),F(sxx_read.s7,var1.Deref(),sxx_read.posint1),F(sxx_read.s48,var3.Deref(),F(sxx_read.s7,var1.Deref(),sxx_read.posint1),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_newprec_4__2(PrologMachine mach){ mach.FillAlternative(pred_newprec_4::exec_pred_newprec_4__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_read.s64))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s48,var2.Deref(),F(sxx_read.s7,var1.Deref(),sxx_read.posint1),F(sxx_read.s59,var1.Deref(),var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_newprec_4__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_read.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s48,var3.Deref(),F(sxx_read.s7,var1.Deref(),sxx_read.posint1),F(sxx_read.s59,var1.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
}


class pred_newprec_3 extends Code {

/*

newprec(fx,_2772,_2774,_2788):-cut(1,is(_2774,_2772-1,_2788)).
newprec(fy,_2820,_2820,_2830):-call(_2830).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_newprec_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_newprec_3__1(PrologMachine mach){ mach.FillAlternative(pred_newprec_3::exec_pred_newprec_3__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_read.s42))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_read.s48,var2.Deref(),F(sxx_read.s7,var1.Deref(),sxx_read.posint1),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_newprec_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_read.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_getargs_2 extends Code {

/*

getargs(_2848,_2850,_2878):-ap(_2862,[const(')')],_2848,maketerm(_2862,_2864,900,unify([_2864],_2850,_2878))).
getargs(_2922,_2924,_2952):-ap(_2936,[const(',')|_2934],_2922,maketerm(_2936,_2938,900,unify([_2938|_2944],_2924,getargs(_2934,_2944,_2952)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_getargs_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_getargs_2__1(PrologMachine mach){ mach.FillAlternative(pred_getargs_2::exec_pred_getargs_2__2) ;
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
local_aregs[0] = var3 ;
local_aregs[1] = F(sxx_read.s9,F(sxx_read.s37,sxx_read.s3),Const.Nil) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s49,var3.Deref(),var4,sxx_read.posint900,F(sxx_read.s59,F(sxx_read.s9,var4.Deref(),Const.Nil),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_getargs_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = F(sxx_read.s9,F(sxx_read.s37,sxx_read.s6),var4) ;
local_aregs[2] = var1.Deref() ;
local_aregs[3] = F(sxx_read.s49,var3.Deref(),var5,sxx_read.posint900,F(sxx_read.s59,F(sxx_read.s9,var5.Deref(),var6),var2.Deref(),F(sxx_read.s44,var4.Deref(),var6.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
}


class pred_maketerm_2 extends Code {

/*

maketerm(_3004,_3006,_3014):-maketerm(_3004,_3006,1200,_3014).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_maketerm_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_maketerm_2__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[2] = sxx_read.posint1200 ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_maketerm_3::exec_static ;}
}


class pred_ap_3 extends Code {

/*

ap([],_3040,_3040,_3050):-call(_3050).
ap([_3070|_3072],_3080,[_3070|_3078],_3088):-ap(_3072,_3080,_3078,_3088).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_ap_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_ap_3__1(PrologMachine mach){ mach.FillAlternative(pred_ap_3::exec_pred_ap_3__2) ;
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
public static Function<PrologMachine,Function> exec_pred_ap_3__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_read.s9,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(sxx_read.s9,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ap_3::exec_static ;}
}


