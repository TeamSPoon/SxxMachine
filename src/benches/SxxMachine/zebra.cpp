using namespace std;

#include "zebra.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  zebra::s_cut = Data::Intern("cut");
Const* const  zebra::s1 = Data::Intern(".");
Const* const  zebra::s2 = Data::Intern(":-");
Const* const  zebra::s_blue = Data::Intern("blue");
Const* const  zebra::s_call = Data::Intern("call");
Const* const  zebra::s_chesterfields = Data::Intern("chesterfields");
Const* const  zebra::s_coffee = Data::Intern("coffee");
Const* const  zebra::s_dog = Data::Intern("dog");
Const* const  zebra::s_english = Data::Intern("english");
Const* const  zebra::s_fox = Data::Intern("fox");
Const* const  zebra::s_green = Data::Intern("green");
Const* const  zebra::s_horse = Data::Intern("horse");
Const* const  zebra::s_house = Data::Intern("house");
Const* const  zebra::s_houses = Data::Intern("houses");
Const* const  zebra::s_ivory = Data::Intern("ivory");
Const* const  zebra::s_japanese = Data::Intern("japanese");
Const* const  zebra::s_kools = Data::Intern("kools");
Const* const  zebra::s_lucky_strikes = Data::Intern("lucky_strikes");
Const* const  zebra::s_member = Data::Intern("member");
Const* const  zebra::s_milk = Data::Intern("milk");
Const* const  zebra::s_next_to = Data::Intern("next_to");
Const* const  zebra::s_nl = Data::Intern("nl");
Const* const  zebra::s_norwegian = Data::Intern("norwegian");
Const* const  zebra::s_orange_juice = Data::Intern("orange_juice");
Const* const  zebra::s_parliaments = Data::Intern("parliaments");
Const* const  zebra::s_print_houses = Data::Intern("print_houses");
Const* const  zebra::s_red = Data::Intern("red");
Const* const  zebra::s_right_of = Data::Intern("right_of");
Const* const  zebra::s_snails = Data::Intern("snails");
Const* const  zebra::s_spanish = Data::Intern("spanish");
Const* const  zebra::s_tea = Data::Intern("tea");
Const* const  zebra::s_top = Data::Intern("top");
Const* const  zebra::s_ukrainian = Data::Intern("ukrainian");
Const* const  zebra::s_unify = Data::Intern("unify");
Const* const  zebra::s_water = Data::Intern("water");
Const* const  zebra::s_winstons = Data::Intern("winstons");
Const* const  zebra::s_write = Data::Intern("write");
Const* const  zebra::s_yellow = Data::Intern("yellow");
Const* const  zebra::s_zebra = Data::Intern("zebra");
Int* const  zebra::posint1 = Data::Number(1LL);
const Operation zebra::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation zebra::reg_houses_1 = PredTable::Register("houses", 1, new pred_houses_1());
const Operation zebra::reg_right_of_3 = PredTable::Register("right_of", 3, new pred_right_of_3());
const Operation zebra::reg_next_to_3 = PredTable::Register("next_to", 3, new pred_next_to_3());
const Operation zebra::reg_member_2 = PredTable::Register("member", 2, new pred_member_2());
const Operation zebra::reg_print_houses_1 = PredTable::Register("print_houses", 1, new pred_print_houses_1());

	Operation zebra::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation zebra::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation zebra::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var78 = Data::V(mach);
		Var* var77 = Data::V(mach);
		Var* var76 = Data::V(mach);
		Var* var75 = Data::V(mach);
		Var* var74 = Data::V(mach);
		Var* var73 = Data::V(mach);
		Var* var72 = Data::V(mach);
		Var* var71 = Data::V(mach);
		Var* var70 = Data::V(mach);
		Var* var69 = Data::V(mach);
		Var* var68 = Data::V(mach);
		Var* var67 = Data::V(mach);
		Var* var66 = Data::V(mach);
		Var* var65 = Data::V(mach);
		Var* var64 = Data::V(mach);
		Var* var63 = Data::V(mach);
		Var* var62 = Data::V(mach);
		Var* var61 = Data::V(mach);
		Var* var60 = Data::V(mach);
		Var* var59 = Data::V(mach);
		Var* var58 = Data::V(mach);
		Var* var57 = Data::V(mach);
		Var* var56 = Data::V(mach);
		Var* var55 = Data::V(mach);
		Var* var54 = Data::V(mach);
		Var* var53 = Data::V(mach);
		Var* var52 = Data::V(mach);
		Var* var51 = Data::V(mach);
		Var* var50 = Data::V(mach);
		Var* var49 = Data::V(mach);
		Var* var48 = Data::V(mach);
		Var* var47 = Data::V(mach);
		Var* var46 = Data::V(mach);
		Var* var45 = Data::V(mach);
		Var* var44 = Data::V(mach);
		Var* var43 = Data::V(mach);
		Var* var42 = Data::V(mach);
		Var* var41 = Data::V(mach);
		Var* var40 = Data::V(mach);
		Var* var39 = Data::V(mach);
		Var* var38 = Data::V(mach);
		Var* var37 = Data::V(mach);
		Var* var36 = Data::V(mach);
		Var* var35 = Data::V(mach);
		Var* var34 = Data::V(mach);
		Var* var33 = Data::V(mach);
		Var* var32 = Data::V(mach);
		Var* var31 = Data::V(mach);
		Var* var30 = Data::V(mach);
		Var* var29 = Data::V(mach);
		Var* var28 = Data::V(mach);
		Var* var27 = Data::V(mach);
		Var* var26 = Data::V(mach);
		Var* var25 = Data::V(mach);
		Var* var24 = Data::V(mach);
		Var* var23 = Data::V(mach);
		Var* var22 = Data::V(mach);
		Var* var21 = Data::V(mach);
		Var* var20 = Data::V(mach);
		Var* var19 = Data::V(mach);
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
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
		local_aregs[0] = var1;
		local_aregs[1] = Data::F(zebra::s_member, Data::F(zebra::s_house, zebra::s_red, zebra::s_english, var2, var3, var4), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, var5, zebra::s_spanish, zebra::s_dog, var6, var7), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, zebra::s_green, var8, var9, zebra::s_coffee, var10), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, var11, zebra::s_ukrainian, var12, zebra::s_tea, var13), var1->Deref(), Data::F(zebra::s_right_of, Data::F(zebra::s_house, zebra::s_green, var14, var15, var16, var17), Data::F(zebra::s_house, zebra::s_ivory, var18, var19, var20, var21), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, var22, var23, zebra::s_snails, var24, zebra::s_winstons), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, zebra::s_yellow, var25, var26, var27, zebra::s_kools), var1->Deref(), Data::F(zebra::s_unify, Data::F(zebra::s1, var28, Data::F(zebra::s1, var29, Data::F(zebra::s1, Data::F(zebra::s_house, var30, var31, var32, zebra::s_milk, var33), Data::F(zebra::s1, var34, Data::F(zebra::s1, var35, Const::Nil))))), var1->Deref(), Data::F(zebra::s_unify, Data::F(zebra::s1, Data::F(zebra::s_house, var36, zebra::s_norwegian, var37, var38, var39), var40), var1->Deref(), Data::F(zebra::s_next_to, Data::F(zebra::s_house, var41, var42, var43, var44, zebra::s_chesterfields), Data::F(zebra::s_house, var45, var46, zebra::s_fox, var47, var48), var1->Deref(), Data::F(zebra::s_next_to, Data::F(zebra::s_house, var49, var50, var51, var52, zebra::s_kools), Data::F(zebra::s_house, var53, var54, zebra::s_horse, var55, var56), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, var57, var58, var59, zebra::s_orange_juice, zebra::s_lucky_strikes), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, var60, zebra::s_japanese, var61, var62, zebra::s_parliaments), var1->Deref(), Data::F(zebra::s_next_to, Data::F(zebra::s_house, var63, zebra::s_norwegian, var64, var65, var66), Data::F(zebra::s_house, zebra::s_blue, var67, var68, var69, var70), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, var71, var72, zebra::s_zebra, var73, var74), var1->Deref(), Data::F(zebra::s_member, Data::F(zebra::s_house, var75, var76, var77, zebra::s_water, var78), var1->Deref(), continuation))))))))))))))));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_houses_1::exec_static);
	}

	Operation zebra::pred_houses_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation zebra::pred_houses_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_houses_1__1(mach));
	}

	Operation zebra::pred_houses_1::exec_pred_houses_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var25 = Data::V(mach);
		Var* var24 = Data::V(mach);
		Var* var23 = Data::V(mach);
		Var* var22 = Data::V(mach);
		Var* var21 = Data::V(mach);
		Var* var20 = Data::V(mach);
		Var* var19 = Data::V(mach);
		Var* var18 = Data::V(mach);
		Var* var17 = Data::V(mach);
		Var* var16 = Data::V(mach);
		Var* var15 = Data::V(mach);
		Var* var14 = Data::V(mach);
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
		if(!((areg0)->Unify(Data::F(zebra::s1, Data::F(zebra::s_house, var1, var2, var3, var4, var5), Data::F(zebra::s1, Data::F(zebra::s_house, var6, var7, var8, var9, var10), Data::F(zebra::s1, Data::F(zebra::s_house, var11, var12, var13, var14, var15), Data::F(zebra::s1, Data::F(zebra::s_house, var16, var17, var18, var19, var20), Data::F(zebra::s1, Data::F(zebra::s_house, var21, var22, var23, var24, var25), Const::Nil)))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation zebra::pred_right_of_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation zebra::pred_right_of_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_right_of_3__1(mach));
	}

	Operation zebra::pred_right_of_3::exec_pred_right_of_3__1(Prolog* mach) {
		mach->FillAlternative(pred_right_of_3::exec_pred_right_of_3__2);
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
		if(!((areg2)->Unify(Data::F(zebra::s1, { var2->Deref(), Data::F(zebra::s1, { var1->Deref(), var3 }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation zebra::pred_right_of_3::exec_pred_right_of_3__2(Prolog* mach) {
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
		if(!((areg2)->Unify(Data::F(zebra::s1, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_right_of_3::exec_static);
	}

	Operation zebra::pred_next_to_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation zebra::pred_next_to_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_next_to_3__1(mach));
	}

	Operation zebra::pred_next_to_3::exec_pred_next_to_3__1(Prolog* mach) {
		mach->FillAlternative(pred_next_to_3::exec_pred_next_to_3__2);
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
		if(!((areg2)->Unify(Data::F(zebra::s1, { var1->Deref(), Data::F(zebra::s1, { var2->Deref(), var3 }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation zebra::pred_next_to_3::exec_pred_next_to_3__2(Prolog* mach) {
		mach->FillAlternative(pred_next_to_3::exec_pred_next_to_3__3);
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
		if(!((areg2)->Unify(Data::F(zebra::s1, { var2->Deref(), Data::F(zebra::s1, { var1->Deref(), var3 }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation zebra::pred_next_to_3::exec_pred_next_to_3__3(Prolog* mach) {
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
		if(!((areg2)->Unify(Data::F(zebra::s1, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_next_to_3::exec_static);
	}

	Operation zebra::pred_member_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation zebra::pred_member_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_member_2__1(mach));
	}

	Operation zebra::pred_member_2::exec_pred_member_2__1(Prolog* mach) {
		mach->FillAlternative(pred_member_2::exec_pred_member_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(zebra::s1, { var1->Deref(), var2 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation zebra::pred_member_2::exec_pred_member_2__2(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(zebra::s1, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_member_2::exec_static);
	}

	Operation zebra::pred_print_houses_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation zebra::pred_print_houses_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_print_houses_1__1(mach));
	}

	Operation zebra::pred_print_houses_1::exec_pred_print_houses_1__1(Prolog* mach) {
		mach->FillAlternative(pred_print_houses_1::exec_pred_print_houses_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(zebra::s1, var1, var2)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(zebra::s_write, { var1->Deref(), Data::F(zebra::s_nl, Data::F(zebra::s_print_houses, { var2->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation zebra::pred_print_houses_1::exec_pred_print_houses_1__2(Prolog* mach) {
		mach->RemoveChoice();
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
}
