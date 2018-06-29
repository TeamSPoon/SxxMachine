using namespace std;

#include "nreverse.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  nreverse::s_cut = Data::Intern("cut");
Const* const  nreverse::s1 = Data::Intern(".");
Const* const  nreverse::s2 = Data::Intern(":-");
Const* const  nreverse::s_call = Data::Intern("call");
Const* const  nreverse::s_concatenate = Data::Intern("concatenate");
Const* const  nreverse::s_nreverse = Data::Intern("nreverse");
Const* const  nreverse::s_top = Data::Intern("top");
Int* const  nreverse::posint1 = Data::Number(1LL);
Int* const  nreverse::posint2 = Data::Number(2LL);
Int* const  nreverse::posint3 = Data::Number(3LL);
Int* const  nreverse::posint4 = Data::Number(4LL);
Int* const  nreverse::posint5 = Data::Number(5LL);
Int* const  nreverse::posint6 = Data::Number(6LL);
Int* const  nreverse::posint7 = Data::Number(7LL);
Int* const  nreverse::posint8 = Data::Number(8LL);
Int* const  nreverse::posint9 = Data::Number(9LL);
Int* const  nreverse::posint10 = Data::Number(10LL);
Int* const  nreverse::posint11 = Data::Number(11LL);
Int* const  nreverse::posint12 = Data::Number(12LL);
Int* const  nreverse::posint13 = Data::Number(13LL);
Int* const  nreverse::posint14 = Data::Number(14LL);
Int* const  nreverse::posint15 = Data::Number(15LL);
Int* const  nreverse::posint16 = Data::Number(16LL);
Int* const  nreverse::posint17 = Data::Number(17LL);
Int* const  nreverse::posint18 = Data::Number(18LL);
Int* const  nreverse::posint19 = Data::Number(19LL);
Int* const  nreverse::posint20 = Data::Number(20LL);
Int* const  nreverse::posint21 = Data::Number(21LL);
Int* const  nreverse::posint22 = Data::Number(22LL);
Int* const  nreverse::posint23 = Data::Number(23LL);
Int* const  nreverse::posint24 = Data::Number(24LL);
Int* const  nreverse::posint25 = Data::Number(25LL);
Int* const  nreverse::posint26 = Data::Number(26LL);
Int* const  nreverse::posint27 = Data::Number(27LL);
Int* const  nreverse::posint28 = Data::Number(28LL);
Int* const  nreverse::posint29 = Data::Number(29LL);
Int* const  nreverse::posint30 = Data::Number(30LL);
const Operation nreverse::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation nreverse::reg_nreverse_0 = PredTable::Register("nreverse", 0, new pred_nreverse_0());
const Operation nreverse::reg_nreverse_2 = PredTable::Register("nreverse", 2, new pred_nreverse_2());
const Operation nreverse::reg_concatenate_3 = PredTable::Register("concatenate", 3, new pred_concatenate_3());

	Operation nreverse::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation nreverse::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation nreverse::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_nreverse_0::exec_static);
	}

	Operation nreverse::pred_nreverse_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation nreverse::pred_nreverse_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_nreverse_0__1(mach));
	}

	Operation nreverse::pred_nreverse_0::exec_pred_nreverse_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var1 = Data::V(mach);
		local_aregs[0] = Data::F(nreverse::s1, nreverse::posint1, Data::F(nreverse::s1, nreverse::posint2, Data::F(nreverse::s1, nreverse::posint3, Data::F(nreverse::s1, nreverse::posint4, Data::F(nreverse::s1, nreverse::posint5, Data::F(nreverse::s1, nreverse::posint6, Data::F(nreverse::s1, nreverse::posint7, Data::F(nreverse::s1, nreverse::posint8, Data::F(nreverse::s1, nreverse::posint9, Data::F(nreverse::s1, nreverse::posint10, Data::F(nreverse::s1, nreverse::posint11, Data::F(nreverse::s1, nreverse::posint12, Data::F(nreverse::s1, nreverse::posint13, Data::F(nreverse::s1, nreverse::posint14, Data::F(nreverse::s1, nreverse::posint15, Data::F(nreverse::s1, nreverse::posint16, Data::F(nreverse::s1, nreverse::posint17, Data::F(nreverse::s1, nreverse::posint18, Data::F(nreverse::s1, nreverse::posint19, Data::F(nreverse::s1, nreverse::posint20, Data::F(nreverse::s1, nreverse::posint21, Data::F(nreverse::s1, nreverse::posint22, Data::F(nreverse::s1, nreverse::posint23, Data::F(nreverse::s1, nreverse::posint24, Data::F(nreverse::s1, nreverse::posint25, Data::F(nreverse::s1, nreverse::posint26, Data::F(nreverse::s1, nreverse::posint27, Data::F(nreverse::s1, nreverse::posint28, Data::F(nreverse::s1, nreverse::posint29, Data::F(nreverse::s1, nreverse::posint30, Const::Nil))))))))))))))))))))))))))))));
		local_aregs[1] = var1;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_nreverse_2::exec_static);
	}

	Operation nreverse::pred_nreverse_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation nreverse::pred_nreverse_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_nreverse_2__1(mach));
	}

	Operation nreverse::pred_nreverse_2::exec_pred_nreverse_2__1(Prolog* mach) {
		mach->FillAlternative(pred_nreverse_2::exec_pred_nreverse_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(nreverse::s1, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4;
		local_aregs[2] = Data::F(nreverse::s_concatenate, { var4->Deref(), Data::F(nreverse::s1, { var1->Deref(), Const::Nil }), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_nreverse_2::exec_static);
	}

	Operation nreverse::pred_nreverse_2::exec_pred_nreverse_2__2(Prolog* mach) {
		mach->RemoveChoice();
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
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation nreverse::pred_concatenate_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation nreverse::pred_concatenate_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_concatenate_3__1(mach));
	}

	Operation nreverse::pred_concatenate_3::exec_pred_concatenate_3__1(Prolog* mach) {
		mach->FillAlternative(pred_concatenate_3::exec_pred_concatenate_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(nreverse::s1, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(nreverse::s1, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_concatenate_3::exec_static);
	}

	Operation nreverse::pred_concatenate_3::exec_pred_concatenate_3__2(Prolog* mach) {
		mach->RemoveChoice();
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
}
