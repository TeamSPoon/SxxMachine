package SxxMachine; 
import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*; 
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class run /*extends CodeFile*/ {
final static Const s_cut = Data.Intern("cut") ;
final static Const s1 = Data.Intern("!") ;
final static Const s2 = Data.Intern("*") ;
final static Const s3 = Data.Intern("+") ;
final static Const s4 = Data.Intern(",") ;
final static Const s5 = Data.Intern("-") ;
final static Const s6 = Data.Intern("-->") ;
final static Const s7 = Data.Intern("->") ;
final static Const s8 = Data.Intern(".") ;
final static Const s9 = Data.Intern("/") ;
final static Const s10 = Data.Intern("/opt/logicmoo_workspace/taupl/test123/SxxMachine/prolog/bench") ;
final static Const s11 = Data.Intern(":") ;
final static Const s12 = Data.Intern(":-") ;
final static Const s13 = Data.Intern(";") ;
final static Const s14 = Data.Intern("<<") ;
final static Const s_GC = Data.Intern("GC") ;
final static Const s_Program = Data.Intern("Program") ;
final static Const s_Time = Data.Intern("Time") ;
final static Const s18 = Data.Intern("\\+") ;
final static Const s_add = Data.Intern("add") ;
final static Const s_arg = Data.Intern("arg") ;
final static Const s_arithequal = Data.Intern("arithequal") ;
final static Const s_assert = Data.Intern("assert") ;
final static Const s_average = Data.Intern("average") ;
final static Const s_bench = Data.Intern("bench") ;
final static Const s_between = Data.Intern("between") ;
final static Const s_boyer = Data.Intern("boyer") ;
final static Const s_browse = Data.Intern("browse") ;
final static Const s_call = Data.Intern("call") ;
final static Const s_changed = Data.Intern("changed") ;
final static Const s_chat_parser = Data.Intern("chat_parser") ;
final static Const s_compile_programs = Data.Intern("compile_programs") ;
final static Const s_crypt = Data.Intern("crypt") ;
final static Const s_current_output = Data.Intern("current_output") ;
final static Const s_directory = Data.Intern("directory") ;
final static Const s_dummy = Data.Intern("dummy") ;
final static Const s_dynamic = Data.Intern("dynamic") ;
final static Const s_erase = Data.Intern("erase") ;
final static Const s_fail = Data.Intern("fail") ;
final static Const s_fast_mu = Data.Intern("fast_mu") ;
final static Const s_file_search_path = Data.Intern("file_search_path") ;
final static Const s_findall = Data.Intern("findall") ;
final static Const s_flatten = Data.Intern("flatten") ;
final static Const s_forall = Data.Intern("forall") ;
final static Const s_format = Data.Intern("format") ;
final static Const s_garbage_collect = Data.Intern("garbage_collect") ;
final static Const s_gctime = Data.Intern("gctime") ;
final static Const s_get_performance_stats = Data.Intern("get_performance_stats") ;
final static Const s_if = Data.Intern("if") ;
final static Const s_is = Data.Intern("is") ;
final static Const s_load_files = Data.Intern("load_files") ;
final static Const s_max = Data.Intern("max") ;
final static Const s_meta_qsort = Data.Intern("meta_qsort") ;
final static Const s_mu = Data.Intern("mu") ;
final static Const s_nb_setarg = Data.Intern("nb_setarg") ;
final static Const s_not_dummy = Data.Intern("not_dummy") ;
final static Const s_not_not_dummy = Data.Intern("not_not_dummy") ;
final static Const s_not_not_top = Data.Intern("not_not_top") ;
final static Const s_not_top = Data.Intern("not_top") ;
final static Const s_nreverse = Data.Intern("nreverse") ;
final static Const s_ntimes = Data.Intern("ntimes") ;
final static Const s_ntimes_dummy = Data.Intern("ntimes_dummy") ;
final static Const s_on_load_run = Data.Intern("on_load_run") ;
final static Const s_phrase = Data.Intern("phrase") ;
final static Const s_poly_10 = Data.Intern("poly_10") ;
final static Const s_program = Data.Intern("program") ;
final static Const s_prolog_load_context = Data.Intern("prolog_load_context") ;
final static Const s_prover = Data.Intern("prover") ;
final static Const s_qsort = Data.Intern("qsort") ;
final static Const s_queens_8 = Data.Intern("queens_8") ;
final static Const s_query = Data.Intern("query") ;
final static Const s_reducer = Data.Intern("reducer") ;
final static Const s_retractall = Data.Intern("retractall") ;
final static Const s_rni = Data.Intern("rni") ;
final static Const s_round = Data.Intern("round") ;
final static Const s_run = Data.Intern("run") ;
final static Const s_run_interleaved = Data.Intern("run_interleaved") ;
final static Const s_run_non_interleaved = Data.Intern("run_non_interleaved") ;
final static Const s_run_program = Data.Intern("run_program") ;
final static Const s_sendmore = Data.Intern("sendmore") ;
final static Const s_seq_clause = Data.Intern("seq_clause") ;
final static Const s_seq_interleaved = Data.Intern("seq_interleaved") ;
final static Const s_seq_non_interleaved = Data.Intern("seq_non_interleaved") ;
final static Const s_silent = Data.Intern("silent") ;
final static Const s_simple_analyzer = Data.Intern("simple_analyzer") ;
final static Const s_singleton = Data.Intern("singleton") ;
final static Const s_smallerthan = Data.Intern("smallerthan") ;
final static Const s_statistics = Data.Intern("statistics") ;
final static Const s_style_check = Data.Intern("style_check") ;
final static Const s_tak = Data.Intern("tak") ;
final static Const s_time = Data.Intern("time") ;
final static Const s_top = Data.Intern("top") ;
final static Const s_total = Data.Intern("total") ;
final static Const s_true = Data.Intern("true") ;
final static Const s_tune_count = Data.Intern("tune_count") ;
final static Const s_tune_counts = Data.Intern("tune_counts") ;
final static Const s_unify = Data.Intern("unify") ;
final static Const s_user = Data.Intern("user") ;
final static Const s_write = Data.Intern("write") ;
final static Const s_zebra = Data.Intern("zebra") ;
final static Const s101 = Data.Intern("{}") ;
final static Const s102 = Data.Intern("~`=t~32|~n") ;
final static Const s103 = Data.Intern("~p~t~18| ~t~3f~25| ~t~3f~32|~n") ;
final static Const s104 = Data.Intern("~p~t~18| ~t~w~25| ~t~w~32|~n") ;
final static Const s105 = Data.Intern("~q.~n") ;
final static Const s106 = Data.Intern("~t~w~18| ~t~3f~25| ~t~3f~32|~n") ;
final static Int posint0 = Data.Number(0L) ;
final static Int posint1 = Data.Number(1L) ;
final static Int posint2 = Data.Number(2L) ;
final static Int posint3 = Data.Number(3L) ;
final static Int posint7 = Data.Number(7L) ;
final static Int posint8 = Data.Number(8L) ;
final static Int posint35 = Data.Number(35L) ;
final static Int posint44 = Data.Number(44L) ;
final static Int posint46 = Data.Number(46L) ;
final static Int posint63 = Data.Number(63L) ;
final static Int posint100 = Data.Number(100L) ;
final static Int posint105 = Data.Number(105L) ;
final static Int posint164 = Data.Number(164L) ;
final static Int posint166 = Data.Number(166L) ;
final static Int posint320 = Data.Number(320L) ;
final static Int posint868 = Data.Number(868L) ;
final static Int posint966 = Data.Number(966L) ;
final static Int posint1219 = Data.Number(1219L) ;
final static Int posint4819 = Data.Number(4819L) ;
final static Int posint6400 = Data.Number(6400L) ;
final static Int posint6827 = Data.Number(6827L) ;
final static Int posint8275 = Data.Number(8275L) ;
final static Int posint8445 = Data.Number(8445L) ;
final static Int posint11378 = Data.Number(11378L) ;
final static Operation reg_on_load_run_0 = PredTable.Register("on_load_run",0, new pred_on_load_run_0());
final static Operation reg_run_1 = PredTable.Register("run",1, new pred_run_1());
final static Operation reg_run_2 = PredTable.Register("run",2, new pred_run_2());
final static Operation reg_compile_programs_0 = PredTable.Register("compile_programs",0, new pred_compile_programs_0());
final static Operation reg_run_program_4 = PredTable.Register("run_program",4, new pred_run_program_4());
final static Operation reg_add_3 = PredTable.Register("add",3, new pred_add_3());
final static Operation reg_ntimes_4 = PredTable.Register("ntimes",4, new pred_ntimes_4());
final static Operation reg_ntimes_2 = PredTable.Register("ntimes",2, new pred_ntimes_2());
final static Operation reg_ntimes_dummy_1 = PredTable.Register("ntimes_dummy",1, new pred_ntimes_dummy_1());
final static Operation reg_not_not_top_1 = PredTable.Register("not_not_top",1, new pred_not_not_top_1());
final static Operation reg_not_top_1 = PredTable.Register("not_top",1, new pred_not_top_1());
final static Operation reg_not_not_dummy_0 = PredTable.Register("not_not_dummy",0, new pred_not_not_dummy_0());
final static Operation reg_not_dummy_0 = PredTable.Register("not_dummy",0, new pred_not_dummy_0());
final static Operation reg_dummy_0 = PredTable.Register("dummy",0, new pred_dummy_0());
final static Operation reg_tune_counts_0 = PredTable.Register("tune_counts",0, new pred_tune_counts_0());
final static Operation reg_tune_count_2 = PredTable.Register("tune_count",2, new pred_tune_count_2());
final static Operation reg_program_3 = PredTable.Register("program",3, new pred_program_3());
final static Operation reg_program_2 = PredTable.Register("program",2, new pred_program_2());
final static Operation reg_run_interleaved_1 = PredTable.Register("run_interleaved",1, new pred_run_interleaved_1());
final static Operation reg_$002D$002D$003E_2 = PredTable.Register("-->",2, new pred_$002D$002D$003E_2());
final static Operation reg_seq_clause_2 = PredTable.Register("seq_clause",2, new pred_seq_clause_2());
final static Operation reg_run_non_interleaved_1 = PredTable.Register("run_non_interleaved",1, new pred_run_non_interleaved_1());
public static class pred_on_load_run_0 extends Code {

/*

on_load_run(_5394):-write(style_check(-singleton),_5394).
on_load_run(_6424):-write((file_search_path(bench,_6338)->true;prolog_load_context(directory,'/opt/logicmoo_workspace/taupl/test123/SxxMachine/prolog/bench'),assert(user:file_search_path(bench,'/opt/logicmoo_workspace/taupl/test123/SxxMachine/prolog/bench'))),_6424).
on_load_run(_7654):-write(if(statistics(gctime,_7612)),_7654).
on_load_run(_15506):-write((dynamic rni/0),_15506).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_on_load_run_0__1(mach); }
public static Operation exec_pred_on_load_run_0__1(Prolog mach){ mach.FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(run.s_style_check,Data.F(run.s5,run.s_singleton)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_write_1::exec_static ;}
public static Operation exec_pred_on_load_run_0__2(Prolog mach){ mach.FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(run.s13,Data.F(run.s7,Data.F(run.s_file_search_path,run.s_bench,var1),run.s_true),Data.F(run.s4,Data.F(run.s_prolog_load_context,run.s_directory,run.s10),Data.F(run.s_assert,Data.F(run.s11,run.s_user,Data.F(run.s_file_search_path,run.s_bench,run.s10))))) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_write_1::exec_static ;}
public static Operation exec_pred_on_load_run_0__3(Prolog mach){ mach.FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(run.s_if,Data.F(run.s_statistics,run.s_gctime,var1)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_write_1::exec_static ;}
public static Operation exec_pred_on_load_run_0__4(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = Data.F(run.s_dynamic,Data.F(run.s9,run.s_rni,run.posint0)) ;
local_aregs[1] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_write_1::exec_static ;}
}


public static class pred_run_1 extends Code {

/*

run(_5458,_5492):-run(current_output,_5458,_5492).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_run_1__1(mach); }
public static Operation exec_pred_run_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = run.s_current_output ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_run_2::exec_static ;}
}


public static class pred_run_2 extends Code {

/*

run(_5584,_5586,_5804):-compile_programs(format(_5584,'~p~t~18| ~t~w~25| ~t~w~32|~n',['Program','Time','GC'],format(_5584,'~`=t~32|~n',[],unify(total(0,0,0),_5632,forall(program(_5638,_5640,_5586),run_program(_5638,_5640,_5584,_5632),unify(total(_5662,_5664,_5666),_5632,is(_5682,_5664/_5662,is(_5694,_5666/_5662,format(_5584,'~t~w~18| ~t~3f~25| ~t~3f~32|~n',[average,_5682,_5694],_5804))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_run_2__1(mach); }
public static Operation exec_pred_run_2__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
local_aregs[0] = Data.F(run.s_format,var1.Deref(),run.s104,Data.F(run.s8,run.s_Program,Data.F(run.s8,run.s_Time,Data.F(run.s8,run.s_GC,Const.Nil))),Data.F(run.s_format,var1.Deref(),run.s102,Const.Nil,Data.F(run.s_unify,Data.F(run.s_total,run.posint0,run.posint0,run.posint0),var3,Data.F(run.s_forall,Data.F(run.s_program,var4,var5,var2.Deref()),Data.F(run.s_run_program,var4.Deref(),var5.Deref(),var1.Deref(),var3.Deref()),Data.F(run.s_unify,Data.F(run.s_total,var6,var7,var8),var3.Deref(),Data.F(run.s_is,var9,Data.F(run.s9,var7.Deref(),var6.Deref()),Data.F(run.s_is,var10,Data.F(run.s9,var8.Deref(),var6.Deref()),Data.F(run.s_format,var1.Deref(),run.s106,Data.F(run.s8,run.s_average,Data.F(run.s8,var9.Deref(),Data.F(run.s8,var10.Deref(),Const.Nil))),continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return (Operation)pred_compile_programs_0::exec_static ;}
}


public static class pred_compile_programs_0 extends Code {

/*

compile_programs(_6568):-style_check(-singleton,forall(program(_6496,_6498),load_files(_6496:bench(_6496),[silent(true),if(changed)]),_6568)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_compile_programs_0__1(mach); }
public static Operation exec_pred_compile_programs_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(run.s5,run.s_singleton) ;
local_aregs[1] = Data.F(run.s_forall,Data.F(run.s_program,var1,var2),Data.F(run.s_load_files,Data.F(run.s11,var1.Deref(),Data.F(run.s_bench,var1.Deref())),Data.F(run.s8,Data.F(run.s_silent,run.s_true),Data.F(run.s8,Data.F(run.s_if,run.s_changed),Const.Nil))),continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_style_check_1::exec_static ;}
}


public static class pred_run_program_4 extends Code {

/*

run_program(_880,_882,_884,_886,_916):-ntimes(_880,_882,_888,_890,cut(1,add(1,_886,1,add(2,_886,_888,add(3,_886,_890,format(_884,'~p~t~18| ~t~3f~25| ~t~3f~32|~n',[_880,_888,_890],_916)))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_run_program_4__1(mach); }
public static Operation exec_pred_run_program_4__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
if (!( (areg3).Unify(var4,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var5 ;
local_aregs[3] = var6 ;
local_aregs[4] = mach.HC(Data.F(run.s_add,run.posint1,var4.Deref(),run.posint1,Data.F(run.s_add,run.posint2,var4.Deref(),var5.Deref(),Data.F(run.s_add,run.posint3,var4.Deref(),var6.Deref(),Data.F(run.s_format,var3.Deref(),run.s103,Data.F(run.s8,var1.Deref(),Data.F(run.s8,var5.Deref(),Data.F(run.s8,var6.Deref(),Const.Nil))),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_ntimes_4::exec_static ;}
}


public static class pred_add_3 extends Code {

/*

add(_994,_996,_998,_1016):-arg(_994,_996,_1000,is(_1008,_1000+_998,nb_setarg(_994,_996,_1008,_1016))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_add_3__1(mach); }
public static Operation exec_pred_add_3__1(Prolog mach){ mach.RemoveChoice() ;
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
local_aregs[1] = var2.Deref() ;
local_aregs[2] = var4 ;
local_aregs[3] = Data.F(run.s_is,var5,Data.F(run.s3,var4.Deref(),var3.Deref()),Data.F(run.s_nb_setarg,var1.Deref(),var2.Deref(),var5.Deref(),continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_arg_3::exec_static ;}
}


public static class pred_ntimes_4 extends Code {

/*

ntimes(_1096,_1098,_1100,_1102,_1158):-get_performance_stats(_1104,_1106,ntimes(_1096,_1098,get_performance_stats(_1108,_1110,ntimes_dummy(_1098,get_performance_stats(_1112,_1114,is(_1100,_1110-_1106-(_1114-_1110),is(_1102,_1108-_1104-(_1112-_1108),_1158))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
Term aregs[] = mach.RegPull(4);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_ntimes_4__1(mach); }
public static Operation exec_pred_ntimes_4__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[4] ;
Term areg3 = local_aregs[3].Deref() ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
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
local_aregs[0] = var5 ;
local_aregs[1] = var6 ;
local_aregs[2] = Data.F(run.s_ntimes,var1.Deref(),var2.Deref(),Data.F(run.s_get_performance_stats,var7,var8,Data.F(run.s_ntimes_dummy,var2.Deref(),Data.F(run.s_get_performance_stats,var9,var10,Data.F(run.s_is,var3.Deref(),Data.F(run.s5,Data.F(run.s5,var8.Deref(),var6.Deref()),Data.F(run.s5,var10.Deref(),var8.Deref())),Data.F(run.s_is,var4.Deref(),Data.F(run.s5,Data.F(run.s5,var7.Deref(),var5.Deref()),Data.F(run.s5,var9.Deref(),var7.Deref())),continuation)))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[4] = local_aregs[3] = null ;
return (Operation)pred_get_performance_stats_2::exec_static ;}
}


public static class pred_ntimes_2 extends Code {

/*

ntimes(_1232,_1234,_1242):-arithequal(0,_1234,cut(1,_1242)).
ntimes(_1272,_1274,_1290):-not_not_top(_1272,cut(1,is(_1282,_1274-1,ntimes(_1272,_1282,_1290)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_ntimes_2__1(mach); }
public static Operation exec_pred_ntimes_2__1(Prolog mach){ mach.FillAlternative(pred_ntimes_2::exec_pred_ntimes_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = run.posint0 ;
local_aregs[1] = var2.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_arithequal_2::exec_static ;}
public static Operation exec_pred_ntimes_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(run.s_is,var3,Data.F(run.s5,var2.Deref(),run.posint1),Data.F(run.s_ntimes,var1.Deref(),var3.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = null ;
return (Operation)pred_not_not_top_1::exec_static ;}
}


public static class pred_ntimes_dummy_1 extends Code {

/*

ntimes_dummy(_1334,_1342):-arithequal(0,_1334,cut(1,_1342)).
ntimes_dummy(_1370,_1386):-not_not_dummy(cut(1,is(_1378,_1370-1,ntimes_dummy(_1378,_1386)))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_ntimes_dummy_1__1(mach); }
public static Operation exec_pred_ntimes_dummy_1__1(Prolog mach){ mach.FillAlternative(pred_ntimes_dummy_1::exec_pred_ntimes_dummy_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = run.posint0 ;
local_aregs[1] = var1.Deref() ;
local_aregs[2] = mach.HC(continuation) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_arithequal_2::exec_static ;}
public static Operation exec_pred_ntimes_dummy_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = mach.HC(Data.F(run.s_is,var2,Data.F(run.s5,var1.Deref(),run.posint1),Data.F(run.s_ntimes_dummy,var2.Deref(),continuation))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return (Operation)pred_not_not_dummy_0::exec_static ;}
}


public static class pred_not_not_top_1 extends Code {

/*

not_not_top(_1424,_1432):-not_top(_1424,cut(1,fail(_1432))).
not_not_top(_1462,_1472):-call(_1472).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_not_not_top_1__1(mach); }
public static Operation exec_pred_not_not_top_1__1(Prolog mach){ mach.FillAlternative(pred_not_not_top_1::exec_pred_not_not_top_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = mach.HC(Data.F(run.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_not_top_1::exec_static ;}
public static Operation exec_pred_not_not_top_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_not_top_1 extends Code {

/*

not_top(_1486,_1494):- :(_1486,top,cut(1,fail(_1494))).
not_top(_1526,_1536):-call(_1536).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_not_top_1__1(mach); }
public static Operation exec_pred_not_top_1__1(Prolog mach){ mach.FillAlternative(pred_not_top_1::exec_pred_not_top_1__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = run.s_top ;
local_aregs[2] = mach.HC(Data.F(run.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_module_colon_2::exec_static ;}
public static Operation exec_pred_not_top_1__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_not_not_dummy_0 extends Code {

/*

not_not_dummy(_1556):-not_dummy(cut(1,fail(_1556))).
not_not_dummy(_1590):-call(_1590).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_not_not_dummy_0__1(mach); }
public static Operation exec_pred_not_not_dummy_0__1(Prolog mach){ mach.FillAlternative(pred_not_not_dummy_0::exec_pred_not_not_dummy_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = mach.HC(Data.F(run.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_not_dummy_0::exec_static ;}
public static Operation exec_pred_not_not_dummy_0__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
}


public static class pred_not_dummy_0 extends Code {

/*

not_dummy(_1608):-dummy(cut(1,fail(_1608))).
not_dummy(_1642):-call(_1642).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_not_dummy_0__1(mach); }
public static Operation exec_pred_not_dummy_0__1(Prolog mach){ mach.FillAlternative(pred_not_dummy_0::exec_pred_not_dummy_0__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = mach.HC(Data.F(run.s_fail,continuation)) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_dummy_0::exec_static ;}
public static Operation exec_pred_not_dummy_0__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
}


public static class pred_dummy_0 extends Code {

/*

dummy(_1662):-call(_1662).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_dummy_0__1(mach); }
public static Operation exec_pred_dummy_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return Prolog.Call1 ;}
}


public static class pred_tune_counts_0 extends Code {

/*

tune_counts(_1716):-forall(program(_1676,_1678),(tune_count(_1676,_1684),format('~q.~n',[program(_1676,_1684)])),_1716).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0]} ;*/
Term aregs[] = mach.RegPull(0);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_tune_counts_0__1(mach); }
public static Operation exec_pred_tune_counts_0__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[0] ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
local_aregs[0] = Data.F(run.s_program,var1,var2) ;
local_aregs[1] = Data.F(run.s4,Data.F(run.s_tune_count,var1.Deref(),var3),Data.F(run.s_format,run.s105,Data.F(run.s8,Data.F(run.s_program,var1.Deref(),var3.Deref()),Const.Nil))) ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_forall_2::exec_static ;}
}


public static class pred_tune_count_2 extends Code {

/*

tune_count(_1736,_1738,_1782):-between(1,100,_1740,is(_1748,1<<_1740,ntimes(_1736,_1748,_1750,_1752,smallerthan(0.5,_1750,cut(1,is(_1738,round(_1748*(1/_1750)),_1782)))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_tune_count_2__1(mach); }
public static Operation exec_pred_tune_count_2__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(var2,mach))) return Prolog.Fail0 ;
local_aregs[0] = run.posint1 ;
local_aregs[1] = run.posint100 ;
local_aregs[2] = var3 ;
local_aregs[3] = Data.F(run.s_is,var4,Data.F(run.s14,run.posint1,var3.Deref()),Data.F(run.s_ntimes,var1.Deref(),var4.Deref(),var5,var6,Data.F(run.s_smallerthan,Data.Float(0.5),var5.Deref(),mach.HC(Data.F(run.s_is,var2.Deref(),Data.F(run.s_round,Data.F(run.s2,var4.Deref(),Data.F(run.s9,run.posint1,var5.Deref()))),continuation))))) ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_between_3::exec_static ;}
}


public static class pred_program_3 extends Code {

/*

program(_1850,_1852,_1854,_1880):-program(_1850,_1856,is(_1852,max(1,round(_1856*_1854)),_1880)).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
Term aregs[] = mach.RegPull(3);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_program_3__1(mach); }
public static Operation exec_pred_program_3__1(Prolog mach){ mach.RemoveChoice() ;
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
if (!( (areg2).Unify(var3,mach))) return Prolog.Fail0 ;
local_aregs[0] = var1.Deref() ;
local_aregs[1] = var4 ;
local_aregs[2] = Data.F(run.s_is,var2.Deref(),Data.F(run.s_max,run.posint1,Data.F(run.s_round,Data.F(run.s2,var4.Deref(),var3.Deref()))),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = null ;
return (Operation)pred_program_2::exec_static ;}
}


public static class pred_program_2 extends Code {

/*

program(boyer,8,_1922):-call(_1922).
program(browse,7,_1946):-call(_1946).
program(chat_parser,46,_1970):-call(_1970).
program(crypt,868,_1994):-call(_1994).
program(fast_mu,4819,_2018):-call(_2018).
program(flatten,8275,_2042):-call(_2042).
program(meta_qsort,966,_2066):-call(_2066).
program(mu,6827,_2090):-call(_2090).
program(nreverse,11378,_2114):-call(_2114).
program(poly_10,105,_2138):-call(_2138).
program(prover,6400,_2162):-call(_2162).
program(qsort,8445,_2186):-call(_2186).
program(queens_8,63,_2210):-call(_2210).
program(query,1219,_2234):-call(_2234).
program(reducer,164,_2258):-call(_2258).
program(sendmore,44,_2282):-call(_2282).
program(simple_analyzer,320,_2306):-call(_2306).
program(tak,35,_2330):-call(_2330).
program(zebra,166,_2354):-call(_2354).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_program_2__1(mach); }
public static Operation exec_pred_program_2__1(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_boyer,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint8,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__2(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_browse,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint7,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__3(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_chat_parser,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint46,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__4(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_crypt,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint868,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__5(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_fast_mu,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint4819,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__6(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_flatten,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint8275,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__7(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_meta_qsort,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint966,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__8(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__9) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_mu,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint6827,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__9(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__10) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_nreverse,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint11378,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__10(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__11) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_poly_10,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint105,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__11(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__12) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_prover,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint6400,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__12(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__13) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_qsort,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint8445,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__13(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__14) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_queens_8,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint63,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__14(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__15) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_query,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint1219,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__15(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__16) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_reducer,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint164,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__16(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__17) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_sendmore,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint44,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__17(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__18) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_simple_analyzer,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint320,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__18(Prolog mach){ mach.FillAlternative(pred_program_2::exec_pred_program_2__19) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_tak,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint35,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_program_2__19(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(run.s_zebra,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.posint166,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_run_interleaved_1 extends Code {

/*

run_interleaved(_2404,_2444):-compile_programs(findall(_2408-_2410,program(_2410,_2408,_2404),_2420,phrase(seq_interleaved(_2420),_2426,seq_clause(_2426,_2428,retractall(rni,assert((rni:-_2428),_2436,garbage_collect(time(rni,erase(_2436,_2444))))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_run_interleaved_1__1(mach); }
public static Operation exec_pred_run_interleaved_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(run.s_findall,Data.F(run.s5,var2,var3),Data.F(run.s_program,var3.Deref(),var2.Deref(),var1.Deref()),var4,Data.F(run.s_phrase,Data.F(run.s_seq_interleaved,var4.Deref()),var5,Data.F(run.s_seq_clause,var5.Deref(),var6,Data.F(run.s_retractall,run.s_rni,Data.F(run.s_assert,Data.F(run.s12,run.s_rni,var6.Deref()),var7,Data.F(run.s_garbage_collect,Data.F(run.s_time,run.s_rni,Data.F(run.s_erase,var7.Deref(),continuation)))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return (Operation)pred_compile_programs_0::exec_static ;}
}


public static class pred_$002D$002D$003E_2 extends Code {

/*

-->(seq_interleaved([]),!,_2530):-call(_2530).
-->(seq_interleaved(_2548),(seq_interleaved(_2548,_2554),seq_interleaved(_2554)),_2574):-call(_2574).
-->(seq_interleaved([],[]),[],_2604):-call(_2604).
-->(seq_interleaved([1-_2624|_2630],_2636),(!,[_2624],seq_interleaved(_2630,_2636)),_2670):-call(_2670).
-->(seq_interleaved([_2688-_2690|_2696],[_2700-_2690|_2708]),([_2690],{_2700 is _2688-1},seq_interleaved(_2696,_2708)),_2764):-call(_2764).
-->(seq_non_interleaved([]),[],_2992):-call(_2992).
-->(seq_non_interleaved([0-_3012|_3018]),(!,seq_non_interleaved(_3018)),_3042):-call(_3042).
-->(seq_non_interleaved([_3060-_3062|_3068]),([_3062],{_3088 is _3060-1},seq_non_interleaved([_3088-_3062|_3068])),_3132):-call(_3132).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_$002D$002D$003E_2__1(mach); }
public static Operation exec_pred_$002D$002D$003E_2__1(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(run.s_seq_interleaved,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.s1,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__2(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(run.s_seq_interleaved,var1),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(run.s4,Data.F(run.s_seq_interleaved,var1.Deref(),var2),Data.F(run.s_seq_interleaved,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__3(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(run.s_seq_interleaved,Const.Nil,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__4(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(run.s_seq_interleaved,Data.F(run.s8,Data.F(run.s5,run.posint1,var1),var2),var3),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(run.s4,run.s1,Data.F(run.s4,Data.F(run.s8,var1.Deref(),Const.Nil),Data.F(run.s_seq_interleaved,var2.Deref(),var3.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__5(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(run.s_seq_interleaved,Data.F(run.s8,Data.F(run.s5,var1,var2),var3),Data.F(run.s8,Data.F(run.s5,var4,var2.Deref()),var5)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(run.s4,Data.F(run.s8,var2.Deref(),Const.Nil),Data.F(run.s4,Data.F(run.s101,Data.F(run.s_is,var4.Deref(),Data.F(run.s5,var1.Deref(),run.posint1))),Data.F(run.s_seq_interleaved,var3.Deref(),var5.Deref()))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__6(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Data.F(run.s_seq_non_interleaved,Const.Nil),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__7(Prolog mach){ mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(run.s_seq_non_interleaved,Data.F(run.s8,Data.F(run.s5,run.posint0,var1),var2)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(run.s4,run.s1,Data.F(run.s_seq_non_interleaved,var2.Deref())),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_$002D$002D$003E_2__8(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(run.s_seq_non_interleaved,Data.F(run.s8,Data.F(run.s5,var1,var2),var3)),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(run.s4,Data.F(run.s8,var2.Deref(),Const.Nil),Data.F(run.s4,Data.F(run.s101,Data.F(run.s_is,var4,Data.F(run.s5,var1.Deref(),run.posint1))),Data.F(run.s_seq_non_interleaved,Data.F(run.s8,Data.F(run.s5,var4.Deref(),var2.Deref()),var3.Deref())))),mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
}


public static class pred_seq_clause_2 extends Code {

/*

seq_clause([],true,_2788):-call(_2788).
seq_clause([_2806|_2808],(\+ \+_2806:top,_2828),_2836):-seq_clause(_2808,_2828,_2836).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
Term aregs[] = mach.RegPull(2);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_seq_clause_2__1(mach); }
public static Operation exec_pred_seq_clause_2__1(Prolog mach){ mach.FillAlternative(pred_seq_clause_2::exec_pred_seq_clause_2__2) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
if (!( (areg0).Unify(Const.Nil,mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(run.s_true,mach))) return Prolog.Fail0 ;
local_aregs[0] = continuation ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[2] = local_aregs[1] = null ;
return Prolog.Call1 ;}
public static Operation exec_pred_seq_clause_2__2(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[2] ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(Data.F(run.s8,var1,var2),mach))) return Prolog.Fail0 ;
if (!( (areg1).Unify(Data.F(run.s4,Data.F(run.s11,Data.F(run.s18,Data.F(run.s18,var1.Deref())),run.s_top),var3),mach))) return Prolog.Fail0 ;
local_aregs[0] = var2.Deref() ;
local_aregs[1] = var3.Deref() ;
local_aregs[2] = continuation ;
mach.CUTB = mach.CurrentChoice ;
return (Operation)pred_seq_clause_2::exec_static ;}
}


public static class pred_run_non_interleaved_1 extends Code {

/*

run_non_interleaved(_2860,_2900):-compile_programs(findall(_2864-_2866,program(_2866,_2864,_2860),_2876,phrase(seq_non_interleaved(_2876),_2882,seq_clause(_2882,_2884,assert((rni:-_2884),_2892,garbage_collect(time(rni,erase(_2892,_2900)))))))).


*/

public Operation Exec(Prolog mach) {return exec_static(mach); }
public static Operation exec_static(Prolog mach){ 
/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
Term aregs[] = mach.RegPull(1);
mach.CreateChoicePoint(aregs) ;
return (Operation)exec_pred_run_non_interleaved_1__1(mach); }
public static Operation exec_pred_run_non_interleaved_1__1(Prolog mach){ mach.RemoveChoice() ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[1] ;
Term areg0 = local_aregs[0].Deref() ;
Var var7 = Data.V(mach) ;
Var var6 = Data.V(mach) ;
Var var5 = Data.V(mach) ;
Var var4 = Data.V(mach) ;
Var var3 = Data.V(mach) ;
Var var2 = Data.V(mach) ;
Var var1 = Data.V(mach) ;
if (!( (areg0).Unify(var1,mach))) return Prolog.Fail0 ;
local_aregs[0] = Data.F(run.s_findall,Data.F(run.s5,var2,var3),Data.F(run.s_program,var3.Deref(),var2.Deref(),var1.Deref()),var4,Data.F(run.s_phrase,Data.F(run.s_seq_non_interleaved,var4.Deref()),var5,Data.F(run.s_seq_clause,var5.Deref(),var6,Data.F(run.s_assert,Data.F(run.s12,run.s_rni,var6.Deref()),var7,Data.F(run.s_garbage_collect,Data.F(run.s_time,run.s_rni,Data.F(run.s_erase,var7.Deref(),continuation))))))) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[1] = null ;
return (Operation)pred_compile_programs_0::exec_static ;}
}


}


