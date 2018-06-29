using namespace std;

#include "sdda.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../bootlib/SxxMachine/sxx_meta.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  sdda::s_cut = Data::Intern("cut");
Const* const  sdda::s1 = Data::Intern(" ");
Const* const  sdda::s2 = Data::Intern("*");
Const* const  sdda::s3 = Data::Intern("+");
Const* const  sdda::s4 = Data::Intern(",");
Const* const  sdda::s5 = Data::Intern("-");
Const* const  sdda::s6 = Data::Intern("->");
Const* const  sdda::s7 = Data::Intern(".");
Const* const  sdda::s8 = Data::Intern("/");
Const* const  sdda::s9 = Data::Intern("//");
Const* const  sdda::s10 = Data::Intern(":-");
Const* const  sdda::s11 = Data::Intern("<");
Const* const  sdda::s12 = Data::Intern("=");
Const* const  sdda::s13 = Data::Intern("=..");
Const* const  sdda::s14 = Data::Intern(">=");
Const* const  sdda::s_a = Data::Intern("a");
Const* const  sdda::s_add_to_list = Data::Intern("add_to_list");
Const* const  sdda::s_all_shared = Data::Intern("all_shared");
Const* const  sdda::s_atom = Data::Intern("atom");
Const* const  sdda::s_atomic = Data::Intern("atomic");
Const* const  sdda::s_bind_all = Data::Intern("bind_all");
Const* const  sdda::s_body_exit_mode = Data::Intern("body_exit_mode");
Const* const  sdda::s_build_name = Data::Intern("build_name");
Const* const  sdda::s_built_in = Data::Intern("built_in");
Const* const  sdda::s_c = Data::Intern("c");
Const* const  sdda::s_call = Data::Intern("call");
Const* const  sdda::s_clause_exit_mode = Data::Intern("clause_exit_mode");
Const* const  sdda::s_clause_exit_modes_list = Data::Intern("clause_exit_modes_list");
Const* const  sdda::s_concat = Data::Intern("concat");
Const* const  sdda::s_do_sdda = Data::Intern("do_sdda");
Const* const  sdda::s_dup = Data::Intern("dup");
Const* const  sdda::s_dup_var = Data::Intern("dup_var");
Const* const  sdda::s_entry_exit_modes_list = Data::Intern("entry_exit_modes_list");
Const* const  sdda::s_eqmember = Data::Intern("eqmember");
Const* const  sdda::s_equiv = Data::Intern("equiv");
Const* const  sdda::s_equiv_vars = Data::Intern("equiv_vars");
Const* const  sdda::s_fail = Data::Intern("fail");
Const* const  sdda::s_functor = Data::Intern("functor");
Const* const  sdda::s_g = Data::Intern("g");
Const* const  sdda::s_is = Data::Intern("is");
Const* const  sdda::s_length = Data::Intern("length");
Const* const  sdda::s_look_up_act = Data::Intern("look_up_act");
Const* const  sdda::s_make_name = Data::Intern("make_name");
Const* const  sdda::s_member = Data::Intern("member");
Const* const  sdda::s_mod = Data::Intern("mod");
Const* const  sdda::s_name = Data::Intern("name");
Const* const  sdda::s_name_vars = Data::Intern("name_vars");
Const* const  sdda::s_nl = Data::Intern("nl");
Const* const  sdda::s_nonvar = Data::Intern("nonvar");
Const* const  sdda::s_not = Data::Intern("not");
Const* const  sdda::s_or = Data::Intern("or");
Const* const  sdda::s_proc_exit_mode = Data::Intern("proc_exit_mode");
Const* const  sdda::s_read_procedures = Data::Intern("read_procedures");
Const* const  sdda::s_smallerthan = Data::Intern("smallerthan");
Const* const  sdda::s_smember = Data::Intern("smember");
Const* const  sdda::s_sumember = Data::Intern("sumember");
Const* const  sdda::s_termequal = Data::Intern("termequal");
Const* const  sdda::s_test = Data::Intern("test");
Const* const  sdda::s_top = Data::Intern("top");
Const* const  sdda::s_true = Data::Intern("true");
Const* const  sdda::s_umember = Data::Intern("umember");
Const* const  sdda::s_unify = Data::Intern("unify");
Const* const  sdda::s_var = Data::Intern("var");
Const* const  sdda::s_worst_case = Data::Intern("worst_case");
Const* const  sdda::s_write = Data::Intern("write");
Const* const  sdda::s_write_list2 = Data::Intern("write_list2");
Int* const  sdda::posint0 = Data::Number(0LL);
Int* const  sdda::posint1 = Data::Number(1LL);
Int* const  sdda::posint2 = Data::Number(2LL);
Int* const  sdda::posint3 = Data::Number(3LL);
Int* const  sdda::posint26 = Data::Number(26LL);
const Operation sdda::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation sdda::reg_do_sdda_4 = PredTable::Register("do_sdda", 4, new pred_do_sdda_4());
const Operation sdda::reg_read_procedures_3 = PredTable::Register("read_procedures", 3, new pred_read_procedures_3());
const Operation sdda::reg_entry_exit_modes_list_3 = PredTable::Register("entry_exit_modes_list", 3, new pred_entry_exit_modes_list_3());
const Operation sdda::reg_proc_exit_mode_6 = PredTable::Register("proc_exit_mode", 6, new pred_proc_exit_mode_6());
const Operation sdda::reg_clause_exit_modes_list_6 = PredTable::Register("clause_exit_modes_list", 6, new pred_clause_exit_modes_list_6());
const Operation sdda::reg_clause_exit_mode_5 = PredTable::Register("clause_exit_mode", 5, new pred_clause_exit_mode_5());
const Operation sdda::reg_body_exit_mode_4 = PredTable::Register("body_exit_mode", 4, new pred_body_exit_mode_4());
const Operation sdda::reg_unify_2 = PredTable::Register("unify", 2, new SxxMachine::Builtins::pred_unify_2());
const Operation sdda::reg_equiv_2 = PredTable::Register("equiv", 2, new pred_equiv_2());
const Operation sdda::reg_equiv_3 = PredTable::Register("equiv", 3, new pred_equiv_3());
const Operation sdda::reg_equiv_vars_3 = PredTable::Register("equiv_vars", 3, new pred_equiv_vars_3());
const Operation sdda::reg_dup_2 = PredTable::Register("dup", 2, new pred_dup_2());
const Operation sdda::reg_dup_3 = PredTable::Register("dup", 3, new pred_dup_3());
const Operation sdda::reg_dup_var_3 = PredTable::Register("dup_var", 3, new pred_dup_var_3());
const Operation sdda::reg_built_in_3 = PredTable::Register("built_in", 3, new pred_built_in_3());
const Operation sdda::reg_worst_case_2 = PredTable::Register("worst_case", 2, new pred_worst_case_2());
const Operation sdda::reg_look_up_act_2 = PredTable::Register("look_up_act", 2, new pred_look_up_act_2());
const Operation sdda::reg_all_shared_2 = PredTable::Register("all_shared", 2, new pred_all_shared_2());
const Operation sdda::reg_bind_all_2 = PredTable::Register("bind_all", 2, new pred_bind_all_2());
const Operation sdda::reg_add_to_list_2 = PredTable::Register("add_to_list", 2, new pred_add_to_list_2());
const Operation sdda::reg_umember_2 = PredTable::Register("umember", 2, new pred_umember_2());
const Operation sdda::reg_sumember_2 = PredTable::Register("sumember", 2, new pred_sumember_2());
const Operation sdda::reg_member_2 = PredTable::Register("member", 2, new pred_member_2());
const Operation sdda::reg_smember_2 = PredTable::Register("smember", 2, new pred_smember_2());
const Operation sdda::reg_eqmember_2 = PredTable::Register("eqmember", 2, new pred_eqmember_2());
const Operation sdda::reg_concat_3 = PredTable::Register("concat", 3, new pred_concat_3());
const Operation sdda::reg_nl_0 = PredTable::Register("nl", 0, new SxxMachine::Builtins::pred_nl_0());
const Operation sdda::reg_write_list2_3 = PredTable::Register("write_list2", 3, new pred_write_list2_3());
const Operation sdda::reg_name_vars_3 = PredTable::Register("name_vars", 3, new pred_name_vars_3());
const Operation sdda::reg_make_name_2 = PredTable::Register("make_name", 2, new pred_make_name_2());
const Operation sdda::reg_build_name_3 = PredTable::Register("build_name", 3, new pred_build_name_3());

	Operation sdda::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation sdda::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = sdda::s_test;
		local_aregs[1] = var1;
		local_aregs[2] = var2;
		local_aregs[3] = var3;
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_do_sdda_4::exec_static);
	}

	Operation sdda::pred_do_sdda_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_do_sdda_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_do_sdda_4__1(mach));
	}

	Operation sdda::pred_do_sdda_4::exec_pred_do_sdda_4__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
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
		local_aregs[0] = var5;
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var6;
		local_aregs[3] = Data::F(sdda::s_entry_exit_modes_list, { var5->Deref(), var2->Deref(), var6->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_read_procedures_3::exec_static);
	}

	Operation sdda::pred_read_procedures_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_read_procedures_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_read_procedures_3__1(mach));
	}

	Operation sdda::pred_read_procedures_3::exec_pred_read_procedures_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
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
		if(!((areg0)->Unify(Data::F(sdda::s7, Data::F(sdda::s7, Data::F(sdda::s8, sdda::s_a, sdda::posint2), Data::F(sdda::s7, Data::F(sdda::s_a, var1, var2), Data::F(sdda::s7, Data::F(sdda::s_a, var3, var3->Deref()), var4))), Data::F(sdda::s7, Data::F(sdda::s7, Data::F(sdda::s8, sdda::s_c, sdda::posint3), Data::F(sdda::s7, Data::F(sdda::s10, Data::F(sdda::s_c, var5, var6, var7), Data::F(sdda::s_a, { var5->Deref(), var6->Deref() })), var8)), var9))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var10))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, Data::F(sdda::s_c, var11, var12, var13), var14)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_entry_exit_modes_list_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_entry_exit_modes_list_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_entry_exit_modes_list_3__1(mach));
	}

	Operation sdda::pred_entry_exit_modes_list_3::exec_pred_entry_exit_modes_list_3__1(Prolog* mach) {
		mach->FillAlternative(pred_entry_exit_modes_list_3::exec_pred_entry_exit_modes_list_3__2);
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
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_entry_exit_modes_list_3::exec_pred_entry_exit_modes_list_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(sdda::s7, var5, var6);
		local_aregs[2] = Data::F(sdda::s_length, { var6->Deref(), var7, Data::F(sdda::s_proc_exit_mode, { var1->Deref(), var2->Deref(), Const::Nil, Data::F(sdda::s8, { var5->Deref(), var7->Deref() }), var6->Deref(), var8, Data::F(sdda::s_entry_exit_modes_list, { var1->Deref(), var2->Deref(), var4->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$002E$002E_2::exec_static);
	}

	Operation sdda::pred_proc_exit_mode_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_proc_exit_mode_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_proc_exit_mode_6__1(mach));
	}

	Operation sdda::pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__1(Prolog* mach) {
		mach->FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__2);
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
		if(!((areg3)->Unify(Data::F(sdda::s8, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(sdda::s8, { var4->Deref(), var5->Deref() });
		local_aregs[1] = var6->Deref();
		local_aregs[2] = var7->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_built_in_3::exec_static);
	}

	Operation sdda::pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__2(Prolog* mach) {
		mach->FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__3);
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
		if(!((areg3)->Unify(Data::F(sdda::s8, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(sdda::s7, Data::F(sdda::s8, { var4->Deref(), var5->Deref() }), Data::F(sdda::s7, { var6->Deref(), Data::F(sdda::s7, { var7->Deref(), Const::Nil }) }));
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_look_up_act_2::exec_static);
	}

	Operation sdda::pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__3(Prolog* mach) {
		mach->FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
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
		if(!((areg3)->Unify(Data::F(sdda::s8, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(sdda::s7, Data::F(sdda::s8, { var4->Deref(), var5->Deref() }), var8);
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(sdda::s_dup, { var8->Deref(), var9, Data::F(sdda::s_clause_exit_modes_list, { var1->Deref(), var2->Deref(), var3->Deref(), var9->Deref(), var6->Deref(), var10, Data::F(sdda::s_or, Data::F(sdda::s6, Data::F(sdda::s12, { var10->Deref(), Const::Nil }), sdda::s_fail), sdda::s_true, Data::F(sdda::s_worst_case, { var10->Deref(), var7->Deref(), Data::F(sdda::s_dup, { var6->Deref(), var11, Data::F(sdda::s_add_to_list, Data::F(sdda::s7, Data::F(sdda::s8, { var4->Deref(), var5->Deref() }), Data::F(sdda::s7, { var11->Deref(), Data::F(sdda::s7, { var7->Deref(), Const::Nil }) })), var2->Deref(), continuation) }) })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_umember_2::exec_static);
	}

	Operation sdda::pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(sdda::s8, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var8;
		local_aregs[1] = Data::F(sdda::s7, { var4->Deref(), var6->Deref() });
		local_aregs[2] = Data::F(sdda::s_all_shared, { var6->Deref(), var7->Deref(), Data::F(sdda::s_add_to_list, Data::F(sdda::s7, Data::F(sdda::s8, { var4->Deref(), var5->Deref() }), Data::F(sdda::s7, { var6->Deref(), Data::F(sdda::s7, { var7->Deref(), Const::Nil }) })), var2->Deref(), continuation) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$002E$002E_2::exec_static);
	}

	Operation sdda::pred_clause_exit_modes_list_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_clause_exit_modes_list_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_clause_exit_modes_list_6__1(mach));
	}

	Operation sdda::pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__1(Prolog* mach) {
		mach->FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__2(Prolog* mach) {
		mach->FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__3);
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
		if(!((areg3)->Unify(Data::F(sdda::s7, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(sdda::s7, { var4->Deref(), Data::F(sdda::s7, { var6->Deref(), Const::Nil }) });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = Data::F(sdda::s_clause_exit_modes_list, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_eqmember_2::exec_static);
	}

	Operation sdda::pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__3(Prolog* mach) {
		mach->FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(sdda::s7, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(sdda::s7, var7, var8)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6->Deref();
		local_aregs[1] = var7->Deref();
		local_aregs[2] = Data::F(sdda::s_clause_exit_mode, { var1->Deref(), var2->Deref(), Data::F(sdda::s7, Data::F(sdda::s7, { var4->Deref(), Data::F(sdda::s7, { var6->Deref(), Const::Nil }) }), var3->Deref()), var4->Deref(), var7->Deref(), Data::F(sdda::s_clause_exit_modes_list, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var8->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_dup_2::exec_static);
	}

	Operation sdda::pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__4(Prolog* mach) {
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
		if(!((areg3)->Unify(Data::F(sdda::s7, var4, var5)))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = var6->Deref();
		local_aregs[5] = var7->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_clause_exit_modes_list_6::exec_static);
	}

	Operation sdda::pred_clause_exit_mode_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_clause_exit_mode_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_clause_exit_mode_5__1(mach));
	}

	Operation sdda::pred_clause_exit_mode_5::exec_pred_clause_exit_mode_5__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[5];
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
		local_aregs[0] = Data::F(sdda::s12, { var4->Deref(), Data::F(sdda::s10, var6, var7) });
		local_aregs[1] = Data::F(sdda::s4, Data::F(sdda::s12, { var4->Deref(), var6->Deref() }), Data::F(sdda::s12, { var7->Deref(), sdda::s_true }));
		local_aregs[2] = Data::F(sdda::s13, { var6->Deref(), Data::F(sdda::s7, var8, var9), Data::F(sdda::s_unify, { var9->Deref(), var5->Deref(), Data::F(sdda::s_body_exit_mode, { var1->Deref(), var2->Deref(), var3->Deref(), var7->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_or_2::exec_static);
	}

	Operation sdda::pred_body_exit_mode_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_body_exit_mode_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_body_exit_mode_4__1(mach));
	}

	Operation sdda::pred_body_exit_mode_4::exec_pred_body_exit_mode_4__1(Prolog* mach) {
		mach->FillAlternative(pred_body_exit_mode_4::exec_pred_body_exit_mode_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg3)->Unify(Data::F(sdda::s4, var4, var5)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = Data::F(sdda::s_body_exit_mode, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_body_exit_mode_4::exec_static);
	}

	Operation sdda::pred_body_exit_mode_4::exec_pred_body_exit_mode_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
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
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var5;
		local_aregs[2] = var6;
		local_aregs[3] = Data::F(sdda::s13, { var4->Deref(), Data::F(sdda::s7, { var5->Deref(), var7 }), Data::F(sdda::s_proc_exit_mode, { var1->Deref(), var2->Deref(), var3->Deref(), Data::F(sdda::s8, { var5->Deref(), var6->Deref() }), var7->Deref(), var8, Data::F(sdda::s_unify, { var7->Deref(), var8->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_functor_3::exec_static);
	}

	Operation sdda::pred_unify_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_unify_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_unify_2__1(mach));
	}

	Operation sdda::pred_unify_2::exec_pred_unify_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_unify_2::exec_pred_unify_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_unify_2::exec_pred_unify_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_unify_2::exec_pred_unify_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sdda::s_g))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_not, Data::F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation sdda::pred_unify_2::exec_pred_unify_2__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_unify_2::exec_pred_unify_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sdda::s_g))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_not, Data::F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation sdda::pred_unify_2::exec_pred_unify_2__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_unify_2::exec_pred_unify_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sdda::s_unify, { var1->Deref(), var3->Deref(), Data::F(sdda::s_unify, { var2->Deref(), var4->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_unify_2::exec_pred_unify_2__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(sdda::s7, var3, var4);
		local_aregs[2] = Data::F(sdda::s13, { var2->Deref(), Data::F(sdda::s7, { var3->Deref(), var5 }), Data::F(sdda::s_unify, { var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$002E$002E_2::exec_static);
	}

	Operation sdda::pred_equiv_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_equiv_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_equiv_2__1(mach));
	}

	Operation sdda::pred_equiv_2::exec_pred_equiv_2__1(Prolog* mach) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_equiv_3::exec_static);
	}

	Operation sdda::pred_equiv_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_equiv_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_equiv_3__1(mach));
	}

	Operation sdda::pred_equiv_3::exec_pred_equiv_3__1(Prolog* mach) {
		mach->FillAlternative(pred_equiv_3::exec_pred_equiv_3__2);
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation sdda::pred_equiv_3::exec_pred_equiv_3__2(Prolog* mach) {
		mach->FillAlternative(pred_equiv_3::exec_pred_equiv_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sdda::s_g))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_not, Data::F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation sdda::pred_equiv_3::exec_pred_equiv_3__3(Prolog* mach) {
		mach->FillAlternative(pred_equiv_3::exec_pred_equiv_3__4);
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
		if(!((areg1)->Unify(sdda::s_g))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_not, Data::F(sdda::s12, { var1->Deref(), Const::Nil }), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation sdda::pred_equiv_3::exec_pred_equiv_3__4(Prolog* mach) {
		mach->FillAlternative(pred_equiv_3::exec_pred_equiv_3__5);
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_var, { var2->Deref(), Data::F(sdda::s_equiv_vars, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_equiv_3::exec_pred_equiv_3__5(Prolog* mach) {
		mach->FillAlternative(pred_equiv_3::exec_pred_equiv_3__6);
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_var, { var1->Deref(), Data::F(sdda::s_equiv_vars, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_equiv_3::exec_pred_equiv_3__6(Prolog* mach) {
		mach->FillAlternative(pred_equiv_3::exec_pred_equiv_3__7);
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
		if(!((areg0)->Unify(Data::F(sdda::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sdda::s_equiv, { var1->Deref(), var3->Deref(), var5->Deref(), Data::F(sdda::s_equiv, { var2->Deref(), var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_equiv_3::exec_pred_equiv_3__7(Prolog* mach) {
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
		local_aregs[1] = Data::F(sdda::s7, var4, var5);
		local_aregs[2] = Data::F(sdda::s13, { var2->Deref(), Data::F(sdda::s7, { var4->Deref(), var6 }), Data::F(sdda::s_equiv, { var5->Deref(), var6->Deref(), var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$002E$002E_2::exec_static);
	}

	Operation sdda::pred_equiv_vars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_equiv_vars_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_equiv_vars_3__1(mach));
	}

	Operation sdda::pred_equiv_vars_3::exec_pred_equiv_vars_3__1(Prolog* mach) {
		mach->FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__2);
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
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_unify, Data::F(sdda::s7, Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) }), var4), var3->Deref(), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_equiv_vars_3::exec_pred_equiv_vars_3__2(Prolog* mach) {
		mach->FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__3);
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
		if(!((areg2)->Unify(Data::F(sdda::s7, Data::F(sdda::s7, var3, Data::F(sdda::s7, var4, Const::Nil)), var5)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = mach->HC(Data::F(sdda::s_termequal, { var2->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation sdda::pred_equiv_vars_3::exec_pred_equiv_vars_3__3(Prolog* mach) {
		mach->FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__4);
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
		if(!((areg2)->Unify(Data::F(sdda::s7, Data::F(sdda::s7, var3, Data::F(sdda::s7, var4, Const::Nil)), var5)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = mach->HC(Data::F(sdda::s_termequal, { var1->Deref(), var3->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation sdda::pred_equiv_vars_3::exec_pred_equiv_vars_3__4(Prolog* mach) {
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
		if(!((areg2)->Unify(Data::F(sdda::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_equiv_vars_3::exec_static);
	}

	Operation sdda::pred_dup_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_dup_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_dup_2__1(mach));
	}

	Operation sdda::pred_dup_2::exec_pred_dup_2__1(Prolog* mach) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_dup_3::exec_static);
	}

	Operation sdda::pred_dup_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_dup_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_dup_3__1(mach));
	}

	Operation sdda::pred_dup_3::exec_pred_dup_3__1(Prolog* mach) {
		mach->FillAlternative(pred_dup_3::exec_pred_dup_3__2);
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_dup_var, { var1->Deref(), var2->Deref(), var3->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_dup_3::exec_pred_dup_3__2(Prolog* mach) {
		mach->FillAlternative(pred_dup_3::exec_pred_dup_3__3);
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
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation sdda::pred_dup_3::exec_pred_dup_3__3(Prolog* mach) {
		mach->FillAlternative(pred_dup_3::exec_pred_dup_3__4);
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
		if(!((areg0)->Unify(Data::F(sdda::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sdda::s_dup, { var1->Deref(), var3->Deref(), var5->Deref(), Data::F(sdda::s_dup, { var2->Deref(), var4->Deref(), var5->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_dup_3::exec_pred_dup_3__4(Prolog* mach) {
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
		local_aregs[1] = Data::F(sdda::s7, var4, var5);
		local_aregs[2] = Data::F(sdda::s_dup, { var5->Deref(), var6, var3->Deref(), Data::F(sdda::s13, { var2->Deref(), Data::F(sdda::s7, { var4->Deref(), var6->Deref() }), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$002E$002E_2::exec_static);
	}

	Operation sdda::pred_dup_var_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_dup_var_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_dup_var_3__1(mach));
	}

	Operation sdda::pred_dup_var_3::exec_pred_dup_var_3__1(Prolog* mach) {
		mach->FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__2);
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
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_unify, Data::F(sdda::s7, Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) }), var4), var3->Deref(), continuation));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_dup_var_3::exec_pred_dup_var_3__2(Prolog* mach) {
		mach->FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__3);
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
		if(!((areg2)->Unify(Data::F(sdda::s7, Data::F(sdda::s7, var3, Data::F(sdda::s7, { var2->Deref(), Const::Nil })), var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation sdda::pred_dup_var_3::exec_pred_dup_var_3__3(Prolog* mach) {
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
		if(!((areg2)->Unify(Data::F(sdda::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_dup_var_3::exec_static);
	}

	Operation sdda::pred_built_in_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_built_in_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_built_in_3__1(mach));
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__1(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s_true, sdda::posint0)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__2(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s_fail, sdda::posint0)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__3(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s12, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, sdda::s_g, Data::F(sdda::s7, sdda::s_g, Const::Nil))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(sdda::s_atomic, { var1->Deref() });
		local_aregs[1] = Data::F(sdda::s_atomic, { var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_or_2::exec_static);
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__4(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s12, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var1->Deref(), Const::Nil }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__5(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s3, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__6(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s5, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__7(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s2, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__8(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s8, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__9(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s14, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__10(Prolog* mach) {
		mach->FillAlternative(pred_built_in_3::exec_pred_built_in_3__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s11, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Data::F(sdda::s7, { var2->Deref(), Const::Nil }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_built_in_3::exec_pred_built_in_3__11(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s8, sdda::s_is, sdda::posint2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var1, Data::F(sdda::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, sdda::s_g, Data::F(sdda::s7, { var2->Deref(), Const::Nil }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_worst_case_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_worst_case_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_worst_case_2__1(mach));
	}

	Operation sdda::pred_worst_case_2::exec_pred_worst_case_2__1(Prolog* mach) {
		mach->FillAlternative(pred_worst_case_2::exec_pred_worst_case_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_worst_case_2::exec_pred_worst_case_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = Data::F(sdda::s_worst_case, { var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation sdda::pred_look_up_act_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_look_up_act_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_look_up_act_2__1(mach));
	}

	Operation sdda::pred_look_up_act_2::exec_pred_look_up_act_2__1(Prolog* mach) {
		mach->FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__2);
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_fail, { continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_look_up_act_2::exec_pred_look_up_act_2__2(Prolog* mach) {
		mach->FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s7, Data::F(sdda::s8, var1, var2), Data::F(sdda::s7, var3, Data::F(sdda::s7, var4, Const::Nil)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, Data::F(sdda::s7, Data::F(sdda::s8, { var1->Deref(), var2->Deref() }), Data::F(sdda::s7, var5, Data::F(sdda::s7, { var4->Deref(), Const::Nil }))), var6)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var5->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_equiv_2::exec_static);
	}

	Operation sdda::pred_look_up_act_2::exec_pred_look_up_act_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sdda::s7, Data::F(sdda::s8, var1, var2), Data::F(sdda::s7, var3, Data::F(sdda::s7, var4, Const::Nil)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, var5, var6)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(sdda::s7, Data::F(sdda::s8, { var1->Deref(), var2->Deref() }), Data::F(sdda::s7, { var3->Deref(), Data::F(sdda::s7, { var4->Deref(), Const::Nil }) }));
		local_aregs[1] = var6->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_look_up_act_2::exec_static);
	}

	Operation sdda::pred_all_shared_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_all_shared_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_all_shared_2__1(mach));
	}

	Operation sdda::pred_all_shared_2::exec_pred_all_shared_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3;
		local_aregs[2] = var4;
		local_aregs[3] = Data::F(sdda::s_bind_all, var5, var4->Deref(), Data::F(sdda::s_unify, { var1->Deref(), var2->Deref(), var4->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_unify_3::exec_static);
	}

	Operation sdda::pred_bind_all_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_bind_all_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_bind_all_2__1(mach));
	}

	Operation sdda::pred_bind_all_2::exec_pred_bind_all_2__1(Prolog* mach) {
		mach->FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__2);
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_bind_all_2::exec_pred_bind_all_2__2(Prolog* mach) {
		mach->FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__3);
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
		if(!((areg1)->Unify(Data::F(sdda::s7, Data::F(sdda::s7, var2, Data::F(sdda::s7, { var1->Deref(), Const::Nil })), var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(sdda::s_bind_all, { var1->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_bind_all_2::exec_pred_bind_all_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, Data::F(sdda::s7, var2, Data::F(sdda::s7, var3, Const::Nil)), var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_bind_all_2::exec_static);
	}

	Operation sdda::pred_add_to_list_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_add_to_list_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_add_to_list_2__1(mach));
	}

	Operation sdda::pred_add_to_list_2::exec_pred_add_to_list_2__1(Prolog* mach) {
		mach->FillAlternative(pred_add_to_list_2::exec_pred_add_to_list_2__2);
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Data::F(sdda::s_unify, Data::F(sdda::s7, { var1->Deref(), var3 }), var2->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_add_to_list_2::exec_pred_add_to_list_2__2(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_add_to_list_2::exec_static);
	}

	Operation sdda::pred_umember_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_umember_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_umember_2__1(mach));
	}

	Operation sdda::pred_umember_2::exec_pred_umember_2__1(Prolog* mach) {
		mach->FillAlternative(pred_umember_2::exec_pred_umember_2__2);
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_fail, { continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_umember_2::exec_pred_umember_2__2(Prolog* mach) {
		mach->FillAlternative(pred_umember_2::exec_pred_umember_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sdda::s7, { var1->Deref(), var2 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_umember_2::exec_pred_umember_2__3(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_umember_2::exec_static);
	}

	Operation sdda::pred_sumember_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_sumember_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_sumember_2__1(mach));
	}

	Operation sdda::pred_sumember_2::exec_pred_sumember_2__1(Prolog* mach) {
		mach->FillAlternative(pred_sumember_2::exec_pred_sumember_2__2);
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_fail, { continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_sumember_2::exec_pred_sumember_2__2(Prolog* mach) {
		mach->FillAlternative(pred_sumember_2::exec_pred_sumember_2__3);
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation sdda::pred_sumember_2::exec_pred_sumember_2__3(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_sumember_2::exec_static);
	}

	Operation sdda::pred_member_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_member_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_member_2__1(mach));
	}

	Operation sdda::pred_member_2::exec_pred_member_2__1(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(sdda::s7, { var1->Deref(), var2 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_member_2::exec_pred_member_2__2(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_member_2::exec_static);
	}

	Operation sdda::pred_smember_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_smember_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_smember_2__1(mach));
	}

	Operation sdda::pred_smember_2::exec_pred_smember_2__1(Prolog* mach) {
		mach->FillAlternative(pred_smember_2::exec_pred_smember_2__2);
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation sdda::pred_smember_2::exec_pred_smember_2__2(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_smember_2::exec_static);
	}

	Operation sdda::pred_eqmember_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_eqmember_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_eqmember_2__1(mach));
	}

	Operation sdda::pred_eqmember_2::exec_pred_eqmember_2__1(Prolog* mach) {
		mach->FillAlternative(pred_eqmember_2::exec_pred_eqmember_2__2);
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_equiv_2::exec_static);
	}

	Operation sdda::pred_eqmember_2::exec_pred_eqmember_2__2(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(sdda::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_eqmember_2::exec_static);
	}

	Operation sdda::pred_concat_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_concat_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_concat_3__1(mach));
	}

	Operation sdda::pred_concat_3::exec_pred_concat_3__1(Prolog* mach) {
		mach->FillAlternative(pred_concat_3::exec_pred_concat_3__2);
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

	Operation sdda::pred_concat_3::exec_pred_concat_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(sdda::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_concat_3::exec_static);
	}

	Operation sdda::pred_nl_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_nl_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_nl_0__1(mach));
	}

	Operation sdda::pred_nl_0::exec_pred_nl_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return Prolog::Call1;
	}

	Operation sdda::pred_write_list2_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_write_list2_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_write_list2_3__1(mach));
	}

	Operation sdda::pred_write_list2_3::exec_pred_write_list2_3__1(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(sdda::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var5;
		local_aregs[3] = Data::F(sdda::s_write, { var1->Deref(), Data::F(sdda::s_or, Data::F(sdda::s6, Data::F(sdda::s_nonvar, { var2->Deref() }), Data::F(sdda::s4, Data::F(sdda::s_write, sdda::s4), Data::F(sdda::s4, sdda::s_nl, Data::F(sdda::s4, Data::F(sdda::s_write, sdda::s1), Data::F(sdda::s_write_list2, { var2->Deref(), var5->Deref(), var4->Deref() }))))), Data::F(sdda::s12, { var4->Deref(), var5->Deref() }), continuation) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_name_vars_3::exec_static);
	}

	Operation sdda::pred_name_vars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_name_vars_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_name_vars_3__1(mach));
	}

	Operation sdda::pred_name_vars_3::exec_pred_name_vars_3__1(Prolog* mach) {
		mach->FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__2);
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(sdda::s_make_name, { var2->Deref(), var1->Deref(), Data::F(sdda::s_is, { var3->Deref(), Data::F(sdda::s3, { var2->Deref(), sdda::posint1 }), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation sdda::pred_name_vars_3::exec_pred_name_vars_3__2(Prolog* mach) {
		mach->FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__3);
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
		if(!((areg2)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atom_1::exec_static);
	}

	Operation sdda::pred_name_vars_3::exec_pred_name_vars_3__3(Prolog* mach) {
		mach->FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__4);
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
		if(!((areg0)->Unify(Data::F(sdda::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sdda::s_name_vars, { var1->Deref(), var3->Deref(), var5, Data::F(sdda::s_name_vars, { var2->Deref(), var5->Deref(), var4->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_name_vars_3::exec_pred_name_vars_3__4(Prolog* mach) {
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
		local_aregs[1] = Data::F(sdda::s7, var4, var5);
		local_aregs[2] = Data::F(sdda::s_name_vars, { var5->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$002E$002E_2::exec_static);
	}

	Operation sdda::pred_make_name_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_make_name_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_make_name_2__1(mach));
	}

	Operation sdda::pred_make_name_2::exec_pred_make_name_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(sdda::s9, { var1->Deref(), sdda::posint26 });
		local_aregs[2] = Data::F(sdda::s_is, var4, Data::F(sdda::s3, Data::F(sdda::s_mod, { var1->Deref(), sdda::posint26 }), Const::Intern("A")), Data::F(sdda::s_build_name, { var3->Deref(), var4->Deref(), var5, Data::F(sdda::s_name, { var2->Deref(), var5->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation sdda::pred_build_name_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sdda::pred_build_name_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_build_name_3__1(mach));
	}

	Operation sdda::pred_build_name_3::exec_pred_build_name_3__1(Prolog* mach) {
		mach->FillAlternative(pred_build_name_3::exec_pred_build_name_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sdda::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sdda::s7, { var1->Deref(), Const::Nil })))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sdda::pred_build_name_3::exec_pred_build_name_3__2(Prolog* mach) {
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
		if(!((areg2)->Unify(Data::F(sdda::s7, { var2->Deref(), var3 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = sdda::posint0;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(sdda::s_is, var4, Data::F(sdda::s5, { var1->Deref(), sdda::posint1 }), Data::F(sdda::s_build_name, { var4->Deref(), var2->Deref(), var3->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}
}
