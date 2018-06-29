using namespace std;

#include "poly_10.h"
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
Const* const  poly_10::s_cut = Data::Intern("cut");
Const* const  poly_10::s1 = Data::Intern("*");
Const* const  poly_10::s2 = Data::Intern("+");
Const* const  poly_10::s3 = Data::Intern("-");
Const* const  poly_10::s4 = Data::Intern(".");
Const* const  poly_10::s5 = Data::Intern(":-");
Const* const  poly_10::s6 = Data::Intern("<<");
Const* const  poly_10::s7 = Data::Intern(">>");
Const* const  poly_10::s_add_to_order_zero_term = Data::Intern("add_to_order_zero_term");
Const* const  poly_10::s_call = Data::Intern("call");
Const* const  poly_10::s_is = Data::Intern("is");
Const* const  poly_10::s_less_than = Data::Intern("less_than");
Const* const  poly_10::s_mul_through = Data::Intern("mul_through");
Const* const  poly_10::s_on_load_poly_10 = Data::Intern("on_load_poly_10");
Const* const  poly_10::s_op = Data::Intern("op");
Const* const  poly_10::s_poly = Data::Intern("poly");
Const* const  poly_10::s_poly_10 = Data::Intern("poly_10");
Const* const  poly_10::s_poly_add = Data::Intern("poly_add");
Const* const  poly_10::s_poly_exp = Data::Intern("poly_exp");
Const* const  poly_10::s_poly_mul = Data::Intern("poly_mul");
Const* const  poly_10::s_single_term_mul = Data::Intern("single_term_mul");
Const* const  poly_10::s_smallerthan = Data::Intern("smallerthan");
Const* const  poly_10::s_term = Data::Intern("term");
Const* const  poly_10::s_term_add = Data::Intern("term_add");
Const* const  poly_10::s_term_mul = Data::Intern("term_mul");
Const* const  poly_10::s_test_poly = Data::Intern("test_poly");
Const* const  poly_10::s_top = Data::Intern("top");
Const* const  poly_10::s_write = Data::Intern("write");
Const* const  poly_10::s_x = Data::Intern("x");
Const* const  poly_10::s_xfx = Data::Intern("xfx");
Const* const  poly_10::s_y = Data::Intern("y");
Const* const  poly_10::s_z = Data::Intern("z");
Int* const  poly_10::posint0 = Data::Number(0LL);
Int* const  poly_10::posint1 = Data::Number(1LL);
Int* const  poly_10::posint10 = Data::Number(10LL);
Int* const  poly_10::posint700 = Data::Number(700LL);
const Operation poly_10::reg_on_load_poly_10_0 = PredTable::Register("on_load_poly_10", 0, new pred_on_load_poly_10_0());
const Operation poly_10::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation poly_10::reg_poly_10_0 = PredTable::Register("poly_10", 0, new pred_poly_10_0());
const Operation poly_10::reg_test_poly_1 = PredTable::Register("test_poly", 1, new pred_test_poly_1());
const Operation poly_10::reg_less_than_2 = PredTable::Register("less_than", 2, new pred_less_than_2());
const Operation poly_10::reg_poly_add_3 = PredTable::Register("poly_add", 3, new pred_poly_add_3());
const Operation poly_10::reg_term_add_3 = PredTable::Register("term_add", 3, new pred_term_add_3());
const Operation poly_10::reg_add_to_order_zero_term_3 = PredTable::Register("add_to_order_zero_term", 3, new pred_add_to_order_zero_term_3());
const Operation poly_10::reg_poly_exp_3 = PredTable::Register("poly_exp", 3, new pred_poly_exp_3());
const Operation poly_10::reg_poly_mul_3 = PredTable::Register("poly_mul", 3, new pred_poly_mul_3());
const Operation poly_10::reg_term_mul_3 = PredTable::Register("term_mul", 3, new pred_term_mul_3());
const Operation poly_10::reg_single_term_mul_3 = PredTable::Register("single_term_mul", 3, new pred_single_term_mul_3());
const Operation poly_10::reg_mul_through_3 = PredTable::Register("mul_through", 3, new pred_mul_through_3());

	Operation poly_10::pred_on_load_poly_10_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_on_load_poly_10_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_on_load_poly_10_0__1(mach));
	}

	Operation poly_10::pred_on_load_poly_10_0::exec_pred_on_load_poly_10_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = Data::F(poly_10::s_op, poly_10::posint700, poly_10::s_xfx, poly_10::s_less_than);
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_write_1::exec_static);
	}

	Operation poly_10::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation poly_10::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_poly_10_0::exec_static);
	}

	Operation poly_10::pred_poly_10_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_poly_10_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_poly_10_0__1(mach));
	}

	Operation poly_10::pred_poly_10_0::exec_pred_poly_10_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = var1;
		local_aregs[1] = Data::F(poly_10::s_poly_exp, poly_10::posint10, var1->Deref(), var2, continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_test_poly_1::exec_static);
	}

	Operation poly_10::pred_test_poly_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_test_poly_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_test_poly_1__1(mach));
	}

	Operation poly_10::pred_test_poly_1::exec_pred_test_poly_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(poly_10::s_poly, poly_10::s_x, Data::F(poly_10::s4, Data::F(poly_10::s_term, poly_10::posint0, poly_10::posint1), Data::F(poly_10::s4, Data::F(poly_10::s_term, poly_10::posint1, poly_10::posint1), Const::Nil)));
		local_aregs[1] = Data::F(poly_10::s_poly, poly_10::s_y, Data::F(poly_10::s4, Data::F(poly_10::s_term, poly_10::posint1, poly_10::posint1), Const::Nil));
		local_aregs[2] = var2;
		local_aregs[3] = Data::F(poly_10::s_poly_add, Data::F(poly_10::s_poly, poly_10::s_z, Data::F(poly_10::s4, Data::F(poly_10::s_term, poly_10::posint1, poly_10::posint1), Const::Nil)), var2->Deref(), var1->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_poly_add_3::exec_static);
	}

	Operation poly_10::pred_less_than_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_less_than_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_less_than_2__1(mach));
	}

	Operation poly_10::pred_less_than_2::exec_pred_less_than_2__1(Prolog* mach) {
		mach->FillAlternative(pred_less_than_2::exec_pred_less_than_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(poly_10::s_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(poly_10::s_y))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_less_than_2::exec_pred_less_than_2__2(Prolog* mach) {
		mach->FillAlternative(pred_less_than_2::exec_pred_less_than_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(poly_10::s_y))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(poly_10::s_z))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_less_than_2::exec_pred_less_than_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(poly_10::s_x))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(poly_10::s_z))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_add_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_poly_add_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_poly_add_3__1(mach));
	}

	Operation poly_10::pred_poly_add_3::exec_pred_poly_add_3__1(Prolog* mach) {
		mach->FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(poly_10::s_poly, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var3 })))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_term_add, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_add_3::exec_pred_poly_add_3__2(Prolog* mach) {
		mach->FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__3);
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
		if(!((areg0)->Unify(Data::F(poly_10::s_poly, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(poly_10::s_poly, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = mach->HC(Data::F(poly_10::s_add_to_order_zero_term, { var2->Deref(), Data::F(poly_10::s_poly, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_less_than_2::exec_static);
	}

	Operation poly_10::pred_poly_add_3::exec_pred_poly_add_3__3(Prolog* mach) {
		mach->FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__4);
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
		if(!((areg1)->Unify(Data::F(poly_10::s_poly, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var2->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_add_to_order_zero_term, { var3->Deref(), var1->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_add_3::exec_pred_poly_add_3__4(Prolog* mach) {
		mach->FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(poly_10::s_poly, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_add_to_order_zero_term, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_add_3::exec_pred_poly_add_3__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
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
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(poly_10::s2, { var1->Deref(), var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation poly_10::pred_term_add_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_term_add_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_term_add_3__1(mach));
	}

	Operation poly_10::pred_term_add_3::exec_pred_term_add_3__1(Prolog* mach) {
		mach->FillAlternative(pred_term_add_3::exec_pred_term_add_3__2);
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
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_term_add_3::exec_pred_term_add_3__2(Prolog* mach) {
		mach->FillAlternative(pred_term_add_3::exec_pred_term_add_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_term_add_3::exec_pred_term_add_3__3(Prolog* mach) {
		mach->FillAlternative(pred_term_add_3::exec_pred_term_add_3__4);
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
		if(!((areg0)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, { var1->Deref(), var4 }), var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, { var1->Deref(), var6 }), var7)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_poly_add, { var2->Deref(), var4->Deref(), var6->Deref(), Data::F(poly_10::s_term_add, { var3->Deref(), var5->Deref(), var7->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_term_add_3::exec_pred_term_add_3__4(Prolog* mach) {
		mach->FillAlternative(pred_term_add_3::exec_pred_term_add_3__5);
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
		if(!((areg0)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, var4, var5), var6)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, { var1->Deref(), var2->Deref() }), var7)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = mach->HC(Data::F(poly_10::s_term_add, { var3->Deref(), Data::F(poly_10::s4, Data::F(poly_10::s_term, { var4->Deref(), var5->Deref() }), var6->Deref()), var7->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation poly_10::pred_term_add_3::exec_pred_term_add_3__5(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, { var2->Deref(), var3->Deref() }), var5)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_term_add_3::exec_static);
	}

	Operation poly_10::pred_add_to_order_zero_term_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_add_to_order_zero_term_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_add_to_order_zero_term_3__1(mach));
	}

	Operation poly_10::pred_add_to_order_zero_term_3::exec_pred_add_to_order_zero_term_3__1(Prolog* mach) {
		mach->FillAlternative(pred_add_to_order_zero_term_3::exec_pred_add_to_order_zero_term_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, poly_10::posint0, var1), var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, poly_10::posint0, var4), var2->Deref())))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_poly_add, { var1->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_add_to_order_zero_term_3::exec_pred_add_to_order_zero_term_3__2(Prolog* mach) {
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
		if(!((areg2)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, poly_10::posint0, var2->Deref()), var1->Deref())))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_exp_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_poly_exp_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_poly_exp_3__1(mach));
	}

	Operation poly_10::pred_poly_exp_3::exec_pred_poly_exp_3__1(Prolog* mach) {
		mach->FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(poly_10::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(poly_10::posint1))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_exp_3::exec_pred_poly_exp_3__2(Prolog* mach) {
		mach->FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__3);
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
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(poly_10::s7, { var1->Deref(), poly_10::posint1 });
		local_aregs[2] = Data::F(poly_10::s_is, { var1->Deref(), Data::F(poly_10::s6, { var4->Deref(), poly_10::posint1 }), mach->HC(Data::F(poly_10::s_poly_exp, { var4->Deref(), var2->Deref(), var5, Data::F(poly_10::s_poly_mul, { var5->Deref(), var5->Deref(), var3->Deref(), continuation }) })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation poly_10::pred_poly_exp_3::exec_pred_poly_exp_3__3(Prolog* mach) {
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
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(poly_10::s3, { var1->Deref(), poly_10::posint1 });
		local_aregs[2] = Data::F(poly_10::s_poly_exp, { var4->Deref(), var2->Deref(), var5, Data::F(poly_10::s_poly_mul, { var2->Deref(), var5->Deref(), var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation poly_10::pred_poly_mul_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_poly_mul_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_poly_mul_3__1(mach));
	}

	Operation poly_10::pred_poly_mul_3::exec_pred_poly_mul_3__1(Prolog* mach) {
		mach->FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(poly_10::s_poly, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var3 })))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_term_mul, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_mul_3::exec_pred_poly_mul_3__2(Prolog* mach) {
		mach->FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__3);
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
		if(!((areg0)->Unify(Data::F(poly_10::s_poly, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(poly_10::s_poly, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = mach->HC(Data::F(poly_10::s_mul_through, { var2->Deref(), Data::F(poly_10::s_poly, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_less_than_2::exec_static);
	}

	Operation poly_10::pred_poly_mul_3::exec_pred_poly_mul_3__3(Prolog* mach) {
		mach->FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__4);
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
		if(!((areg1)->Unify(Data::F(poly_10::s_poly, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var2->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_mul_through, { var3->Deref(), var1->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_mul_3::exec_pred_poly_mul_3__4(Prolog* mach) {
		mach->FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(poly_10::s_poly, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s_poly, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(poly_10::s_mul_through, { var2->Deref(), var3->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_poly_mul_3::exec_pred_poly_mul_3__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
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
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(poly_10::s1, { var1->Deref(), var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation poly_10::pred_term_mul_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_term_mul_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_term_mul_3__1(mach));
	}

	Operation poly_10::pred_term_mul_3::exec_pred_term_mul_3__1(Prolog* mach) {
		mach->FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__2);
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
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_term_mul_3::exec_pred_term_mul_3__2(Prolog* mach) {
		mach->FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_term_mul_3::exec_pred_term_mul_3__3(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(Data::F(poly_10::s4, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var5;
		local_aregs[3] = Data::F(poly_10::s_term_mul, { var2->Deref(), var3->Deref(), var6, Data::F(poly_10::s_term_add, { var5->Deref(), var6->Deref(), var4->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_single_term_mul_3::exec_static);
	}

	Operation poly_10::pred_single_term_mul_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_single_term_mul_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_single_term_mul_3__1(mach));
	}

	Operation poly_10::pred_single_term_mul_3::exec_pred_single_term_mul_3__1(Prolog* mach) {
		mach->FillAlternative(pred_single_term_mul_3::exec_pred_single_term_mul_3__2);
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
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_single_term_mul_3::exec_pred_single_term_mul_3__2(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(poly_10::s_term, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, var6, var7), var8)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6->Deref();
		local_aregs[1] = Data::F(poly_10::s2, { var1->Deref(), var4->Deref() });
		local_aregs[2] = Data::F(poly_10::s_poly_mul, { var2->Deref(), var5->Deref(), var7->Deref(), Data::F(poly_10::s_single_term_mul, { var3->Deref(), Data::F(poly_10::s_term, { var4->Deref(), var5->Deref() }), var8->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation poly_10::pred_mul_through_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation poly_10::pred_mul_through_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_mul_through_3__1(mach));
	}

	Operation poly_10::pred_mul_through_3::exec_pred_mul_through_3__1(Prolog* mach) {
		mach->FillAlternative(pred_mul_through_3::exec_pred_mul_through_3__2);
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
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation poly_10::pred_mul_through_3::exec_pred_mul_through_3__2(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, var1, var2), var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(poly_10::s4, Data::F(poly_10::s_term, { var1->Deref(), var5 }), var6)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = Data::F(poly_10::s_mul_through, { var3->Deref(), var4->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_poly_mul_3::exec_static);
	}
}
