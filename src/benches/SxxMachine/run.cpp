using namespace std;

#include "run.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../bootlib/SxxMachine/sxx_meta.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  run::s_cut = Data::Intern("cut");
Const* const  run::s1 = Data::Intern("!");
Const* const  run::s2 = Data::Intern("*");
Const* const  run::s3 = Data::Intern("+");
Const* const  run::s4 = Data::Intern(",");
Const* const  run::s5 = Data::Intern("-");
Const* const  run::s6 = Data::Intern("-->");
Const* const  run::s7 = Data::Intern("->");
Const* const  run::s8 = Data::Intern(".");
Const* const  run::s9 = Data::Intern("/");
Const* const  run::s10 = Data::Intern("/opt/logicmoo_workspace/taupl/test123/SxxMachine/prolog/bench");
Const* const  run::s11 = Data::Intern(":");
Const* const  run::s12 = Data::Intern(":-");
Const* const  run::s13 = Data::Intern(";");
Const* const  run::s14 = Data::Intern("<<");
Const* const  run::s_GC = Data::Intern("GC");
Const* const  run::s_Program = Data::Intern("Program");
Const* const  run::s_Time = Data::Intern("Time");
Const* const  run::s18 = Data::Intern("\\+");
Const* const  run::s_add = Data::Intern("add");
Const* const  run::s_arg = Data::Intern("arg");
Const* const  run::s_arithequal = Data::Intern("arithequal");
Const* const  run::s_assert = Data::Intern("assert");
Const* const  run::s_average = Data::Intern("average");
Const* const  run::s_bench = Data::Intern("bench");
Const* const  run::s_between = Data::Intern("between");
Const* const  run::s_boyer = Data::Intern("boyer");
Const* const  run::s_browse = Data::Intern("browse");
Const* const  run::s_call = Data::Intern("call");
Const* const  run::s_changed = Data::Intern("changed");
Const* const  run::s_chat_parser = Data::Intern("chat_parser");
Const* const  run::s_compile_programs = Data::Intern("compile_programs");
Const* const  run::s_crypt = Data::Intern("crypt");
Const* const  run::s_current_output = Data::Intern("current_output");
Const* const  run::s_directory = Data::Intern("directory");
Const* const  run::s_dummy = Data::Intern("dummy");
Const* const  run::s_dynamic = Data::Intern("dynamic");
Const* const  run::s_erase = Data::Intern("erase");
Const* const  run::s_fail = Data::Intern("fail");
Const* const  run::s_fast_mu = Data::Intern("fast_mu");
Const* const  run::s_file_search_path = Data::Intern("file_search_path");
Const* const  run::s_findall = Data::Intern("findall");
Const* const  run::s_flatten = Data::Intern("flatten");
Const* const  run::s_forall = Data::Intern("forall");
Const* const  run::s_format = Data::Intern("format");
Const* const  run::s_garbage_collect = Data::Intern("garbage_collect");
Const* const  run::s_gctime = Data::Intern("gctime");
Const* const  run::s_get_performance_stats = Data::Intern("get_performance_stats");
Const* const  run::s_if = Data::Intern("if");
Const* const  run::s_is = Data::Intern("is");
Const* const  run::s_load_files = Data::Intern("load_files");
Const* const  run::s_max = Data::Intern("max");
Const* const  run::s_meta_qsort = Data::Intern("meta_qsort");
Const* const  run::s_mu = Data::Intern("mu");
Const* const  run::s_nb_setarg = Data::Intern("nb_setarg");
Const* const  run::s_not_dummy = Data::Intern("not_dummy");
Const* const  run::s_not_not_dummy = Data::Intern("not_not_dummy");
Const* const  run::s_not_not_top = Data::Intern("not_not_top");
Const* const  run::s_not_top = Data::Intern("not_top");
Const* const  run::s_nreverse = Data::Intern("nreverse");
Const* const  run::s_ntimes = Data::Intern("ntimes");
Const* const  run::s_ntimes_dummy = Data::Intern("ntimes_dummy");
Const* const  run::s_on_load_run = Data::Intern("on_load_run");
Const* const  run::s_phrase = Data::Intern("phrase");
Const* const  run::s_poly_10 = Data::Intern("poly_10");
Const* const  run::s_program = Data::Intern("program");
Const* const  run::s_prolog_load_context = Data::Intern("prolog_load_context");
Const* const  run::s_prover = Data::Intern("prover");
Const* const  run::s_qsort = Data::Intern("qsort");
Const* const  run::s_queens_8 = Data::Intern("queens_8");
Const* const  run::s_query = Data::Intern("query");
Const* const  run::s_reducer = Data::Intern("reducer");
Const* const  run::s_retractall = Data::Intern("retractall");
Const* const  run::s_rni = Data::Intern("rni");
Const* const  run::s_round = Data::Intern("round");
Const* const  run::s_run = Data::Intern("run");
Const* const  run::s_run_interleaved = Data::Intern("run_interleaved");
Const* const  run::s_run_non_interleaved = Data::Intern("run_non_interleaved");
Const* const  run::s_run_program = Data::Intern("run_program");
Const* const  run::s_sendmore = Data::Intern("sendmore");
Const* const  run::s_seq_clause = Data::Intern("seq_clause");
Const* const  run::s_seq_interleaved = Data::Intern("seq_interleaved");
Const* const  run::s_seq_non_interleaved = Data::Intern("seq_non_interleaved");
Const* const  run::s_silent = Data::Intern("silent");
Const* const  run::s_simple_analyzer = Data::Intern("simple_analyzer");
Const* const  run::s_singleton = Data::Intern("singleton");
Const* const  run::s_smallerthan = Data::Intern("smallerthan");
Const* const  run::s_statistics = Data::Intern("statistics");
Const* const  run::s_style_check = Data::Intern("style_check");
Const* const  run::s_tak = Data::Intern("tak");
Const* const  run::s_time = Data::Intern("time");
Const* const  run::s_top = Data::Intern("top");
Const* const  run::s_total = Data::Intern("total");
Const* const  run::s_true = Data::Intern("true");
Const* const  run::s_tune_count = Data::Intern("tune_count");
Const* const  run::s_tune_counts = Data::Intern("tune_counts");
Const* const  run::s_unify = Data::Intern("unify");
Const* const  run::s_user = Data::Intern("user");
Const* const  run::s_write = Data::Intern("write");
Const* const  run::s_zebra = Data::Intern("zebra");
Const* const  run::s101 = Data::Intern("{}");
Const* const  run::s102 = Data::Intern("~`=t~32|~n");
Const* const  run::s103 = Data::Intern("~p~t~18| ~t~3f~25| ~t~3f~32|~n");
Const* const  run::s104 = Data::Intern("~p~t~18| ~t~w~25| ~t~w~32|~n");
Const* const  run::s105 = Data::Intern("~q.~n");
Const* const  run::s106 = Data::Intern("~t~w~18| ~t~3f~25| ~t~3f~32|~n");
Int* const  run::posint0 = Data::Number(0LL);
Int* const  run::posint1 = Data::Number(1LL);
Int* const  run::posint2 = Data::Number(2LL);
Int* const  run::posint3 = Data::Number(3LL);
Int* const  run::posint7 = Data::Number(7LL);
Int* const  run::posint8 = Data::Number(8LL);
Int* const  run::posint35 = Data::Number(35LL);
Int* const  run::posint44 = Data::Number(44LL);
Int* const  run::posint46 = Data::Number(46LL);
Int* const  run::posint63 = Data::Number(63LL);
Int* const  run::posint100 = Data::Number(100LL);
Int* const  run::posint105 = Data::Number(105LL);
Int* const  run::posint164 = Data::Number(164LL);
Int* const  run::posint166 = Data::Number(166LL);
Int* const  run::posint320 = Data::Number(320LL);
Int* const  run::posint868 = Data::Number(868LL);
Int* const  run::posint966 = Data::Number(966LL);
Int* const  run::posint1219 = Data::Number(1219LL);
Int* const  run::posint4819 = Data::Number(4819LL);
Int* const  run::posint6400 = Data::Number(6400LL);
Int* const  run::posint6827 = Data::Number(6827LL);
Int* const  run::posint8275 = Data::Number(8275LL);
Int* const  run::posint8445 = Data::Number(8445LL);
Int* const  run::posint11378 = Data::Number(11378LL);
Operation* const  run::reg_on_load_run_0 = PredTable::Register("on_load_run",0, new pred_on_load_run_0());
Operation* const  run::reg_run_1 = PredTable::Register("run",1, new pred_run_1());
Operation* const  run::reg_run_2 = PredTable::Register("run",2, new pred_run_2());
Operation* const  run::reg_compile_programs_0 = PredTable::Register("compile_programs",0, new pred_compile_programs_0());
Operation* const  run::reg_run_program_4 = PredTable::Register("run_program",4, new pred_run_program_4());
Operation* const  run::reg_add_3 = PredTable::Register("add",3, new pred_add_3());
Operation* const  run::reg_ntimes_4 = PredTable::Register("ntimes",4, new pred_ntimes_4());
Operation* const  run::reg_ntimes_2 = PredTable::Register("ntimes",2, new pred_ntimes_2());
Operation* const  run::reg_ntimes_dummy_1 = PredTable::Register("ntimes_dummy",1, new pred_ntimes_dummy_1());
Operation* const  run::reg_not_not_top_1 = PredTable::Register("not_not_top",1, new pred_not_not_top_1());
Operation* const  run::reg_not_top_1 = PredTable::Register("not_top",1, new pred_not_top_1());
Operation* const  run::reg_not_not_dummy_0 = PredTable::Register("not_not_dummy",0, new pred_not_not_dummy_0());
Operation* const  run::reg_not_dummy_0 = PredTable::Register("not_dummy",0, new pred_not_dummy_0());
Operation* const  run::reg_dummy_0 = PredTable::Register("dummy",0, new pred_dummy_0());
Operation* const  run::reg_tune_counts_0 = PredTable::Register("tune_counts",0, new pred_tune_counts_0());
Operation* const  run::reg_tune_count_2 = PredTable::Register("tune_count",2, new pred_tune_count_2());
Operation* const  run::reg_program_3 = PredTable::Register("program",3, new pred_program_3());
Operation* const  run::reg_program_2 = PredTable::Register("program",2, new pred_program_2());
Operation* const  run::reg_run_interleaved_1 = PredTable::Register("run_interleaved",1, new pred_run_interleaved_1());
Operation* const  run::reg_$002D$002D$003E_2 = PredTable::Register("-->",2, new SxxMachine::Builtins::pred_$002D$002D$003E_2());
Operation* const  run::reg_seq_clause_2 = PredTable::Register("seq_clause",2, new pred_seq_clause_2());
Operation* const  run::reg_run_non_interleaved_1 = PredTable::Register("run_non_interleaved",1, new pred_run_non_interleaved_1());

	Operation* run::pred_on_load_run_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_on_load_run_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_on_load_run_0__1(mach));
	}

	Operation* run::pred_on_load_run_0::exec_pred_on_load_run_0__1(Prolog* mach) {
		mach->FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = Data::F(run::s_style_check,Data::F(run::s5,run::s_singleton));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(run::s_write->FindProc(1));
	}

	Operation* run::pred_on_load_run_0::exec_pred_on_load_run_0__2(Prolog* mach) {
		mach->FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = Data::F(run::s13,Data::F(run::s7,Data::F(run::s_file_search_path,run::s_bench,var1),run::s_true),Data::F(run::s4,Data::F(run::s_prolog_load_context,run::s_directory,run::s10),Data::F(run::s_assert,Data::F(run::s11,run::s_user,Data::F(run::s_file_search_path,run::s_bench,run::s10)))));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(run::s_write->FindProc(1));
	}

	Operation* run::pred_on_load_run_0::exec_pred_on_load_run_0__3(Prolog* mach) {
		mach->FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = Data::F(run::s_if,Data::F(run::s_statistics,run::s_gctime,var1));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(run::s_write->FindProc(1));
	}

	Operation* run::pred_on_load_run_0::exec_pred_on_load_run_0__4(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = Data::F(run::s_dynamic,Data::F(run::s9,run::s_rni,run::posint0));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(run::s_write->FindProc(1));
	}

	Operation* run::pred_run_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_run_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_run_1__1(mach));
	}

	Operation* run::pred_run_1::exec_pred_run_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = run::s_current_output;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_run_2::exec_static);
	}

	Operation* run::pred_run_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_run_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_run_2__1(mach));
	}

	Operation* run::pred_run_2::exec_pred_run_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(run::s_format, { var1->Deref(), run::s104, Data::F(run::s8,run::s_Program,Data::F(run::s8,run::s_Time,Data::F(run::s8,run::s_GC,Const::Nil))), Data::F(run::s_format, { var1->Deref(), run::s102, Const::Nil, Data::F(run::s_unify,Data::F(run::s_total,run::posint0,run::posint0,run::posint0),var3,Data::F(run::s_forall,Data::F(run::s_program,var4,var5,var2->Deref()),Data::F(run::s_run_program, { var4->Deref(), var5->Deref(), var1->Deref(), var3->Deref() }),Data::F(run::s_unify,Data::F(run::s_total,var6,var7,var8),var3->Deref(),Data::F(run::s_is,var9,Data::F(run::s9, { var7->Deref(), var6->Deref() }),Data::F(run::s_is,var10,Data::F(run::s9, { var8->Deref(), var6->Deref() }),Data::F(run::s_format, { var1->Deref(), run::s106, Data::F(run::s8,run::s_average,Data::F(run::s8, { var9->Deref(), Data::F(run::s8, { var10->Deref(), Const::Nil }) })), continuation })))))) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<Operation*>(pred_compile_programs_0::exec_static);
	}

	Operation* run::pred_compile_programs_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_compile_programs_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_compile_programs_0__1(mach));
	}

	Operation* run::pred_compile_programs_0::exec_pred_compile_programs_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	local_aregs[0] = Data::F(run::s5,run::s_singleton);
	local_aregs[1] = Data::F(run::s_forall,Data::F(run::s_program,var1,var2),Data::F(run::s_load_files,Data::F(run::s11, { var1->Deref(), Data::F(run::s_bench, { var1->Deref() }) }),Data::F(run::s8,Data::F(run::s_silent,run::s_true),Data::F(run::s8,Data::F(run::s_if,run::s_changed),Const::Nil))),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_style_check_1::exec_static);
	}

	Operation* run::pred_run_program_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_run_program_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_run_program_4__1(mach));
	}

	Operation* run::pred_run_program_4::exec_pred_run_program_4__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = var6;
	local_aregs[4] = mach->HC(Data::F(run::s_add,run::posint1,var4->Deref(),run::posint1,Data::F(run::s_add,run::posint2,var4->Deref(),var5->Deref(),Data::F(run::s_add,run::posint3,var4->Deref(),var6->Deref(),Data::F(run::s_format, { var3->Deref(), run::s103, Data::F(run::s8, { var1->Deref(), Data::F(run::s8, { var5->Deref(), Data::F(run::s8, { var6->Deref(), Const::Nil }) }) }), continuation })))));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_ntimes_4::exec_static);
	}

	Operation* run::pred_add_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_add_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_add_3__1(mach));
	}

	Operation* run::pred_add_3::exec_pred_add_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = Data::F(run::s_is,var5,Data::F(run::s3, { var4->Deref(), var3->Deref() }),Data::F(run::s_nb_setarg, { var1->Deref(), var2->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(run::s_arg->FindProc(3));
	}

	Operation* run::pred_ntimes_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_ntimes_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_ntimes_4__1(mach));
	}

	Operation* run::pred_ntimes_4::exec_pred_ntimes_4__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = Data::V(mach);
	Var* var9 = Data::V(mach);
	Var* var8 = Data::V(mach);
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var6;
	local_aregs[2] = Data::F(run::s_ntimes, { var1->Deref(), var2->Deref(), Data::F(run::s_get_performance_stats,var7,var8,Data::F(run::s_ntimes_dummy, { var2->Deref(), Data::F(run::s_get_performance_stats,var9,var10,Data::F(run::s_is, { var3->Deref(), Data::F(run::s5,Data::F(run::s5, { var8->Deref(), var6->Deref() }),Data::F(run::s5, { var10->Deref(), var8->Deref() })), Data::F(run::s_is, { var4->Deref(), Data::F(run::s5,Data::F(run::s5, { var7->Deref(), var5->Deref() }),Data::F(run::s5, { var9->Deref(), var7->Deref() })), continuation }) })) })) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_get_performance_stats_2::exec_static);
	}

	Operation* run::pred_ntimes_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_ntimes_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_ntimes_2__1(mach));
	}

	Operation* run::pred_ntimes_2::exec_pred_ntimes_2__1(Prolog* mach) {
		mach->FillAlternative(pred_ntimes_2::exec_pred_ntimes_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = run::posint0;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_arithequal_2::exec_static);
	}

	Operation* run::pred_ntimes_2::exec_pred_ntimes_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(run::s_is,var3,Data::F(run::s5, { var2->Deref(), run::posint1 }),Data::F(run::s_ntimes, { var1->Deref(), var3->Deref(), continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_not_not_top_1::exec_static);
	}

	Operation* run::pred_ntimes_dummy_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_ntimes_dummy_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_ntimes_dummy_1__1(mach));
	}

	Operation* run::pred_ntimes_dummy_1::exec_pred_ntimes_dummy_1__1(Prolog* mach) {
		mach->FillAlternative(pred_ntimes_dummy_1::exec_pred_ntimes_dummy_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = run::posint0;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_arithequal_2::exec_static);
	}

	Operation* run::pred_ntimes_dummy_1::exec_pred_ntimes_dummy_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = mach->HC(Data::F(run::s_is,var2,Data::F(run::s5, { var1->Deref(), run::posint1 }),Data::F(run::s_ntimes_dummy, { var2->Deref(), continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return static_cast<Operation*>(pred_not_not_dummy_0::exec_static);
	}

	Operation* run::pred_not_not_top_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_not_not_top_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_not_not_top_1__1(mach));
	}

	Operation* run::pred_not_not_top_1::exec_pred_not_not_top_1__1(Prolog* mach) {
		mach->FillAlternative(pred_not_not_top_1::exec_pred_not_not_top_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(run::s_fail, { continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_not_top_1::exec_static);
	}

	Operation* run::pred_not_not_top_1::exec_pred_not_not_top_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_not_top_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_not_top_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_not_top_1__1(mach));
	}

	Operation* run::pred_not_top_1::exec_pred_not_top_1__1(Prolog* mach) {
		mach->FillAlternative(pred_not_top_1::exec_pred_not_top_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = run::s_top;
	local_aregs[2] = mach->HC(Data::F(run::s_fail, { continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_module_colon_2::exec_static);
	}

	Operation* run::pred_not_top_1::exec_pred_not_top_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_not_not_dummy_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_not_not_dummy_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_not_not_dummy_0__1(mach));
	}

	Operation* run::pred_not_not_dummy_0::exec_pred_not_not_dummy_0__1(Prolog* mach) {
		mach->FillAlternative(pred_not_not_dummy_0::exec_pred_not_not_dummy_0__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = mach->HC(Data::F(run::s_fail, { continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_not_dummy_0::exec_static);
	}

	Operation* run::pred_not_not_dummy_0::exec_pred_not_not_dummy_0__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return Prolog::Call1;
	}

	Operation* run::pred_not_dummy_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_not_dummy_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_not_dummy_0__1(mach));
	}

	Operation* run::pred_not_dummy_0::exec_pred_not_dummy_0__1(Prolog* mach) {
		mach->FillAlternative(pred_not_dummy_0::exec_pred_not_dummy_0__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = mach->HC(Data::F(run::s_fail, { continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_dummy_0::exec_static);
	}

	Operation* run::pred_not_dummy_0::exec_pred_not_dummy_0__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return Prolog::Call1;
	}

	Operation* run::pred_dummy_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_dummy_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_dummy_0__1(mach));
	}

	Operation* run::pred_dummy_0::exec_pred_dummy_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return Prolog::Call1;
	}

	Operation* run::pred_tune_counts_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_tune_counts_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_tune_counts_0__1(mach));
	}

	Operation* run::pred_tune_counts_0::exec_pred_tune_counts_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	local_aregs[0] = Data::F(run::s_program,var1,var2);
	local_aregs[1] = Data::F(run::s4,Data::F(run::s_tune_count, { var1->Deref(), var3 }),Data::F(run::s_format,run::s105,Data::F(run::s8,Data::F(run::s_program, { var1->Deref(), var3->Deref() }),Const::Nil)));
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::sxx_meta::pred_forall_2::exec_static);
	}

	Operation* run::pred_tune_count_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_tune_count_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_tune_count_2__1(mach));
	}

	Operation* run::pred_tune_count_2::exec_pred_tune_count_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = run::posint1;
	local_aregs[1] = run::posint100;
	local_aregs[2] = var3;
	local_aregs[3] = Data::F(run::s_is,var4,Data::F(run::s14,run::posint1,var3->Deref()),Data::F(run::s_ntimes, { var1->Deref(), var4->Deref(), var5, var6, Data::F(run::s_smallerthan,Data::Float(0.5),var5->Deref(),mach->HC(Data::F(run::s_is, { var2->Deref(), Data::F(run::s_round,Data::F(run::s2, { var4->Deref(), Data::F(run::s9,run::posint1,var5->Deref()) })), continuation }))) }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_between_3::exec_static);
	}

	Operation* run::pred_program_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_program_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_program_3__1(mach));
	}

	Operation* run::pred_program_3::exec_pred_program_3__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4;
	local_aregs[2] = Data::F(run::s_is, { var2->Deref(), Data::F(run::s_max,run::posint1,Data::F(run::s_round,Data::F(run::s2, { var4->Deref(), var3->Deref() }))), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_program_2::exec_static);
	}

	Operation* run::pred_program_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_program_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_program_2__1(mach));
	}

	Operation* run::pred_program_2::exec_pred_program_2__1(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_boyer,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint8,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__2(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_browse,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint7,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__3(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_chat_parser,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint46,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__4(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_crypt,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint868,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__5(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_fast_mu,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint4819,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__6(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_flatten,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint8275,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__7(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_meta_qsort,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint966,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__8(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_mu,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint6827,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__9(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_nreverse,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint11378,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__10(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_poly_10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint105,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__11(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_prover,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint6400,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__12(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_qsort,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint8445,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__13(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_queens_8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint63,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__14(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_query,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint1219,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__15(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_reducer,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint164,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__16(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_sendmore,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint44,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__17(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_simple_analyzer,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint320,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__18(Prolog* mach) {
		mach->FillAlternative(pred_program_2::exec_pred_program_2__19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_tak,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint35,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_program_2::exec_pred_program_2__19(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s_zebra,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::posint166,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_run_interleaved_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_run_interleaved_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_run_interleaved_1__1(mach));
	}

	Operation* run::pred_run_interleaved_1::exec_pred_run_interleaved_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(run::s_findall,Data::F(run::s5,var2,var3),Data::F(run::s_program, { var3->Deref(), var2->Deref(), var1->Deref() }),var4,Data::F(run::s_phrase,Data::F(run::s_seq_interleaved, { var4->Deref() }),var5,Data::F(run::s_seq_clause, { var5->Deref(), var6, Data::F(run::s_retractall,run::s_rni,Data::F(run::s_assert,Data::F(run::s12,run::s_rni,var6->Deref()),var7,Data::F(run::s_garbage_collect,Data::F(run::s_time,run::s_rni,Data::F(run::s_erase, { var7->Deref(), continuation }))))) })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return static_cast<Operation*>(pred_compile_programs_0::exec_static);
	}

	Operation* run::pred_$002D$002D$003E_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_$002D$002D$003E_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_$002D$002D$003E_2__1(mach));
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Data::F(run::s_seq_interleaved, { Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::s1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(run::s_seq_interleaved,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(run::s4,Data::F(run::s_seq_interleaved, { var1->Deref(), var2 }),Data::F(run::s_seq_interleaved, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Data::F(run::s_seq_interleaved, { Const::Nil, Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(run::s_seq_interleaved,Data::F(run::s8,Data::F(run::s5,run::posint1,var1),var2),var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(run::s4,run::s1,Data::F(run::s4,Data::F(run::s8, { var1->Deref(), Const::Nil }),Data::F(run::s_seq_interleaved, { var2->Deref(), var3->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(run::s_seq_interleaved,Data::F(run::s8,Data::F(run::s5,var1,var2),var3),Data::F(run::s8,Data::F(run::s5,var4,var2->Deref()),var5)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(run::s4,Data::F(run::s8, { var2->Deref(), Const::Nil }),Data::F(run::s4,Data::F(run::s101,Data::F(run::s_is, { var4->Deref(), Data::F(run::s5, { var1->Deref(), run::posint1 }) })),Data::F(run::s_seq_interleaved, { var3->Deref(), var5->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Data::F(run::s_seq_non_interleaved, { Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(run::s_seq_non_interleaved,Data::F(run::s8,Data::F(run::s5,run::posint0,var1),var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(run::s4,run::s1,Data::F(run::s_seq_non_interleaved, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(run::s_seq_non_interleaved,Data::F(run::s8,Data::F(run::s5,var1,var2),var3)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(run::s4,Data::F(run::s8, { var2->Deref(), Const::Nil }),Data::F(run::s4,Data::F(run::s101,Data::F(run::s_is,var4,Data::F(run::s5, { var1->Deref(), run::posint1 }))),Data::F(run::s_seq_non_interleaved,Data::F(run::s8,Data::F(run::s5, { var4->Deref(), var2->Deref() }),var3->Deref())))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_seq_clause_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_seq_clause_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_seq_clause_2__1(mach));
	}

	Operation* run::pred_seq_clause_2::exec_pred_seq_clause_2__1(Prolog* mach) {
		mach->FillAlternative(pred_seq_clause_2::exec_pred_seq_clause_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(run::s_true,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* run::pred_seq_clause_2::exec_pred_seq_clause_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(run::s8,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(run::s4,Data::F(run::s11,Data::F(run::s18,Data::F(run::s18, { var1->Deref() })),run::s_top),var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_seq_clause_2::exec_static);
	}

	Operation* run::pred_run_non_interleaved_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* run::pred_run_non_interleaved_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_run_non_interleaved_1__1(mach));
	}

	Operation* run::pred_run_non_interleaved_1::exec_pred_run_non_interleaved_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(run::s_findall,Data::F(run::s5,var2,var3),Data::F(run::s_program, { var3->Deref(), var2->Deref(), var1->Deref() }),var4,Data::F(run::s_phrase,Data::F(run::s_seq_non_interleaved, { var4->Deref() }),var5,Data::F(run::s_seq_clause, { var5->Deref(), var6, Data::F(run::s_assert,Data::F(run::s12,run::s_rni,var6->Deref()),var7,Data::F(run::s_garbage_collect,Data::F(run::s_time,run::s_rni,Data::F(run::s_erase, { var7->Deref(), continuation })))) })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return static_cast<Operation*>(pred_compile_programs_0::exec_static);
	}
}
