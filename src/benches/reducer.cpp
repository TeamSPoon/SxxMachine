using namespace std;

#include "reducer.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../machine/builtins.h"
#include "../compiler/sxx_compiler_gen_static.h"
#include "mu.h"
#include "flatten.h"
#include "../bootlib/sxx_builtins.h"
#include "sdda.h"
#include "simple_analyzer.h"

Const* reducer::s0 = Const::Intern("cut");
Const* reducer::s1 = Const::Intern("*");
Const* reducer::s2 = Const::Intern("+");
Const* reducer::s3 = Const::Intern(",");
Const* reducer::s4 = Const::Intern("-");
Const* reducer::s5 = Const::Intern("-->");
Const* reducer::s6 = Const::Intern("->");
Const* reducer::s7 = Const::Intern(".");
Const* reducer::s8 = Const::Intern("//");
Const* reducer::s9 = Const::Intern(":-");
Const* reducer::s10 = Const::Intern("<");
Const* reducer::s11 = Const::Intern("=");
Const* reducer::s12 = Const::Intern("=:=");
Const* reducer::s13 = Const::Intern("=<");
Const* reducer::s14 = Const::Intern("=\\=");
Const* reducer::s15 = Const::Intern(">");
Const* reducer::s16 = Const::Intern(">=");
Const* reducer::s17 = Const::Intern("\\==");
Const* reducer::s18 = Const::Intern("append");
Const* reducer::s19 = Const::Intern("apply");
Const* reducer::s20 = Const::Intern("arg");
Const* reducer::s21 = Const::Intern("arithequal");
Const* reducer::s22 = Const::Intern("atom");
Const* reducer::s23 = Const::Intern("atomic");
Const* reducer::s24 = Const::Intern("b");
Const* reducer::s25 = Const::Intern("bp");
Const* reducer::s26 = Const::Intern("c");
Const* reducer::s27 = Const::Intern("call");
Const* reducer::s28 = Const::Intern("compare");
Const* reducer::s29 = Const::Intern("cond");
Const* reducer::s30 = Const::Intern("cp");
Const* reducer::s31 = Const::Intern("curry");
Const* reducer::s32 = Const::Intern("currylist");
Const* reducer::s33 = Const::Intern("cut");
Const* reducer::s34 = Const::Intern("diffv");
Const* reducer::s35 = Const::Intern("diffv_2");
Const* reducer::s36 = Const::Intern("diffv_3");
Const* reducer::s37 = Const::Intern("end");
Const* reducer::s38 = Const::Intern("eval");
Const* reducer::s39 = Const::Intern("eval1");
Const* reducer::s40 = Const::Intern("fac");
Const* reducer::s41 = Const::Intern("false");
Const* reducer::s42 = Const::Intern("functor");
Const* reducer::s43 = Const::Intern("hd");
Const* reducer::s44 = Const::Intern("i");
Const* reducer::s45 = Const::Intern("inserthead");
Const* reducer::s46 = Const::Intern("inserttail");
Const* reducer::s47 = Const::Intern("intersectv");
Const* reducer::s48 = Const::Intern("intersectv_2");
Const* reducer::s49 = Const::Intern("intersectv_3");
Const* reducer::s50 = Const::Intern("intersectv_list");
Const* reducer::s51 = Const::Intern("inv");
Const* reducer::s52 = Const::Intern("inv_2");
Const* reducer::s53 = Const::Intern("is");
Const* reducer::s54 = Const::Intern("k");
Const* reducer::s55 = Const::Intern("list_functor_name");
Const* reducer::s56 = Const::Intern("listify");
Const* reducer::s57 = Const::Intern("listify_list");
Const* reducer::s58 = Const::Intern("make_list");
Const* reducer::s59 = Const::Intern("member");
Const* reducer::s60 = Const::Intern("mod");
Const* reducer::s61 = Const::Intern("notinv");
Const* reducer::s62 = Const::Intern("notinv_2");
Const* reducer::s63 = Const::Intern("notinv_3");
Const* reducer::s64 = Const::Intern("number");
Const* reducer::s65 = Const::Intern("or");
Const* reducer::s66 = Const::Intern("quick");
Const* reducer::s67 = Const::Intern("quick2");
Const* reducer::s68 = Const::Intern("relop");
Const* reducer::s69 = Const::Intern("s");
Const* reducer::s70 = Const::Intern("small_subsetv");
Const* reducer::s71 = Const::Intern("smallerorequal");
Const* reducer::s72 = Const::Intern("smallerthan");
Const* reducer::s73 = Const::Intern("sp");
Const* reducer::s74 = Const::Intern("split");
Const* reducer::s75 = Const::Intern("subsetv");
Const* reducer::s76 = Const::Intern("subsetv_2");
Const* reducer::s77 = Const::Intern("t");
Const* reducer::s78 = Const::Intern("t_append");
Const* reducer::s79 = Const::Intern("t_argvars");
Const* reducer::s80 = Const::Intern("t_def");
Const* reducer::s81 = Const::Intern("t_redex");
Const* reducer::s82 = Const::Intern("t_reduce");
Const* reducer::s83 = Const::Intern("t_rule1");
Const* reducer::s84 = Const::Intern("t_rule2");
Const* reducer::s85 = Const::Intern("t_trans");
Const* reducer::s86 = Const::Intern("t_vars");
Const* reducer::s87 = Const::Intern("termequal");
Const* reducer::s88 = Const::Intern("tl");
Const* reducer::s89 = Const::Intern("top");
Const* reducer::s90 = Const::Intern("true");
Const* reducer::s91 = Const::Intern("try");
Const* reducer::s92 = Const::Intern("unify");
Const* reducer::s93 = Const::Intern("unionv");
Const* reducer::s94 = Const::Intern("unionv_2");
Const* reducer::s95 = Const::Intern("unionv_3");
Const* reducer::s96 = Const::Intern("var");
Int* reducer::posint0 = Term::Number(0);
Int* reducer::posint1 = Term::Number(1);
Int* reducer::posint2 = Term::Number(2);
Int* reducer::posint3 = Term::Number(3);

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
	local_aregs[0] = F(reducer::s40, reducer::posint3);
	local_aregs[1] = var1;
	local_aregs[2] = F(reducer::s91, F(reducer::s66, F(reducer::s7, reducer::posint3, F(reducer::s7, reducer::posint1, F(reducer::s7, reducer::posint2, Const::Nil)))), var2, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_try_2::exec_static);
}

static* function < Function*pred_try_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_try_2__1(mach));
}

static* function < Function*pred_try_2::(PrologMachine*) {
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = F(reducer::s31, { var3->Deref(), var4, F(reducer::s82, { var4->Deref(), var5, F(reducer::s58, { var5->Deref(), var2->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_listify_2::exec_static);
}

static* function < Function*pred_end_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_end_1__1(mach));
}

static* function < Function*pred_end_1::(PrologMachine*) {
	mach::FillAlternative(pred_end_1::exec_pred_end_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_static);
}

static* function < Function*pred_end_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = Const::Nil;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_list_functor_name_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_list_functor_name_1__1(mach));
}

static* function < Function*pred_list_functor_name_1::(PrologMachine*) {
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
	local_aregs[0] = F(reducer::s7, var2, var3);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_static);
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_def_3__1(mach));
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	mach::FillAlternative(pred_t_def_3::exec_pred_t_def_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var1, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s29, F(reducer::s11, { var1->Deref(), reducer::posint0 }), reducer::posint1, F(reducer::s1, { var1->Deref(), F(reducer::s40, F(reducer::s4, { var1->Deref(), reducer::posint1 })) }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	mach::FillAlternative(pred_t_def_3::exec_pred_t_def_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s66))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var1, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s29, F(reducer::s11, { var1->Deref(), Const::Nil }), Const::Nil, F(reducer::s29, F(reducer::s11, F(reducer::s88, { var1->Deref() }), Const::Nil), var1->Deref(), F(reducer::s67, F(reducer::s74, F(reducer::s43, { var1->Deref() }), F(reducer::s88, { var1->Deref() })))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	mach::FillAlternative(pred_t_def_3::exec_pred_t_def_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s67))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var1, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s18, F(reducer::s66, F(reducer::s43, { var1->Deref() })), F(reducer::s66, F(reducer::s88, { var1->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	mach::FillAlternative(pred_t_def_3::exec_pred_t_def_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s74))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s29, F(reducer::s11, { var2->Deref(), Const::Nil }), F(reducer::s7, F(reducer::s7, { var1->Deref(), Const::Nil }), Const::Nil), F(reducer::s29, F(reducer::s13, F(reducer::s43, { var2->Deref() }), var1->Deref()), F(reducer::s45, F(reducer::s43, { var2->Deref() }), F(reducer::s74, { var1->Deref(), F(reducer::s88, { var2->Deref() }) })), F(reducer::s46, F(reducer::s43, { var2->Deref() }), F(reducer::s74, { var1->Deref(), F(reducer::s88, { var2->Deref() }) }))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	mach::FillAlternative(pred_t_def_3::exec_pred_t_def_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s45))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s7, F(reducer::s7, { var1->Deref(), F(reducer::s43, { var2->Deref() }) }), F(reducer::s88, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	mach::FillAlternative(pred_t_def_3::exec_pred_t_def_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s46))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s7, F(reducer::s43, { var2->Deref() }), F(reducer::s7, { var1->Deref(), F(reducer::s88, { var2->Deref() }) }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_def_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s18))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s29, F(reducer::s11, { var1->Deref(), Const::Nil }), var2->Deref(), F(reducer::s7, F(reducer::s43, { var1->Deref() }), F(reducer::s18, F(reducer::s88, { var1->Deref() }), var2->Deref())))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_reduce_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_reduce_2__1(mach));
}

static* function < Function*pred_t_reduce_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__2);
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
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(reducer::s0, &tempVar, F(reducer::s92, { var1->Deref(), var2->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_t_reduce_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var4, F(reducer::s7, var5, var3->Deref()))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	HeapChoice tempVar2(mach::CUTB);
	local_aregs[1] = F(reducer::s82, { var2->Deref(), var5->Deref(), F(reducer::s0, &tempVar, F(reducer::s82, { var1->Deref(), var4->Deref(), F(reducer::s0, &tempVar2, continuation) })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_list_functor_name_1::exec_static);
}

static* function < Function*pred_t_reduce_2::(PrologMachine*) {
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = var4;
	local_aregs[2] = var5;
	local_aregs[3] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	HeapChoice tempVar2(mach::CUTB);
	local_aregs[4] = F(reducer::s81, { var5->Deref(), var4->Deref(), F(reducer::s0, &tempVar, F(reducer::s82, { var3->Deref(), var2->Deref(), F(reducer::s0, &tempVar2, continuation) })) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_append_4::exec_static);
}

static* function < Function*pred_t_append_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_append_4__1(mach));
}

static* function < Function*pred_t_append_4::(PrologMachine*) {
	mach::FillAlternative(pred_t_append_4::exec_pred_t_append_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_append_4::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(reducer::s7, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_append_4::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_redex_2__1(mach));
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, F(reducer::s7, var4, reducer::s73))))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, F(reducer::s7, var5, var2->Deref()), F(reducer::s7, F(reducer::s7, { var5->Deref(), var3->Deref() }), var4->Deref()))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_reduce_2::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, F(reducer::s7, var4, reducer::s25))))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, F(reducer::s7, { var1->Deref(), var2->Deref() }), F(reducer::s7, { var3->Deref(), var4->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, F(reducer::s7, var4, reducer::s30))))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, { var2->Deref(), F(reducer::s7, F(reducer::s7, { var1->Deref(), var3->Deref() }), var4->Deref()) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, reducer::s69)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, F(reducer::s7, var4, var2->Deref()), F(reducer::s7, { var4->Deref(), var3->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_reduce_2::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, reducer::s24)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, F(reducer::s7, { var1->Deref(), var2->Deref() }), var3->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, reducer::s26)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, { var2->Deref(), F(reducer::s7, { var1->Deref(), var3->Deref() }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, reducer::s54))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, reducer::s44)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, reducer::s29)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var4;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s92, reducer::s90, var4->Deref(), F(reducer::s0, &tempVar, continuation));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_reduce_2::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, F(reducer::s7, var3, reducer::s29)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, reducer::s19)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_reduce_2::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, reducer::s43)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = F(reducer::s82, { var1->Deref(), F(reducer::s7, var4, F(reducer::s7, { var2->Deref(), var3->Deref() })), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_list_functor_name_1::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, reducer::s88)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = F(reducer::s82, { var1->Deref(), F(reducer::s7, { var2->Deref(), F(reducer::s7, var4, var3->Deref()) }), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_list_functor_name_1::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__15);
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
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(reducer::s59, { var3->Deref(), F(reducer::s7, reducer::s2, F(reducer::s7, reducer::s4, F(reducer::s7, reducer::s1, F(reducer::s7, reducer::s8, F(reducer::s7, reducer::s60, Const::Nil))))), F(reducer::s82, { var2->Deref(), var5, F(reducer::s82, { var1->Deref(), var6, F(reducer::s64, { var5->Deref(), F(reducer::s64, { var6->Deref(), F(reducer::s38, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }) }) }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_end_1::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__16);
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
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(reducer::s59, { var3->Deref(), F(reducer::s7, reducer::s10, F(reducer::s7, reducer::s15, F(reducer::s7, reducer::s13, F(reducer::s7, reducer::s16, F(reducer::s7, reducer::s14, F(reducer::s7, reducer::s12, Const::Nil)))))), F(reducer::s82, { var2->Deref(), var5, F(reducer::s82, { var1->Deref(), var6, F(reducer::s64, { var5->Deref(), F(reducer::s64, { var6->Deref(), F(reducer::s65, F(reducer::s6, F(reducer::s68, { var3->Deref(), var5->Deref(), var6->Deref() }), F(reducer::s11, { var4->Deref(), reducer::s90 })), F(reducer::s11, { var4->Deref(), reducer::s41 }), F(reducer::s0, &tempVar, continuation)) }) }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_end_1::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, reducer::s11))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s82, { var1->Deref(), var5, F(reducer::s65, F(reducer::s6, F(reducer::s11, { var4->Deref(), var5->Deref() }), F(reducer::s11, { var3->Deref(), reducer::s90 })), F(reducer::s11, { var3->Deref(), reducer::s41 }), F(reducer::s0, &tempVar, continuation)) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_reduce_2::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = F(reducer::s59, { var2->Deref(), F(reducer::s7, reducer::s4, Const::Nil), F(reducer::s82, { var1->Deref(), var4, F(reducer::s64, { var4->Deref(), F(reducer::s39, { var2->Deref(), var5, var4->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_end_1::exec_static);
}

static* function < Function*pred_t_redex_2::(PrologMachine*) {
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = var4;
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(reducer::s37, { var4->Deref(), F(reducer::s80, { var4->Deref(), var5, var6, F(reducer::s77, { var5->Deref(), var6->Deref(), var7, F(reducer::s18, { var3->Deref(), var7->Deref(), var2->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_append_3::exec_static);
}

static* function < Function*pred_eval_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_eval_4__1(mach));
}

static* function < Function*pred_eval_4::(PrologMachine*) {
	mach::FillAlternative(pred_eval_4::exec_pred_eval_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s2))) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(reducer::s2, { var2->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_eval_4::(PrologMachine*) {
	mach::FillAlternative(pred_eval_4::exec_pred_eval_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s4))) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(reducer::s4, { var2->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_eval_4::(PrologMachine*) {
	mach::FillAlternative(pred_eval_4::exec_pred_eval_4__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s1))) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(reducer::s1, { var2->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_eval_4::(PrologMachine*) {
	mach::FillAlternative(pred_eval_4::exec_pred_eval_4__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s8))) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(reducer::s8, { var2->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_eval_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s60))) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(reducer::s60, { var2->Deref(), var3->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_eval1_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_eval1_3__1(mach));
}

static* function < Function*pred_eval1_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(reducer::s4, { var2->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_relop_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_relop_3__1(mach));
}

static* function < Function*pred_relop_3::(PrologMachine*) {
	mach::FillAlternative(pred_relop_3::exec_pred_relop_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s10))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_relop_3::(PrologMachine*) {
	mach::FillAlternative(pred_relop_3::exec_pred_relop_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s15))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_relop_3::(PrologMachine*) {
	mach::FillAlternative(pred_relop_3::exec_pred_relop_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s13))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_relop_3::(PrologMachine*) {
	mach::FillAlternative(pred_relop_3::exec_pred_relop_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_relop_3::(PrologMachine*) {
	mach::FillAlternative(pred_relop_3::exec_pred_relop_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s14))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym__c61_system_notequals_2::exec_static);
}

static* function < Function*pred_relop_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_arithequal_2::exec_static);
}

static* function < Function*pred_t_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_3__1(mach));
}

static* function < Function*pred_t_3::(PrologMachine*) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s31, { var4->Deref(), var5, F(reducer::s79, { var1->Deref(), var5->Deref(), var3->Deref(), F(reducer::s0, &tempVar, continuation) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_listify_2::exec_static);
}

static* function < Function*pred_t_argvars_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_argvars_3__1(mach));
}

static* function < Function*pred_t_argvars_3::(PrologMachine*) {
	mach::FillAlternative(pred_t_argvars_3::exec_pred_t_argvars_3__2);
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_t_argvars_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = F(reducer::s86, { var5->Deref(), var6, F(reducer::s85, { var1->Deref(), var5->Deref(), var6->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_argvars_3::exec_static);
}

static* function < Function*pred_curry_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_curry_2__1(mach));
}

static* function < Function*pred_curry_2::(PrologMachine*) {
	mach::FillAlternative(pred_curry_2::exec_pred_curry_2__2);
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
	local_aregs[0] = F(reducer::s96, { var1->Deref() });
	local_aregs[1] = F(reducer::s23, { var1->Deref() });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_curry_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_currylist_3::exec_static);
}

static* function < Function*pred_currylist_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_currylist_3__1(mach));
}

static* function < Function*pred_currylist_3::(PrologMachine*) {
	mach::FillAlternative(pred_currylist_3::exec_pred_currylist_3__2);
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_currylist_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5;
	local_aregs[2] = F(reducer::s32, { var2->Deref(), var3->Deref(), F(reducer::s7, { var5->Deref(), var4->Deref() }), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_curry_2::exec_static);
}

static* function < Function*pred_t_vars_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_vars_2__1(mach));
}

static* function < Function*pred_t_vars_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, F(reducer::s7, { var1->Deref(), Const::Nil }), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_t_vars_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, { Const::Nil, Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_t_vars_2::(PrologMachine*) {
	mach::FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, { Const::Nil, Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_t_vars_2::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var3, F(reducer::s7, F(reducer::s7, var4, var5), F(reducer::s7, F(reducer::s7, var6, var7), Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(reducer::s7, { var4->Deref(), var5->Deref() });
	local_aregs[2] = F(reducer::s86, { var2->Deref(), F(reducer::s7, { var6->Deref(), var7->Deref() }), F(reducer::s93, { var4->Deref(), var6->Deref(), var3->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_vars_2::exec_static);
}

static* function < Function*pred_t_trans_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_trans_4__1(mach));
}

static* function < Function*pred_t_trans_4::(PrologMachine*) {
	mach::FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(F(reducer::s7, { var2->Deref(), reducer::s54 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(reducer::s23, { var2->Deref() });
	local_aregs[1] = F(reducer::s3, F(reducer::s96, { var2->Deref() }), F(reducer::s17, { var2->Deref(), var1->Deref() }));
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_t_trans_4::(PrologMachine*) {
	mach::FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(reducer::s44))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_t_trans_4::(PrologMachine*) {
	mach::FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(F(reducer::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(reducer::s7, { var2->Deref(), reducer::s54 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_notinv_2::exec_static);
}

static* function < Function*pred_t_trans_4::(PrologMachine*) {
	mach::FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s7, var4, F(reducer::s7, var5, F(reducer::s7, var6, Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(reducer::s7, var8, var9);
	local_aregs[1] = var5->Deref();
	local_aregs[2] = F(reducer::s92, F(reducer::s7, var10, var11), var6->Deref(), F(reducer::s65, F(reducer::s37, { var3->Deref() }), F(reducer::s3, F(reducer::s11, { var11->Deref(), F(reducer::s7, var12, F(reducer::s7, F(reducer::s7, var13, var14), Const::Nil)) }), F(reducer::s17, { var13->Deref(), Const::Nil })), F(reducer::s83, { var1->Deref(), var3->Deref(), var10->Deref(), var6->Deref(), var2->Deref(), var8->Deref(), var5->Deref(), var7->Deref(), continuation })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_t_trans_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var2, F(reducer::s7, var3, var4))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s7, var5, F(reducer::s7, var6, F(reducer::s7, var7, Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(reducer::s7, var9, var10);
	local_aregs[1] = var6->Deref();
	local_aregs[2] = F(reducer::s92, F(reducer::s7, var11, F(reducer::s7, var12, F(reducer::s7, var13, Const::Nil))), var7->Deref(), F(reducer::s92, F(reducer::s7, var14, var15), var13->Deref(), F(reducer::s92, F(reducer::s7, var16, var17), var12->Deref(), F(reducer::s84, { var1->Deref(), var4->Deref(), var3->Deref(), var16->Deref(), var12->Deref(), var2->Deref(), var9->Deref(), var6->Deref(), var8->Deref(), continuation }))));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_t_rule1_8::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(8);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_rule1_8__1(mach));
}

static* function < Function*pred_t_rule1_8::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s87, { var1->Deref(), var5->Deref(), F(reducer::s0, &tempVar, continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_notinv_2::exec_static);
}

static* function < Function*pred_t_rule1_8::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(F(reducer::s7, var8, F(reducer::s7, { var2->Deref(), reducer::s24 }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s51, { var1->Deref(), var6->Deref(), F(reducer::s17, { var1->Deref(), var5->Deref(), F(reducer::s0, &tempVar, F(reducer::s85, { var1->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_notinv_2::exec_static);
}

static* function < Function*pred_t_rule1_8::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(F(reducer::s7, { var5->Deref(), F(reducer::s7, var8, reducer::s26) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var6->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, F(reducer::s85, { var1->Deref(), var2->Deref(), var4->Deref(), var8->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_notinv_2::exec_static);
}

static* function < Function*pred_t_rule1_8::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[8];
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(F(reducer::s7, var8, F(reducer::s7, var9, reducer::s69))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var9->Deref();
	local_aregs[4] = F(reducer::s85, { var1->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_trans_4::exec_static);
}

static* function < Function*pred_t_rule2_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_t_rule2_9__1(mach));
}

static* function < Function*pred_t_rule2_9::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(F(reducer::s7, { var6->Deref(), F(reducer::s7, { var2->Deref(), reducer::s26 }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s61, { var1->Deref(), var7->Deref(), F(reducer::s0, &tempVar, continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_t_rule2_9::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(F(reducer::s7, var9, F(reducer::s7, { var2->Deref(), reducer::s69 }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, F(reducer::s85, { var1->Deref(), var6->Deref(), var8->Deref(), var9->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_t_rule2_9::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(F(reducer::s7, { var6->Deref(), F(reducer::s7, var9, F(reducer::s7, { var2->Deref(), reducer::s30 })) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s61, { var1->Deref(), var7->Deref(), F(reducer::s0, &tempVar, F(reducer::s85, { var1->Deref(), var3->Deref(), var5->Deref(), var9->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_inv_2::exec_static);
}

static* function < Function*pred_t_rule2_9::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(F(reducer::s7, var9, F(reducer::s7, var10, F(reducer::s7, { var2->Deref(), reducer::s73 })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, F(reducer::s85, { var1->Deref(), var3->Deref(), var5->Deref(), var10->Deref(), F(reducer::s85, { var1->Deref(), var6->Deref(), var8->Deref(), var9->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_inv_2::exec_static);
}

static* function < Function*pred_t_rule2_9::(PrologMachine*) {
	mach::FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(F(reducer::s7, { var3->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var6->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_t_rule2_9::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[9];
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(F(reducer::s7, var9, F(reducer::s7, { var3->Deref(), F(reducer::s7, { var2->Deref(), reducer::s25 }) }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var8->Deref();
	local_aregs[3] = var9->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_t_trans_4::exec_static);
}

static* function < Function*pred_make_list_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_make_list_2__1(mach));
}

static* function < Function*pred_make_list_2::(PrologMachine*) {
	mach::FillAlternative(pred_make_list_2::exec_pred_make_list_2__2);
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
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_make_list_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, F(reducer::s7, var2, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, { var2->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(reducer::s58, { var1->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_list_functor_name_1::exec_static);
}

static* function < Function*pred_listify_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_listify_2__1(mach));
}

static* function < Function*pred_listify_2::(PrologMachine*) {
	mach::FillAlternative(pred_listify_2::exec_pred_listify_2__2);
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
	local_aregs[0] = F(reducer::s96, { var1->Deref() });
	local_aregs[1] = F(reducer::s23, { var1->Deref() });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_listify_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(reducer::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = F(reducer::s57, reducer::posint1, var4->Deref(), var1->Deref(), var3->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_static);
}

static* function < Function*pred_listify_list_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_listify_list_4__1(mach));
}

static* function < Function*pred_listify_list_4::(PrologMachine*) {
	mach::FillAlternative(pred_listify_list_4::exec_pred_listify_list_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg3)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_listify_list_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(reducer::s7, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(reducer::s0, &tempVar, F(reducer::s20, { var1->Deref(), var3->Deref(), var6, F(reducer::s56, { var6->Deref(), var4->Deref(), F(reducer::s53, var7, F(reducer::s2, { var1->Deref(), reducer::posint1 }), F(reducer::s57, { var7->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), continuation })) }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_member_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_member_2__1(mach));
}

static* function < Function*pred_member_2::(PrologMachine*) {
	mach::FillAlternative(pred_member_2::exec_pred_member_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_member_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(reducer::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_member_2::exec_static);
}

static* function < Function*pred_append_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_append_3__1(mach));
}

static* function < Function*pred_append_3::(PrologMachine*) {
	mach::FillAlternative(pred_append_3::exec_pred_append_3__2);
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_append_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(reducer::s7, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_append_3::exec_static);
}

static* function < Function*pred_intersectv_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_intersectv_3__1(mach));
}

static* function < Function*pred_intersectv_3::(PrologMachine*) {
	mach::FillAlternative(pred_intersectv_3::exec_pred_intersectv_3__2);
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
	if(!((areg2)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_intersectv_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_intersectv_2_4::exec_static);
}

static* function < Function*pred_intersectv_2_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_intersectv_2_4__1(mach));
}

static* function < Function*pred_intersectv_2_4::(PrologMachine*) {
	mach::FillAlternative(pred_intersectv_2_4::exec_pred_intersectv_2_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_intersectv_2_4::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(reducer::s49, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_intersectv_3_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_intersectv_3_6__1(mach));
}

static* function < Function*pred_intersectv_3_6::(PrologMachine*) {
	mach::FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s10))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_intersectv_2_4::exec_static);
}

static* function < Function*pred_intersectv_3_6::(PrologMachine*) {
	mach::FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s11))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(reducer::s7, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_intersectv_3::exec_static);
}

static* function < Function*pred_intersectv_3_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s15))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_intersectv_2_4::exec_static);
}

static* function < Function*pred_intersectv_list_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_intersectv_list_2__1(mach));
}

static* function < Function*pred_intersectv_list_2::(PrologMachine*) {
	mach::FillAlternative(pred_intersectv_list_2::exec_pred_intersectv_list_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
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

static* function < Function*pred_intersectv_list_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_intersectv_list_3::exec_static);
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
	if(!((areg0)->Unify(F(reducer::s50, { Const::Nil })))) {
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
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s50, F(reducer::s7, var1, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s3, F(reducer::s47, { var1->Deref() }), F(reducer::s50, { var2->Deref() }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_diffv_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_diffv_3__1(mach));
}

static* function < Function*pred_diffv_3::(PrologMachine*) {
	mach::FillAlternative(pred_diffv_3::exec_pred_diffv_3__2);
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
	if(!((areg2)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_diffv_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_diffv_2_4::exec_static);
}

static* function < Function*pred_diffv_2_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_diffv_2_4__1(mach));
}

static* function < Function*pred_diffv_2_4::(PrologMachine*) {
	mach::FillAlternative(pred_diffv_2_4::exec_pred_diffv_2_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(reducer::s7, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_diffv_2_4::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(reducer::s36, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_diffv_3_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_diffv_3_6__1(mach));
}

static* function < Function*pred_diffv_3_6::(PrologMachine*) {
	mach::FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s10))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(reducer::s7, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = F(reducer::s7, { var3->Deref(), var4->Deref() });
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_diffv_3::exec_static);
}

static* function < Function*pred_diffv_3_6::(PrologMachine*) {
	mach::FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s11))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_diffv_3::exec_static);
}

static* function < Function*pred_diffv_3_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s15))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_diffv_2_4::exec_static);
}

static* function < Function*pred_unionv_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_unionv_3__1(mach));
}

static* function < Function*pred_unionv_3::(PrologMachine*) {
	mach::FillAlternative(pred_unionv_3::exec_pred_unionv_3__2);
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_unionv_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unionv_2_4::exec_static);
}

static* function < Function*pred_unionv_2_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_unionv_2_4__1(mach));
}

static* function < Function*pred_unionv_2_4::(PrologMachine*) {
	mach::FillAlternative(pred_unionv_2_4::exec_pred_unionv_2_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(reducer::s7, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_unionv_2_4::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(reducer::s95, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_unionv_3_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_unionv_3_6__1(mach));
}

static* function < Function*pred_unionv_3_6::(PrologMachine*) {
	mach::FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s10))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(reducer::s7, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unionv_2_4::exec_static);
}

static* function < Function*pred_unionv_3_6::(PrologMachine*) {
	mach::FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s11))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(reducer::s7, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unionv_3::exec_static);
}

static* function < Function*pred_unionv_3_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s15))) {
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
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(reducer::s7, { var3->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unionv_2_4::exec_static);
}

static* function < Function*pred_subsetv_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_subsetv_2__1(mach));
}

static* function < Function*pred_subsetv_2::(PrologMachine*) {
	mach::FillAlternative(pred_subsetv_2::exec_pred_subsetv_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_subsetv_2::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(reducer::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = F(reducer::s76, { var5->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_subsetv_2_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_subsetv_2_4__1(mach));
}

static* function < Function*pred_subsetv_2_4::(PrologMachine*) {
	mach::FillAlternative(pred_subsetv_2_4::exec_pred_subsetv_2_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s11))) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_subsetv_2::exec_static);
}

static* function < Function*pred_subsetv_2_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s15))) {
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
	local_aregs[0] = F(reducer::s7, { var1->Deref(), var2->Deref() });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_subsetv_2::exec_static);
}

static* function < Function*pred_small_subsetv_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_small_subsetv_2__1(mach));
}

static* function < Function*pred_small_subsetv_2::(PrologMachine*) {
	mach::FillAlternative(pred_small_subsetv_2::exec_pred_small_subsetv_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_small_subsetv_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = F(reducer::s70, { var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_inv_2::exec_static);
}

static* function < Function*pred_inv_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_inv_2__1(mach));
}

static* function < Function*pred_inv_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(reducer::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = F(reducer::s52, { var4->Deref(), var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_inv_2_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_inv_2_3__1(mach));
}

static* function < Function*pred_inv_2_3::(PrologMachine*) {
	mach::FillAlternative(pred_inv_2_3::exec_pred_inv_2_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s11))) {
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

static* function < Function*pred_inv_2_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s15))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_inv_2::exec_static);
}

static* function < Function*pred_notinv_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_notinv_2__1(mach));
}

static* function < Function*pred_notinv_2::(PrologMachine*) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_notinv_2_2::exec_static);
}

static* function < Function*pred_notinv_2_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_notinv_2_2__1(mach));
}

static* function < Function*pred_notinv_2_2::(PrologMachine*) {
	mach::FillAlternative(pred_notinv_2_2::exec_pred_notinv_2_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_notinv_2_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(reducer::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(reducer::s63, { var4->Deref(), var3->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_notinv_3_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_notinv_3_3__1(mach));
}

static* function < Function*pred_notinv_3_3::(PrologMachine*) {
	mach::FillAlternative(pred_notinv_3_3::exec_pred_notinv_3_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s10))) {
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

static* function < Function*pred_notinv_3_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(reducer::s15))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_notinv_2_2::exec_static);
}
