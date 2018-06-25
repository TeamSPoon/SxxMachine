using namespace std;

#include "prover.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* prover::s0 = Const::Intern("cut");
Const* prover::s1 = Const::Intern("#");
Const* prover::s2 = Const::Intern("&");
Const* prover::s3 = Const::Intern("+");
Const* prover::s4 = Const::Intern("-");
Const* prover::s5 = Const::Intern(".");
Const* prover::s6 = Const::Intern(":-");
Const* prover::s7 = Const::Intern("a");
Const* prover::s8 = Const::Intern("add_conjunction");
Const* prover::s9 = Const::Intern("b");
Const* prover::s10 = Const::Intern("c");
Const* prover::s11 = Const::Intern("call");
Const* prover::s12 = Const::Intern("cut");
Const* prover::s13 = Const::Intern("expand");
Const* prover::s14 = Const::Intern("extend");
Const* prover::s15 = Const::Intern("fail");
Const* prover::s16 = Const::Intern("fs");
Const* prover::s17 = Const::Intern("fx");
Const* prover::s18 = Const::Intern("implies");
Const* prover::s19 = Const::Intern("includes");
Const* prover::s20 = Const::Intern("on_load_prover");
Const* prover::s21 = Const::Intern("op");
Const* prover::s22 = Const::Intern("opposite");
Const* prover::s23 = Const::Intern("problem");
Const* prover::s24 = Const::Intern("prover");
Const* prover::s25 = Const::Intern("refute");
Const* prover::s26 = Const::Intern("refuted");
Const* prover::s27 = Const::Intern("to_be");
Const* prover::s28 = Const::Intern("top");
Const* prover::s29 = Const::Intern("unify");
Const* prover::s30 = Const::Intern("write");
Const* prover::s31 = Const::Intern("xfy");
Int* prover::posint1 = Term::Number(1);
Int* prover::posint2 = Term::Number(2);
Int* prover::posint3 = Term::Number(3);
Int* prover::posint4 = Term::Number(4);
Int* prover::posint5 = Term::Number(5);
Int* prover::posint6 = Term::Number(6);
Int* prover::posint7 = Term::Number(7);
Int* prover::posint8 = Term::Number(8);
Int* prover::posint9 = Term::Number(9);
Int* prover::posint10 = Term::Number(10);
Int* prover::posint500 = Term::Number(500);
Int* prover::posint850 = Term::Number(850);
Int* prover::posint950 = Term::Number(950);

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
	return static_cast<function<Function*(PrologMachine*)> >(pred_prover_0::exec_static);
}

static* function < Function*pred_on_load_prover_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_on_load_prover_0__1(mach));
}

static* function < Function*pred_on_load_prover_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(prover::s21, prover::posint950, prover::s31, prover::s1);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_prover_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(prover::s21, prover::posint850, prover::s31, prover::s2);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_prover_0::(PrologMachine*) {
	mach::FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(prover::s21, prover::posint500, prover::s17, prover::s3);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_on_load_prover_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(prover::s21, prover::posint500, prover::s17, prover::s4);
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_prover_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_prover_0__1(mach));
}

static* function < Function*pred_prover_0::(PrologMachine*) {
	mach::FillAlternative(pred_prover_0::exec_pred_prover_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = F(prover::s18, { var2->Deref(), var3->Deref(), F(prover::s15, { continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_problem_3::exec_static);
}

static* function < Function*pred_prover_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_problem_3__1(mach));
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s4, prover::s7)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s3, prover::s7)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s3, prover::s7)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s2, F(prover::s4, prover::s7), F(prover::s4, prover::s7))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s4, prover::s7)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s1, F(prover::s3, prover::s27), F(prover::s4, prover::s27))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s2, F(prover::s4, prover::s7), F(prover::s4, prover::s7))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s4, prover::s7)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s4, prover::s7)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s1, F(prover::s3, prover::s9), F(prover::s4, prover::s7))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s2, F(prover::s4, prover::s7), F(prover::s4, prover::s9))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s2, F(prover::s4, prover::s9), F(prover::s4, prover::s7))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s4, prover::s7)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s1, F(prover::s4, prover::s9), F(prover::s2, F(prover::s3, prover::s9), F(prover::s4, prover::s7)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s1, F(prover::s4, prover::s7), F(prover::s1, F(prover::s4, prover::s9), F(prover::s3, prover::s10)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s1, F(prover::s4, prover::s9), F(prover::s1, F(prover::s4, prover::s7), F(prover::s3, prover::s10)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::FillAlternative(pred_problem_3::exec_pred_problem_3__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint9))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s1, F(prover::s4, prover::s7), F(prover::s3, prover::s9))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s1, F(prover::s2, F(prover::s3, prover::s9), F(prover::s4, prover::s10)), F(prover::s1, F(prover::s4, prover::s7), F(prover::s3, prover::s10)))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_problem_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::posint10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s2, F(prover::s1, F(prover::s4, prover::s7), F(prover::s3, prover::s10)), F(prover::s1, F(prover::s4, prover::s9), F(prover::s3, prover::s10)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s1, F(prover::s2, F(prover::s4, prover::s7), F(prover::s4, prover::s9)), F(prover::s3, prover::s10))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_implies_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_implies_2__1(mach));
}

static* function < Function*pred_implies_2::(PrologMachine*) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = F(prover::s8, { var1->Deref(), var3->Deref(), F(prover::s16, { Const::Nil, Const::Nil, Const::Nil, Const::Nil }), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_opposite_2::exec_static);
}

static* function < Function*pred_opposite_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_opposite_2__1(mach));
}

static* function < Function*pred_opposite_2::(PrologMachine*) {
	mach::FillAlternative(pred_opposite_2::exec_pred_opposite_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(prover::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s1, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(prover::s22, { var1->Deref(), var3->Deref(), F(prover::s22, { var2->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_opposite_2::(PrologMachine*) {
	mach::FillAlternative(pred_opposite_2::exec_pred_opposite_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(prover::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s2, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(prover::s22, { var1->Deref(), var3->Deref(), F(prover::s22, { var2->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_opposite_2::(PrologMachine*) {
	mach::FillAlternative(pred_opposite_2::exec_pred_opposite_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(prover::s3, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s4, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_opposite_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(prover::s4, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s3, { var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_add_conjunction_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_add_conjunction_3__1(mach));
}

static* function < Function*pred_add_conjunction_3::(PrologMachine*) {
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
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = F(prover::s13, { var2->Deref(), var4->Deref(), var5, F(prover::s25, { var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_expand_3::exec_static);
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_expand_3__1(mach));
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	mach::FillAlternative(pred_expand_3::exec_pred_expand_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(prover::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(prover::s26))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	mach::FillAlternative(pred_expand_3::exec_pred_expand_3__3);
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
	if(!((areg0)->Unify(F(prover::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s16, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(prover::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(prover::s2, { var1->Deref(), var2->Deref() });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(prover::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_includes_2::exec_static);
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	mach::FillAlternative(pred_expand_3::exec_pred_expand_3__4);
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
	if(!((areg0)->Unify(F(prover::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s16, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(prover::s16, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = F(prover::s2, { var1->Deref(), var2->Deref() });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(prover::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_includes_2::exec_static);
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	mach::FillAlternative(pred_expand_3::exec_pred_expand_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(prover::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s16, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(prover::s13, { var1->Deref(), F(prover::s16, { var3->Deref(), F(prover::s5, F(prover::s2, { var1->Deref(), var2->Deref() }), var4->Deref()), var5->Deref(), var6->Deref() }), var8, F(prover::s13, { var2->Deref(), var8->Deref(), var7->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	mach::FillAlternative(pred_expand_3::exec_pred_expand_3__6);
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
	if(!((areg0)->Unify(F(prover::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s16, var3, var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(prover::s22, F(prover::s1, { var1->Deref(), var2->Deref() }), var8, F(prover::s14, { var8->Deref(), var3->Deref(), var4->Deref(), var9, F(prover::s16, { var9->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }), var7->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	mach::FillAlternative(pred_expand_3::exec_pred_expand_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(prover::s3, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s16, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(prover::s14, { var1->Deref(), var4->Deref(), var5->Deref(), var7, F(prover::s16, { var2->Deref(), var3->Deref(), var7->Deref(), var5->Deref() }), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_expand_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(F(prover::s4, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(prover::s16, var2, var3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var7;
	local_aregs[4] = F(prover::s16, { var2->Deref(), var3->Deref(), var4->Deref(), var7->Deref() });
	local_aregs[5] = var6->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_extend_6::exec_static);
}

static* function < Function*pred_includes_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_includes_2__1(mach));
}

static* function < Function*pred_includes_2::(PrologMachine*) {
	mach::FillAlternative(pred_includes_2::exec_pred_includes_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(prover::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_includes_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(prover::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_includes_2::exec_static);
}

static* function < Function*pred_extend_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_extend_6__1(mach));
}

static* function < Function*pred_extend_6::(PrologMachine*) {
	mach::FillAlternative(pred_extend_6::exec_pred_extend_6__2);
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
	if(!((areg5)->Unify(prover::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(prover::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_includes_2::exec_static);
}

static* function < Function*pred_extend_6::(PrologMachine*) {
	mach::FillAlternative(pred_extend_6::exec_pred_extend_6__3);
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(prover::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_includes_2::exec_static);
}

static* function < Function*pred_extend_6::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(prover::s5, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_refute_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_refute_1__1(mach));
}

static* function < Function*pred_refute_1::(PrologMachine*) {
	mach::FillAlternative(pred_refute_1::exec_pred_refute_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(prover::s26))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_refute_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
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
	if(!((areg0)->Unify(F(prover::s16, F(prover::s5, F(prover::s2, var1, var2), var3), var4, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var7;
	local_aregs[2] = F(prover::s22, { var2->Deref(), var8, F(prover::s29, F(prover::s16, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }), var9, F(prover::s8, { var7->Deref(), var2->Deref(), var9->Deref(), F(prover::s8, { var7->Deref(), var8->Deref(), var9->Deref(), F(prover::s8, { var1->Deref(), var8->Deref(), var9->Deref(), continuation }) }) })) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_opposite_2::exec_static);
}
