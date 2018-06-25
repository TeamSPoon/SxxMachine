using namespace std;

#include "divide10.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "derive.h"
#include "log10.h"
#include "ops8.h"
#include "times10.h"

Const* divide10::s0 = Const::Intern("cut");
Const* divide10::s1 = Const::Intern("*");
Const* divide10::s2 = Const::Intern("+");
Const* divide10::s3 = Const::Intern("-");
Const* divide10::s4 = Const::Intern(".");
Const* divide10::s5 = Const::Intern("/");
Const* divide10::s6 = Const::Intern(":-");
Const* divide10::s7 = Const::Intern("^");
Const* divide10::s8 = Const::Intern("call");
Const* divide10::s9 = Const::Intern("cut");
Const* divide10::s10 = Const::Intern("d");
Const* divide10::s11 = Const::Intern("divide10");
Const* divide10::s12 = Const::Intern("exp");
Const* divide10::s13 = Const::Intern("integer");
Const* divide10::s14 = Const::Intern("is");
Const* divide10::s15 = Const::Intern("log");
Const* divide10::s16 = Const::Intern("top");
Const* divide10::s17 = Const::Intern("x");
Int* divide10::posint0 = Term::Number(0);
Int* divide10::posint1 = Term::Number(1);
Int* divide10::posint2 = Term::Number(2);

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
	return static_cast<function<Function*(PrologMachine*)> >(pred_divide10_0::exec_static);
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
	local_aregs[0] = F(divide10::s5, F(divide10::s5, F(divide10::s5, F(divide10::s5, F(divide10::s5, F(divide10::s5, F(divide10::s5, F(divide10::s5, F(divide10::s5, divide10::s17, divide10::s17), divide10::s17), divide10::s17), divide10::s17), divide10::s17), divide10::s17), divide10::s17), divide10::s17), divide10::s17);
	local_aregs[1] = divide10::s17;
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
	if(!((areg0)->Unify(F(divide10::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s2, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(divide10::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
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
	if(!((areg0)->Unify(F(divide10::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s3, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(divide10::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
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
	if(!((areg0)->Unify(F(divide10::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s2, F(divide10::s1, var4, var2->Deref()), F(divide10::s1, { var1->Deref(), var5 }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(divide10::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
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
	if(!((areg0)->Unify(F(divide10::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s5, F(divide10::s3, F(divide10::s1, var4, var2->Deref()), F(divide10::s1, { var1->Deref(), var5 })), F(divide10::s7, { var2->Deref(), divide10::posint2 }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s10, { var1->Deref(), var3->Deref(), var4->Deref(), F(divide10::s10, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
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
	if(!((areg0)->Unify(F(divide10::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s1, F(divide10::s1, var4, var2->Deref()), F(divide10::s7, { var1->Deref(), var5 }))))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s13, { var2->Deref(), F(divide10::s14, { var5->Deref(), F(divide10::s3, { var2->Deref(), divide10::posint1 }), F(divide10::s10, { var1->Deref(), var3->Deref(), var4->Deref(), continuation }) }) });
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
	if(!((areg0)->Unify(F(divide10::s3, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s3, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s10, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
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
	if(!((areg0)->Unify(F(divide10::s12, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s1, F(divide10::s12, { var1->Deref() }), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s10, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
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
	if(!((areg0)->Unify(F(divide10::s15, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(divide10::s5, var3, var1->Deref())))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(divide10::s10, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
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
	if(!((areg2)->Unify(divide10::posint1))) {
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
	if(!((areg2)->Unify(divide10::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
