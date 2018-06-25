using namespace std;

#include "mu.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"
#include "../bootlib/sxx_library.h"
#include "../compiler/sxx_compiler_gen_static.h"
#include "reducer.h"
#include "flatten.h"

Const* mu::s0 = Const::Intern("cut");
Const* mu::s1 = Const::Intern("-");
Const* mu::s2 = Const::Intern(".");
Const* mu::s3 = Const::Intern(":-");
Const* mu::s4 = Const::Intern("a");
Const* mu::s5 = Const::Intern("append");
Const* mu::s6 = Const::Intern("call");
Const* mu::s7 = Const::Intern("cut");
Const* mu::s8 = Const::Intern("i");
Const* mu::s9 = Const::Intern("is");
Const* mu::s10 = Const::Intern("m");
Const* mu::s11 = Const::Intern("mu");
Const* mu::s12 = Const::Intern("rule");
Const* mu::s13 = Const::Intern("rule1");
Const* mu::s14 = Const::Intern("rule2");
Const* mu::s15 = Const::Intern("rule3");
Const* mu::s16 = Const::Intern("rule4");
Const* mu::s17 = Const::Intern("smallerthan");
Const* mu::s18 = Const::Intern("theorem");
Const* mu::s19 = Const::Intern("top");
Const* mu::s20 = Const::Intern("u");
Int* mu::posint0 = Term::Number(0);
Int* mu::posint1 = Term::Number(1);
Int* mu::posint2 = Term::Number(2);
Int* mu::posint3 = Term::Number(3);
Int* mu::posint4 = Term::Number(4);
Int* mu::posint5 = Term::Number(5);

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
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_mu_0::exec_static);
}

static* function < Function*pred_mu_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_mu_0__1(mach));
}

static* function < Function*pred_mu_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(mu::s2, mu::s10, F(mu::s2, mu::s20, F(mu::s2, mu::s8, F(mu::s2, mu::s8, F(mu::s2, mu::s20, Const::Nil)))));
	local_aregs[1] = mu::posint5;
	local_aregs[2] = var1;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(mu::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_theorem_3::exec_static);
}

static* function < Function*pred_theorem_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_theorem_3__1(mach));
}

static* function < Function*pred_theorem_3::(PrologMachine*) {
	mach::FillAlternative(pred_theorem_3::exec_pred_theorem_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(mu::s2, mu::s10, F(mu::s2, mu::s8, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(mu::s2, F(mu::s2, mu::s4, F(mu::s2, mu::s10, F(mu::s2, mu::s8, Const::Nil))), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_theorem_3::(PrologMachine*) {
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
	if(!((areg2)->Unify(F(mu::s2, F(mu::s2, var3, var1->Deref()), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = mu::posint0;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = F(mu::s9, var5, F(mu::s1, { var2->Deref(), mu::posint1 }), F(mu::s18, var6, var5->Deref(), var4->Deref(), F(mu::s12, { var3->Deref(), var6->Deref(), var1->Deref(), continuation })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_rule_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rule_3__1(mach));
}

static* function < Function*pred_rule_3::(PrologMachine*) {
	mach::FillAlternative(pred_rule_3::exec_pred_rule_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(mu::posint1))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule1_2::exec_static);
}

static* function < Function*pred_rule_3::(PrologMachine*) {
	mach::FillAlternative(pred_rule_3::exec_pred_rule_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(mu::posint2))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule2_2::exec_static);
}

static* function < Function*pred_rule_3::(PrologMachine*) {
	mach::FillAlternative(pred_rule_3::exec_pred_rule_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(mu::posint3))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule3_2::exec_static);
}

static* function < Function*pred_rule_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(mu::posint4))) {
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
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule4_2::exec_static);
}

static* function < Function*pred_rule1_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rule1_2__1(mach));
}

static* function < Function*pred_rule1_2::(PrologMachine*) {
	mach::FillAlternative(pred_rule1_2::exec_pred_rule1_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(mu::s2, mu::s8, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(mu::s2, mu::s8, F(mu::s2, mu::s20, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rule1_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(mu::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(mu::s2, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule1_2::exec_static);
}

static* function < Function*pred_rule2_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rule2_2__1(mach));
}

static* function < Function*pred_rule2_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(mu::s2, mu::s10, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(mu::s2, mu::s10, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_append_3::exec_static);
}

static* function < Function*pred_rule3_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rule3_2__1(mach));
}

static* function < Function*pred_rule3_2::(PrologMachine*) {
	mach::FillAlternative(pred_rule3_2::exec_pred_rule3_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(mu::s2, mu::s8, F(mu::s2, mu::s8, F(mu::s2, mu::s8, var1)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(mu::s2, mu::s20, var1->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_rule3_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(mu::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(mu::s2, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule3_2::exec_static);
}

static* function < Function*pred_rule4_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rule4_2__1(mach));
}

static* function < Function*pred_rule4_2::(PrologMachine*) {
	mach::FillAlternative(pred_rule4_2::exec_pred_rule4_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(mu::s2, mu::s20, F(mu::s2, mu::s20, var1))))) {
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

static* function < Function*pred_rule4_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(mu::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(mu::s2, { var1->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule4_2::exec_static);
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
	if(!((areg0)->Unify(F(mu::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(mu::s2, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_append_3::exec_static);
}
