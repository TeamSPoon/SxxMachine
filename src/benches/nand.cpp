using namespace std;

#include "nand.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "unify.h"
#include "simple_analyzer.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"
#include "../bootlib/sxx_builtins.h"
#include "../bootlib/sxx_library.h"
#include "sdda.h"

Const* nand::s0 = Const::Intern("cut");
Const* nand::s1 = Const::Intern(" inputs:   ");
Const* nand::s2 = Const::Intern("+");
Const* nand::s3 = Const::Intern(",");
Const* nand::s4 = Const::Intern("->");
Const* nand::s5 = Const::Intern(".");
Const* nand::s6 = Const::Intern(":-");
Const* nand::s7 = Const::Intern(";");
Const* nand::s8 = Const::Intern("=");
Const* nand::s9 = Const::Intern(">=");
Const* nand::s10 = Const::Intern("access");
Const* nand::s11 = Const::Intern("add_necessary_functions");
Const* nand::s12 = Const::Intern("best_vector");
Const* nand::s13 = Const::Intern("bound");
Const* nand::s14 = Const::Intern("call");
Const* nand::s15 = Const::Intern("conceivable_inputs");
Const* nand::s16 = Const::Intern("cov");
Const* nand::s17 = Const::Intern("cover_type1");
Const* nand::s18 = Const::Intern("cover_type2");
Const* nand::s19 = Const::Intern("cover_vector");
Const* nand::s20 = Const::Intern("cut");
Const* nand::s21 = Const::Intern("dummy");
Const* nand::s22 = Const::Intern("erase");
Const* nand::s23 = Const::Intern("exclude_if_vector_in_false_set");
Const* nand::s24 = Const::Intern("exf");
Const* nand::s25 = Const::Intern("exmcf");
Const* nand::s26 = Const::Intern("exp");
Const* nand::s27 = Const::Intern("fail");
Const* nand::s28 = Const::Intern("false_set");
Const* nand::s29 = Const::Intern("fcn");
Const* nand::s30 = Const::Intern("function");
Const* nand::s31 = Const::Intern("function_number");
Const* nand::s32 = Const::Intern("function_type");
Const* nand::s33 = Const::Intern("gate #");
Const* nand::s34 = Const::Intern("immediate_predecessors");
Const* nand::s35 = Const::Intern("immediate_successors");
Const* nand::s36 = Const::Intern("init_state");
Const* nand::s37 = Const::Intern("is");
Const* nand::s38 = Const::Intern("main");
Const* nand::s39 = Const::Intern("max_type");
Const* nand::s40 = Const::Intern("mcf");
Const* nand::s41 = Const::Intern("new_function_CIs");
Const* nand::s42 = Const::Intern("nf");
Const* nand::s43 = Const::Intern("nl");
Const* nand::s44 = Const::Intern("not");
Const* nand::s45 = Const::Intern("or");
Const* nand::s46 = Const::Intern("predecessors");
Const* nand::s47 = Const::Intern("recorda");
Const* nand::s48 = Const::Intern("recorded");
Const* nand::s49 = Const::Intern("search");
Const* nand::s50 = Const::Intern("select_vector");
Const* nand::s51 = Const::Intern("set");
Const* nand::s52 = Const::Intern("set_difference");
Const* nand::s53 = Const::Intern("set_intersection");
Const* nand::s54 = Const::Intern("set_member");
Const* nand::s55 = Const::Intern("set_subset");
Const* nand::s56 = Const::Intern("set_union");
Const* nand::s57 = Const::Intern("smallerorequal");
Const* nand::s58 = Const::Intern("smallerthan");
Const* nand::s59 = Const::Intern("successors");
Const* nand::s60 = Const::Intern("test_bounds");
Const* nand::s61 = Const::Intern("top");
Const* nand::s62 = Const::Intern("true");
Const* nand::s63 = Const::Intern("true_set");
Const* nand::s64 = Const::Intern("type_order");
Const* nand::s65 = Const::Intern("unify");
Const* nand::s66 = Const::Intern("update_bounds");
Const* nand::s67 = Const::Intern("update_circuit");
Const* nand::s68 = Const::Intern("var");
Const* nand::s69 = Const::Intern("vector_cover_type");
Const* nand::s70 = Const::Intern("vector_types");
Const* nand::s71 = Const::Intern("write");
Const* nand::s72 = Const::Intern("write_gates");
Int* nand::posint0 = Term::Number(0);
Int* nand::posint1 = Term::Number(1);
Int* nand::posint2 = Term::Number(2);
Int* nand::posint3 = Term::Number(3);
Int* nand::posint4 = Term::Number(4);
Int* nand::posint5 = Term::Number(5);
Int* nand::posint6 = Term::Number(6);
Int* nand::posint7 = Term::Number(7);
Int* nand::posint8 = Term::Number(8);
Int* nand::posint9 = Term::Number(9);
Int* nand::posint10 = Term::Number(10);
Int* nand::posint11 = Term::Number(11);
Int* nand::posint12 = Term::Number(12);
Int* nand::posint13 = Term::Number(13);
Int* nand::posint14 = Term::Number(14);
Int* nand::posint15 = Term::Number(15);
Int* nand::posint16 = Term::Number(16);
Int* nand::posint17 = Term::Number(17);
Int* nand::posint18 = Term::Number(18);
Int* nand::posint19 = Term::Number(19);
Int* nand::posint20 = Term::Number(20);
Int* nand::posint21 = Term::Number(21);
Int* nand::posint22 = Term::Number(22);
Int* nand::posint23 = Term::Number(23);
Int* nand::posint24 = Term::Number(24);
Int* nand::posint25 = Term::Number(25);
Int* nand::posint26 = Term::Number(26);
Int* nand::posint27 = Term::Number(27);
Int* nand::posint28 = Term::Number(28);
Int* nand::posint29 = Term::Number(29);
Int* nand::posint30 = Term::Number(30);
Int* nand::posint31 = Term::Number(31);
Int* nand::posint100 = Term::Number(100);
Int* nand::posint999 = Term::Number(999);

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
	local_aregs[0] = nand::posint0;
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
	mach::FillAlternative(pred_main_1::exec_pred_main_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = var4;
	local_aregs[4] = F(nand::s11, { var2->Deref(), var3->Deref(), var4->Deref(), var5, var6, F(nand::s60, { var2->Deref(), var5->Deref(), var6->Deref(), F(nand::s49, { var2->Deref(), var5->Deref(), var6->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_init_state_4::exec_static);
}

static* function < Function*pred_main_1::(PrologMachine*) {
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

static* function < Function*pred_init_state_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_init_state_4__1(mach));
}

static* function < Function*pred_init_state_4::(PrologMachine*) {
	mach::FillAlternative(pred_init_state_4::exec_pred_init_state_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(nand::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(nand::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, F(nand::s30, nand::posint2, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, Const::Nil)), F(nand::s5, nand::posint0, F(nand::s5, nand::posint3, Const::Nil)), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, Const::Nil)), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, Const::Nil)), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint3, Const::Nil)), F(nand::s5, nand::posint0, F(nand::s5, nand::posint2, Const::Nil)), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_update_bounds_3::exec_static);
}

static* function < Function*pred_init_state_4::(PrologMachine*) {
	mach::FillAlternative(pred_init_state_4::exec_pred_init_state_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(nand::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(nand::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, F(nand::s30, nand::posint3, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint6, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), Const::Nil))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_update_bounds_3::exec_static);
}

static* function < Function*pred_init_state_4::(PrologMachine*) {
	mach::FillAlternative(pred_init_state_4::exec_pred_init_state_4__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(nand::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(nand::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, F(nand::s30, nand::posint3, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, Const::Nil))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint6, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), Const::Nil))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_update_bounds_3::exec_static);
}

static* function < Function*pred_init_state_4::(PrologMachine*) {
	mach::FillAlternative(pred_init_state_4::exec_pred_init_state_4__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(nand::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(nand::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, F(nand::s30, nand::posint3, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint6, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), Const::Nil))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_update_bounds_3::exec_static);
}

static* function < Function*pred_init_state_4::(PrologMachine*) {
	mach::FillAlternative(pred_init_state_4::exec_pred_init_state_4__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(nand::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(nand::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, F(nand::s30, nand::posint4, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint3, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint7, Const::Nil)))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint6, Const::Nil)))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), Const::Nil)))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_update_bounds_3::exec_static);
}

static* function < Function*pred_init_state_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(nand::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(nand::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, F(nand::s30, nand::posint7, F(nand::s5, nand::posint1, F(nand::s5, nand::posint3, F(nand::s5, nand::posint4, F(nand::s5, nand::posint6, F(nand::s5, nand::posint9, F(nand::s5, nand::posint11, F(nand::s5, nand::posint12, F(nand::s5, nand::posint14, F(nand::s5, nand::posint16, F(nand::s5, nand::posint18, F(nand::s5, nand::posint21, F(nand::s5, nand::posint23, F(nand::s5, nand::posint24, F(nand::s5, nand::posint26, F(nand::s5, nand::posint29, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint2, F(nand::s5, nand::posint5, F(nand::s5, nand::posint7, F(nand::s5, nand::posint8, F(nand::s5, nand::posint10, F(nand::s5, nand::posint13, F(nand::s5, nand::posint15, F(nand::s5, nand::posint17, F(nand::s5, nand::posint19, F(nand::s5, nand::posint20, F(nand::s5, nand::posint22, F(nand::s5, nand::posint25, F(nand::s5, nand::posint27, F(nand::s5, nand::posint28, F(nand::s5, nand::posint30, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint6, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint8, F(nand::s5, nand::posint9, F(nand::s5, nand::posint12, F(nand::s5, nand::posint15, F(nand::s5, nand::posint17, F(nand::s5, nand::posint18, F(nand::s5, nand::posint20, F(nand::s5, nand::posint21, F(nand::s5, nand::posint24, F(nand::s5, nand::posint27, F(nand::s5, nand::posint30, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint4, F(nand::s5, nand::posint7, F(nand::s5, nand::posint10, F(nand::s5, nand::posint11, F(nand::s5, nand::posint13, F(nand::s5, nand::posint14, F(nand::s5, nand::posint16, F(nand::s5, nand::posint19, F(nand::s5, nand::posint22, F(nand::s5, nand::posint23, F(nand::s5, nand::posint25, F(nand::s5, nand::posint26, F(nand::s5, nand::posint28, F(nand::s5, nand::posint29, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint5, F(nand::s5, nand::posint7, F(nand::s5, nand::posint10, F(nand::s5, nand::posint11, F(nand::s5, nand::posint13, F(nand::s5, nand::posint14, F(nand::s5, nand::posint15, F(nand::s5, nand::posint19, F(nand::s5, nand::posint22, F(nand::s5, nand::posint23, F(nand::s5, nand::posint25, F(nand::s5, nand::posint26, F(nand::s5, nand::posint27, F(nand::s5, nand::posint28, F(nand::s5, nand::posint29, F(nand::s5, nand::posint30, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint8, F(nand::s5, nand::posint9, F(nand::s5, nand::posint12, F(nand::s5, nand::posint16, F(nand::s5, nand::posint17, F(nand::s5, nand::posint18, F(nand::s5, nand::posint20, F(nand::s5, nand::posint21, F(nand::s5, nand::posint24, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint4, F(nand::s5, nand::posint16, F(nand::s5, nand::posint17, F(nand::s5, nand::posint18, F(nand::s5, nand::posint19, F(nand::s5, nand::posint20, F(nand::s5, nand::posint21, F(nand::s5, nand::posint22, F(nand::s5, nand::posint23, F(nand::s5, nand::posint24, F(nand::s5, nand::posint25, F(nand::s5, nand::posint26, F(nand::s5, nand::posint27, F(nand::s5, nand::posint28, F(nand::s5, nand::posint29, F(nand::s5, nand::posint30, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, F(nand::s5, nand::posint8, F(nand::s5, nand::posint9, F(nand::s5, nand::posint10, F(nand::s5, nand::posint11, F(nand::s5, nand::posint12, F(nand::s5, nand::posint13, F(nand::s5, nand::posint14, F(nand::s5, nand::posint15, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint3, F(nand::s5, nand::posint8, F(nand::s5, nand::posint9, F(nand::s5, nand::posint10, F(nand::s5, nand::posint11, F(nand::s5, nand::posint12, F(nand::s5, nand::posint13, F(nand::s5, nand::posint14, F(nand::s5, nand::posint15, F(nand::s5, nand::posint24, F(nand::s5, nand::posint25, F(nand::s5, nand::posint26, F(nand::s5, nand::posint27, F(nand::s5, nand::posint28, F(nand::s5, nand::posint29, F(nand::s5, nand::posint30, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, F(nand::s5, nand::posint16, F(nand::s5, nand::posint17, F(nand::s5, nand::posint18, F(nand::s5, nand::posint19, F(nand::s5, nand::posint20, F(nand::s5, nand::posint21, F(nand::s5, nand::posint22, F(nand::s5, nand::posint23, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, F(nand::s5, nand::posint12, F(nand::s5, nand::posint13, F(nand::s5, nand::posint14, F(nand::s5, nand::posint15, F(nand::s5, nand::posint20, F(nand::s5, nand::posint21, F(nand::s5, nand::posint22, F(nand::s5, nand::posint23, F(nand::s5, nand::posint28, F(nand::s5, nand::posint29, F(nand::s5, nand::posint30, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint8, F(nand::s5, nand::posint9, F(nand::s5, nand::posint10, F(nand::s5, nand::posint11, F(nand::s5, nand::posint16, F(nand::s5, nand::posint17, F(nand::s5, nand::posint18, F(nand::s5, nand::posint19, F(nand::s5, nand::posint24, F(nand::s5, nand::posint25, F(nand::s5, nand::posint26, F(nand::s5, nand::posint27, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint1, F(nand::s5, nand::posint2, F(nand::s5, nand::posint3, F(nand::s5, nand::posint6, F(nand::s5, nand::posint7, F(nand::s5, nand::posint10, F(nand::s5, nand::posint11, F(nand::s5, nand::posint14, F(nand::s5, nand::posint15, F(nand::s5, nand::posint18, F(nand::s5, nand::posint19, F(nand::s5, nand::posint22, F(nand::s5, nand::posint23, F(nand::s5, nand::posint26, F(nand::s5, nand::posint27, F(nand::s5, nand::posint30, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint4, F(nand::s5, nand::posint5, F(nand::s5, nand::posint8, F(nand::s5, nand::posint9, F(nand::s5, nand::posint12, F(nand::s5, nand::posint13, F(nand::s5, nand::posint16, F(nand::s5, nand::posint17, F(nand::s5, nand::posint20, F(nand::s5, nand::posint21, F(nand::s5, nand::posint24, F(nand::s5, nand::posint25, F(nand::s5, nand::posint28, F(nand::s5, nand::posint29, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), F(nand::s5, F(nand::s30, nand::posint0, F(nand::s5, nand::posint1, F(nand::s5, nand::posint3, F(nand::s5, nand::posint5, F(nand::s5, nand::posint7, F(nand::s5, nand::posint9, F(nand::s5, nand::posint11, F(nand::s5, nand::posint13, F(nand::s5, nand::posint15, F(nand::s5, nand::posint17, F(nand::s5, nand::posint19, F(nand::s5, nand::posint21, F(nand::s5, nand::posint23, F(nand::s5, nand::posint25, F(nand::s5, nand::posint27, F(nand::s5, nand::posint29, F(nand::s5, nand::posint31, Const::Nil)))))))))))))))), F(nand::s5, nand::posint0, F(nand::s5, nand::posint2, F(nand::s5, nand::posint4, F(nand::s5, nand::posint6, F(nand::s5, nand::posint8, F(nand::s5, nand::posint10, F(nand::s5, nand::posint12, F(nand::s5, nand::posint14, F(nand::s5, nand::posint16, F(nand::s5, nand::posint18, F(nand::s5, nand::posint20, F(nand::s5, nand::posint22, F(nand::s5, nand::posint24, F(nand::s5, nand::posint26, F(nand::s5, nand::posint28, F(nand::s5, nand::posint30, Const::Nil)))))))))))))))), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil), Const::Nil))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint21;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_update_bounds_3::exec_static);
}

static* function < Function*pred_search_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_search_3__1(mach));
}

static* function < Function*pred_search_3::(PrologMachine*) {
	mach::FillAlternative(pred_search_3::exec_pred_search_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4;
	local_aregs[4] = var5;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[5] = F(nand::s0, &tempVar, F(nand::s19, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6, var7, F(nand::s11, { var1->Deref(), var6->Deref(), var7->Deref(), var8, var9, F(nand::s60, { var1->Deref(), var8->Deref(), var9->Deref(), F(nand::s49, { var1->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_select_vector_5::exec_static);
}

static* function < Function*pred_search_3::(PrologMachine*) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = F(nand::s27, { continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_update_bounds_3::exec_static);
}

static* function < Function*pred_select_vector_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_select_vector_5__1(mach));
}

static* function < Function*pred_select_vector_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
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
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = nand::s21;
	local_aregs[5] = nand::posint0;
	local_aregs[6] = nand::s42;
	local_aregs[7] = nand::posint999;
	local_aregs[8] = var4->Deref();
	local_aregs[9] = var5->Deref();
	local_aregs[10] = var6;
	local_aregs[11] = var7;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[12] = F(nand::s0, &tempVar, F(nand::s44, F(nand::s8, { var6->Deref(), nand::s16 }), F(nand::s44, F(nand::s8, { var6->Deref(), nand::s42 }), continuation)));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_select_vector_12::exec_static);
}

static* function < Function*pred_select_vector_12::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
	 * [11],mach.Areg[12]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(12);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_select_vector_12__1(mach));
}

static* function < Function*pred_select_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_select_vector_12::exec_pred_select_vector_12__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var8->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var9->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var10;
	local_aregs[2] = F(nand::s58, { var10->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_number_2::exec_static);
}

static* function < Function*pred_select_vector_12::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var19 = V(mach);
	Var* var18 = V(mach);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var13))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var14;
	local_aregs[2] = F(nand::s57, { var3->Deref(), var14->Deref(), F(nand::s63, { var1->Deref(), var15, F(nand::s50, { var15->Deref(), var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), var16, var17, var18, var19, F(nand::s50, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var16->Deref(), var17->Deref(), var18->Deref(), var19->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_number_2::exec_static);
}

static* function < Function*pred_select_vector_13::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
	 * [11],mach.Areg[12],mach.Areg[13]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(13);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_select_vector_13__1(mach));
}

static* function < Function*pred_select_vector_13::(PrologMachine*) {
	mach::FillAlternative(pred_select_vector_13::exec_pred_select_vector_13__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[13];
	Term* areg12 = local_aregs[12]->Deref();
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(Const::Nil))) {
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
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg12)->Unify(var8->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_select_vector_13::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[13];
	Term* areg12 = local_aregs[12]->Deref();
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var13))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg12)->Unify(var14))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var1->Deref();
	local_aregs[4] = var15;
	local_aregs[5] = var16;
	local_aregs[6] = F(nand::s12, { var7->Deref(), var8->Deref(), var9->Deref(), var10->Deref(), var3->Deref(), var1->Deref(), var15->Deref(), var16->Deref(), var17, var18, var19, var20, F(nand::s50, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var17->Deref(), var18->Deref(), var19->Deref(), var20->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), var14->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_vector_cover_type_6::exec_static);
}

static* function < Function*pred_vector_cover_type_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_vector_cover_type_6__1(mach));
}

static* function < Function*pred_vector_cover_type_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var7;
	local_aregs[2] = F(nand::s15, { var3->Deref(), var8, F(nand::s28, { var3->Deref(), var9, F(nand::s17, { var7->Deref(), var2->Deref(), var4->Deref(), nand::s42, nand::posint0, var10, var11, F(nand::s18, { var8->Deref(), var2->Deref(), var1->Deref(), var9->Deref(), var4->Deref(), var10->Deref(), var11->Deref(), var5->Deref(), var6->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_immediate_predecessors_2::exec_static);
}

static* function < Function*pred_cover_type1_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_cover_type1_7__1(mach));
}

static* function < Function*pred_cover_type1_7::(PrologMachine*) {
	mach::FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
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
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_cover_type1_7::(PrologMachine*) {
	mach::FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var9;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(nand::s63, { var9->Deref(), var10, F(nand::s44, F(nand::s54, { var4->Deref(), var10->Deref() }), F(nand::s0, &tempVar, F(nand::s28, { var9->Deref(), var11, F(nand::s45, F(nand::s4, F(nand::s54, { var4->Deref(), var11->Deref() }), F(nand::s39, { var5->Deref(), nand::s16, var12 })), F(nand::s39, { var5->Deref(), nand::s26, var12->Deref() }), F(nand::s37, var13, F(nand::s2, { var6->Deref(), nand::posint1 }), F(nand::s17, { var2->Deref(), var3->Deref(), var4->Deref(), var12->Deref(), var13->Deref(), var7->Deref(), var8->Deref(), continuation }))) }))) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_3::exec_static);
}

static* function < Function*pred_cover_type1_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_type1_7::exec_static);
}

static* function < Function*pred_cover_type2_9::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(9);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_cover_type2_9__1(mach));
}

static* function < Function*pred_cover_type2_9::(PrologMachine*) {
	mach::FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__2);
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
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
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
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_cover_type2_9::(PrologMachine*) {
	mach::FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__3);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s30, { var1->Deref(), var3->Deref(), var11, F(nand::s28, { var11->Deref(), var12, F(nand::s54, { var6->Deref(), var12->Deref(), F(nand::s0, &tempVar, F(nand::s39, { var7->Deref(), nand::s68, var13, F(nand::s37, var14, F(nand::s2, { var8->Deref(), nand::posint1 }), F(nand::s18, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var13->Deref(), var14->Deref(), var9->Deref(), var10->Deref(), continuation })) })) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_cover_type2_9::(PrologMachine*) {
	mach::FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__4);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s30, { var1->Deref(), var3->Deref(), var11, F(nand::s63, { var11->Deref(), var12, F(nand::s44, F(nand::s54, { var6->Deref(), var12->Deref() }), F(nand::s0, &tempVar, F(nand::s28, { var11->Deref(), var13, F(nand::s45, F(nand::s4, F(nand::s54, { var6->Deref(), var13->Deref() }), F(nand::s7, F(nand::s4, F(nand::s55, { var5->Deref(), var12->Deref() }), F(nand::s39, { var7->Deref(), nand::s29, var14 })), F(nand::s39, { var7->Deref(), nand::s40, var14->Deref() }))), F(nand::s7, F(nand::s4, F(nand::s55, { var5->Deref(), var12->Deref() }), F(nand::s39, { var7->Deref(), nand::s24, var14->Deref() })), F(nand::s39, { var7->Deref(), nand::s25, var14->Deref() })), F(nand::s37, var15, F(nand::s2, { var8->Deref(), nand::posint1 }), F(nand::s18, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var14->Deref(), var15->Deref(), var9->Deref(), var10->Deref(), continuation }))) }))) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_cover_type2_9::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = var9->Deref();
	local_aregs[8] = var10->Deref();
	local_aregs[9] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_type2_9::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
	 * [11],mach.Areg[12]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(12);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_best_vector_12__1(mach));
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
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
	if(!((areg0)->Unify(nand::s21))) {
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
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
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
	if(!((areg4)->Unify(nand::s21))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var8;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s31, { var5->Deref(), var8->Deref(), F(nand::s58, { var4->Deref(), var7->Deref(), F(nand::s0, &tempVar, continuation) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_number_2::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var8;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s31, { var5->Deref(), var8->Deref(), F(nand::s57, { var7->Deref(), var4->Deref(), F(nand::s0, &tempVar, continuation) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_number_2::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(nand::s8, { var3->Deref(), nand::s26 });
	local_aregs[1] = F(nand::s8, { var3->Deref(), nand::s68 });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s31, { var1->Deref(), var8, F(nand::s31, { var5->Deref(), var9, F(nand::s58, { var9->Deref(), var8->Deref(), F(nand::s0, &tempVar, continuation) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(nand::s8, { var3->Deref(), nand::s26 });
	local_aregs[1] = F(nand::s8, { var3->Deref(), nand::s68 });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s31, { var1->Deref(), var8, F(nand::s31, { var5->Deref(), var9, F(nand::s58, { var8->Deref(), var9->Deref(), F(nand::s0, &tempVar, continuation) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(nand::s7, F(nand::s8, { var3->Deref(), nand::s26 }), F(nand::s8, { var3->Deref(), nand::s68 }));
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(nand::s31, { var1->Deref(), var8, F(nand::s31, { var5->Deref(), var9, F(nand::s58, { var8->Deref(), var9->Deref(), F(nand::s0, &tempVar, continuation) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg6)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(nand::s7, F(nand::s8, { var3->Deref(), nand::s26 }), F(nand::s8, { var3->Deref(), nand::s68 }));
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(nand::s31, { var1->Deref(), var8, F(nand::s31, { var5->Deref(), var9, F(nand::s58, { var9->Deref(), var8->Deref(), F(nand::s0, &tempVar, continuation) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg8)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_type_order_2::exec_static);
}

static* function < Function*pred_best_vector_12::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
	Term* areg10 = local_aregs[10]->Deref();
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg8)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg11)->Unify(var8->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var7->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_type_order_2::exec_static);
}

static* function < Function*pred_max_type_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_max_type_3__1(mach));
}

static* function < Function*pred_max_type_3::(PrologMachine*) {
	mach::FillAlternative(pred_max_type_3::exec_pred_max_type_3__2);
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
	local_aregs[1] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_type_order_2::exec_static);
}

static* function < Function*pred_max_type_3::(PrologMachine*) {
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
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(nand::s64, { var1->Deref(), var2->Deref() });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(nand::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_static);
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_type_order_2__1(mach));
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::FillAlternative(pred_type_order_2::exec_pred_type_order_2__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_type_order_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_cover_vector_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_cover_vector_7__1(mach));
}

static* function < Function*pred_cover_vector_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
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
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var8;
	local_aregs[2] = F(nand::s15, { var4->Deref(), var9, F(nand::s70, var10, F(nand::s19, { var10->Deref(), var8->Deref(), var9->Deref(), var4->Deref(), var5->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_immediate_predecessors_2::exec_static);
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_vector_types_1__1(mach));
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	mach::FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	mach::FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	mach::FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	mach::FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	mach::FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	mach::FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_vector_types_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s42))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(10);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_cover_vector_10__1(mach));
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var8->Deref();
	local_aregs[2] = var10;
	local_aregs[3] = F(nand::s63, { var10->Deref(), var11, F(nand::s44, F(nand::s54, { var5->Deref(), var11->Deref() }), F(nand::s67, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_3::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(nand::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = nand::s26;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var10;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_vector_10::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = F(nand::s30, { var2->Deref(), var8->Deref(), var10, F(nand::s28, { var10->Deref(), var11, F(nand::s54, { var5->Deref(), var11->Deref(), F(nand::s67, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(nand::s68))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = nand::s68;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_vector_10::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = F(nand::s30, { var2->Deref(), var8->Deref(), var10, F(nand::s28, { var10->Deref(), var11, F(nand::s54, { var5->Deref(), var11->Deref(), F(nand::s63, { var10->Deref(), var12, F(nand::s28, { var4->Deref(), var13, F(nand::s55, { var13->Deref(), var12->Deref(), F(nand::s67, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(nand::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = nand::s29;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_vector_10::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = F(nand::s30, { var2->Deref(), var8->Deref(), var10, F(nand::s28, { var10->Deref(), var11, F(nand::s54, { var5->Deref(), var11->Deref(), F(nand::s63, { var10->Deref(), var12, F(nand::s28, { var4->Deref(), var13, F(nand::s44, F(nand::s55, { var13->Deref(), var12->Deref() }), F(nand::s67, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation })) }) }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(nand::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = nand::s40;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_vector_10::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = F(nand::s30, { var2->Deref(), var8->Deref(), var10, F(nand::s28, { var10->Deref(), var11, F(nand::s44, F(nand::s54, { var5->Deref(), var11->Deref() }), F(nand::s63, { var10->Deref(), var12, F(nand::s44, F(nand::s54, { var5->Deref(), var12->Deref() }), F(nand::s28, { var4->Deref(), var13, F(nand::s55, { var13->Deref(), var12->Deref(), F(nand::s67, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation }) }) })) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(nand::s24))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = nand::s24;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_vector_10::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = F(nand::s30, { var2->Deref(), var8->Deref(), var10, F(nand::s28, { var10->Deref(), var11, F(nand::s44, F(nand::s54, { var5->Deref(), var11->Deref() }), F(nand::s63, { var10->Deref(), var12, F(nand::s44, F(nand::s54, { var5->Deref(), var12->Deref() }), F(nand::s28, { var4->Deref(), var13, F(nand::s44, F(nand::s55, { var13->Deref(), var12->Deref() }), F(nand::s67, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation })) })) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
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
	if(!((areg0)->Unify(nand::s25))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, var2, var3)))) {
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
	if(!((areg8)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = nand::s25;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cover_vector_10::exec_static);
}

static* function < Function*pred_cover_vector_10::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[10];
	Term* areg9 = local_aregs[9]->Deref();
	Term* areg8 = local_aregs[8]->Deref();
	Term* areg7 = local_aregs[7]->Deref();
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(nand::s42))) {
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
	if(!((areg6)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8->Deref();
	local_aregs[1] = F(nand::s2, { var6->Deref(), nand::posint1 });
	local_aregs[2] = F(nand::s28, { var3->Deref(), var10, F(nand::s41, { var7->Deref(), F(nand::s30, { var6->Deref(), var10->Deref(), F(nand::s5, { var4->Deref(), Const::Nil }), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil }), var5->Deref(), var11, var12, F(nand::s67, { var11->Deref(), var12->Deref(), var3->Deref(), var4->Deref(), var11->Deref(), var9->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_update_circuit_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_update_circuit_6__1(mach));
}

static* function < Function*pred_update_circuit_6::(PrologMachine*) {
	mach::FillAlternative(pred_update_circuit_6::exec_pred_update_circuit_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
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
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_update_circuit_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var44 = V(mach);
	Var* var43 = V(mach);
	Var* var42 = V(mach);
	Var* var41 = V(mach);
	Var* var40 = V(mach);
	Var* var39 = V(mach);
	Var* var38 = V(mach);
	Var* var37 = V(mach);
	Var* var36 = V(mach);
	Var* var35 = V(mach);
	Var* var34 = V(mach);
	Var* var33 = V(mach);
	Var* var32 = V(mach);
	Var* var31 = V(mach);
	Var* var30 = V(mach);
	Var* var29 = V(mach);
	Var* var28 = V(mach);
	Var* var27 = V(mach);
	Var* var26 = V(mach);
	Var* var25 = V(mach);
	Var* var24 = V(mach);
	Var* var23 = V(mach);
	Var* var22 = V(mach);
	Var* var21 = V(mach);
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
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
	if(!((areg0)->Unify(F(nand::s5, F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8), var9)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var13))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(nand::s5, F(nand::s30, { var1->Deref(), var14, var15, var16, var17, var18, var19, var20 }), var21)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(nand::s30, var22, var23, var24, var25, var26, var27, var28, var29);
	local_aregs[1] = var10->Deref();
	local_aregs[2] = F(nand::s65, F(nand::s30, var30, var31, var32, var33, var34, var35, var36, var37), var11->Deref(), F(nand::s56, F(nand::s5, { var22->Deref(), Const::Nil }), var28->Deref(), var38, F(nand::s56, F(nand::s5, { var30->Deref(), Const::Nil }), var37->Deref(), var39, F(nand::s45, F(nand::s4, F(nand::s8, { var1->Deref(), var30->Deref() }), F(nand::s56, { var2->Deref(), var24->Deref(), var40 })), F(nand::s8, { var40->Deref(), var2->Deref() }), F(nand::s45, F(nand::s4, F(nand::s8, { var1->Deref(), var22->Deref() }), F(nand::s56, { var40->Deref(), var32->Deref(), var41 })), F(nand::s8, { var41->Deref(), var40->Deref() }), F(nand::s45, F(nand::s4, F(nand::s7, F(nand::s54, { var1->Deref(), var26->Deref() }), F(nand::s54, { var1->Deref(), var27->Deref() })), F(nand::s56, { var41->Deref(), F(nand::s5, { var12->Deref(), Const::Nil }), var14->Deref() })), F(nand::s8, { var14->Deref(), var41->Deref() }), F(nand::s45, F(nand::s4, F(nand::s8, { var1->Deref(), var22->Deref() }), F(nand::s56, { var3->Deref(), F(nand::s5, { var12->Deref(), Const::Nil }), var15->Deref() })), F(nand::s8, { var15->Deref(), var3->Deref() }), F(nand::s45, F(nand::s4, F(nand::s7, F(nand::s54, { var1->Deref(), var28->Deref() }), F(nand::s8, { var1->Deref(), var22->Deref() })), F(nand::s52, { var4->Deref(), var39->Deref(), var42 })), F(nand::s8, { var42->Deref(), var4->Deref() }), F(nand::s45, F(nand::s4, F(nand::s3, F(nand::s54, { var22->Deref(), var4->Deref() }), F(nand::s54, { var12->Deref(), var3->Deref() })), F(nand::s52, { var42->Deref(), F(nand::s5, { var22->Deref(), Const::Nil }), var43 })), F(nand::s8, { var43->Deref(), var42->Deref() }), F(nand::s45, F(nand::s4, F(nand::s8, { var1->Deref(), var22->Deref() }), F(nand::s23, { var43->Deref(), var13->Deref(), var12->Deref(), var44 })), F(nand::s8, { var44->Deref(), var43->Deref() }), F(nand::s45, F(nand::s4, F(nand::s8, { var1->Deref(), var30->Deref() }), F(nand::s52, { var44->Deref(), F(nand::s5, { var22->Deref(), Const::Nil }), var16->Deref() })), F(nand::s8, { var16->Deref(), var44->Deref() }), F(nand::s45, F(nand::s4, F(nand::s8, { var1->Deref(), var30->Deref() }), F(nand::s56, { var5->Deref(), F(nand::s5, { var22->Deref(), Const::Nil }), var17->Deref() })), F(nand::s8, { var17->Deref(), var5->Deref() }), F(nand::s45, F(nand::s4, F(nand::s8, { var1->Deref(), var22->Deref() }), F(nand::s56, { var6->Deref(), F(nand::s5, { var30->Deref(), Const::Nil }), var18->Deref() })), F(nand::s8, { var18->Deref(), var6->Deref() }), F(nand::s45, F(nand::s4, F(nand::s54, { var1->Deref(), var39->Deref() }), F(nand::s56, { var7->Deref(), var38->Deref(), var19->Deref() })), F(nand::s8, { var19->Deref(), var7->Deref() }), F(nand::s45, F(nand::s4, F(nand::s54, { var1->Deref(), var38->Deref() }), F(nand::s56, { var8->Deref(), var39->Deref(), var20->Deref() })), F(nand::s8, { var20->Deref(), var8->Deref() }), F(nand::s67, { var9->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), var21->Deref(), continuation }))))))))))))))));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_exclude_if_vector_in_false_set_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_exclude_if_vector_in_false_set_4__1(mach));
}

static* function < Function*pred_exclude_if_vector_in_false_set_4::(PrologMachine*) {
	mach::FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__2);
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

static* function < Function*pred_exclude_if_vector_in_false_set_4::(PrologMachine*) {
	mach::FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__3);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var6;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(nand::s28, { var6->Deref(), var7, F(nand::s54, { var4->Deref(), var7->Deref(), F(nand::s0, &tempVar, F(nand::s23, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_3::exec_static);
}

static* function < Function*pred_exclude_if_vector_in_false_set_4::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exclude_if_vector_in_false_set_4::exec_static);
}

static* function < Function*pred_add_necessary_functions_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_add_necessary_functions_5__1(mach));
}

static* function < Function*pred_add_necessary_functions_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var5->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_add_necessary_functions_6::exec_static);
}

static* function < Function*pred_add_necessary_functions_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_add_necessary_functions_6__1(mach));
}

static* function < Function*pred_add_necessary_functions_6::(PrologMachine*) {
	mach::FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_add_necessary_functions_6::(PrologMachine*) {
	mach::FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var7;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(nand::s32, { var2->Deref(), var3->Deref(), var4->Deref(), var7->Deref(), nand::s42, var8, F(nand::s0, &tempVar, F(nand::s28, { var7->Deref(), var9, F(nand::s41, { var4->Deref(), F(nand::s30, { var3->Deref(), var9->Deref(), F(nand::s5, { var8->Deref(), Const::Nil }), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil }), var2->Deref(), var10, var11, F(nand::s30, { var1->Deref(), var10->Deref(), var12, F(nand::s67, { var10->Deref(), var11->Deref(), var12->Deref(), var8->Deref(), var10->Deref(), var13, F(nand::s37, var14, F(nand::s2, { var3->Deref(), nand::posint1 }), F(nand::s37, var15, F(nand::s2, { var1->Deref(), nand::posint1 }), F(nand::s11, { var15->Deref(), var2->Deref(), var14->Deref(), var13->Deref(), var5->Deref(), var6->Deref(), continuation }))) }) }) }) })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_3::exec_static);
}

static* function < Function*pred_add_necessary_functions_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
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
	local_aregs[0] = var7;
	local_aregs[1] = F(nand::s2, { var1->Deref(), nand::posint1 });
	local_aregs[2] = F(nand::s11, { var7->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_new_function_CIs_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_new_function_CIs_5__1(mach));
}

static* function < Function*pred_new_function_CIs_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s30, var2, var3, var4, var5, var6, var7, var8, var9)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(nand::s5, var11, var12)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var11->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var10->Deref();
	local_aregs[4] = var12->Deref();
	local_aregs[5] = Const::Nil;
	local_aregs[6] = var13;
	local_aregs[7] = F(nand::s65, F(nand::s30, { var2->Deref(), var3->Deref(), var4->Deref(), var13->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref() }), var11->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_new_function_CIs_7::exec_static);
}

static* function < Function*pred_new_function_CIs_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_new_function_CIs_7__1(mach));
}

static* function < Function*pred_new_function_CIs_7::(PrologMachine*) {
	mach::FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
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
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_new_function_CIs_7::(PrologMachine*) {
	mach::FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg0)->Unify(F(nand::s5, F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8), var9)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var11))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(F(nand::s5, F(nand::s30, { var1->Deref(), var2->Deref(), var3->Deref(), var13, var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref() }), var14)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var15))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var16))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var11->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = Const::Nil;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(nand::s0, &tempVar, F(nand::s45, F(nand::s4, F(nand::s9, { var1->Deref(), var12->Deref() }), F(nand::s56, { var4->Deref(), F(nand::s5, { var10->Deref(), Const::Nil }), var13->Deref() })), F(nand::s8, { var13->Deref(), var4->Deref() }), F(nand::s41, { var9->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), var14->Deref(), F(nand::s5, { var1->Deref(), var15->Deref() }), var16->Deref(), continuation })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_set_intersection_3::exec_static);
}

static* function < Function*pred_new_function_CIs_7::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[7];
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
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
	if(!((areg4)->Unify(F(nand::s5, { var1->Deref(), var6 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_new_function_CIs_7::exec_static);
}

static* function < Function*pred_function_type_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_function_type_6__1(mach));
}

static* function < Function*pred_function_type_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
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
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var7;
	local_aregs[2] = F(nand::s50, { var7->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), nand::s21, nand::posint0, nand::s42, nand::posint999, var8, var6->Deref(), var5->Deref(), var9, continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_true_set_2::exec_static);
}

static* function < Function*pred_test_bounds_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_test_bounds_3__1(mach));
}

static* function < Function*pred_test_bounds_3::(PrologMachine*) {
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
	local_aregs[0] = nand::s13;
	local_aregs[1] = var4;
	local_aregs[2] = F(nand::s58, { var2->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_access_2::exec_static);
}

static* function < Function*pred_update_bounds_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_update_bounds_3__1(mach));
}

static* function < Function*pred_update_bounds_3::(PrologMachine*) {
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
	local_aregs[0] = nand::s13;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_set_2::exec_static);
}

static* function < Function*pred_set_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_set_2__1(mach));
}

static* function < Function*pred_set_2::(PrologMachine*) {
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
	local_aregs[0] = F(nand::s4, F(nand::s48, { var1->Deref(), var3, var4 }), F(nand::s22, { var4->Deref() }));
	local_aregs[1] = nand::s62;
	local_aregs[2] = F(nand::s47, { var1->Deref(), var2->Deref(), var5, continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_access_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_access_2__1(mach));
}

static* function < Function*pred_access_2::(PrologMachine*) {
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
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_recorded_3::exec_static);
}

static* function < Function*pred_write_gates_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_gates_1__1(mach));
}

static* function < Function*pred_write_gates_1::(PrologMachine*) {
	mach::FillAlternative(pred_write_gates_1::exec_pred_write_gates_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_write_gates_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = F(nand::s71, nand::s33, F(nand::s71, { var3->Deref(), F(nand::s71, nand::s1, F(nand::s34, { var1->Deref(), var4, F(nand::s71, { var4->Deref(), F(nand::s43, F(nand::s72, { var2->Deref(), continuation })) }) })) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_number_2::exec_static);
}

static* function < Function*pred_function_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_function_3__1(mach));
}

static* function < Function*pred_function_3::(PrologMachine*) {
	mach::FillAlternative(pred_function_3::exec_pred_function_3__2);
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
	if(!((areg1)->Unify(F(nand::s5, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(nand::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_number_2::exec_static);
}

static* function < Function*pred_function_3::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(nand::s5, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_function_3::exec_static);
}

static* function < Function*pred_function_number_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_function_number_2__1(mach));
}

static* function < Function*pred_function_number_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
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

static* function < Function*pred_true_set_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_true_set_2__1(mach));
}

static* function < Function*pred_true_set_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
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

static* function < Function*pred_false_set_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_false_set_2__1(mach));
}

static* function < Function*pred_false_set_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_conceivable_inputs_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_conceivable_inputs_2__1(mach));
}

static* function < Function*pred_conceivable_inputs_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_immediate_predecessors_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_immediate_predecessors_2__1(mach));
}

static* function < Function*pred_immediate_predecessors_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_immediate_successors_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_immediate_successors_2__1(mach));
}

static* function < Function*pred_immediate_successors_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var6->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_predecessors_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_predecessors_2__1(mach));
}

static* function < Function*pred_predecessors_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var7->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_successors_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_successors_2__1(mach));
}

static* function < Function*pred_successors_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(nand::s30, var1, var2, var3, var4, var5, var6, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var8->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_set_union_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_set_union_3__1(mach));
}

static* function < Function*pred_set_union_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_union_3::exec_pred_set_union_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
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

static* function < Function*pred_set_union_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_union_3::exec_pred_set_union_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_set_union_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_union_3::exec_pred_set_union_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_set_union_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_union_3::exec_pred_set_union_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_set_union_3::exec_static);
}

static* function < Function*pred_set_union_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_union_3::exec_pred_set_union_3__6);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = F(nand::s56, { var2->Deref(), F(nand::s5, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_set_union_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var3->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(nand::s56, F(nand::s5, { var1->Deref(), var2->Deref() }), var4->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_set_intersection_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_set_intersection_3__1(mach));
}

static* function < Function*pred_set_intersection_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
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

static* function < Function*pred_set_intersection_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var1, var2)))) {
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

static* function < Function*pred_set_intersection_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
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

static* function < Function*pred_set_intersection_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_set_intersection_3::exec_static);
}

static* function < Function*pred_set_intersection_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__6);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = F(nand::s53, { var2->Deref(), F(nand::s5, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_set_intersection_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(nand::s53, F(nand::s5, { var1->Deref(), var2->Deref() }), var4->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_set_difference_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_set_difference_3__1(mach));
}

static* function < Function*pred_set_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
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

static* function < Function*pred_set_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var1, var2)))) {
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

static* function < Function*pred_set_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_set_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_set_difference_3::exec_static);
}

static* function < Function*pred_set_difference_3::(PrologMachine*) {
	mach::FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__6);
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nand::s5, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = F(nand::s52, { var2->Deref(), F(nand::s5, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_set_difference_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(nand::s52, F(nand::s5, { var1->Deref(), var2->Deref() }), var4->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_set_subset_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_set_subset_2__1(mach));
}

static* function < Function*pred_set_subset_2::(PrologMachine*) {
	mach::FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__2);
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

static* function < Function*pred_set_subset_2::(PrologMachine*) {
	mach::FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_set_subset_2::exec_static);
}

static* function < Function*pred_set_subset_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nand::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(nand::s55, F(nand::s5, { var1->Deref(), var2->Deref() }), var4->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_set_member_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_set_member_2__1(mach));
}

static* function < Function*pred_set_member_2::(PrologMachine*) {
	mach::FillAlternative(pred_set_member_2::exec_pred_set_member_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(nand::s5, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_set_member_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(nand::s5, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(nand::s54, { var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}
