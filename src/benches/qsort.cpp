using namespace std;

#include "qsort.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* qsort::s0 = Const::Intern("cut");
Const* qsort::s1 = Const::Intern(".");
Const* qsort::s2 = Const::Intern(":-");
Const* qsort::s3 = Const::Intern("call");
Const* qsort::s4 = Const::Intern("cut");
Const* qsort::s5 = Const::Intern("partition");
Const* qsort::s6 = Const::Intern("qsort");
Const* qsort::s7 = Const::Intern("smallerorequal");
Const* qsort::s8 = Const::Intern("top");
Int* qsort::posint0 = Term::Number(0);
Int* qsort::posint1 = Term::Number(1);
Int* qsort::posint2 = Term::Number(2);
Int* qsort::posint4 = Term::Number(4);
Int* qsort::posint6 = Term::Number(6);
Int* qsort::posint7 = Term::Number(7);
Int* qsort::posint8 = Term::Number(8);
Int* qsort::posint10 = Term::Number(10);
Int* qsort::posint11 = Term::Number(11);
Int* qsort::posint17 = Term::Number(17);
Int* qsort::posint18 = Term::Number(18);
Int* qsort::posint21 = Term::Number(21);
Int* qsort::posint27 = Term::Number(27);
Int* qsort::posint28 = Term::Number(28);
Int* qsort::posint29 = Term::Number(29);
Int* qsort::posint31 = Term::Number(31);
Int* qsort::posint32 = Term::Number(32);
Int* qsort::posint33 = Term::Number(33);
Int* qsort::posint37 = Term::Number(37);
Int* qsort::posint39 = Term::Number(39);
Int* qsort::posint40 = Term::Number(40);
Int* qsort::posint46 = Term::Number(46);
Int* qsort::posint47 = Term::Number(47);
Int* qsort::posint51 = Term::Number(51);
Int* qsort::posint53 = Term::Number(53);
Int* qsort::posint55 = Term::Number(55);
Int* qsort::posint59 = Term::Number(59);
Int* qsort::posint61 = Term::Number(61);
Int* qsort::posint63 = Term::Number(63);
Int* qsort::posint65 = Term::Number(65);
Int* qsort::posint66 = Term::Number(66);
Int* qsort::posint74 = Term::Number(74);
Int* qsort::posint75 = Term::Number(75);
Int* qsort::posint81 = Term::Number(81);
Int* qsort::posint82 = Term::Number(82);
Int* qsort::posint83 = Term::Number(83);
Int* qsort::posint85 = Term::Number(85);
Int* qsort::posint90 = Term::Number(90);
Int* qsort::posint92 = Term::Number(92);
Int* qsort::posint94 = Term::Number(94);
Int* qsort::posint95 = Term::Number(95);
Int* qsort::posint99 = Term::Number(99);

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
	return static_cast<function<Function*(PrologMachine*)> >(pred_qsort_0::exec_static);
}

static* function < Function*pred_qsort_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_qsort_0__1(mach));
}

static* function < Function*pred_qsort_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = F(qsort::s1, qsort::posint27, F(qsort::s1, qsort::posint74, F(qsort::s1, qsort::posint17, F(qsort::s1, qsort::posint33, F(qsort::s1, qsort::posint94, F(qsort::s1, qsort::posint18, F(qsort::s1, qsort::posint46, F(qsort::s1, qsort::posint83, F(qsort::s1, qsort::posint65, F(qsort::s1, qsort::posint2, F(qsort::s1, qsort::posint32, F(qsort::s1, qsort::posint53, F(qsort::s1, qsort::posint28, F(qsort::s1, qsort::posint85, F(qsort::s1, qsort::posint99, F(qsort::s1, qsort::posint47, F(qsort::s1, qsort::posint28, F(qsort::s1, qsort::posint82, F(qsort::s1, qsort::posint6, F(qsort::s1, qsort::posint11, F(qsort::s1, qsort::posint55, F(qsort::s1, qsort::posint29, F(qsort::s1, qsort::posint39, F(qsort::s1, qsort::posint81, F(qsort::s1, qsort::posint90, F(qsort::s1, qsort::posint37, F(qsort::s1, qsort::posint10, F(qsort::s1, qsort::posint0, F(qsort::s1, qsort::posint66, F(qsort::s1, qsort::posint51, F(qsort::s1, qsort::posint7, F(qsort::s1, qsort::posint21, F(qsort::s1, qsort::posint85, F(qsort::s1, qsort::posint27, F(qsort::s1, qsort::posint31, F(qsort::s1, qsort::posint63, F(qsort::s1, qsort::posint75, F(qsort::s1, qsort::posint4, F(qsort::s1, qsort::posint95, F(qsort::s1, qsort::posint99, F(qsort::s1, qsort::posint11, F(qsort::s1, qsort::posint28, F(qsort::s1, qsort::posint61, F(qsort::s1, qsort::posint74, F(qsort::s1, qsort::posint18, F(qsort::s1, qsort::posint92, F(qsort::s1, qsort::posint40, F(qsort::s1, qsort::posint53, F(qsort::s1, qsort::posint59, F(qsort::s1, qsort::posint8, Const::Nil))))))))))))))))))))))))))))))))))))))))))))))))));
	local_aregs[1] = var1;
	local_aregs[2] = Const::Nil;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_qsort_3::exec_static);
}

static* function < Function*pred_qsort_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_qsort_3__1(mach));
}

static* function < Function*pred_qsort_3::(PrologMachine*) {
	mach::FillAlternative(pred_qsort_3::exec_pred_qsort_3__2);
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
	if(!((areg0)->Unify(F(qsort::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = var6;
	local_aregs[4] = F(qsort::s6, { var6->Deref(), var7, var4->Deref(), F(qsort::s6, { var5->Deref(), var3->Deref(), F(qsort::s1, { var1->Deref(), var7->Deref() }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_partition_4::exec_static);
}

static* function < Function*pred_qsort_3::(PrologMachine*) {
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

static* function < Function*pred_partition_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_partition_4__1(mach));
}

static* function < Function*pred_partition_4::(PrologMachine*) {
	mach::FillAlternative(pred_partition_4::exec_pred_partition_4__2);
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
	if(!((areg0)->Unify(F(qsort::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(qsort::s1, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(qsort::s0, &tempVar, F(qsort::s5, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_partition_4::(PrologMachine*) {
	mach::FillAlternative(pred_partition_4::exec_pred_partition_4__3);
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
	if(!((areg0)->Unify(F(qsort::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(qsort::s1, { var1->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_partition_4::exec_static);
}

static* function < Function*pred_partition_4::(PrologMachine*) {
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
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil))) {
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
