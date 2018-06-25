using namespace std;

#include "nreverse.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"

Const* nreverse::s0 = Const::Intern("cut");
Const* nreverse::s1 = Const::Intern(".");
Const* nreverse::s2 = Const::Intern(":-");
Const* nreverse::s3 = Const::Intern("call");
Const* nreverse::s4 = Const::Intern("concatenate");
Const* nreverse::s5 = Const::Intern("nreverse");
Const* nreverse::s6 = Const::Intern("top");
Int* nreverse::posint1 = Term::Number(1);
Int* nreverse::posint2 = Term::Number(2);
Int* nreverse::posint3 = Term::Number(3);
Int* nreverse::posint4 = Term::Number(4);
Int* nreverse::posint5 = Term::Number(5);
Int* nreverse::posint6 = Term::Number(6);
Int* nreverse::posint7 = Term::Number(7);
Int* nreverse::posint8 = Term::Number(8);
Int* nreverse::posint9 = Term::Number(9);
Int* nreverse::posint10 = Term::Number(10);
Int* nreverse::posint11 = Term::Number(11);
Int* nreverse::posint12 = Term::Number(12);
Int* nreverse::posint13 = Term::Number(13);
Int* nreverse::posint14 = Term::Number(14);
Int* nreverse::posint15 = Term::Number(15);
Int* nreverse::posint16 = Term::Number(16);
Int* nreverse::posint17 = Term::Number(17);
Int* nreverse::posint18 = Term::Number(18);
Int* nreverse::posint19 = Term::Number(19);
Int* nreverse::posint20 = Term::Number(20);
Int* nreverse::posint21 = Term::Number(21);
Int* nreverse::posint22 = Term::Number(22);
Int* nreverse::posint23 = Term::Number(23);
Int* nreverse::posint24 = Term::Number(24);
Int* nreverse::posint25 = Term::Number(25);
Int* nreverse::posint26 = Term::Number(26);
Int* nreverse::posint27 = Term::Number(27);
Int* nreverse::posint28 = Term::Number(28);
Int* nreverse::posint29 = Term::Number(29);
Int* nreverse::posint30 = Term::Number(30);

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
	return static_cast<function<Function*(PrologMachine*)> >(pred_nreverse_0::exec_static);
}

static* function < Function*pred_nreverse_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nreverse_0__1(mach));
}

static* function < Function*pred_nreverse_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(nreverse::s1, nreverse::posint1, F(nreverse::s1, nreverse::posint2, F(nreverse::s1, nreverse::posint3, F(nreverse::s1, nreverse::posint4, F(nreverse::s1, nreverse::posint5, F(nreverse::s1, nreverse::posint6, F(nreverse::s1, nreverse::posint7, F(nreverse::s1, nreverse::posint8, F(nreverse::s1, nreverse::posint9, F(nreverse::s1, nreverse::posint10, F(nreverse::s1, nreverse::posint11, F(nreverse::s1, nreverse::posint12, F(nreverse::s1, nreverse::posint13, F(nreverse::s1, nreverse::posint14, F(nreverse::s1, nreverse::posint15, F(nreverse::s1, nreverse::posint16, F(nreverse::s1, nreverse::posint17, F(nreverse::s1, nreverse::posint18, F(nreverse::s1, nreverse::posint19, F(nreverse::s1, nreverse::posint20, F(nreverse::s1, nreverse::posint21, F(nreverse::s1, nreverse::posint22, F(nreverse::s1, nreverse::posint23, F(nreverse::s1, nreverse::posint24, F(nreverse::s1, nreverse::posint25, F(nreverse::s1, nreverse::posint26, F(nreverse::s1, nreverse::posint27, F(nreverse::s1, nreverse::posint28, F(nreverse::s1, nreverse::posint29, F(nreverse::s1, nreverse::posint30, Const::Nil))))))))))))))))))))))))))))));
	local_aregs[1] = var1;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nreverse_2::exec_static);
}

static* function < Function*pred_nreverse_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nreverse_2__1(mach));
}

static* function < Function*pred_nreverse_2::(PrologMachine*) {
	mach::FillAlternative(pred_nreverse_2::exec_pred_nreverse_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nreverse::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4;
	local_aregs[2] = F(nreverse::s4, { var4->Deref(), F(nreverse::s1, { var1->Deref(), Const::Nil }), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nreverse_2::exec_static);
}

static* function < Function*pred_nreverse_2::(PrologMachine*) {
	mach::RemoveChoice();
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

static* function < Function*pred_concatenate_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_concatenate_3__1(mach));
}

static* function < Function*pred_concatenate_3::(PrologMachine*) {
	mach::FillAlternative(pred_concatenate_3::exec_pred_concatenate_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(nreverse::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(nreverse::s1, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_concatenate_3::exec_static);
}

static* function < Function*pred_concatenate_3::(PrologMachine*) {
	mach::RemoveChoice();
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
