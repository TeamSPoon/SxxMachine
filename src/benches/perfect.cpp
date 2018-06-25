using namespace std;

#include "perfect.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../machine/builtins.h"

Const* perfect::s0 = Const::Intern("cut");
Const* perfect::s1 = Const::Intern("*");
Const* perfect::s2 = Const::Intern("+");
Const* perfect::s3 = Const::Intern("-");
Const* perfect::s4 = Const::Intern(".");
Const* perfect::s5 = Const::Intern(":-");
Const* perfect::s6 = Const::Intern("arithequal");
Const* perfect::s7 = Const::Intern("calc");
Const* perfect::s8 = Const::Intern("call");
Const* perfect::s9 = Const::Intern("cut");
Const* perfect::s10 = Const::Intern("divisible");
Const* perfect::s11 = Const::Intern("findall");
Const* perfect::s12 = Const::Intern("generateList");
Const* perfect::s13 = Const::Intern("is");
Const* perfect::s14 = Const::Intern("isprime");
Const* perfect::s15 = Const::Intern("listperf");
Const* perfect::s16 = Const::Intern("mod");
Const* perfect::s17 = Const::Intern("not");
Const* perfect::s18 = Const::Intern("ok");
Const* perfect::s19 = Const::Intern("perfect");
Const* perfect::s20 = Const::Intern("power");
Const* perfect::s21 = Const::Intern("smallerorequal");
Const* perfect::s22 = Const::Intern("smallerthan");
Const* perfect::s23 = Const::Intern("top");
Int* perfect::posint0 = Term::Number(0);
Int* perfect::posint1 = Term::Number(1);
Int* perfect::posint2 = Term::Number(2);
Int* perfect::posint6 = Term::Number(6);
Int* perfect::posint28 = Term::Number(28);
Int* perfect::posint100 = Term::Number(100);
Int* perfect::posint496 = Term::Number(496);
Int* perfect::posint8128 = Term::Number(8128);
Int* perfect::posint2096128 = Term::Number(2096128);
Int* perfect::posint33550336 = Term::Number(33550336);
Int* perfect::posint8589869056 = Term::Number(8589869056);
Int* perfect::posint137438691328 = Term::Number(137438691328);
Int* perfect::posint35184367894528 = Term::Number(35184367894528);
Int* perfect::posint144115187807420416 = Term::Number(144115187807420416);
Int* perfect::posint2305843008139952128 = Term::Number(2305843008139952128);
Int* perfect::posint9444732965670570950656 = Term::Number(9444732965670570950656);
Int* perfect::posint2417851639228158837784576 = Term::Number(2417851639228158837784576);
Int* perfect::posint38685626227663735544086528 = Term::Number(38685626227663735544086528);
Int* perfect::posint9903520314282971830448816128 = Term::Number(9903520314282971830448816128);
Int* perfect::posint40564819207303336344294875201536 = Term::Number(40564819207303336344294875201536);
Int* perfect::posint166153499473114483824745506383331328 = Term::Number(166153499473114483824745506383331328);
Int* perfect::posint2658455991569831744654692615953842176 = Term::Number(2658455991569831744654692615953842176);
Int* perfect::posint10889035741470030830754200461521744560128 = Term::Number(10889035741470030830754200461521744560128);
Int* perfect::posint2787593149816327892690784192460327776944128 = Term::Number(2787593149816327892690784192460327776944128);
Int* perfect::posint44601490397061246283066714178813853366747136 = Term::Number(44601490397061246283066714178813853366747136);
Int* perfect::posint182687704666362864775460301858080473799697891328 = Term::Number(182687704666362864775460301858080473799697891328);
Int* perfect::posint46768052394588893382517909811217778170473142550528 = Term::Number(46768052394588893382517909811217778170473142550528);
Int* perfect::posint191561942608236107294793378084303638130997321548169216 = Term::Number(191561942608236107294793378084303638130997321548169216);
Int* perfect::posint12554203470773361527671578846336104669690446551334525075456 = Term::Number(12554203470773361527671578846336104669690446551334525075456);
Int* perfect::posint3213876088517980551083924184681057554444177758164088967397376 = Term::Number(3213876088517980551083924184681057554444177758164088967397376);

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
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = F(perfect::s19, perfect::posint100, var1->Deref());
	local_aregs[2] = var2;
	local_aregs[3] = F(perfect::s18, { var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_findall_3::exec_static);
}

static* function < Function*pred_ok_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ok_1__1(mach));
}

static* function < Function*pred_ok_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(perfect::s4, perfect::posint3213876088517980551083924184681057554444177758164088967397376, F(perfect::s4, perfect::posint12554203470773361527671578846336104669690446551334525075456, F(perfect::s4, perfect::posint191561942608236107294793378084303638130997321548169216, F(perfect::s4, perfect::posint46768052394588893382517909811217778170473142550528, F(perfect::s4, perfect::posint182687704666362864775460301858080473799697891328, F(perfect::s4, perfect::posint44601490397061246283066714178813853366747136, F(perfect::s4, perfect::posint2787593149816327892690784192460327776944128, F(perfect::s4, perfect::posint10889035741470030830754200461521744560128, F(perfect::s4, perfect::posint2658455991569831744654692615953842176, F(perfect::s4, perfect::posint166153499473114483824745506383331328, F(perfect::s4, perfect::posint40564819207303336344294875201536, F(perfect::s4, perfect::posint9903520314282971830448816128, F(perfect::s4, perfect::posint38685626227663735544086528, F(perfect::s4, perfect::posint2417851639228158837784576, F(perfect::s4, perfect::posint9444732965670570950656, F(perfect::s4, perfect::posint2305843008139952128, F(perfect::s4, perfect::posint144115187807420416, F(perfect::s4, perfect::posint35184367894528, F(perfect::s4, perfect::posint137438691328, F(perfect::s4, perfect::posint8589869056, F(perfect::s4, perfect::posint33550336, F(perfect::s4, perfect::posint2096128, F(perfect::s4, perfect::posint8128, F(perfect::s4, perfect::posint496, F(perfect::s4, perfect::posint28, F(perfect::s4, perfect::posint6, Const::Nil))))))))))))))))))))))))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_divisible_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_divisible_2__1(mach));
}

static* function < Function*pred_divisible_2::(PrologMachine*) {
	mach::FillAlternative(pred_divisible_2::exec_pred_divisible_2__2);
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
	local_aregs[0] = var3;
	local_aregs[1] = F(perfect::s1, { var2->Deref(), var2->Deref() });
	local_aregs[2] = F(perfect::s21, { var3->Deref(), var1->Deref(), F(perfect::s6, perfect::posint0, F(perfect::s16, { var1->Deref(), var2->Deref() }), continuation) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_divisible_2::(PrologMachine*) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(perfect::s13, var3, F(perfect::s2, { var2->Deref(), perfect::posint1 }), F(perfect::s10, { var1->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_isprime_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_isprime_2__1(mach));
}

static* function < Function*pred_isprime_2::(PrologMachine*) {
	mach::FillAlternative(pred_isprime_2::exec_pred_isprime_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(perfect::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = perfect::posint2;
	local_aregs[2] = F(perfect::s22, perfect::posint1, var1->Deref(), F(perfect::s17, F(perfect::s10, { var1->Deref(), var3->Deref() }), continuation));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_isprime_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(perfect::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_isprime_2::exec_static);
}

static* function < Function*pred_power_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_power_3__1(mach));
}

static* function < Function*pred_power_3::(PrologMachine*) {
	mach::FillAlternative(pred_power_3::exec_pred_power_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(perfect::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(perfect::posint1))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_power_3::(PrologMachine*) {
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
	local_aregs[0] = var4;
	local_aregs[1] = F(perfect::s3, { var2->Deref(), perfect::posint1 });
	local_aregs[2] = F(perfect::s20, { var1->Deref(), var4->Deref(), var5, F(perfect::s13, { var3->Deref(), F(perfect::s1, { var5->Deref(), var1->Deref() }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_calc_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_calc_3__1(mach));
}

static* function < Function*pred_calc_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(perfect::posint2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = perfect::posint2;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = F(perfect::s13, var4, F(perfect::s3, { var3->Deref(), perfect::posint1 }), F(perfect::s20, perfect::posint2, F(perfect::s3, { var1->Deref(), perfect::posint1 }), var5, F(perfect::s13, { var2->Deref(), F(perfect::s1, { var4->Deref(), var5->Deref() }), continuation })));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_power_3::exec_static);
}

static* function < Function*pred_listperf_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_listperf_2__1(mach));
}

static* function < Function*pred_listperf_2::(PrologMachine*) {
	mach::FillAlternative(pred_listperf_2::exec_pred_listperf_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(perfect::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = perfect::posint2;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_calc_3::exec_static);
}

static* function < Function*pred_listperf_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(perfect::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_listperf_2::exec_static);
}

static* function < Function*pred_generateList_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_generateList_2__1(mach));
}

static* function < Function*pred_generateList_2::(PrologMachine*) {
	mach::FillAlternative(pred_generateList_2::exec_pred_generateList_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(perfect::posint0))) {
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

static* function < Function*pred_generateList_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(perfect::s4, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = perfect::posint0;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(perfect::s13, { var2->Deref(), F(perfect::s2, { var1->Deref(), perfect::posint1 }), F(perfect::s13, var4, F(perfect::s3, { var1->Deref(), perfect::posint1 }), F(perfect::s12, { var4->Deref(), var3->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_perfect_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_perfect_2__1(mach));
}

static* function < Function*pred_perfect_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = F(perfect::s11, var4, F(perfect::s14, { var3->Deref(), var4->Deref() }), var5, F(perfect::s15, { var5->Deref(), var2->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_generateList_2::exec_static);
}
