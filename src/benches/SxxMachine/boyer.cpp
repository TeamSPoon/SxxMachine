using namespace std;

#include "boyer.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../bootlib/SxxMachine/sxx_meta.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  boyer::s_cut = Data::Intern("cut");
Const* const  boyer::s1 = Data::Intern(" milliseconds");
Const* const  boyer::s2 = Data::Intern(",");
Const* const  boyer::s3 = Data::Intern("-");
Const* const  boyer::s4 = Data::Intern("->");
Const* const  boyer::s5 = Data::Intern(".");
Const* const  boyer::s6 = Data::Intern(":-");
Const* const  boyer::s7 = Data::Intern(";");
Const* const  boyer::s8 = Data::Intern("=");
Const* const  boyer::s_a = Data::Intern("a");
Const* const  boyer::s_add1 = Data::Intern("add1");
Const* const  boyer::s_and = Data::Intern("and");
Const* const  boyer::s_append = Data::Intern("append");
Const* const  boyer::s_arg = Data::Intern("arg");
Const* const  boyer::s_assignedp = Data::Intern("assignedp");
Const* const  boyer::s_assignment = Data::Intern("assignment");
Const* const  boyer::s_assume_false = Data::Intern("assume_false");
Const* const  boyer::s_assume_true = Data::Intern("assume_true");
Const* const  boyer::s_atomic = Data::Intern("atomic");
Const* const  boyer::s_b = Data::Intern("b");
Const* const  boyer::s_big_plus = Data::Intern("big_plus");
Const* const  boyer::s_big_plus1 = Data::Intern("big_plus1");
Const* const  boyer::s_boolean = Data::Intern("boolean");
Const* const  boyer::s_boyer_difference = Data::Intern("boyer_difference");
Const* const  boyer::s_boyer_member = Data::Intern("boyer_member");
Const* const  boyer::s_c = Data::Intern("c");
Const* const  boyer::s_call = Data::Intern("call");
Const* const  boyer::s_car = Data::Intern("car");
Const* const  boyer::s_cdr = Data::Intern("cdr");
Const* const  boyer::s_codegen = Data::Intern("codegen");
Const* const  boyer::s_compile = Data::Intern("compile");
Const* const  boyer::s_cons = Data::Intern("cons");
Const* const  boyer::s_count_list = Data::Intern("count_list");
Const* const  boyer::s_countps_ = Data::Intern("countps_");
Const* const  boyer::s_countps_loop = Data::Intern("countps_loop");
Const* const  boyer::s_d = Data::Intern("d");
Const* const  boyer::s_decr = Data::Intern("decr");
Const* const  boyer::s_delete = Data::Intern("delete");
Const* const  boyer::s_divides = Data::Intern("divides");
Const* const  boyer::s_dsort = Data::Intern("dsort");
Const* const  boyer::s_eq = Data::Intern("eq");
Const* const  boyer::s_eqp = Data::Intern("eqp");
Const* const  boyer::s_equal = Data::Intern("equal");
Const* const  boyer::s_even1 = Data::Intern("even1");
Const* const  boyer::s_exec = Data::Intern("exec");
Const* const  boyer::s46 = Data::Intern("execution time is ");
Const* const  boyer::s_exp = Data::Intern("exp");
Const* const  boyer::s_f = Data::Intern("f");
Const* const  boyer::s_fact_ = Data::Intern("fact_");
Const* const  boyer::s_fact_loop = Data::Intern("fact_loop");
Const* const  boyer::s_fail = Data::Intern("fail");
Const* const  boyer::s_falsep = Data::Intern("falsep");
Const* const  boyer::s_falsify = Data::Intern("falsify");
Const* const  boyer::s_falsify1 = Data::Intern("falsify1");
Const* const  boyer::s_fix = Data::Intern("fix");
Const* const  boyer::s_flatten = Data::Intern("flatten");
Const* const  boyer::s_functor = Data::Intern("functor");
Const* const  boyer::s_gcd = Data::Intern("gcd");
Const* const  boyer::s_get = Data::Intern("get");
Const* const  boyer::s_go = Data::Intern("go");
Const* const  boyer::s_gopher = Data::Intern("gopher");
Const* const  boyer::s_greatereqp = Data::Intern("greatereqp");
Const* const  boyer::s_greatereqpr = Data::Intern("greatereqpr");
Const* const  boyer::s_greaterp = Data::Intern("greaterp");
Const* const  boyer::s_greatest_factor = Data::Intern("greatest_factor");
Const* const  boyer::s_if = Data::Intern("if");
Const* const  boyer::s_iff = Data::Intern("iff");
Const* const  boyer::s_implies = Data::Intern("implies");
Const* const  boyer::s_intersect = Data::Intern("intersect");
Const* const  boyer::s_is = Data::Intern("is");
Const* const  boyer::s_last = Data::Intern("last");
Const* const  boyer::s_length = Data::Intern("length");
Const* const  boyer::s_lesseqp = Data::Intern("lesseqp");
Const* const  boyer::s_lessp = Data::Intern("lessp");
Const* const  boyer::s_listp = Data::Intern("listp");
Const* const  boyer::s_mc_flatten = Data::Intern("mc_flatten");
Const* const  boyer::s_meaning = Data::Intern("meaning");
Const* const  boyer::s_myboyer_member = Data::Intern("myboyer_member");
Const* const  boyer::s_mylength = Data::Intern("mylength");
Const* const  boyer::s_myplus = Data::Intern("myplus");
Const* const  boyer::s_nlistp = Data::Intern("nlistp");
Const* const  boyer::s_normalize = Data::Intern("normalize");
Const* const  boyer::s_not = Data::Intern("not");
Const* const  boyer::s_nth = Data::Intern("nth");
Const* const  boyer::s_numberp = Data::Intern("numberp");
Const* const  boyer::s_odd = Data::Intern("odd");
Const* const  boyer::s_optimize = Data::Intern("optimize");
Const* const  boyer::s_or = Data::Intern("or");
Const* const  boyer::s_plus_fringe = Data::Intern("plus_fringe");
Const* const  boyer::s_plus_tree = Data::Intern("plus_tree");
Const* const  boyer::s_power_eval = Data::Intern("power_eval");
Const* const  boyer::s_power_rep = Data::Intern("power_rep");
Const* const  boyer::s_prime = Data::Intern("prime");
Const* const  boyer::s_prime1 = Data::Intern("prime1");
Const* const  boyer::s_prime_list = Data::Intern("prime_list");
Const* const  boyer::s_quotient = Data::Intern("quotient");
Const* const  boyer::s_remainder = Data::Intern("remainder");
Const* const  boyer::s_reverse = Data::Intern("reverse");
Const* const  boyer::s_reverse_ = Data::Intern("reverse_");
Const* const  boyer::s_reverse_loop = Data::Intern("reverse_loop");
Const* const  boyer::s_rewrite = Data::Intern("rewrite");
Const* const  boyer::s_rewrite_args = Data::Intern("rewrite_args");
Const* const  boyer::s_runtime = Data::Intern("runtime");
Const* const  boyer::s_samefringe = Data::Intern("samefringe");
Const* const  boyer::s_set = Data::Intern("set");
Const* const  boyer::s_sigma = Data::Intern("sigma");
Const* const  boyer::s_sort2 = Data::Intern("sort2");
Const* const  boyer::s_sort_lp = Data::Intern("sort_lp");
Const* const  boyer::s_statistics = Data::Intern("statistics");
Const* const  boyer::s_t = Data::Intern("t");
Const* const  boyer::s_tautology = Data::Intern("tautology");
Const* const  boyer::s_tautology_checker = Data::Intern("tautology_checker");
Const* const  boyer::s_tautologyp = Data::Intern("tautologyp");
Const* const  boyer::s_times = Data::Intern("times");
Const* const  boyer::s_times_list = Data::Intern("times_list");
Const* const  boyer::s_top = Data::Intern("top");
Const* const  boyer::s_true = Data::Intern("true");
Const* const  boyer::s_truep = Data::Intern("truep");
Const* const  boyer::s_unify = Data::Intern("unify");
Const* const  boyer::s_value = Data::Intern("value");
Const* const  boyer::s_wff = Data::Intern("wff");
Const* const  boyer::s_write = Data::Intern("write");
Const* const  boyer::s_x = Data::Intern("x");
Const* const  boyer::s_y = Data::Intern("y");
Const* const  boyer::s_zero = Data::Intern("zero");
Const* const  boyer::s_zerop = Data::Intern("zerop");
Int* const  boyer::posint0 = Data::Number(0LL);
Int* const  boyer::posint1 = Data::Number(1LL);
Int* const  boyer::posint2 = Data::Number(2LL);
Int* const  boyer::posint6 = Data::Number(6LL);
Operation* const  boyer::reg_go_0 = PredTable::Register("go",0, new pred_go_0());
Operation* const  boyer::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  boyer::reg_wff_1 = PredTable::Register("wff",1, new pred_wff_1());
Operation* const  boyer::reg_tautology_1 = PredTable::Register("tautology",1, new pred_tautology_1());
Operation* const  boyer::reg_tautology_3 = PredTable::Register("tautology",3, new pred_tautology_3());
Operation* const  boyer::reg_rewrite_2 = PredTable::Register("rewrite",2, new pred_rewrite_2());
Operation* const  boyer::reg_rewrite_args_3 = PredTable::Register("rewrite_args",3, new pred_rewrite_args_3());
Operation* const  boyer::reg_truep_2 = PredTable::Register("truep",2, new pred_truep_2());
Operation* const  boyer::reg_falsep_2 = PredTable::Register("falsep",2, new pred_falsep_2());
Operation* const  boyer::reg_boyer_member_2 = PredTable::Register("boyer_member",2, new pred_boyer_member_2());
Operation* const  boyer::reg_equal_2 = PredTable::Register("equal",2, new pred_equal_2());
Operation* const  boyer::reg_boyer_difference_3 = PredTable::Register("boyer_difference",3, new pred_boyer_difference_3());
Operation* const  boyer::reg_eq_3 = PredTable::Register("eq",3, new pred_eq_3());
Operation* const  boyer::reg_exp_3 = PredTable::Register("exp",3, new pred_exp_3());
Operation* const  boyer::reg_gcd_3 = PredTable::Register("gcd",3, new pred_gcd_3());
Operation* const  boyer::reg_mylength_2 = PredTable::Register("mylength",2, new pred_mylength_2());
Operation* const  boyer::reg_lessp_3 = PredTable::Register("lessp",3, new pred_lessp_3());
Operation* const  boyer::reg_meaning_3 = PredTable::Register("meaning",3, new pred_meaning_3());
Operation* const  boyer::reg_myboyer_member_3 = PredTable::Register("myboyer_member",3, new pred_myboyer_member_3());
Operation* const  boyer::reg_nth_3 = PredTable::Register("nth",3, new pred_nth_3());
Operation* const  boyer::reg_myplus_3 = PredTable::Register("myplus",3, new pred_myplus_3());
Operation* const  boyer::reg_power_eval_3 = PredTable::Register("power_eval",3, new pred_power_eval_3());
Operation* const  boyer::reg_quotient_3 = PredTable::Register("quotient",3, new pred_quotient_3());
Operation* const  boyer::reg_remainder_3 = PredTable::Register("remainder",3, new pred_remainder_3());
Operation* const  boyer::reg_reverse_loop_3 = PredTable::Register("reverse_loop",3, new pred_reverse_loop_3());
Operation* const  boyer::reg_times_3 = PredTable::Register("times",3, new pred_times_3());

	Operation* boyer::pred_go_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_go_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_go_0__1(mach));
	}

	Operation* boyer::pred_go_0::exec_pred_go_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	local_aregs[0] = boyer::s_runtime;
	local_aregs[1] = Data::F(boyer::s5,var1,Data::F(boyer::s5,var2,Const::Nil));
	local_aregs[2] = Data::F(boyer::s_wff,var3,Data::F(boyer::s_rewrite, { var3->Deref(), var4, Data::F(boyer::s_tautology, { var4->Deref(), Const::Nil, Const::Nil, Data::F(boyer::s_statistics,boyer::s_runtime,Data::F(boyer::s5,var5,Data::F(boyer::s5,var6,Const::Nil)),Data::F(boyer::s_write,boyer::s46,Data::F(boyer::s_write, { var6->Deref(), Data::F(boyer::s_write,boyer::s1,continuation) }))) }) }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(boyer::s_statistics->FindProc(2));
	}

	Operation* boyer::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* boyer::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = Data::F(boyer::s_rewrite, { var1->Deref(), var2, Data::F(boyer::s_tautology, { var2->Deref(), Const::Nil, Const::Nil, continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_wff_1::exec_static);
	}

	Operation* boyer::pred_wff_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_wff_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_wff_1__1(mach));
	}

	Operation* boyer::pred_wff_1::exec_pred_wff_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_implies,Data::F(boyer::s_and,Data::F(boyer::s_implies,var1,var2),Data::F(boyer::s_and,Data::F(boyer::s_implies, { var2->Deref(), var3 }),Data::F(boyer::s_and,Data::F(boyer::s_implies, { var3->Deref(), var4 }),Data::F(boyer::s_implies, { var4->Deref(), var5 })))),Data::F(boyer::s_implies, { var1->Deref(), var5->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(boyer::s_f,Data::F(boyer::s_myplus,Data::F(boyer::s_myplus,boyer::s_a,boyer::s_b),Data::F(boyer::s_myplus,boyer::s_c,boyer::s_zero)));
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(boyer::s_unify,Data::F(boyer::s_f,Data::F(boyer::s_times,Data::F(boyer::s_times,boyer::s_a,boyer::s_b),Data::F(boyer::s_myplus,boyer::s_c,boyer::s_d))),var2->Deref(),Data::F(boyer::s_unify,Data::F(boyer::s_f,Data::F(boyer::s_reverse,Data::F(boyer::s_append,Data::F(boyer::s_append,boyer::s_a,boyer::s_b),Const::Nil))),var3->Deref(),Data::F(boyer::s_unify,Data::F(boyer::s_equal,Data::F(boyer::s_myplus,boyer::s_a,boyer::s_b),Data::F(boyer::s_boyer_difference,boyer::s_x,boyer::s_y)),var4->Deref(),Data::F(boyer::s_unify,Data::F(boyer::s_lessp,Data::F(boyer::s_remainder,boyer::s_a,boyer::s_b),Data::F(boyer::s_boyer_member,boyer::s_a,Data::F(boyer::s_length,boyer::s_b))),var5->Deref(),continuation))));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation* boyer::pred_tautology_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_tautology_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_tautology_1__1(mach));
	}

	Operation* boyer::pred_tautology_1::exec_pred_tautology_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = Data::F(boyer::s_tautology, { var2->Deref(), Const::Nil, Const::Nil, continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_rewrite_2::exec_static);
	}

	Operation* boyer::pred_tautology_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_tautology_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_tautology_3__1(mach));
	}

	Operation* boyer::pred_tautology_3::exec_pred_tautology_3__1(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(boyer::s4,Data::F(boyer::s_truep, { var1->Deref(), var2->Deref() }),boyer::s_true);
	local_aregs[1] = Data::F(boyer::s7,Data::F(boyer::s4,Data::F(boyer::s_falsep, { var1->Deref(), var3->Deref() }),boyer::s_fail),Data::F(boyer::s4,Data::F(boyer::s8, { var1->Deref(), Data::F(boyer::s_if,var4,var5,var6) }),Data::F(boyer::s7,Data::F(boyer::s4,Data::F(boyer::s_truep, { var4->Deref(), var2->Deref() }),Data::F(boyer::s_tautology, { var5->Deref(), var2->Deref(), var3->Deref() })),Data::F(boyer::s7,Data::F(boyer::s4,Data::F(boyer::s_falsep, { var4->Deref(), var3->Deref() }),Data::F(boyer::s_tautology, { var6->Deref(), var2->Deref(), var3->Deref() })),Data::F(boyer::s2,Data::F(boyer::s_tautology, { var5->Deref(), Data::F(boyer::s5, { var4->Deref(), var2->Deref() }), var3->Deref() }),Data::F(boyer::s_tautology, { var6->Deref(), var2->Deref(), Data::F(boyer::s5, { var4->Deref(), var3->Deref() }) }))))));
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_or_2::exec_static);
	}

	Operation* boyer::pred_rewrite_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_rewrite_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_rewrite_2__1(mach));
	}

	Operation* boyer::pred_rewrite_2::exec_pred_rewrite_2__1(Prolog* mach) {
		mach->FillAlternative(pred_rewrite_2::exec_pred_rewrite_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(boyer::s_atomic->FindProc(1));
	}

	Operation* boyer::pred_rewrite_2::exec_pred_rewrite_2__2(Prolog* mach) {
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = var4;
	local_aregs[3] = Data::F(boyer::s_functor,var5,var3->Deref(),var4->Deref(),Data::F(boyer::s_rewrite_args, { var4->Deref(), var1->Deref(), var5->Deref(), Data::F(boyer::s_or,Data::F(boyer::s2,Data::F(boyer::s_equal, { var5->Deref(), var6 }),Data::F(boyer::s_rewrite, { var6->Deref(), var2->Deref() })),Data::F(boyer::s8, { var2->Deref(), var5->Deref() }),mach->HC(continuation)) }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(boyer::s_functor->FindProc(3));
	}

	Operation* boyer::pred_rewrite_args_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_rewrite_args_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_rewrite_args_3__1(mach));
	}

	Operation* boyer::pred_rewrite_args_3::exec_pred_rewrite_args_3__1(Prolog* mach) {
		mach->FillAlternative(pred_rewrite_args_3::exec_pred_rewrite_args_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(boyer::posint0,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_rewrite_args_3::exec_pred_rewrite_args_3__2(Prolog* mach) {
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
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = Data::F(boyer::s_arg, { var1->Deref(), var3->Deref(), var5, Data::F(boyer::s_rewrite, { var4->Deref(), var5->Deref(), Data::F(boyer::s_is,var6,Data::F(boyer::s3, { var1->Deref(), boyer::posint1 }),Data::F(boyer::s_rewrite_args, { var6->Deref(), var2->Deref(), var3->Deref(), continuation })) }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(boyer::s_arg->FindProc(3));
	}

	Operation* boyer::pred_truep_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_truep_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_truep_2__1(mach));
	}

	Operation* boyer::pred_truep_2::exec_pred_truep_2__1(Prolog* mach) {
		mach->FillAlternative(pred_truep_2::exec_pred_truep_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(boyer::s_t,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_truep_2::exec_pred_truep_2__2(Prolog* mach) {
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
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_boyer_member_2::exec_static);
	}

	Operation* boyer::pred_falsep_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_falsep_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_falsep_2__1(mach));
	}

	Operation* boyer::pred_falsep_2::exec_pred_falsep_2__1(Prolog* mach) {
		mach->FillAlternative(pred_falsep_2::exec_pred_falsep_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(boyer::s_f,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_falsep_2::exec_pred_falsep_2__2(Prolog* mach) {
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
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_boyer_member_2::exec_static);
	}

	Operation* boyer::pred_boyer_member_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_boyer_member_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_boyer_member_2__1(mach));
	}

	Operation* boyer::pred_boyer_member_2::exec_pred_boyer_member_2__1(Prolog* mach) {
		mach->FillAlternative(pred_boyer_member_2::exec_pred_boyer_member_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s5, { var1->Deref(), var2 }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_member_2::exec_pred_boyer_member_2__2(Prolog* mach) {
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
	if(!((areg1)->Unify(Data::F(boyer::s5,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_boyer_member_2::exec_static);
	}

	Operation* boyer::pred_equal_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_equal_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_equal_2__1(mach));
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__1(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_and,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if, { var1->Deref(), Data::F(boyer::s_if, { var2->Deref(), boyer::s_t, boyer::s_f }), boyer::s_f }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__2(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_append,Data::F(boyer::s_append,var1,var2),var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_append, { var1->Deref(), Data::F(boyer::s_append, { var2->Deref(), var3->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__3(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_assignment,var1,Data::F(boyer::s_append,var2,var3)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_assignedp, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_assignment, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_assignment, { var1->Deref(), var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__4(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_assume_false,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_cons,Data::F(boyer::s_cons, { var1->Deref(), boyer::s_f }),var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__5(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_assume_true,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_cons,Data::F(boyer::s_cons, { var1->Deref(), boyer::s_t }),var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__6(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_boolean,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_or,Data::F(boyer::s_equal, { var1->Deref(), boyer::s_t }),Data::F(boyer::s_equal, { var1->Deref(), boyer::s_f })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__7(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_car,Data::F(boyer::s_gopher,var1)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_listp, { var1->Deref() }),Data::F(boyer::s_car,Data::F(boyer::s_flatten, { var1->Deref() })),boyer::s_zero),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__8(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_compile,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_reverse,Data::F(boyer::s_codegen,Data::F(boyer::s_optimize, { var1->Deref() }),Const::Nil)),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__9(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_count_list,var1,Data::F(boyer::s_sort_lp,var2,var3)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_myplus,Data::F(boyer::s_count_list, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_count_list, { var1->Deref(), var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__10(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_countps_,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_countps_loop, { var1->Deref(), var2->Deref(), boyer::s_zero }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__11(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_boyer_difference,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_boyer_difference_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__12(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_divides,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_zerop,Data::F(boyer::s_remainder, { var2->Deref(), var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__13(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_dsort,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_sort2, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__14(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_eqp,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_equal,Data::F(boyer::s_fix, { var1->Deref() }),Data::F(boyer::s_fix, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__15(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_equal,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_eq_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__16(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_even1,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_zerop, { var1->Deref() }),boyer::s_t,Data::F(boyer::s_odd,Data::F(boyer::s_decr, { var1->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__17(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_exec,Data::F(boyer::s_append,var1,var2),var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_exec, { var2->Deref(), Data::F(boyer::s_exec, { var1->Deref(), var3->Deref(), var4->Deref() }), var4->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__18(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_exp,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_exp_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__19(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__20);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_fact_,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_fact_loop, { var1->Deref(), boyer::posint1 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__20(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_falsify,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_falsify1,Data::F(boyer::s_normalize, { var1->Deref() }),Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__21(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_fix,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_numberp, { var1->Deref() }),var1->Deref(),boyer::s_zero),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__22(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__23);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_flatten,Data::F(boyer::s_cdr,Data::F(boyer::s_gopher,var1))),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_listp, { var1->Deref() }),Data::F(boyer::s_cdr,Data::F(boyer::s_flatten, { var1->Deref() })),Data::F(boyer::s_cons,boyer::s_zero,Const::Nil)),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__23(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_gcd,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_gcd_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__24(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_get,var1,Data::F(boyer::s_set,var2,var3,var4)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_eqp, { var1->Deref(), var2->Deref() }),var3->Deref(),Data::F(boyer::s_get, { var1->Deref(), var4->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__25(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__26);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_greatereqp,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_not,Data::F(boyer::s_lessp, { var1->Deref(), var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__26(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__27);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_greatereqpr,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_not,Data::F(boyer::s_lessp, { var1->Deref(), var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__27(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__28);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_greaterp,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_lessp, { var2->Deref(), var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__28(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__29);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_if,var1,var2,var3),var4,var5),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if, { var1->Deref(), Data::F(boyer::s_if, { var2->Deref(), var4->Deref(), var5->Deref() }), Data::F(boyer::s_if, { var3->Deref(), var4->Deref(), var5->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__29(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__30);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_iff,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_implies, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_implies, { var2->Deref(), var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__30(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__31);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_implies,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if, { var1->Deref(), Data::F(boyer::s_if, { var2->Deref(), boyer::s_t, boyer::s_f }), boyer::s_t }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__31(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__32);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_last,Data::F(boyer::s_append,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_listp, { var2->Deref() }),Data::F(boyer::s_last, { var2->Deref() }),Data::F(boyer::s_if,Data::F(boyer::s_listp, { var1->Deref() }),Data::F(boyer::s_cons,Data::F(boyer::s_car,Data::F(boyer::s_last, { var1->Deref() }))),var2->Deref())),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__32(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__33);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_length,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_mylength_2::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__33(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__34);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_lesseqp,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_not,Data::F(boyer::s_lessp, { var2->Deref(), var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__34(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__35);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_lessp,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_lessp_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__35(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__36);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_listp,Data::F(boyer::s_gopher,var1)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_listp, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__36(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__37);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_mc_flatten,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_append,Data::F(boyer::s_flatten, { var1->Deref() }),var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__37(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__38);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_meaning,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_meaning_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__38(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__39);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_boyer_member,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_myboyer_member_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__39(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__40);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_not,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if, { var1->Deref(), boyer::s_f, boyer::s_t }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__40(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__41);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_nth,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_nth_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__41(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__42);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_numberp,Data::F(boyer::s_greatest_factor,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_not,Data::F(boyer::s_and,Data::F(boyer::s_or,Data::F(boyer::s_zerop, { var2->Deref() }),Data::F(boyer::s_equal, { var2->Deref(), boyer::posint1 })),Data::F(boyer::s_not,Data::F(boyer::s_numberp, { var1->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__42(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__43);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_or,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_if, { var1->Deref(), boyer::s_t, Data::F(boyer::s_if, { var2->Deref(), boyer::s_t, boyer::s_f }), boyer::s_f }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__43(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__44);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_myplus_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__44(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__45);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_power_eval,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_power_eval_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__45(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__46);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_prime,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_zerop, { var1->Deref() })),Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_equal, { var1->Deref(), Data::F(boyer::s_add1,boyer::s_zero) })),Data::F(boyer::s_prime1, { var1->Deref(), Data::F(boyer::s_decr, { var1->Deref() }) }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__46(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__47);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_prime_list,Data::F(boyer::s_append,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_prime_list, { var1->Deref() }),Data::F(boyer::s_prime_list, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__47(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__48);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_quotient,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_quotient_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__48(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__49);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_remainder,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_remainder_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__49(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__50);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_reverse_,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_reverse_loop, { var1->Deref(), Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__50(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__51);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_reverse,Data::F(boyer::s_append,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_append,Data::F(boyer::s_reverse, { var2->Deref() }),Data::F(boyer::s_reverse, { var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__51(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__52);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_reverse_loop,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_reverse_loop_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__52(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__53);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_samefringe,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_equal,Data::F(boyer::s_flatten, { var1->Deref() }),Data::F(boyer::s_flatten, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__53(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__54);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_sigma,boyer::s_zero,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_quotient,Data::F(boyer::s_times, { var1->Deref(), Data::F(boyer::s_add1, { var1->Deref() }) }),boyer::posint2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__54(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__55);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_sort2,Data::F(boyer::s_delete,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_delete, { var1->Deref(), Data::F(boyer::s_sort2, { var2->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__55(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__56);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_tautology_checker,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_tautologyp,Data::F(boyer::s_normalize, { var1->Deref() }),Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__56(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__57);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_times_3::exec_static);
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__57(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__58);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times_list,Data::F(boyer::s_append,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_times,Data::F(boyer::s_times_list, { var1->Deref() }),Data::F(boyer::s_times_list, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__58(Prolog* mach) {
		mach->FillAlternative(pred_equal_2::exec_pred_equal_2__59);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_value,Data::F(boyer::s_normalize,var1),var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_value, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_equal_2::exec_pred_equal_2__59(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_zerop,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_or,Data::F(boyer::s_equal, { var1->Deref(), boyer::s_zero }),Data::F(boyer::s_not,Data::F(boyer::s_numberp, { var1->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_difference_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_boyer_difference_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_boyer_difference_3__1(mach));
	}

	Operation* boyer::pred_boyer_difference_3::exec_pred_boyer_difference_3__1(Prolog* mach) {
		mach->FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_difference_3::exec_pred_boyer_difference_3__2(Prolog* mach) {
		mach->FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_fix, { var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_difference_3::exec_pred_boyer_difference_3__3(Prolog* mach) {
		mach->FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_fix, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_difference_3::exec_pred_boyer_difference_3__4(Prolog* mach) {
		mach->FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_myplus, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_boyer_difference, { var2->Deref(), var3->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_difference_3::exec_pred_boyer_difference_3__5(Prolog* mach) {
		mach->FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,Data::F(boyer::s_myplus,var2,var3)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus, { var1->Deref(), var3->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_difference_3::exec_pred_boyer_difference_3__6(Prolog* mach) {
		mach->FillAlternative(pred_boyer_difference_3::exec_pred_boyer_difference_3__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_add1,Data::F(boyer::s_myplus,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_add1, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_boyer_difference_3::exec_pred_boyer_difference_3__7(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_add1,Data::F(boyer::s_add1,var1)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_fix, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_eq_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_eq_3__1(mach));
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__1(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_zerop, { var1->Deref() }),Data::F(boyer::s_zerop, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__2(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_myplus, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_equal,Data::F(boyer::s_fix, { var2->Deref() }),Data::F(boyer::s_fix, { var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__3(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_boyer_difference,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_not,Data::F(boyer::s_lessp, { var2->Deref(), var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__4(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__5);
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
	if(!((areg1)->Unify(Data::F(boyer::s_boyer_difference, { var1->Deref(), var2 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_numberp, { var1->Deref() }),Data::F(boyer::s_and,Data::F(boyer::s_or,Data::F(boyer::s_equal, { var1->Deref(), boyer::s_zero }),Data::F(boyer::s_zerop, { var2->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__5(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_or,Data::F(boyer::s_zerop, { var1->Deref() }),Data::F(boyer::s_zerop, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__6(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_append,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_append, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_equal, { var2->Deref(), var3->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__7(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_flatten,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_cons,var2,Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_nlistp, { var1->Deref() }),Data::F(boyer::s_equal, { var1->Deref(), var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__8(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_greatest_factor,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_or,Data::F(boyer::s_zerop, { var2->Deref() }),Data::F(boyer::s_equal, { var2->Deref(), boyer::posint1 })),Data::F(boyer::s_equal, { var1->Deref(), boyer::s_zero })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__9(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_greatest_factor,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_equal, { var1->Deref(), boyer::posint1 }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__10(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__11);
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
	if(!((areg1)->Unify(Data::F(boyer::s_times,var2,var1->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_numberp, { var1->Deref() }),Data::F(boyer::s_or,Data::F(boyer::s_equal, { var1->Deref(), boyer::s_zero }),Data::F(boyer::s_equal, { var2->Deref(), boyer::posint1 }))),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__11(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__12);
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
	if(!((areg1)->Unify(Data::F(boyer::s_times, { var1->Deref(), var2 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_or,Data::F(boyer::s_equal, { var1->Deref(), boyer::s_zero }),Data::F(boyer::s_and,Data::F(boyer::s_numberp, { var1->Deref() }),Data::F(boyer::s_equal, { var2->Deref(), boyer::posint1 }))),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__12(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_equal, { var1->Deref(), boyer::s_zero })),Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_equal, { var2->Deref(), boyer::s_zero })),Data::F(boyer::s_and,Data::F(boyer::s_numberp, { var1->Deref() }),Data::F(boyer::s_and,Data::F(boyer::s_numberp, { var2->Deref() }),Data::F(boyer::s_and,Data::F(boyer::s_equal,Data::F(boyer::s_decr, { var1->Deref() }),boyer::s_zero),Data::F(boyer::s_equal,Data::F(boyer::s_decr, { var2->Deref() }),boyer::s_zero)))))),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__13(Prolog* mach) {
		mach->FillAlternative(pred_eq_3::exec_pred_eq_3__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_boyer_difference,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_boyer_difference,var3,var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_lessp, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_not,Data::F(boyer::s_lessp, { var2->Deref(), var3->Deref() })),Data::F(boyer::s_if,Data::F(boyer::s_lessp, { var3->Deref(), var2->Deref() }),Data::F(boyer::s_not,Data::F(boyer::s_lessp, { var2->Deref(), var1->Deref() })),Data::F(boyer::s_equal,Data::F(boyer::s_fix, { var1->Deref() }),Data::F(boyer::s_fix, { var3->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_eq_3::exec_pred_eq_3__14(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_lessp,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_lessp, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_equal,boyer::s_t,var3->Deref()),Data::F(boyer::s_equal,boyer::s_f,var3->Deref())),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_exp_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_exp_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_exp_3__1(mach));
	}

	Operation* boyer::pred_exp_3::exec_pred_exp_3__1(Prolog* mach) {
		mach->FillAlternative(pred_exp_3::exec_pred_exp_3__2);
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
	if(!((areg1)->Unify(Data::F(boyer::s_myplus,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_times,Data::F(boyer::s_exp, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_exp, { var1->Deref(), var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_exp_3::exec_pred_exp_3__2(Prolog* mach) {
		mach->RemoveChoice();
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
	if(!((areg1)->Unify(Data::F(boyer::s_times,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_exp,Data::F(boyer::s_exp, { var1->Deref(), var2->Deref() }),var3->Deref()),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_gcd_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_gcd_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_gcd_3__1(mach));
	}

	Operation* boyer::pred_gcd_3::exec_pred_gcd_3__1(Prolog* mach) {
		mach->FillAlternative(pred_gcd_3::exec_pred_gcd_3__2);
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
	if(!((areg2)->Unify(Data::F(boyer::s_gcd, { var2->Deref(), var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_gcd_3::exec_pred_gcd_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_times,var3,var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_times, { var2->Deref(), Data::F(boyer::s_gcd, { var1->Deref(), var3->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_mylength_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_mylength_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_mylength_2__1(mach));
	}

	Operation* boyer::pred_mylength_2::exec_pred_mylength_2__1(Prolog* mach) {
		mach->FillAlternative(pred_mylength_2::exec_pred_mylength_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_reverse,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_length, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_mylength_2::exec_pred_mylength_2__2(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(boyer::s_cons,var1,Data::F(boyer::s_cons,var2,Data::F(boyer::s_cons,var3,Data::F(boyer::s_cons,var4,Data::F(boyer::s_cons,var5,Data::F(boyer::s_cons,var6,var7)))))),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_myplus,boyer::posint6,Data::F(boyer::s_length, { var7->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_lessp_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_lessp_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lessp_3__1(mach));
	}

	Operation* boyer::pred_lessp_3::exec_pred_lessp_3__1(Prolog* mach) {
		mach->FillAlternative(pred_lessp_3::exec_pred_lessp_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_remainder,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_not,Data::F(boyer::s_zerop, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_lessp_3::exec_pred_lessp_3__2(Prolog* mach) {
		mach->FillAlternative(pred_lessp_3::exec_pred_lessp_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_quotient,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_zerop, { var1->Deref() })),Data::F(boyer::s_or,Data::F(boyer::s_zerop, { var2->Deref() }),Data::F(boyer::s_not,Data::F(boyer::s_equal, { var2->Deref(), boyer::posint1 })))),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_lessp_3::exec_pred_lessp_3__3(Prolog* mach) {
		mach->FillAlternative(pred_lessp_3::exec_pred_lessp_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_remainder,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_zerop, { var2->Deref() })),Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_zerop, { var1->Deref() })),Data::F(boyer::s_not,Data::F(boyer::s_lessp, { var1->Deref(), var2->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_lessp_3::exec_pred_lessp_3__4(Prolog* mach) {
		mach->FillAlternative(pred_lessp_3::exec_pred_lessp_3__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_myplus, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_lessp, { var2->Deref(), var3->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_lessp_3::exec_pred_lessp_3__5(Prolog* mach) {
		mach->FillAlternative(pred_lessp_3::exec_pred_lessp_3__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_times,var3,var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_not,Data::F(boyer::s_zerop, { var2->Deref() })),Data::F(boyer::s_lessp, { var1->Deref(), var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_lessp_3::exec_pred_lessp_3__6(Prolog* mach) {
		mach->FillAlternative(pred_lessp_3::exec_pred_lessp_3__7);
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
	if(!((areg1)->Unify(Data::F(boyer::s_myplus,var2,var1->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_not,Data::F(boyer::s_zerop, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_lessp_3::exec_pred_lessp_3__7(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_length,Data::F(boyer::s_delete,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_length, { var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_boyer_member, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_meaning_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_meaning_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_meaning_3__1(mach));
	}

	Operation* boyer::pred_meaning_3::exec_pred_meaning_3__1(Prolog* mach) {
		mach->FillAlternative(pred_meaning_3::exec_pred_meaning_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_plus_tree,Data::F(boyer::s_append,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus,Data::F(boyer::s_meaning,Data::F(boyer::s_plus_tree, { var1->Deref() }),var3->Deref()),Data::F(boyer::s_meaning,Data::F(boyer::s_plus_tree, { var2->Deref() }),var3->Deref())),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_meaning_3::exec_pred_meaning_3__2(Prolog* mach) {
		mach->FillAlternative(pred_meaning_3::exec_pred_meaning_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_plus_tree,Data::F(boyer::s_plus_fringe,var1)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_fix,Data::F(boyer::s_meaning, { var1->Deref(), var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_meaning_3::exec_pred_meaning_3__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_plus_tree,Data::F(boyer::s_delete,var1,var2)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_boyer_member, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_boyer_difference,Data::F(boyer::s_meaning,Data::F(boyer::s_plus_tree, { var2->Deref() }),var3->Deref()),Data::F(boyer::s_meaning, { var1->Deref(), var3->Deref() })),Data::F(boyer::s_meaning,Data::F(boyer::s_plus_tree, { var2->Deref() }),var3->Deref())),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_myboyer_member_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_myboyer_member_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_myboyer_member_3__1(mach));
	}

	Operation* boyer::pred_myboyer_member_3::exec_pred_myboyer_member_3__1(Prolog* mach) {
		mach->FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__2);
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
	if(!((areg1)->Unify(Data::F(boyer::s_append,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_or,Data::F(boyer::s_boyer_member, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_boyer_member, { var1->Deref(), var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_myboyer_member_3::exec_pred_myboyer_member_3__2(Prolog* mach) {
		mach->FillAlternative(pred_myboyer_member_3::exec_pred_myboyer_member_3__3);
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
	if(!((areg1)->Unify(Data::F(boyer::s_reverse,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_boyer_member, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_myboyer_member_3::exec_pred_myboyer_member_3__3(Prolog* mach) {
		mach->RemoveChoice();
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
	if(!((areg1)->Unify(Data::F(boyer::s_intersect,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_and,Data::F(boyer::s_boyer_member, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_boyer_member, { var1->Deref(), var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_nth_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_nth_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_nth_3__1(mach));
	}

	Operation* boyer::pred_nth_3::exec_pred_nth_3__1(Prolog* mach) {
		mach->FillAlternative(pred_nth_3::exec_pred_nth_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_nth_3::exec_pred_nth_3__2(Prolog* mach) {
		mach->FillAlternative(pred_nth_3::exec_pred_nth_3__3);
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
	if(!((areg2)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_zerop, { var1->Deref() }),Const::Nil,boyer::s_zero),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_nth_3::exec_pred_nth_3__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_append,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_append,Data::F(boyer::s_nth, { var1->Deref(), var3->Deref() }),Data::F(boyer::s_nth, { var2->Deref(), Data::F(boyer::s_boyer_difference, { var3->Deref(), Data::F(boyer::s_length, { var1->Deref() }) }) })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_myplus_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_myplus_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_myplus_3__1(mach));
	}

	Operation* boyer::pred_myplus_3::exec_pred_myplus_3__1(Prolog* mach) {
		mach->FillAlternative(pred_myplus_3::exec_pred_myplus_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus, { var1->Deref(), Data::F(boyer::s_myplus, { var2->Deref(), var3->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_myplus_3::exec_pred_myplus_3__2(Prolog* mach) {
		mach->FillAlternative(pred_myplus_3::exec_pred_myplus_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_remainder,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(boyer::s_times, { var2->Deref(), Data::F(boyer::s_quotient, { var1->Deref(), var2->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_fix, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_myplus_3::exec_pred_myplus_3__3(Prolog* mach) {
		mach->RemoveChoice();
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
	if(!((areg1)->Unify(Data::F(boyer::s_add1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_numberp, { var2->Deref() }),Data::F(boyer::s_add1,Data::F(boyer::s_myplus, { var1->Deref(), var2->Deref() })),Data::F(boyer::s_add1, { var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_power_eval_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_power_eval_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_power_eval_3__1(mach));
	}

	Operation* boyer::pred_power_eval_3::exec_pred_power_eval_3__1(Prolog* mach) {
		mach->FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_big_plus1,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus,Data::F(boyer::s_power_eval, { var1->Deref(), var3->Deref() }),var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_power_eval_3::exec_pred_power_eval_3__2(Prolog* mach) {
		mach->FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_power_rep,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_fix, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_power_eval_3::exec_pred_power_eval_3__3(Prolog* mach) {
		mach->FillAlternative(pred_power_eval_3::exec_pred_power_eval_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_big_plus,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus, { var3->Deref(), Data::F(boyer::s_myplus,Data::F(boyer::s_power_eval, { var1->Deref(), var4->Deref() }),Data::F(boyer::s_power_eval, { var2->Deref(), var4->Deref() })) }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_power_eval_3::exec_pred_power_eval_3__4(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_big_plus,Data::F(boyer::s_power_rep,var1,var2),Data::F(boyer::s_power_rep,var3,var2->Deref()),boyer::s_zero,var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus, { var1->Deref(), var3->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_quotient_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_quotient_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_quotient_3__1(mach));
	}

	Operation* boyer::pred_quotient_3::exec_pred_quotient_3__1(Prolog* mach) {
		mach->FillAlternative(pred_quotient_3::exec_pred_quotient_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_myplus,var1,Data::F(boyer::s_myplus, { var1->Deref(), var2 })),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus, { var1->Deref(), Data::F(boyer::s_quotient, { var2->Deref(), boyer::posint2 }) }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_quotient_3::exec_pred_quotient_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_zerop, { var1->Deref() }),boyer::s_zero,Data::F(boyer::s_fix, { var2->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_remainder_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_remainder_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_remainder_3__1(mach));
	}

	Operation* boyer::pred_remainder_3::exec_pred_remainder_3__1(Prolog* mach) {
		mach->FillAlternative(pred_remainder_3::exec_pred_remainder_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(boyer::posint1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_remainder_3::exec_pred_remainder_3__2(Prolog* mach) {
		mach->FillAlternative(pred_remainder_3::exec_pred_remainder_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_remainder_3::exec_pred_remainder_3__3(Prolog* mach) {
		mach->FillAlternative(pred_remainder_3::exec_pred_remainder_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_remainder_3::exec_pred_remainder_3__4(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(boyer::s_zero,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_reverse_loop_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_reverse_loop_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_reverse_loop_3__1(mach));
	}

	Operation* boyer::pred_reverse_loop_3::exec_pred_reverse_loop_3__1(Prolog* mach) {
		mach->FillAlternative(pred_reverse_loop_3::exec_pred_reverse_loop_3__2);
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
	if(!((areg2)->Unify(Data::F(boyer::s_append,Data::F(boyer::s_reverse, { var1->Deref() }),var2->Deref()),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_reverse_loop_3::exec_pred_reverse_loop_3__2(Prolog* mach) {
		mach->RemoveChoice();
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
	if(!((areg2)->Unify(Data::F(boyer::s_reverse, { var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_times_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* boyer::pred_times_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_times_3__1(mach));
	}

	Operation* boyer::pred_times_3::exec_pred_times_3__1(Prolog* mach) {
		mach->FillAlternative(pred_times_3::exec_pred_times_3__2);
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
	if(!((areg1)->Unify(Data::F(boyer::s_myplus,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_myplus,Data::F(boyer::s_times, { var1->Deref(), var2->Deref() }),Data::F(boyer::s_times, { var1->Deref(), var3->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_times_3::exec_pred_times_3__2(Prolog* mach) {
		mach->FillAlternative(pred_times_3::exec_pred_times_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(boyer::s_times,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_times, { var1->Deref(), Data::F(boyer::s_times, { var2->Deref(), var3->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_times_3::exec_pred_times_3__3(Prolog* mach) {
		mach->FillAlternative(pred_times_3::exec_pred_times_3__4);
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
	if(!((areg1)->Unify(Data::F(boyer::s_boyer_difference,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_boyer_difference,Data::F(boyer::s_times, { var2->Deref(), var1->Deref() }),Data::F(boyer::s_times, { var3->Deref(), var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* boyer::pred_times_3::exec_pred_times_3__4(Prolog* mach) {
		mach->RemoveChoice();
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
	if(!((areg1)->Unify(Data::F(boyer::s_add1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(boyer::s_if,Data::F(boyer::s_numberp, { var2->Deref() }),Data::F(boyer::s_myplus, { var1->Deref(), Data::F(boyer::s_times, { var1->Deref(), var2->Deref() }) }),Data::F(boyer::s_fix, { var1->Deref() })),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}
}
