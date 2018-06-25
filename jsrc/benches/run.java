import java.util.function.Function; class run /*extends CodeFile*/ {static Const s0 = Const.Intern("cut") ;
static Const s1 = Const.Intern("!") ;
static Const s2 = Const.Intern("*") ;
static Const s3 = Const.Intern("+") ;
static Const s4 = Const.Intern(",") ;
static Const s5 = Const.Intern("-") ;
static Const s6 = Const.Intern("-->") ;
static Const s7 = Const.Intern("->") ;
static Const s8 = Const.Intern(".") ;
static Const s9 = Const.Intern("/") ;
static Const s10 = Const.Intern("/opt/logicmoo_workspace/taupl/SxxMachine/prolog/bench") ;
static Const s11 = Const.Intern(":") ;
static Const s12 = Const.Intern(":-") ;
static Const s13 = Const.Intern(";") ;
static Const s14 = Const.Intern("<<") ;
static Const s15 = Const.Intern("GC") ;
static Const s16 = Const.Intern("Program") ;
static Const s17 = Const.Intern("Time") ;
static Const s18 = Const.Intern("\\+") ;
static Const s19 = Const.Intern("add") ;
static Const s20 = Const.Intern("arg") ;
static Const s21 = Const.Intern("arithequal") ;
static Const s22 = Const.Intern("assert") ;
static Const s23 = Const.Intern("average") ;
static Const s24 = Const.Intern("bench") ;
static Const s25 = Const.Intern("between") ;
static Const s26 = Const.Intern("boyer") ;
static Const s27 = Const.Intern("browse") ;
static Const s28 = Const.Intern("call") ;
static Const s29 = Const.Intern("changed") ;
static Const s30 = Const.Intern("chat_parser") ;
static Const s31 = Const.Intern("compile_programs") ;
static Const s32 = Const.Intern("crypt") ;
static Const s33 = Const.Intern("current_output") ;
static Const s34 = Const.Intern("cut") ;
static Const s35 = Const.Intern("directory") ;
static Const s36 = Const.Intern("dummy") ;
static Const s37 = Const.Intern("dynamic") ;
static Const s38 = Const.Intern("erase") ;
static Const s39 = Const.Intern("fail") ;
static Const s40 = Const.Intern("fast_mu") ;
static Const s41 = Const.Intern("file_search_path") ;
static Const s42 = Const.Intern("findall") ;
static Const s43 = Const.Intern("flatten") ;
static Const s44 = Const.Intern("forall") ;
static Const s45 = Const.Intern("format") ;
static Const s46 = Const.Intern("garbage_collect") ;
static Const s47 = Const.Intern("gctime") ;
static Const s48 = Const.Intern("get_performance_stats") ;
static Const s49 = Const.Intern("if") ;
static Const s50 = Const.Intern("is") ;
static Const s51 = Const.Intern("load_files") ;
static Const s52 = Const.Intern("max") ;
static Const s53 = Const.Intern("meta_qsort") ;
static Const s54 = Const.Intern("mu") ;
static Const s55 = Const.Intern("nb_setarg") ;
static Const s56 = Const.Intern("not_dummy") ;
static Const s57 = Const.Intern("not_not_dummy") ;
static Const s58 = Const.Intern("not_not_top") ;
static Const s59 = Const.Intern("not_top") ;
static Const s60 = Const.Intern("nreverse") ;
static Const s61 = Const.Intern("ntimes") ;
static Const s62 = Const.Intern("ntimes_dummy") ;
static Const s63 = Const.Intern("on_load_run") ;
static Const s64 = Const.Intern("phrase") ;
static Const s65 = Const.Intern("poly_10") ;
static Const s66 = Const.Intern("program") ;
static Const s67 = Const.Intern("prolog_load_context") ;
static Const s68 = Const.Intern("prover") ;
static Const s69 = Const.Intern("qsort") ;
static Const s70 = Const.Intern("queens_8") ;
static Const s71 = Const.Intern("query") ;
static Const s72 = Const.Intern("reducer") ;
static Const s73 = Const.Intern("retractall") ;
static Const s74 = Const.Intern("rni") ;
static Const s75 = Const.Intern("round") ;
static Const s76 = Const.Intern("run") ;
static Const s77 = Const.Intern("run_interleaved") ;
static Const s78 = Const.Intern("run_non_interleaved") ;
static Const s79 = Const.Intern("run_program") ;
static Const s80 = Const.Intern("sendmore") ;
static Const s81 = Const.Intern("seq_clause") ;
static Const s82 = Const.Intern("seq_interleaved") ;
static Const s83 = Const.Intern("seq_non_interleaved") ;
static Const s84 = Const.Intern("silent") ;
static Const s85 = Const.Intern("simple_analyzer") ;
static Const s86 = Const.Intern("singleton") ;
static Const s87 = Const.Intern("smallerthan") ;
static Const s88 = Const.Intern("statistics") ;
static Const s89 = Const.Intern("style_check") ;
static Const s90 = Const.Intern("tak") ;
static Const s91 = Const.Intern("time") ;
static Const s92 = Const.Intern("top") ;
static Const s93 = Const.Intern("total") ;
static Const s94 = Const.Intern("true") ;
static Const s95 = Const.Intern("tune_count") ;
static Const s96 = Const.Intern("tune_counts") ;
static Const s97 = Const.Intern("unify") ;
static Const s98 = Const.Intern("user") ;
static Const s99 = Const.Intern("write") ;
static Const s100 = Const.Intern("zebra") ;
static Const s101 = Const.Intern("{}") ;
static Const s102 = Const.Intern("~`=t~32|~n") ;
static Const s103 = Const.Intern("~p~t~18| ~t~3f~25| ~t~3f~32|~n") ;
static Const s104 = Const.Intern("~p~t~18| ~t~w~25| ~t~w~32|~n") ;
static Const s105 = Const.Intern("~q.~n") ;
static Const s106 = Const.Intern("~t~w~18| ~t~3f~25| ~t~3f~32|~n") ;
static Int posint0 = Term.Number(0) ;
static Int posint1 = Term.Number(1) ;
static Int posint2 = Term.Number(2) ;
static Int posint3 = Term.Number(3) ;
static Int posint7 = Term.Number(7) ;
static Int posint8 = Term.Number(8) ;
static Int posint35 = Term.Number(35) ;
static Int posint44 = Term.Number(44) ;
static Int posint46 = Term.Number(46) ;
static Int posint63 = Term.Number(63) ;
static Int posint100 = Term.Number(100) ;
static Int posint105 = Term.Number(105) ;
static Int posint164 = Term.Number(164) ;
static Int posint166 = Term.Number(166) ;
static Int posint320 = Term.Number(320) ;
static Int posint868 = Term.Number(868) ;
static Int posint966 = Term.Number(966) ;
static Int posint1219 = Term.Number(1219) ;
static Int posint4819 = Term.Number(4819) ;
static Int posint6400 = Term.Number(6400) ;
static Int posint6827 = Term.Number(6827) ;
static Int posint8275 = Term.Number(8275) ;
static Int posint8445 = Term.Number(8445) ;
static Int posint11378 = Term.Number(11378) ;
}


class pred_on_load_run_0 extends Code {

/*

on_load_run(_4732):-write(style_check(-singleton),_4732).
on_load_run(_5762):-write((file_search_path(bench,_5676)->true;prolog_load_context(directory,'/opt/logicmoo_workspace/taupl/SxxMachine/prolog/bench'),assert(user:file_search_path(bench,'/opt/logicmoo_workspace/taupl/SxxMachine/prolog/bench'))),_5762).
on_load_run(_6992):-write(if(statistics(gctime,_6950)),_6992).
on_load_run(_14844):-write((dynamic rni/0),_14844).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_on_load_run_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_on_load_run_0__1(PrologMachine mach){ mach.FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(run.s89,F(run.s5,run.s86)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_on_load_run_0__2(PrologMachine mach){ mach.FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = V(mach) ;
local_aregs[0] = F(run.s13,F(run.s7,F(run.s41,run.s24,var1),run.s94),F(run.s4,F(run.s67,run.s35,run.s10),F(run.s22,F(run.s11,run.s98,F(run.s41,run.s24,run.s10))))) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_on_load_run_0__3(PrologMachine mach){ mach.FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = V(mach) ;
local_aregs[0] = F(run.s49,F(run.s88,run.s47,var1)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_on_load_run_0__4(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(run.s37,F(run.s9,run.s74,run.posint0)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_write_1::exec_static ;}
}


class pred_run_1 extends Code {

/*

run(_4796,_4830):-run(current_output,_4796,_4830).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_run_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_run_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = run.s33 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_run_2::exec_static ;}
}


class pred_run_2 extends Code {

/*

run(_4922,_4924,_5142):-compile_programs(format(_4922,'~p~t~18| ~t~w~25| ~t~w~32|~n',['Program','Time','GC'],format(_4922,'~`=t~32|~n',[],unify(total(0,0,0),_4970,forall(program(_4976,_4978,_4924),run_program(_4976,_4978,_4922,_4970),unify(total(_5000,_5002,_5004),_4970,is(_5020,_5002/_5000,is(_5032,_5004/_5000,format(_4922,'~t~w~18| ~t~3f~25| ~t~3f~32|~n',[average,_5020,_5032],_5142))))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_run_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_run_2__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
local_aregs[0] = F(run.s45,var1.Deref(),run.s104,F(run.s8,run.s16,F(run.s8,run.s17,F(run.s8,run.s15,Const.Nil))),F(run.s45,var1.Deref(),run.s102,Const.Nil,F(run.s97,F(run.s93,run.posint0,run.posint0,run.posint0),var3,F(run.s44,F(run.s66,var4,var5,var2.Deref()),F(run.s79,var4.Deref(),var5.Deref(),var1.Deref(),var3.Deref()),F(run.s97,F(run.s93,var6,var7,var8),var3.Deref(),F(run.s50,var9,F(run.s9,var7.Deref(),var6.Deref()),F(run.s50,var10,F(run.s9,var8.Deref(),var6.Deref()),F(run.s45,var1.Deref(),run.s106,F(run.s8,run.s23,F(run.s8,var9.Deref(),F(run.s8,var10.Deref(),Const.Nil))),continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_compile_programs_0::exec_static ;}
}


class pred_compile_programs_0 extends Code {

/*

compile_programs(_5906):-style_check(-singleton,forall(program(_5834,_5836),load_files(_5834:bench(_5834),[silent(true),if(changed)]),_5906)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_compile_programs_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_compile_programs_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = F(run.s5,run.s86) ;
local_aregs[1] = F(run.s44,F(run.s66,var1,var2),F(run.s51,F(run.s11,var1.Deref(),F(run.s24,var1.Deref())),F(run.s8,F(run.s84,run.s94),F(run.s8,F(run.s49,run.s29),Const.Nil))),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_style_check_1::exec_static ;}
}


class pred_run_program_4 extends Code {

/*

run_program(_6038,_6040,_6042,_6044,_6180):-ntimes(_6038,_6040,_6052,_6054,cut(1,add(1,_6044,1,add(2,_6044,_6052,add(3,_6044,_6054,format(_6042,'~p~t~18| ~t~3f~25| ~t~3f~32|~n',[_6038,_6052,_6054],_6180)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_run_program_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_run_program_4__1(PrologMachine mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var3))) return UpperPrologMachine.Fail0 ;
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = var6 ;
local_aregs[4] = F(run.s0, new HeapChoice(mach.CUTB),F(run.s19,run.posint1,var4.Deref(),run.posint1,F(run.s19,run.posint2,var4.Deref(),var5.Deref(),F(run.s19,run.posint3,var4.Deref(),var6.Deref(),F(run.s45,var3.Deref(),run.s103,F(run.s8,var1.Deref(),F(run.s8,var5.Deref(),F(run.s8,var6.Deref(),Const.Nil))),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_ntimes_4::exec_static ;}
}


class pred_add_3 extends Code {

/*

add(_6604,_6606,_6608,_6688):-arg(_6604,_6606,_6616,is(_6626,_6616+_6608,nb_setarg(_6604,_6606,_6626,_6688))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_add_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_add_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = F(run.s50,var5,F(run.s3,var4.Deref(),var3.Deref()),F(run.s55,var1.Deref(),var2.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_arg_3::exec_static ;}
}


class pred_ntimes_4 extends Code {

/*

ntimes(_7056,_7058,_7060,_7062,_7220):-get_performance_stats(_7066,_7068,ntimes(_7056,_7058,get_performance_stats(_7078,_7080,ntimes_dummy(_7058,get_performance_stats(_7088,_7090,is(_7060,_7080-_7068-(_7090-_7080),is(_7062,_7078-_7066-(_7088-_7078),_7220))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_ntimes_4__1(mach); }
public static Function<PrologMachine,Function> exec_pred_ntimes_4__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
if (!( (areg3).Unify(var4))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var5 ;
local_aregs[1] = var6 ;
local_aregs[2] = F(run.s61,var1.Deref(),var2.Deref(),F(run.s48,var7,var8,F(run.s62,var2.Deref(),F(run.s48,var9,var10,F(run.s50,var3.Deref(),F(run.s5,F(run.s5,var8.Deref(),var6.Deref()),F(run.s5,var10.Deref(),var8.Deref())),F(run.s50,var4.Deref(),F(run.s5,F(run.s5,var7.Deref(),var5.Deref()),F(run.s5,var9.Deref(),var7.Deref())),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_get_performance_stats_2::exec_static ;}
}


class pred_ntimes_2 extends Code {

/*

ntimes(_7652,_7654,_7700):-arithequal(0,_7654,cut(1,_7700)).
ntimes(_7848,_7850,_7924):-not_not_top(_7848,cut(1,is(_7864,_7850-1,ntimes(_7848,_7864,_7924)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_ntimes_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_ntimes_2__1(PrologMachine mach){ mach.FillAlternative(pred_ntimes_2::exec_pred_ntimes_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var2))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = run.posint0 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = F(run.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_arithequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_ntimes_2__2(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[1] = F(run.s0, new HeapChoice(mach.CUTB),F(run.s50,var3,F(run.s5,var2.Deref(),run.posint1),F(run.s61,var1.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Function<PrologMachine,Function>)pred_not_not_top_1::exec_static ;}
}


class pred_ntimes_dummy_1 extends Code {

/*

ntimes_dummy(_8152,_8192):-arithequal(0,_8152,cut(1,_8192)).
ntimes_dummy(_8338,_8400):-not_not_dummy(cut(1,is(_8348,_8338-1,ntimes_dummy(_8348,_8400)))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_ntimes_dummy_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_ntimes_dummy_1__1(PrologMachine mach){ mach.FillAlternative(pred_ntimes_dummy_1::exec_pred_ntimes_dummy_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = run.posint0 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = F(run.s0, new HeapChoice(mach.CUTB),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_arithequal_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_ntimes_dummy_1__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(run.s0, new HeapChoice(mach.CUTB),F(run.s50,var2,F(run.s5,var1.Deref(),run.posint1),F(run.s62,var2.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_not_not_dummy_0::exec_static ;}
}


class pred_not_not_top_1 extends Code {

/*

not_not_top(_8598,_8642):-not_top(_8598,cut(1,fail(_8642))).
not_not_top(_8796,_8818):-call(_8818).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_not_not_top_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_not_not_top_1__1(PrologMachine mach){ mach.FillAlternative(pred_not_not_top_1::exec_pred_not_not_top_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = F(run.s0, new HeapChoice(mach.CUTB),F(run.s39,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_not_top_1::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_not_not_top_1__2(PrologMachine mach){ mach.RemoveChoice() ;
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


class pred_not_top_1 extends Code {

/*

not_top(_8924,_8970):- :(_8924,top,cut(1,fail(_8970))).
not_top(_9144,_9166):-call(_9166).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_not_top_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_not_top_1__1(PrologMachine mach){ mach.FillAlternative(pred_not_top_1::exec_pred_not_top_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = run.s92 ;
local_aregs[2] = F(run.s0, new HeapChoice(mach.CUTB),F(run.s39,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_sym_system_colon_2::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_not_top_1__2(PrologMachine mach){ mach.RemoveChoice() ;
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


class pred_not_not_dummy_0 extends Code {

/*

not_not_dummy(_9308):-not_dummy(cut(1,fail(_9308))).
not_not_dummy(_9470):-call(_9470).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_not_not_dummy_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_not_not_dummy_0__1(PrologMachine mach){ mach.FillAlternative(pred_not_not_dummy_0::exec_pred_not_not_dummy_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(run.s0, new HeapChoice(mach.CUTB),F(run.s39,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_not_dummy_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_not_not_dummy_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_not_dummy_0 extends Code {

/*

not_dummy(_9604):-dummy(cut(1,fail(_9604))).
not_dummy(_9772):-call(_9772).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_not_dummy_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_not_dummy_0__1(PrologMachine mach){ mach.FillAlternative(pred_not_dummy_0::exec_pred_not_dummy_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = F(run.s0, new HeapChoice(mach.CUTB),F(run.s39,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_dummy_0::exec_static ;}
public static Function<PrologMachine,Function> exec_pred_not_dummy_0__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_dummy_0 extends Code {

/*

dummy(_9900):-call(_9900).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_dummy_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_dummy_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return UpperPrologMachine.Call1 ;}
}


class pred_tune_counts_0 extends Code {

/*

tune_counts(_10076):-forall(program(_10016,_10018),(tune_count(_10016,_10024),format('~q.~n',[program(_10016,_10024)])),_10076).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_tune_counts_0__1(mach); }
public static Function<PrologMachine,Function> exec_pred_tune_counts_0__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
local_aregs[0] = F(run.s66,var1,var2) ;
local_aregs[1] = F(run.s4,F(run.s95,var1.Deref(),var3),F(run.s45,run.s105,F(run.s8,F(run.s66,var1.Deref(),var3.Deref()),Const.Nil))) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_forall_2::exec_static ;}
}


class pred_tune_count_2 extends Code {

/*

tune_count(_10238,_10240,_10368):-between(1,100,_10248,is(_10258,1<<_10248,ntimes(_10238,_10258,_10268,_10270,smallerthan(0.5,_10268,cut(1,is(_10240,round(_10258*(1/_10268)),_10368)))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_tune_count_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_tune_count_2__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = run.posint1 ;
local_aregs[1] = run.posint100 ;
local_aregs[2] = var3 ;
local_aregs[3] = F(run.s50,var4,F(run.s14,run.posint1,var3.Deref()),F(run.s61,var1.Deref(),var4.Deref(),var5,var6,F(run.s87,Float(0.5),var5.Deref(),F(run.s0, new HeapChoice(mach.CUTB),F(run.s50,var2.Deref(),F(run.s75,F(run.s2,var4.Deref(),F(run.s9,run.posint1,var5.Deref()))),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_between_3::exec_static ;}
}


class pred_program_3 extends Code {

/*

program(_10806,_10808,_10810,_10884):-program(_10806,_10816,is(_10808,max(1,round(_10816*_10810)),_10884)).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_program_3__1(mach); }
public static Function<PrologMachine,Function> exec_pred_program_3__1(PrologMachine mach){ mach.RemoveChoice() ;
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
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = F(run.s50,var2.Deref(),F(run.s52,run.posint1,F(run.s75,F(run.s2,var4.Deref(),var3.Deref()))),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Function<PrologMachine,Function>)pred_program_2::exec_static ;}
}


class pred_program_2 extends Code {

/*

program(boyer,8,_11156):-call(_11156).
program(browse,7,_11348):-call(_11348).
program(chat_parser,46,_11540):-call(_11540).
program(crypt,868,_11732):-call(_11732).
program(fast_mu,4819,_11924):-call(_11924).
program(flatten,8275,_12116):-call(_12116).
program(meta_qsort,966,_12308):-call(_12308).
program(mu,6827,_12500):-call(_12500).
program(nreverse,11378,_12692):-call(_12692).
program(poly_10,105,_12884):-call(_12884).
program(prover,6400,_13076):-call(_13076).
program(qsort,8445,_13268):-call(_13268).
program(queens_8,63,_13460):-call(_13460).
program(query,1219,_13652):-call(_13652).
program(reducer,164,_13844):-call(_13844).
program(sendmore,44,_14036):-call(_14036).
program(simple_analyzer,320,_14228):-call(_14228).
program(tak,35,_14420):-call(_14420).
program(zebra,166,_14612):-call(_14612).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_program_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_program_2__1(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s26))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint8))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__2(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s27))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint7))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__3(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s30))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint46))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__4(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s32))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint868))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__5(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s40))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint4819))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__6(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s43))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint8275))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__7(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s53))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint966))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__8(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s54))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint6827))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__9(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s60))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint11378))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__10(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s65))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint105))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__11(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s68))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint6400))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__12(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s69))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint8445))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__13(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s70))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint63))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__14(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s71))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint1219))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__15(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s72))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint164))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__16(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s80))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint44))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__17(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s85))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint320))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__18(PrologMachine mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s90))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint35))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_program_2__19(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s100))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.posint166))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_run_interleaved_1 extends Code {

/*

run_interleaved(_14908,_15046):-compile_programs(findall(_14912-_14914,program(_14914,_14912,_14908),_14930,phrase(seq_interleaved(_14930),_14940,seq_clause(_14940,_14946,retractall(rni,assert((rni:-_14946),_14962,garbage_collect(time(rni,erase(_14962,_15046))))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_run_interleaved_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_run_interleaved_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(run.s42,F(run.s5,var2,var3),F(run.s66,var3.Deref(),var2.Deref(),var1.Deref()),var4,F(run.s64,F(run.s82,var4.Deref()),var5,F(run.s81,var5.Deref(),var6,F(run.s73,run.s74,F(run.s22,F(run.s12,run.s74,var6.Deref()),var7,F(run.s46,F(run.s91,run.s74,F(run.s38,var7.Deref(),continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_compile_programs_0::exec_static ;}
}


class pred_sym_dcg_arrow_2 extends Code {

/*

-->(seq_interleaved([]),!,_15584):-call(_15584).
-->(seq_interleaved(_15764),(seq_interleaved(_15764,_15770),seq_interleaved(_15770)),_15808):-call(_15808).
-->(seq_interleaved([],[]),[],_16018):-call(_16018).
-->(seq_interleaved([1-_16200|_16206],_16212),(!,[_16200],seq_interleaved(_16206,_16212)),_16264):-call(_16264).
-->(seq_interleaved([_16444-_16446|_16452],[_16456-_16446|_16464]),([_16446],{_16456 is _16444-1},seq_interleaved(_16452,_16464)),_16538):-call(_16538).
-->(seq_non_interleaved([]),[],_17858):-call(_17858).
-->(seq_non_interleaved([0-_18040|_18046]),(!,seq_non_interleaved(_18046)),_18088):-call(_18088).
-->(seq_non_interleaved([_18268-_18270|_18276]),([_18270],{_18296 is _18268-1},seq_non_interleaved([_18296-_18270|_18276])),_18358):-call(_18358).


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
if (!( (areg0).Unify(F(run.s82,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.s1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__2(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(run.s82,var1)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(run.s4,F(run.s82,var1.Deref(),var2),F(run.s82,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__3(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(run.s82,Const.Nil,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__4(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(run.s82,F(run.s8,F(run.s5,run.posint1,var1),var2),var3)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(run.s4,run.s1,F(run.s4,F(run.s8,var1.Deref(),Const.Nil),F(run.s82,var2.Deref(),var3.Deref())))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__5(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(run.s82,F(run.s8,F(run.s5,var1,var2),var3),F(run.s8,F(run.s5,var4,var2.Deref()),var5))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(run.s4,F(run.s8,var2.Deref(),Const.Nil),F(run.s4,F(run.s101,F(run.s50,var4.Deref(),F(run.s5,var1.Deref(),run.posint1))),F(run.s82,var3.Deref(),var5.Deref())))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__6(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(F(run.s83,Const.Nil)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__7(PrologMachine mach){ mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(run.s83,F(run.s8,F(run.s5,run.posint0,var1),var2))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(run.s4,run.s1,F(run.s83,var2.Deref()))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_sym_dcg_arrow_2__8(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(run.s83,F(run.s8,F(run.s5,var1,var2),var3))))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(run.s4,F(run.s8,var2.Deref(),Const.Nil),F(run.s4,F(run.s101,F(run.s50,var4,F(run.s5,var1.Deref(),run.posint1))),F(run.s83,F(run.s8,F(run.s5,var4.Deref(),var2.Deref()),var3.Deref()))))))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
}


class pred_seq_clause_2 extends Code {

/*

seq_clause([],true,_16742):-call(_16742).
seq_clause([_16928|_16930],(\+ \+_16928:top,_16950),_16996):-seq_clause(_16930,_16950,_16996).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_seq_clause_2__1(mach); }
public static Function<PrologMachine,Function> exec_pred_seq_clause_2__1(PrologMachine mach){ mach.FillAlternative(pred_seq_clause_2::exec_pred_seq_clause_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(run.s94))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return UpperPrologMachine.Call1 ;}
public static Function<PrologMachine,Function> exec_pred_seq_clause_2__2(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(F(run.s8,var1,var2)))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(F(run.s4,F(run.s11,F(run.s18,F(run.s18,var1.Deref())),run.s92),var3)))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Function<PrologMachine,Function>)pred_seq_clause_2::exec_static ;}
}


class pred_run_non_interleaved_1 extends Code {

/*

run_non_interleaved(_17210,_17338):-compile_programs(findall(_17214-_17216,program(_17216,_17214,_17210),_17232,phrase(seq_non_interleaved(_17232),_17242,seq_clause(_17242,_17248,assert((rni:-_17248),_17260,garbage_collect(time(rni,erase(_17260,_17338)))))))).


*/

public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Function<PrologMachine,Function>)exec_pred_run_non_interleaved_1__1(mach); }
public static Function<PrologMachine,Function> exec_pred_run_non_interleaved_1__1(PrologMachine mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = V(mach) ;
Var var6 = V(mach) ;
Var var5 = V(mach) ;
Var var4 = V(mach) ;
Var var3 = V(mach) ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var1))) return UpperPrologMachine.Fail0 ;
local_aregs[0] = F(run.s42,F(run.s5,var2,var3),F(run.s66,var3.Deref(),var2.Deref(),var1.Deref()),var4,F(run.s64,F(run.s83,var4.Deref()),var5,F(run.s81,var5.Deref(),var6,F(run.s22,F(run.s12,run.s74,var6.Deref()),var7,F(run.s46,F(run.s91,run.s74,F(run.s38,var7.Deref(),continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return (Function<PrologMachine,Function>)pred_compile_programs_0::exec_static ;}
}


