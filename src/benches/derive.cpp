using namespace std;

#include "derive.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "ops8.h"
#include "divide10.h"
#include "log10.h"
#include "times10.h"

Const* derive::s0 = Const::Intern("cut");
Const* derive::s1 = Const::Intern("*");
Const* derive::s2 = Const::Intern("+");
Const* derive::s3 = Const::Intern("-");
Const* derive::s4 = Const::Intern(".");
Const* derive::s5 = Const::Intern("/");
Const* derive::s6 = Const::Intern(":-");
Const* derive::s7 = Const::Intern("^");
Const* derive::s8 = Const::Intern("call");
Const* derive::s9 = Const::Intern("cut");
Const* derive::s10 = Const::Intern("d");
Const* derive::s11 = Const::Intern("divide10");
Const* derive::s12 = Const::Intern("exp");
Const* derive::s13 = Const::Intern("integer");
Const* derive::s14 = Const::Intern("is");
Const* derive::s15 = Const::Intern("log");
Const* derive::s16 = Const::Intern("log10");
Const* derive::s17 = Const::Intern("ops8");
Const* derive::s18 = Const::Intern("top");
Const* derive::s19 = Const::Intern("x");
Int* derive::posint0 = Term::Number(0);
Int* derive::posint1 = Term::Number(1);
Int* derive::posint2 = Term::Number(2);
Int* derive::posint3 = Term::Number(3);

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
	local_aregs[0] = F(derive::s16, F(derive::s11, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ops8_0::exec_static);
}

static* function < Function*pred_ops8_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ops8_0__1(mach));
}

static* function < Function*pred_ops8_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(derive::s1, F(derive::s2, derive::s19, derive::posint1), F(derive::s1, F(derive::s2, F(derive::s7, derive::s19, derive::posint2), derive::posint2), F(derive::s2, F(derive::s7, derive::s19, derive::posint3), derive::posint3)));
	local_aregs[1] = derive::s19;
	local_aregs[2] = var1;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_d_3::exec_static);
}

static* function < Function*pred_log10_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_log10_0__1(mach));
}

static* function < Function*pred_log10_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(derive::s15, F(derive::s15, F(derive::s15, F(derive::s15, F(derive::s15, F(derive::s15, F(derive::s15, F(derive::s15, F(derive::s15, F(derive::s15, derive::s19))))))))));
	local_aregs[1] = derive::s19;
	local_aregs[2] = var1;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_d_3::exec_static);
}

static* function < Function*pred_divide10_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_divide10_0__1(mach));
}

static* function < Function*pred_divide10_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(derive::s5, F(derive::s5, F(derive::s5, F(derive::s5, F(derive::s5, F(derive::s5, F(derive::s5, F(derive::s5, F(derive::s5, derive::s19, derive::s19), derive::s19), derive::s19), derive::s19), derive::s19), derive::s19), derive::s19), derive::s19), derive::s19);
	local_aregs[1] = derive::s19;
	local_aregs[2] = var1;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_d_3::exec_static);
}

static* function < Function*pred_d_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_d_3__1(mach));
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__2);
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
	if(!((areg0)->Unify(F(derive::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s2, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(derive::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__3);
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
	if(!((areg0)->Unify(F(derive::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(derive::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__4);
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
	if(!((areg0)->Unify(F(derive::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s2, F(derive::s1, var4, var2->Deref()), F(derive::s1, { var1->Deref(), var5 }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(derive::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__5);
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
	if(!((areg0)->Unify(F(derive::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s5, F(derive::s3, F(derive::s1, var4, var2->Deref()), F(derive::s1, { var1->Deref(), var5 })), F(derive::s7, { var2->Deref(), derive::posint2 }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(derive::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__6);
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
	if(!((areg0)->Unify(F(derive::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s1, F(derive::s1, var4, var2->Deref()), F(derive::s7, { var1->Deref(), var5 }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s13, { var2->Deref(), F(derive::s14, { var5->Deref(), F(derive::s3, { var2->Deref(), derive::posint1 }), F(derive::s10, { var1->Deref(), var3->Deref(), var4->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(derive::s3, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s3, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s10, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(derive::s12, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s1, F(derive::s12, { var1->Deref() }), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s10, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(derive::s15, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(derive::s5, var3, var1->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(derive::s10, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
	mach::FillAlternative(pred_d_3::exec_pred_d_3__10);
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
	if(!((areg2)->Unify(derive::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_d_3::(PrologMachine*) {
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
	if(!((areg2)->Unify(derive::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
