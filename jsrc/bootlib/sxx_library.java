import java.util.function.Function; class sxx_library /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern(" = ") ;
static Const s2 = Const.Intern(",") ;
static Const s3 = Const.Intern("-") ;
static Const s4 = Const.Intern("->") ;
static Const s5 = Const.Intern(".") ;
static Const s6 = Const.Intern(":-") ;
static Const s7 = Const.Intern(";") ;
static Const s8 = Const.Intern("<") ;
static Const s9 = Const.Intern("=") ;
static Const s10 = Const.Intern("=:=") ;
static Const s11 = Const.Intern("=<") ;
static Const s12 = Const.Intern("==") ;
static Const s13 = Const.Intern(">") ;
static Const s14 = Const.Intern(">=") ;
static Const s15 = Const.Intern("?- ") ;
static Const s16 = Const.Intern("@<") ;
static Const s17 = Const.Intern("@=<") ;
static Const s18 = Const.Intern("@>") ;
static Const s19 = Const.Intern("@>=") ;
static Const s20 = Const.Intern("Yes") ;
static Const s21 = Const.Intern("addfindall") ;
static Const s22 = Const.Intern("allassumed") ;
static Const s23 = Const.Intern("append") ;
static Const s24 = Const.Intern("arithequal") ;
static Const s25 = Const.Intern("assume") ;
static Const s26 = Const.Intern("assumed") ;
static Const s27 = Const.Intern("assumeduring") ;
static Const s28 = Const.Intern("atom") ;
static Const s29 = Const.Intern("atomic") ;
static Const s30 = Const.Intern("atomic2") ;
static Const s31 = Const.Intern("call") ;
static Const s32 = Const.Intern("compare") ;
static Const s33 = Const.Intern("copy_term") ;
static Const s34 = Const.Intern("cputime") ;
static Const s35 = Const.Intern("cut") ;
static Const s36 = Const.Intern("exec") ;
static Const s37 = Const.Intern("execcontinuation") ;
static Const s38 = Const.Intern("execdisj") ;
static Const s39 = Const.Intern("execpendinggoals") ;
static Const s40 = Const.Intern("fail") ;
static Const s41 = Const.Intern("findall") ;
static Const s42 = Const.Intern("findall2") ;
static Const s43 = Const.Intern("freeze") ;
static Const s44 = Const.Intern("freeze_internal") ;
static Const s45 = Const.Intern("get0") ;
static Const s46 = Const.Intern("initfindall") ;
static Const s47 = Const.Intern("integer") ;
static Const s48 = Const.Intern("is") ;
static Const s49 = Const.Intern("loop") ;
static Const s50 = Const.Intern("m1") ;
static Const s51 = Const.Intern("max") ;
static Const s52 = Const.Intern("nl") ;
static Const s53 = Const.Intern("not") ;
static Const s54 = Const.Intern("noteq") ;
static Const s55 = Const.Intern("notmore") ;
static Const s56 = Const.Intern("nrev") ;
static Const s57 = Const.Intern("or") ;
static Const s58 = Const.Intern("retrievefindall") ;
static Const s59 = Const.Intern("runtime") ;
static Const s60 = Const.Intern("smallerorequal") ;
static Const s61 = Const.Intern("smallerthan") ;
static Const s62 = Const.Intern("smeq") ;
static Const s63 = Const.Intern("smgr") ;
static Const s64 = Const.Intern("sort") ;
static Const s65 = Const.Intern("specialgoal") ;
static Const s66 = Const.Intern("split") ;
static Const s67 = Const.Intern("statistics") ;
static Const s68 = Const.Intern("termequal") ;
static Const s69 = Const.Intern("termgreaterequal") ;
static Const s70 = Const.Intern("termgreaterthan") ;
static Const s71 = Const.Intern("termsmallerequal") ;
static Const s72 = Const.Intern("termsmallerthan") ;
static Const s73 = Const.Intern("time") ;
static Const s74 = Const.Intern("top") ;
static Const s75 = Const.Intern("toplevel") ;
static Const s76 = Const.Intern("true") ;
static Const s77 = Const.Intern("type_of") ;
static Const s78 = Const.Intern("unify") ;
static Const s79 = Const.Intern("untilend") ;
static Const s80 = Const.Intern("var") ;
static Const s81 = Const.Intern("vread") ;
static Const s82 = Const.Intern("write") ;
static Const s83 = Const.Intern("writevars") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint10 = Term.Number(10) ;
}


class pred_toplevel_0 extends Code {

/*

toplevel(_394):-top(fail(_394)).
toplevel(_420):-toplevel(_420).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_toplevel_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_toplevel_0__1(PrologMachine mach){ mach.FillAlternative(pred_toplevel_0::exec_pred_toplevel_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(sxx_library.s40,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_top_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_toplevel_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_toplevel_0::exec_static ;}
}


class pred_top_0 extends Code {

/*

top(_446):-write('?- ',vread(_436,_438,exec(_436,writevars(_438,write('Yes',nl(notmore(cut(1,fail(_446))))))))).
top(_514):-top(_514).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_top_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_top_0__1(PrologMachine mach){ mach.FillAlternative(pred_top_0::exec_pred_top_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = sxx_library.s15 ;
local_aregs[1] = F(sxx_library.s81,var1,var2,F(sxx_library.s36,var1.Deref(),F(sxx_library.s83,var2.Deref(),F(sxx_library.s82,sxx_library.s20,F(sxx_library.s52,F(sxx_library.s55,F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s40,continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_top_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_top_0::exec_static ;}
}


class pred_notmore_0 extends Code {

/*

notmore(_538):-get0(_530,noteq(_530,10,cut(1,untilend(_530,fail(_538))))).
notmore(_588):-call(_588).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_notmore_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_notmore_0__1(PrologMachine mach){ mach.FillAlternative(pred_notmore_0::exec_pred_notmore_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = V(mach) ;
local_aregs[0] = var1 ;
local_aregs[1] = F(sxx_library.s54,var1.Deref(),sxx_library.posint10,F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s79,var1.Deref(),F(sxx_library.s40,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_get0_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_notmore_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_noteq_2 extends Code {

/*

noteq(_600,_600,_608):-cut(1,fail(_608)).
noteq(_634,_636,_646):-call(_646).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_noteq_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_noteq_2__1(PrologMachine mach){ mach.FillAlternative(pred_noteq_2::exec_pred_noteq_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_library.s40,continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_noteq_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_untilend_1 extends Code {

/*

untilend(10,_668):-cut(1,_668).
untilend(_688,_698):-get0(_690,untilend(_690,_698)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_untilend_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_untilend_1__1(PrologMachine mach){ mach.FillAlternative(pred_untilend_1::exec_pred_untilend_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.posint10))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_untilend_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = F(sxx_library.s79,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_get0_1::exec_static ;}
}


class pred_writevars_1 extends Code {

/*

writevars([],_732):-call(_732).
writevars([_748=_750|_756],_764):-write(_750,write(' = ',write(_748,nl(fail(_764))))).
writevars([_806|_808],_816):-writevars(_808,_816).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_writevars_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_writevars_1__1(PrologMachine mach){ mach.FillAlternative(pred_writevars_1::exec_pred_writevars_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_writevars_1__2(PrologMachine mach){ mach.FillAlternative(pred_writevars_1::exec_pred_writevars_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s5,F(sxx_library.s9,var1,var2),var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = F(sxx_library.s82,sxx_library.s1,F(sxx_library.s82,var1.Deref(),F(sxx_library.s52,F(sxx_library.s40,continuation)))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_writevars_1__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_writevars_1::exec_static ;}
}


class pred_nrev_2 extends Code {

/*

nrev([],[],_836):-cut(1,_836).
nrev([_860|_862],_864,_880):-nrev(_862,_866,append(_866,[_860],_864,_880)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_nrev_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_nrev_2__1(PrologMachine mach){ mach.FillAlternative(pred_nrev_2::exec_pred_nrev_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_nrev_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = F(sxx_library.s23,var4.Deref(),F(sxx_library.s5,var1.Deref(),Const.Nil),var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_nrev_2::exec_static ;}
}


class pred_append_3 extends Code {

/*

append([],_914,_914,_924):-call(_924).
append([_944|_946],_954,[_944|_952],_962):-append(_946,_954,_952,_962).


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
if (!( (areg0).Unify(F(sxx_library.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(sxx_library.s5,var1.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_append_3::exec_static ;}
}


class pred_max_3 extends Code {

/*

max(_990,_992,_992,_1000):-smallerthan(_990,_992,_1000).
max(_1026,_1028,_1026,_1036):-smallerthan(_1028,_1026,_1036).
max(_1062,_1062,_1062,_1072):-call(_1072).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_max_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_max_3__1(PrologMachine mach){ mach.FillAlternative(pred_max_3::exec_pred_max_3__2) ;
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
local_aregs[1] = var2.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_max_3__2(PrologMachine mach){ mach.FillAlternative(pred_max_3::exec_pred_max_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_max_3__3(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var1.Deref()))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_sort_2 extends Code {

/*

sort([],[],_1096):-cut(1,_1096).
sort([_1120|_1122],_1124,_1146):-split(_1120,_1122,_1126,_1128,sort(_1126,_1130,sort(_1128,_1132,append(_1130,[_1120|_1132],_1124,_1146)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_sort_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_sort_2__1(PrologMachine mach){ mach.FillAlternative(pred_sort_2::exec_pred_sort_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_sort_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = var5 ;
local_aregs[4] = F(sxx_library.s64,var4.Deref(),var6,F(sxx_library.s64,var5.Deref(),var7,F(sxx_library.s23,var6.Deref(),F(sxx_library.s5,var1.Deref(),var7.Deref()),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_split_4::exec_static ;}
}


class pred_split_4 extends Code {

/*

split(_1200,[],[],[],_1208):-cut(1,_1208).
split(_1246,[_1236|_1238],[_1236|_1244],_1248,_1256):-smallerthan(_1236,_1246,cut(1,split(_1246,_1238,_1244,_1248,_1256))).
split(_1314,[_1304|_1306],_1316,[_1304|_1312],_1324):-split(_1314,_1306,_1316,_1312,_1324).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_split_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_split_4__1(PrologMachine mach){ mach.FillAlternative(pred_split_4::exec_pred_split_4__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_split_4__2(PrologMachine mach){ mach.FillAlternative(pred_split_4::exec_pred_split_4__3) ;
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
if (!( (areg1).Unify(F(sxx_library.s5,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(F(sxx_library.s5,var2.Deref(),var4)))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var5))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s66,var1.Deref(),var3.Deref(),var4.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_smallerthan_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_split_4__3(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg1).Unify(F(sxx_library.s5,var2,var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var4))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(F(sxx_library.s5,var2.Deref(),var5)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = var4.Deref() ;
local_aregs[3] = var5.Deref() ;
local_aregs[4] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_split_4::exec_static ;}
}


class pred_time_1 extends Code {

/*

time(_1356,_1376):-cputime(_1358,exec(_1356,cputime(_1360,is(_1368,_1360-_1358,write(_1368,nl(_1376)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_time_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_time_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = F(sxx_library.s36,var1.Deref(),F(sxx_library.s34,var3,F(sxx_library.s48,var4,F(sxx_library.s3,var3.Deref(),var2.Deref()),F(sxx_library.s82,var4.Deref(),F(sxx_library.s52,continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_cputime_1::exec_static ;}
}


class pred_exec_1 extends Code {

/*

exec(_1426,_1434):-var(_1426,cut(1,fail(_1434))).
exec((_1466,_1468),_1476):-cut(1,exec(_1466,exec(_1468,_1476))).
exec((_1510->_1512),_1526):-cut(1,execdisj((_1510->_1512),true,_1526)).
exec((_1556;_1558),_1566):-cut(1,execdisj(_1556,_1558,_1566)).
exec(_1594,_1604):-specialgoal(_1594,_1596,cut(1,exec(_1596,_1604))).
exec(_1638,_1646):-call(_1638,_1646).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_exec_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_exec_1__1(PrologMachine mach){ mach.FillAlternative(pred_exec_1::exec_pred_exec_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s40,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_var_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_exec_1__2(PrologMachine mach){ mach.FillAlternative(pred_exec_1::exec_pred_exec_1__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s2,var1,var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_library.s36,var1.Deref(),F(sxx_library.s36,var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_exec_1__3(PrologMachine mach){ mach.FillAlternative(pred_exec_1::exec_pred_exec_1__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s4,var1,var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_library.s38,F(sxx_library.s4,var1.Deref(),var2.Deref()),sxx_library.s76,continuation) ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_exec_1__4(PrologMachine mach){ mach.FillAlternative(pred_exec_1::exec_pred_exec_1__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s7,var1,var2)))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_library.s38,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_exec_1__5(PrologMachine mach){ mach.FillAlternative(pred_exec_1::exec_pred_exec_1__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s36,var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_specialgoal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_exec_1__6(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call2 ;}
}


class pred_execdisj_2 extends Code {

/*

execdisj((_1668->_1670),_1672,_1680):-exec(_1668,cut(1,exec(_1670,_1680))).
execdisj((_1716->_1718),_1720,_1728):-cut(1,exec(_1720,_1728)).
execdisj(_1756,_1758,_1766):-exec(_1756,_1766).
execdisj(_1788,_1790,_1798):-exec(_1790,_1798).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_execdisj_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_execdisj_2__1(PrologMachine mach){ mach.FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s4,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s36,var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_execdisj_2__2(PrologMachine mach){ mach.FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s4,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var3))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_library.s36,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_execdisj_2__3(PrologMachine mach){ mach.FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_execdisj_2__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
}


class pred_loop_1 extends Code {

/*

loop(0,_1826):-cut(1,_1826).
loop(_1846,_1862):-is(_1854,_1846-1,loop(_1854,_1862)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_loop_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_loop_1__1(PrologMachine mach){ mach.FillAlternative(pred_loop_1::exec_pred_loop_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.posint0))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_loop_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = F(sxx_library.s3,var1.Deref(),sxx_library.posint1) ;
local_aregs[2] = F(sxx_library.s49,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_is_2::exec_static ;}
}


class pred_or_2 extends Code {

/*

or(_1890,_1892,_1900):-exec(_1890,_1900).
or(_1922,_1924,_1932):-exec(_1924,_1932).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_or_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_or_2__1(PrologMachine mach){ mach.FillAlternative(pred_or_2::exec_pred_or_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_or_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
}


class pred_findall_3 extends Code {

/*

findall(_1954,_1956,_1958,_1968):-initfindall(_1960,findall2(_1954,_1956,_1958,_1960,_1968)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_findall_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_findall_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var4 ;
local_aregs[1] = F(sxx_library.s42,var1.Deref(),var2.Deref(),var3.Deref(),var4.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_initfindall_1::exec_static ;}
}


class pred_findall2_4 extends Code {

/*

findall2(_2004,_2006,_2008,_2010,_2018):-exec(_2006,addfindall(_2004,_2010,fail(_2018))).
findall2(_2056,_2058,_2060,_2062,_2070):-retrievefindall(_2060,_2062,_2070).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_findall2_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_findall2_4__1(PrologMachine mach){ mach.FillAlternative(pred_findall2_4::exec_pred_findall2_4__2) ;
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
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = F(sxx_library.s21,var1.Deref(),var4.Deref(),F(sxx_library.s40,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_findall2_4__2(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3.Deref() ;
local_aregs[1] = var4.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_retrievefindall_2::exec_static ;}
}


class pred_copy_term_2 extends Code {

/*

copy_term(_2098,_2100,_2120):-findall(_2104,_2104=_2098,[_2100],_2120).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_copy_term_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_copy_term_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = F(sxx_library.s9,var3.Deref(),var1.Deref()) ;
local_aregs[2] = F(sxx_library.s5,var2.Deref(),Const.Nil) ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_findall_3::exec_static ;}
}


class pred_var_1 extends Code {

/*

var(_2146,_2154):-type_of(_2146,var,_2154).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_var_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_var_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = sxx_library.s80 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_type_of_2::exec_static ;}
}


class pred_atomic_1 extends Code {

/*

atomic(_2176,_2186):-type_of(_2176,_2178,atomic2(_2178,_2186)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_atomic_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_atomic_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2 ;
local_aregs[2] = F(sxx_library.s30,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_type_of_2::exec_static ;}
}


class pred_atomic2_1 extends Code {

/*

atomic2(atom,_2220):-cut(1,_2220).
atomic2(integer,_2248):-call(_2248).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_atomic2_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_atomic2_1__1(PrologMachine mach){ mach.FillAlternative(pred_atomic2_1::exec_pred_atomic2_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.s28))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_atomic2_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.s47))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_atom_1 extends Code {

/*

atom(_2262,_2270):-type_of(_2262,atom,_2270).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_atom_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_atom_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = sxx_library.s28 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_type_of_2::exec_static ;}
}


class pred_integer_1 extends Code {

/*

integer(_2292,_2300):-type_of(_2292,integer,_2300).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_integer_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_integer_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = sxx_library.s47 ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_type_of_2::exec_static ;}
}


class pred_assumeduring_2 extends Code {

/*

assumeduring(_2322,_2324,_2338):-assume(_2324-_2330,exec(_2322,unify(1,_2330,_2338))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_assumeduring_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_assumeduring_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(sxx_library.s3,var2.Deref(),var3) ;
local_aregs[1] = F(sxx_library.s36,var1.Deref(),F(sxx_library.s78,sxx_library.posint1,var3.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_assume_1::exec_static ;}
}


class pred_assumed_1 extends Code {

/*

assumed(_2374,_2384):-allassumed(_2376,m1(_2374,_2376,_2384)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_assumed_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_assumed_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2 ;
local_aregs[1] = F(sxx_library.s50,var1.Deref(),var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_allassumed_1::exec_static ;}
}


class pred_m1_2 extends Code {

/*

m1(_2414,[_2414-_2416|_2422],_2430):-var(_2416,_2430).
m1(_2458,[_2454|_2456],_2466):-m1(_2458,_2456,_2466).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_m1_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_m1_2__1(PrologMachine mach){ mach.FillAlternative(pred_m1_2::exec_pred_m1_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s5,F(sxx_library.s3,var1.Deref(),var2),var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_var_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_m1_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s5,var2,var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_m1_2::exec_static ;}
}


class pred_statistics_2 extends Code {

/*

statistics(runtime,[_2492,_2498],_2508):-cputime(_2492,_2508).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_statistics_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_statistics_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(sxx_library.s59))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s5,var1,F(sxx_library.s5,var2,Const.Nil))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_cputime_1::exec_static ;}
}


class pred_specialgoal_2 extends Code {

/*

specialgoal(_2532<_2534,smallerthan(_2532,_2534),_2548):-cut(1,_2548).
specialgoal(_2572=<_2574,smallerorequal(_2572,_2574),_2588):-cut(1,_2588).
specialgoal(_2612>_2614,smallerthan(_2614,_2612),_2628):-cut(1,_2628).
specialgoal(_2652>=_2654,smallerorequal(_2654,_2652),_2668):-cut(1,_2668).
specialgoal(_2692=:=_2694,arithequal(_2694,_2692),_2708):-cut(1,_2708).
specialgoal(_2732=_2734,unify(_2734,_2732),_2748):-cut(1,_2748).
specialgoal((_2772;_2774),or(_2772,_2774),_2788):-cut(1,_2788).
specialgoal(_2812@<_2814,termsmallerthan(_2812,_2814),_2828):-cut(1,_2828).
specialgoal(_2852@>_2854,termgreaterthan(_2852,_2854),_2868):-cut(1,_2868).
specialgoal(_2892@=<_2894,termsmallerequal(_2892,_2894),_2908):-cut(1,_2908).
specialgoal(_2932@>=_2934,termgreaterequal(_2932,_2934),_2948):-cut(1,_2948).
specialgoal(_2972==_2974,termequal(_2972,_2974),_2988):-cut(1,_2988).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_specialgoal_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__1(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s8,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s61,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__2(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s11,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s60,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__3(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s13,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s61,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__4(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s14,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s60,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__5(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s10,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s24,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__6(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s9,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s78,var2.Deref(),var1.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__7(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s7,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s57,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__8(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s16,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s72,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__9(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s18,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s70,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__10(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s17,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s71,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__11(PrologMachine mach){ mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s19,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s69,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_specialgoal_2__12(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s12,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(sxx_library.s68,var1.Deref(),var2.Deref())))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}
}


class pred_termsmallerthan_2 extends Code {

/*

termsmallerthan(_3010,_3012,_3020):-compare(<,_3010,_3012,_3020).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_termsmallerthan_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_termsmallerthan_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = sxx_library.s8 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_termgreaterthan_2 extends Code {

/*

termgreaterthan(_3046,_3048,_3056):-compare(>,_3046,_3048,_3056).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_termgreaterthan_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_termgreaterthan_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = sxx_library.s13 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_termsmallerequal_2 extends Code {

/*

termsmallerequal(_3082,_3084,_3094):-compare(_3086,_3082,_3084,smeq(_3086,_3094)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_termsmallerequal_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_termsmallerequal_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = F(sxx_library.s62,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_smeq_1 extends Code {

/*

smeq(<,_3132):-cut(1,_3132).
smeq(=,_3160):-call(_3160).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_smeq_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_smeq_1__1(PrologMachine mach){ mach.FillAlternative(pred_smeq_1::exec_pred_smeq_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.s8))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_smeq_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.s9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_termgreaterequal_2 extends Code {

/*

termgreaterequal(_3174,_3176,_3186):-compare(_3178,_3174,_3176,smgr(_3178,_3186)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_termgreaterequal_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_termgreaterequal_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var3 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = F(sxx_library.s63,var3.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_smgr_1 extends Code {

/*

smgr(>,_3224):-cut(1,_3224).
smgr(=,_3252):-call(_3252).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_smgr_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_smgr_1__1(PrologMachine mach){ mach.FillAlternative(pred_smgr_1::exec_pred_smgr_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.s13))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Cut2 ;}
public static Function<PrologMachine,Function> exec_pred_smgr_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(sxx_library.s9))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_termequal_2 extends Code {

/*

termequal(_3266,_3268,_3276):-compare(=,_3266,_3268,_3276).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_termequal_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_termequal_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = sxx_library.s9 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = var2.Deref() ;
local_aregs[3] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_compare_3::exec_static ;}
}


class pred_not_1 extends Code {

/*

not(_3302,_3310):-exec(_3302,cut(1,fail(_3310))).
not(_3340,_3350):-call(_3350).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_not_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_not_1__1(PrologMachine mach){ mach.FillAlternative(pred_not_1::exec_pred_not_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s40,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_not_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_freeze_2 extends Code {

/*

freeze(_3364,_3366,_3374):-var(_3364,cut(1,freeze_internal(_3364,_3366,_3374))).
freeze(_3410,_3412,_3420):-exec(_3412,_3420).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_freeze_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_freeze_2__1(PrologMachine mach){ mach.FillAlternative(pred_freeze_2::exec_pred_freeze_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(sxx_library.s0, new HeapChoice(mach.CUTB),F(sxx_library.s44,var1.Deref(),var2.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_var_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_freeze_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
}


class pred_execpendinggoals_1 extends Code {

/*

execpendinggoals([],_3448):-execcontinuation(_3448).
execpendinggoals([_3468|_3470],_3478):-exec(_3468,execpendinggoals(_3470,_3478)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_execpendinggoals_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_execpendinggoals_1__1(PrologMachine mach){ mach.FillAlternative(pred_execpendinggoals_1::exec_pred_execpendinggoals_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_execcontinuation_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_execpendinggoals_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(sxx_library.s5,var1,var2)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(sxx_library.s39,var2.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_exec_1::exec_static ;}
}


