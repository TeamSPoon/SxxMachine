using namespace std;

#include "boyer.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../machine/builtins.h"
#include "sdda.h"
#include "../bootlib/sxx_builtins.h"
#include "chat_parser.h"

Const* boyer::s0 = Const::Intern("cut");
Const* boyer::s1 = Const::Intern(" milliseconds");
Const* boyer::s2 = Const::Intern(",");
Const* boyer::s3 = Const::Intern("-");
Const* boyer::s4 = Const::Intern("->");
Const* boyer::s5 = Const::Intern(".");
Const* boyer::s6 = Const::Intern(":-");
Const* boyer::s7 = Const::Intern(";");
Const* boyer::s8 = Const::Intern("=");
Const* boyer::s9 = Const::Intern("a");
Const* boyer::s10 = Const::Intern("add1");
Const* boyer::s11 = Const::Intern("and");
Const* boyer::s12 = Const::Intern("append");
Const* boyer::s13 = Const::Intern("arg");
Const* boyer::s14 = Const::Intern("assignedp");
Const* boyer::s15 = Const::Intern("assignment");
Const* boyer::s16 = Const::Intern("assume_false");
Const* boyer::s17 = Const::Intern("assume_true");
Const* boyer::s18 = Const::Intern("atomic");
Const* boyer::s19 = Const::Intern("b");
Const* boyer::s20 = Const::Intern("big_plus");
Const* boyer::s21 = Const::Intern("big_plus1");
Const* boyer::s22 = Const::Intern("boolean");
Const* boyer::s23 = Const::Intern("boyer_difference");
Const* boyer::s24 = Const::Intern("boyer_member");
Const* boyer::s25 = Const::Intern("c");
Const* boyer::s26 = Const::Intern("call");
Const* boyer::s27 = Const::Intern("car");
Const* boyer::s28 = Const::Intern("cdr");
Const* boyer::s29 = Const::Intern("codegen");
Const* boyer::s30 = Const::Intern("compile");
Const* boyer::s31 = Const::Intern("cons");
Const* boyer::s32 = Const::Intern("count_list");
Const* boyer::s33 = Const::Intern("countps_");
Const* boyer::s34 = Const::Intern("countps_loop");
Const* boyer::s35 = Const::Intern("cut");
Const* boyer::s36 = Const::Intern("d");
Const* boyer::s37 = Const::Intern("decr");
Const* boyer::s38 = Const::Intern("delete");
Const* boyer::s39 = Const::Intern("divides");
Const* boyer::s40 = Const::Intern("dsort");
Const* boyer::s41 = Const::Intern("eq");
Const* boyer::s42 = Const::Intern("eqp");
Const* boyer::s43 = Const::Intern("equal");
Const* boyer::s44 = Const::Intern("even1");
Const* boyer::s45 = Const::Intern("exec");
Const* boyer::s46 = Const::Intern("execution time is ");
Const* boyer::s47 = Const::Intern("exp");
Const* boyer::s48 = Const::Intern("f");
Const* boyer::s49 = Const::Intern("fact_");
Const* boyer::s50 = Const::Intern("fact_loop");
Const* boyer::s51 = Const::Intern("fail");
Const* boyer::s52 = Const::Intern("falsep");
Const* boyer::s53 = Const::Intern("falsify");
Const* boyer::s54 = Const::Intern("falsify1");
Const* boyer::s55 = Const::Intern("fix");
Const* boyer::s56 = Const::Intern("flatten");
Const* boyer::s57 = Const::Intern("functor");
Const* boyer::s58 = Const::Intern("gcd");
Const* boyer::s59 = Const::Intern("get");
Const* boyer::s60 = Const::Intern("go");
Const* boyer::s61 = Const::Intern("gopher");
Const* boyer::s62 = Const::Intern("greatereqp");
Const* boyer::s63 = Const::Intern("greatereqpr");
Const* boyer::s64 = Const::Intern("greaterp");
Const* boyer::s65 = Const::Intern("greatest_factor");
Const* boyer::s66 = Const::Intern("if");
Const* boyer::s67 = Const::Intern("iff");
Const* boyer::s68 = Const::Intern("implies");
Const* boyer::s69 = Const::Intern("intersect");
Const* boyer::s70 = Const::Intern("is");
Const* boyer::s71 = Const::Intern("last");
Const* boyer::s72 = Const::Intern("length");
Const* boyer::s73 = Const::Intern("lesseqp");
Const* boyer::s74 = Const::Intern("lessp");
Const* boyer::s75 = Const::Intern("listp");
Const* boyer::s76 = Const::Intern("mc_flatten");
Const* boyer::s77 = Const::Intern("meaning");
Const* boyer::s78 = Const::Intern("myboyer_member");
Const* boyer::s79 = Const::Intern("mylength");
Const* boyer::s80 = Const::Intern("myplus");
Const* boyer::s81 = Const::Intern("nlistp");
Const* boyer::s82 = Const::Intern("normalize");
Const* boyer::s83 = Const::Intern("not");
Const* boyer::s84 = Const::Intern("nth");
Const* boyer::s85 = Const::Intern("numberp");
Const* boyer::s86 = Const::Intern("odd");
Const* boyer::s87 = Const::Intern("optimize");
Const* boyer::s88 = Const::Intern("or");
Const* boyer::s89 = Const::Intern("plus_fringe");
Const* boyer::s90 = Const::Intern("plus_tree");
Const* boyer::s91 = Const::Intern("power_eval");
Const* boyer::s92 = Const::Intern("power_rep");
Const* boyer::s93 = Const::Intern("prime");
Const* boyer::s94 = Const::Intern("prime1");
Const* boyer::s95 = Const::Intern("prime_list");
Const* boyer::s96 = Const::Intern("quotient");
Const* boyer::s97 = Const::Intern("remainder");
Const* boyer::s98 = Const::Intern("reverse");
Const* boyer::s99 = Const::Intern("reverse_");
Const* boyer::s100 = Const::Intern("reverse_loop");
Const* boyer::s101 = Const::Intern("rewrite");
Const* boyer::s102 = Const::Intern("rewrite_args");
Const* boyer::s103 = Const::Intern("runtime");
Const* boyer::s104 = Const::Intern("samefringe");
Const* boyer::s105 = Const::Intern("set");
Const* boyer::s106 = Const::Intern("sigma");
Const* boyer::s107 = Const::Intern("sort2");
Const* boyer::s108 = Const::Intern("sort_lp");
Const* boyer::s109 = Const::Intern("statistics");
Const* boyer::s110 = Const::Intern("t");
Const* boyer::s111 = Const::Intern("tautology");
Const* boyer::s112 = Const::Intern("tautology_checker");
Const* boyer::s113 = Const::Intern("tautologyp");
Const* boyer::s114 = Const::Intern("times");
Const* boyer::s115 = Const::Intern("times_list");
Const* boyer::s116 = Const::Intern("top");
Const* boyer::s117 = Const::Intern("true");
Const* boyer::s118 = Const::Intern("truep");
Const* boyer::s119 = Const::Intern("unify");
Const* boyer::s120 = Const::Intern("value");
Const* boyer::s121 = Const::Intern("wff");
Const* boyer::s122 = Const::Intern("write");
Const* boyer::s123 = Const::Intern("x");
Const* boyer::s124 = Const::Intern("y");
Const* boyer::s125 = Const::Intern("zero");
Const* boyer::s126 = Const::Intern("zerop");
Int* boyer::posint0 = Term::Number(0);
Int* boyer::posint1 = Term::Number(1);
Int* boyer::posint2 = Term::Number(2);
Int* boyer::posint6 = Term::Number(6);

static* function < Function*pred_go_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_go_0__1(mach));
}

static* function < Function*pred_go_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = boyer::s103;
	local_aregs[1] = F(boyer::s5, var1, F(boyer::s5, var2, Const::Nil));
	local_aregs[2] = F(boyer::s121, var3, F(boyer::s101, { var3->Deref(), var4, F(boyer::s111, { var4->Deref(), Const::Nil, Const::Nil, F(boyer::s109, boyer::s103, F(boyer::s5, var5, F(boyer::s5, var6, Const::Nil)), F(boyer::s122, boyer::s46, F(boyer::s122, { var6->Deref(), F(boyer::s122, boyer::s1, continuation) }))) }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_statistics_2::exec_static);
}

static* function < Function*pred_top_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_top_0__1(mach));
}

static* function < Function*pred_top_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = F(boyer::s101, { var1->Deref(), var2, F(boyer::s111, { var2->Deref(), Const::Nil, Const::Nil, continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_wff_1::exec_static);
}

static* function < Function*pred_wff_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_wff_1__1(mach));
}

static* function < Function*pred_wff_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s68, F(boyer::s11, F(boyer::s68, var1, var2), F(boyer::s11, F(boyer::s68, { var2->Deref(), var3 }), F(boyer::s11, F(boyer::s68, { var3->Deref(), var4 }), F(boyer::s68, { var4->Deref(), var5 })))), F(boyer::s68, { var1->Deref(), var5->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(boyer::s48, F(boyer::s80, F(boyer::s80, boyer::s9, boyer::s19), F(boyer::s80, boyer::s25, boyer::s125)));
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(boyer::s119, F(boyer::s48, F(boyer::s114, F(boyer::s114, boyer::s9, boyer::s19), F(boyer::s80, boyer::s25, boyer::s36))), var2->Deref(), F(boyer::s119, F(boyer::s48, F(boyer::s98, F(boyer::s12, F(boyer::s12, boyer::s9, boyer::s19), Const::Nil))), var3->Deref(), F(boyer::s119, F(boyer::s43, F(boyer::s80, boyer::s9, boyer::s19), F(boyer::s23, boyer::s123, boyer::s124)), var4->Deref(), F(boyer::s119, F(boyer::s74, F(boyer::s97, boyer::s9, boyer::s19), F(boyer::s24, boyer::s9, F(boyer::s72, boyer::s19))), var5->Deref(), continuation))));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_tautology_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tautology_1__1(mach));
}

static* function < Function*pred_tautology_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = F(boyer::s111, { var2->Deref(), Const::Nil, Const::Nil, continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rewrite_2::exec_static);
}

static* function < Function*pred_tautology_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tautology_3__1(mach));
}

static* function < Function*pred_tautology_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	local_aregs[0] = F(boyer::s4, F(boyer::s118, { var1->Deref(), var2->Deref() }), boyer::s117);
	local_aregs[1] = F(boyer::s7, F(boyer::s4, F(boyer::s52, { var1->Deref(), var3->Deref() }), boyer::s51), F(boyer::s4, F(boyer::s8, { var1->Deref(), F(boyer::s66, var4, var5, var6) }), F(boyer::s7, F(boyer::s4, F(boyer::s118, { var4->Deref(), var2->Deref() }), F(boyer::s111, { var5->Deref(), var2->Deref(), var3->Deref() })), F(boyer::s7, F(boyer::s4, F(boyer::s52, { var4->Deref(), var3->Deref() }), F(boyer::s111, { var6->Deref(), var2->Deref(), var3->Deref() })), F(boyer::s2, F(boyer::s111, { var5->Deref(), F(boyer::s5, { var4->Deref(), var2->Deref() }), var3->Deref() }), F(boyer::s111, { var6->Deref(), var2->Deref(), F(boyer::s5, { var4->Deref(), var3->Deref() }) }))))));
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(boyer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_rewrite_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rewrite_2__1(mach));
}

static* function < Function*pred_rewrite_2::(PrologMachine*) {
	mach::FillAlternative(pred_rewrite_2::exec_pred_rewrite_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(boyer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_rewrite_2::(PrologMachine*) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = var4;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(boyer::s57, var5, var3->Deref(), var4->Deref(), F(boyer::s102, { var4->Deref(), var1->Deref(), var5->Deref(), F(boyer::s88, F(boyer::s2, F(boyer::s43, { var5->Deref(), var6 }), F(boyer::s101, { var6->Deref(), var2->Deref() })), F(boyer::s8, { var2->Deref(), var5->Deref() }), F(boyer::s0, &tempVar, continuation)) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_static);
}

static* function < Function*pred_rewrite_args_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rewrite_args_3__1(mach));
}

static* function < Function*pred_rewrite_args_3::(PrologMachine*) {
	mach::FillAlternative(pred_rewrite_args_3::exec_pred_rewrite_args_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(boyer::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_rewrite_args_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = F(boyer::s13, { var1->Deref(), var3->Deref(), var5, F(boyer::s101, { var4->Deref(), var5->Deref(), F(boyer::s70, var6, F(boyer::s3, { var1->Deref(), boyer::posint1 }), F(boyer::s102, { var6->Deref(), var2->Deref(), var3->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_arg_3::exec_static);
}

static* function < Function*pred_truep_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_truep_2__1(mach));
}

static* function < Function*pred_truep_2::(PrologMachine*) {
	mach::FillAlternative(pred_truep_2::exec_pred_truep_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(boyer::s110))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_truep_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_boyer_member_2::exec_static);
}

static* function < Function*pred_falsep_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_falsep_2__1(mach));
}

static* function < Function*pred_falsep_2::(PrologMachine*) {
	mach::FillAlternative(pred_falsep_2::exec_pred_falsep_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(boyer::s48))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_falsep_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_boyer_member_2::exec_static);
}

static* function < Function*pred_boyer_member_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_boyer_member_2__1(mach));
}

static* function < Function*pred_boyer_member_2::(PrologMachine*) {
	mach::FillAlternative(pred_boyer_member_2::exec_pred_boyer_member_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s5, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_boyer_member_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(boyer::s5, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_boyer_member_2::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_equal_2__1(mach));
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s11, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, { var1->Deref(), F(boyer::s66, { var2->Deref(), boyer::s110, boyer::s48 }), boyer::s48 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s12, F(boyer::s12, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s12, { var1->Deref(), F(boyer::s12, { var2->Deref(), var3->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s15, var1, F(boyer::s12, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, F(boyer::s14, { var1->Deref(), var2->Deref() }), F(boyer::s15, { var1->Deref(), var2->Deref() }), F(boyer::s15, { var1->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s16, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s31, F(boyer::s31, { var1->Deref(), boyer::s48 }), var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s17, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s31, F(boyer::s31, { var1->Deref(), boyer::s110 }), var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s22, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s88, F(boyer::s43, { var1->Deref(), boyer::s110 }), F(boyer::s43, { var1->Deref(), boyer::s48 }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s27, F(boyer::s61, var1))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, F(boyer::s75, { var1->Deref() }), F(boyer::s27, F(boyer::s56, { var1->Deref() })), boyer::s125)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s30, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s98, F(boyer::s29, F(boyer::s87, { var1->Deref() }), Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s32, var1, F(boyer::s108, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, F(boyer::s32, { var1->Deref(), var2->Deref() }), F(boyer::s32, { var1->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s33, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s34, { var1->Deref(), var2->Deref(), boyer::s125 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s23, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_boyer_difference_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s39, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s126, F(boyer::s97, { var2->Deref(), var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s40, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s107, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s42, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s43, F(boyer::s55, { var1->Deref() }), F(boyer::s55, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s43, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_eq_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s44, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, F(boyer::s126, { var1->Deref() }), boyer::s110, F(boyer::s86, F(boyer::s37, { var1->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s45, F(boyer::s12, var1, var2), var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s45, { var2->Deref(), F(boyer::s45, { var1->Deref(), var3->Deref(), var4->Deref() }), var4->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s47, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exp_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s49, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s50, { var1->Deref(), boyer::posint1 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s53, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s54, F(boyer::s82, { var1->Deref() }), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s55, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, F(boyer::s85, { var1->Deref() }), var1->Deref(), boyer::s125)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s56, F(boyer::s28, F(boyer::s61, var1)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, F(boyer::s75, { var1->Deref() }), F(boyer::s28, F(boyer::s56, { var1->Deref() })), F(boyer::s31, boyer::s125, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s58, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_gcd_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s59, var1, F(boyer::s105, var2, var3, var4))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, F(boyer::s42, { var1->Deref(), var2->Deref() }), var3->Deref(), F(boyer::s59, { var1->Deref(), var4->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s62, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s83, F(boyer::s74, { var1->Deref(), var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s63, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s83, F(boyer::s74, { var1->Deref(), var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s64, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s74, { var2->Deref(), var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__29);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s66, F(boyer::s66, var1, var2, var3), var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, { var1->Deref(), F(boyer::s66, { var2->Deref(), var4->Deref(), var5->Deref() }), F(boyer::s66, { var3->Deref(), var4->Deref(), var5->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__30);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s67, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s11, F(boyer::s68, { var1->Deref(), var2->Deref() }), F(boyer::s68, { var2->Deref(), var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__31);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s68, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, { var1->Deref(), F(boyer::s66, { var2->Deref(), boyer::s110, boyer::s48 }), boyer::s110 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__32);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s71, F(boyer::s12, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, F(boyer::s75, { var2->Deref() }), F(boyer::s71, { var2->Deref() }), F(boyer::s66, F(boyer::s75, { var1->Deref() }), F(boyer::s31, F(boyer::s27, F(boyer::s71, { var1->Deref() }))), var2->Deref()))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__33);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s72, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_mylength_2::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__34);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s73, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s83, F(boyer::s74, { var2->Deref(), var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__35);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s74, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_lessp_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__36);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s75, F(boyer::s61, var1))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s75, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__37);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s76, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s12, F(boyer::s56, { var1->Deref() }), var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__38);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s77, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_meaning_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__39);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s24, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_myboyer_member_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__40);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s83, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, { var1->Deref(), boyer::s48, boyer::s110 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__41);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s84, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nth_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__42);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s85, F(boyer::s65, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s83, F(boyer::s11, F(boyer::s88, F(boyer::s126, { var2->Deref() }), F(boyer::s43, { var2->Deref(), boyer::posint1 })), F(boyer::s83, F(boyer::s85, { var1->Deref() }))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__43);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s88, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s66, { var1->Deref(), boyer::s110, F(boyer::s66, { var2->Deref(), boyer::s110, boyer::s48 }), boyer::s48 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__44);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_myplus_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__45);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s91, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_power_eval_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__46);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s93, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s11, F(boyer::s83, F(boyer::s126, { var1->Deref() })), F(boyer::s11, F(boyer::s83, F(boyer::s43, { var1->Deref(), F(boyer::s10, boyer::s125) })), F(boyer::s94, { var1->Deref(), F(boyer::s37, { var1->Deref() }) })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__47);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s95, F(boyer::s12, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s11, F(boyer::s95, { var1->Deref() }), F(boyer::s95, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__48);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s96, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_quotient_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__49);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s97, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_remainder_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__50);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s99, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s100, { var1->Deref(), Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__51);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s98, F(boyer::s12, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s12, F(boyer::s98, { var2->Deref() }), F(boyer::s98, { var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__52);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s100, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_reverse_loop_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__53);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s104, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s43, F(boyer::s56, { var1->Deref() }), F(boyer::s56, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__54);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s106, boyer::s125, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s96, F(boyer::s114, { var1->Deref(), F(boyer::s10, { var1->Deref() }) }), boyer::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__55);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s107, F(boyer::s38, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s38, { var1->Deref(), F(boyer::s107, { var2->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__56);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s112, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s113, F(boyer::s82, { var1->Deref() }), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__57);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_times_3::exec_static);
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__58);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s115, F(boyer::s12, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s114, F(boyer::s115, { var1->Deref() }), F(boyer::s115, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::FillAlternative(pred_equal_2::exec_pred_equal_2__59);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s120, F(boyer::s82, var1), var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s120, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_equal_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s126, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s88, F(boyer::s43, { var1->Deref(), boyer::s125 }), F(boyer::s83, F(boyer::s85, { var1->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_boyer_difference_3__1(mach));
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s55, { var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s55, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s23, { var2->Deref(), var3->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, F(boyer::s80, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, { var1->Deref(), var3->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s10, F(boyer::s80, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s10, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_boyer_difference_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s10, F(boyer::s10, var1))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s55, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_eq_3__1(mach));
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s126, { var1->Deref() }), F(boyer::s126, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s43, F(boyer::s55, { var2->Deref() }), F(boyer::s55, { var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s23, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s83, F(boyer::s74, { var2->Deref(), var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s23, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s85, { var1->Deref() }), F(boyer::s11, F(boyer::s88, F(boyer::s43, { var1->Deref(), boyer::s125 }), F(boyer::s126, { var2->Deref() }))))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s88, F(boyer::s126, { var1->Deref() }), F(boyer::s126, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s12, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s12, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s43, { var2->Deref(), var3->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s56, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s31, var2, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s81, { var1->Deref() }), F(boyer::s43, { var1->Deref(), var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s65, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s88, F(boyer::s126, { var2->Deref() }), F(boyer::s43, { var2->Deref(), boyer::posint1 })), F(boyer::s43, { var1->Deref(), boyer::s125 }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s65, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s43, { var1->Deref(), boyer::posint1 })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s114, var2, var1->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s85, { var1->Deref() }), F(boyer::s88, F(boyer::s43, { var1->Deref(), boyer::s125 }), F(boyer::s43, { var2->Deref(), boyer::posint1 })))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s114, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s88, F(boyer::s43, { var1->Deref(), boyer::s125 }), F(boyer::s11, F(boyer::s85, { var1->Deref() }), F(boyer::s43, { var2->Deref(), boyer::posint1 })))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s83, F(boyer::s43, { var1->Deref(), boyer::s125 })), F(boyer::s11, F(boyer::s83, F(boyer::s43, { var2->Deref(), boyer::s125 })), F(boyer::s11, F(boyer::s85, { var1->Deref() }), F(boyer::s11, F(boyer::s85, { var2->Deref() }), F(boyer::s11, F(boyer::s43, F(boyer::s37, { var1->Deref() }), boyer::s125), F(boyer::s43, F(boyer::s37, { var2->Deref() }), boyer::s125))))))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::FillAlternative(pred_eq_3::exec_pred_eq_3__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s23, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s23, var3, var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s66, F(boyer::s74, { var1->Deref(), var2->Deref() }), F(boyer::s83, F(boyer::s74, { var2->Deref(), var3->Deref() })), F(boyer::s66, F(boyer::s74, { var3->Deref(), var2->Deref() }), F(boyer::s83, F(boyer::s74, { var2->Deref(), var1->Deref() })), F(boyer::s43, F(boyer::s55, { var1->Deref() }), F(boyer::s55, { var3->Deref() }))))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_eq_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s74, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s66, F(boyer::s74, { var1->Deref(), var2->Deref() }), F(boyer::s43, boyer::s110, var3->Deref()), F(boyer::s43, boyer::s48, var3->Deref()))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_exp_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_exp_3__1(mach));
}

static* function < Function*pred_exp_3::(PrologMachine*) {
	mach::FillAlternative(pred_exp_3::exec_pred_exp_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s114, F(boyer::s47, { var1->Deref(), var2->Deref() }), F(boyer::s47, { var1->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_exp_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s114, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s47, F(boyer::s47, { var1->Deref(), var2->Deref() }), var3->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_gcd_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_gcd_3__1(mach));
}

static* function < Function*pred_gcd_3::(PrologMachine*) {
	mach::FillAlternative(pred_gcd_3::exec_pred_gcd_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(F(boyer::s58, { var2->Deref(), var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_gcd_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s114, var3, var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s114, { var2->Deref(), F(boyer::s58, { var1->Deref(), var3->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_mylength_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_mylength_2__1(mach));
}

static* function < Function*pred_mylength_2::(PrologMachine*) {
	mach::FillAlternative(pred_mylength_2::exec_pred_mylength_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s98, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s72, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_mylength_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s31, var1, F(boyer::s31, var2, F(boyer::s31, var3, F(boyer::s31, var4, F(boyer::s31, var5, F(boyer::s31, var6, var7))))))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, boyer::posint6, F(boyer::s72, { var7->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_lessp_3__1(mach));
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	mach::FillAlternative(pred_lessp_3::exec_pred_lessp_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s97, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s83, F(boyer::s126, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	mach::FillAlternative(pred_lessp_3::exec_pred_lessp_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s96, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s83, F(boyer::s126, { var1->Deref() })), F(boyer::s88, F(boyer::s126, { var2->Deref() }), F(boyer::s83, F(boyer::s43, { var2->Deref(), boyer::posint1 }))))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	mach::FillAlternative(pred_lessp_3::exec_pred_lessp_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s97, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s83, F(boyer::s126, { var2->Deref() })), F(boyer::s11, F(boyer::s83, F(boyer::s126, { var1->Deref() })), F(boyer::s83, F(boyer::s74, { var1->Deref(), var2->Deref() }))))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	mach::FillAlternative(pred_lessp_3::exec_pred_lessp_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s74, { var2->Deref(), var3->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	mach::FillAlternative(pred_lessp_3::exec_pred_lessp_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s114, var3, var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s83, F(boyer::s126, { var2->Deref() })), F(boyer::s74, { var1->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	mach::FillAlternative(pred_lessp_3::exec_pred_lessp_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, var2, var1->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s83, F(boyer::s126, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_lessp_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s72, F(boyer::s38, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s72, { var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s24, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_meaning_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_meaning_3__1(mach));
}

static* function < Function*pred_meaning_3::(PrologMachine*) {
	mach::FillAlternative(pred_meaning_3::exec_pred_meaning_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s90, F(boyer::s12, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, F(boyer::s77, F(boyer::s90, { var1->Deref() }), var3->Deref()), F(boyer::s77, F(boyer::s90, { var2->Deref() }), var3->Deref()))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_meaning_3::(PrologMachine*) {
	mach::FillAlternative(pred_meaning_3::exec_pred_meaning_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s90, F(boyer::s89, var1))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s55, F(boyer::s77, { var1->Deref(), var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_meaning_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s90, F(boyer::s38, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s66, F(boyer::s24, { var1->Deref(), var2->Deref() }), F(boyer::s23, F(boyer::s77, F(boyer::s90, { var2->Deref() }), var3->Deref()), F(boyer::s77, { var1->Deref(), var3->Deref() })), F(boyer::s77, F(boyer::s90, { var2->Deref() }), var3->Deref()))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_myboyer_member_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_myboyer_member_3__1(mach));
}

static* function < Function*pred_myboyer_member_3::(PrologMachine*) {
	mach::FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s12, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s88, F(boyer::s24, { var1->Deref(), var2->Deref() }), F(boyer::s24, { var1->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_myboyer_member_3::(PrologMachine*) {
	mach::FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s98, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s24, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_myboyer_member_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s69, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s11, F(boyer::s24, { var1->Deref(), var2->Deref() }), F(boyer::s24, { var1->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_nth_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nth_3__1(mach));
}

static* function < Function*pred_nth_3::(PrologMachine*) {
	mach::FillAlternative(pred_nth_3::exec_pred_nth_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_nth_3::(PrologMachine*) {
	mach::FillAlternative(pred_nth_3::exec_pred_nth_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s66, F(boyer::s126, { var1->Deref() }), Const::Nil, boyer::s125)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_nth_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s12, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s12, F(boyer::s84, { var1->Deref(), var3->Deref() }), F(boyer::s84, { var2->Deref(), F(boyer::s23, { var3->Deref(), F(boyer::s72, { var1->Deref() }) }) }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_myplus_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_myplus_3__1(mach));
}

static* function < Function*pred_myplus_3::(PrologMachine*) {
	mach::FillAlternative(pred_myplus_3::exec_pred_myplus_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, { var1->Deref(), F(boyer::s80, { var2->Deref(), var3->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_myplus_3::(PrologMachine*) {
	mach::FillAlternative(pred_myplus_3::exec_pred_myplus_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s97, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s114, { var2->Deref(), F(boyer::s96, { var1->Deref(), var2->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s55, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_myplus_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s10, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s66, F(boyer::s85, { var2->Deref() }), F(boyer::s10, F(boyer::s80, { var1->Deref(), var2->Deref() })), F(boyer::s10, { var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_power_eval_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_power_eval_3__1(mach));
}

static* function < Function*pred_power_eval_3::(PrologMachine*) {
	mach::FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s21, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, F(boyer::s91, { var1->Deref(), var3->Deref() }), var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_power_eval_3::(PrologMachine*) {
	mach::FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s92, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s55, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_power_eval_3::(PrologMachine*) {
	mach::FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s20, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, { var3->Deref(), F(boyer::s80, F(boyer::s91, { var1->Deref(), var4->Deref() }), F(boyer::s91, { var2->Deref(), var4->Deref() })) })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_power_eval_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s20, F(boyer::s92, var1, var2), F(boyer::s92, var3, var2->Deref()), boyer::s125, var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, { var1->Deref(), var3->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quotient_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_quotient_3__1(mach));
}

static* function < Function*pred_quotient_3::(PrologMachine*) {
	mach::FillAlternative(pred_quotient_3::exec_pred_quotient_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s80, var1, F(boyer::s80, { var1->Deref(), var2 }))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, { var1->Deref(), F(boyer::s96, { var2->Deref(), boyer::posint2 }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_quotient_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s66, F(boyer::s126, { var1->Deref() }), boyer::s125, F(boyer::s55, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_remainder_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_remainder_3__1(mach));
}

static* function < Function*pred_remainder_3::(PrologMachine*) {
	mach::FillAlternative(pred_remainder_3::exec_pred_remainder_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_remainder_3::(PrologMachine*) {
	mach::FillAlternative(pred_remainder_3::exec_pred_remainder_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_remainder_3::(PrologMachine*) {
	mach::FillAlternative(pred_remainder_3::exec_pred_remainder_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_remainder_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(boyer::s125))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_reverse_loop_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_reverse_loop_3__1(mach));
}

static* function < Function*pred_reverse_loop_3::(PrologMachine*) {
	mach::FillAlternative(pred_reverse_loop_3::exec_pred_reverse_loop_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg2)->Unify(F(boyer::s12, F(boyer::s98, { var1->Deref() }), var2->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_reverse_loop_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s98, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_times_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_times_3__1(mach));
}

static* function < Function*pred_times_3::(PrologMachine*) {
	mach::FillAlternative(pred_times_3::exec_pred_times_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s80, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s80, F(boyer::s114, { var1->Deref(), var2->Deref() }), F(boyer::s114, { var1->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_times_3::(PrologMachine*) {
	mach::FillAlternative(pred_times_3::exec_pred_times_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(boyer::s114, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s114, { var1->Deref(), F(boyer::s114, { var2->Deref(), var3->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_times_3::(PrologMachine*) {
	mach::FillAlternative(pred_times_3::exec_pred_times_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s23, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s23, F(boyer::s114, { var2->Deref(), var1->Deref() }), F(boyer::s114, { var3->Deref(), var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_times_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(boyer::s10, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(boyer::s66, F(boyer::s85, { var2->Deref() }), F(boyer::s80, { var1->Deref(), F(boyer::s114, { var1->Deref(), var2->Deref() }) }), F(boyer::s55, { var1->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
