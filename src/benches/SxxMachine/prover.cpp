using namespace std;

#include "prover.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../machine/SxxMachine/Var.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  prover::s_cut = Data::Intern("cut");
Const* const  prover::s1 = Data::Intern("#");
Const* const  prover::s2 = Data::Intern("&");
Const* const  prover::s3 = Data::Intern("+");
Const* const  prover::s4 = Data::Intern("-");
Const* const  prover::s5 = Data::Intern(".");
Const* const  prover::s6 = Data::Intern(":-");
Const* const  prover::s_a = Data::Intern("a");
Const* const  prover::s_add_conjunction = Data::Intern("add_conjunction");
Const* const  prover::s_b = Data::Intern("b");
Const* const  prover::s_c = Data::Intern("c");
Const* const  prover::s_call = Data::Intern("call");
Const* const  prover::s_expand = Data::Intern("expand");
Const* const  prover::s_extend = Data::Intern("extend");
Const* const  prover::s_fail = Data::Intern("fail");
Const* const  prover::s_fs = Data::Intern("fs");
Const* const  prover::s_fx = Data::Intern("fx");
Const* const  prover::s_implies = Data::Intern("implies");
Const* const  prover::s_includes = Data::Intern("includes");
Const* const  prover::s_on_load_prover = Data::Intern("on_load_prover");
Const* const  prover::s_op = Data::Intern("op");
Const* const  prover::s_opposite = Data::Intern("opposite");
Const* const  prover::s_problem = Data::Intern("problem");
Const* const  prover::s_prover = Data::Intern("prover");
Const* const  prover::s_refute = Data::Intern("refute");
Const* const  prover::s_refuted = Data::Intern("refuted");
Const* const  prover::s_to_be = Data::Intern("to_be");
Const* const  prover::s_top = Data::Intern("top");
Const* const  prover::s_unify = Data::Intern("unify");
Const* const  prover::s_write = Data::Intern("write");
Const* const  prover::s_xfy = Data::Intern("xfy");
Int* const  prover::posint1 = Data::Number(1LL);
Int* const  prover::posint2 = Data::Number(2LL);
Int* const  prover::posint3 = Data::Number(3LL);
Int* const  prover::posint4 = Data::Number(4LL);
Int* const  prover::posint5 = Data::Number(5LL);
Int* const  prover::posint6 = Data::Number(6LL);
Int* const  prover::posint7 = Data::Number(7LL);
Int* const  prover::posint8 = Data::Number(8LL);
Int* const  prover::posint9 = Data::Number(9LL);
Int* const  prover::posint10 = Data::Number(10LL);
Int* const  prover::posint500 = Data::Number(500LL);
Int* const  prover::posint850 = Data::Number(850LL);
Int* const  prover::posint950 = Data::Number(950LL);
const Operation prover::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation prover::reg_on_load_prover_0 = PredTable::Register("on_load_prover", 0, new pred_on_load_prover_0());
const Operation prover::reg_prover_0 = PredTable::Register("prover", 0, new pred_prover_0());
const Operation prover::reg_problem_3 = PredTable::Register("problem", 3, new pred_problem_3());
const Operation prover::reg_implies_2 = PredTable::Register("implies", 2, new pred_implies_2());
const Operation prover::reg_opposite_2 = PredTable::Register("opposite", 2, new pred_opposite_2());
const Operation prover::reg_add_conjunction_3 = PredTable::Register("add_conjunction", 3, new pred_add_conjunction_3());
const Operation prover::reg_expand_3 = PredTable::Register("expand", 3, new pred_expand_3());
const Operation prover::reg_includes_2 = PredTable::Register("includes", 2, new pred_includes_2());
const Operation prover::reg_extend_6 = PredTable::Register("extend", 6, new pred_extend_6());
const Operation prover::reg_refute_1 = PredTable::Register("refute", 1, new pred_refute_1());

	Operation prover::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation prover::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_prover_0::exec_static);
	}

	Operation prover::pred_on_load_prover_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_on_load_prover_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_on_load_prover_0__1(mach));
	}

	Operation prover::pred_on_load_prover_0::exec_pred_on_load_prover_0__1(Prolog* mach) {
		mach->FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(prover::s_op, prover::posint950, prover::s_xfy, prover::s1);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation prover::pred_on_load_prover_0::exec_pred_on_load_prover_0__2(Prolog* mach) {
		mach->FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(prover::s_op, prover::posint850, prover::s_xfy, prover::s2);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation prover::pred_on_load_prover_0::exec_pred_on_load_prover_0__3(Prolog* mach) {
		mach->FillAlternative(pred_on_load_prover_0::exec_pred_on_load_prover_0__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(prover::s_op, prover::posint500, prover::s_fx, prover::s3);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation prover::pred_on_load_prover_0::exec_pred_on_load_prover_0__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(prover::s_op, prover::posint500, prover::s_fx, prover::s4);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation prover::pred_prover_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_prover_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_prover_0__1(mach));
	}

	Operation prover::pred_prover_0::exec_pred_prover_0__1(Prolog* mach) {
		mach->FillAlternative(pred_prover_0::exec_pred_prover_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = var1;
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = Data::F(prover::s_implies, { var2->Deref(), var3->Deref(), Data::F(prover::s_fail, { continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_problem_3::exec_static);
	}

	Operation prover::pred_prover_0::exec_pred_prover_0__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_problem_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_problem_3__1(mach));
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__1(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s4, prover::s_a)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s3, prover::s_a)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__2(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint2))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s3, prover::s_a)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s2, Data::F(prover::s4, prover::s_a), Data::F(prover::s4, prover::s_a))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__3(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s4, prover::s_a)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s1, Data::F(prover::s3, prover::s_to_be), Data::F(prover::s4, prover::s_to_be))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__4(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint4))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s2, Data::F(prover::s4, prover::s_a), Data::F(prover::s4, prover::s_a))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s4, prover::s_a)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__5(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint5))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s4, prover::s_a)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s1, Data::F(prover::s3, prover::s_b), Data::F(prover::s4, prover::s_a))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__6(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint6))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s2, Data::F(prover::s4, prover::s_a), Data::F(prover::s4, prover::s_b))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s2, Data::F(prover::s4, prover::s_b), Data::F(prover::s4, prover::s_a))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__7(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint7))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s4, prover::s_a)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s1, Data::F(prover::s4, prover::s_b), Data::F(prover::s2, Data::F(prover::s3, prover::s_b), Data::F(prover::s4, prover::s_a)))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__8(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint8))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s1, Data::F(prover::s4, prover::s_a), Data::F(prover::s1, Data::F(prover::s4, prover::s_b), Data::F(prover::s3, prover::s_c)))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s1, Data::F(prover::s4, prover::s_b), Data::F(prover::s1, Data::F(prover::s4, prover::s_a), Data::F(prover::s3, prover::s_c)))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__9(Prolog* mach) {
		mach->FillAlternative(pred_problem_3::exec_pred_problem_3__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint9))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s1, Data::F(prover::s4, prover::s_a), Data::F(prover::s3, prover::s_b))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s1, Data::F(prover::s2, Data::F(prover::s3, prover::s_b), Data::F(prover::s4, prover::s_c)), Data::F(prover::s1, Data::F(prover::s4, prover::s_a), Data::F(prover::s3, prover::s_c)))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_problem_3::exec_pred_problem_3__10(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::posint10))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s2, Data::F(prover::s1, Data::F(prover::s4, prover::s_a), Data::F(prover::s3, prover::s_c)), Data::F(prover::s1, Data::F(prover::s4, prover::s_b), Data::F(prover::s3, prover::s_c)))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s1, Data::F(prover::s2, Data::F(prover::s4, prover::s_a), Data::F(prover::s4, prover::s_b)), Data::F(prover::s3, prover::s_c))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_implies_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_implies_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_implies_2__1(mach));
	}

	Operation prover::pred_implies_2::exec_pred_implies_2__1(Prolog* mach) {
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3;
		local_aregs[2] = Data::F(prover::s_add_conjunction, { var1->Deref(), var3->Deref(), Data::F(prover::s_fs, { Const::Nil, Const::Nil, Const::Nil, Const::Nil }), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_opposite_2::exec_static);
	}

	Operation prover::pred_opposite_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_opposite_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_opposite_2__1(mach));
	}

	Operation prover::pred_opposite_2::exec_pred_opposite_2__1(Prolog* mach) {
		mach->FillAlternative(pred_opposite_2::exec_pred_opposite_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s2, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s1, var3, var4)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(prover::s_opposite, { var1->Deref(), var3->Deref(), Data::F(prover::s_opposite, { var2->Deref(), var4->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_opposite_2::exec_pred_opposite_2__2(Prolog* mach) {
		mach->FillAlternative(pred_opposite_2::exec_pred_opposite_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s1, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s2, var3, var4)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(prover::s_opposite, { var1->Deref(), var3->Deref(), Data::F(prover::s_opposite, { var2->Deref(), var4->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_opposite_2::exec_pred_opposite_2__3(Prolog* mach) {
		mach->FillAlternative(pred_opposite_2::exec_pred_opposite_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s3, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s4, { var1->Deref() })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_opposite_2::exec_pred_opposite_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s4, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s3, { var1->Deref() })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_add_conjunction_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_add_conjunction_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_add_conjunction_3__1(mach));
	}

	Operation prover::pred_add_conjunction_3::exec_pred_add_conjunction_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4;
		local_aregs[3] = Data::F(prover::s_expand, { var2->Deref(), var4->Deref(), var5, Data::F(prover::s_refute, { var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_expand_3::exec_static);
	}

	Operation prover::pred_expand_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_expand_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_expand_3__1(mach));
	}

	Operation prover::pred_expand_3::exec_pred_expand_3__1(Prolog* mach) {
		mach->FillAlternative(pred_expand_3::exec_pred_expand_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(prover::s_refuted))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(prover::s_refuted))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_expand_3::exec_pred_expand_3__2(Prolog* mach) {
		mach->FillAlternative(pred_expand_3::exec_pred_expand_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s2, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s_fs, var3, var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(prover::s_refuted))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(prover::s2, { var1->Deref(), var2->Deref() });
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_includes_2::exec_static);
	}

	Operation prover::pred_expand_3::exec_pred_expand_3__3(Prolog* mach) {
		mach->FillAlternative(pred_expand_3::exec_pred_expand_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s2, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s_fs, var3, var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(prover::s_fs, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = Data::F(prover::s2, { var1->Deref(), var2->Deref() });
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_includes_2::exec_static);
	}

	Operation prover::pred_expand_3::exec_pred_expand_3__4(Prolog* mach) {
		mach->FillAlternative(pred_expand_3::exec_pred_expand_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s2, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s_fs, var3, var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(prover::s_expand, { var1->Deref(), Data::F(prover::s_fs, { var3->Deref(), Data::F(prover::s5, Data::F(prover::s2, { var1->Deref(), var2->Deref() }), var4->Deref()), var5->Deref(), var6->Deref() }), var8, Data::F(prover::s_expand, { var2->Deref(), var8->Deref(), var7->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_expand_3::exec_pred_expand_3__5(Prolog* mach) {
		mach->FillAlternative(pred_expand_3::exec_pred_expand_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s1, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s_fs, var3, var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var7))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(prover::s_opposite, Data::F(prover::s1, { var1->Deref(), var2->Deref() }), var8, Data::F(prover::s_extend, { var8->Deref(), var3->Deref(), var4->Deref(), var9, Data::F(prover::s_fs, { var9->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }), var7->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_expand_3::exec_pred_expand_3__6(Prolog* mach) {
		mach->FillAlternative(pred_expand_3::exec_pred_expand_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s3, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s_fs, var2, var3, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(prover::s_extend, { var1->Deref(), var4->Deref(), var5->Deref(), var7, Data::F(prover::s_fs, { var2->Deref(), var3->Deref(), var7->Deref(), var5->Deref() }), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_expand_3::exec_pred_expand_3__7(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s4, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(prover::s_fs, var2, var3, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var5->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var7;
		local_aregs[4] = Data::F(prover::s_fs, { var2->Deref(), var3->Deref(), var4->Deref(), var7->Deref() });
		local_aregs[5] = var6->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_extend_6::exec_static);
	}

	Operation prover::pred_includes_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_includes_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_includes_2__1(mach));
	}

	Operation prover::pred_includes_2::exec_pred_includes_2__1(Prolog* mach) {
		mach->FillAlternative(pred_includes_2::exec_pred_includes_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_includes_2::exec_pred_includes_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_includes_2::exec_static);
	}

	Operation prover::pred_extend_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_extend_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_extend_6__1(mach));
	}

	Operation prover::pred_extend_6::exec_pred_extend_6__1(Prolog* mach) {
		mach->FillAlternative(pred_extend_6::exec_pred_extend_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
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
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(prover::s_refuted))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_includes_2::exec_static);
	}

	Operation prover::pred_extend_6::exec_pred_extend_6__2(Prolog* mach) {
		mach->FillAlternative(pred_extend_6::exec_pred_extend_6__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
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
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_includes_2::exec_static);
	}

	Operation prover::pred_extend_6::exec_pred_extend_6__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
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
		if(!((areg3)->Unify(Data::F(prover::s5, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation prover::pred_refute_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation prover::pred_refute_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_refute_1__1(mach));
	}

	Operation prover::pred_refute_1::exec_pred_refute_1__1(Prolog* mach) {
		mach->FillAlternative(pred_refute_1::exec_pred_refute_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(prover::s_refuted))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation prover::pred_refute_1::exec_pred_refute_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(prover::s_fs, Data::F(prover::s5, Data::F(prover::s2, var1, var2), var3), var4, var5, var6)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var7;
		local_aregs[2] = Data::F(prover::s_opposite, { var2->Deref(), var8, Data::F(prover::s_unify, Data::F(prover::s_fs, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref() }), var9, Data::F(prover::s_add_conjunction, { var7->Deref(), var2->Deref(), var9->Deref(), Data::F(prover::s_add_conjunction, { var7->Deref(), var8->Deref(), var9->Deref(), Data::F(prover::s_add_conjunction, { var1->Deref(), var8->Deref(), var9->Deref(), continuation }) }) })) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_opposite_2::exec_static);
	}
}
