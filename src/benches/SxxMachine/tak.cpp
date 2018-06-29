using namespace std;

#include "tak.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  tak::s_cut = Data::Intern("cut");
Const* const  tak::s1 = Data::Intern("-");
Const* const  tak::s2 = Data::Intern(".");
Const* const  tak::s3 = Data::Intern(":-");
Const* const  tak::s_is = Data::Intern("is");
Const* const  tak::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  tak::s_smallerthan = Data::Intern("smallerthan");
Const* const  tak::s_tak = Data::Intern("tak");
Const* const  tak::s_top = Data::Intern("top");
Const* const  tak::s_unify = Data::Intern("unify");
Int* const  tak::posint1 = Data::Number(1LL);
Int* const  tak::posint6 = Data::Number(6LL);
Int* const  tak::posint12 = Data::Number(12LL);
Int* const  tak::posint18 = Data::Number(18LL);
const Operation tak::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation tak::reg_tak_0 = PredTable::Register("tak", 0, new pred_tak_0());
const Operation tak::reg_tak_4 = PredTable::Register("tak", 4, new pred_tak_4());

	Operation tak::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation tak::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation tak::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_tak_0::exec_static);
	}

	Operation tak::pred_tak_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation tak::pred_tak_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_tak_0__1(mach));
	}

	Operation tak::pred_tak_0::exec_pred_tak_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var1 = Data::V(mach);
		local_aregs[0] = tak::posint18;
		local_aregs[1] = tak::posint12;
		local_aregs[2] = tak::posint6;
		local_aregs[3] = var1;
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_tak_4::exec_static);
	}

	Operation tak::pred_tak_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation tak::pred_tak_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_tak_4__1(mach));
	}

	Operation tak::pred_tak_4::exec_pred_tak_4__1(Prolog* mach) {
		mach->FillAlternative(pred_tak_4::exec_pred_tak_4__2);
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = Data::F(tak::s_unify, { var4->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation tak::pred_tak_4::exec_pred_tak_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
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
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(tak::s_is, var5, Data::F(tak::s1, { var1->Deref(), tak::posint1 }), Data::F(tak::s_tak, { var5->Deref(), var2->Deref(), var3->Deref(), var6, Data::F(tak::s_is, var7, Data::F(tak::s1, { var2->Deref(), tak::posint1 }), Data::F(tak::s_tak, { var7->Deref(), var3->Deref(), var1->Deref(), var8, Data::F(tak::s_is, var9, Data::F(tak::s1, { var3->Deref(), tak::posint1 }), Data::F(tak::s_tak, { var9->Deref(), var1->Deref(), var2->Deref(), var10, Data::F(tak::s_tak, { var6->Deref(), var8->Deref(), var10->Deref(), var4->Deref(), continuation }) })) })) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}
}
