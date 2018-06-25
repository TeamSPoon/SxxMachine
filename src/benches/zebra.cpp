using namespace std;

#include "zebra.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"

Const* zebra::s0 = Const::Intern("cut");
Const* zebra::s1 = Const::Intern(".");
Const* zebra::s2 = Const::Intern(":-");
Const* zebra::s3 = Const::Intern("blue");
Const* zebra::s4 = Const::Intern("call");
Const* zebra::s5 = Const::Intern("chesterfields");
Const* zebra::s6 = Const::Intern("coffee");
Const* zebra::s7 = Const::Intern("cut");
Const* zebra::s8 = Const::Intern("dog");
Const* zebra::s9 = Const::Intern("english");
Const* zebra::s10 = Const::Intern("fox");
Const* zebra::s11 = Const::Intern("green");
Const* zebra::s12 = Const::Intern("horse");
Const* zebra::s13 = Const::Intern("house");
Const* zebra::s14 = Const::Intern("houses");
Const* zebra::s15 = Const::Intern("ivory");
Const* zebra::s16 = Const::Intern("japanese");
Const* zebra::s17 = Const::Intern("kools");
Const* zebra::s18 = Const::Intern("lucky_strikes");
Const* zebra::s19 = Const::Intern("member");
Const* zebra::s20 = Const::Intern("milk");
Const* zebra::s21 = Const::Intern("next_to");
Const* zebra::s22 = Const::Intern("nl");
Const* zebra::s23 = Const::Intern("norwegian");
Const* zebra::s24 = Const::Intern("orange_juice");
Const* zebra::s25 = Const::Intern("parliaments");
Const* zebra::s26 = Const::Intern("print_houses");
Const* zebra::s27 = Const::Intern("red");
Const* zebra::s28 = Const::Intern("right_of");
Const* zebra::s29 = Const::Intern("snails");
Const* zebra::s30 = Const::Intern("spanish");
Const* zebra::s31 = Const::Intern("tea");
Const* zebra::s32 = Const::Intern("top");
Const* zebra::s33 = Const::Intern("ukrainian");
Const* zebra::s34 = Const::Intern("unify");
Const* zebra::s35 = Const::Intern("water");
Const* zebra::s36 = Const::Intern("winstons");
Const* zebra::s37 = Const::Intern("write");
Const* zebra::s38 = Const::Intern("yellow");
Const* zebra::s39 = Const::Intern("zebra");
Int* zebra::posint1 = Term::Number(1);

static* function < Function*pred_top_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_top_0__1(mach));
}

static* function < Function*pred_top_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	Var* var78 = V(mach);
	Var* var77 = V(mach);
	Var* var76 = V(mach);
	Var* var75 = V(mach);
	Var* var74 = V(mach);
	Var* var73 = V(mach);
	Var* var72 = V(mach);
	Var* var71 = V(mach);
	Var* var70 = V(mach);
	Var* var69 = V(mach);
	Var* var68 = V(mach);
	Var* var67 = V(mach);
	Var* var66 = V(mach);
	Var* var65 = V(mach);
	Var* var64 = V(mach);
	Var* var63 = V(mach);
	Var* var62 = V(mach);
	Var* var61 = V(mach);
	Var* var60 = V(mach);
	Var* var59 = V(mach);
	Var* var58 = V(mach);
	Var* var57 = V(mach);
	Var* var56 = V(mach);
	Var* var55 = V(mach);
	Var* var54 = V(mach);
	Var* var53 = V(mach);
	Var* var52 = V(mach);
	Var* var51 = V(mach);
	Var* var50 = V(mach);
	Var* var49 = V(mach);
	Var* var48 = V(mach);
	Var* var47 = V(mach);
	Var* var46 = V(mach);
	Var* var45 = V(mach);
	Var* var44 = V(mach);
	Var* var43 = V(mach);
	Var* var42 = V(mach);
	Var* var41 = V(mach);
	Var* var40 = V(mach);
	Var* var39 = V(mach);
	Var* var38 = V(mach);
	Var* var37 = V(mach);
	Var* var36 = V(mach);
	Var* var35 = V(mach);
	Var* var34 = V(mach);
	Var* var33 = V(mach);
	Var* var32 = V(mach);
	Var* var31 = V(mach);
	Var* var30 = V(mach);
	Var* var29 = V(mach);
	Var* var28 = V(mach);
	Var* var27 = V(mach);
	Var* var26 = V(mach);
	Var* var25 = V(mach);
	Var* var24 = V(mach);
	Var* var23 = V(mach);
	Var* var22 = V(mach);
	Var* var21 = V(mach);
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = F(zebra::s19, F(zebra::s13, zebra::s27, zebra::s9, var2, var3, var4), var1->Deref(), F(zebra::s19, F(zebra::s13, var5, zebra::s30, zebra::s8, var6, var7), var1->Deref(), F(zebra::s19, F(zebra::s13, zebra::s11, var8, var9, zebra::s6, var10), var1->Deref(), F(zebra::s19, F(zebra::s13, var11, zebra::s33, var12, zebra::s31, var13), var1->Deref(), F(zebra::s28, F(zebra::s13, zebra::s11, var14, var15, var16, var17), F(zebra::s13, zebra::s15, var18, var19, var20, var21), var1->Deref(), F(zebra::s19, F(zebra::s13, var22, var23, zebra::s29, var24, zebra::s36), var1->Deref(), F(zebra::s19, F(zebra::s13, zebra::s38, var25, var26, var27, zebra::s17), var1->Deref(), F(zebra::s34, F(zebra::s1, var28, F(zebra::s1, var29, F(zebra::s1, F(zebra::s13, var30, var31, var32, zebra::s20, var33), F(zebra::s1, var34, F(zebra::s1, var35, Const::Nil))))), var1->Deref(), F(zebra::s34, F(zebra::s1, F(zebra::s13, var36, zebra::s23, var37, var38, var39), var40), var1->Deref(), F(zebra::s21, F(zebra::s13, var41, var42, var43, var44, zebra::s5), F(zebra::s13, var45, var46, zebra::s10, var47, var48), var1->Deref(), F(zebra::s21, F(zebra::s13, var49, var50, var51, var52, zebra::s17), F(zebra::s13, var53, var54, zebra::s12, var55, var56), var1->Deref(), F(zebra::s19, F(zebra::s13, var57, var58, var59, zebra::s24, zebra::s18), var1->Deref(), F(zebra::s19, F(zebra::s13, var60, zebra::s16, var61, var62, zebra::s25), var1->Deref(), F(zebra::s21, F(zebra::s13, var63, zebra::s23, var64, var65, var66), F(zebra::s13, zebra::s3, var67, var68, var69, var70), var1->Deref(), F(zebra::s19, F(zebra::s13, var71, var72, zebra::s39, var73, var74), var1->Deref(), F(zebra::s19, F(zebra::s13, var75, var76, var77, zebra::s35, var78), var1->Deref(), continuation))))))))))))))));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_houses_1::exec_static);
}

static* function < Function*pred_houses_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_houses_1__1(mach));
}

static* function < Function*pred_houses_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var25 = V(mach);
	Var* var24 = V(mach);
	Var* var23 = V(mach);
	Var* var22 = V(mach);
	Var* var21 = V(mach);
	Var* var20 = V(mach);
	Var* var19 = V(mach);
	Var* var18 = V(mach);
	Var* var17 = V(mach);
	Var* var16 = V(mach);
	Var* var15 = V(mach);
	Var* var14 = V(mach);
	Var* var13 = V(mach);
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(zebra::s1, F(zebra::s13, var1, var2, var3, var4, var5), F(zebra::s1, F(zebra::s13, var6, var7, var8, var9, var10), F(zebra::s1, F(zebra::s13, var11, var12, var13, var14, var15), F(zebra::s1, F(zebra::s13, var16, var17, var18, var19, var20), F(zebra::s1, F(zebra::s13, var21, var22, var23, var24, var25), Const::Nil)))))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_right_of_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_right_of_3__1(mach));
}

static* function < Function*pred_right_of_3::(PrologMachine*) {
	mach::FillAlternative(pred_right_of_3::exec_pred_right_of_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(zebra::s1, { var2->Deref(), F(zebra::s1, { var1->Deref(), var3 }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_right_of_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(zebra::s1, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_right_of_3::exec_static);
}

static* function < Function*pred_next_to_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_next_to_3__1(mach));
}

static* function < Function*pred_next_to_3::(PrologMachine*) {
	mach::FillAlternative(pred_next_to_3::exec_pred_next_to_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(zebra::s1, { var1->Deref(), F(zebra::s1, { var2->Deref(), var3 }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_next_to_3::(PrologMachine*) {
	mach::FillAlternative(pred_next_to_3::exec_pred_next_to_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(zebra::s1, { var2->Deref(), F(zebra::s1, { var1->Deref(), var3 }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_next_to_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(zebra::s1, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_next_to_3::exec_static);
}

static* function < Function*pred_member_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_member_2__1(mach));
}

static* function < Function*pred_member_2::(PrologMachine*) {
	mach::FillAlternative(pred_member_2::exec_pred_member_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(zebra::s1, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_member_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(zebra::s1, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_member_2::exec_static);
}

static* function < Function*pred_print_houses_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_print_houses_1__1(mach));
}

static* function < Function*pred_print_houses_1::(PrologMachine*) {
	mach::FillAlternative(pred_print_houses_1::exec_pred_print_houses_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(zebra::s1, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(zebra::s37, { var1->Deref(), F(zebra::s22, F(zebra::s26, { var2->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_print_houses_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}
