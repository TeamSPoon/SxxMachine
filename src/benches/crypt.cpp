using namespace std;

#include "crypt.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* crypt::s0 = Const::Intern("cut");
Const* crypt::s1 = Const::Intern("*");
Const* crypt::s2 = Const::Intern("+");
Const* crypt::s3 = Const::Intern(".");
Const* crypt::s4 = Const::Intern("//");
Const* crypt::s5 = Const::Intern(":-");
Const* crypt::s6 = Const::Intern("call");
Const* crypt::s7 = Const::Intern("cut");
Const* crypt::s8 = Const::Intern("even");
Const* crypt::s9 = Const::Intern("is");
Const* crypt::s10 = Const::Intern("lefteven");
Const* crypt::s11 = Const::Intern("mod");
Const* crypt::s12 = Const::Intern("mult");
Const* crypt::s13 = Const::Intern("odd");
Const* crypt::s14 = Const::Intern("sum");
Const* crypt::s15 = Const::Intern("top");
Const* crypt::s16 = Const::Intern("zero");
Int* crypt::posint0 = Term::Number(0);
Int* crypt::posint1 = Term::Number(1);
Int* crypt::posint2 = Term::Number(2);
Int* crypt::posint3 = Term::Number(3);
Int* crypt::posint4 = Term::Number(4);
Int* crypt::posint5 = Term::Number(5);
Int* crypt::posint6 = Term::Number(6);
Int* crypt::posint7 = Term::Number(7);
Int* crypt::posint8 = Term::Number(8);
Int* crypt::posint9 = Term::Number(9);
Int* crypt::posint10 = Term::Number(10);

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
	local_aregs[0] = var1;
	local_aregs[1] = F(crypt::s8, var2, F(crypt::s8, var3, F(crypt::s8, var4, F(crypt::s12, F(crypt::s3, { var3->Deref(), F(crypt::s3, { var2->Deref(), F(crypt::s3, { var1->Deref(), Const::Nil }) }) }), var4->Deref(), F(crypt::s3, var5, F(crypt::s3, var6, F(crypt::s3, var7, F(crypt::s3, var8, var9)))), F(crypt::s10, { var8->Deref(), F(crypt::s13, { var7->Deref(), F(crypt::s8, { var6->Deref(), F(crypt::s8, { var5->Deref(), F(crypt::s16, { var9->Deref(), F(crypt::s10, var10, F(crypt::s12, F(crypt::s3, { var3->Deref(), F(crypt::s3, { var2->Deref(), F(crypt::s3, { var1->Deref(), Const::Nil }) }) }), var10->Deref(), F(crypt::s3, var11, F(crypt::s3, var12, F(crypt::s3, var13, var14))), F(crypt::s10, { var13->Deref(), F(crypt::s13, { var12->Deref(), F(crypt::s8, { var11->Deref(), F(crypt::s16, { var14->Deref(), F(crypt::s14, F(crypt::s3, { var5->Deref(), F(crypt::s3, { var6->Deref(), F(crypt::s3, { var7->Deref(), F(crypt::s3, { var8->Deref(), Const::Nil }) }) }) }), F(crypt::s3, crypt::posint0, F(crypt::s3, { var11->Deref(), F(crypt::s3, { var12->Deref(), F(crypt::s3, { var13->Deref(), Const::Nil }) }) })), F(crypt::s3, var15, F(crypt::s3, var16, F(crypt::s3, var17, F(crypt::s3, var18, var19)))), F(crypt::s13, { var18->Deref(), F(crypt::s13, { var17->Deref(), F(crypt::s8, { var16->Deref(), F(crypt::s8, { var15->Deref(), F(crypt::s16, { var19->Deref(), continuation }) }) }) }) })) }) }) }) }))) }) }) }) }) })))));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_odd_1::exec_static);
}

static* function < Function*pred_sum_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sum_3__1(mach));
}

static* function < Function*pred_sum_3::(PrologMachine*) {
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
	local_aregs[2] = crypt::posint0;
	local_aregs[3] = var3->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sum_4::exec_static);
}

static* function < Function*pred_sum_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sum_4__1(mach));
}

static* function < Function*pred_sum_4::(PrologMachine*) {
	mach::FillAlternative(pred_sum_4::exec_pred_sum_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
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
	if(!((areg0)->Unify(F(crypt::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(crypt::s3, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(crypt::s3, var6, var7)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(crypt::s9, var8, F(crypt::s2, F(crypt::s2, { var1->Deref(), var3->Deref() }), var5->Deref()), F(crypt::s9, { var6->Deref(), F(crypt::s11, { var8->Deref(), crypt::posint10 }), F(crypt::s9, var9, F(crypt::s4, { var8->Deref(), crypt::posint10 }), F(crypt::s14, { var2->Deref(), var4->Deref(), var9->Deref(), var7->Deref(), continuation })) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_sum_4::(PrologMachine*) {
	mach::FillAlternative(pred_sum_4::exec_pred_sum_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(crypt::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_sum_4::(PrologMachine*) {
	mach::FillAlternative(pred_sum_4::exec_pred_sum_4__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(crypt::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_sum_4::(PrologMachine*) {
	mach::FillAlternative(pred_sum_4::exec_pred_sum_4__5);
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
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(crypt::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(crypt::s3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(crypt::s9, var6, F(crypt::s2, { var1->Deref(), var3->Deref() }), F(crypt::s9, var7, F(crypt::s4, { var6->Deref(), crypt::posint10 }), F(crypt::s9, { var4->Deref(), F(crypt::s11, { var6->Deref(), crypt::posint10 }), F(crypt::s14, { Const::Nil, var2->Deref(), var7->Deref(), var5->Deref(), continuation }) })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_sum_4::(PrologMachine*) {
	mach::FillAlternative(pred_sum_4::exec_pred_sum_4__6);
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
	if(!((areg0)->Unify(F(crypt::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(crypt::s3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(crypt::s9, var6, F(crypt::s2, { var1->Deref(), var3->Deref() }), F(crypt::s9, var7, F(crypt::s4, { var6->Deref(), crypt::posint10 }), F(crypt::s9, { var4->Deref(), F(crypt::s11, { var6->Deref(), crypt::posint10 }), F(crypt::s14, { Const::Nil, var2->Deref(), var7->Deref(), var5->Deref(), continuation }) })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_sum_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(crypt::s3, { var1->Deref(), Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_mult_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_mult_3__1(mach));
}

static* function < Function*pred_mult_3::(PrologMachine*) {
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
	local_aregs[2] = crypt::posint0;
	local_aregs[3] = var3->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_mult_4::exec_static);
}

static* function < Function*pred_mult_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_mult_4__1(mach));
}

static* function < Function*pred_mult_4::(PrologMachine*) {
	mach::FillAlternative(pred_mult_4::exec_pred_mult_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
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
	if(!((areg0)->Unify(F(crypt::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(crypt::s3, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = F(crypt::s2, F(crypt::s1, { var1->Deref(), var3->Deref() }), var4->Deref());
	local_aregs[2] = F(crypt::s9, { var5->Deref(), F(crypt::s11, { var7->Deref(), crypt::posint10 }), F(crypt::s9, var8, F(crypt::s4, { var7->Deref(), crypt::posint10 }), F(crypt::s12, { var2->Deref(), var3->Deref(), var8->Deref(), var6->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_mult_4::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(crypt::s3, var3, F(crypt::s3, var4, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(crypt::s11, { var2->Deref(), crypt::posint10 });
	local_aregs[2] = F(crypt::s9, { var4->Deref(), F(crypt::s4, { var2->Deref(), crypt::posint10 }), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_zero_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_zero_1__1(mach));
}

static* function < Function*pred_zero_1::(PrologMachine*) {
	mach::FillAlternative(pred_zero_1::exec_pred_zero_1__2);
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

static* function < Function*pred_zero_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(crypt::s3, crypt::posint0, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_zero_1::exec_static);
}

static* function < Function*pred_odd_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_odd_1__1(mach));
}

static* function < Function*pred_odd_1::(PrologMachine*) {
	mach::FillAlternative(pred_odd_1::exec_pred_odd_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_odd_1::(PrologMachine*) {
	mach::FillAlternative(pred_odd_1::exec_pred_odd_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_odd_1::(PrologMachine*) {
	mach::FillAlternative(pred_odd_1::exec_pred_odd_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_odd_1::(PrologMachine*) {
	mach::FillAlternative(pred_odd_1::exec_pred_odd_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_odd_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_even_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_even_1__1(mach));
}

static* function < Function*pred_even_1::(PrologMachine*) {
	mach::FillAlternative(pred_even_1::exec_pred_even_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_even_1::(PrologMachine*) {
	mach::FillAlternative(pred_even_1::exec_pred_even_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_even_1::(PrologMachine*) {
	mach::FillAlternative(pred_even_1::exec_pred_even_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_even_1::(PrologMachine*) {
	mach::FillAlternative(pred_even_1::exec_pred_even_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_even_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_lefteven_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_lefteven_1__1(mach));
}

static* function < Function*pred_lefteven_1::(PrologMachine*) {
	mach::FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_lefteven_1::(PrologMachine*) {
	mach::FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_lefteven_1::(PrologMachine*) {
	mach::FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_lefteven_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
