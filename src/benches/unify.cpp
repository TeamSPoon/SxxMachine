using namespace std;

#include "unify.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "nand.h"
#include "simple_analyzer.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../machine/builtins.h"

Const* unify::s0 = Const::Intern("cut");
Const* unify::s1 = Const::Intern("!");
Const* unify::s2 = Const::Intern("+");
Const* unify::s3 = Const::Intern(",");
Const* unify::s4 = Const::Intern("-");
Const* unify::s5 = Const::Intern("-->");
Const* unify::s6 = Const::Intern(".");
Const* unify::s7 = Const::Intern("/");
Const* unify::s8 = Const::Intern(":-");
Const* unify::s9 = Const::Intern("<");
Const* unify::s10 = Const::Intern("=");
Const* unify::s11 = Const::Intern("=<");
Const* unify::s12 = Const::Intern(">");
Const* unify::s13 = Const::Intern("\\+");
Const* unify::s14 = Const::Intern("^");
Const* unify::s15 = Const::Intern("add");
Const* unify::s16 = Const::Intern("arg");
Const* unify::s17 = Const::Intern("atomic");
Const* unify::s18 = Const::Intern("block");
Const* unify::s19 = Const::Intern("block_args");
Const* unify::s20 = Const::Intern("call");
Const* unify::s21 = Const::Intern("compare");
Const* unify::s22 = Const::Intern("cons");
Const* unify::s23 = Const::Intern("cut");
Const* unify::s24 = Const::Intern("deref");
Const* unify::s25 = Const::Intern("equal");
Const* unify::s26 = Const::Intern("fail");
Const* unify::s27 = Const::Intern("functor");
Const* unify::s28 = Const::Intern("h");
Const* unify::s29 = Const::Intern("in_2");
Const* unify::s30 = Const::Intern("incl");
Const* unify::s31 = Const::Intern("incl_2");
Const* unify::s32 = Const::Intern("incl_3");
Const* unify::s33 = Const::Intern("init");
Const* unify::s34 = Const::Intern("init_var");
Const* unify::s35 = Const::Intern("is");
Const* unify::s36 = Const::Intern("jump");
Const* unify::s37 = Const::Intern("label");
Const* unify::s38 = Const::Intern("last");
Const* unify::s39 = Const::Intern("main");
Const* unify::s40 = Const::Intern("make_slots");
Const* unify::s41 = Const::Intern("make_word");
Const* unify::s42 = Const::Intern("move");
Const* unify::s43 = Const::Intern("my_compound");
Const* unify::s44 = Const::Intern("myin");
Const* unify::s45 = Const::Intern("nonlast");
Const* unify::s46 = Const::Intern("nonvar");
Const* unify::s47 = Const::Intern("not");
Const* unify::s48 = Const::Intern("size");
Const* unify::s49 = Const::Intern("size_args");
Const* unify::s50 = Const::Intern("structure");
Const* unify::s51 = Const::Intern("switch");
Const* unify::s52 = Const::Intern("tatm");
Const* unify::s53 = Const::Intern("termtag");
Const* unify::s54 = Const::Intern("tlst");
Const* unify::s55 = Const::Intern("top");
Const* unify::s56 = Const::Intern("trail");
Const* unify::s57 = Const::Intern("tstr");
Const* unify::s58 = Const::Intern("tvar");
Const* unify::s59 = Const::Intern("u");
Const* unify::s60 = Const::Intern("unify");
Const* unify::s61 = Const::Intern("unify_arg");
Const* unify::s62 = Const::Intern("unify_args");
Const* unify::s63 = Const::Intern("unify_block");
Const* unify::s64 = Const::Intern("unify_readmode");
Const* unify::s65 = Const::Intern("unify_var");
Const* unify::s66 = Const::Intern("unify_writemode");
Const* unify::s67 = Const::Intern("uninit");
Const* unify::s68 = Const::Intern("var");
Const* unify::s69 = Const::Intern("{}");
Int* unify::negint1 = Term::Number(-1);
Int* unify::posint0 = Term::Number(0);
Int* unify::posint1 = Term::Number(1);
Int* unify::posint2 = Term::Number(2);

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
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_main_1::exec_static);
}

static* function < Function*pred_main_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_main_1__1(mach));
}

static* function < Function*pred_main_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = F(unify::s6, unify::posint1, F(unify::s6, var3, Const::Nil));
	local_aregs[2] = F(unify::s6, { var2->Deref(), Const::Nil });
	local_aregs[3] = var4;
	local_aregs[4] = F(unify::s48, { var4->Deref(), unify::posint0, var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_u_4::exec_static);
}

static* function < Function*pred_u_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_u_4__1(mach));
}

static* function < Function*pred_u_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var5;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = Const::Nil;
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_6::exec_static);
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
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s60, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s13, F(unify::s44, { var1->Deref(), var3->Deref() }))), F(unify::s3, unify::s1, F(unify::s67, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() })))))) {
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
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s60, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s44, { var1->Deref(), var3->Deref() })), F(unify::s3, unify::s1, F(unify::s33, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), unify::s45, var5 })))))) {
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
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s67, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s43, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s42, F(unify::s14, var5, unify::s28), var1->Deref()), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s53, { var2->Deref(), var5->Deref() })), F(unify::s3, F(unify::s63, unify::s45, var2->Deref(), var6, var3->Deref(), var7, var8), F(unify::s69, F(unify::s30, { var1->Deref(), var7->Deref(), var4->Deref() })))))))))) {
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
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s67, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s17, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s42, F(unify::s14, unify::s52, var2->Deref()), var1->Deref()), Const::Nil), F(unify::s69, F(unify::s30, { var1->Deref(), var3->Deref(), var4->Deref() })))))))) {
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
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s67, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s68, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s65, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() })))))) {
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
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s33, var1, var2, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s46, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s69, F(unify::s53, { var2->Deref(), var7 })), F(unify::s3, F(unify::s6, F(unify::s24, { var1->Deref() }), F(unify::s6, F(unify::s51, { var7->Deref(), var1->Deref(), F(unify::s6, F(unify::s56, { var1->Deref() }), var8), var9, unify::s26 }), Const::Nil)), F(unify::s3, F(unify::s69, F(unify::s66, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var8->Deref(), Const::Nil })), F(unify::s69, F(unify::s64, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var6->Deref(), var9->Deref(), Const::Nil })))))))))) {
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
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s33, var1, var2, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s68, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s65, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s65, var1, var2, var3, var3->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s44, { var1->Deref(), var3->Deref() }), F(unify::s44, { var2->Deref(), var3->Deref() }))), F(unify::s3, unify::s1, F(unify::s6, F(unify::s60, { var1->Deref(), var2->Deref(), unify::s26 }), Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s65, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s44, { var1->Deref(), var3->Deref() }), F(unify::s13, F(unify::s44, { var2->Deref(), var3->Deref() })))), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s42, { var1->Deref(), var2->Deref() }), Const::Nil), F(unify::s69, F(unify::s30, { var2->Deref(), var3->Deref(), var4->Deref() })))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s65, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s13, F(unify::s44, { var1->Deref(), var3->Deref() })), F(unify::s44, { var2->Deref(), var3->Deref() }))), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s42, { var2->Deref(), var1->Deref() }), Const::Nil), F(unify::s69, F(unify::s30, { var1->Deref(), var3->Deref(), var4->Deref() })))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s65, var1, var2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s13, F(unify::s44, { var1->Deref(), var3->Deref() })), F(unify::s13, F(unify::s44, { var2->Deref(), var3->Deref() })))), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s42, F(unify::s14, unify::s58, unify::s28), var1->Deref()), F(unify::s6, F(unify::s42, F(unify::s14, unify::s58, unify::s28), var2->Deref()), F(unify::s6, F(unify::s15, unify::posint1, unify::s28), F(unify::s6, F(unify::s42, { var2->Deref(), F(unify::s6, F(unify::s4, unify::s28, unify::posint1), Const::Nil) }), Const::Nil)))), F(unify::s69, F(unify::s3, F(unify::s30, { var1->Deref(), var3->Deref(), var5 }), F(unify::s30, { var2->Deref(), var5->Deref(), var4->Deref() }))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__13);
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
	if(!((areg0)->Unify(F(unify::s64, var1, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s50, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s25, F(unify::s6, { var1->Deref(), Const::Nil }), F(unify::s14, unify::s52, F(unify::s7, var6, var7)), unify::s26), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s27, { var2->Deref(), var6->Deref(), var7->Deref() })), F(unify::s62, unify::posint1, var7->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), unify::posint0, var1->Deref(), var5->Deref())))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s64, var1, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s22, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s62, unify::posint1, unify::posint2, var2->Deref(), var3->Deref(), var4->Deref(), unify::negint1, var1->Deref(), var5->Deref())))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s64, var1, var2, var3, var3->Deref(), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s17, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s6, F(unify::s25, { var1->Deref(), F(unify::s14, unify::s52, var2->Deref()), unify::s26 }), Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__16);
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
	if(!((areg0)->Unify(F(unify::s62, var1, var2, var3, var4, var4->Deref(), var5, var6, var7)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s12, { var1->Deref(), var2->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s62, var1, var2, var3, var4, var5, var6, var7, F(unify::s6, var8, var9))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s10, { var1->Deref(), var2->Deref() })), F(unify::s3, unify::s1, F(unify::s61, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), unify::s38, var9->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var11 = V(mach);
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
	if(!((areg0)->Unify(F(unify::s62, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s9, { var1->Deref(), var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s61, { var1->Deref(), var3->Deref(), var4->Deref(), var9, var6->Deref(), var7->Deref(), unify::s45, var10 }), F(unify::s3, F(unify::s69, F(unify::s35, var11, F(unify::s2, { var1->Deref(), unify::posint1 }))), F(unify::s62, { var11->Deref(), var2->Deref(), var3->Deref(), var9->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref() })))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
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
	if(!((areg0)->Unify(F(unify::s61, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s6, F(unify::s42, F(unify::s6, F(unify::s2, { var6->Deref(), var9 }), Const::Nil), var10), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s35, { var9->Deref(), F(unify::s2, { var1->Deref(), var5->Deref() }) }), F(unify::s3, F(unify::s30, { var10->Deref(), var3->Deref(), var11 }), F(unify::s16, { var1->Deref(), var2->Deref(), var12 })))), F(unify::s33, { var10->Deref(), var12->Deref(), var11->Deref(), var4->Deref(), var7->Deref(), var8->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s66, var1, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s43, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s42, F(unify::s14, var6, unify::s28), F(unify::s6, { var1->Deref(), Const::Nil })), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s53, { var2->Deref(), var6->Deref() })), F(unify::s63, { var4->Deref(), var2->Deref(), var7, var3->Deref(), var8, var5->Deref() })))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s66, var1, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s17, { var2->Deref() })), F(unify::s3, unify::s1, F(unify::s6, F(unify::s42, F(unify::s14, unify::s52, var2->Deref()), F(unify::s6, { var1->Deref(), Const::Nil })), Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s63, unify::s38, var1, var2, var3, var3->Deref(), F(unify::s6, var4, var5))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s15, { var2->Deref(), unify::s28 }), F(unify::s6, F(unify::s36, { var4->Deref() }), Const::Nil)), F(unify::s69, F(unify::s48, { var1->Deref(), unify::posint0, var2->Deref() }))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__23);
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
	if(!((areg0)->Unify(F(unify::s63, unify::s45, var1, var2, var3, var4, F(unify::s6, var5, var6))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s15, { var2->Deref(), unify::s28 }), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s48, { var1->Deref(), unify::posint0, var2->Deref() }), F(unify::s35, var7, F(unify::s4, { var2->Deref() })))), F(unify::s18, { var1->Deref(), var7->Deref(), unify::posint0, var3->Deref(), var4->Deref(), var6->Deref() }))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
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
	if(!((areg0)->Unify(F(unify::s18, var1, var2, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s50, { var1->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s42, F(unify::s14, unify::s52, F(unify::s7, var7, var8)), F(unify::s6, F(unify::s2, unify::s28, var2->Deref()), Const::Nil)), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s27, { var1->Deref(), var7->Deref(), var8->Deref() }), F(unify::s3, F(unify::s35, var9, F(unify::s2, F(unify::s2, { var2->Deref(), var8->Deref() }), unify::posint1)), F(unify::s35, var10, F(unify::s2, { var2->Deref(), unify::posint1 }))))), F(unify::s3, F(unify::s40, unify::posint1, var8->Deref(), var1->Deref(), var10->Deref(), var11, var4->Deref(), var12), F(unify::s19, unify::posint1, var8->Deref(), var1->Deref(), var9->Deref(), var3->Deref(), var11->Deref(), var12->Deref(), var5->Deref(), var6->Deref()))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s18, var1, var2, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s22, { var1->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s69, F(unify::s35, var7, F(unify::s2, { var2->Deref(), unify::posint2 }))), F(unify::s3, F(unify::s40, unify::posint1, unify::posint2, var1->Deref(), var2->Deref(), var8, var4->Deref(), var9), F(unify::s19, unify::posint1, unify::posint2, var1->Deref(), var7->Deref(), var3->Deref(), var8->Deref(), var9->Deref(), var5->Deref(), var6->Deref())))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s18, var1, var2, var2->Deref(), var3, var3->Deref(), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s17, { var1->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s18, var1, var2, var2->Deref(), var3, var3->Deref(), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s68, { var1->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s19, var1, var2, var3, var4, var4->Deref(), Const::Nil, var5, var5->Deref(), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s12, { var1->Deref(), var2->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__29);
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
	if(!((areg0)->Unify(F(unify::s19, var1, var2, var3, var4, var5, F(unify::s6, { var4->Deref(), Const::Nil }), var6, var7, F(unify::s6, var8, var9))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s10, { var1->Deref(), var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s6, F(unify::s37, { var8->Deref() }), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s16, { var1->Deref(), var3->Deref(), var10 })), F(unify::s18, { var10->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var9->Deref() })))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__30);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
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
	if(!((areg0)->Unify(F(unify::s19, var1, var2, var3, var4, var5, F(unify::s6, { var4->Deref(), var6 }), var7, var8, var9)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s9, { var1->Deref(), var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s69, F(unify::s16, { var1->Deref(), var3->Deref(), var10 })), F(unify::s3, F(unify::s18, { var10->Deref(), var4->Deref(), var11, var7->Deref(), var12, var13 }), F(unify::s3, F(unify::s69, F(unify::s35, var14, F(unify::s2, { var1->Deref(), unify::posint1 }))), F(unify::s19, { var14->Deref(), var2->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), var9->Deref() }))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__31);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s40, var1, var2, var3, var4, Const::Nil, var5, var5->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s12, { var1->Deref(), var2->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__32);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
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
	if(!((areg0)->Unify(F(unify::s40, var1, var2, var3, var4, F(unify::s6, var5, var6), var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s11, { var1->Deref(), var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s69, F(unify::s16, { var1->Deref(), var3->Deref(), var9 })), F(unify::s3, F(unify::s34, { var9->Deref(), var4->Deref(), var7->Deref() }), F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s30, { var9->Deref(), var7->Deref(), var10 }), F(unify::s41, { var9->Deref(), var5->Deref(), var11 }))), F(unify::s3, F(unify::s6, F(unify::s42, { var11->Deref(), F(unify::s6, F(unify::s2, unify::s28, var4->Deref()), Const::Nil) }), Const::Nil), F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s35, var12, F(unify::s2, { var4->Deref(), unify::posint1 })), F(unify::s35, var13, F(unify::s2, { var1->Deref(), unify::posint1 })))), F(unify::s40, { var13->Deref(), var2->Deref(), var3->Deref(), var12->Deref(), var6->Deref(), var10->Deref(), var8->Deref() }))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__33);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s34, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s68, { var1->Deref() }), F(unify::s13, F(unify::s44, { var1->Deref(), var3->Deref() })))), F(unify::s3, unify::s1, F(unify::s6, F(unify::s42, F(unify::s14, unify::s58, F(unify::s2, unify::s28, var2->Deref())), var1->Deref()), Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__34);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s34, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s3, F(unify::s68, { var1->Deref() }), F(unify::s44, { var1->Deref(), var3->Deref() }))), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__35);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s34, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s46, { var1->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__36);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s48, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s50, { var1->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s69, F(unify::s27, { var1->Deref(), var2, var3 })), F(unify::s3, F(unify::s15, unify::posint1), F(unify::s3, F(unify::s15, { var3->Deref() }), F(unify::s49, unify::posint1, var3->Deref(), var1->Deref()))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__37);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s48, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s22, { var1->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s15, unify::posint2), F(unify::s49, unify::posint1, unify::posint2, var1->Deref()))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__38);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s48, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s17, { var1->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__39);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s48, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s68, { var1->Deref() })), unify::s1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sym_dcg_arrow_2::(PrologMachine*) {
	mach::FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__40);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s49, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s12, { var1->Deref(), var2->Deref() })), unify::s1)))) {
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
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(unify::s49, var1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s3, F(unify::s69, F(unify::s11, { var1->Deref(), var2->Deref() })), F(unify::s3, unify::s1, F(unify::s3, F(unify::s69, F(unify::s16, { var1->Deref(), var3->Deref(), var4 })), F(unify::s3, F(unify::s48, { var4->Deref() }), F(unify::s3, F(unify::s69, F(unify::s35, var5, F(unify::s2, { var1->Deref(), unify::posint1 }))), F(unify::s49, { var5->Deref(), var2->Deref(), var3->Deref() }))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_make_word_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_make_word_3__1(mach));
}

static* function < Function*pred_make_word_3::(PrologMachine*) {
	mach::FillAlternative(pred_make_word_3::exec_pred_make_word_3__2);
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(unify::s14, var3, F(unify::s2, unify::s28, var2->Deref()))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(unify::s0, &tempVar, F(unify::s53, { var1->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_my_compound_1::exec_static);
}

static* function < Function*pred_make_word_3::(PrologMachine*) {
	mach::FillAlternative(pred_make_word_3::exec_pred_make_word_3__3);
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(unify::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_make_word_3::(PrologMachine*) {
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(unify::s14, unify::s52, var1->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(unify::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
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
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(unify::s2, { var2->Deref(), var1->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_myin_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_myin_2__1(mach));
}

static* function < Function*pred_myin_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(unify::s6, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = F(unify::s29, { var4->Deref(), var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_in_2_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_in_2_3__1(mach));
}

static* function < Function*pred_in_2_3::(PrologMachine*) {
	mach::FillAlternative(pred_in_2_3::exec_pred_in_2_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(unify::s10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_in_2_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(unify::s12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_myin_2::exec_static);
}

static* function < Function*pred_incl_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_incl_3__1(mach));
}

static* function < Function*pred_incl_3::(PrologMachine*) {
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_incl_2_3::exec_static);
}

static* function < Function*pred_incl_2_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_incl_2_3__1(mach));
}

static* function < Function*pred_incl_2_3::(PrologMachine*) {
	mach::FillAlternative(pred_incl_2_3::exec_pred_incl_2_3__2);
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
	if(!((areg2)->Unify(F(unify::s6, { var1->Deref(), Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_incl_2_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(unify::s6, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(unify::s32, { var5->Deref(), var3->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_incl_3_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_incl_3_5__1(mach));
}

static* function < Function*pred_incl_3_5::(PrologMachine*) {
	mach::FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(unify::s9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(unify::s6, { var1->Deref(), F(unify::s6, { var2->Deref(), var3->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_incl_3_5::(PrologMachine*) {
	mach::FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(unify::s10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(unify::s6, { var2->Deref(), var3->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_incl_3_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(unify::s12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(unify::s6, { var2->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_incl_2_3::exec_static);
}

static* function < Function*pred_my_compound_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_my_compound_1__1(mach));
}

static* function < Function*pred_my_compound_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(unify::s47, F(unify::s17, { var1->Deref() }), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_static);
}

static* function < Function*pred_cons_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_cons_1__1(mach));
}

static* function < Function*pred_cons_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(unify::s60, F(unify::s6, var2, var3), var1->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nonvar_1::exec_static);
}

static* function < Function*pred_structure_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_structure_1__1(mach));
}

static* function < Function*pred_structure_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(unify::s47, F(unify::s10, { var1->Deref(), F(unify::s6, var2, var3) }), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_my_compound_1::exec_static);
}

static* function < Function*pred_termtag_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termtag_2__1(mach));
}

static* function < Function*pred_termtag_2::(PrologMachine*) {
	mach::FillAlternative(pred_termtag_2::exec_pred_termtag_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(unify::s57))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_structure_1::exec_static);
}

static* function < Function*pred_termtag_2::(PrologMachine*) {
	mach::FillAlternative(pred_termtag_2::exec_pred_termtag_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(unify::s54))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cons_1::exec_static);
}

static* function < Function*pred_termtag_2::(PrologMachine*) {
	mach::FillAlternative(pred_termtag_2::exec_pred_termtag_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(unify::s52))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_termtag_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(unify::s58))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}
