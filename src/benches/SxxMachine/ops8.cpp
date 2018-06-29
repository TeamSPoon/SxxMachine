using namespace std;

#include "ops8.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  ops8::s_cut = Data::Intern("cut");
Const* const  ops8::s1 = Data::Intern("*");
Const* const  ops8::s2 = Data::Intern("+");
Const* const  ops8::s3 = Data::Intern("-");
Const* const  ops8::s4 = Data::Intern(".");
Const* const  ops8::s5 = Data::Intern("/");
Const* const  ops8::s6 = Data::Intern(":-");
Const* const  ops8::s7 = Data::Intern("^");
Const* const  ops8::s_call = Data::Intern("call");
Const* const  ops8::s_d = Data::Intern("d");
Const* const  ops8::s_exp = Data::Intern("exp");
Const* const  ops8::s_integer = Data::Intern("integer");
Const* const  ops8::s_is = Data::Intern("is");
Const* const  ops8::s_log = Data::Intern("log");
Const* const  ops8::s_ops8 = Data::Intern("ops8");
Const* const  ops8::s_top = Data::Intern("top");
Const* const  ops8::s_x = Data::Intern("x");
Int* const  ops8::posint0 = Data::Number(0LL);
Int* const  ops8::posint1 = Data::Number(1LL);
Int* const  ops8::posint2 = Data::Number(2LL);
Int* const  ops8::posint3 = Data::Number(3LL);
const Operation ops8::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation ops8::reg_ops8_0 = PredTable::Register("ops8", 0, new pred_ops8_0());
const Operation ops8::reg_d_3 = PredTable::Register("d", 3, new pred_d_3());

	Operation ops8::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation ops8::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation ops8::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_ops8_0::exec_static);
	}

	Operation ops8::pred_ops8_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation ops8::pred_ops8_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_ops8_0__1(mach));
	}

	Operation ops8::pred_ops8_0::exec_pred_ops8_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var1 = Data::V(mach);
		local_aregs[0] = Data::F(ops8::s1, Data::F(ops8::s2, ops8::s_x, ops8::posint1), Data::F(ops8::s1, Data::F(ops8::s2, Data::F(ops8::s7, ops8::s_x, ops8::posint2), ops8::posint2), Data::F(ops8::s2, Data::F(ops8::s7, ops8::s_x, ops8::posint3), ops8::posint3)));
		local_aregs[1] = ops8::s_x;
		local_aregs[2] = var1;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_d_3::exec_static);
	}

	Operation ops8::pred_d_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation ops8::pred_d_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_d_3__1(mach));
	}

	Operation ops8::pred_d_3::exec_pred_d_3__1(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__2);
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
		if(!((areg0)->Unify(Data::F(ops8::s2, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s2, var4, var5)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_d, { var1->Deref(), var3->Deref(), var4->Deref(), Data::F(ops8::s_d, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__2(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__3);
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
		if(!((areg0)->Unify(Data::F(ops8::s3, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s3, var4, var5)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_d, { var1->Deref(), var3->Deref(), var4->Deref(), Data::F(ops8::s_d, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__3(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__4);
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
		if(!((areg0)->Unify(Data::F(ops8::s1, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s2, Data::F(ops8::s1, var4, var2->Deref()), Data::F(ops8::s1, { var1->Deref(), var5 }))))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_d, { var1->Deref(), var3->Deref(), var4->Deref(), Data::F(ops8::s_d, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__4(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__5);
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
		if(!((areg0)->Unify(Data::F(ops8::s5, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s5, Data::F(ops8::s3, Data::F(ops8::s1, var4, var2->Deref()), Data::F(ops8::s1, { var1->Deref(), var5 })), Data::F(ops8::s7, { var2->Deref(), ops8::posint2 }))))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_d, { var1->Deref(), var3->Deref(), var4->Deref(), Data::F(ops8::s_d, { var2->Deref(), var3->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__5(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__6);
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
		if(!((areg0)->Unify(Data::F(ops8::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s1, Data::F(ops8::s1, var4, var2->Deref()), Data::F(ops8::s7, { var1->Deref(), var5 }))))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_integer, { var2->Deref(), Data::F(ops8::s_is, { var5->Deref(), Data::F(ops8::s3, { var2->Deref(), ops8::posint1 }), Data::F(ops8::s_d, { var1->Deref(), var3->Deref(), var4->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__6(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(ops8::s3, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s3, var3)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_d, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__7(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(ops8::s_exp, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s1, Data::F(ops8::s_exp, { var1->Deref() }), var3)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_d, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__8(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(ops8::s_log, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(ops8::s5, var3, var1->Deref())))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(ops8::s_d, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__9(Prolog* mach) {
		mach->FillAlternative(pred_d_3::exec_pred_d_3__10);
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
		if(!((areg2)->Unify(ops8::posint1))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation ops8::pred_d_3::exec_pred_d_3__10(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg2)->Unify(ops8::posint0))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}
}
