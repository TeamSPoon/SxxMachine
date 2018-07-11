using namespace std;

#include "flatten.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  flatten::s_cut = Data::Intern("cut");
Const* const  flatten::s1 = Data::Intern("!");
Const* const  flatten::s2 = Data::Intern("+");
Const* const  flatten::s3 = Data::Intern(",");
Const* const  flatten::s4 = Data::Intern("-->");
Const* const  flatten::s5 = Data::Intern("->");
Const* const  flatten::s6 = Data::Intern(".");
Const* const  flatten::s7 = Data::Intern(":-");
Const* const  flatten::s8 = Data::Intern(";");
Const* const  flatten::s9 = Data::Intern("=");
Const* const  flatten::s10 = Data::Intern("=..");
Const* const  flatten::s11 = Data::Intern("=<");
Const* const  flatten::s12 = Data::Intern(">");
Const* const  flatten::s13 = Data::Intern("\\+");
Const* const  flatten::s14 = Data::Intern("\\=");
Const* const  flatten::s__dummy_ = Data::Intern("_dummy_");
Const* const  flatten::s_a = Data::Intern("a");
Const* const  flatten::s_append = Data::Intern("append");
Const* const  flatten::s_arg = Data::Intern("arg");
Const* const  flatten::s_atomic = Data::Intern("atomic");
Const* const  flatten::s_b = Data::Intern("b");
Const* const  flatten::s_c = Data::Intern("c");
Const* const  flatten::s_call = Data::Intern("call");
Const* const  flatten::s_copy = Data::Intern("copy");
Const* const  flatten::s_copy2 = Data::Intern("copy2");
Const* const  flatten::s_disj = Data::Intern("disj");
Const* const  flatten::s_eliminate_disjunctions = Data::Intern("eliminate_disjunctions");
Const* const  flatten::s_extract_disj = Data::Intern("extract_disj");
Const* const  flatten::s_fail = Data::Intern("fail");
Const* const  flatten::s_find_vars = Data::Intern("find_vars");
Const* const  flatten::s_functor = Data::Intern("functor");
Const* const  flatten::s_gather_disj = Data::Intern("gather_disj");
Const* const  flatten::s_inst_vars = Data::Intern("inst_vars");
Const* const  flatten::s_inst_vars_list = Data::Intern("inst_vars_list");
Const* const  flatten::s_intersect_sorted_vars = Data::Intern("intersect_sorted_vars");
Const* const  flatten::s_intersect_vars = Data::Intern("intersect_vars");
Const* const  flatten::s_is = Data::Intern("is");
Const* const  flatten::s_is_disj = Data::Intern("is_disj");
Const* const  flatten::s_make_dummy_clauses = Data::Intern("make_dummy_clauses");
Const* const  flatten::s_make_dummy_name = Data::Intern("make_dummy_name");
Const* const  flatten::s_make_sym = Data::Intern("make_sym");
Const* const  flatten::s_name = Data::Intern("name");
Const* const  flatten::s_nonvar = Data::Intern("nonvar");
Const* const  flatten::s_not = Data::Intern("not");
Const* const  flatten::s_p = Data::Intern("p");
Const* const  flatten::s_retrieve_sym = Data::Intern("retrieve_sym");
Const* const  flatten::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  flatten::s_smallerthan = Data::Intern("smallerthan");
Const* const  flatten::s_sort = Data::Intern("sort");
Const* const  flatten::s_sort_vars = Data::Intern("sort_vars");
Const* const  flatten::s_split_vars = Data::Intern("split_vars");
Const* const  flatten::s_termequal = Data::Intern("termequal");
Const* const  flatten::s_termgreaterthan = Data::Intern("termgreaterthan");
Const* const  flatten::s_termsmallerthan = Data::Intern("termsmallerthan");
Const* const  flatten::s_top = Data::Intern("top");
Const* const  flatten::s_treat_disj = Data::Intern("treat_disj");
Const* const  flatten::s_true = Data::Intern("true");
Const* const  flatten::s_unify = Data::Intern("unify");
Const* const  flatten::s_var = Data::Intern("var");
Const* const  flatten::s_varbag = Data::Intern("varbag");
Const* const  flatten::s_varset = Data::Intern("varset");
Const* const  flatten::s62 = Data::Intern("{}");
Int* const  flatten::posint0 = Data::Number(0LL);
Int* const  flatten::posint1 = Data::Number(1LL);
Int* const  flatten::posint65 = Data::Number(65LL);
Operation* const  flatten::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  flatten::reg_eliminate_disjunctions_4 = PredTable::Register("eliminate_disjunctions",4, new pred_eliminate_disjunctions_4());
Operation* const  flatten::reg_gather_disj_4 = PredTable::Register("gather_disj",4, new pred_gather_disj_4());
Operation* const  flatten::reg_extract_disj_4 = PredTable::Register("extract_disj",4, new pred_extract_disj_4());
Operation* const  flatten::reg_extract_disj_7 = PredTable::Register("extract_disj",7, new pred_extract_disj_7());
Operation* const  flatten::reg_is_disj_2 = PredTable::Register("is_disj",2, new pred_is_disj_2());
Operation* const  flatten::reg_treat_disj_3 = PredTable::Register("treat_disj",3, new pred_treat_disj_3());
Operation* const  flatten::reg_make_dummy_clauses_4 = PredTable::Register("make_dummy_clauses",4, new pred_make_dummy_clauses_4());
Operation* const  flatten::reg_find_vars_2 = PredTable::Register("find_vars",2, new pred_find_vars_2());
Operation* const  flatten::reg_find_vars_3 = PredTable::Register("find_vars",3, new pred_find_vars_3());
Operation* const  flatten::reg_intersect_vars_3 = PredTable::Register("intersect_vars",3, new pred_intersect_vars_3());
Operation* const  flatten::reg_make_dummy_name_2 = PredTable::Register("make_dummy_name",2, new pred_make_dummy_name_2());
Operation* const  flatten::reg_append_3 = PredTable::Register("append",3, new SxxMachine::sxx_library::pred_append_3());
Operation* const  flatten::reg_copy_2 = PredTable::Register("copy",2, new pred_copy_2());
Operation* const  flatten::reg_copy2_3 = PredTable::Register("copy2",3, new pred_copy2_3());
Operation* const  flatten::reg_copy2_5 = PredTable::Register("copy2",5, new pred_copy2_5());
Operation* const  flatten::reg_retrieve_sym_3 = PredTable::Register("retrieve_sym",3, new pred_retrieve_sym_3());
Operation* const  flatten::reg_make_sym_2 = PredTable::Register("make_sym",2, new pred_make_sym_2());
Operation* const  flatten::reg_varset_2 = PredTable::Register("varset",2, new pred_varset_2());
Operation* const  flatten::reg_varbag_2 = PredTable::Register("varbag",2, new pred_varbag_2());
Operation* const  flatten::reg_$002D$002D$003E_2 = PredTable::Register("-->",2, new SxxMachine::Builtins::pred_$002D$002D$003E_2());
Operation* const  flatten::reg_inst_vars_1 = PredTable::Register("inst_vars",1, new pred_inst_vars_1());
Operation* const  flatten::reg_inst_vars_list_2 = PredTable::Register("inst_vars_list",2, new pred_inst_vars_list_2());
Operation* const  flatten::reg_sort_vars_2 = PredTable::Register("sort_vars",2, new pred_sort_vars_2());
Operation* const  flatten::reg_sort_vars_3 = PredTable::Register("sort_vars",3, new pred_sort_vars_3());
Operation* const  flatten::reg_intersect_sorted_vars_3 = PredTable::Register("intersect_sorted_vars",3, new pred_intersect_sorted_vars_3());
Operation* const  flatten::reg_split_vars_4 = PredTable::Register("split_vars",4, new pred_split_vars_4());

	Operation* flatten::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* flatten::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_top_0::exec_pred_top_0__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	local_aregs[0] = Data::F(flatten::s6,Data::F(flatten::s7,Data::F(flatten::s_a,var1,var2,var3),Data::F(flatten::s8,Data::F(flatten::s_b, { var1->Deref() }),Data::F(flatten::s_c, { var3->Deref() }))),Const::Nil);
	local_aregs[1] = var4;
	local_aregs[2] = var5;
	local_aregs[3] = Const::Nil;
	local_aregs[4] = Data::F(flatten::s_inst_vars,Data::F(flatten::s3, { var4->Deref(), var5->Deref() }),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_eliminate_disjunctions_4::exec_static);
	}

	Operation* flatten::pred_top_0::exec_pred_top_0__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(flatten::s_true->FindProc(0));
	}

	Operation* flatten::pred_eliminate_disjunctions_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_eliminate_disjunctions_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_eliminate_disjunctions_4__1(mach));
	}

	Operation* flatten::pred_eliminate_disjunctions_4::exec_pred_eliminate_disjunctions_4__1(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = Const::Nil;
	local_aregs[4] = Data::F(flatten::s_treat_disj, { var5->Deref(), var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_gather_disj_4::exec_static);
	}

	Operation* flatten::pred_gather_disj_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_gather_disj_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_gather_disj_4__1(mach));
	}

	Operation* flatten::pred_gather_disj_4::exec_pred_gather_disj_4__1(Prolog* mach) {
		mach->FillAlternative(pred_gather_disj_4::exec_pred_gather_disj_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_gather_disj_4::exec_pred_gather_disj_4__2(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var6;
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var7;
	local_aregs[4] = Data::F(flatten::s_unify,Data::F(flatten::s6, { var6->Deref(), var8 }),var3->Deref(),Data::F(flatten::s_gather_disj, { var2->Deref(), var8->Deref(), var7->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_extract_disj_4::exec_static);
	}

	Operation* flatten::pred_extract_disj_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_extract_disj_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_extract_disj_4__1(mach));
	}

	Operation* flatten::pred_extract_disj_4::exec_pred_extract_disj_4__1(Prolog* mach) {
		mach->FillAlternative(pred_extract_disj_4::exec_pred_extract_disj_4__2);
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s7,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(flatten::s7, { var2->Deref(), var6 });
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_unify,flatten::posint0,var7,Data::F(flatten::s_extract_disj, { var6->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var1->Deref(), var7->Deref(), var8, continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation* flatten::pred_extract_disj_4::exec_pred_extract_disj_4__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_extract_disj_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_extract_disj_7::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
	std::vector<Term*> aregs = mach->RegPull(7);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_extract_disj_7__1(mach));
	}

	Operation* flatten::pred_extract_disj_7::exec_pred_extract_disj_7__1(Prolog* mach) {
		mach->FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
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
	if(!((areg0)->Unify(Data::F(flatten::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s3,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = var10;
	local_aregs[4] = var7->Deref();
	local_aregs[5] = var8->Deref();
	local_aregs[6] = var11;
	local_aregs[7] = Data::F(flatten::s_extract_disj, { var2->Deref(), var4->Deref(), var10->Deref(), var6->Deref(), var7->Deref(), var11->Deref(), var9->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_extract_disj_7::exec_static);
	}

	Operation* flatten::pred_extract_disj_7::exec_pred_extract_disj_7__2(Prolog* mach) {
		mach->FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__3);
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var8;
	local_aregs[2] = mach->HC(Data::F(flatten::s_unify,Data::F(flatten::s6,Data::F(flatten::s_disj, { var8->Deref(), var6->Deref(), var2->Deref(), var5->Deref() }),var4->Deref()),var3->Deref(),Data::F(flatten::s_is, { var7->Deref(), Data::F(flatten::s2, { var6->Deref(), flatten::posint1 }), continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_is_disj_2::exec_static);
	}

	Operation* flatten::pred_extract_disj_7::exec_pred_extract_disj_7__3(Prolog* mach) {
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
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_is_disj_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_is_disj_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_is_disj_2__1(mach));
	}

	Operation* flatten::pred_is_disj_2::exec_pred_is_disj_2__1(Prolog* mach) {
		mach->FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s8,Data::F(flatten::s5,var1,var2),var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s8,Data::F(flatten::s3, { var1->Deref(), Data::F(flatten::s3,flatten::s1,var2->Deref()) }),var3->Deref()),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_is_disj_2::exec_pred_is_disj_2__2(Prolog* mach) {
		mach->FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s8,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s8, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_is_disj_2::exec_pred_is_disj_2__3(Prolog* mach) {
		mach->FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s_not,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s8,Data::F(flatten::s3, { var1->Deref(), Data::F(flatten::s3,flatten::s1,flatten::s_fail) }),flatten::s_true),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_is_disj_2::exec_pred_is_disj_2__4(Prolog* mach) {
		mach->FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s13,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s8,Data::F(flatten::s3, { var1->Deref(), Data::F(flatten::s3,flatten::s1,flatten::s_fail) }),flatten::s_true),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_is_disj_2::exec_pred_is_disj_2__5(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s14,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s8,Data::F(flatten::s3,Data::F(flatten::s9, { var1->Deref(), var2->Deref() }),Data::F(flatten::s3,flatten::s1,flatten::s_fail)),flatten::s_true),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_treat_disj_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_treat_disj_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_treat_disj_3__1(mach));
	}

	Operation* flatten::pred_treat_disj_3::exec_pred_treat_disj_3__1(Prolog* mach) {
		mach->FillAlternative(pred_treat_disj_3::exec_pred_treat_disj_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_treat_disj_3::exec_pred_treat_disj_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
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
	if(!((areg0)->Unify(Data::F(flatten::s6,Data::F(flatten::s_disj,Data::F(flatten::s8,var1,var2),var3,var4,var5),var6),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(flatten::s8, { var1->Deref(), var2->Deref() });
	local_aregs[1] = var9;
	local_aregs[2] = Data::F(flatten::s_find_vars, { var5->Deref(), var10, Data::F(flatten::s_intersect_vars, { var9->Deref(), var10->Deref(), var11, Data::F(flatten::s_make_dummy_name, { var3->Deref(), var12, Data::F(flatten::s10, { var4->Deref(), Data::F(flatten::s6, { var12->Deref(), var11->Deref() }), Data::F(flatten::s_make_dummy_clauses,Data::F(flatten::s8, { var1->Deref(), var2->Deref() }),var4->Deref(),var7->Deref(),var13,Data::F(flatten::s_treat_disj, { var6->Deref(), var13->Deref(), var8->Deref(), continuation })) }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_find_vars_2::exec_static);
	}

	Operation* flatten::pred_make_dummy_clauses_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_make_dummy_clauses_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_make_dummy_clauses_4__1(mach));
	}

	Operation* flatten::pred_make_dummy_clauses_4::exec_pred_make_dummy_clauses_4__1(Prolog* mach) {
		mach->FillAlternative(pred_make_dummy_clauses_4::exec_pred_make_dummy_clauses_4__2);
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
	if(!((areg0)->Unify(Data::F(flatten::s8,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(flatten::s6,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(flatten::s_copy,Data::F(flatten::s7, { var3->Deref(), var1->Deref() }),var4->Deref(),Data::F(flatten::s_make_dummy_clauses, { var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_make_dummy_clauses_4::exec_pred_make_dummy_clauses_4__2(Prolog* mach) {
		mach->RemoveChoice();
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(flatten::s6,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(flatten::s7, { var2->Deref(), var1->Deref() });
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_copy_2::exec_static);
	}

	Operation* flatten::pred_find_vars_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_find_vars_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_find_vars_2__1(mach));
	}

	Operation* flatten::pred_find_vars_2::exec_pred_find_vars_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = Data::F(flatten::s_unify, { Const::Nil, var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_find_vars_3::exec_static);
	}

	Operation* flatten::pred_find_vars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_find_vars_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_find_vars_3__1(mach));
	}

	Operation* flatten::pred_find_vars_3::exec_pred_find_vars_3__1(Prolog* mach) {
		mach->FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s6, { var1->Deref(), var2 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(flatten::s_var->FindProc(1));
	}

	Operation* flatten::pred_find_vars_3::exec_pred_find_vars_3__2(Prolog* mach) {
		mach->FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(flatten::s_atomic->FindProc(1));
	}

	Operation* flatten::pred_find_vars_3::exec_pred_find_vars_3__3(Prolog* mach) {
		mach->FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__4);
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(flatten::s_find_vars, { var1->Deref(), var3->Deref(), var5, Data::F(flatten::s_find_vars, { var2->Deref(), var5->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_find_vars_3::exec_pred_find_vars_3__4(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = Data::F(flatten::s6,var4,var5);
	local_aregs[2] = Data::F(flatten::s_find_vars, { var5->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(flatten::s10->FindProc(2));
	}

	Operation* flatten::pred_intersect_vars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_intersect_vars_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_intersect_vars_3__1(mach));
	}

	Operation* flatten::pred_intersect_vars_3::exec_pred_intersect_vars_3__1(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4;
	local_aregs[2] = Data::F(flatten::s_sort_vars, { var2->Deref(), var5, Data::F(flatten::s_intersect_sorted_vars, { var4->Deref(), var5->Deref(), var3->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_sort_vars_2::exec_static);
	}

	Operation* flatten::pred_make_dummy_name_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_make_dummy_name_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_make_dummy_name_2__1(mach));
	}

	Operation* flatten::pred_make_dummy_name_2::exec_pred_make_dummy_name_2__1(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = flatten::s__dummy_;
	local_aregs[1] = var3;
	local_aregs[2] = Data::F(flatten::s_name, { var1->Deref(), var4, Data::F(flatten::s_append, { var3->Deref(), var4->Deref(), var5, Data::F(flatten::s_name, { var2->Deref(), var5->Deref(), continuation }) }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(flatten::s_name->FindProc(2));
	}

	Operation* flatten::pred_append_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_append_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_append_3__1(mach));
	}

	Operation* flatten::pred_append_3::exec_pred_append_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_append_3::exec_pred_append_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_append_3::exec_pred_append_3__2(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(flatten::s6, { var1->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_append_3::exec_static);
	}

	Operation* flatten::pred_copy_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_copy_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_copy_2__1(mach));
	}

	Operation* flatten::pred_copy_2::exec_pred_copy_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = Data::F(flatten::s_make_sym, { var3->Deref(), var4, Data::F(flatten::s_copy2, { var1->Deref(), var2->Deref(), var4->Deref(), mach->HC(continuation) }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_varset_2::exec_static);
	}

	Operation* flatten::pred_copy2_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_copy2_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_copy2_3__1(mach));
	}

	Operation* flatten::pred_copy2_3::exec_pred_copy2_3__1(Prolog* mach) {
		mach->FillAlternative(pred_copy2_3::exec_pred_copy2_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(flatten::s_retrieve_sym, { var1->Deref(), var3->Deref(), var2->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(flatten::s_var->FindProc(1));
	}

	Operation* flatten::pred_copy2_3::exec_pred_copy2_3__2(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(flatten::s_functor, { var1->Deref(), var4, var5, Data::F(flatten::s_functor, { var2->Deref(), var4->Deref(), var5->Deref(), Data::F(flatten::s_copy2, { var1->Deref(), var2->Deref(), var3->Deref(), flatten::posint1, var5->Deref(), continuation }) }) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(flatten::s_nonvar->FindProc(1));
	}

	Operation* flatten::pred_copy2_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_copy2_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_copy2_5__1(mach));
	}

	Operation* flatten::pred_copy2_5::exec_pred_copy2_5__1(Prolog* mach) {
		mach->FillAlternative(pred_copy2_5::exec_pred_copy2_5__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var5->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* flatten::pred_copy2_5::exec_pred_copy2_5__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_arg, { var4->Deref(), var1->Deref(), var6, Data::F(flatten::s_arg, { var4->Deref(), var2->Deref(), var7, Data::F(flatten::s_copy2, { var6->Deref(), var7->Deref(), var3->Deref(), Data::F(flatten::s_is,var8,Data::F(flatten::s2, { var4->Deref(), flatten::posint1 }),Data::F(flatten::s_copy2, { var1->Deref(), var2->Deref(), var3->Deref(), var8->Deref(), var5->Deref(), continuation })) }) }) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* flatten::pred_retrieve_sym_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_retrieve_sym_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_retrieve_sym_3__1(mach));
	}

	Operation* flatten::pred_retrieve_sym_3::exec_pred_retrieve_sym_3__1(Prolog* mach) {
		mach->FillAlternative(pred_retrieve_sym_3::exec_pred_retrieve_sym_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s6,Data::F(flatten::s_p,var2,var3),var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation* flatten::pred_retrieve_sym_3::exec_pred_retrieve_sym_3__2(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s6,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_retrieve_sym_3::exec_static);
	}

	Operation* flatten::pred_make_sym_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_make_sym_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_make_sym_2__1(mach));
	}

	Operation* flatten::pred_make_sym_2::exec_pred_make_sym_2__1(Prolog* mach) {
		mach->FillAlternative(pred_make_sym_2::exec_pred_make_sym_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_make_sym_2::exec_pred_make_sym_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s6,Data::F(flatten::s_p, { var1->Deref(), var3 }),var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_make_sym_2::exec_static);
	}

	Operation* flatten::pred_varset_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_varset_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_varset_2__1(mach));
	}

	Operation* flatten::pred_varset_2::exec_pred_varset_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = Data::F(flatten::s_sort, { var3->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_varbag_2::exec_static);
	}

	Operation* flatten::pred_varbag_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_varbag_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_varbag_2__1(mach));
	}

	Operation* flatten::pred_varbag_2::exec_pred_varbag_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Const::Nil;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_varbag_3::exec_static);
	}

	Operation* flatten::pred_$002D$002D$003E_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_$002D$002D$003E_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_$002D$002D$003E_2__1(mach));
	}

	Operation* flatten::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s_varbag,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s3,Data::F(flatten::s62,Data::F(flatten::s_var, { var1->Deref() })),Data::F(flatten::s3,flatten::s1,Data::F(flatten::s6, { var1->Deref(), Const::Nil }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s_varbag,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s3,Data::F(flatten::s62,Data::F(flatten::s3,Data::F(flatten::s_nonvar, { var1->Deref() }),Data::F(flatten::s3,flatten::s1,Data::F(flatten::s_functor, { var1->Deref(), var2, var3 })))),Data::F(flatten::s_varbag, { var1->Deref(), flatten::posint1, var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s_varbag,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s3,Data::F(flatten::s62,Data::F(flatten::s12, { var2->Deref(), var3->Deref() })),flatten::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(flatten::s_varbag,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s3,Data::F(flatten::s62,Data::F(flatten::s11, { var2->Deref(), var3->Deref() })),Data::F(flatten::s3,flatten::s1,Data::F(flatten::s3,Data::F(flatten::s62,Data::F(flatten::s_arg, { var2->Deref(), var1->Deref(), var4 })),Data::F(flatten::s3,Data::F(flatten::s_varbag, { var4->Deref() }),Data::F(flatten::s3,Data::F(flatten::s62,Data::F(flatten::s_is,var5,Data::F(flatten::s2, { var2->Deref(), flatten::posint1 }))),Data::F(flatten::s_varbag, { var1->Deref(), var5->Deref(), var3->Deref() })))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_inst_vars_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_inst_vars_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_inst_vars_1__1(mach));
	}

	Operation* flatten::pred_inst_vars_1::exec_pred_inst_vars_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = Data::F(flatten::s_unify,Data::F(flatten::s6,flatten::posint65,Const::Nil),Data::F(flatten::s6,var3,Const::Nil),Data::F(flatten::s_inst_vars_list, { var2->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_varset_2::exec_static);
	}

	Operation* flatten::pred_inst_vars_list_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_inst_vars_list_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_inst_vars_list_2__1(mach));
	}

	Operation* flatten::pred_inst_vars_list_2::exec_pred_inst_vars_list_2__1(Prolog* mach) {
		mach->FillAlternative(pred_inst_vars_list_2::exec_pred_inst_vars_list_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_inst_vars_list_2::exec_pred_inst_vars_list_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = Data::F(flatten::s6, { var3->Deref(), Const::Nil });
	local_aregs[2] = Data::F(flatten::s_is,var4,Data::F(flatten::s2, { var3->Deref(), flatten::posint1 }),Data::F(flatten::s_inst_vars_list, { var2->Deref(), var4->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(flatten::s_name->FindProc(2));
	}

	Operation* flatten::pred_sort_vars_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_sort_vars_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_sort_vars_2__1(mach));
	}

	Operation* flatten::pred_sort_vars_2::exec_pred_sort_vars_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Const::Nil;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_sort_vars_3::exec_static);
	}

	Operation* flatten::pred_sort_vars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_sort_vars_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_sort_vars_3__1(mach));
	}

	Operation* flatten::pred_sort_vars_3::exec_pred_sort_vars_3__1(Prolog* mach) {
		mach->FillAlternative(pred_sort_vars_3::exec_pred_sort_vars_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_sort_vars_3::exec_pred_sort_vars_3__2(Prolog* mach) {
		mach->RemoveChoice();
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = var6;
	local_aregs[4] = Data::F(flatten::s_sort_vars, { var5->Deref(), var3->Deref(), Data::F(flatten::s6, { var1->Deref(), var7 }), Data::F(flatten::s_sort_vars, { var6->Deref(), var7->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_split_vars_4::exec_static);
	}

	Operation* flatten::pred_intersect_sorted_vars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_intersect_sorted_vars_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_intersect_sorted_vars_3__1(mach));
	}

	Operation* flatten::pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__1(Prolog* mach) {
		mach->FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__2(Prolog* mach) {
		mach->FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__3(Prolog* mach) {
		mach->FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__4);
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s6,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(flatten::s6, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_intersect_sorted_vars, { var2->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation* flatten::pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__4(Prolog* mach) {
		mach->FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__5);
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s6,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_intersect_sorted_vars, { var2->Deref(), Data::F(flatten::s6, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_termsmallerthan_2::exec_static);
	}

	Operation* flatten::pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__5(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(flatten::s6,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_intersect_sorted_vars,Data::F(flatten::s6, { var1->Deref(), var2->Deref() }),var4->Deref(),var5->Deref(),continuation));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_termgreaterthan_2::exec_static);
	}

	Operation* flatten::pred_split_vars_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* flatten::pred_split_vars_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_split_vars_4__1(mach));
	}

	Operation* flatten::pred_split_vars_4::exec_pred_split_vars_4__1(Prolog* mach) {
		mach->FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* flatten::pred_split_vars_4::exec_pred_split_vars_4__2(Prolog* mach) {
		mach->FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__3);
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(flatten::s6, { var1->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_split_vars, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_termsmallerthan_2::exec_static);
	}

	Operation* flatten::pred_split_vars_4::exec_pred_split_vars_4__3(Prolog* mach) {
		mach->FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__4);
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_split_vars, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_termequal_2::exec_static);
	}

	Operation* flatten::pred_split_vars_4::exec_pred_split_vars_4__4(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(flatten::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(flatten::s6, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(flatten::s_split_vars, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_termgreaterthan_2::exec_static);
	}
}
