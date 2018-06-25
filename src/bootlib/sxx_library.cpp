using namespace std;

#include "sxx_library.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../benches/nreverse.h"
#include "../benches/divide10.h"
#include "../benches/prover.h"
#include "../benches/sendmore.h"
#include "../benches/qsort.h"
#include "../benches/crypt.h"
#include "../benches/mu.h"
#include "../benches/tak.h"
#include "../benches/unify.h"
#include "../benches/perfect.h"
#include "../benches/reducer.h"
#include "../benches/nand.h"
#include "../benches/zebra.h"
#include "../benches/log10.h"
#include "../benches/browse.h"
#include "../benches/boyer.h"
#include "../benches/sdda.h"
#include "../benches/ops8.h"
#include "../benches/fast_mu.h"
#include "../benches/simple_analyzer.h"
#include "../benches/flatten.h"
#include "../benches/times10.h"
#include "../benches/query.h"
#include "../benches/meta_qsort.h"
#include "../benches/derive.h"
#include "../benches/poly_10.h"
#include "../benches/chat_parser.h"
#include "../benches/queens_8.h"
#include "../benches/serialise.h"
#include "../library/sxx_builtins_cafe.h"
#include "../machine/builtins.h"

Const* sxx_library::s0 = Const::Intern("cut");
Const* sxx_library::s1 = Const::Intern(" = ");
Const* sxx_library::s2 = Const::Intern(",");
Const* sxx_library::s3 = Const::Intern("-");
Const* sxx_library::s4 = Const::Intern("->");
Const* sxx_library::s5 = Const::Intern(".");
Const* sxx_library::s6 = Const::Intern(":-");
Const* sxx_library::s7 = Const::Intern(";");
Const* sxx_library::s8 = Const::Intern("<");
Const* sxx_library::s9 = Const::Intern("=");
Const* sxx_library::s10 = Const::Intern("=:=");
Const* sxx_library::s11 = Const::Intern("=<");
Const* sxx_library::s12 = Const::Intern("==");
Const* sxx_library::s13 = Const::Intern(">");
Const* sxx_library::s14 = Const::Intern(">=");
Const* sxx_library::s15 = Const::Intern("?- ");
Const* sxx_library::s16 = Const::Intern("@<");
Const* sxx_library::s17 = Const::Intern("@=<");
Const* sxx_library::s18 = Const::Intern("@>");
Const* sxx_library::s19 = Const::Intern("@>=");
Const* sxx_library::s20 = Const::Intern("Yes");
Const* sxx_library::s21 = Const::Intern("addfindall");
Const* sxx_library::s22 = Const::Intern("allassumed");
Const* sxx_library::s23 = Const::Intern("append");
Const* sxx_library::s24 = Const::Intern("arithequal");
Const* sxx_library::s25 = Const::Intern("assume");
Const* sxx_library::s26 = Const::Intern("assumed");
Const* sxx_library::s27 = Const::Intern("assumeduring");
Const* sxx_library::s28 = Const::Intern("atom");
Const* sxx_library::s29 = Const::Intern("atomic");
Const* sxx_library::s30 = Const::Intern("atomic2");
Const* sxx_library::s31 = Const::Intern("call");
Const* sxx_library::s32 = Const::Intern("compare");
Const* sxx_library::s33 = Const::Intern("copy_term");
Const* sxx_library::s34 = Const::Intern("cputime");
Const* sxx_library::s35 = Const::Intern("cut");
Const* sxx_library::s36 = Const::Intern("exec");
Const* sxx_library::s37 = Const::Intern("execcontinuation");
Const* sxx_library::s38 = Const::Intern("execdisj");
Const* sxx_library::s39 = Const::Intern("execpendinggoals");
Const* sxx_library::s40 = Const::Intern("fail");
Const* sxx_library::s41 = Const::Intern("findall");
Const* sxx_library::s42 = Const::Intern("findall2");
Const* sxx_library::s43 = Const::Intern("freeze");
Const* sxx_library::s44 = Const::Intern("freeze_internal");
Const* sxx_library::s45 = Const::Intern("get0");
Const* sxx_library::s46 = Const::Intern("initfindall");
Const* sxx_library::s47 = Const::Intern("integer");
Const* sxx_library::s48 = Const::Intern("is");
Const* sxx_library::s49 = Const::Intern("loop");
Const* sxx_library::s50 = Const::Intern("m1");
Const* sxx_library::s51 = Const::Intern("max");
Const* sxx_library::s52 = Const::Intern("nl");
Const* sxx_library::s53 = Const::Intern("not");
Const* sxx_library::s54 = Const::Intern("noteq");
Const* sxx_library::s55 = Const::Intern("notmore");
Const* sxx_library::s56 = Const::Intern("nrev");
Const* sxx_library::s57 = Const::Intern("or");
Const* sxx_library::s58 = Const::Intern("retrievefindall");
Const* sxx_library::s59 = Const::Intern("runtime");
Const* sxx_library::s60 = Const::Intern("smallerorequal");
Const* sxx_library::s61 = Const::Intern("smallerthan");
Const* sxx_library::s62 = Const::Intern("smeq");
Const* sxx_library::s63 = Const::Intern("smgr");
Const* sxx_library::s64 = Const::Intern("sort");
Const* sxx_library::s65 = Const::Intern("specialgoal");
Const* sxx_library::s66 = Const::Intern("split");
Const* sxx_library::s67 = Const::Intern("statistics");
Const* sxx_library::s68 = Const::Intern("termequal");
Const* sxx_library::s69 = Const::Intern("termgreaterequal");
Const* sxx_library::s70 = Const::Intern("termgreaterthan");
Const* sxx_library::s71 = Const::Intern("termsmallerequal");
Const* sxx_library::s72 = Const::Intern("termsmallerthan");
Const* sxx_library::s73 = Const::Intern("time");
Const* sxx_library::s74 = Const::Intern("top");
Const* sxx_library::s75 = Const::Intern("toplevel");
Const* sxx_library::s76 = Const::Intern("true");
Const* sxx_library::s77 = Const::Intern("type_of");
Const* sxx_library::s78 = Const::Intern("unify");
Const* sxx_library::s79 = Const::Intern("untilend");
Const* sxx_library::s80 = Const::Intern("var");
Const* sxx_library::s81 = Const::Intern("vread");
Const* sxx_library::s82 = Const::Intern("write");
Const* sxx_library::s83 = Const::Intern("writevars");
Int* sxx_library::posint0 = Term::Number(0);
Int* sxx_library::posint1 = Term::Number(1);
Int* sxx_library::posint10 = Term::Number(10);

static* function < Function*pred_toplevel_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_toplevel_0__1(mach));
}

static* function < Function*pred_toplevel_0::(PrologMachine*) {
	mach::FillAlternative(pred_toplevel_0::exec_pred_toplevel_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = F(sxx_library::s40, { continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_top_0::exec_static);
}

static* function < Function*pred_toplevel_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_toplevel_0::exec_static);
}

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
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = sxx_library::s15;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_library::s81, var1, var2, F(sxx_library::s36, { var1->Deref(), F(sxx_library::s83, { var2->Deref(), F(sxx_library::s82, sxx_library::s20, F(sxx_library::s52, F(sxx_library::s55, F(sxx_library::s0, &tempVar, F(sxx_library::s40, { continuation }))))) }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_top_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_top_0::exec_static);
}

static* function < Function*pred_notmore_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_notmore_0__1(mach));
}

static* function < Function*pred_notmore_0::(PrologMachine*) {
	mach::FillAlternative(pred_notmore_0::exec_pred_notmore_0__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_library::s54, { var1->Deref(), sxx_library::posint10, F(sxx_library::s0, &tempVar, F(sxx_library::s79, { var1->Deref(), F(sxx_library::s40, { continuation }) })) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_get0_1::exec_static);
}

static* function < Function*pred_notmore_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_noteq_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_noteq_2__1(mach));
}

static* function < Function*pred_noteq_2::(PrologMachine*) {
	mach::FillAlternative(pred_noteq_2::exec_pred_noteq_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_library::s40, { continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_noteq_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_untilend_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_untilend_1__1(mach));
}

static* function < Function*pred_untilend_1::(PrologMachine*) {
	mach::FillAlternative(pred_untilend_1::exec_pred_untilend_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::posint10))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_untilend_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = F(sxx_library::s79, { var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_get0_1::exec_static);
}

static* function < Function*pred_writevars_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_writevars_1__1(mach));
}

static* function < Function*pred_writevars_1::(PrologMachine*) {
	mach::FillAlternative(pred_writevars_1::exec_pred_writevars_1__2);
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

static* function < Function*pred_writevars_1::(PrologMachine*) {
	mach::FillAlternative(pred_writevars_1::exec_pred_writevars_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s5, F(sxx_library::s9, var1, var2), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = F(sxx_library::s82, sxx_library::s1, F(sxx_library::s82, { var1->Deref(), F(sxx_library::s52, F(sxx_library::s40, { continuation })) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_write_1::exec_static);
}

static* function < Function*pred_writevars_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_writevars_1::exec_static);
}

static* function < Function*pred_nrev_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nrev_2__1(mach));
}

static* function < Function*pred_nrev_2::(PrologMachine*) {
	mach::FillAlternative(pred_nrev_2::exec_pred_nrev_2__2);
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
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_nrev_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4;
	local_aregs[2] = F(sxx_library::s23, { var4->Deref(), F(sxx_library::s5, { var1->Deref(), Const::Nil }), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nrev_2::exec_static);
}

static* function < Function*pred_append_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_append_3__1(mach));
}

static* function < Function*pred_append_3::(PrologMachine*) {
	mach::FillAlternative(pred_append_3::exec_pred_append_3__2);
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

static* function < Function*pred_append_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sxx_library::s5, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_append_3::exec_static);
}

static* function < Function*pred_max_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_max_3__1(mach));
}

static* function < Function*pred_max_3::(PrologMachine*) {
	mach::FillAlternative(pred_max_3::exec_pred_max_3__2);
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
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_max_3::(PrologMachine*) {
	mach::FillAlternative(pred_max_3::exec_pred_max_3__3);
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_max_3::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_sort_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sort_2__1(mach));
}

static* function < Function*pred_sort_2::(PrologMachine*) {
	mach::FillAlternative(pred_sort_2::exec_pred_sort_2__2);
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
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_sort_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(F(sxx_library::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = var5;
	local_aregs[4] = F(sxx_library::s64, { var4->Deref(), var6, F(sxx_library::s64, { var5->Deref(), var7, F(sxx_library::s23, { var6->Deref(), F(sxx_library::s5, { var1->Deref(), var7->Deref() }), var3->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_split_4::exec_static);
}

static* function < Function*pred_split_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_split_4__1(mach));
}

static* function < Function*pred_split_4::(PrologMachine*) {
	mach::FillAlternative(pred_split_4::exec_pred_split_4__2);
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
	if(!((areg2)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_split_4::(PrologMachine*) {
	mach::FillAlternative(pred_split_4::exec_pred_split_4__3);
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s5, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sxx_library::s5, { var2->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_library::s0, &tempVar, F(sxx_library::s66, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}

static* function < Function*pred_split_4::(PrologMachine*) {
	mach::RemoveChoice();
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s5, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sxx_library::s5, { var2->Deref(), var5 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_split_4::exec_static);
}

static* function < Function*pred_time_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_time_1__1(mach));
}

static* function < Function*pred_time_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = F(sxx_library::s36, { var1->Deref(), F(sxx_library::s34, var3, F(sxx_library::s48, var4, F(sxx_library::s3, { var3->Deref(), var2->Deref() }), F(sxx_library::s82, { var4->Deref(), F(sxx_library::s52, { continuation }) }))) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cputime_1::exec_static);
}

static* function < Function*pred_exec_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_exec_1__1(mach));
}

static* function < Function*pred_exec_1::(PrologMachine*) {
	mach::FillAlternative(pred_exec_1::exec_pred_exec_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_library::s0, &tempVar, F(sxx_library::s40, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_exec_1::(PrologMachine*) {
	mach::FillAlternative(pred_exec_1::exec_pred_exec_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s2, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_library::s36, { var1->Deref(), F(sxx_library::s36, { var2->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_exec_1::(PrologMachine*) {
	mach::FillAlternative(pred_exec_1::exec_pred_exec_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_library::s38, F(sxx_library::s4, { var1->Deref(), var2->Deref() }), sxx_library::s76, continuation);
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_exec_1::(PrologMachine*) {
	mach::FillAlternative(pred_exec_1::exec_pred_exec_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_library::s38, { var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_exec_1::(PrologMachine*) {
	mach::FillAlternative(pred_exec_1::exec_pred_exec_1__6);
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
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_library::s0, &tempVar, F(sxx_library::s36, { var2->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_specialgoal_2::exec_static);
}

static* function < Function*pred_exec_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call2;
}

static* function < Function*pred_execdisj_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_execdisj_2__1(mach));
}

static* function < Function*pred_execdisj_2::(PrologMachine*) {
	mach::FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_library::s0, &tempVar, F(sxx_library::s36, { var2->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_execdisj_2::(PrologMachine*) {
	mach::FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s4, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_library::s36, { var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_execdisj_2::(PrologMachine*) {
	mach::FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__4);
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
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_execdisj_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_loop_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_loop_1__1(mach));
}

static* function < Function*pred_loop_1::(PrologMachine*) {
	mach::FillAlternative(pred_loop_1::exec_pred_loop_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_loop_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = F(sxx_library::s3, { var1->Deref(), sxx_library::posint1 });
	local_aregs[2] = F(sxx_library::s49, { var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_or_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_or_2__1(mach));
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::FillAlternative(pred_or_2::exec_pred_or_2__2);
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
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_or_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_findall_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_findall_3__1(mach));
}

static* function < Function*pred_findall_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
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
	local_aregs[0] = var4;
	local_aregs[1] = F(sxx_library::s42, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_initfindall_1::exec_static);
}

static* function < Function*pred_findall2_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_findall2_4__1(mach));
}

static* function < Function*pred_findall2_4::(PrologMachine*) {
	mach::FillAlternative(pred_findall2_4::exec_pred_findall2_4__2);
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = F(sxx_library::s21, { var1->Deref(), var4->Deref(), F(sxx_library::s40, { continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_findall2_4::(PrologMachine*) {
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
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_retrievefindall_2::exec_static);
}

static* function < Function*pred_copy_term_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_copy_term_2__1(mach));
}

static* function < Function*pred_copy_term_2::(PrologMachine*) {
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
	local_aregs[0] = var3;
	local_aregs[1] = F(sxx_library::s9, { var3->Deref(), var1->Deref() });
	local_aregs[2] = F(sxx_library::s5, { var2->Deref(), Const::Nil });
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_findall_3::exec_static);
}

static* function < Function*pred_var_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_var_1__1(mach));
}

static* function < Function*pred_var_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = sxx_library::s80;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_type_of_2::exec_static);
}

static* function < Function*pred_atomic_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_atomic_1__1(mach));
}

static* function < Function*pred_atomic_1::(PrologMachine*) {
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
	local_aregs[2] = F(sxx_library::s30, { var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_type_of_2::exec_static);
}

static* function < Function*pred_atomic2_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_atomic2_1__1(mach));
}

static* function < Function*pred_atomic2_1::(PrologMachine*) {
	mach::FillAlternative(pred_atomic2_1::exec_pred_atomic2_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::s28))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_atomic2_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::s47))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_atom_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_atom_1__1(mach));
}

static* function < Function*pred_atom_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = sxx_library::s28;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_type_of_2::exec_static);
}

static* function < Function*pred_integer_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_integer_1__1(mach));
}

static* function < Function*pred_integer_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = sxx_library::s47;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_type_of_2::exec_static);
}

static* function < Function*pred_assumeduring_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_assumeduring_2__1(mach));
}

static* function < Function*pred_assumeduring_2::(PrologMachine*) {
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
	local_aregs[0] = F(sxx_library::s3, { var2->Deref(), var3 });
	local_aregs[1] = F(sxx_library::s36, { var1->Deref(), F(sxx_library::s78, sxx_library::posint1, var3->Deref(), continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_assume_1::exec_static);
}

static* function < Function*pred_assumed_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_assumed_1__1(mach));
}

static* function < Function*pred_assumed_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = F(sxx_library::s50, { var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_allassumed_1::exec_static);
}

static* function < Function*pred_m1_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_m1_2__1(mach));
}

static* function < Function*pred_m1_2::(PrologMachine*) {
	mach::FillAlternative(pred_m1_2::exec_pred_m1_2__2);
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
	if(!((areg1)->Unify(F(sxx_library::s5, F(sxx_library::s3, { var1->Deref(), var2 }), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_m1_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(sxx_library::s5, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_m1_2::exec_static);
}

static* function < Function*pred_statistics_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_statistics_2__1(mach));
}

static* function < Function*pred_statistics_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_library::s59))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s5, var1, F(sxx_library::s5, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_cputime_1::exec_static);
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_specialgoal_2__1(mach));
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s8, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s61, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s11, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s60, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s13, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s61, { var2->Deref(), var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s14, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s60, { var2->Deref(), var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s10, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s24, { var2->Deref(), var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s9, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s78, { var2->Deref(), var1->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s57, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s16, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s72, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s18, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s70, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s17, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s71, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s19, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s69, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_specialgoal_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s12, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_library::s68, { var1->Deref(), var2->Deref() })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_termsmallerthan_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termsmallerthan_2__1(mach));
}

static* function < Function*pred_termsmallerthan_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = sxx_library::s8;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_termgreaterthan_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termgreaterthan_2__1(mach));
}

static* function < Function*pred_termgreaterthan_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = sxx_library::s13;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_termsmallerequal_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termsmallerequal_2__1(mach));
}

static* function < Function*pred_termsmallerequal_2::(PrologMachine*) {
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
	local_aregs[0] = var3;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = F(sxx_library::s62, { var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_smeq_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_smeq_1__1(mach));
}

static* function < Function*pred_smeq_1::(PrologMachine*) {
	mach::FillAlternative(pred_smeq_1::exec_pred_smeq_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::s8))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_smeq_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::s9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_termgreaterequal_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termgreaterequal_2__1(mach));
}

static* function < Function*pred_termgreaterequal_2::(PrologMachine*) {
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
	local_aregs[0] = var3;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = F(sxx_library::s63, { var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_smgr_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_smgr_1__1(mach));
}

static* function < Function*pred_smgr_1::(PrologMachine*) {
	mach::FillAlternative(pred_smgr_1::exec_pred_smgr_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::s13))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_smgr_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_library::s9))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_termequal_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_termequal_2__1(mach));
}

static* function < Function*pred_termequal_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = sxx_library::s9;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_compare_3::exec_static);
}

static* function < Function*pred_not_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_not_1__1(mach));
}

static* function < Function*pred_not_1::(PrologMachine*) {
	mach::FillAlternative(pred_not_1::exec_pred_not_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_library::s0, &tempVar, F(sxx_library::s40, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_not_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_freeze_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_freeze_2__1(mach));
}

static* function < Function*pred_freeze_2::(PrologMachine*) {
	mach::FillAlternative(pred_freeze_2::exec_pred_freeze_2__2);
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
	local_aregs[1] = F(sxx_library::s0, &tempVar, F(sxx_library::s44, { var1->Deref(), var2->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_freeze_2::(PrologMachine*) {
	mach::RemoveChoice();
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}

static* function < Function*pred_execpendinggoals_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_execpendinggoals_1__1(mach));
}

static* function < Function*pred_execpendinggoals_1::(PrologMachine*) {
	mach::FillAlternative(pred_execpendinggoals_1::exec_pred_execpendinggoals_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_execcontinuation_0::exec_static);
}

static* function < Function*pred_execpendinggoals_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_library::s5, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sxx_library::s39, { var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_exec_1::exec_static);
}
