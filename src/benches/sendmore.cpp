using namespace std;

#include "sendmore.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* sendmore::s0 = Const::Intern("cut");
Const* sendmore::s1 = Const::Intern("+");
Const* sendmore::s2 = Const::Intern(",");
Const* sendmore::s3 = Const::Intern("-");
Const* sendmore::s4 = Const::Intern("->");
Const* sendmore::s5 = Const::Intern(".");
Const* sendmore::s6 = Const::Intern(":-");
Const* sendmore::s7 = Const::Intern("<");
Const* sendmore::s8 = Const::Intern("=");
Const* sendmore::s9 = Const::Intern("=\\=");
Const* sendmore::s10 = Const::Intern("call");
Const* sendmore::s11 = Const::Intern("digit");
Const* sendmore::s12 = Const::Intern("fail");
Const* sendmore::s13 = Const::Intern("is");
Const* sendmore::s14 = Const::Intern("leftdigit");
Const* sendmore::s15 = Const::Intern("or");
Const* sendmore::s16 = Const::Intern("sumdigit");
Const* sendmore::s17 = Const::Intern("top");
Int* sendmore::posint0 = Term::Number(0);
Int* sendmore::posint1 = Term::Number(1);
Int* sendmore::posint2 = Term::Number(2);
Int* sendmore::posint3 = Term::Number(3);
Int* sendmore::posint4 = Term::Number(4);
Int* sendmore::posint5 = Term::Number(5);
Int* sendmore::posint6 = Term::Number(6);
Int* sendmore::posint7 = Term::Number(7);
Int* sendmore::posint8 = Term::Number(8);
Int* sendmore::posint9 = Term::Number(9);
Int* sendmore::posint10 = Term::Number(10);

static* function < Function*pred_top_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_top_0__1(mach));
}

static* function < Function*pred_top_0::(PrologMachine*) {
	mach::FillAlternative(pred_top_0::exec_pred_top_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
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
	local_aregs[1] = F(sendmore::s11, var2, F(sendmore::s9, { var1->Deref(), var2->Deref(), F(sendmore::s16, sendmore::posint0, var1->Deref(), var2->Deref(), var3, var4, F(sendmore::s11, var5, F(sendmore::s9, { var5->Deref(), var3->Deref(), F(sendmore::s9, { var5->Deref(), var2->Deref(), F(sendmore::s9, { var5->Deref(), var1->Deref(), F(sendmore::s11, var6, F(sendmore::s9, { var6->Deref(), var5->Deref(), F(sendmore::s9, { var6->Deref(), var3->Deref(), F(sendmore::s9, { var6->Deref(), var2->Deref(), F(sendmore::s9, { var6->Deref(), var1->Deref(), F(sendmore::s16, { var4->Deref(), var5->Deref(), var6->Deref(), var2->Deref(), var7, F(sendmore::s11, var8, F(sendmore::s9, { var8->Deref(), var6->Deref(), F(sendmore::s9, { var8->Deref(), var5->Deref(), F(sendmore::s9, { var8->Deref(), var3->Deref(), F(sendmore::s9, { var8->Deref(), var2->Deref(), F(sendmore::s9, { var8->Deref(), var1->Deref(), F(sendmore::s16, { var7->Deref(), var2->Deref(), var8->Deref(), var5->Deref(), var9, F(sendmore::s14, var10, F(sendmore::s9, { var10->Deref(), var8->Deref(), F(sendmore::s9, { var10->Deref(), var6->Deref(), F(sendmore::s9, { var10->Deref(), var5->Deref(), F(sendmore::s9, { var10->Deref(), var3->Deref(), F(sendmore::s9, { var10->Deref(), var2->Deref(), F(sendmore::s9, { var10->Deref(), var1->Deref(), F(sendmore::s14, var11, F(sendmore::s9, { var11->Deref(), var10->Deref(), F(sendmore::s9, { var11->Deref(), var8->Deref(), F(sendmore::s9, { var11->Deref(), var6->Deref(), F(sendmore::s9, { var11->Deref(), var5->Deref(), F(sendmore::s9, { var11->Deref(), var3->Deref(), F(sendmore::s9, { var11->Deref(), var2->Deref(), F(sendmore::s9, { var11->Deref(), var1->Deref(), F(sendmore::s16, { var9->Deref(), var10->Deref(), var11->Deref(), var8->Deref(), var11->Deref(), F(sendmore::s12, { continuation }) }) }) }) }) }) }) }) })) }) }) }) }) }) })) }) }) }) }) }) })) }) }) }) }) })) }) }) }))) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_digit_1::exec_static);
}

static* function < Function*pred_top_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sumdigit_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sumdigit_5__1(mach));
}

static* function < Function*pred_sumdigit_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
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
	local_aregs[0] = var6;
	local_aregs[1] = F(sendmore::s1, F(sendmore::s1, { var1->Deref(), var2->Deref() }), var3->Deref());
	local_aregs[2] = F(sendmore::s15, F(sendmore::s4, F(sendmore::s7, { var6->Deref(), sendmore::posint10 }), F(sendmore::s2, F(sendmore::s8, { var4->Deref(), var6->Deref() }), F(sendmore::s8, { var5->Deref(), sendmore::posint0 }))), F(sendmore::s2, F(sendmore::s13, { var4->Deref(), F(sendmore::s3, { var6->Deref(), sendmore::posint10 }) }), F(sendmore::s8, { var5->Deref(), sendmore::posint1 })), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_digit_1__1(mach));
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::FillAlternative(pred_digit_1::exec_pred_digit_1__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_digit_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_leftdigit_1__1(mach));
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_leftdigit_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sendmore::posint9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
