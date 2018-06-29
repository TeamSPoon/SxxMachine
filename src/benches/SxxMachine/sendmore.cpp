using namespace std;

#include "sendmore.h"
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
Const* const  sendmore::s_cut = Data::Intern("cut");
Const* const  sendmore::s1 = Data::Intern("+");
Const* const  sendmore::s2 = Data::Intern(",");
Const* const  sendmore::s3 = Data::Intern("-");
Const* const  sendmore::s4 = Data::Intern("->");
Const* const  sendmore::s5 = Data::Intern(".");
Const* const  sendmore::s6 = Data::Intern(":-");
Const* const  sendmore::s7 = Data::Intern("<");
Const* const  sendmore::s8 = Data::Intern("=");
Const* const  sendmore::s9 = Data::Intern("=\\=");
Const* const  sendmore::s_call = Data::Intern("call");
Const* const  sendmore::s_digit = Data::Intern("digit");
Const* const  sendmore::s_fail = Data::Intern("fail");
Const* const  sendmore::s_is = Data::Intern("is");
Const* const  sendmore::s_leftdigit = Data::Intern("leftdigit");
Const* const  sendmore::s_or = Data::Intern("or");
Const* const  sendmore::s_sumdigit = Data::Intern("sumdigit");
Const* const  sendmore::s_top = Data::Intern("top");
Int* const  sendmore::posint0 = Data::Number(0LL);
Int* const  sendmore::posint1 = Data::Number(1LL);
Int* const  sendmore::posint2 = Data::Number(2LL);
Int* const  sendmore::posint3 = Data::Number(3LL);
Int* const  sendmore::posint4 = Data::Number(4LL);
Int* const  sendmore::posint5 = Data::Number(5LL);
Int* const  sendmore::posint6 = Data::Number(6LL);
Int* const  sendmore::posint7 = Data::Number(7LL);
Int* const  sendmore::posint8 = Data::Number(8LL);
Int* const  sendmore::posint9 = Data::Number(9LL);
Int* const  sendmore::posint10 = Data::Number(10LL);
const Operation sendmore::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation sendmore::reg_sumdigit_5 = PredTable::Register("sumdigit", 5, new pred_sumdigit_5());
const Operation sendmore::reg_digit_1 = PredTable::Register("digit", 1, new pred_digit_1());
const Operation sendmore::reg_leftdigit_1 = PredTable::Register("leftdigit", 1, new pred_leftdigit_1());

	Operation sendmore::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sendmore::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation sendmore::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_top_0::exec_pred_top_0__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var11 = Data::V(mach);
		Var* var10 = Data::V(mach);
		Var* var9 = Data::V(mach);
		Var* var8 = Data::V(mach);
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = var1;
		local_aregs[1] = Data::F(sendmore::s_digit, var2, Data::F(sendmore::s9, { var1->Deref(), var2->Deref(), Data::F(sendmore::s_sumdigit, sendmore::posint0, var1->Deref(), var2->Deref(), var3, var4, Data::F(sendmore::s_digit, var5, Data::F(sendmore::s9, { var5->Deref(), var3->Deref(), Data::F(sendmore::s9, { var5->Deref(), var2->Deref(), Data::F(sendmore::s9, { var5->Deref(), var1->Deref(), Data::F(sendmore::s_digit, var6, Data::F(sendmore::s9, { var6->Deref(), var5->Deref(), Data::F(sendmore::s9, { var6->Deref(), var3->Deref(), Data::F(sendmore::s9, { var6->Deref(), var2->Deref(), Data::F(sendmore::s9, { var6->Deref(), var1->Deref(), Data::F(sendmore::s_sumdigit, { var4->Deref(), var5->Deref(), var6->Deref(), var2->Deref(), var7, Data::F(sendmore::s_digit, var8, Data::F(sendmore::s9, { var8->Deref(), var6->Deref(), Data::F(sendmore::s9, { var8->Deref(), var5->Deref(), Data::F(sendmore::s9, { var8->Deref(), var3->Deref(), Data::F(sendmore::s9, { var8->Deref(), var2->Deref(), Data::F(sendmore::s9, { var8->Deref(), var1->Deref(), Data::F(sendmore::s_sumdigit, { var7->Deref(), var2->Deref(), var8->Deref(), var5->Deref(), var9, Data::F(sendmore::s_leftdigit, var10, Data::F(sendmore::s9, { var10->Deref(), var8->Deref(), Data::F(sendmore::s9, { var10->Deref(), var6->Deref(), Data::F(sendmore::s9, { var10->Deref(), var5->Deref(), Data::F(sendmore::s9, { var10->Deref(), var3->Deref(), Data::F(sendmore::s9, { var10->Deref(), var2->Deref(), Data::F(sendmore::s9, { var10->Deref(), var1->Deref(), Data::F(sendmore::s_leftdigit, var11, Data::F(sendmore::s9, { var11->Deref(), var10->Deref(), Data::F(sendmore::s9, { var11->Deref(), var8->Deref(), Data::F(sendmore::s9, { var11->Deref(), var6->Deref(), Data::F(sendmore::s9, { var11->Deref(), var5->Deref(), Data::F(sendmore::s9, { var11->Deref(), var3->Deref(), Data::F(sendmore::s9, { var11->Deref(), var2->Deref(), Data::F(sendmore::s9, { var11->Deref(), var1->Deref(), Data::F(sendmore::s_sumdigit, { var9->Deref(), var10->Deref(), var11->Deref(), var8->Deref(), var11->Deref(), Data::F(sendmore::s_fail, { continuation }) }) }) }) }) }) }) }) })) }) }) }) }) }) })) }) }) }) }) }) })) }) }) }) }) })) }) }) }))) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_digit_1::exec_static);
	}

	Operation sendmore::pred_top_0::exec_pred_top_0__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sendmore::pred_sumdigit_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sendmore::pred_sumdigit_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sumdigit_5__1(mach));
	}

	Operation sendmore::pred_sumdigit_5::exec_pred_sumdigit_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
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
		local_aregs[0] = var6;
		local_aregs[1] = Data::F(sendmore::s1, Data::F(sendmore::s1, { var1->Deref(), var2->Deref() }), var3->Deref());
		local_aregs[2] = Data::F(sendmore::s_or, Data::F(sendmore::s4, Data::F(sendmore::s7, { var6->Deref(), sendmore::posint10 }), Data::F(sendmore::s2, Data::F(sendmore::s8, { var4->Deref(), var6->Deref() }), Data::F(sendmore::s8, { var5->Deref(), sendmore::posint0 }))), Data::F(sendmore::s2, Data::F(sendmore::s_is, { var4->Deref(), Data::F(sendmore::s3, { var6->Deref(), sendmore::posint10 }) }), Data::F(sendmore::s8, { var5->Deref(), sendmore::posint1 })), continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation sendmore::pred_digit_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sendmore::pred_digit_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_digit_1__1(mach));
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__1(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint0))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__2(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__3(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__4(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__5(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__6(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__7(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__8(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__9(Prolog* mach) {
		mach->FillAlternative(pred_digit_1::exec_pred_digit_1__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_digit_1::exec_pred_digit_1__10(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sendmore::pred_leftdigit_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_leftdigit_1__1(mach));
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__1(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__2(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__3(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__4(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__5(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__6(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__7(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__8(Prolog* mach) {
		mach->FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sendmore::pred_leftdigit_1::exec_pred_leftdigit_1__9(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sendmore::posint9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}
}
