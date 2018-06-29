using namespace std;

#include "fast_mu.h"
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
Const* const  fast_mu::s_cut = Data::Intern("cut");
Const* const  fast_mu::s1 = Data::Intern("+");
Const* const  fast_mu::s2 = Data::Intern("-");
Const* const  fast_mu::s3 = Data::Intern("->");
Const* const  fast_mu::s4 = Data::Intern(".");
Const* const  fast_mu::s5 = Data::Intern("/\\");
Const* const  fast_mu::s6 = Data::Intern(":-");
Const* const  fast_mu::s7 = Data::Intern("=:=");
Const* const  fast_mu::s8 = Data::Intern(">>");
Const* const  fast_mu::s_call = Data::Intern("call");
Const* const  fast_mu::s_derive = Data::Intern("derive");
Const* const  fast_mu::s_derive2 = Data::Intern("derive2");
Const* const  fast_mu::s_i = Data::Intern("i");
Const* const  fast_mu::s_is = Data::Intern("is");
Const* const  fast_mu::s_length = Data::Intern("length");
Const* const  fast_mu::s_lower_bound = Data::Intern("lower_bound");
Const* const  fast_mu::s_m = Data::Intern("m");
Const* const  fast_mu::s_or = Data::Intern("or");
Const* const  fast_mu::s_rule = Data::Intern("rule");
Const* const  fast_mu::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  fast_mu::s_smallerthan = Data::Intern("smallerthan");
Const* const  fast_mu::s_theorem = Data::Intern("theorem");
Const* const  fast_mu::s_top = Data::Intern("top");
Const* const  fast_mu::s_u = Data::Intern("u");
Int* const  fast_mu::posint0 = Data::Number(0LL);
Int* const  fast_mu::posint1 = Data::Number(1LL);
Int* const  fast_mu::posint2 = Data::Number(2LL);
Int* const  fast_mu::posint3 = Data::Number(3LL);
Int* const  fast_mu::posint4 = Data::Number(4LL);
const Operation fast_mu::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation fast_mu::reg_theorem_1 = PredTable::Register("theorem", 1, new pred_theorem_1());
const Operation fast_mu::reg_derive_6 = PredTable::Register("derive", 6, new pred_derive_6());
const Operation fast_mu::reg_derive2_7 = PredTable::Register("derive2", 7, new pred_derive2_7());
const Operation fast_mu::reg_rule_7 = PredTable::Register("rule", 7, new pred_rule_7());
const Operation fast_mu::reg_rule_11 = PredTable::Register("rule", 11, new pred_rule_11());
const Operation fast_mu::reg_lower_bound_3 = PredTable::Register("lower_bound", 3, new pred_lower_bound_3());

	Operation fast_mu::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation fast_mu::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation fast_mu::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(fast_mu::s4, fast_mu::s_m, Data::F(fast_mu::s4, fast_mu::s_u, Data::F(fast_mu::s4, fast_mu::s_i, Data::F(fast_mu::s4, fast_mu::s_i, Data::F(fast_mu::s4, fast_mu::s_u, Const::Nil)))));
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_theorem_1::exec_static);
	}

	Operation fast_mu::pred_theorem_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation fast_mu::pred_theorem_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_theorem_1__1(mach));
	}

	Operation fast_mu::pred_theorem_1::exec_pred_theorem_1__1(Prolog* mach) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2;
		local_aregs[2] = Data::F(fast_mu::s_is, var3, Data::F(fast_mu::s2, { var2->Deref(), fast_mu::posint1 }), Data::F(fast_mu::s_derive, Data::F(fast_mu::s4, fast_mu::s_m, Data::F(fast_mu::s4, fast_mu::s_i, Const::Nil)), var1->Deref(), fast_mu::posint1, var3->Deref(), var4, fast_mu::posint0, continuation));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_length_2::exec_static);
	}

	Operation fast_mu::pred_derive_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation fast_mu::pred_derive_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_derive_6__1(mach));
	}

	Operation fast_mu::pred_derive_6::exec_pred_derive_6__1(Prolog* mach) {
		mach->FillAlternative(pred_derive_6::exec_pred_derive_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
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
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = fast_mu::posint1;
		local_aregs[5] = var5->Deref();
		local_aregs[6] = var6->Deref();
		local_aregs[7] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_derive2_7::exec_static);
	}

	Operation fast_mu::pred_derive_6::exec_pred_derive_6__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var7;
		local_aregs[1] = Data::F(fast_mu::s1, { var6->Deref(), fast_mu::posint1 });
		local_aregs[2] = Data::F(fast_mu::s_derive, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation fast_mu::pred_derive2_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation fast_mu::pred_derive2_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_derive2_7__1(mach));
	}

	Operation fast_mu::pred_derive2_7::exec_pred_derive2_7__1(Prolog* mach) {
		mach->FillAlternative(pred_derive2_7::exec_pred_derive2_7__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
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
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation fast_mu::pred_derive2_7::exec_pred_derive2_7__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
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
		if(!((areg5)->Unify(Data::F(fast_mu::s4, Data::F(fast_mu::s_rule, var6, var7), var8)))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var10;
		local_aregs[3] = Data::F(fast_mu::s_smallerorequal, { var10->Deref(), var9->Deref(), Data::F(fast_mu::s_is, var11, Data::F(fast_mu::s2, { var9->Deref(), fast_mu::posint1 }), Data::F(fast_mu::s_rule, { var1->Deref(), var7->Deref(), var3->Deref(), var12, var5->Deref(), var13, var6->Deref(), Data::F(fast_mu::s_derive2, { var7->Deref(), var2->Deref(), var12->Deref(), var4->Deref(), var13->Deref(), var8->Deref(), var11->Deref(), continuation }) })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_lower_bound_3::exec_static);
	}

	Operation fast_mu::pred_rule_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation fast_mu::pred_rule_7::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
		std::vector<Term*> aregs = mach->RegPull(7);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rule_7__1(mach));
	}

	Operation fast_mu::pred_rule_7::exec_pred_rule_7__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[7];
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg0)->Unify(Data::F(fast_mu::s4, fast_mu::s_m, var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(fast_mu::s4, fast_mu::s_m, var2)))) {
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
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = var5->Deref();
		local_aregs[5] = var6->Deref();
		local_aregs[6] = fast_mu::posint1;
		local_aregs[7] = fast_mu::s_i;
		local_aregs[8] = var7->Deref();
		local_aregs[9] = var8;
		local_aregs[10] = var8->Deref();
		local_aregs[11] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_rule_11::exec_static);
	}

	Operation fast_mu::pred_rule_11::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation fast_mu::pred_rule_11::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
		std::vector<Term*> aregs = mach->RegPull(11);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_rule_11__1(mach));
	}

	Operation fast_mu::pred_rule_11::exec_pred_rule_11__1(Prolog* mach) {
		mach->FillAlternative(pred_rule_11::exec_pred_rule_11__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[11];
		Term* areg10 = local_aregs[10]->Deref();
		Term* areg9 = local_aregs[9]->Deref();
		Term* areg8 = local_aregs[8]->Deref();
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg0)->Unify(Data::F(fast_mu::s4, fast_mu::s_i, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(fast_mu::s4, fast_mu::s_i, Data::F(fast_mu::s4, fast_mu::s_u, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(fast_mu::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var5->Deref();
		local_aregs[2] = Data::F(fast_mu::s_is, { var4->Deref(), Data::F(fast_mu::s2, { var5->Deref(), fast_mu::posint2 }), Data::F(fast_mu::s_is, { var2->Deref(), Data::F(fast_mu::s1, { var1->Deref(), fast_mu::posint1 }), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation fast_mu::pred_rule_11::exec_pred_rule_11__2(Prolog* mach) {
		mach->FillAlternative(pred_rule_11::exec_pred_rule_11__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[11];
		Term* areg10 = local_aregs[10]->Deref();
		Term* areg9 = local_aregs[9]->Deref();
		Term* areg8 = local_aregs[8]->Deref();
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
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
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(fast_mu::posint1))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(fast_mu::posint2))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(fast_mu::s1, { var2->Deref(), var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation fast_mu::pred_rule_11::exec_pred_rule_11__3(Prolog* mach) {
		mach->FillAlternative(pred_rule_11::exec_pred_rule_11__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[11];
		Term* areg10 = local_aregs[10]->Deref();
		Term* areg9 = local_aregs[9]->Deref();
		Term* areg8 = local_aregs[8]->Deref();
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg0)->Unify(Data::F(fast_mu::s4, fast_mu::s_i, Data::F(fast_mu::s4, fast_mu::s_i, Data::F(fast_mu::s4, fast_mu::s_i, var1)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(fast_mu::s4, fast_mu::s_u, var1->Deref())))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(fast_mu::posint3))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var9))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var6->Deref();
		local_aregs[2] = Data::F(fast_mu::s_is, { var5->Deref(), Data::F(fast_mu::s2, { var6->Deref(), fast_mu::posint1 }), Data::F(fast_mu::s_is, { var3->Deref(), Data::F(fast_mu::s2, { var2->Deref(), fast_mu::posint2 }), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation fast_mu::pred_rule_11::exec_pred_rule_11__4(Prolog* mach) {
		mach->FillAlternative(pred_rule_11::exec_pred_rule_11__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[11];
		Term* areg10 = local_aregs[10]->Deref();
		Term* areg9 = local_aregs[9]->Deref();
		Term* areg8 = local_aregs[8]->Deref();
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg0)->Unify(Data::F(fast_mu::s4, fast_mu::s_u, Data::F(fast_mu::s4, fast_mu::s_u, var1))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(fast_mu::s_i))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(fast_mu::posint4))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var6->Deref();
		local_aregs[2] = Data::F(fast_mu::s_is, { var5->Deref(), Data::F(fast_mu::s2, { var6->Deref(), fast_mu::posint2 }), Data::F(fast_mu::s_is, { var3->Deref(), Data::F(fast_mu::s2, { var2->Deref(), fast_mu::posint2 }), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation fast_mu::pred_rule_11::exec_pred_rule_11__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[11];
		Term* areg10 = local_aregs[10]->Deref();
		Term* areg9 = local_aregs[9]->Deref();
		Term* areg8 = local_aregs[8]->Deref();
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var13 = Data::V(mach);
		Var* var12 = Data::V(mach);
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
		if(!((areg0)->Unify(Data::F(fast_mu::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(fast_mu::s4, { var1->Deref(), var3 })))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var9))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg9)->Unify(var11))) {
			return Prolog::Fail0;
		}
		if(!((areg10)->Unify(Data::F(fast_mu::s4, { var1->Deref(), var12 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var13;
		local_aregs[1] = Data::F(fast_mu::s1, { var8->Deref(), fast_mu::posint1 });
		local_aregs[2] = Data::F(fast_mu::s_rule, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var13->Deref(), var1->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation fast_mu::pred_lower_bound_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation fast_mu::pred_lower_bound_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_lower_bound_3__1(mach));
	}

	Operation fast_mu::pred_lower_bound_3::exec_pred_lower_bound_3__1(Prolog* mach) {
		mach->FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__2);
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
		if(!((areg2)->Unify(fast_mu::posint1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation fast_mu::pred_lower_bound_3::exec_pred_lower_bound_3__2(Prolog* mach) {
		mach->FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__3);
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
		if(!((areg2)->Unify(fast_mu::posint2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation fast_mu::pred_lower_bound_3::exec_pred_lower_bound_3__3(Prolog* mach) {
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(fast_mu::s_is, var4, Data::F(fast_mu::s2, { var1->Deref(), var2->Deref() }), Data::F(fast_mu::s_is, var5, Data::F(fast_mu::s5, { var4->Deref(), fast_mu::posint1 }), Data::F(fast_mu::s_or, Data::F(fast_mu::s3, Data::F(fast_mu::s7, { var5->Deref(), fast_mu::posint0 }), Data::F(fast_mu::s_is, { var3->Deref(), Data::F(fast_mu::s8, { var4->Deref(), fast_mu::posint1 }) })), Data::F(fast_mu::s_is, { var3->Deref(), Data::F(fast_mu::s1, Data::F(fast_mu::s8, Data::F(fast_mu::s1, { var4->Deref(), fast_mu::posint1 }), fast_mu::posint1), fast_mu::posint1) }), continuation)));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}
}
