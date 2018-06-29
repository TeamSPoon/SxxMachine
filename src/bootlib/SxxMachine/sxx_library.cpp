using namespace std;

#include "sxx_library.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "sxx_meta.h"
#include "../../machine/SxxMachine/Metaterm.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  sxx_library::s_cut = Data::Intern("cut");
Const* const  sxx_library::s1 = Data::Intern(" = ");
Const* const  sxx_library::s2 = Data::Intern(",");
Const* const  sxx_library::s3 = Data::Intern("-");
Const* const  sxx_library::s4 = Data::Intern("->");
Const* const  sxx_library::s5 = Data::Intern(".");
Const* const  sxx_library::s6 = Data::Intern(":-");
Const* const  sxx_library::s7 = Data::Intern(";");
Const* const  sxx_library::s8 = Data::Intern("<");
Const* const  sxx_library::s9 = Data::Intern("=");
Const* const  sxx_library::s10 = Data::Intern("=:=");
Const* const  sxx_library::s11 = Data::Intern("=<");
Const* const  sxx_library::s12 = Data::Intern("==");
Const* const  sxx_library::s13 = Data::Intern(">");
Const* const  sxx_library::s14 = Data::Intern(">=");
Const* const  sxx_library::s15 = Data::Intern("?- ");
Const* const  sxx_library::s16 = Data::Intern("@<");
Const* const  sxx_library::s17 = Data::Intern("@=<");
Const* const  sxx_library::s18 = Data::Intern("@>");
Const* const  sxx_library::s19 = Data::Intern("@>=");
Const* const  sxx_library::s_Yes = Data::Intern("Yes");
Const* const  sxx_library::s_addfindall = Data::Intern("addfindall");
Const* const  sxx_library::s_allassumed = Data::Intern("allassumed");
Const* const  sxx_library::s_append = Data::Intern("append");
Const* const  sxx_library::s_arithequal = Data::Intern("arithequal");
Const* const  sxx_library::s_assume = Data::Intern("assume");
Const* const  sxx_library::s_assumed = Data::Intern("assumed");
Const* const  sxx_library::s_assumeduring = Data::Intern("assumeduring");
Const* const  sxx_library::s_atom = Data::Intern("atom");
Const* const  sxx_library::s_atomic = Data::Intern("atomic");
Const* const  sxx_library::s_atomic2 = Data::Intern("atomic2");
Const* const  sxx_library::s_call = Data::Intern("call");
Const* const  sxx_library::s_compare = Data::Intern("compare");
Const* const  sxx_library::s_copy_term = Data::Intern("copy_term");
Const* const  sxx_library::s_cputime = Data::Intern("cputime");
Const* const  sxx_library::s_exec = Data::Intern("exec");
Const* const  sxx_library::s_execcontinuation = Data::Intern("execcontinuation");
Const* const  sxx_library::s_execdisj = Data::Intern("execdisj");
Const* const  sxx_library::s_execpendinggoals = Data::Intern("execpendinggoals");
Const* const  sxx_library::s_fail = Data::Intern("fail");
Const* const  sxx_library::s_findall = Data::Intern("findall");
Const* const  sxx_library::s_findall2 = Data::Intern("findall2");
Const* const  sxx_library::s_freeze = Data::Intern("freeze");
Const* const  sxx_library::s_freeze_internal = Data::Intern("freeze_internal");
Const* const  sxx_library::s_get0 = Data::Intern("get0");
Const* const  sxx_library::s_initfindall = Data::Intern("initfindall");
Const* const  sxx_library::s_integer = Data::Intern("integer");
Const* const  sxx_library::s_is = Data::Intern("is");
Const* const  sxx_library::s_loop = Data::Intern("loop");
Const* const  sxx_library::s_m1 = Data::Intern("m1");
Const* const  sxx_library::s_max = Data::Intern("max");
Const* const  sxx_library::s52 = Data::Intern("more? ");
Const* const  sxx_library::s_nl = Data::Intern("nl");
Const* const  sxx_library::s_not = Data::Intern("not");
Const* const  sxx_library::s_noteq = Data::Intern("noteq");
Const* const  sxx_library::s_notmore = Data::Intern("notmore");
Const* const  sxx_library::s_nrev = Data::Intern("nrev");
Const* const  sxx_library::s_or = Data::Intern("or");
Const* const  sxx_library::s_retrievefindall = Data::Intern("retrievefindall");
Const* const  sxx_library::s_runtime = Data::Intern("runtime");
Const* const  sxx_library::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  sxx_library::s_smallerthan = Data::Intern("smallerthan");
Const* const  sxx_library::s_smeq = Data::Intern("smeq");
Const* const  sxx_library::s_smgr = Data::Intern("smgr");
Const* const  sxx_library::s_sort = Data::Intern("sort");
Const* const  sxx_library::s_specialgoal = Data::Intern("specialgoal");
Const* const  sxx_library::s_split = Data::Intern("split");
Const* const  sxx_library::s_statistics = Data::Intern("statistics");
Const* const  sxx_library::s_termequal = Data::Intern("termequal");
Const* const  sxx_library::s_termgreaterequal = Data::Intern("termgreaterequal");
Const* const  sxx_library::s_termgreaterthan = Data::Intern("termgreaterthan");
Const* const  sxx_library::s_termsmallerequal = Data::Intern("termsmallerequal");
Const* const  sxx_library::s_termsmallerthan = Data::Intern("termsmallerthan");
Const* const  sxx_library::s_time = Data::Intern("time");
Const* const  sxx_library::s_top = Data::Intern("top");
Const* const  sxx_library::s_toplevel = Data::Intern("toplevel");
Const* const  sxx_library::s_true = Data::Intern("true");
Const* const  sxx_library::s_type_of = Data::Intern("type_of");
Const* const  sxx_library::s_unify = Data::Intern("unify");
Const* const  sxx_library::s_untilend = Data::Intern("untilend");
Const* const  sxx_library::s_var = Data::Intern("var");
Const* const  sxx_library::s_vread = Data::Intern("vread");
Const* const  sxx_library::s_write = Data::Intern("write");
Const* const  sxx_library::s_writevars = Data::Intern("writevars");
Int* const  sxx_library::posint0 = Data::Number(0LL);
Int* const  sxx_library::posint1 = Data::Number(1LL);
Int* const  sxx_library::posint10 = Data::Number(10LL);
const Operation sxx_library::reg_toplevel_0 = PredTable::Register("toplevel", 0, new SxxMachine::sxx_library::pred_toplevel_0());
const Operation sxx_library::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation sxx_library::reg_notmore_0 = PredTable::Register("notmore", 0, new SxxMachine::sxx_library::pred_notmore_0());
const Operation sxx_library::reg_noteq_2 = PredTable::Register("noteq", 2, new SxxMachine::sxx_library::pred_noteq_2());
const Operation sxx_library::reg_untilend_1 = PredTable::Register("untilend", 1, new SxxMachine::sxx_library::pred_untilend_1());
const Operation sxx_library::reg_writevars_1 = PredTable::Register("writevars", 1, new SxxMachine::sxx_library::pred_writevars_1());
const Operation sxx_library::reg_nrev_2 = PredTable::Register("nrev", 2, new SxxMachine::sxx_library::pred_nrev_2());
const Operation sxx_library::reg_append_3 = PredTable::Register("append", 3, new SxxMachine::sxx_library::pred_append_3());
const Operation sxx_library::reg_max_3 = PredTable::Register("max", 3, new SxxMachine::sxx_library::pred_max_3());
const Operation sxx_library::reg_sort_2 = PredTable::Register("sort", 2, new SxxMachine::sxx_library::pred_sort_2());
const Operation sxx_library::reg_split_4 = PredTable::Register("split", 4, new SxxMachine::sxx_library::pred_split_4());
const Operation sxx_library::reg_time_1 = PredTable::Register("time", 1, new SxxMachine::sxx_library::pred_time_1());
const Operation sxx_library::reg_exec_1 = PredTable::Register("exec", 1, new SxxMachine::sxx_library::pred_exec_1());
const Operation sxx_library::reg_execdisj_2 = PredTable::Register("execdisj", 2, new SxxMachine::sxx_library::pred_execdisj_2());
const Operation sxx_library::reg_loop_1 = PredTable::Register("loop", 1, new SxxMachine::sxx_library::pred_loop_1());
const Operation sxx_library::reg_or_2 = PredTable::Register("or", 2, new SxxMachine::sxx_meta::pred_or_2());
const Operation sxx_library::reg_findall_3 = PredTable::Register("findall", 3, new SxxMachine::sxx_library::pred_findall_3());
const Operation sxx_library::reg_findall2_4 = PredTable::Register("findall2", 4, new SxxMachine::sxx_library::pred_findall2_4());
const Operation sxx_library::reg_copy_term_2 = PredTable::Register("copy_term", 2, new SxxMachine::sxx_library::pred_copy_term_2());
const Operation sxx_library::reg_var_1 = PredTable::Register("var", 1, new SxxMachine::sxx_library::pred_var_1());
const Operation sxx_library::reg_atomic_1 = PredTable::Register("atomic", 1, new SxxMachine::sxx_library::pred_atomic_1());
const Operation sxx_library::reg_atomic2_1 = PredTable::Register("atomic2", 1, new SxxMachine::sxx_library::pred_atomic2_1());
const Operation sxx_library::reg_atom_1 = PredTable::Register("atom", 1, new SxxMachine::sxx_library::pred_atom_1());
const Operation sxx_library::reg_integer_1 = PredTable::Register("integer", 1, new SxxMachine::sxx_library::pred_integer_1());
const Operation sxx_library::reg_assumeduring_2 = PredTable::Register("assumeduring", 2, new SxxMachine::sxx_library::pred_assumeduring_2());
const Operation sxx_library::reg_assumed_1 = PredTable::Register("assumed", 1, new SxxMachine::sxx_library::pred_assumed_1());
const Operation sxx_library::reg_m1_2 = PredTable::Register("m1", 2, new SxxMachine::sxx_library::pred_m1_2());
const Operation sxx_library::reg_statistics_2 = PredTable::Register("statistics", 2, new SxxMachine::sxx_library::pred_statistics_2());
const Operation sxx_library::reg_specialgoal_2 = PredTable::Register("specialgoal", 2, new SxxMachine::sxx_library::pred_specialgoal_2());
const Operation sxx_library::reg_termsmallerthan_2 = PredTable::Register("termsmallerthan", 2, new SxxMachine::sxx_library::pred_termsmallerthan_2());
const Operation sxx_library::reg_termgreaterthan_2 = PredTable::Register("termgreaterthan", 2, new SxxMachine::sxx_library::pred_termgreaterthan_2());
const Operation sxx_library::reg_termsmallerequal_2 = PredTable::Register("termsmallerequal", 2, new SxxMachine::sxx_library::pred_termsmallerequal_2());
const Operation sxx_library::reg_smeq_1 = PredTable::Register("smeq", 1, new SxxMachine::sxx_library::pred_smeq_1());
const Operation sxx_library::reg_termgreaterequal_2 = PredTable::Register("termgreaterequal", 2, new SxxMachine::sxx_library::pred_termgreaterequal_2());
const Operation sxx_library::reg_smgr_1 = PredTable::Register("smgr", 1, new SxxMachine::sxx_library::pred_smgr_1());
const Operation sxx_library::reg_termequal_2 = PredTable::Register("termequal", 2, new SxxMachine::sxx_library::pred_termequal_2());
const Operation sxx_library::reg_not_1 = PredTable::Register("not", 1, new SxxMachine::sxx_library::pred_not_1());
const Operation sxx_library::reg_freeze_2 = PredTable::Register("freeze", 2, new SxxMachine::Metaterm::pred_freeze_2());
const Operation sxx_library::reg_execpendinggoals_1 = PredTable::Register("execpendinggoals", 1, new SxxMachine::sxx_library::pred_execpendinggoals_1());

	Operation sxx_library::pred_toplevel_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_toplevel_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_toplevel_0__1(mach));
	}

	Operation sxx_library::pred_toplevel_0::exec_pred_toplevel_0__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_toplevel_0::exec_pred_toplevel_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(sxx_library::s_fail, { continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_top_0::exec_static);
	}

	Operation sxx_library::pred_toplevel_0::exec_pred_toplevel_0__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_toplevel_0::exec_static);
	}

	Operation sxx_library::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation sxx_library::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_top_0::exec_pred_top_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = sxx_library::s15;
		local_aregs[1] = Data::F(sxx_library::s_vread, var1, var2, Data::F(sxx_library::s_exec, { var1->Deref(), Data::F(sxx_library::s_writevars, { var2->Deref(), Data::F(sxx_library::s_write, sxx_library::s_Yes, Data::F(sxx_library::s_nl, Data::F(sxx_library::s_notmore, { mach->HC(Data::F(sxx_library::s_fail, { continuation })) }))) }) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation sxx_library::pred_top_0::exec_pred_top_0__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_top_0::exec_static);
	}

	Operation sxx_library::pred_notmore_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_notmore_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_notmore_0__1(mach));
	}

	Operation sxx_library::pred_notmore_0::exec_pred_notmore_0__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_notmore_0::exec_pred_notmore_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var1 = Data::V(mach);
		local_aregs[0] = sxx_library::s52;
		local_aregs[1] = Data::F(sxx_library::s_get0, var1, Data::F(sxx_library::s_noteq, { var1->Deref(), sxx_library::posint10, mach->HC(Data::F(sxx_library::s_untilend, { var1->Deref(), Data::F(sxx_library::s_fail, { continuation }) })) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation sxx_library::pred_notmore_0::exec_pred_notmore_0__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_noteq_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_noteq_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_noteq_2__1(mach));
	}

	Operation sxx_library::pred_noteq_2::exec_pred_noteq_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_noteq_2::exec_pred_noteq_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_library::s_fail, { continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_noteq_2::exec_pred_noteq_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_untilend_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_untilend_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_untilend_1__1(mach));
	}

	Operation sxx_library::pred_untilend_1::exec_pred_untilend_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_untilend_1::exec_pred_untilend_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::posint10))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_untilend_1::exec_pred_untilend_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2;
		local_aregs[1] = Data::F(sxx_library::s_untilend, { var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_get0_1::exec_static);
	}

	Operation sxx_library::pred_writevars_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_writevars_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_writevars_1__1(mach));
	}

	Operation sxx_library::pred_writevars_1::exec_pred_writevars_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_writevars_1::exec_pred_writevars_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_writevars_1::exec_pred_writevars_1__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_writevars_1::exec_pred_writevars_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s5, Data::F(sxx_library::s9, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Data::F(sxx_library::s_write, sxx_library::s1, Data::F(sxx_library::s_write, { var1->Deref(), Data::F(sxx_library::s_nl, Data::F(sxx_library::s_fail, { continuation })) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation sxx_library::pred_writevars_1::exec_pred_writevars_1__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_writevars_1::exec_static);
	}

	Operation sxx_library::pred_nrev_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_nrev_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_nrev_2__1(mach));
	}

	Operation sxx_library::pred_nrev_2::exec_pred_nrev_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_nrev_2::exec_pred_nrev_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_nrev_2::exec_pred_nrev_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4;
		local_aregs[2] = Data::F(sxx_library::s_append, { var4->Deref(), Data::F(sxx_library::s5, { var1->Deref(), Const::Nil }), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_nrev_2::exec_static);
	}

	Operation sxx_library::pred_append_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_append_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_append_3__1(mach));
	}

	Operation sxx_library::pred_append_3::exec_pred_append_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_append_3::exec_pred_append_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_append_3::exec_pred_append_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sxx_library::s5, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_append_3::exec_static);
	}

	Operation sxx_library::pred_max_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_max_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_max_3__1(mach));
	}

	Operation sxx_library::pred_max_3::exec_pred_max_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_max_3::exec_pred_max_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation sxx_library::pred_max_3::exec_pred_max_3__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_max_3::exec_pred_max_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation sxx_library::pred_max_3::exec_pred_max_3__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_sort_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_sort_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sort_2__1(mach));
	}

	Operation sxx_library::pred_sort_2::exec_pred_sort_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_sort_2::exec_pred_sort_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_sort_2::exec_pred_sort_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4;
		local_aregs[3] = var5;
		local_aregs[4] = Data::F(sxx_library::s_sort, { var4->Deref(), var6, Data::F(sxx_library::s_sort, { var5->Deref(), var7, Data::F(sxx_library::s_append, { var6->Deref(), Data::F(sxx_library::s5, { var1->Deref(), var7->Deref() }), var3->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_split_4::exec_static);
	}

	Operation sxx_library::pred_split_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_split_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_split_4__1(mach));
	}

	Operation sxx_library::pred_split_4::exec_pred_split_4__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_split_4::exec_pred_split_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_split_4::exec_pred_split_4__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_split_4::exec_pred_split_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s5, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sxx_library::s5, { var2->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = mach->HC(Data::F(sxx_library::s_split, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation sxx_library::pred_split_4::exec_pred_split_4__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s5, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(sxx_library::s5, { var2->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_split_4::exec_static);
	}

	Operation sxx_library::pred_time_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_time_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_time_1__1(mach));
	}

	Operation sxx_library::pred_time_1::exec_pred_time_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2;
		local_aregs[1] = Data::F(sxx_library::s_exec, { var1->Deref(), Data::F(sxx_library::s_cputime, var3, Data::F(sxx_library::s_is, var4, Data::F(sxx_library::s3, { var3->Deref(), var2->Deref() }), Data::F(sxx_library::s_write, { var4->Deref(), Data::F(sxx_library::s_nl, { continuation }) }))) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_cputime_1::exec_static);
	}

	Operation sxx_library::pred_exec_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_exec_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_exec_1__1(mach));
	}

	Operation sxx_library::pred_exec_1::exec_pred_exec_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_exec_1::exec_pred_exec_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sxx_library::s_fail, { continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sxx_library::pred_exec_1::exec_pred_exec_1__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_exec_1::exec_pred_exec_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s2, var1, var2)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_library::s_exec, { var1->Deref(), Data::F(sxx_library::s_exec, { var2->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_exec_1::exec_pred_exec_1__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_exec_1::exec_pred_exec_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_library::s_execdisj, Data::F(sxx_library::s4, { var1->Deref(), var2->Deref() }), sxx_library::s_true, continuation);
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_exec_1::exec_pred_exec_1__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_exec_1::exec_pred_exec_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_library::s_execdisj, { var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_exec_1::exec_pred_exec_1__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_exec_1::exec_pred_exec_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = mach->HC(Data::F(sxx_library::s_exec, { var2->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_specialgoal_2::exec_static);
	}

	Operation sxx_library::pred_exec_1::exec_pred_exec_1__6(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call2;
	}

	Operation sxx_library::pred_execdisj_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_execdisj_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_execdisj_2__1(mach));
	}

	Operation sxx_library::pred_execdisj_2::exec_pred_execdisj_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_execdisj_2::exec_pred_execdisj_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sxx_library::s_exec, { var2->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_execdisj_2::exec_pred_execdisj_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_execdisj_2::exec_pred_execdisj_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_library::s_exec, { var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_execdisj_2::exec_pred_execdisj_2__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_execdisj_2::exec_pred_execdisj_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_execdisj_2::exec_pred_execdisj_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_loop_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_loop_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_loop_1__1(mach));
	}

	Operation sxx_library::pred_loop_1::exec_pred_loop_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_loop_1::exec_pred_loop_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::posint0))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_loop_1::exec_pred_loop_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2;
		local_aregs[1] = Data::F(sxx_library::s3, { var1->Deref(), sxx_library::posint1 });
		local_aregs[2] = Data::F(sxx_library::s_loop, { var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation sxx_library::pred_or_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_or_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_or_2__1(mach));
	}

	Operation sxx_library::pred_or_2::exec_pred_or_2__1(Prolog* mach) {
		mach->FillAlternative(pred_or_2::exec_pred_or_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_or_2::exec_pred_or_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_findall_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_findall_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_findall_3__1(mach));
	}

	Operation sxx_library::pred_findall_3::exec_pred_findall_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(sxx_library::s_findall2, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_initfindall_1::exec_static);
	}

	Operation sxx_library::pred_findall2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_findall2_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_findall2_4__1(mach));
	}

	Operation sxx_library::pred_findall2_4::exec_pred_findall2_4__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_findall2_4::exec_pred_findall2_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Data::F(sxx_library::s_addfindall, { var1->Deref(), var4->Deref(), Data::F(sxx_library::s_fail, { continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_findall2_4::exec_pred_findall2_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_retrievefindall_2::exec_static);
	}

	Operation sxx_library::pred_copy_term_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_copy_term_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_copy_term_2__1(mach));
	}

	Operation sxx_library::pred_copy_term_2::exec_pred_copy_term_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(sxx_library::s9, { var3->Deref(), var1->Deref() });
		local_aregs[2] = Data::F(sxx_library::s5, { var2->Deref(), Const::Nil });
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_findall_3::exec_static);
	}

	Operation sxx_library::pred_var_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_var_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_var_1__1(mach));
	}

	Operation sxx_library::pred_var_1::exec_pred_var_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = sxx_library::s_var;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_type_of_2::exec_static);
	}

	Operation sxx_library::pred_atomic_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_atomic_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_atomic_1__1(mach));
	}

	Operation sxx_library::pred_atomic_1::exec_pred_atomic_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = Data::F(sxx_library::s_atomic2, { var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_type_of_2::exec_static);
	}

	Operation sxx_library::pred_atomic2_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_atomic2_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_atomic2_1__1(mach));
	}

	Operation sxx_library::pred_atomic2_1::exec_pred_atomic2_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_atomic2_1::exec_pred_atomic2_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::s_atom))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_atomic2_1::exec_pred_atomic2_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::s_integer))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_atom_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_atom_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_atom_1__1(mach));
	}

	Operation sxx_library::pred_atom_1::exec_pred_atom_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = sxx_library::s_atom;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_type_of_2::exec_static);
	}

	Operation sxx_library::pred_integer_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_integer_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_integer_1__1(mach));
	}

	Operation sxx_library::pred_integer_1::exec_pred_integer_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = sxx_library::s_integer;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_type_of_2::exec_static);
	}

	Operation sxx_library::pred_assumeduring_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_assumeduring_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_assumeduring_2__1(mach));
	}

	Operation sxx_library::pred_assumeduring_2::exec_pred_assumeduring_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(sxx_library::s3, { var2->Deref(), var3 });
		local_aregs[1] = Data::F(sxx_library::s_exec, { var1->Deref(), Data::F(sxx_library::s_unify, sxx_library::posint1, var3->Deref(), continuation) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_assume_1::exec_static);
	}

	Operation sxx_library::pred_assumed_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_assumed_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_assumed_1__1(mach));
	}

	Operation sxx_library::pred_assumed_1::exec_pred_assumed_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2;
		local_aregs[1] = Data::F(sxx_library::s_m1, { var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_allassumed_1::exec_static);
	}

	Operation sxx_library::pred_m1_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_m1_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_m1_2__1(mach));
	}

	Operation sxx_library::pred_m1_2::exec_pred_m1_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_m1_2::exec_pred_m1_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s5, Data::F(sxx_library::s3, { var1->Deref(), var2 }), var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sxx_library::pred_m1_2::exec_pred_m1_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s5, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_m1_2::exec_static);
	}

	Operation sxx_library::pred_statistics_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_statistics_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_statistics_2__1(mach));
	}

	Operation sxx_library::pred_statistics_2::exec_pred_statistics_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sxx_library::s_runtime))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s5, var1, Data::F(sxx_library::s5, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_cputime_1::exec_static);
	}

	Operation sxx_library::pred_specialgoal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_specialgoal_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_specialgoal_2__1(mach));
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s8, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_smallerthan, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s11, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_smallerorequal, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s13, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_smallerthan, { var2->Deref(), var1->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s14, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_smallerorequal, { var2->Deref(), var1->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s10, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_arithequal, { var2->Deref(), var1->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__6(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s9, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_unify, { var2->Deref(), var1->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__7(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_or, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__8(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s16, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_termsmallerthan, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__9(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s18, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_termgreaterthan, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__10(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s17, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_termsmallerequal, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__11(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s19, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_termgreaterequal, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_specialgoal_2::exec_pred_specialgoal_2__12(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s12, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_library::s_termequal, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_termsmallerthan_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_termsmallerthan_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_termsmallerthan_2__1(mach));
	}

	Operation sxx_library::pred_termsmallerthan_2::exec_pred_termsmallerthan_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = sxx_library::s8;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation sxx_library::pred_termgreaterthan_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_termgreaterthan_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_termgreaterthan_2__1(mach));
	}

	Operation sxx_library::pred_termgreaterthan_2::exec_pred_termgreaterthan_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = sxx_library::s13;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation sxx_library::pred_termsmallerequal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_termsmallerequal_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_termsmallerequal_2__1(mach));
	}

	Operation sxx_library::pred_termsmallerequal_2::exec_pred_termsmallerequal_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = Data::F(sxx_library::s_smeq, { var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation sxx_library::pred_smeq_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_smeq_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_smeq_1__1(mach));
	}

	Operation sxx_library::pred_smeq_1::exec_pred_smeq_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_smeq_1::exec_pred_smeq_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::s8))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_smeq_1::exec_pred_smeq_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::s9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_termgreaterequal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_termgreaterequal_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_termgreaterequal_2__1(mach));
	}

	Operation sxx_library::pred_termgreaterequal_2::exec_pred_termgreaterequal_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = Data::F(sxx_library::s_smgr, { var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation sxx_library::pred_smgr_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_smgr_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_smgr_1__1(mach));
	}

	Operation sxx_library::pred_smgr_1::exec_pred_smgr_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_smgr_1::exec_pred_smgr_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::s13))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_smgr_1::exec_pred_smgr_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_library::s9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_termequal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_termequal_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_termequal_2__1(mach));
	}

	Operation sxx_library::pred_termequal_2::exec_pred_termequal_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = sxx_library::s9;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation sxx_library::pred_not_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_not_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_not_1__1(mach));
	}

	Operation sxx_library::pred_not_1::exec_pred_not_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_not_1::exec_pred_not_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sxx_library::s_fail, { continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_not_1::exec_pred_not_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_library::pred_freeze_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_freeze_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_freeze_2__1(mach));
	}

	Operation sxx_library::pred_freeze_2::exec_pred_freeze_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Metaterm::pred_freeze_2::exec_pred_freeze_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sxx_library::s_freeze_internal, { var1->Deref(), var2->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sxx_library::pred_freeze_2::exec_pred_freeze_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}

	Operation sxx_library::pred_execpendinggoals_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_library::pred_execpendinggoals_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_execpendinggoals_1__1(mach));
	}

	Operation sxx_library::pred_execpendinggoals_1::exec_pred_execpendinggoals_1__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_execpendinggoals_1::exec_pred_execpendinggoals_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_execcontinuation_0::exec_static);
	}

	Operation sxx_library::pred_execpendinggoals_1::exec_pred_execpendinggoals_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_library::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(sxx_library::s_execpendinggoals, { var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_exec_1::exec_static);
	}
}
