using namespace std;

#include "meta_qsort.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../machine/builtins.h"

Const* meta_qsort::s0 = Const::Intern("cut");
Const* meta_qsort::s1 = Const::Intern("!");
Const* meta_qsort::s2 = Const::Intern(",");
Const* meta_qsort::s3 = Const::Intern("->");
Const* meta_qsort::s4 = Const::Intern(".");
Const* meta_qsort::s5 = Const::Intern(":-");
Const* meta_qsort::s6 = Const::Intern(";");
Const* meta_qsort::s7 = Const::Intern("=");
Const* meta_qsort::s8 = Const::Intern("=<");
Const* meta_qsort::s9 = Const::Intern("\\+");
Const* meta_qsort::s10 = Const::Intern("call");
Const* meta_qsort::s11 = Const::Intern("cut");
Const* meta_qsort::s12 = Const::Intern("define");
Const* meta_qsort::s13 = Const::Intern("fail");
Const* meta_qsort::s14 = Const::Intern("interpret");
Const* meta_qsort::s15 = Const::Intern("interpret_built_in");
Const* meta_qsort::s16 = Const::Intern("interpret_disjunction");
Const* meta_qsort::s17 = Const::Intern("is_built_in");
Const* meta_qsort::s18 = Const::Intern("meta_qsort");
Const* meta_qsort::s19 = Const::Intern("nonvar");
Const* meta_qsort::s20 = Const::Intern("number");
Const* meta_qsort::s21 = Const::Intern("or");
Const* meta_qsort::s22 = Const::Intern("partition");
Const* meta_qsort::s23 = Const::Intern("qsort");
Const* meta_qsort::s24 = Const::Intern("smallerorequal");
Const* meta_qsort::s25 = Const::Intern("top");
Const* meta_qsort::s26 = Const::Intern("true");
Const* meta_qsort::s27 = Const::Intern("var");
Int* meta_qsort::posint0 = Term::Number(0);
Int* meta_qsort::posint1 = Term::Number(1);
Int* meta_qsort::posint2 = Term::Number(2);
Int* meta_qsort::posint4 = Term::Number(4);
Int* meta_qsort::posint6 = Term::Number(6);
Int* meta_qsort::posint7 = Term::Number(7);
Int* meta_qsort::posint8 = Term::Number(8);
Int* meta_qsort::posint10 = Term::Number(10);
Int* meta_qsort::posint11 = Term::Number(11);
Int* meta_qsort::posint17 = Term::Number(17);
Int* meta_qsort::posint18 = Term::Number(18);
Int* meta_qsort::posint21 = Term::Number(21);
Int* meta_qsort::posint27 = Term::Number(27);
Int* meta_qsort::posint28 = Term::Number(28);
Int* meta_qsort::posint29 = Term::Number(29);
Int* meta_qsort::posint31 = Term::Number(31);
Int* meta_qsort::posint32 = Term::Number(32);
Int* meta_qsort::posint33 = Term::Number(33);
Int* meta_qsort::posint37 = Term::Number(37);
Int* meta_qsort::posint39 = Term::Number(39);
Int* meta_qsort::posint40 = Term::Number(40);
Int* meta_qsort::posint46 = Term::Number(46);
Int* meta_qsort::posint47 = Term::Number(47);
Int* meta_qsort::posint51 = Term::Number(51);
Int* meta_qsort::posint53 = Term::Number(53);
Int* meta_qsort::posint55 = Term::Number(55);
Int* meta_qsort::posint59 = Term::Number(59);
Int* meta_qsort::posint61 = Term::Number(61);
Int* meta_qsort::posint63 = Term::Number(63);
Int* meta_qsort::posint65 = Term::Number(65);
Int* meta_qsort::posint66 = Term::Number(66);
Int* meta_qsort::posint74 = Term::Number(74);
Int* meta_qsort::posint75 = Term::Number(75);
Int* meta_qsort::posint81 = Term::Number(81);
Int* meta_qsort::posint82 = Term::Number(82);
Int* meta_qsort::posint83 = Term::Number(83);
Int* meta_qsort::posint85 = Term::Number(85);
Int* meta_qsort::posint90 = Term::Number(90);
Int* meta_qsort::posint92 = Term::Number(92);
Int* meta_qsort::posint94 = Term::Number(94);
Int* meta_qsort::posint95 = Term::Number(95);
Int* meta_qsort::posint99 = Term::Number(99);

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
	return static_cast<function<Function*(PrologMachine*)> >(pred_meta_qsort_0::exec_static);
}

static* function < Function*pred_meta_qsort_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_meta_qsort_0__1(mach));
}

static* function < Function*pred_meta_qsort_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = meta_qsort::s23;
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_interpret_1::exec_static);
}

static* function < Function*pred_interpret_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_interpret_1__1(mach));
}

static* function < Function*pred_interpret_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = F(meta_qsort::s21, F(meta_qsort::s2, F(meta_qsort::s19, { var2->Deref() }), F(meta_qsort::s2, meta_qsort::s1, F(meta_qsort::s14, { var2->Deref() }))), meta_qsort::s26, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_interpret_2::exec_static);
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_interpret_2__1(mach));
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(meta_qsort::s0, &tempVar, F(meta_qsort::s13, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(meta_qsort::s14, { var1->Deref(), var4, F(meta_qsort::s21, F(meta_qsort::s3, F(meta_qsort::s19, { var4->Deref() }), F(meta_qsort::s7, { var3->Deref(), F(meta_qsort::s2, { var4->Deref(), var2->Deref() }) })), F(meta_qsort::s14, { var2->Deref(), var3->Deref() }), continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s6, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(meta_qsort::s16, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(meta_qsort::s16, F(meta_qsort::s3, { var1->Deref(), var2->Deref() }), meta_qsort::s13, var3->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s9, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(meta_qsort::s16, F(meta_qsort::s3, { var1->Deref(), meta_qsort::s13 }), meta_qsort::s26, var2->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(meta_qsort::s1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(meta_qsort::s26))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(meta_qsort::s0, &tempVar, F(meta_qsort::s13, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_number_1::exec_static);
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_2::exec_pred_interpret_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(meta_qsort::s0, &tempVar, F(meta_qsort::s15, { var1->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_built_in_1::exec_static);
}

static* function < Function*pred_interpret_2::(PrologMachine*) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = F(meta_qsort::s14, { var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_define_2::exec_static);
}

static* function < Function*pred_interpret_disjunction_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_interpret_disjunction_3__1(mach));
}

static* function < Function*pred_interpret_disjunction_3::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__2);
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
	if(!((areg0)->Unify(F(meta_qsort::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(meta_qsort::s0, &tempVar, F(meta_qsort::s21, F(meta_qsort::s3, F(meta_qsort::s19, { var5->Deref() }), F(meta_qsort::s7, { var4->Deref(), F(meta_qsort::s3, { var5->Deref(), var2->Deref() }) })), F(meta_qsort::s14, { var2->Deref(), var4->Deref() }), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_interpret_2::exec_static);
}

static* function < Function*pred_interpret_disjunction_3::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s3, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(meta_qsort::s14, { var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_interpret_disjunction_3::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__4);
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
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_interpret_2::exec_static);
}

static* function < Function*pred_interpret_disjunction_3::(PrologMachine*) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_interpret_2::exec_static);
}

static* function < Function*pred_is_built_in_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_is_built_in_1__1(mach));
}

static* function < Function*pred_is_built_in_1::(PrologMachine*) {
	mach::FillAlternative(pred_is_built_in_1::exec_pred_is_built_in_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(meta_qsort::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_is_built_in_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s8, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_interpret_built_in_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_interpret_built_in_1__1(mach));
}

static* function < Function*pred_interpret_built_in_1::(PrologMachine*) {
	mach::FillAlternative(pred_interpret_built_in_1::exec_pred_interpret_built_in_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(meta_qsort::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_interpret_built_in_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s8, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerorequal_2::exec_static);
}

static* function < Function*pred_define_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_define_2__1(mach));
}

static* function < Function*pred_define_2::(PrologMachine*) {
	mach::FillAlternative(pred_define_2::exec_pred_define_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(meta_qsort::s23))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(meta_qsort::s23, F(meta_qsort::s4, meta_qsort::posint27, F(meta_qsort::s4, meta_qsort::posint74, F(meta_qsort::s4, meta_qsort::posint17, F(meta_qsort::s4, meta_qsort::posint33, F(meta_qsort::s4, meta_qsort::posint94, F(meta_qsort::s4, meta_qsort::posint18, F(meta_qsort::s4, meta_qsort::posint46, F(meta_qsort::s4, meta_qsort::posint83, F(meta_qsort::s4, meta_qsort::posint65, F(meta_qsort::s4, meta_qsort::posint2, F(meta_qsort::s4, meta_qsort::posint32, F(meta_qsort::s4, meta_qsort::posint53, F(meta_qsort::s4, meta_qsort::posint28, F(meta_qsort::s4, meta_qsort::posint85, F(meta_qsort::s4, meta_qsort::posint99, F(meta_qsort::s4, meta_qsort::posint47, F(meta_qsort::s4, meta_qsort::posint28, F(meta_qsort::s4, meta_qsort::posint82, F(meta_qsort::s4, meta_qsort::posint6, F(meta_qsort::s4, meta_qsort::posint11, F(meta_qsort::s4, meta_qsort::posint55, F(meta_qsort::s4, meta_qsort::posint29, F(meta_qsort::s4, meta_qsort::posint39, F(meta_qsort::s4, meta_qsort::posint81, F(meta_qsort::s4, meta_qsort::posint90, F(meta_qsort::s4, meta_qsort::posint37, F(meta_qsort::s4, meta_qsort::posint10, F(meta_qsort::s4, meta_qsort::posint0, F(meta_qsort::s4, meta_qsort::posint66, F(meta_qsort::s4, meta_qsort::posint51, F(meta_qsort::s4, meta_qsort::posint7, F(meta_qsort::s4, meta_qsort::posint21, F(meta_qsort::s4, meta_qsort::posint85, F(meta_qsort::s4, meta_qsort::posint27, F(meta_qsort::s4, meta_qsort::posint31, F(meta_qsort::s4, meta_qsort::posint63, F(meta_qsort::s4, meta_qsort::posint75, F(meta_qsort::s4, meta_qsort::posint4, F(meta_qsort::s4, meta_qsort::posint95, F(meta_qsort::s4, meta_qsort::posint99, F(meta_qsort::s4, meta_qsort::posint11, F(meta_qsort::s4, meta_qsort::posint28, F(meta_qsort::s4, meta_qsort::posint61, F(meta_qsort::s4, meta_qsort::posint74, F(meta_qsort::s4, meta_qsort::posint18, F(meta_qsort::s4, meta_qsort::posint92, F(meta_qsort::s4, meta_qsort::posint40, F(meta_qsort::s4, meta_qsort::posint53, F(meta_qsort::s4, meta_qsort::posint59, F(meta_qsort::s4, meta_qsort::posint8, Const::Nil)))))))))))))))))))))))))))))))))))))))))))))))))), var1, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_define_2::(PrologMachine*) {
	mach::FillAlternative(pred_define_2::exec_pred_define_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s23, F(meta_qsort::s4, var1, var2), var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(meta_qsort::s2, F(meta_qsort::s22, { var2->Deref(), var1->Deref(), var5, var6 }), F(meta_qsort::s2, F(meta_qsort::s23, { var6->Deref(), var7, var4->Deref() }), F(meta_qsort::s23, { var5->Deref(), var3->Deref(), F(meta_qsort::s4, { var1->Deref(), var7->Deref() }) })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_define_2::(PrologMachine*) {
	mach::FillAlternative(pred_define_2::exec_pred_define_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s23, { Const::Nil, var1, var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(meta_qsort::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_define_2::(PrologMachine*) {
	mach::FillAlternative(pred_define_2::exec_pred_define_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s22, F(meta_qsort::s4, var1, var2), var3, F(meta_qsort::s4, { var1->Deref(), var4 }), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(meta_qsort::s2, F(meta_qsort::s8, { var1->Deref(), var3->Deref() }), F(meta_qsort::s2, meta_qsort::s1, F(meta_qsort::s22, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() })))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_define_2::(PrologMachine*) {
	mach::FillAlternative(pred_define_2::exec_pred_define_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s22, F(meta_qsort::s4, var1, var2), var3, var4, F(meta_qsort::s4, { var1->Deref(), var5 }))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(meta_qsort::s22, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_define_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(meta_qsort::s22, { Const::Nil, var1, Const::Nil, Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(meta_qsort::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
