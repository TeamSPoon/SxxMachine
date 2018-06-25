using namespace std;

#include "query.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"

Const* query::s0 = Const::Intern("cut");
Const* query::s1 = Const::Intern("*");
Const* query::s2 = Const::Intern(".");
Const* query::s3 = Const::Intern("//");
Const* query::s4 = Const::Intern(":-");
Const* query::s5 = Const::Intern("area");
Const* query::s6 = Const::Intern("argentina");
Const* query::s7 = Const::Intern("bangladesh");
Const* query::s8 = Const::Intern("brazil");
Const* query::s9 = Const::Intern("call");
Const* query::s10 = Const::Intern("china");
Const* query::s11 = Const::Intern("density");
Const* query::s12 = Const::Intern("egypt");
Const* query::s13 = Const::Intern("ethiopia");
Const* query::s14 = Const::Intern("fail");
Const* query::s15 = Const::Intern("france");
Const* query::s16 = Const::Intern("india");
Const* query::s17 = Const::Intern("indonesia");
Const* query::s18 = Const::Intern("iran");
Const* query::s19 = Const::Intern("is");
Const* query::s20 = Const::Intern("italy");
Const* query::s21 = Const::Intern("japan");
Const* query::s22 = Const::Intern("mexico");
Const* query::s23 = Const::Intern("nigeria");
Const* query::s24 = Const::Intern("pakistan");
Const* query::s25 = Const::Intern("philippines");
Const* query::s26 = Const::Intern("poland");
Const* query::s27 = Const::Intern("pop");
Const* query::s28 = Const::Intern("query");
Const* query::s29 = Const::Intern("s_korea");
Const* query::s30 = Const::Intern("smallerthan");
Const* query::s31 = Const::Intern("spain");
Const* query::s32 = Const::Intern("thailand");
Const* query::s33 = Const::Intern("top");
Const* query::s34 = Const::Intern("turkey");
Const* query::s35 = Const::Intern("uk");
Const* query::s36 = Const::Intern("usa");
Const* query::s37 = Const::Intern("ussr");
Const* query::s38 = Const::Intern("w_germany");
Int* query::posint20 = Term::Number(20);
Int* query::posint21 = Term::Number(21);
Int* query::posint37 = Term::Number(37);
Int* query::posint55 = Term::Number(55);
Int* query::posint86 = Term::Number(86);
Int* query::posint90 = Term::Number(90);
Int* query::posint96 = Term::Number(96);
Int* query::posint100 = Term::Number(100);
Int* query::posint116 = Term::Number(116);
Int* query::posint121 = Term::Number(121);
Int* query::posint148 = Term::Number(148);
Int* query::posint190 = Term::Number(190);
Int* query::posint200 = Term::Number(200);
Int* query::posint213 = Term::Number(213);
Int* query::posint251 = Term::Number(251);
Int* query::posint272 = Term::Number(272);
Int* query::posint296 = Term::Number(296);
Int* query::posint311 = Term::Number(311);
Int* query::posint320 = Term::Number(320);
Int* query::posint335 = Term::Number(335);
Int* query::posint337 = Term::Number(337);
Int* query::posint350 = Term::Number(350);
Int* query::posint352 = Term::Number(352);
Int* query::posint364 = Term::Number(364);
Int* query::posint373 = Term::Number(373);
Int* query::posint383 = Term::Number(383);
Int* query::posint386 = Term::Number(386);
Int* query::posint410 = Term::Number(410);
Int* query::posint415 = Term::Number(415);
Int* query::posint525 = Term::Number(525);
Int* query::posint554 = Term::Number(554);
Int* query::posint559 = Term::Number(559);
Int* query::posint570 = Term::Number(570);
Int* query::posint581 = Term::Number(581);
Int* query::posint613 = Term::Number(613);
Int* query::posint620 = Term::Number(620);
Int* query::posint628 = Term::Number(628);
Int* query::posint682 = Term::Number(682);
Int* query::posint750 = Term::Number(750);
Int* query::posint764 = Term::Number(764);
Int* query::posint1042 = Term::Number(1042);
Int* query::posint1080 = Term::Number(1080);
Int* query::posint1097 = Term::Number(1097);
Int* query::posint1139 = Term::Number(1139);
Int* query::posint1276 = Term::Number(1276);
Int* query::posint2119 = Term::Number(2119);
Int* query::posint2521 = Term::Number(2521);
Int* query::posint3288 = Term::Number(3288);
Int* query::posint3380 = Term::Number(3380);
Int* query::posint3609 = Term::Number(3609);
Int* query::posint5863 = Term::Number(5863);
Int* query::posint8250 = Term::Number(8250);
Int* query::posint8708 = Term::Number(8708);

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
	return static_cast<function<Function*(PrologMachine*)> >(pred_query_0::exec_static);
}

static* function < Function*pred_query_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_query_0__1(mach));
}

static* function < Function*pred_query_0::(PrologMachine*) {
	mach::FillAlternative(pred_query_0::exec_pred_query_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = F(query::s14, { continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_query_1::exec_static);
}

static* function < Function*pred_query_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_query_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_query_1__1(mach));
}

static* function < Function*pred_query_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(query::s2, var1, F(query::s2, var2, F(query::s2, var3, F(query::s2, var4, Const::Nil))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = F(query::s11, { var3->Deref(), var4->Deref(), F(query::s30, { var4->Deref(), var2->Deref(), F(query::s19, var5, F(query::s1, query::posint20, var2->Deref()), F(query::s19, var6, F(query::s1, query::posint21, var4->Deref()), F(query::s30, { var5->Deref(), var6->Deref(), continuation }))) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_density_2::exec_static);
}

static* function < Function*pred_density_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_density_2__1(mach));
}

static* function < Function*pred_density_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = F(query::s5, { var1->Deref(), var4, F(query::s19, { var2->Deref(), F(query::s3, F(query::s1, { var3->Deref(), query::posint100 }), var4->Deref()), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_pop_2::exec_static);
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_pop_2__1(mach));
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint8250))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint5863))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s37))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint2521))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s36))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint2119))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s17))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint1276))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s21))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint1097))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint1042))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint750))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s24))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint682))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s38))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint620))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s23))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint613))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s22))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint581))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s35))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint559))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s20))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint554))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s15))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint525))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s25))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint415))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s32))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint410))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s34))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint383))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint364))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s31))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint352))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint337))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint335))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s18))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint320))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::FillAlternative(pred_pop_2::exec_pred_pop_2__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s13))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint272))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_pop_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint251))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_area_2__1(mach));
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint3380))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s16))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint1139))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s37))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint8708))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s36))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint3609))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s17))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint570))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s21))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint148))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s8))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint3288))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s7))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint55))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s24))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint311))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s38))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint96))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s23))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint373))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s22))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint764))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s35))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint86))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s20))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint116))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s15))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint213))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s25))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint90))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s32))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint200))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s34))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint296))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s12))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint386))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s31))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint190))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s26))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint121))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s29))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint37))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s18))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint628))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::FillAlternative(pred_area_2::exec_pred_area_2__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s13))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint350))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_area_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(query::posint1080))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
