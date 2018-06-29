using namespace std;

#include "reducer.h"
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
Const* const  reducer::s_cut = Data::Intern("cut");
Const* const  reducer::s1 = Data::Intern("*");
Const* const  reducer::s2 = Data::Intern("+");
Const* const  reducer::s3 = Data::Intern(",");
Const* const  reducer::s4 = Data::Intern("-");
Const* const  reducer::s5 = Data::Intern("-->");
Const* const  reducer::s6 = Data::Intern("->");
Const* const  reducer::s7 = Data::Intern(".");
Const* const  reducer::s8 = Data::Intern("//");
Const* const  reducer::s9 = Data::Intern(":-");
Const* const  reducer::s10 = Data::Intern("<");
Const* const  reducer::s11 = Data::Intern("=");
Const* const  reducer::s12 = Data::Intern("=:=");
Const* const  reducer::s13 = Data::Intern("=<");
Const* const  reducer::s14 = Data::Intern("=\\=");
Const* const  reducer::s15 = Data::Intern(">");
Const* const  reducer::s16 = Data::Intern(">=");
Const* const  reducer::s17 = Data::Intern("\\==");
Const* const  reducer::s_append = Data::Intern("append");
Const* const  reducer::s_apply = Data::Intern("apply");
Const* const  reducer::s_arg = Data::Intern("arg");
Const* const  reducer::s_arithequal = Data::Intern("arithequal");
Const* const  reducer::s_atom = Data::Intern("atom");
Const* const  reducer::s_atomic = Data::Intern("atomic");
Const* const  reducer::s_b = Data::Intern("b");
Const* const  reducer::s_bp = Data::Intern("bp");
Const* const  reducer::s_c = Data::Intern("c");
Const* const  reducer::s_call = Data::Intern("call");
Const* const  reducer::s_compare = Data::Intern("compare");
Const* const  reducer::s_cond = Data::Intern("cond");
Const* const  reducer::s_cp = Data::Intern("cp");
Const* const  reducer::s_curry = Data::Intern("curry");
Const* const  reducer::s_currylist = Data::Intern("currylist");
Const* const  reducer::s_diffv = Data::Intern("diffv");
Const* const  reducer::s_diffv_2 = Data::Intern("diffv_2");
Const* const  reducer::s_diffv_3 = Data::Intern("diffv_3");
Const* const  reducer::s_end = Data::Intern("end");
Const* const  reducer::s_eval = Data::Intern("eval");
Const* const  reducer::s_eval1 = Data::Intern("eval1");
Const* const  reducer::s_fac = Data::Intern("fac");
Const* const  reducer::s_false = Data::Intern("false");
Const* const  reducer::s_functor = Data::Intern("functor");
Const* const  reducer::s_hd = Data::Intern("hd");
Const* const  reducer::s_i = Data::Intern("i");
Const* const  reducer::s_inserthead = Data::Intern("inserthead");
Const* const  reducer::s_inserttail = Data::Intern("inserttail");
Const* const  reducer::s_intersectv = Data::Intern("intersectv");
Const* const  reducer::s_intersectv_2 = Data::Intern("intersectv_2");
Const* const  reducer::s_intersectv_3 = Data::Intern("intersectv_3");
Const* const  reducer::s_intersectv_list = Data::Intern("intersectv_list");
Const* const  reducer::s_inv = Data::Intern("inv");
Const* const  reducer::s_inv_2 = Data::Intern("inv_2");
Const* const  reducer::s_is = Data::Intern("is");
Const* const  reducer::s_k = Data::Intern("k");
Const* const  reducer::s_list_functor_name = Data::Intern("list_functor_name");
Const* const  reducer::s_listify = Data::Intern("listify");
Const* const  reducer::s_listify_list = Data::Intern("listify_list");
Const* const  reducer::s_make_list = Data::Intern("make_list");
Const* const  reducer::s_member = Data::Intern("member");
Const* const  reducer::s_mod = Data::Intern("mod");
Const* const  reducer::s_notinv = Data::Intern("notinv");
Const* const  reducer::s_notinv_2 = Data::Intern("notinv_2");
Const* const  reducer::s_notinv_3 = Data::Intern("notinv_3");
Const* const  reducer::s_number = Data::Intern("number");
Const* const  reducer::s_or = Data::Intern("or");
Const* const  reducer::s_quick = Data::Intern("quick");
Const* const  reducer::s_quick2 = Data::Intern("quick2");
Const* const  reducer::s_relop = Data::Intern("relop");
Const* const  reducer::s_s = Data::Intern("s");
Const* const  reducer::s_small_subsetv = Data::Intern("small_subsetv");
Const* const  reducer::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  reducer::s_smallerthan = Data::Intern("smallerthan");
Const* const  reducer::s_sp = Data::Intern("sp");
Const* const  reducer::s_split = Data::Intern("split");
Const* const  reducer::s_subsetv = Data::Intern("subsetv");
Const* const  reducer::s_subsetv_2 = Data::Intern("subsetv_2");
Const* const  reducer::s_t = Data::Intern("t");
Const* const  reducer::s_t_append = Data::Intern("t_append");
Const* const  reducer::s_t_argvars = Data::Intern("t_argvars");
Const* const  reducer::s_t_def = Data::Intern("t_def");
Const* const  reducer::s_t_redex = Data::Intern("t_redex");
Const* const  reducer::s_t_reduce = Data::Intern("t_reduce");
Const* const  reducer::s_t_rule1 = Data::Intern("t_rule1");
Const* const  reducer::s_t_rule2 = Data::Intern("t_rule2");
Const* const  reducer::s_t_trans = Data::Intern("t_trans");
Const* const  reducer::s_t_vars = Data::Intern("t_vars");
Const* const  reducer::s_termequal = Data::Intern("termequal");
Const* const  reducer::s_tl = Data::Intern("tl");
Const* const  reducer::s_top = Data::Intern("top");
Const* const  reducer::s_true = Data::Intern("true");
Const* const  reducer::s_try = Data::Intern("try");
Const* const  reducer::s_unify = Data::Intern("unify");
Const* const  reducer::s_unionv = Data::Intern("unionv");
Const* const  reducer::s_unionv_2 = Data::Intern("unionv_2");
Const* const  reducer::s_unionv_3 = Data::Intern("unionv_3");
Const* const  reducer::s_var = Data::Intern("var");
Int* const  reducer::posint0 = Data::Number(0LL);
Int* const  reducer::posint1 = Data::Number(1LL);
Int* const  reducer::posint2 = Data::Number(2LL);
Int* const  reducer::posint3 = Data::Number(3LL);
const Operation reducer::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation reducer::reg_try_2 = PredTable::Register("try", 2, new pred_try_2());
const Operation reducer::reg_end_1 = PredTable::Register("end", 1, new pred_end_1());
const Operation reducer::reg_list_functor_name_1 = PredTable::Register("list_functor_name", 1, new pred_list_functor_name_1());
const Operation reducer::reg_t_def_3 = PredTable::Register("t_def", 3, new pred_t_def_3());
const Operation reducer::reg_t_reduce_2 = PredTable::Register("t_reduce", 2, new pred_t_reduce_2());
const Operation reducer::reg_t_append_4 = PredTable::Register("t_append", 4, new pred_t_append_4());
const Operation reducer::reg_t_redex_2 = PredTable::Register("t_redex", 2, new pred_t_redex_2());
const Operation reducer::reg_eval_4 = PredTable::Register("eval", 4, new pred_eval_4());
const Operation reducer::reg_eval1_3 = PredTable::Register("eval1", 3, new pred_eval1_3());
const Operation reducer::reg_relop_3 = PredTable::Register("relop", 3, new pred_relop_3());
const Operation reducer::reg_t_3 = PredTable::Register("t", 3, new pred_t_3());
const Operation reducer::reg_t_argvars_3 = PredTable::Register("t_argvars", 3, new pred_t_argvars_3());
const Operation reducer::reg_curry_2 = PredTable::Register("curry", 2, new pred_curry_2());
const Operation reducer::reg_currylist_3 = PredTable::Register("currylist", 3, new pred_currylist_3());
const Operation reducer::reg_t_vars_2 = PredTable::Register("t_vars", 2, new pred_t_vars_2());
const Operation reducer::reg_t_trans_4 = PredTable::Register("t_trans", 4, new pred_t_trans_4());
const Operation reducer::reg_t_rule1_8 = PredTable::Register("t_rule1", 8, new pred_t_rule1_8());
const Operation reducer::reg_t_rule2_9 = PredTable::Register("t_rule2", 9, new pred_t_rule2_9());
const Operation reducer::reg_make_list_2 = PredTable::Register("make_list", 2, new pred_make_list_2());
const Operation reducer::reg_listify_2 = PredTable::Register("listify", 2, new pred_listify_2());
const Operation reducer::reg_listify_list_4 = PredTable::Register("listify_list", 4, new pred_listify_list_4());
const Operation reducer::reg_member_2 = PredTable::Register("member", 2, new pred_member_2());
const Operation reducer::reg_append_3 = PredTable::Register("append", 3, new SxxMachine::sxx_library::pred_append_3());
const Operation reducer::reg_intersectv_3 = PredTable::Register("intersectv", 3, new pred_intersectv_3());
const Operation reducer::reg_intersectv_2_4 = PredTable::Register("intersectv_2", 4, new pred_intersectv_2_4());
const Operation reducer::reg_intersectv_3_6 = PredTable::Register("intersectv_3", 6, new pred_intersectv_3_6());
const Operation reducer::reg_intersectv_list_2 = PredTable::Register("intersectv_list", 2, new pred_intersectv_list_2());
const Operation reducer::reg_$002D$002D$003E_2 = PredTable::Register("-->", 2, new SxxMachine::Builtins::pred_$002D$002D$003E_2());
const Operation reducer::reg_diffv_3 = PredTable::Register("diffv", 3, new pred_diffv_3());
const Operation reducer::reg_diffv_2_4 = PredTable::Register("diffv_2", 4, new pred_diffv_2_4());
const Operation reducer::reg_diffv_3_6 = PredTable::Register("diffv_3", 6, new pred_diffv_3_6());
const Operation reducer::reg_unionv_3 = PredTable::Register("unionv", 3, new pred_unionv_3());
const Operation reducer::reg_unionv_2_4 = PredTable::Register("unionv_2", 4, new pred_unionv_2_4());
const Operation reducer::reg_unionv_3_6 = PredTable::Register("unionv_3", 6, new pred_unionv_3_6());
const Operation reducer::reg_subsetv_2 = PredTable::Register("subsetv", 2, new pred_subsetv_2());
const Operation reducer::reg_subsetv_2_4 = PredTable::Register("subsetv_2", 4, new pred_subsetv_2_4());
const Operation reducer::reg_small_subsetv_2 = PredTable::Register("small_subsetv", 2, new pred_small_subsetv_2());
const Operation reducer::reg_inv_2 = PredTable::Register("inv", 2, new pred_inv_2());
const Operation reducer::reg_inv_2_3 = PredTable::Register("inv_2", 3, new pred_inv_2_3());
const Operation reducer::reg_notinv_2 = PredTable::Register("notinv", 2, new pred_notinv_2());
const Operation reducer::reg_notinv_2_2 = PredTable::Register("notinv_2", 2, new pred_notinv_2_2());
const Operation reducer::reg_notinv_3_3 = PredTable::Register("notinv_3", 3, new pred_notinv_3_3());

	Operation reducer::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation reducer::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		local_aregs[0] = Data::F(reducer::s_fac, reducer::posint3);
		local_aregs[1] = var1;
		local_aregs[2] = Data::F(reducer::s_try, Data::F(reducer::s_quick, Data::F(reducer::s7, reducer::posint3, Data::F(reducer::s7, reducer::posint1, Data::F(reducer::s7, reducer::posint2, Const::Nil)))), var2, continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_try_2::exec_static);
	}

	Operation reducer::pred_try_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_try_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_try_2__1(mach));
	}

	Operation reducer::pred_try_2::exec_pred_try_2__1(Prolog* mach) {
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
		local_aregs[2] = Data::F(reducer::s_curry, { var3->Deref(), var4, Data::F(reducer::s_t_reduce, { var4->Deref(), var5, Data::F(reducer::s_make_list, { var5->Deref(), var2->Deref(), continuation }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_listify_2::exec_static);
	}

	Operation reducer::pred_end_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_end_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_end_1__1(mach));
	}

	Operation reducer::pred_end_1::exec_pred_end_1__1(Prolog* mach) {
		mach->FillAlternative(pred_end_1::exec_pred_end_1__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atom_1::exec_static);
	}

	Operation reducer::pred_end_1::exec_pred_end_1__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Const::Nil;
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation reducer::pred_list_functor_name_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_list_functor_name_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_list_functor_name_1__1(mach));
	}

	Operation reducer::pred_list_functor_name_1::exec_pred_list_functor_name_1__1(Prolog* mach) {
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
		local_aregs[0] = Data::F(reducer::s7, var2, var3);
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var4;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_functor_3::exec_static);
	}

	Operation reducer::pred_t_def_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_def_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_def_3__1(mach));
	}

	Operation reducer::pred_t_def_3::exec_pred_t_def_3__1(Prolog* mach) {
		mach->FillAlternative(pred_t_def_3::exec_pred_t_def_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_fac))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var1, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s_cond, Data::F(reducer::s11, { var1->Deref(), reducer::posint0 }), reducer::posint1, Data::F(reducer::s1, { var1->Deref(), Data::F(reducer::s_fac, Data::F(reducer::s4, { var1->Deref(), reducer::posint1 })) }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_def_3::exec_pred_t_def_3__2(Prolog* mach) {
		mach->FillAlternative(pred_t_def_3::exec_pred_t_def_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_quick))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var1, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s_cond, Data::F(reducer::s11, { var1->Deref(), Const::Nil }), Const::Nil, Data::F(reducer::s_cond, Data::F(reducer::s11, Data::F(reducer::s_tl, { var1->Deref() }), Const::Nil), var1->Deref(), Data::F(reducer::s_quick2, Data::F(reducer::s_split, Data::F(reducer::s_hd, { var1->Deref() }), Data::F(reducer::s_tl, { var1->Deref() })))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_def_3::exec_pred_t_def_3__3(Prolog* mach) {
		mach->FillAlternative(pred_t_def_3::exec_pred_t_def_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_quick2))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var1, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s_append, Data::F(reducer::s_quick, Data::F(reducer::s_hd, { var1->Deref() })), Data::F(reducer::s_quick, Data::F(reducer::s_tl, { var1->Deref() })))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_def_3::exec_pred_t_def_3__4(Prolog* mach) {
		mach->FillAlternative(pred_t_def_3::exec_pred_t_def_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_split))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s_cond, Data::F(reducer::s11, { var2->Deref(), Const::Nil }), Data::F(reducer::s7, Data::F(reducer::s7, { var1->Deref(), Const::Nil }), Const::Nil), Data::F(reducer::s_cond, Data::F(reducer::s13, Data::F(reducer::s_hd, { var2->Deref() }), var1->Deref()), Data::F(reducer::s_inserthead, Data::F(reducer::s_hd, { var2->Deref() }), Data::F(reducer::s_split, { var1->Deref(), Data::F(reducer::s_tl, { var2->Deref() }) })), Data::F(reducer::s_inserttail, Data::F(reducer::s_hd, { var2->Deref() }), Data::F(reducer::s_split, { var1->Deref(), Data::F(reducer::s_tl, { var2->Deref() }) }))))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_def_3::exec_pred_t_def_3__5(Prolog* mach) {
		mach->FillAlternative(pred_t_def_3::exec_pred_t_def_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_inserthead))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s7, Data::F(reducer::s7, { var1->Deref(), Data::F(reducer::s_hd, { var2->Deref() }) }), Data::F(reducer::s_tl, { var2->Deref() }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_def_3::exec_pred_t_def_3__6(Prolog* mach) {
		mach->FillAlternative(pred_t_def_3::exec_pred_t_def_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_inserttail))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s7, Data::F(reducer::s_hd, { var2->Deref() }), Data::F(reducer::s7, { var1->Deref(), Data::F(reducer::s_tl, { var2->Deref() }) }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_def_3::exec_pred_t_def_3__7(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_append))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s_cond, Data::F(reducer::s11, { var1->Deref(), Const::Nil }), var2->Deref(), Data::F(reducer::s7, Data::F(reducer::s_hd, { var1->Deref() }), Data::F(reducer::s_append, Data::F(reducer::s_tl, { var1->Deref() }), var2->Deref())))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_reduce_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_reduce_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_reduce_2__1(mach));
	}

	Operation reducer::pred_t_reduce_2::exec_pred_t_reduce_2__1(Prolog* mach) {
		mach->FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__2);
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(Data::F(reducer::s_unify, { var1->Deref(), var2->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation reducer::pred_t_reduce_2::exec_pred_t_reduce_2__2(Prolog* mach) {
		mach->FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var4, Data::F(reducer::s7, var5, var3->Deref()))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(reducer::s_t_reduce, { var2->Deref(), var5->Deref(), mach->HC(Data::F(reducer::s_t_reduce, { var1->Deref(), var4->Deref(), mach->HC(continuation) })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_list_functor_name_1::exec_static);
	}

	Operation reducer::pred_t_reduce_2::exec_pred_t_reduce_2__3(Prolog* mach) {
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
		local_aregs[1] = var4;
		local_aregs[2] = var5;
		local_aregs[3] = var1->Deref();
		local_aregs[4] = Data::F(reducer::s_t_redex, { var5->Deref(), var4->Deref(), mach->HC(Data::F(reducer::s_t_reduce, { var3->Deref(), var2->Deref(), mach->HC(continuation) })) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_append_4::exec_static);
	}

	Operation reducer::pred_t_append_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_append_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_append_4__1(mach));
	}

	Operation reducer::pred_t_append_4::exec_pred_t_append_4__1(Prolog* mach) {
		mach->FillAlternative(pred_t_append_4::exec_pred_t_append_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_append_4::exec_pred_t_append_4__2(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(reducer::s7, { var1->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_append_4::exec_static);
	}

	Operation reducer::pred_t_redex_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_redex_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_redex_2__1(mach));
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__1(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, Data::F(reducer::s7, var4, reducer::s_sp))))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, Data::F(reducer::s7, var5, var2->Deref()), Data::F(reducer::s7, Data::F(reducer::s7, { var5->Deref(), var3->Deref() }), var4->Deref()))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var5->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_reduce_2::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__2(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, Data::F(reducer::s7, var4, reducer::s_bp))))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, Data::F(reducer::s7, { var1->Deref(), var2->Deref() }), Data::F(reducer::s7, { var3->Deref(), var4->Deref() }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__3(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, Data::F(reducer::s7, var4, reducer::s_cp))))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, { var2->Deref(), Data::F(reducer::s7, Data::F(reducer::s7, { var1->Deref(), var3->Deref() }), var4->Deref()) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__4(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, reducer::s_s)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, Data::F(reducer::s7, var4, var2->Deref()), Data::F(reducer::s7, { var4->Deref(), var3->Deref() }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_reduce_2::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__5(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, reducer::s_b)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, Data::F(reducer::s7, { var1->Deref(), var2->Deref() }), var3->Deref())))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__6(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, reducer::s_c)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, { var2->Deref(), Data::F(reducer::s7, { var1->Deref(), var3->Deref() }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__7(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, reducer::s_k))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__8(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, reducer::s_i)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__9(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, reducer::s_cond)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var4;
		local_aregs[2] = Data::F(reducer::s_unify, reducer::s_true, var4->Deref(), mach->HC(continuation));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_reduce_2::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__10(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, reducer::s_cond)))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__11(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, reducer::s_apply)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_reduce_2::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__12(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, reducer::s_hd)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(reducer::s_t_reduce, { var1->Deref(), Data::F(reducer::s7, var4, Data::F(reducer::s7, { var2->Deref(), var3->Deref() })), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_list_functor_name_1::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__13(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, reducer::s_tl)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(reducer::s_t_reduce, { var1->Deref(), Data::F(reducer::s7, { var2->Deref(), Data::F(reducer::s7, var4, var3->Deref()) }), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_list_functor_name_1::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__14(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__15);
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(reducer::s_member, { var3->Deref(), Data::F(reducer::s7, reducer::s2, Data::F(reducer::s7, reducer::s4, Data::F(reducer::s7, reducer::s1, Data::F(reducer::s7, reducer::s8, Data::F(reducer::s7, reducer::s_mod, Const::Nil))))), Data::F(reducer::s_t_reduce, { var2->Deref(), var5, Data::F(reducer::s_t_reduce, { var1->Deref(), var6, Data::F(reducer::s_number, { var5->Deref(), Data::F(reducer::s_number, { var6->Deref(), Data::F(reducer::s_eval, { var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation }) }) }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_end_1::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__15(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__16);
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(reducer::s_member, { var3->Deref(), Data::F(reducer::s7, reducer::s10, Data::F(reducer::s7, reducer::s15, Data::F(reducer::s7, reducer::s13, Data::F(reducer::s7, reducer::s16, Data::F(reducer::s7, reducer::s14, Data::F(reducer::s7, reducer::s12, Const::Nil)))))), Data::F(reducer::s_t_reduce, { var2->Deref(), var5, Data::F(reducer::s_t_reduce, { var1->Deref(), var6, Data::F(reducer::s_number, { var5->Deref(), Data::F(reducer::s_number, { var6->Deref(), Data::F(reducer::s_or, Data::F(reducer::s6, Data::F(reducer::s_relop, { var3->Deref(), var5->Deref(), var6->Deref() }), Data::F(reducer::s11, { var4->Deref(), reducer::s_true })), Data::F(reducer::s11, { var4->Deref(), reducer::s_false }), mach->HC(continuation)) }) }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_end_1::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__16(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, reducer::s11))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4;
		local_aregs[2] = Data::F(reducer::s_t_reduce, { var1->Deref(), var5, Data::F(reducer::s_or, Data::F(reducer::s6, Data::F(reducer::s11, { var4->Deref(), var5->Deref() }), Data::F(reducer::s11, { var3->Deref(), reducer::s_true })), Data::F(reducer::s11, { var3->Deref(), reducer::s_false }), mach->HC(continuation)) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_reduce_2::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__17(Prolog* mach) {
		mach->FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Data::F(reducer::s_member, { var2->Deref(), Data::F(reducer::s7, reducer::s4, Const::Nil), Data::F(reducer::s_t_reduce, { var1->Deref(), var4, Data::F(reducer::s_number, { var4->Deref(), Data::F(reducer::s_eval1, { var2->Deref(), var5, var4->Deref(), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_end_1::exec_static);
	}

	Operation reducer::pred_t_redex_2::exec_pred_t_redex_2__18(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = var3;
		local_aregs[1] = var4;
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(reducer::s_end, { var4->Deref(), Data::F(reducer::s_t_def, { var4->Deref(), var5, var6, Data::F(reducer::s_t, { var5->Deref(), var6->Deref(), var7, Data::F(reducer::s_append, { var3->Deref(), var7->Deref(), var2->Deref(), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_append_3::exec_static);
	}

	Operation reducer::pred_eval_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_eval_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_eval_4__1(mach));
	}

	Operation reducer::pred_eval_4::exec_pred_eval_4__1(Prolog* mach) {
		mach->FillAlternative(pred_eval_4::exec_pred_eval_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s2))) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(reducer::s2, { var2->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation reducer::pred_eval_4::exec_pred_eval_4__2(Prolog* mach) {
		mach->FillAlternative(pred_eval_4::exec_pred_eval_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s4))) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(reducer::s4, { var2->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation reducer::pred_eval_4::exec_pred_eval_4__3(Prolog* mach) {
		mach->FillAlternative(pred_eval_4::exec_pred_eval_4__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s1))) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(reducer::s1, { var2->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation reducer::pred_eval_4::exec_pred_eval_4__4(Prolog* mach) {
		mach->FillAlternative(pred_eval_4::exec_pred_eval_4__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s8))) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(reducer::s8, { var2->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation reducer::pred_eval_4::exec_pred_eval_4__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s_mod))) {
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(reducer::s_mod, { var2->Deref(), var3->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation reducer::pred_eval1_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_eval1_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_eval1_3__1(mach));
	}

	Operation reducer::pred_eval1_3::exec_pred_eval1_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s4))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(reducer::s4, { var2->Deref() });
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation reducer::pred_relop_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_relop_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_relop_3__1(mach));
	}

	Operation reducer::pred_relop_3::exec_pred_relop_3__1(Prolog* mach) {
		mach->FillAlternative(pred_relop_3::exec_pred_relop_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s10))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation reducer::pred_relop_3::exec_pred_relop_3__2(Prolog* mach) {
		mach->FillAlternative(pred_relop_3::exec_pred_relop_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s15))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation reducer::pred_relop_3::exec_pred_relop_3__3(Prolog* mach) {
		mach->FillAlternative(pred_relop_3::exec_pred_relop_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s13))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation reducer::pred_relop_3::exec_pred_relop_3__4(Prolog* mach) {
		mach->FillAlternative(pred_relop_3::exec_pred_relop_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s16))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation reducer::pred_relop_3::exec_pred_relop_3__5(Prolog* mach) {
		mach->FillAlternative(pred_relop_3::exec_pred_relop_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s14))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_$003D$005C$003D_2::exec_static);
	}

	Operation reducer::pred_relop_3::exec_pred_relop_3__6(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s12))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_arithequal_2::exec_static);
	}

	Operation reducer::pred_t_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_3__1(mach));
	}

	Operation reducer::pred_t_3::exec_pred_t_3__1(Prolog* mach) {
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
		local_aregs[1] = var4;
		local_aregs[2] = Data::F(reducer::s_curry, { var4->Deref(), var5, Data::F(reducer::s_t_argvars, { var1->Deref(), var5->Deref(), var3->Deref(), mach->HC(continuation) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_listify_2::exec_static);
	}

	Operation reducer::pred_t_argvars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_argvars_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_argvars_3__1(mach));
	}

	Operation reducer::pred_t_argvars_3::exec_pred_t_argvars_3__1(Prolog* mach) {
		mach->FillAlternative(pred_t_argvars_3::exec_pred_t_argvars_3__2);
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

	Operation reducer::pred_t_argvars_3::exec_pred_t_argvars_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var5;
		local_aregs[3] = Data::F(reducer::s_t_vars, { var5->Deref(), var6, Data::F(reducer::s_t_trans, { var1->Deref(), var5->Deref(), var6->Deref(), var4->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_argvars_3::exec_static);
	}

	Operation reducer::pred_curry_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_curry_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_curry_2__1(mach));
	}

	Operation reducer::pred_curry_2::exec_pred_curry_2__1(Prolog* mach) {
		mach->FillAlternative(pred_curry_2::exec_pred_curry_2__2);
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
		local_aregs[0] = Data::F(reducer::s_var, { var1->Deref() });
		local_aregs[1] = Data::F(reducer::s_atomic, { var1->Deref() });
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_or_2::exec_static);
	}

	Operation reducer::pred_curry_2::exec_pred_curry_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var1->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_currylist_3::exec_static);
	}

	Operation reducer::pred_currylist_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_currylist_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_currylist_3__1(mach));
	}

	Operation reducer::pred_currylist_3::exec_pred_currylist_3__1(Prolog* mach) {
		mach->FillAlternative(pred_currylist_3::exec_pred_currylist_3__2);
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

	Operation reducer::pred_currylist_3::exec_pred_currylist_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var5;
		local_aregs[2] = Data::F(reducer::s_currylist, { var2->Deref(), var3->Deref(), Data::F(reducer::s7, { var5->Deref(), var4->Deref() }), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_curry_2::exec_static);
	}

	Operation reducer::pred_t_vars_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_vars_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_vars_2__1(mach));
	}

	Operation reducer::pred_t_vars_2::exec_pred_t_vars_2__1(Prolog* mach) {
		mach->FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, Data::F(reducer::s7, { var1->Deref(), Const::Nil }), Const::Nil)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation reducer::pred_t_vars_2::exec_pred_t_vars_2__2(Prolog* mach) {
		mach->FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, { Const::Nil, Const::Nil })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation reducer::pred_t_vars_2::exec_pred_t_vars_2__3(Prolog* mach) {
		mach->FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, { Const::Nil, Const::Nil })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation reducer::pred_t_vars_2::exec_pred_t_vars_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var7 = Data::V(mach);
		Var* var6 = Data::V(mach);
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var3, Data::F(reducer::s7, Data::F(reducer::s7, var4, var5), Data::F(reducer::s7, Data::F(reducer::s7, var6, var7), Const::Nil)))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = Data::F(reducer::s7, { var4->Deref(), var5->Deref() });
		local_aregs[2] = Data::F(reducer::s_t_vars, { var2->Deref(), Data::F(reducer::s7, { var6->Deref(), var7->Deref() }), Data::F(reducer::s_unionv, { var4->Deref(), var6->Deref(), var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_t_vars_2::exec_static);
	}

	Operation reducer::pred_t_trans_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_trans_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_trans_4__1(mach));
	}

	Operation reducer::pred_t_trans_4::exec_pred_t_trans_4__1(Prolog* mach) {
		mach->FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg3)->Unify(Data::F(reducer::s7, { var2->Deref(), reducer::s_k })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(reducer::s_atomic, { var2->Deref() });
		local_aregs[1] = Data::F(reducer::s3, Data::F(reducer::s_var, { var2->Deref() }), Data::F(reducer::s17, { var2->Deref(), var1->Deref() }));
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_or_2::exec_static);
	}

	Operation reducer::pred_t_trans_4::exec_pred_t_trans_4__2(Prolog* mach) {
		mach->FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg3)->Unify(reducer::s_i))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation reducer::pred_t_trans_4::exec_pred_t_trans_4__3(Prolog* mach) {
		mach->FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__4);
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
		if(!((areg2)->Unify(Data::F(reducer::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(reducer::s7, { var2->Deref(), reducer::s_k })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_notinv_2::exec_static);
	}

	Operation reducer::pred_t_trans_4::exec_pred_t_trans_4__4(Prolog* mach) {
		mach->FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s7, var4, Data::F(reducer::s7, var5, Data::F(reducer::s7, var6, Const::Nil)))))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(reducer::s7, var8, var9);
		local_aregs[1] = var5->Deref();
		local_aregs[2] = Data::F(reducer::s_unify, Data::F(reducer::s7, var10, var11), var6->Deref(), Data::F(reducer::s_or, Data::F(reducer::s_end, { var3->Deref() }), Data::F(reducer::s3, Data::F(reducer::s11, { var11->Deref(), Data::F(reducer::s7, var12, Data::F(reducer::s7, Data::F(reducer::s7, var13, var14), Const::Nil)) }), Data::F(reducer::s17, { var13->Deref(), Const::Nil })), Data::F(reducer::s_t_rule1, { var1->Deref(), var3->Deref(), var10->Deref(), var6->Deref(), var2->Deref(), var8->Deref(), var5->Deref(), var7->Deref(), continuation })));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation reducer::pred_t_trans_4::exec_pred_t_trans_4__5(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var2, Data::F(reducer::s7, var3, var4))))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s7, var5, Data::F(reducer::s7, var6, Data::F(reducer::s7, var7, Const::Nil)))))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(reducer::s7, var9, var10);
		local_aregs[1] = var6->Deref();
		local_aregs[2] = Data::F(reducer::s_unify, Data::F(reducer::s7, var11, Data::F(reducer::s7, var12, Data::F(reducer::s7, var13, Const::Nil))), var7->Deref(), Data::F(reducer::s_unify, Data::F(reducer::s7, var14, var15), var13->Deref(), Data::F(reducer::s_unify, Data::F(reducer::s7, var16, var17), var12->Deref(), Data::F(reducer::s_t_rule2, { var1->Deref(), var4->Deref(), var3->Deref(), var16->Deref(), var12->Deref(), var2->Deref(), var9->Deref(), var6->Deref(), var8->Deref(), continuation }))));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation reducer::pred_t_rule1_8::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_rule1_8::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;*/
		std::vector<Term*> aregs = mach->RegPull(8);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_rule1_8__1(mach));
	}

	Operation reducer::pred_t_rule1_8::exec_pred_t_rule1_8__1(Prolog* mach) {
		mach->FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = Data::F(reducer::s_termequal, { var1->Deref(), var5->Deref(), mach->HC(continuation) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_notinv_2::exec_static);
	}

	Operation reducer::pred_t_rule1_8::exec_pred_t_rule1_8__2(Prolog* mach) {
		mach->FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(Data::F(reducer::s7, var8, Data::F(reducer::s7, { var2->Deref(), reducer::s_b }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = Data::F(reducer::s_inv, { var1->Deref(), var6->Deref(), Data::F(reducer::s17, { var1->Deref(), var5->Deref(), mach->HC(Data::F(reducer::s_t_trans, { var1->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_notinv_2::exec_static);
	}

	Operation reducer::pred_t_rule1_8::exec_pred_t_rule1_8__3(Prolog* mach) {
		mach->FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(Data::F(reducer::s7, { var5->Deref(), Data::F(reducer::s7, var8, reducer::s_c) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var6->Deref();
		local_aregs[2] = mach->HC(Data::F(reducer::s_t_trans, { var1->Deref(), var2->Deref(), var4->Deref(), var8->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_notinv_2::exec_static);
	}

	Operation reducer::pred_t_rule1_8::exec_pred_t_rule1_8__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[8];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(Data::F(reducer::s7, var8, Data::F(reducer::s7, var9, reducer::s_s))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var9->Deref();
		local_aregs[4] = Data::F(reducer::s_t_trans, { var1->Deref(), var5->Deref(), var7->Deref(), var8->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_t_trans_4::exec_static);
	}

	Operation reducer::pred_t_rule2_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_t_rule2_9::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
		std::vector<Term*> aregs = mach->RegPull(9);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_t_rule2_9__1(mach));
	}

	Operation reducer::pred_t_rule2_9::exec_pred_t_rule2_9__1(Prolog* mach) {
		mach->FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[9];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(Data::F(reducer::s7, { var6->Deref(), Data::F(reducer::s7, { var2->Deref(), reducer::s_c }) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = Data::F(reducer::s_notinv, { var1->Deref(), var7->Deref(), mach->HC(continuation) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation reducer::pred_t_rule2_9::exec_pred_t_rule2_9__2(Prolog* mach) {
		mach->FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[9];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(Data::F(reducer::s7, var9, Data::F(reducer::s7, { var2->Deref(), reducer::s_s }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = mach->HC(Data::F(reducer::s_t_trans, { var1->Deref(), var6->Deref(), var8->Deref(), var9->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation reducer::pred_t_rule2_9::exec_pred_t_rule2_9__3(Prolog* mach) {
		mach->FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[9];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(Data::F(reducer::s7, { var6->Deref(), Data::F(reducer::s7, var9, Data::F(reducer::s7, { var2->Deref(), reducer::s_cp })) })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = Data::F(reducer::s_notinv, { var1->Deref(), var7->Deref(), mach->HC(Data::F(reducer::s_t_trans, { var1->Deref(), var3->Deref(), var5->Deref(), var9->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_inv_2::exec_static);
	}

	Operation reducer::pred_t_rule2_9::exec_pred_t_rule2_9__4(Prolog* mach) {
		mach->FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[9];
		Term* areg8 = local_aregs[8]->Deref();
		Term* areg7 = local_aregs[7]->Deref();
		Term* areg6 = local_aregs[6]->Deref();
		Term* areg5 = local_aregs[5]->Deref();
		Term* areg4 = local_aregs[4]->Deref();
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
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var6))) {
			return Prolog::Fail0;
		}
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(Data::F(reducer::s7, var9, Data::F(reducer::s7, var10, Data::F(reducer::s7, { var2->Deref(), reducer::s_sp })))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = mach->HC(Data::F(reducer::s_t_trans, { var1->Deref(), var3->Deref(), var5->Deref(), var10->Deref(), Data::F(reducer::s_t_trans, { var1->Deref(), var6->Deref(), var8->Deref(), var9->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_inv_2::exec_static);
	}

	Operation reducer::pred_t_rule2_9::exec_pred_t_rule2_9__5(Prolog* mach) {
		mach->FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[9];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(Data::F(reducer::s7, { var3->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var6->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation reducer::pred_t_rule2_9::exec_pred_t_rule2_9__6(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[9];
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
		if(!((areg6)->Unify(var7))) {
			return Prolog::Fail0;
		}
		if(!((areg7)->Unify(var8))) {
			return Prolog::Fail0;
		}
		if(!((areg8)->Unify(Data::F(reducer::s7, var9, Data::F(reducer::s7, { var3->Deref(), Data::F(reducer::s7, { var2->Deref(), reducer::s_bp }) }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var6->Deref();
		local_aregs[2] = var8->Deref();
		local_aregs[3] = var9->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_t_trans_4::exec_static);
	}

	Operation reducer::pred_make_list_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_make_list_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_make_list_2__1(mach));
	}

	Operation reducer::pred_make_list_2::exec_pred_make_list_2__1(Prolog* mach) {
		mach->FillAlternative(pred_make_list_2::exec_pred_make_list_2__2);
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
		local_aregs[0] = var1->Deref();
		local_aregs[1] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_atomic_1::exec_static);
	}

	Operation reducer::pred_make_list_2::exec_pred_make_list_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, Data::F(reducer::s7, var2, var3))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, { var2->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = Data::F(reducer::s_make_list, { var1->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(pred_list_functor_name_1::exec_static);
	}

	Operation reducer::pred_listify_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_listify_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_listify_2__1(mach));
	}

	Operation reducer::pred_listify_2::exec_pred_listify_2__1(Prolog* mach) {
		mach->FillAlternative(pred_listify_2::exec_pred_listify_2__2);
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
		local_aregs[0] = Data::F(reducer::s_var, { var1->Deref() });
		local_aregs[1] = Data::F(reducer::s_atomic, { var1->Deref() });
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_or_2::exec_static);
	}

	Operation reducer::pred_listify_2::exec_pred_listify_2__2(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(reducer::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var4;
		local_aregs[3] = Data::F(reducer::s_listify_list, reducer::posint1, var4->Deref(), var1->Deref(), var3->Deref(), continuation);
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_functor_3::exec_static);
	}

	Operation reducer::pred_listify_list_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_listify_list_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_listify_list_4__1(mach));
	}

	Operation reducer::pred_listify_list_4::exec_pred_listify_list_4__1(Prolog* mach) {
		mach->FillAlternative(pred_listify_list_4::exec_pred_listify_list_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
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
		if(!((areg3)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation reducer::pred_listify_list_4::exec_pred_listify_list_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
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
		if(!((areg3)->Unify(Data::F(reducer::s7, var4, var5)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = mach->HC(Data::F(reducer::s_arg, { var1->Deref(), var3->Deref(), var6, Data::F(reducer::s_listify, { var6->Deref(), var4->Deref(), Data::F(reducer::s_is, var7, Data::F(reducer::s2, { var1->Deref(), reducer::posint1 }), Data::F(reducer::s_listify_list, { var7->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), continuation })) }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation reducer::pred_member_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_member_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_member_2__1(mach));
	}

	Operation reducer::pred_member_2::exec_pred_member_2__1(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(reducer::s7, { var1->Deref(), var2 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_member_2::exec_pred_member_2__2(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(reducer::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_member_2::exec_static);
	}

	Operation reducer::pred_append_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_append_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_append_3__1(mach));
	}

	Operation reducer::pred_append_3::exec_pred_append_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_append_3::exec_pred_append_3__2);
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

	Operation reducer::pred_append_3::exec_pred_append_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(reducer::s7, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_append_3::exec_static);
	}

	Operation reducer::pred_intersectv_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_intersectv_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_intersectv_3__1(mach));
	}

	Operation reducer::pred_intersectv_3::exec_pred_intersectv_3__1(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_3::exec_pred_intersectv_3__2);
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
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_intersectv_3::exec_pred_intersectv_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
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
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_intersectv_2_4::exec_static);
	}

	Operation reducer::pred_intersectv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_intersectv_2_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_intersectv_2_4__1(mach));
	}

	Operation reducer::pred_intersectv_2_4::exec_pred_intersectv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_2_4::exec_pred_intersectv_2_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
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
		if(!((areg3)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_intersectv_2_4::exec_pred_intersectv_2_4__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(reducer::s_intersectv_3, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation reducer::pred_intersectv_3_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_intersectv_3_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_intersectv_3_6__1(mach));
	}

	Operation reducer::pred_intersectv_3_6::exec_pred_intersectv_3_6__1(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__2);
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
		if(!((areg0)->Unify(reducer::s10))) {
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
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_intersectv_2_4::exec_static);
	}

	Operation reducer::pred_intersectv_3_6::exec_pred_intersectv_3_6__2(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__3);
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
		if(!((areg0)->Unify(reducer::s11))) {
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
		if(!((areg5)->Unify(Data::F(reducer::s7, { var1->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_intersectv_3::exec_static);
	}

	Operation reducer::pred_intersectv_3_6::exec_pred_intersectv_3_6__3(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(reducer::s15))) {
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
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_intersectv_2_4::exec_static);
	}

	Operation reducer::pred_intersectv_list_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_intersectv_list_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_intersectv_list_2__1(mach));
	}

	Operation reducer::pred_intersectv_list_2::exec_pred_intersectv_list_2__1(Prolog* mach) {
		mach->FillAlternative(pred_intersectv_list_2::exec_pred_intersectv_list_2__2);
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

	Operation reducer::pred_intersectv_list_2::exec_pred_intersectv_list_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_intersectv_list_3::exec_static);
	}

	Operation reducer::pred_$002D$002D$003E_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_$002D$002D$003E_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_$002D$002D$003E_2__1(mach));
	}

	Operation reducer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Data::F(reducer::s_intersectv_list, { Const::Nil })))) {
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

	Operation reducer::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s_intersectv_list, Data::F(reducer::s7, var1, var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s3, Data::F(reducer::s_intersectv, { var1->Deref() }), Data::F(reducer::s_intersectv_list, { var2->Deref() }))))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_diffv_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_diffv_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_diffv_3__1(mach));
	}

	Operation reducer::pred_diffv_3::exec_pred_diffv_3__1(Prolog* mach) {
		mach->FillAlternative(pred_diffv_3::exec_pred_diffv_3__2);
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
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_diffv_3::exec_pred_diffv_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
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
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_diffv_2_4::exec_static);
	}

	Operation reducer::pred_diffv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_diffv_2_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_diffv_2_4__1(mach));
	}

	Operation reducer::pred_diffv_2_4::exec_pred_diffv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_diffv_2_4::exec_pred_diffv_2_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
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
		if(!((areg3)->Unify(Data::F(reducer::s7, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_diffv_2_4::exec_pred_diffv_2_4__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(reducer::s_diffv_3, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation reducer::pred_diffv_3_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_diffv_3_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_diffv_3_6__1(mach));
	}

	Operation reducer::pred_diffv_3_6::exec_pred_diffv_3_6__1(Prolog* mach) {
		mach->FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__2);
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
		if(!((areg0)->Unify(reducer::s10))) {
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
		if(!((areg5)->Unify(Data::F(reducer::s7, { var1->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Data::F(reducer::s7, { var3->Deref(), var4->Deref() });
		local_aregs[2] = var5->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_diffv_3::exec_static);
	}

	Operation reducer::pred_diffv_3_6::exec_pred_diffv_3_6__2(Prolog* mach) {
		mach->FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__3);
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
		if(!((areg0)->Unify(reducer::s11))) {
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
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_diffv_3::exec_static);
	}

	Operation reducer::pred_diffv_3_6::exec_pred_diffv_3_6__3(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(reducer::s15))) {
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
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_diffv_2_4::exec_static);
	}

	Operation reducer::pred_unionv_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_unionv_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_unionv_3__1(mach));
	}

	Operation reducer::pred_unionv_3::exec_pred_unionv_3__1(Prolog* mach) {
		mach->FillAlternative(pred_unionv_3::exec_pred_unionv_3__2);
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

	Operation reducer::pred_unionv_3::exec_pred_unionv_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
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
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var4->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_unionv_2_4::exec_static);
	}

	Operation reducer::pred_unionv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_unionv_2_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_unionv_2_4__1(mach));
	}

	Operation reducer::pred_unionv_2_4::exec_pred_unionv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_unionv_2_4::exec_pred_unionv_2_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
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
		if(!((areg3)->Unify(Data::F(reducer::s7, { var1->Deref(), var2->Deref() })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_unionv_2_4::exec_pred_unionv_2_4__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(reducer::s_unionv_3, { var6->Deref(), var3->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation reducer::pred_unionv_3_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_unionv_3_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_unionv_3_6__1(mach));
	}

	Operation reducer::pred_unionv_3_6::exec_pred_unionv_3_6__1(Prolog* mach) {
		mach->FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__2);
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
		if(!((areg0)->Unify(reducer::s10))) {
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
		if(!((areg5)->Unify(Data::F(reducer::s7, { var1->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_unionv_2_4::exec_static);
	}

	Operation reducer::pred_unionv_3_6::exec_pred_unionv_3_6__2(Prolog* mach) {
		mach->FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__3);
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
		if(!((areg0)->Unify(reducer::s11))) {
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
		if(!((areg5)->Unify(Data::F(reducer::s7, { var1->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = var5->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_unionv_3::exec_static);
	}

	Operation reducer::pred_unionv_3_6::exec_pred_unionv_3_6__3(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(reducer::s15))) {
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
		if(!((areg5)->Unify(Data::F(reducer::s7, { var3->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var5->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = nullptr;
		return static_cast<Operation>(pred_unionv_2_4::exec_static);
	}

	Operation reducer::pred_subsetv_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_subsetv_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_subsetv_2__1(mach));
	}

	Operation reducer::pred_subsetv_2::exec_pred_subsetv_2__1(Prolog* mach) {
		mach->FillAlternative(pred_subsetv_2::exec_pred_subsetv_2__2);
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

	Operation reducer::pred_subsetv_2::exec_pred_subsetv_2__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(reducer::s7, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var5;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = Data::F(reducer::s_subsetv_2, { var5->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation reducer::pred_subsetv_2_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_subsetv_2_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_subsetv_2_4__1(mach));
	}

	Operation reducer::pred_subsetv_2_4::exec_pred_subsetv_2_4__1(Prolog* mach) {
		mach->FillAlternative(pred_subsetv_2_4::exec_pred_subsetv_2_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s11))) {
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
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_subsetv_2::exec_static);
	}

	Operation reducer::pred_subsetv_2_4::exec_pred_subsetv_2_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s15))) {
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
		local_aregs[0] = Data::F(reducer::s7, { var1->Deref(), var2->Deref() });
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_subsetv_2::exec_static);
	}

	Operation reducer::pred_small_subsetv_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_small_subsetv_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_small_subsetv_2__1(mach));
	}

	Operation reducer::pred_small_subsetv_2::exec_pred_small_subsetv_2__1(Prolog* mach) {
		mach->FillAlternative(pred_small_subsetv_2::exec_pred_small_subsetv_2__2);
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

	Operation reducer::pred_small_subsetv_2::exec_pred_small_subsetv_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = Data::F(reducer::s_small_subsetv, { var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_inv_2::exec_static);
	}

	Operation reducer::pred_inv_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_inv_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_inv_2__1(mach));
	}

	Operation reducer::pred_inv_2::exec_pred_inv_2__1(Prolog* mach) {
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
		if(!((areg1)->Unify(Data::F(reducer::s7, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4;
		local_aregs[1] = var1->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = Data::F(reducer::s_inv_2, { var4->Deref(), var1->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation reducer::pred_inv_2_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_inv_2_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_inv_2_3__1(mach));
	}

	Operation reducer::pred_inv_2_3::exec_pred_inv_2_3__1(Prolog* mach) {
		mach->FillAlternative(pred_inv_2_3::exec_pred_inv_2_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s11))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_inv_2_3::exec_pred_inv_2_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s15))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_inv_2::exec_static);
	}

	Operation reducer::pred_notinv_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_notinv_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_notinv_2__1(mach));
	}

	Operation reducer::pred_notinv_2::exec_pred_notinv_2__1(Prolog* mach) {
		mach->RemoveChoice();
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
		local_aregs[1] = var1->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_notinv_2_2::exec_static);
	}

	Operation reducer::pred_notinv_2_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_notinv_2_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_notinv_2_2__1(mach));
	}

	Operation reducer::pred_notinv_2_2::exec_pred_notinv_2_2__1(Prolog* mach) {
		mach->FillAlternative(pred_notinv_2_2::exec_pred_notinv_2_2__2);
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

	Operation reducer::pred_notinv_2_2::exec_pred_notinv_2_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(reducer::s7, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4;
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(reducer::s_notinv_3, { var4->Deref(), var3->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_compare_3::exec_static);
	}

	Operation reducer::pred_notinv_3_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation reducer::pred_notinv_3_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_notinv_3_3__1(mach));
	}

	Operation reducer::pred_notinv_3_3::exec_pred_notinv_3_3__1(Prolog* mach) {
		mach->FillAlternative(pred_notinv_3_3::exec_pred_notinv_3_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s10))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation reducer::pred_notinv_3_3::exec_pred_notinv_3_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(reducer::s15))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(pred_notinv_2_2::exec_static);
	}
}
