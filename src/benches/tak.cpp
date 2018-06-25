using namespace std;

#include "tak.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* tak::s0 = Const::Intern("cut");
Const* tak::s1 = Const::Intern("-");
Const* tak::s2 = Const::Intern(".");
Const* tak::s3 = Const::Intern(":-");
Const* tak::s4 = Const::Intern("is");
Const* tak::s5 = Const::Intern("smallerorequal");
Const* tak::s6 = Const::Intern("smallerthan");
Const* tak::s7 = Const::Intern("tak");
Const* tak::s8 = Const::Intern("top");
Const* tak::s9 = Const::Intern("unify");
Int* tak::posint1 = Term::Number(1);
Int* tak::posint6 = Term::Number(6);
Int* tak::posint12 = Term::Number(12);
Int* tak::posint18 = Term::Number(18);

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
	return static_cast<function<Function*(PrologMachine*)> >(pred_tak_0::exec_static);
}

static* function < Function*pred_tak_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tak_0__1(mach));
}

static* function < Function*pred_tak_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = tak::posint18;
	local_aregs[1] = tak::posint12;
	local_aregs[2] = tak::posint6;
	local_aregs[3] = var1;
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_tak_4::exec_static);
}

static* function < Function*pred_tak_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_tak_4__1(mach));
}

static* function < Function*pred_tak_4::(PrologMachine*) {
	mach::FillAlternative(pred_tak_4::exec_pred_tak_4__2);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = F(tak::s9, { var4->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_tak_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(tak::s4, var5, F(tak::s1, { var1->Deref(), tak::posint1 }), F(tak::s7, { var5->Deref(), var2->Deref(), var3->Deref(), var6, F(tak::s4, var7, F(tak::s1, { var2->Deref(), tak::posint1 }), F(tak::s7, { var7->Deref(), var3->Deref(), var1->Deref(), var8, F(tak::s4, var9, F(tak::s1, { var3->Deref(), tak::posint1 }), F(tak::s7, { var9->Deref(), var1->Deref(), var2->Deref(), var10, F(tak::s7, { var6->Deref(), var8->Deref(), var10->Deref(), var4->Deref(), continuation }) })) })) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}
