using namespace std;

#include "sdda.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../bootlib/sxx_builtins.h"
#include "../machine/builtins.h"

Const* sdda::s0 = Const::Intern("cut");
Const* sdda::s1 = Const::Intern(" ");
Const* sdda::s2 = Const::Intern("*");
Const* sdda::s3 = Const::Intern("+");
Const* sdda::s4 = Const::Intern(",");
Const* sdda::s5 = Const::Intern("-");
Const* sdda::s6 = Const::Intern("->");
Const* sdda::s7 = Const::Intern(".");
Const* sdda::s8 = Const::Intern("/");
Const* sdda::s9 = Const::Intern("//");
Const* sdda::s10 = Const::Intern(":-");
Const* sdda::s11 = Const::Intern("<");
Const* sdda::s12 = Const::Intern("=");
Const* sdda::s13 = Const::Intern("=..");
Const* sdda::s14 = Const::Intern(">=");
Const* sdda::s15 = Const::Intern("a");
Const* sdda::s16 = Const::Intern("add_to_list");
Const* sdda::s17 = Const::Intern("all_shared");
Const* sdda::s18 = Const::Intern("atom");
Const* sdda::s19 = Const::Intern("atomic");
Const* sdda::s20 = Const::Intern("bind_all");
Const* sdda::s21 = Const::Intern("body_exit_mode");
Const* sdda::s22 = Const::Intern("build_name");
Const* sdda::s23 = Const::Intern("built_in");
Const* sdda::s24 = Const::Intern("c");
Const* sdda::s25 = Const::Intern("call");
Const* sdda::s26 = Const::Intern("clause_exit_mode");
Const* sdda::s27 = Const::Intern("clause_exit_modes_list");
Const* sdda::s28 = Const::Intern("concat");
Const* sdda::s29 = Const::Intern("cut");
Const* sdda::s30 = Const::Intern("do_sdda");
Const* sdda::s31 = Const::Intern("dup");
Const* sdda::s32 = Const::Intern("dup_var");
Const* sdda::s33 = Const::Intern("entry_exit_modes_list");
Const* sdda::s34 = Const::Intern("eqmember");
Const* sdda::s35 = Const::Intern("equiv");
Const* sdda::s36 = Const::Intern("equiv_vars");
Const* sdda::s37 = Const::Intern("fail");
Const* sdda::s38 = Const::Intern("functor");
Const* sdda::s39 = Const::Intern("g");
Const* sdda::s40 = Const::Intern("is");
Const* sdda::s41 = Const::Intern("length");
Const* sdda::s42 = Const::Intern("look_up_act");
Const* sdda::s43 = Const::Intern("make_name");
Const* sdda::s44 = Const::Intern("member");
Const* sdda::s45 = Const::Intern("mod");
Const* sdda::s46 = Const::Intern("name");
Const* sdda::s47 = Const::Intern("name_vars");
Const* sdda::s48 = Const::Intern("nl");
Const* sdda::s49 = Const::Intern("nonvar");
Const* sdda::s50 = Const::Intern("not");
Const* sdda::s51 = Const::Intern("or");
Const* sdda::s52 = Const::Intern("proc_exit_mode");
Const* sdda::s53 = Const::Intern("read_procedures");
Const* sdda::s54 = Const::Intern("smallerthan");
Const* sdda::s55 = Const::Intern("smember");
Const* sdda::s56 = Const::Intern("sumember");
Const* sdda::s57 = Const::Intern("termequal");
Const* sdda::s58 = Const::Intern("test");
Const* sdda::s59 = Const::Intern("top");
Const* sdda::s60 = Const::Intern("true");
Const* sdda::s61 = Const::Intern("umember");
Const* sdda::s62 = Const::Intern("unify");
Const* sdda::s63 = Const::Intern("var");
Const* sdda::s64 = Const::Intern("worst_case");
Const* sdda::s65 = Const::Intern("write");
Const* sdda::s66 = Const::Intern("write_list2");
Int* sdda::posint0 = Term::Number(0);
Int* sdda::posint1 = Term::Number(1);
Int* sdda::posint2 = Term::Number(2);
Int* sdda::posint3 = Term::Number(3);
Int* sdda::posint26 = Term::Number(26);

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
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	local_aregs[0] = sdda::s58;
	local_aregs[1] = var1;
	local_aregs[2] = var2;
	local_aregs[3] = var3;
	local_aregs[4] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_do_sdda_4::exec_static);
}

static* function < Function*pred_do_sdda_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_do_sdda_4__1(mach));
}

static* function < Function*pred_do_sdda_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var6;
	local_aregs[3] = F(sdda::s33, { var5->Deref(), var2->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_read_procedures_3::exec_static);
}

static* function < Function*pred_read_procedures_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_procedures_3__1(mach));
}

static* function < Function*pred_read_procedures_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg0)->Unify(F(sdda::s7, F(sdda::s7, F(sdda::s8, sdda::s15, sdda::posint2), F(sdda::s7, F(sdda::s15, var1, var2), F(sdda::s7, F(sdda::s15, var3, var3->Deref()), var4))), F(sdda::s7, F(sdda::s7, F(sdda::s8, sdda::s24, sdda::posint3), F(sdda::s7, F(sdda::s10, F(sdda::s24, var5, var6, var7), F(sdda::s15, { var5->Deref(), var6->Deref() })), var8)), var9))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var10))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, F(sdda::s24, var11, var12, var13), var14)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_entry_exit_modes_list_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_entry_exit_modes_list_3__1(mach));
}

static* function < Function*pred_entry_exit_modes_list_3::(PrologMachine*) {
	mach::FillAlternative(pred_entry_exit_modes_list_3::exec_pred_entry_exit_modes_list_3__2);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_entry_exit_modes_list_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(F(sdda::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = F(sdda::s7, var5, var6);
	local_aregs[2] = F(sdda::s41, { var6->Deref(), var7, F(sdda::s52, { var1->Deref(), var2->Deref(), Const::Nil, F(sdda::s8, { var5->Deref(), var7->Deref() }), var6->Deref(), var8, F(sdda::s33, { var1->Deref(), var2->Deref(), var4->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_static);
}

static* function < Function*pred_proc_exit_mode_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_proc_exit_mode_6__1(mach));
}

static* function < Function*pred_proc_exit_mode_6::(PrologMachine*) {
	mach::FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s8, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sdda::s8, { var4->Deref(), var5->Deref() });
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var7->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_built_in_3::exec_static);
}

static* function < Function*pred_proc_exit_mode_6::(PrologMachine*) {
	mach::FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s8, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sdda::s7, F(sdda::s8, { var4->Deref(), var5->Deref() }), F(sdda::s7, { var6->Deref(), F(sdda::s7, { var7->Deref(), Const::Nil }) }));
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_look_up_act_2::exec_static);
}

static* function < Function*pred_proc_exit_mode_6::(PrologMachine*) {
	mach::FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s8, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sdda::s7, F(sdda::s8, { var4->Deref(), var5->Deref() }), var8);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(sdda::s31, { var8->Deref(), var9, F(sdda::s27, { var1->Deref(), var2->Deref(), var3->Deref(), var9->Deref(), var6->Deref(), var10, F(sdda::s51, F(sdda::s6, F(sdda::s12, { var10->Deref(), Const::Nil }), sdda::s37), sdda::s60, F(sdda::s64, { var10->Deref(), var7->Deref(), F(sdda::s31, { var6->Deref(), var11, F(sdda::s16, F(sdda::s7, F(sdda::s8, { var4->Deref(), var5->Deref() }), F(sdda::s7, { var11->Deref(), F(sdda::s7, { var7->Deref(), Const::Nil }) })), var2->Deref(), continuation) }) })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_umember_2::exec_static);
}

static* function < Function*pred_proc_exit_mode_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s8, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var8;
	local_aregs[1] = F(sdda::s7, { var4->Deref(), var6->Deref() });
	local_aregs[2] = F(sdda::s17, { var6->Deref(), var7->Deref(), F(sdda::s16, F(sdda::s7, F(sdda::s8, { var4->Deref(), var5->Deref() }), F(sdda::s7, { var6->Deref(), F(sdda::s7, { var7->Deref(), Const::Nil }) })), var2->Deref(), continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_static);
}

static* function < Function*pred_clause_exit_modes_list_6::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ],mach.Areg[6]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(6);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_clause_exit_modes_list_6__1(mach));
}

static* function < Function*pred_clause_exit_modes_list_6::(PrologMachine*) {
	mach::FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_clause_exit_modes_list_6::(PrologMachine*) {
	mach::FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s7, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sdda::s7, { var4->Deref(), F(sdda::s7, { var6->Deref(), Const::Nil }) });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = F(sdda::s27, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_eqmember_2::exec_static);
}

static* function < Function*pred_clause_exit_modes_list_6::(PrologMachine*) {
	mach::FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s7, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(F(sdda::s7, var7, var8)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var7->Deref();
	local_aregs[2] = F(sdda::s26, { var1->Deref(), var2->Deref(), F(sdda::s7, F(sdda::s7, { var4->Deref(), F(sdda::s7, { var6->Deref(), Const::Nil }) }), var3->Deref()), var4->Deref(), var7->Deref(), F(sdda::s27, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var8->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_dup_2::exec_static);
}

static* function < Function*pred_clause_exit_modes_list_6::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s7, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg5)->Unify(var7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_clause_exit_modes_list_6::exec_static);
}

static* function < Function*pred_clause_exit_mode_5::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
	 * ]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(5);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_clause_exit_mode_5__1(mach));
}

static* function < Function*pred_clause_exit_mode_5::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg4)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sdda::s12, { var4->Deref(), F(sdda::s10, var6, var7) });
	local_aregs[1] = F(sdda::s4, F(sdda::s12, { var4->Deref(), var6->Deref() }), F(sdda::s12, { var7->Deref(), sdda::s60 }));
	local_aregs[2] = F(sdda::s13, { var6->Deref(), F(sdda::s7, var8, var9), F(sdda::s62, { var9->Deref(), var5->Deref(), F(sdda::s21, { var1->Deref(), var2->Deref(), var3->Deref(), var7->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_body_exit_mode_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_body_exit_mode_4__1(mach));
}

static* function < Function*pred_body_exit_mode_4::(PrologMachine*) {
	mach::FillAlternative(pred_body_exit_mode_4::exec_pred_body_exit_mode_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(F(sdda::s4, var4, var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = F(sdda::s21, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_body_exit_mode_4::exec_static);
}

static* function < Function*pred_body_exit_mode_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var5;
	local_aregs[2] = var6;
	local_aregs[3] = F(sdda::s13, { var4->Deref(), F(sdda::s7, { var5->Deref(), var7 }), F(sdda::s52, { var1->Deref(), var2->Deref(), var3->Deref(), F(sdda::s8, { var5->Deref(), var6->Deref() }), var7->Deref(), var8, F(sdda::s62, { var7->Deref(), var8->Deref(), continuation }) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_static);
}

static* function < Function*pred_unify_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_unify_2__1(mach));
}

static* function < Function*pred_unify_2::(PrologMachine*) {
	mach::FillAlternative(pred_unify_2::exec_pred_unify_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_unify_2::(PrologMachine*) {
	mach::FillAlternative(pred_unify_2::exec_pred_unify_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sdda::s39))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s50, F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_unify_2::(PrologMachine*) {
	mach::FillAlternative(pred_unify_2::exec_pred_unify_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sdda::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s50, F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_unify_2::(PrologMachine*) {
	mach::FillAlternative(pred_unify_2::exec_pred_unify_2__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sdda::s62, { var1->Deref(), var3->Deref(), F(sdda::s62, { var2->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_unify_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sdda::s7, var3, var4);
	local_aregs[2] = F(sdda::s13, { var2->Deref(), F(sdda::s7, { var3->Deref(), var5 }), F(sdda::s62, { var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_static);
}

static* function < Function*pred_equiv_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_equiv_2__1(mach));
}

static* function < Function*pred_equiv_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_equiv_3::exec_static);
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_equiv_3__1(mach));
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_3::exec_pred_equiv_3__2);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sdda::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_3::exec_pred_equiv_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sdda::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s50, F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_3::exec_pred_equiv_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sdda::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s50, F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_3::exec_pred_equiv_3__5);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s63, { var2->Deref(), F(sdda::s36, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_3::exec_pred_equiv_3__6);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s63, { var1->Deref(), F(sdda::s36, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_3::exec_pred_equiv_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sdda::s35, { var1->Deref(), var3->Deref(), var5->Deref(), F(sdda::s35, { var2->Deref(), var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_equiv_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sdda::s7, var4, var5);
	local_aregs[2] = F(sdda::s13, { var2->Deref(), F(sdda::s7, { var4->Deref(), var6 }), F(sdda::s35, { var5->Deref(), var6->Deref(), var3->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_static);
}

static* function < Function*pred_equiv_vars_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_equiv_vars_3__1(mach));
}

static* function < Function*pred_equiv_vars_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__2);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s62, F(sdda::s7, F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) }), var4), var3->Deref(), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_equiv_vars_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(F(sdda::s7, F(sdda::s7, var3, F(sdda::s7, var4, Const::Nil)), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sdda::s0, &tempVar, F(sdda::s57, { var2->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_equiv_vars_3::(PrologMachine*) {
	mach::FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(F(sdda::s7, F(sdda::s7, var3, F(sdda::s7, var4, Const::Nil)), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sdda::s0, &tempVar, F(sdda::s57, { var1->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_equiv_vars_3::(PrologMachine*) {
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
	if(!((areg2)->Unify(F(sdda::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_equiv_vars_3::exec_static);
}

static* function < Function*pred_dup_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_dup_2__1(mach));
}

static* function < Function*pred_dup_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_dup_3::exec_static);
}

static* function < Function*pred_dup_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_dup_3__1(mach));
}

static* function < Function*pred_dup_3::(PrologMachine*) {
	mach::FillAlternative(pred_dup_3::exec_pred_dup_3__2);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s32, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_dup_3::(PrologMachine*) {
	mach::FillAlternative(pred_dup_3::exec_pred_dup_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_dup_3::(PrologMachine*) {
	mach::FillAlternative(pred_dup_3::exec_pred_dup_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sdda::s31, { var1->Deref(), var3->Deref(), var5->Deref(), F(sdda::s31, { var2->Deref(), var4->Deref(), var5->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_dup_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sdda::s7, var4, var5);
	local_aregs[2] = F(sdda::s31, { var5->Deref(), var6, var3->Deref(), F(sdda::s13, { var2->Deref(), F(sdda::s7, { var4->Deref(), var6->Deref() }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_static);
}

static* function < Function*pred_dup_var_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_dup_var_3__1(mach));
}

static* function < Function*pred_dup_var_3::(PrologMachine*) {
	mach::FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__2);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s62, F(sdda::s7, F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) }), var4), var3->Deref(), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_dup_var_3::(PrologMachine*) {
	mach::FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__3);
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
	if(!((areg2)->Unify(F(sdda::s7, F(sdda::s7, var3, F(sdda::s7, { var2->Deref(), Const::Nil })), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sdda::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_dup_var_3::(PrologMachine*) {
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
	if(!((areg2)->Unify(F(sdda::s7, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_dup_var_3::exec_static);
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_built_in_3__1(mach));
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(sdda::s8, sdda::s60, sdda::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(sdda::s8, sdda::s37, sdda::posint0)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s12, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, sdda::s39, F(sdda::s7, sdda::s39, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sdda::s19, { var1->Deref() });
	local_aregs[1] = F(sdda::s19, { var2->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s12, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), F(sdda::s7, { var1->Deref(), Const::Nil }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s3, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s5, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s2, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s8, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s14, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::FillAlternative(pred_built_in_3::exec_pred_built_in_3__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s11, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_built_in_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s8, sdda::s40, sdda::posint2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var1, F(sdda::s7, var2, Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, sdda::s39, F(sdda::s7, { var2->Deref(), Const::Nil }))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_worst_case_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_worst_case_2__1(mach));
}

static* function < Function*pred_worst_case_2::(PrologMachine*) {
	mach::FillAlternative(pred_worst_case_2::exec_pred_worst_case_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_worst_case_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = F(sdda::s64, { var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_look_up_act_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_look_up_act_2__1(mach));
}

static* function < Function*pred_look_up_act_2::(PrologMachine*) {
	mach::FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s37, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_look_up_act_2::(PrologMachine*) {
	mach::FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, F(sdda::s8, var1, var2), F(sdda::s7, var3, F(sdda::s7, var4, Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, F(sdda::s7, F(sdda::s8, { var1->Deref(), var2->Deref() }), F(sdda::s7, var5, F(sdda::s7, { var4->Deref(), Const::Nil }))), var6)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_equiv_2::exec_static);
}

static* function < Function*pred_look_up_act_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, F(sdda::s8, var1, var2), F(sdda::s7, var3, F(sdda::s7, var4, Const::Nil)))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, var5, var6)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sdda::s7, F(sdda::s8, { var1->Deref(), var2->Deref() }), F(sdda::s7, { var3->Deref(), F(sdda::s7, { var4->Deref(), Const::Nil }) }));
	local_aregs[1] = var6->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_look_up_act_2::exec_static);
}

static* function < Function*pred_all_shared_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_all_shared_2__1(mach));
}

static* function < Function*pred_all_shared_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = var4;
	local_aregs[3] = F(sdda::s20, var5, var4->Deref(), F(sdda::s62, { var1->Deref(), var2->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_3::exec_static);
}

static* function < Function*pred_bind_all_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_bind_all_2__1(mach));
}

static* function < Function*pred_bind_all_2::(PrologMachine*) {
	mach::FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_bind_all_2::(PrologMachine*) {
	mach::FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__3);
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
	if(!((areg1)->Unify(F(sdda::s7, F(sdda::s7, var2, F(sdda::s7, { var1->Deref(), Const::Nil })), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sdda::s20, { var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_bind_all_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, F(sdda::s7, var2, F(sdda::s7, var3, Const::Nil)), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_bind_all_2::exec_static);
}

static* function < Function*pred_add_to_list_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_add_to_list_2__1(mach));
}

static* function < Function*pred_add_to_list_2::(PrologMachine*) {
	mach::FillAlternative(pred_add_to_list_2::exec_pred_add_to_list_2__2);
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
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = F(sdda::s62, F(sdda::s7, { var1->Deref(), var3 }), var2->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_add_to_list_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_add_to_list_2::exec_static);
}

static* function < Function*pred_umember_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_umember_2__1(mach));
}

static* function < Function*pred_umember_2::(PrologMachine*) {
	mach::FillAlternative(pred_umember_2::exec_pred_umember_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s37, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_umember_2::(PrologMachine*) {
	mach::FillAlternative(pred_umember_2::exec_pred_umember_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sdda::s7, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_umember_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_umember_2::exec_static);
}

static* function < Function*pred_sumember_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_sumember_2__1(mach));
}

static* function < Function*pred_sumember_2::(PrologMachine*) {
	mach::FillAlternative(pred_sumember_2::exec_pred_sumember_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s37, { continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_sumember_2::(PrologMachine*) {
	mach::FillAlternative(pred_sumember_2::exec_pred_sumember_2__3);
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_sumember_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sumember_2::exec_static);
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
	if(!((areg1)->Unify(F(sdda::s7, { var1->Deref(), var2 })))) {
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_member_2::exec_static);
}

static* function < Function*pred_smember_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_smember_2__1(mach));
}

static* function < Function*pred_smember_2::(PrologMachine*) {
	mach::FillAlternative(pred_smember_2::exec_pred_smember_2__2);
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_smember_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smember_2::exec_static);
}

static* function < Function*pred_eqmember_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_eqmember_2__1(mach));
}

static* function < Function*pred_eqmember_2::(PrologMachine*) {
	mach::FillAlternative(pred_eqmember_2::exec_pred_eqmember_2__2);
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_equiv_2::exec_static);
}

static* function < Function*pred_eqmember_2::(PrologMachine*) {
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
	if(!((areg1)->Unify(F(sdda::s7, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_eqmember_2::exec_static);
}

static* function < Function*pred_concat_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_concat_3__1(mach));
}

static* function < Function*pred_concat_3::(PrologMachine*) {
	mach::FillAlternative(pred_concat_3::exec_pred_concat_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_concat_3::(PrologMachine*) {
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
	if(!((areg0)->Unify(F(sdda::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_concat_3::exec_static);
}

static* function < Function*pred_nl_0::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0]} ; */
	std::vector<Term*> aregs = mach::RegPull(0);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_nl_0__1(mach));
}

static* function < Function*pred_nl_0::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_write_list2_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_write_list2_3__1(mach));
}

static* function < Function*pred_write_list2_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = F(sdda::s65, { var1->Deref(), F(sdda::s51, F(sdda::s6, F(sdda::s49, { var2->Deref() }), F(sdda::s4, F(sdda::s65, sdda::s4), F(sdda::s4, sdda::s48, F(sdda::s4, F(sdda::s65, sdda::s1), F(sdda::s66, { var2->Deref(), var5->Deref(), var4->Deref() }))))), F(sdda::s12, { var4->Deref(), var5->Deref() }), continuation) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_name_vars_3::exec_static);
}

static* function < Function*pred_name_vars_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_name_vars_3__1(mach));
}

static* function < Function*pred_name_vars_3::(PrologMachine*) {
	mach::FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__2);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, F(sdda::s43, { var2->Deref(), var1->Deref(), F(sdda::s40, { var3->Deref(), F(sdda::s3, { var2->Deref(), sdda::posint1 }), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_name_vars_3::(PrologMachine*) {
	mach::FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sdda::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atom_1::exec_static);
}

static* function < Function*pred_name_vars_3::(PrologMachine*) {
	mach::FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sdda::s7, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sdda::s47, { var1->Deref(), var3->Deref(), var5, F(sdda::s47, { var2->Deref(), var5->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_name_vars_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sdda::s7, var4, var5);
	local_aregs[2] = F(sdda::s47, { var5->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_static);
}

static* function < Function*pred_make_name_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_make_name_2__1(mach));
}

static* function < Function*pred_make_name_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
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
	local_aregs[0] = var3;
	local_aregs[1] = F(sdda::s9, { var1->Deref(), sdda::posint26 });
	local_aregs[2] = F(sdda::s40, var4, F(sdda::s3, F(sdda::s45, { var1->Deref(), sdda::posint26 }), Const::Intern("A")), F(sdda::s22, { var3->Deref(), var4->Deref(), var5, F(sdda::s46, { var2->Deref(), var5->Deref(), continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_is_2::exec_static);
}

static* function < Function*pred_build_name_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_build_name_3__1(mach));
}

static* function < Function*pred_build_name_3::(PrologMachine*) {
	mach::FillAlternative(pred_build_name_3::exec_pred_build_name_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sdda::posint0))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sdda::s7, { var1->Deref(), Const::Nil })))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_build_name_3::(PrologMachine*) {
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
	if(!((areg2)->Unify(F(sdda::s7, { var2->Deref(), var3 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = sdda::posint0;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = F(sdda::s40, var4, F(sdda::s5, { var1->Deref(), sdda::posint1 }), F(sdda::s22, { var4->Deref(), var2->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_smallerthan_2::exec_static);
}
