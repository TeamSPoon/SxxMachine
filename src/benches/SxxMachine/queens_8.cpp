using namespace std;

#include "queens_8.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  queens_8::s_cut = Data::Intern("cut");
Const* const  queens_8::s1 = Data::Intern("+");
Const* const  queens_8::s2 = Data::Intern("-");
Const* const  queens_8::s3 = Data::Intern(".");
Const* const  queens_8::s4 = Data::Intern(":-");
Const* const  queens_8::s5 = Data::Intern("=\\=");
Const* const  queens_8::s_call = Data::Intern("call");
Const* const  queens_8::s_fail = Data::Intern("fail");
Const* const  queens_8::s_is = Data::Intern("is");
Const* const  queens_8::s_not_attack = Data::Intern("not_attack");
Const* const  queens_8::s_queens = Data::Intern("queens");
Const* const  queens_8::s_range = Data::Intern("range");
Const* const  queens_8::s_select = Data::Intern("select");
Const* const  queens_8::s_smallerthan = Data::Intern("smallerthan");
Const* const  queens_8::s_top = Data::Intern("top");
Int* const  queens_8::posint1 = Data::Number(1LL);
Int* const  queens_8::posint8 = Data::Number(8LL);
const Operation queens_8::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation queens_8::reg_queens_2 = PredTable::Register("queens", 2, new pred_queens_2());
const Operation queens_8::reg_queens_3 = PredTable::Register("queens", 3, new pred_queens_3());
const Operation queens_8::reg_not_attack_2 = PredTable::Register("not_attack", 2, new pred_not_attack_2());
const Operation queens_8::reg_not_attack_3 = PredTable::Register("not_attack", 3, new pred_not_attack_3());
const Operation queens_8::reg_select_3 = PredTable::Register("select", 3, new pred_select_3());
const Operation queens_8::reg_range_3 = PredTable::Register("range", 3, new pred_range_3());

	Operation queens_8::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation queens_8::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation queens_8::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_top_0::exec_pred_top_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var1 = Data::V(mach);
		local_aregs[0] = queens_8::posint8;
		local_aregs[1] = var1;
		local_aregs[2] = Data::F(queens_8::s_fail, { continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_queens_2::exec_static);
	}

	Operation queens_8::pred_top_0::exec_pred_top_0__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation queens_8::pred_queens_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation queens_8::pred_queens_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_queens_2__1(mach));
	}

	Operation queens_8::pred_queens_2::exec_pred_queens_2__1(Prolog* mach) {
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
		local_aregs[0] = queens_8::posint1;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3;
		local_aregs[3] = Data::F(queens_8::s_queens, { var3->Deref(), Const::Nil, var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_range_3::exec_static);
	}

	Operation queens_8::pred_queens_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation queens_8::pred_queens_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_queens_3__1(mach));
	}

	Operation queens_8::pred_queens_3::exec_pred_queens_3__1(Prolog* mach) {
		mach->FillAlternative(pred_queens_3::exec_pred_queens_3__2);
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

	Operation queens_8::pred_queens_3::exec_pred_queens_3__2(Prolog* mach) {
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
		local_aregs[1] = var4;
		local_aregs[2] = var5;
		local_aregs[3] = Data::F(queens_8::s_not_attack, { var2->Deref(), var5->Deref(), Data::F(queens_8::s_queens, { var4->Deref(), Data::F(queens_8::s3, { var5->Deref(), var2->Deref() }), var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_select_3::exec_static);
	}

	Operation queens_8::pred_not_attack_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation queens_8::pred_not_attack_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_not_attack_2__1(mach));
	}

	Operation queens_8::pred_not_attack_2::exec_pred_not_attack_2__1(Prolog* mach) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = queens_8::posint1;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_not_attack_3::exec_static);
	}

	Operation queens_8::pred_not_attack_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation queens_8::pred_not_attack_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_not_attack_3__1(mach));
	}

	Operation queens_8::pred_not_attack_3::exec_pred_not_attack_3__1(Prolog* mach) {
		mach->FillAlternative(pred_not_attack_3::exec_pred_not_attack_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation queens_8::pred_not_attack_3::exec_pred_not_attack_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(queens_8::s3, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(queens_8::s1, { var1->Deref(), var4->Deref() });
		local_aregs[2] = Data::F(queens_8::s5, { var3->Deref(), Data::F(queens_8::s2, { var1->Deref(), var4->Deref() }), Data::F(queens_8::s_is, var5, Data::F(queens_8::s1, { var4->Deref(), queens_8::posint1 }), Data::F(queens_8::s_not_attack, { var2->Deref(), var3->Deref(), var5->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$005C$003D_2::exec_static);
	}

	Operation queens_8::pred_select_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation queens_8::pred_select_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_select_3__1(mach));
	}

	Operation queens_8::pred_select_3::exec_pred_select_3__1(Prolog* mach) {
		mach->FillAlternative(pred_select_3::exec_pred_select_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(queens_8::s3, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2->Deref()))) {
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

	Operation queens_8::pred_select_3::exec_pred_select_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(queens_8::s3, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(queens_8::s3, { var1->Deref(), var3 })))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_select_3::exec_static);
	}

	Operation queens_8::pred_range_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation queens_8::pred_range_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_range_3__1(mach));
	}

	Operation queens_8::pred_range_3::exec_pred_range_3__1(Prolog* mach) {
		mach->FillAlternative(pred_range_3::exec_pred_range_3__2);
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
		if(!((areg2)->Unify(Data::F(queens_8::s3, { var1->Deref(), Const::Nil })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation queens_8::pred_range_3::exec_pred_range_3__2(Prolog* mach) {
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
		if(!((areg2)->Unify(Data::F(queens_8::s3, { var1->Deref(), var3 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = Data::F(queens_8::s_is, var4, Data::F(queens_8::s1, { var1->Deref(), queens_8::posint1 }), Data::F(queens_8::s_range, { var4->Deref(), var2->Deref(), var3->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}
}
