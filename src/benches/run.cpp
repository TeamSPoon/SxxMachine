using namespace std;

#include "run.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"
#include "../bootlib/sxx_builtins.h"

Const* run::s0 = Const::Intern("cut");
Const* run::s1 = Const::Intern("!");
Const* run::s2 = Const::Intern("*");
Const* run::s3 = Const::Intern("+");
Const* run::s4 = Const::Intern(",");
Const* run::s5 = Const::Intern("-");
Const* run::s6 = Const::Intern("-->");
Const* run::s7 = Const::Intern("->");
Const* run::s8 = Const::Intern(".");
Const* run::s9 = Const::Intern("/");
Const* run::s10 = Const::Intern("/opt/logicmoo_workspace/taupl/SxxMachine/prolog/bench");
Const* run::s11 = Const::Intern(":");
Const* run::s12 = Const::Intern(":-");
Const* run::s13 = Const::Intern(";");
Const* run::s14 = Const::Intern("<<");
Const* run::s15 = Const::Intern("GC");
Const* run::s16 = Const::Intern("Program");
Const* run::s17 = Const::Intern("Time");
Const* run::s18 = Const::Intern("\\+");
Const* run::s19 = Const::Intern("add");
Const* run::s20 = Const::Intern("arg");
Const* run::s21 = Const::Intern("arithequal");
Const* run::s22 = Const::Intern("assert");
Const* run::s23 = Const::Intern("average");
Const* run::s24 = Const::Intern("bench");
Const* run::s25 = Const::Intern("between");
Const* run::s26 = Const::Intern("boyer");
Const* run::s27 = Const::Intern("browse");
Const* run::s28 = Const::Intern("call");
Const* run::s29 = Const::Intern("changed");
Const* run::s30 = Const::Intern("chat_parser");
Const* run::s31 = Const::Intern("compile_programs");
Const* run::s32 = Const::Intern("crypt");
Const* run::s33 = Const::Intern("current_output");
Const* run::s34 = Const::Intern("cut");
Const* run::s35 = Const::Intern("directory");
Const* run::s36 = Const::Intern("dummy");
Const* run::s37 = Const::Intern("dynamic");
Const* run::s38 = Const::Intern("erase");
Const* run::s39 = Const::Intern("fail");
Const* run::s40 = Const::Intern("fast_mu");
Const* run::s41 = Const::Intern("file_search_path");
Const* run::s42 = Const::Intern("findall");
Const* run::s43 = Const::Intern("flatten");
Const* run::s44 = Const::Intern("forall");
Const* run::s45 = Const::Intern("format");
Const* run::s46 = Const::Intern("garbage_collect");
Const* run::s47 = Const::Intern("gctime");
Const* run::s48 = Const::Intern("get_performance_stats");
Const* run::s49 = Const::Intern("if");
Const* run::s50 = Const::Intern("is");
Const* run::s51 = Const::Intern("load_files");
Const* run::s52 = Const::Intern("max");
Const* run::s53 = Const::Intern("meta_qsort");
Const* run::s54 = Const::Intern("mu");
Const* run::s55 = Const::Intern("nb_setarg");
Const* run::s56 = Const::Intern("not_dummy");
Const* run::s57 = Const::Intern("not_not_dummy");
Const* run::s58 = Const::Intern("not_not_top");
Const* run::s59 = Const::Intern("not_top");
Const* run::s60 = Const::Intern("nreverse");
Const* run::s61 = Const::Intern("ntimes");
Const* run::s62 = Const::Intern("ntimes_dummy");
Const* run::s63 = Const::Intern("on_load_run");
Const* run::s64 = Const::Intern("phrase");
Const* run::s65 = Const::Intern("poly_10");
Const* run::s66 = Const::Intern("program");
Const* run::s67 = Const::Intern("prolog_load_context");
Const* run::s68 = Const::Intern("prover");
Const* run::s69 = Const::Intern("qsort");
Const* run::s70 = Const::Intern("queens_8");
Const* run::s71 = Const::Intern("query");
Const* run::s72 = Const::Intern("reducer");
Const* run::s73 = Const::Intern("retractall");
Const* run::s74 = Const::Intern("rni");
Const* run::s75 = Const::Intern("round");
Const* run::s76 = Const::Intern("run");
Const* run::s77 = Const::Intern("run_interleaved");
Const* run::s78 = Const::Intern("run_non_interleaved");
Const* run::s79 = Const::Intern("run_program");
Const* run::s80 = Const::Intern("sendmore");
Const* run::s81 = Const::Intern("seq_clause");
Const* run::s82 = Const::Intern("seq_interleaved");
Const* run::s83 = Const::Intern("seq_non_interleaved");
Const* run::s84 = Const::Intern("silent");
Const* run::s85 = Const::Intern("simple_analyzer");
Const* run::s86 = Const::Intern("singleton");
Const* run::s87 = Const::Intern("smallerthan");
Const* run::s88 = Const::Intern("statistics");
Const* run::s89 = Const::Intern("style_check");
Const* run::s90 = Const::Intern("tak");
Const* run::s91 = Const::Intern("time");
Const* run::s92 = Const::Intern("top");
Const* run::s93 = Const::Intern("total");
Const* run::s94 = Const::Intern("true");
Const* run::s95 = Const::Intern("tune_count");
Const* run::s96 = Const::Intern("tune_counts");
Const* run::s97 = Const::Intern("unify");
Const* run::s98 = Const::Intern("user");
Const* run::s99 = Const::Intern("write");
Const* run::s100 = Const::Intern("zebra");
Const* run::s101 = Const::Intern("{}");
Const* run::s102 = Const::Intern("~`=t~32|~n");
Const* run::s103 = Const::Intern("~p~t~18| ~t~3f~25| ~t~3f~32|~n");
Const* run::s104 = Const::Intern("~p~t~18| ~t~w~25| ~t~w~32|~n");
Const* run::s105 = Const::Intern("~q.~n");
Const* run::s106 = Const::Intern("~t~w~18| ~t~3f~25| ~t~3f~32|~n");
Int* run::posint0 = Term::Number(0);
Int* run::posint1 = Term::Number(1);
Int* run::posint2 = Term::Number(2);
Int* run::posint3 = Term::Number(3);
Int* run::posint7 = Term::Number(7);
Int* run::posint8 = Term::Number(8);
Int* run::posint35 = Term::Number(35);
Int* run::posint44 = Term::Number(44);
Int* run::posint46 = Term::Number(46);
Int* run::posint63 = Term::Number(63);
Int* run::posint100 = Term::Number(100);
Int* run::posint105 = Term::Number(105);
Int* run::posint164 = Term::Number(164);
Int* run::posint166 = Term::Number(166);
Int* run::posint320 = Term::Number(320);
Int* run::posint868 = Term::Number(868);
Int* run::posint966 = Term::Number(966);
Int* run::posint1219 = Term::Number(1219);
Int* run::posint4819 = Term::Number(4819);
Int* run::posint6400 = Term::Number(6400);
Int* run::posint6827 = Term::Number(6827);
Int* run::posint8275 = Term::Number(8275);
Int* run::posint8445 = Term::Number(8445);
Int* run::posint11378 = Term::Number(11378);

static* function < Function*pred_on_load_run_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_on_load_run_0__1(mach));
}

static* function < Function*pred_on_load_run_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(run::s89, F(run::s5, run::s86));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_run_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(run::s13, F(run::s7, F(run::s41, run::s24, var1), run::s94), F(run::s4, F(run::s67, run::s35, run::s10), F(run::s22, F(run::s11, run::s98, F(run::s41, run::s24, run::s10)))));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_run_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_run_0::exec_pred_on_load_run_0__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(run::s49, F(run::s88, run::s47, var1));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_run_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(run::s37, F(run::s9, run::s74, run::posint0));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_run_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_run_1__1(mach));
}

static* function < Function*pred_run_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = run::s33;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_run_2::exec_static);
}

static* function < Function*pred_run_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_run_2__1(mach));
}

static* function < Function*pred_run_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(run::s45, { var1->Deref(), run::s104, F(run::s8, run::s16, F(run::s8, run::s17, F(run::s8, run::s15, Const::Nil))), F(run::s45, { var1->Deref(), run::s102, Const::Nil, F(run::s97, F(run::s93, run::posint0, run::posint0, run::posint0), var3, F(run::s44, F(run::s66, var4, var5, var2->Deref()), F(run::s79, { var4->Deref(), var5->Deref(), var1->Deref(), var3->Deref() }), F(run::s97, F(run::s93, var6, var7, var8), var3->Deref(), F(run::s50, var9, F(run::s9, { var7->Deref(), var6->Deref() }), F(run::s50, var10, F(run::s9, { var8->Deref(), var6->Deref() }), F(run::s45, { var1->Deref(), run::s106, F(run::s8, run::s23, F(run::s8, { var9->Deref(), F(run::s8, { var10->Deref(), Const::Nil }) })), continuation })))))) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compile_programs_0::exec_static);
}

static* function < Function*pred_compile_programs_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_compile_programs_0__1(mach));
}

static* function < Function*pred_compile_programs_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = F(run::s5, run::s86);
	local_aregs[1] = F(run::s44, F(run::s66, var1, var2), F(run::s51, F(run::s11, { var1->Deref(), F(run::s24, { var1->Deref() }) }), F(run::s8, F(run::s84, run::s94), F(run::s8, F(run::s49, run::s29), Const::Nil))), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_style_check_1::exec_static);
}

static* function < Function*pred_run_program_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_run_program_4__1(mach));
}

static* function < Function*pred_run_program_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = var6;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[4] = F(run::s0, &tempVar, F(run::s19, run::posint1, var4->Deref(), run::posint1, F(run::s19, run::posint2, var4->Deref(), var5->Deref(), F(run::s19, run::posint3, var4->Deref(), var6->Deref(), F(run::s45, { var3->Deref(), run::s103, F(run::s8, { var1->Deref(), F(run::s8, { var5->Deref(), F(run::s8, { var6->Deref(), Const::Nil }) }) }), continuation })))));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ntimes_4::exec_static);
}

static* function < Function*pred_add_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_add_3__1(mach));
}

static* function < Function*pred_add_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = F(run::s50, var5, F(run::s3, { var4->Deref(), var3->Deref() }), F(run::s55, { var1->Deref(), var2->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_arg_3::exec_static);
}

static* function < Function*pred_ntimes_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ntimes_4__1(mach));
}

static* function < Function*pred_ntimes_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var6;
	local_aregs[2] = F(run::s61, { var1->Deref(), var2->Deref(), F(run::s48, var7, var8, F(run::s62, { var2->Deref(), F(run::s48, var9, var10, F(run::s50, { var3->Deref(), F(run::s5, F(run::s5, { var8->Deref(), var6->Deref() }), F(run::s5, { var10->Deref(), var8->Deref() })), F(run::s50, { var4->Deref(), F(run::s5, F(run::s5, { var7->Deref(), var5->Deref() }), F(run::s5, { var9->Deref(), var7->Deref() })), continuation }) })) })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_get_performance_stats_2::exec_static);
}

static* function < Function*pred_ntimes_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ntimes_2__1(mach));
}

static* function < Function*pred_ntimes_2::(PrologMachine*) {
	mach::FillAlternative(pred_ntimes_2::exec_pred_ntimes_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = run::posint0;
	local_aregs[1] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(run::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_arithequal_2::exec_static);
}

static* function < Function*pred_ntimes_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(run::s0, &tempVar, F(run::s50, var3, F(run::s5, { var2->Deref(), run::posint1 }), F(run::s61, { var1->Deref(), var3->Deref(), continuation })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_not_top_1::exec_static);
}

static* function < Function*pred_ntimes_dummy_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ntimes_dummy_1__1(mach));
}

static* function < Function*pred_ntimes_dummy_1::(PrologMachine*) {
	mach::FillAlternative(pred_ntimes_dummy_1::exec_pred_ntimes_dummy_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = run::posint0;
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(run::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_arithequal_2::exec_static);
}

static* function < Function*pred_ntimes_dummy_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	HeapChoice tempVar(mach::CUTB);
	local_aregs[0] = F(run::s0, &tempVar, F(run::s50, var2, F(run::s5, { var1->Deref(), run::posint1 }), F(run::s62, { var2->Deref(), continuation })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_not_dummy_0::exec_static);
}

static* function < Function*pred_not_not_top_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_not_not_top_1__1(mach));
}

static* function < Function*pred_not_not_top_1::(PrologMachine*) {
	mach::FillAlternative(pred_not_not_top_1::exec_pred_not_not_top_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(run::s0, &tempVar, F(run::s39, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_top_1::exec_static);
}

static* function < Function*pred_not_not_top_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_not_top_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_not_top_1__1(mach));
}

static* function < Function*pred_not_top_1::(PrologMachine*) {
	mach::FillAlternative(pred_not_top_1::exec_pred_not_top_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = run::s92;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(run::s0, &tempVar, F(run::s39, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_colon_2::exec_static);
}

static* function < Function*pred_not_top_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_not_not_dummy_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_not_not_dummy_0__1(mach));
}

static* function < Function*pred_not_not_dummy_0::(PrologMachine*) {
	mach::FillAlternative(pred_not_not_dummy_0::exec_pred_not_not_dummy_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	HeapChoice tempVar(mach::CUTB);
	local_aregs[0] = F(run::s0, &tempVar, F(run::s39, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_dummy_0::exec_static);
}

static* function < Function*pred_not_not_dummy_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_not_dummy_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_not_dummy_0__1(mach));
}

static* function < Function*pred_not_dummy_0::(PrologMachine*) {
	mach::FillAlternative(pred_not_dummy_0::exec_pred_not_dummy_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	HeapChoice tempVar(mach::CUTB);
	local_aregs[0] = F(run::s0, &tempVar, F(run::s39, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_dummy_0::exec_static);
}

static* function < Function*pred_not_dummy_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_dummy_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_dummy_0__1(mach));
}

static* function < Function*pred_dummy_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_tune_counts_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tune_counts_0__1(mach));
}

static* function < Function*pred_tune_counts_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = F(run::s66, var1, var2);
	local_aregs[1] = F(run::s4, F(run::s95, { var1->Deref(), var3 }), F(run::s45, run::s105, F(run::s8, F(run::s66, { var1->Deref(), var3->Deref() }), Const::Nil)));
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_forall_2::exec_static);
}

static* function < Function*pred_tune_count_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tune_count_2__1(mach));
}

static* function < Function*pred_tune_count_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = run::posint1;
	local_aregs[1] = run::posint100;
	local_aregs[2] = var3;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(run::s50, var4, F(run::s14, run::posint1, var3->Deref()), F(run::s61, { var1->Deref(), var4->Deref(), var5, var6, F(run::s87, Float(0.5), var5->Deref(), F(run::s0, &tempVar, F(run::s50, { var2->Deref(), F(run::s75, F(run::s2, { var4->Deref(), F(run::s9, run::posint1, var5->Deref()) })), continuation }))) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_between_3::exec_static);
}

static* function < Function*pred_program_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_program_3__1(mach));
}

static* function < Function*pred_program_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4;
	local_aregs[2] = F(run::s50, { var2->Deref(), F(run::s52, run::posint1, F(run::s75, F(run::s2, { var4->Deref(), var3->Deref() }))), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_program_2::exec_static);
}

static* function < Function*pred_program_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_program_2__1(mach));
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s27))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s30))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint46))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s32))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint868))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint4819))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint8275))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s53))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint966))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s54))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint6827))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s60))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint11378))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint105))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint6400))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s69))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint8445))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s70))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint63))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s71))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint1219))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s72))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint164))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s80))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint44))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s85))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint320))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::FillAlternative(pred_program_2::exec_pred_program_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s90))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint35))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_program_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(run::s100))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::posint166))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_run_interleaved_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_run_interleaved_1__1(mach));
}

static* function < Function*pred_run_interleaved_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(run::s42, F(run::s5, var2, var3), F(run::s66, { var3->Deref(), var2->Deref(), var1->Deref() }), var4, F(run::s64, F(run::s82, { var4->Deref() }), var5, F(run::s81, { var5->Deref(), var6, F(run::s73, run::s74, F(run::s22, F(run::s12, run::s74, var6->Deref()), var7, F(run::s46, F(run::s91, run::s74, F(run::s38, { var7->Deref(), continuation }))))) })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compile_programs_0::exec_static);
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sym_dcg_arrow_2__1(mach));
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(run::s82, { Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::s1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(run::s82, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(run::s4, F(run::s82, { var1->Deref(), var2 }), F(run::s82, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(run::s82, { Const::Nil, Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(run::s82, F(run::s8, F(run::s5, run::posint1, var1), var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(run::s4, run::s1, F(run::s4, F(run::s8, { var1->Deref(), Const::Nil }), F(run::s82, { var2->Deref(), var3->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(run::s82, F(run::s8, F(run::s5, var1, var2), var3), F(run::s8, F(run::s5, var4, var2->Deref()), var5))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(run::s4, F(run::s8, { var2->Deref(), Const::Nil }), F(run::s4, F(run::s101, F(run::s50, { var4->Deref(), F(run::s5, { var1->Deref(), run::posint1 }) })), F(run::s82, { var3->Deref(), var5->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(run::s83, { Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(run::s83, F(run::s8, F(run::s5, run::posint0, var1), var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(run::s4, run::s1, F(run::s83, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(run::s83, F(run::s8, F(run::s5, var1, var2), var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(run::s4, F(run::s8, { var2->Deref(), Const::Nil }), F(run::s4, F(run::s101, F(run::s50, var4, F(run::s5, { var1->Deref(), run::posint1 }))), F(run::s83, F(run::s8, F(run::s5, { var4->Deref(), var2->Deref() }), var3->Deref()))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_seq_clause_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_seq_clause_2__1(mach));
}

static* function < Function*pred_seq_clause_2::(PrologMachine*) {
	mach::FillAlternative(pred_seq_clause_2::exec_pred_seq_clause_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(run::s94))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_seq_clause_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(run::s8, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(run::s4, F(run::s11, F(run::s18, F(run::s18, { var1->Deref() })), run::s92), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_seq_clause_2::exec_static);
}

static* function < Function*pred_run_non_interleaved_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_run_non_interleaved_1__1(mach));
}

static* function < Function*pred_run_non_interleaved_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(run::s42, F(run::s5, var2, var3), F(run::s66, { var3->Deref(), var2->Deref(), var1->Deref() }), var4, F(run::s64, F(run::s83, { var4->Deref() }), var5, F(run::s81, { var5->Deref(), var6, F(run::s22, F(run::s12, run::s74, var6->Deref()), var7, F(run::s46, F(run::s91, run::s74, F(run::s38, { var7->Deref(), continuation })))) })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compile_programs_0::exec_static);
}
