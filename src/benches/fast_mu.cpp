using namespace std;

#include "fast_mu.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* fast_mu::s0 = Const::Intern("cut");
Const* fast_mu::s1 = Const::Intern("+");
Const* fast_mu::s2 = Const::Intern("-");
Const* fast_mu::s3 = Const::Intern("->");
Const* fast_mu::s4 = Const::Intern(".");
Const* fast_mu::s5 = Const::Intern("/\\");
Const* fast_mu::s6 = Const::Intern(":-");
Const* fast_mu::s7 = Const::Intern("=:=");
Const* fast_mu::s8 = Const::Intern(">>");
Const* fast_mu::s9 = Const::Intern("call");
Const* fast_mu::s10 = Const::Intern("derive");
Const* fast_mu::s11 = Const::Intern("derive2");
Const* fast_mu::s12 = Const::Intern("i");
Const* fast_mu::s13 = Const::Intern("is");
Const* fast_mu::s14 = Const::Intern("length");
Const* fast_mu::s15 = Const::Intern("lower_bound");
Const* fast_mu::s16 = Const::Intern("m");
Const* fast_mu::s17 = Const::Intern("or");
Const* fast_mu::s18 = Const::Intern("rule");
Const* fast_mu::s19 = Const::Intern("smallerorequal");
Const* fast_mu::s20 = Const::Intern("smallerthan");
Const* fast_mu::s21 = Const::Intern("theorem");
Const* fast_mu::s22 = Const::Intern("top");
Const* fast_mu::s23 = Const::Intern("u");
Int* fast_mu::posint0 = Term::Number(0);
Int* fast_mu::posint1 = Term::Number(1);
Int* fast_mu::posint2 = Term::Number(2);
Int* fast_mu::posint3 = Term::Number(3);
Int* fast_mu::posint4 = Term::Number(4);

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
	local_aregs[0] = F(fast_mu::s4, fast_mu::s16, F(fast_mu::s4, fast_mu::s23, F(fast_mu::s4, fast_mu::s12, F(fast_mu::s4, fast_mu::s12, F(fast_mu::s4, fast_mu::s23, Const::Nil)))));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_theorem_1::exec_static);
}

static* function < Function*pred_theorem_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_theorem_1__1(mach));
}

static* function < Function*pred_theorem_1::(PrologMachine*) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = F(fast_mu::s13, var3, F(fast_mu::s2, { var2->Deref(), fast_mu::posint1 }), F(fast_mu::s10, F(fast_mu::s4, fast_mu::s16, F(fast_mu::s4, fast_mu::s12, Const::Nil)), var1->Deref(), fast_mu::posint1, var3->Deref(), var4, fast_mu::posint0, continuation));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_length_2::exec_static);
}

static* function < Function*pred_derive_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_derive_6__1(mach));
}

static* function < Function*pred_derive_6::(PrologMachine*) {
	mach::FillAlternative(pred_derive_6::exec_pred_derive_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
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
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = fast_mu::posint1;
	local_aregs[5] = var5->Deref();
	local_aregs[6] = var6->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_derive2_7::exec_static);
}

static* function < Function*pred_derive_6::(PrologMachine*) {
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
	local_aregs[1] = F(fast_mu::s1, { var6->Deref(), fast_mu::posint1 });
	local_aregs[2] = F(fast_mu::s10, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_derive2_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_derive2_7__1(mach));
}

static* function < Function*pred_derive2_7::(PrologMachine*) {
	mach::FillAlternative(pred_derive2_7::exec_pred_derive2_7__2);
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
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_derive2_7::(PrologMachine*) {
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
	if(!((areg5)->Unify(F(fast_mu::s4, F(fast_mu::s18, var6, var7), var8)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var10;
	local_aregs[3] = F(fast_mu::s19, { var10->Deref(), var9->Deref(), F(fast_mu::s13, var11, F(fast_mu::s2, { var9->Deref(), fast_mu::posint1 }), F(fast_mu::s18, { var1->Deref(), var7->Deref(), var3->Deref(), var12, var5->Deref(), var13, var6->Deref(), F(fast_mu::s11, { var7->Deref(), var2->Deref(), var12->Deref(), var4->Deref(), var13->Deref(), var8->Deref(), var11->Deref(), continuation }) })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_lower_bound_3::exec_static);
}

static* function < Function*pred_rule_7::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(7);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rule_7__1(mach));
}

static* function < Function*pred_rule_7::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(fast_mu::s4, fast_mu::s16, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(fast_mu::s4, fast_mu::s16, var2)))) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = fast_mu::posint1;
	local_aregs[7] = fast_mu::s12;
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var8;
	local_aregs[10] = var8->Deref();
	local_aregs[11] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_rule_11::exec_static);
}

static* function < Function*pred_rule_11::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
	 * [11]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(11);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_rule_11__1(mach));
}

static* function < Function*pred_rule_11::(PrologMachine*) {
	mach::FillAlternative(pred_rule_11::exec_pred_rule_11__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
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
	if(!((areg0)->Unify(F(fast_mu::s4, fast_mu::s12, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(fast_mu::s4, fast_mu::s12, F(fast_mu::s4, fast_mu::s23, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(fast_mu::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = F(fast_mu::s13, { var4->Deref(), F(fast_mu::s2, { var5->Deref(), fast_mu::posint2 }), F(fast_mu::s13, { var2->Deref(), F(fast_mu::s1, { var1->Deref(), fast_mu::posint1 }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_rule_11::(PrologMachine*) {
	mach::FillAlternative(pred_rule_11::exec_pred_rule_11__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
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
	if(!((areg5)->Unify(fast_mu::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg6)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg7)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(fast_mu::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(fast_mu::s1, { var2->Deref(), var2->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_rule_11::(PrologMachine*) {
	mach::FillAlternative(pred_rule_11::exec_pred_rule_11__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
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
	if(!((areg0)->Unify(F(fast_mu::s4, fast_mu::s12, F(fast_mu::s4, fast_mu::s12, F(fast_mu::s4, fast_mu::s12, var1)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(fast_mu::s4, fast_mu::s23, var1->Deref())))) {
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
	if(!((areg8)->Unify(fast_mu::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = F(fast_mu::s13, { var5->Deref(), F(fast_mu::s2, { var6->Deref(), fast_mu::posint1 }), F(fast_mu::s13, { var3->Deref(), F(fast_mu::s2, { var2->Deref(), fast_mu::posint2 }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_rule_11::(PrologMachine*) {
	mach::FillAlternative(pred_rule_11::exec_pred_rule_11__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
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
	if(!((areg0)->Unify(F(fast_mu::s4, fast_mu::s23, F(fast_mu::s4, fast_mu::s23, var1))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
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
	if(!((areg7)->Unify(fast_mu::s12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg8)->Unify(fast_mu::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg9)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg10)->Unify(var8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = F(fast_mu::s13, { var5->Deref(), F(fast_mu::s2, { var6->Deref(), fast_mu::posint2 }), F(fast_mu::s13, { var3->Deref(), F(fast_mu::s2, { var2->Deref(), fast_mu::posint2 }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_rule_11::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[11];
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
	if(!((areg0)->Unify(F(fast_mu::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(fast_mu::s4, { var1->Deref(), var3 })))) {
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
	if(!((areg10)->Unify(F(fast_mu::s4, { var1->Deref(), var12 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var13;
	local_aregs[1] = F(fast_mu::s1, { var8->Deref(), fast_mu::posint1 });
	local_aregs[2] = F(fast_mu::s18, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var13->Deref(), var1->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_lower_bound_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_lower_bound_3__1(mach));
}

static* function < Function*pred_lower_bound_3::(PrologMachine*) {
	mach::FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__2);
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
	if(!((areg2)->Unify(fast_mu::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_lower_bound_3::(PrologMachine*) {
	mach::FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__3);
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
	if(!((areg2)->Unify(fast_mu::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_lower_bound_3::(PrologMachine*) {
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
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(fast_mu::s13, var4, F(fast_mu::s2, { var1->Deref(), var2->Deref() }), F(fast_mu::s13, var5, F(fast_mu::s5, { var4->Deref(), fast_mu::posint1 }), F(fast_mu::s17, F(fast_mu::s3, F(fast_mu::s7, { var5->Deref(), fast_mu::posint0 }), F(fast_mu::s13, { var3->Deref(), F(fast_mu::s8, { var4->Deref(), fast_mu::posint1 }) })), F(fast_mu::s13, { var3->Deref(), F(fast_mu::s1, F(fast_mu::s8, F(fast_mu::s1, { var4->Deref(), fast_mu::posint1 }), fast_mu::posint1), fast_mu::posint1) }), continuation)));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}
