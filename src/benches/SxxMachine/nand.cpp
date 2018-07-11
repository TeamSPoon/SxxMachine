using namespace std;

#include "nand.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../bootlib/SxxMachine/sxx_meta.h"
#include "../../bootlib/SxxMachine/sxx_library.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  nand::s_cut = Data::Intern("cut");
Const* const  nand::s1 = Data::Intern(" inputs:   ");
Const* const  nand::s2 = Data::Intern("+");
Const* const  nand::s3 = Data::Intern(",");
Const* const  nand::s4 = Data::Intern("->");
Const* const  nand::s5 = Data::Intern(".");
Const* const  nand::s6 = Data::Intern(":-");
Const* const  nand::s7 = Data::Intern(";");
Const* const  nand::s8 = Data::Intern("=");
Const* const  nand::s9 = Data::Intern(">=");
Const* const  nand::s_access = Data::Intern("access");
Const* const  nand::s_add_necessary_functions = Data::Intern("add_necessary_functions");
Const* const  nand::s_best_vector = Data::Intern("best_vector");
Const* const  nand::s_bound = Data::Intern("bound");
Const* const  nand::s_call = Data::Intern("call");
Const* const  nand::s_conceivable_inputs = Data::Intern("conceivable_inputs");
Const* const  nand::s_cov = Data::Intern("cov");
Const* const  nand::s_cover_type1 = Data::Intern("cover_type1");
Const* const  nand::s_cover_type2 = Data::Intern("cover_type2");
Const* const  nand::s_cover_vector = Data::Intern("cover_vector");
Const* const  nand::s_dummy = Data::Intern("dummy");
Const* const  nand::s_erase = Data::Intern("erase");
Const* const  nand::s_exclude_if_vector_in_false_set = Data::Intern("exclude_if_vector_in_false_set");
Const* const  nand::s_exf = Data::Intern("exf");
Const* const  nand::s_exmcf = Data::Intern("exmcf");
Const* const  nand::s_exp = Data::Intern("exp");
Const* const  nand::s_fail = Data::Intern("fail");
Const* const  nand::s_false_set = Data::Intern("false_set");
Const* const  nand::s_fcn = Data::Intern("fcn");
Const* const  nand::s_function = Data::Intern("function");
Const* const  nand::s_function_number = Data::Intern("function_number");
Const* const  nand::s_function_type = Data::Intern("function_type");
Const* const  nand::s33 = Data::Intern("gate #");
Const* const  nand::s_immediate_predecessors = Data::Intern("immediate_predecessors");
Const* const  nand::s_immediate_successors = Data::Intern("immediate_successors");
Const* const  nand::s_init_state = Data::Intern("init_state");
Const* const  nand::s_is = Data::Intern("is");
Const* const  nand::s_main = Data::Intern("main");
Const* const  nand::s_max_type = Data::Intern("max_type");
Const* const  nand::s_mcf = Data::Intern("mcf");
Const* const  nand::s_new_function_CIs = Data::Intern("new_function_CIs");
Const* const  nand::s_nf = Data::Intern("nf");
Const* const  nand::s_nl = Data::Intern("nl");
Const* const  nand::s_not = Data::Intern("not");
Const* const  nand::s_or = Data::Intern("or");
Const* const  nand::s_predecessors = Data::Intern("predecessors");
Const* const  nand::s_recorda = Data::Intern("recorda");
Const* const  nand::s_recorded = Data::Intern("recorded");
Const* const  nand::s_search = Data::Intern("search");
Const* const  nand::s_select_vector = Data::Intern("select_vector");
Const* const  nand::s_set = Data::Intern("set");
Const* const  nand::s_set_difference = Data::Intern("set_difference");
Const* const  nand::s_set_intersection = Data::Intern("set_intersection");
Const* const  nand::s_set_member = Data::Intern("set_member");
Const* const  nand::s_set_subset = Data::Intern("set_subset");
Const* const  nand::s_set_union = Data::Intern("set_union");
Const* const  nand::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  nand::s_smallerthan = Data::Intern("smallerthan");
Const* const  nand::s_successors = Data::Intern("successors");
Const* const  nand::s_test_bounds = Data::Intern("test_bounds");
Const* const  nand::s_top = Data::Intern("top");
Const* const  nand::s_true = Data::Intern("true");
Const* const  nand::s_true_set = Data::Intern("true_set");
Const* const  nand::s_type_order = Data::Intern("type_order");
Const* const  nand::s_unify = Data::Intern("unify");
Const* const  nand::s_update_bounds = Data::Intern("update_bounds");
Const* const  nand::s_update_circuit = Data::Intern("update_circuit");
Const* const  nand::s_var = Data::Intern("var");
Const* const  nand::s_vector_cover_type = Data::Intern("vector_cover_type");
Const* const  nand::s_vector_types = Data::Intern("vector_types");
Const* const  nand::s_write = Data::Intern("write");
Const* const  nand::s_write_gates = Data::Intern("write_gates");
Int* const  nand::posint0 = Data::Number(0LL);
Int* const  nand::posint1 = Data::Number(1LL);
Int* const  nand::posint2 = Data::Number(2LL);
Int* const  nand::posint3 = Data::Number(3LL);
Int* const  nand::posint4 = Data::Number(4LL);
Int* const  nand::posint5 = Data::Number(5LL);
Int* const  nand::posint6 = Data::Number(6LL);
Int* const  nand::posint7 = Data::Number(7LL);
Int* const  nand::posint8 = Data::Number(8LL);
Int* const  nand::posint9 = Data::Number(9LL);
Int* const  nand::posint10 = Data::Number(10LL);
Int* const  nand::posint11 = Data::Number(11LL);
Int* const  nand::posint12 = Data::Number(12LL);
Int* const  nand::posint13 = Data::Number(13LL);
Int* const  nand::posint14 = Data::Number(14LL);
Int* const  nand::posint15 = Data::Number(15LL);
Int* const  nand::posint16 = Data::Number(16LL);
Int* const  nand::posint17 = Data::Number(17LL);
Int* const  nand::posint18 = Data::Number(18LL);
Int* const  nand::posint19 = Data::Number(19LL);
Int* const  nand::posint20 = Data::Number(20LL);
Int* const  nand::posint21 = Data::Number(21LL);
Int* const  nand::posint22 = Data::Number(22LL);
Int* const  nand::posint23 = Data::Number(23LL);
Int* const  nand::posint24 = Data::Number(24LL);
Int* const  nand::posint25 = Data::Number(25LL);
Int* const  nand::posint26 = Data::Number(26LL);
Int* const  nand::posint27 = Data::Number(27LL);
Int* const  nand::posint28 = Data::Number(28LL);
Int* const  nand::posint29 = Data::Number(29LL);
Int* const  nand::posint30 = Data::Number(30LL);
Int* const  nand::posint31 = Data::Number(31LL);
Int* const  nand::posint100 = Data::Number(100LL);
Int* const  nand::posint999 = Data::Number(999LL);
Operation* const  nand::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  nand::reg_main_1 = PredTable::Register("main",1, new pred_main_1());
Operation* const  nand::reg_init_state_4 = PredTable::Register("init_state",4, new pred_init_state_4());
Operation* const  nand::reg_search_3 = PredTable::Register("search",3, new pred_search_3());
Operation* const  nand::reg_select_vector_5 = PredTable::Register("select_vector",5, new pred_select_vector_5());
Operation* const  nand::reg_select_vector_12 = PredTable::Register("select_vector",12, new pred_select_vector_12());
Operation* const  nand::reg_select_vector_13 = PredTable::Register("select_vector",13, new pred_select_vector_13());
Operation* const  nand::reg_vector_cover_type_6 = PredTable::Register("vector_cover_type",6, new pred_vector_cover_type_6());
Operation* const  nand::reg_cover_type1_7 = PredTable::Register("cover_type1",7, new pred_cover_type1_7());
Operation* const  nand::reg_cover_type2_9 = PredTable::Register("cover_type2",9, new pred_cover_type2_9());
Operation* const  nand::reg_best_vector_12 = PredTable::Register("best_vector",12, new pred_best_vector_12());
Operation* const  nand::reg_max_type_3 = PredTable::Register("max_type",3, new pred_max_type_3());
Operation* const  nand::reg_type_order_2 = PredTable::Register("type_order",2, new pred_type_order_2());
Operation* const  nand::reg_cover_vector_7 = PredTable::Register("cover_vector",7, new pred_cover_vector_7());
Operation* const  nand::reg_vector_types_1 = PredTable::Register("vector_types",1, new pred_vector_types_1());
Operation* const  nand::reg_cover_vector_10 = PredTable::Register("cover_vector",10, new pred_cover_vector_10());
Operation* const  nand::reg_update_circuit_6 = PredTable::Register("update_circuit",6, new pred_update_circuit_6());
Operation* const  nand::reg_exclude_if_vector_in_false_set_4 = PredTable::Register("exclude_if_vector_in_false_set",4, new pred_exclude_if_vector_in_false_set_4());
Operation* const  nand::reg_add_necessary_functions_5 = PredTable::Register("add_necessary_functions",5, new pred_add_necessary_functions_5());
Operation* const  nand::reg_add_necessary_functions_6 = PredTable::Register("add_necessary_functions",6, new pred_add_necessary_functions_6());
Operation* const  nand::reg_new_function_CIs_5 = PredTable::Register("new_function_CIs",5, new pred_new_function_CIs_5());
Operation* const  nand::reg_new_function_CIs_7 = PredTable::Register("new_function_CIs",7, new pred_new_function_CIs_7());
Operation* const  nand::reg_function_type_6 = PredTable::Register("function_type",6, new pred_function_type_6());
Operation* const  nand::reg_test_bounds_3 = PredTable::Register("test_bounds",3, new pred_test_bounds_3());
Operation* const  nand::reg_update_bounds_3 = PredTable::Register("update_bounds",3, new pred_update_bounds_3());
Operation* const  nand::reg_set_2 = PredTable::Register("set",2, new pred_set_2());
Operation* const  nand::reg_access_2 = PredTable::Register("access",2, new pred_access_2());
Operation* const  nand::reg_write_gates_1 = PredTable::Register("write_gates",1, new pred_write_gates_1());
Operation* const  nand::reg_function_3 = PredTable::Register("function",3, new pred_function_3());
Operation* const  nand::reg_function_number_2 = PredTable::Register("function_number",2, new pred_function_number_2());
Operation* const  nand::reg_true_set_2 = PredTable::Register("true_set",2, new pred_true_set_2());
Operation* const  nand::reg_false_set_2 = PredTable::Register("false_set",2, new pred_false_set_2());
Operation* const  nand::reg_conceivable_inputs_2 = PredTable::Register("conceivable_inputs",2, new pred_conceivable_inputs_2());
Operation* const  nand::reg_immediate_predecessors_2 = PredTable::Register("immediate_predecessors",2, new pred_immediate_predecessors_2());
Operation* const  nand::reg_immediate_successors_2 = PredTable::Register("immediate_successors",2, new pred_immediate_successors_2());
Operation* const  nand::reg_predecessors_2 = PredTable::Register("predecessors",2, new pred_predecessors_2());
Operation* const  nand::reg_successors_2 = PredTable::Register("successors",2, new pred_successors_2());
Operation* const  nand::reg_set_union_3 = PredTable::Register("set_union",3, new pred_set_union_3());
Operation* const  nand::reg_set_intersection_3 = PredTable::Register("set_intersection",3, new pred_set_intersection_3());
Operation* const  nand::reg_set_difference_3 = PredTable::Register("set_difference",3, new pred_set_difference_3());
Operation* const  nand::reg_set_subset_2 = PredTable::Register("set_subset",2, new pred_set_subset_2());
Operation* const  nand::reg_set_member_2 = PredTable::Register("set_member",2, new pred_set_member_2());

	Operation* nand::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* nand::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = nand::posint0;
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_main_1::exec_static);
	}

	Operation* nand::pred_main_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_main_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_main_1__1(mach));
	}

	Operation* nand::pred_main_1::exec_pred_main_1__1(Prolog* mach) {
		mach->FillAlternative(pred_main_1::exec_pred_main_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = var3;
	local_aregs[3] = var4;
	local_aregs[4] = Data::F(nand::s_add_necessary_functions, { var2->Deref(), var3->Deref(), var4->Deref(), var5, var6, Data::F(nand::s_test_bounds, { var2->Deref(), var5->Deref(), var6->Deref(), Data::F(nand::s_search, { var2->Deref(), var5->Deref(), var6->Deref(), continuation }) }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_init_state_4::exec_static);
	}

	Operation* nand::pred_main_1::exec_pred_main_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_init_state_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_init_state_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_init_state_4__1(mach));
	}

	Operation* nand::pred_init_state_4::exec_pred_init_state_4__1(Prolog* mach) {
		mach->FillAlternative(pred_init_state_4::exec_pred_init_state_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(nand::posint0,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::posint2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(nand::posint3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5,Data::F(nand::s_function,nand::posint2,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Const::Nil)),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint3,Const::Nil)),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Const::Nil)),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Const::Nil)),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint3,Const::Nil)),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint2,Const::Nil)),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Const::Nil))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_update_bounds_3::exec_static);
	}

	Operation* nand::pred_init_state_4::exec_pred_init_state_4__2(Prolog* mach) {
		mach->FillAlternative(pred_init_state_4::exec_pred_init_state_4__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(nand::posint1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(nand::posint4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5,Data::F(nand::s_function,nand::posint3,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint6,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Const::Nil)))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_update_bounds_3::exec_static);
	}

	Operation* nand::pred_init_state_4::exec_pred_init_state_4__3(Prolog* mach) {
		mach->FillAlternative(pred_init_state_4::exec_pred_init_state_4__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(nand::posint2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(nand::posint4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5,Data::F(nand::s_function,nand::posint3,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Const::Nil))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint6,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Const::Nil)))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_update_bounds_3::exec_static);
	}

	Operation* nand::pred_init_state_4::exec_pred_init_state_4__4(Prolog* mach) {
		mach->FillAlternative(pred_init_state_4::exec_pred_init_state_4__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(nand::posint3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(nand::posint4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5,Data::F(nand::s_function,nand::posint3,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint6,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Const::Nil)))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_update_bounds_3::exec_static);
	}

	Operation* nand::pred_init_state_4::exec_pred_init_state_4__5(Prolog* mach) {
		mach->FillAlternative(pred_init_state_4::exec_pred_init_state_4__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(nand::posint4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::posint3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(nand::posint5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5,Data::F(nand::s_function,nand::posint4,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint3,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint7,Const::Nil)))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint6,Const::Nil)))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Const::Nil))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint100;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_update_bounds_3::exec_static);
	}

	Operation* nand::pred_init_state_4::exec_pred_init_state_4__6(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(nand::posint5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::posint5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(nand::posint8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5,Data::F(nand::s_function,nand::posint7,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint23,Data::F(nand::s5,nand::posint24,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint29,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint15,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint27,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint30,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint6,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint15,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint24,Data::F(nand::s5,nand::posint27,Data::F(nand::s5,nand::posint30,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint23,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint29,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint5,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint15,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint23,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint27,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint29,Data::F(nand::s5,nand::posint30,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint24,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint4,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint23,Data::F(nand::s5,nand::posint24,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint27,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint29,Data::F(nand::s5,nand::posint30,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint15,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint3,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint15,Data::F(nand::s5,nand::posint24,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint27,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint29,Data::F(nand::s5,nand::posint30,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint23,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint15,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint23,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint29,Data::F(nand::s5,nand::posint30,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint24,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint27,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint1,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint15,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint23,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint27,Data::F(nand::s5,nand::posint30,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint24,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint29,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Data::F(nand::s5,Data::F(nand::s_function,nand::posint0,Data::F(nand::s5,nand::posint1,Data::F(nand::s5,nand::posint3,Data::F(nand::s5,nand::posint5,Data::F(nand::s5,nand::posint7,Data::F(nand::s5,nand::posint9,Data::F(nand::s5,nand::posint11,Data::F(nand::s5,nand::posint13,Data::F(nand::s5,nand::posint15,Data::F(nand::s5,nand::posint17,Data::F(nand::s5,nand::posint19,Data::F(nand::s5,nand::posint21,Data::F(nand::s5,nand::posint23,Data::F(nand::s5,nand::posint25,Data::F(nand::s5,nand::posint27,Data::F(nand::s5,nand::posint29,Data::F(nand::s5,nand::posint31,Const::Nil)))))))))))))))),Data::F(nand::s5,nand::posint0,Data::F(nand::s5,nand::posint2,Data::F(nand::s5,nand::posint4,Data::F(nand::s5,nand::posint6,Data::F(nand::s5,nand::posint8,Data::F(nand::s5,nand::posint10,Data::F(nand::s5,nand::posint12,Data::F(nand::s5,nand::posint14,Data::F(nand::s5,nand::posint16,Data::F(nand::s5,nand::posint18,Data::F(nand::s5,nand::posint20,Data::F(nand::s5,nand::posint22,Data::F(nand::s5,nand::posint24,Data::F(nand::s5,nand::posint26,Data::F(nand::s5,nand::posint28,Data::F(nand::s5,nand::posint30,Const::Nil)))))))))))))))),Const::Nil,Const::Nil,Const::Nil,Const::Nil,Const::Nil),Const::Nil)))))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1;
	local_aregs[1] = nand::posint21;
	local_aregs[2] = var2;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_update_bounds_3::exec_static);
	}

	Operation* nand::pred_search_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_search_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_search_3__1(mach));
	}

	Operation* nand::pred_search_3::exec_pred_search_3__1(Prolog* mach) {
		mach->FillAlternative(pred_search_3::exec_pred_search_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
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
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4;
	local_aregs[4] = var5;
	local_aregs[5] = mach->HC(Data::F(nand::s_cover_vector, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6, var7, Data::F(nand::s_add_necessary_functions, { var1->Deref(), var6->Deref(), var7->Deref(), var8, var9, Data::F(nand::s_test_bounds, { var1->Deref(), var8->Deref(), var9->Deref(), Data::F(nand::s_search, { var1->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_select_vector_5::exec_static);
	}

	Operation* nand::pred_search_3::exec_pred_search_3__2(Prolog* mach) {
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
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = Data::F(nand::s_fail, { continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_update_bounds_3::exec_static);
	}

	Operation* nand::pred_select_vector_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_select_vector_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_select_vector_5__1(mach));
	}

	Operation* nand::pred_select_vector_5::exec_pred_select_vector_5__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
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
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = nand::s_dummy;
	local_aregs[5] = nand::posint0;
	local_aregs[6] = nand::s_nf;
	local_aregs[7] = nand::posint999;
	local_aregs[8] = var4->Deref();
	local_aregs[9] = var5->Deref();
	local_aregs[10] = var6;
	local_aregs[11] = var7;
	local_aregs[12] = mach->HC(Data::F(nand::s_not,Data::F(nand::s8, { var6->Deref(), nand::s_cov }),Data::F(nand::s_not,Data::F(nand::s8, { var6->Deref(), nand::s_nf }),continuation)));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_select_vector_12::exec_static);
	}

	Operation* nand::pred_select_vector_12::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_select_vector_12::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
	std::vector<Term*> aregs = mach->RegPull(12);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_select_vector_12__1(mach));
	}

	Operation* nand::pred_select_vector_12::exec_pred_select_vector_12__1(Prolog* mach) {
		mach->FillAlternative(pred_select_vector_12::exec_pred_select_vector_12__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var8->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var9->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var10;
	local_aregs[2] = Data::F(nand::s_smallerthan, { var10->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_function_number_2::exec_static);
	}

	Operation* nand::pred_select_vector_12::exec_pred_select_vector_12__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var11,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var12,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var13,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var14;
	local_aregs[2] = Data::F(nand::s_smallerorequal, { var3->Deref(), var14->Deref(), Data::F(nand::s_true_set, { var1->Deref(), var15, Data::F(nand::s_select_vector, { var15->Deref(), var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref(), var16, var17, var18, var19, Data::F(nand::s_select_vector, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var16->Deref(), var17->Deref(), var18->Deref(), var19->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), continuation }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_function_number_2::exec_static);
	}

	Operation* nand::pred_select_vector_13::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_select_vector_13::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12],mach.Areg[13]} ;*/
	std::vector<Term*> aregs = mach->RegPull(13);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_select_vector_13__1(mach));
	}

	Operation* nand::pred_select_vector_13::exec_pred_select_vector_13__1(Prolog* mach) {
		mach->FillAlternative(pred_select_vector_13::exec_pred_select_vector_13__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[13];
	Term* areg12 = local_aregs[12]->Deref();
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg12)->Unify(var8->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_select_vector_13::exec_pred_select_vector_13__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[13];
	Term* areg12 = local_aregs[12]->Deref();
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var11,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var12,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var13,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg12)->Unify(var14,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var1->Deref();
	local_aregs[4] = var15;
	local_aregs[5] = var16;
	local_aregs[6] = Data::F(nand::s_best_vector, { var7->Deref(), var8->Deref(), var9->Deref(), var10->Deref(), var3->Deref(), var1->Deref(), var15->Deref(), var16->Deref(), var17, var18, var19, var20, Data::F(nand::s_select_vector, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var17->Deref(), var18->Deref(), var19->Deref(), var20->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), var14->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = nullptr;
	return static_cast<Operation*>(pred_vector_cover_type_6::exec_static);
	}

	Operation* nand::pred_vector_cover_type_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_vector_cover_type_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_vector_cover_type_6__1(mach));
	}

	Operation* nand::pred_vector_cover_type_6::exec_pred_vector_cover_type_6__1(Prolog* mach) {
		mach->RemoveChoice();
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
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var7;
	local_aregs[2] = Data::F(nand::s_conceivable_inputs, { var3->Deref(), var8, Data::F(nand::s_false_set, { var3->Deref(), var9, Data::F(nand::s_cover_type1, { var7->Deref(), var2->Deref(), var4->Deref(), nand::s_nf, nand::posint0, var10, var11, Data::F(nand::s_cover_type2, { var8->Deref(), var2->Deref(), var1->Deref(), var9->Deref(), var4->Deref(), var10->Deref(), var11->Deref(), var5->Deref(), var6->Deref(), continuation }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_immediate_predecessors_2::exec_static);
	}

	Operation* nand::pred_cover_type1_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_cover_type1_7::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
	std::vector<Term*> aregs = mach->RegPull(7);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_cover_type1_7__1(mach));
	}

	Operation* nand::pred_cover_type1_7::exec_pred_cover_type1_7__1(Prolog* mach) {
		mach->FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__2);
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
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref(),mach))) {
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

	Operation* nand::pred_cover_type1_7::exec_pred_cover_type1_7__2(Prolog* mach) {
		mach->FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__3);
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var9;
	local_aregs[3] = Data::F(nand::s_true_set, { var9->Deref(), var10, Data::F(nand::s_not,Data::F(nand::s_set_member, { var4->Deref(), var10->Deref() }),mach->HC(Data::F(nand::s_false_set, { var9->Deref(), var11, Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s_set_member, { var4->Deref(), var11->Deref() }),Data::F(nand::s_max_type, { var5->Deref(), nand::s_cov, var12 })),Data::F(nand::s_max_type, { var5->Deref(), nand::s_exp, var12->Deref() }),Data::F(nand::s_is,var13,Data::F(nand::s2, { var6->Deref(), nand::posint1 }),Data::F(nand::s_cover_type1, { var2->Deref(), var3->Deref(), var4->Deref(), var12->Deref(), var13->Deref(), var7->Deref(), var8->Deref(), continuation }))) }))) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_function_3::exec_static);
	}

	Operation* nand::pred_cover_type1_7::exec_pred_cover_type1_7__3(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_type1_7::exec_static);
	}

	Operation* nand::pred_cover_type2_9::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_cover_type2_9::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
	std::vector<Term*> aregs = mach->RegPull(9);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_cover_type2_9__1(mach));
	}

	Operation* nand::pred_cover_type2_9::exec_pred_cover_type2_9__1(Prolog* mach) {
		mach->FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__2);
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
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_cover_type2_9::exec_pred_cover_type2_9__2(Prolog* mach) {
		mach->FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__3);
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = Data::F(nand::s_function, { var1->Deref(), var3->Deref(), var11, Data::F(nand::s_false_set, { var11->Deref(), var12, Data::F(nand::s_set_member, { var6->Deref(), var12->Deref(), mach->HC(Data::F(nand::s_max_type, { var7->Deref(), nand::s_var, var13, Data::F(nand::s_is,var14,Data::F(nand::s2, { var8->Deref(), nand::posint1 }),Data::F(nand::s_cover_type2, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var13->Deref(), var14->Deref(), var9->Deref(), var10->Deref(), continuation })) })) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_cover_type2_9::exec_pred_cover_type2_9__3(Prolog* mach) {
		mach->FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__4);
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(nand::s_function, { var1->Deref(), var3->Deref(), var11, Data::F(nand::s_true_set, { var11->Deref(), var12, Data::F(nand::s_not,Data::F(nand::s_set_member, { var6->Deref(), var12->Deref() }),mach->HC(Data::F(nand::s_false_set, { var11->Deref(), var13, Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s_set_member, { var6->Deref(), var13->Deref() }),Data::F(nand::s7,Data::F(nand::s4,Data::F(nand::s_set_subset, { var5->Deref(), var12->Deref() }),Data::F(nand::s_max_type, { var7->Deref(), nand::s_fcn, var14 })),Data::F(nand::s_max_type, { var7->Deref(), nand::s_mcf, var14->Deref() }))),Data::F(nand::s7,Data::F(nand::s4,Data::F(nand::s_set_subset, { var5->Deref(), var12->Deref() }),Data::F(nand::s_max_type, { var7->Deref(), nand::s_exf, var14->Deref() })),Data::F(nand::s_max_type, { var7->Deref(), nand::s_exmcf, var14->Deref() })),Data::F(nand::s_is,var15,Data::F(nand::s2, { var8->Deref(), nand::posint1 }),Data::F(nand::s_cover_type2, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var14->Deref(), var15->Deref(), var9->Deref(), var10->Deref(), continuation }))) }))) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* nand::pred_cover_type2_9::exec_pred_cover_type2_9__4(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = var9->Deref();
	local_aregs[8] = var10->Deref();
	local_aregs[9] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_type2_9::exec_static);
	}

	Operation* nand::pred_best_vector_12::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_best_vector_12::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
	std::vector<Term*> aregs = mach->RegPull(12);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_best_vector_12__1(mach));
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__1(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	Var* var7 = Data::V(mach);
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(nand::s_dummy,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__2(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg4)->Unify(nand::s_dummy,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__3(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var8;
	local_aregs[2] = Data::F(nand::s_function_number, { var5->Deref(), var8->Deref(), Data::F(nand::s_smallerthan, { var4->Deref(), var7->Deref(), mach->HC(continuation) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_function_number_2::exec_static);
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__4(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var8;
	local_aregs[2] = Data::F(nand::s_function_number, { var5->Deref(), var8->Deref(), Data::F(nand::s_smallerorequal, { var7->Deref(), var4->Deref(), mach->HC(continuation) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_function_number_2::exec_static);
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__5(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(nand::s8, { var3->Deref(), nand::s_exp });
	local_aregs[1] = Data::F(nand::s8, { var3->Deref(), nand::s_var });
	local_aregs[2] = Data::F(nand::s_function_number, { var1->Deref(), var8, Data::F(nand::s_function_number, { var5->Deref(), var9, Data::F(nand::s_smallerthan, { var9->Deref(), var8->Deref(), mach->HC(continuation) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_or_2::exec_static);
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__6(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(nand::s8, { var3->Deref(), nand::s_exp });
	local_aregs[1] = Data::F(nand::s8, { var3->Deref(), nand::s_var });
	local_aregs[2] = Data::F(nand::s_function_number, { var1->Deref(), var8, Data::F(nand::s_function_number, { var5->Deref(), var9, Data::F(nand::s_smallerthan, { var8->Deref(), var9->Deref(), mach->HC(continuation) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_or_2::exec_static);
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__7(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(nand::s7,Data::F(nand::s8, { var3->Deref(), nand::s_exp }),Data::F(nand::s8, { var3->Deref(), nand::s_var }));
	local_aregs[1] = Data::F(nand::s_function_number, { var1->Deref(), var8, Data::F(nand::s_function_number, { var5->Deref(), var9, Data::F(nand::s_smallerthan, { var8->Deref(), var9->Deref(), mach->HC(continuation) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_not_1::exec_static);
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__8(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg6)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(nand::s7,Data::F(nand::s8, { var3->Deref(), nand::s_exp }),Data::F(nand::s8, { var3->Deref(), nand::s_var }));
	local_aregs[1] = Data::F(nand::s_function_number, { var1->Deref(), var8, Data::F(nand::s_function_number, { var5->Deref(), var9, Data::F(nand::s_smallerthan, { var9->Deref(), var8->Deref(), mach->HC(continuation) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_not_1::exec_static);
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__9(Prolog* mach) {
		mach->FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var7->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_type_order_2::exec_static);
	}

	Operation* nand::pred_best_vector_12::exec_pred_best_vector_12__10(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[12];
	Term* areg11 = local_aregs[11]->Deref();
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg10)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg11)->Unify(var8->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var7->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_type_order_2::exec_static);
	}

	Operation* nand::pred_max_type_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_max_type_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_max_type_3__1(mach));
	}

	Operation* nand::pred_max_type_3::exec_pred_max_type_3__1(Prolog* mach) {
		mach->FillAlternative(pred_max_type_3::exec_pred_max_type_3__2);
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
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_type_order_2::exec_static);
	}

	Operation* nand::pred_max_type_3::exec_pred_max_type_3__2(Prolog* mach) {
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
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(nand::s_type_order, { var1->Deref(), var2->Deref() });
	local_aregs[1] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_not_1::exec_static);
	}

	Operation* nand::pred_type_order_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_type_order_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_type_order_2__1(mach));
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__1(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_cov,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__2(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_cov,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__3(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_cov,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__4(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_cov,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__5(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_cov,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__6(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_cov,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__7(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_cov,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__8(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__9(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__10(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__11(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__12(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__13(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__14(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__15(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__16(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__17(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__18(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__19(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__20);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__20(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__21(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__22(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__23);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__23(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__24(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__25(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__26);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__26(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__27);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__27(Prolog* mach) {
		mach->FillAlternative(pred_type_order_2::exec_pred_type_order_2__28);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_type_order_2::exec_pred_type_order_2__28(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_cover_vector_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_cover_vector_7::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
	std::vector<Term*> aregs = mach->RegPull(7);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_cover_vector_7__1(mach));
	}

	Operation* nand::pred_cover_vector_7::exec_pred_cover_vector_7__1(Prolog* mach) {
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
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var8;
	local_aregs[2] = Data::F(nand::s_conceivable_inputs, { var4->Deref(), var9, Data::F(nand::s_vector_types,var10,Data::F(nand::s_cover_vector, { var10->Deref(), var8->Deref(), var9->Deref(), var4->Deref(), var5->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), var6->Deref(), var7->Deref(), continuation })) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_immediate_predecessors_2::exec_static);
	}

	Operation* nand::pred_vector_types_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_vector_types_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_vector_types_1__1(mach));
	}

	Operation* nand::pred_vector_types_1::exec_pred_vector_types_1__1(Prolog* mach) {
		mach->FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_vector_types_1::exec_pred_vector_types_1__2(Prolog* mach) {
		mach->FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_vector_types_1::exec_pred_vector_types_1__3(Prolog* mach) {
		mach->FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_vector_types_1::exec_pred_vector_types_1__4(Prolog* mach) {
		mach->FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_vector_types_1::exec_pred_vector_types_1__5(Prolog* mach) {
		mach->FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_vector_types_1::exec_pred_vector_types_1__6(Prolog* mach) {
		mach->FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_vector_types_1::exec_pred_vector_types_1__7(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_cover_vector_10::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_cover_vector_10::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
	std::vector<Term*> aregs = mach->RegPull(10);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_cover_vector_10__1(mach));
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__1(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var8->Deref();
	local_aregs[2] = var10;
	local_aregs[3] = Data::F(nand::s_true_set, { var10->Deref(), var11, Data::F(nand::s_not,Data::F(nand::s_set_member, { var5->Deref(), var11->Deref() }),Data::F(nand::s_update_circuit, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation })) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_function_3::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__2(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_exp,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_exp;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var10;
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_vector_10::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__3(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var6->Deref();
	local_aregs[2] = Data::F(nand::s_function, { var2->Deref(), var8->Deref(), var10, Data::F(nand::s_false_set, { var10->Deref(), var11, Data::F(nand::s_set_member, { var5->Deref(), var11->Deref(), Data::F(nand::s_update_circuit, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__4(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_var,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_var;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_vector_10::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__5(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Data::F(nand::s_function, { var2->Deref(), var8->Deref(), var10, Data::F(nand::s_false_set, { var10->Deref(), var11, Data::F(nand::s_set_member, { var5->Deref(), var11->Deref(), Data::F(nand::s_true_set, { var10->Deref(), var12, Data::F(nand::s_false_set, { var4->Deref(), var13, Data::F(nand::s_set_subset, { var13->Deref(), var12->Deref(), Data::F(nand::s_update_circuit, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation }) }) }) }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__6(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_fcn,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_fcn;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_vector_10::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__7(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Data::F(nand::s_function, { var2->Deref(), var8->Deref(), var10, Data::F(nand::s_false_set, { var10->Deref(), var11, Data::F(nand::s_set_member, { var5->Deref(), var11->Deref(), Data::F(nand::s_true_set, { var10->Deref(), var12, Data::F(nand::s_false_set, { var4->Deref(), var13, Data::F(nand::s_not,Data::F(nand::s_set_subset, { var13->Deref(), var12->Deref() }),Data::F(nand::s_update_circuit, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation })) }) }) }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__8(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_mcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_mcf;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_vector_10::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__9(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Data::F(nand::s_function, { var2->Deref(), var8->Deref(), var10, Data::F(nand::s_false_set, { var10->Deref(), var11, Data::F(nand::s_not,Data::F(nand::s_set_member, { var5->Deref(), var11->Deref() }),Data::F(nand::s_true_set, { var10->Deref(), var12, Data::F(nand::s_not,Data::F(nand::s_set_member, { var5->Deref(), var12->Deref() }),Data::F(nand::s_false_set, { var4->Deref(), var13, Data::F(nand::s_set_subset, { var13->Deref(), var12->Deref(), Data::F(nand::s_update_circuit, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation }) }) })) })) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__10(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_exf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_exf;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_vector_10::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__11(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var6->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Data::F(nand::s_function, { var2->Deref(), var8->Deref(), var10, Data::F(nand::s_false_set, { var10->Deref(), var11, Data::F(nand::s_not,Data::F(nand::s_set_member, { var5->Deref(), var11->Deref() }),Data::F(nand::s_true_set, { var10->Deref(), var12, Data::F(nand::s_not,Data::F(nand::s_set_member, { var5->Deref(), var12->Deref() }),Data::F(nand::s_false_set, { var4->Deref(), var13, Data::F(nand::s_not,Data::F(nand::s_set_subset, { var13->Deref(), var12->Deref() }),Data::F(nand::s_update_circuit, { var8->Deref(), var10->Deref(), var4->Deref(), var5->Deref(), var8->Deref(), var9->Deref(), continuation })) })) })) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__12(Prolog* mach) {
		mach->FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_exmcf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	if(!((areg7)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_exmcf;
	local_aregs[1] = var10;
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var4->Deref();
	local_aregs[4] = var5->Deref();
	local_aregs[5] = var6->Deref();
	local_aregs[6] = var7->Deref();
	local_aregs[7] = var8->Deref();
	local_aregs[8] = var7->Deref();
	local_aregs[9] = var9->Deref();
	local_aregs[10] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_cover_vector_10::exec_static);
	}

	Operation* nand::pred_cover_vector_10::exec_pred_cover_vector_10__13(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[10];
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
	if(!((areg0)->Unify(nand::s_nf,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg7)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg8)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg9)->Unify(var9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var8->Deref();
	local_aregs[1] = Data::F(nand::s2, { var6->Deref(), nand::posint1 });
	local_aregs[2] = Data::F(nand::s_false_set, { var3->Deref(), var10, Data::F(nand::s_new_function_CIs, { var7->Deref(), Data::F(nand::s_function, { var6->Deref(), var10->Deref(), Data::F(nand::s5, { var4->Deref(), Const::Nil }), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil }), var5->Deref(), var11, var12, Data::F(nand::s_update_circuit, { var11->Deref(), var12->Deref(), var3->Deref(), var4->Deref(), var11->Deref(), var9->Deref(), continuation }) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(nand::s_is->FindProc(2));
	}

	Operation* nand::pred_update_circuit_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_update_circuit_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_update_circuit_6__1(mach));
	}

	Operation* nand::pred_update_circuit_6::exec_pred_update_circuit_6__1(Prolog* mach) {
		mach->FillAlternative(pred_update_circuit_6::exec_pred_update_circuit_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
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
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_update_circuit_6::exec_pred_update_circuit_6__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg0)->Unify(Data::F(nand::s5,Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),var9),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var11,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var12,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var13,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(Data::F(nand::s5,Data::F(nand::s_function, { var1->Deref(), var14, var15, var16, var17, var18, var19, var20 }),var21),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(nand::s_function,var22,var23,var24,var25,var26,var27,var28,var29);
	local_aregs[1] = var10->Deref();
	local_aregs[2] = Data::F(nand::s_unify,Data::F(nand::s_function,var30,var31,var32,var33,var34,var35,var36,var37),var11->Deref(),Data::F(nand::s_set_union,Data::F(nand::s5, { var22->Deref(), Const::Nil }),var28->Deref(),var38,Data::F(nand::s_set_union,Data::F(nand::s5, { var30->Deref(), Const::Nil }),var37->Deref(),var39,Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s8, { var1->Deref(), var30->Deref() }),Data::F(nand::s_set_union, { var2->Deref(), var24->Deref(), var40 })),Data::F(nand::s8, { var40->Deref(), var2->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s8, { var1->Deref(), var22->Deref() }),Data::F(nand::s_set_union, { var40->Deref(), var32->Deref(), var41 })),Data::F(nand::s8, { var41->Deref(), var40->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s7,Data::F(nand::s_set_member, { var1->Deref(), var26->Deref() }),Data::F(nand::s_set_member, { var1->Deref(), var27->Deref() })),Data::F(nand::s_set_union, { var41->Deref(), Data::F(nand::s5, { var12->Deref(), Const::Nil }), var14->Deref() })),Data::F(nand::s8, { var14->Deref(), var41->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s8, { var1->Deref(), var22->Deref() }),Data::F(nand::s_set_union, { var3->Deref(), Data::F(nand::s5, { var12->Deref(), Const::Nil }), var15->Deref() })),Data::F(nand::s8, { var15->Deref(), var3->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s7,Data::F(nand::s_set_member, { var1->Deref(), var28->Deref() }),Data::F(nand::s8, { var1->Deref(), var22->Deref() })),Data::F(nand::s_set_difference, { var4->Deref(), var39->Deref(), var42 })),Data::F(nand::s8, { var42->Deref(), var4->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s3,Data::F(nand::s_set_member, { var22->Deref(), var4->Deref() }),Data::F(nand::s_set_member, { var12->Deref(), var3->Deref() })),Data::F(nand::s_set_difference, { var42->Deref(), Data::F(nand::s5, { var22->Deref(), Const::Nil }), var43 })),Data::F(nand::s8, { var43->Deref(), var42->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s8, { var1->Deref(), var22->Deref() }),Data::F(nand::s_exclude_if_vector_in_false_set, { var43->Deref(), var13->Deref(), var12->Deref(), var44 })),Data::F(nand::s8, { var44->Deref(), var43->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s8, { var1->Deref(), var30->Deref() }),Data::F(nand::s_set_difference, { var44->Deref(), Data::F(nand::s5, { var22->Deref(), Const::Nil }), var16->Deref() })),Data::F(nand::s8, { var16->Deref(), var44->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s8, { var1->Deref(), var30->Deref() }),Data::F(nand::s_set_union, { var5->Deref(), Data::F(nand::s5, { var22->Deref(), Const::Nil }), var17->Deref() })),Data::F(nand::s8, { var17->Deref(), var5->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s8, { var1->Deref(), var22->Deref() }),Data::F(nand::s_set_union, { var6->Deref(), Data::F(nand::s5, { var30->Deref(), Const::Nil }), var18->Deref() })),Data::F(nand::s8, { var18->Deref(), var6->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s_set_member, { var1->Deref(), var39->Deref() }),Data::F(nand::s_set_union, { var7->Deref(), var38->Deref(), var19->Deref() })),Data::F(nand::s8, { var19->Deref(), var7->Deref() }),Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s_set_member, { var1->Deref(), var38->Deref() }),Data::F(nand::s_set_union, { var8->Deref(), var39->Deref(), var20->Deref() })),Data::F(nand::s8, { var20->Deref(), var8->Deref() }),Data::F(nand::s_update_circuit, { var9->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), var13->Deref(), var21->Deref(), continuation }))))))))))))))));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation* nand::pred_exclude_if_vector_in_false_set_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_exclude_if_vector_in_false_set_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_exclude_if_vector_in_false_set_4__1(mach));
	}

	Operation* nand::pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__1(Prolog* mach) {
		mach->FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
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

	Operation* nand::pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__2(Prolog* mach) {
		mach->FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__3);
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	local_aregs[2] = var6;
	local_aregs[3] = Data::F(nand::s_false_set, { var6->Deref(), var7, Data::F(nand::s_set_member, { var4->Deref(), var7->Deref(), mach->HC(Data::F(nand::s_exclude_if_vector_in_false_set, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation })) }) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_function_3::exec_static);
	}

	Operation* nand::pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__3(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_exclude_if_vector_in_false_set_4::exec_static);
	}

	Operation* nand::pred_add_necessary_functions_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_add_necessary_functions_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_add_necessary_functions_5__1(mach));
	}

	Operation* nand::pred_add_necessary_functions_5::exec_pred_add_necessary_functions_5__1(Prolog* mach) {
		mach->RemoveChoice();
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = var3->Deref();
	local_aregs[4] = var4->Deref();
	local_aregs[5] = var5->Deref();
	local_aregs[6] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_add_necessary_functions_6::exec_static);
	}

	Operation* nand::pred_add_necessary_functions_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_add_necessary_functions_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_add_necessary_functions_6__1(mach));
	}

	Operation* nand::pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__1(Prolog* mach) {
		mach->FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__2(Prolog* mach) {
		mach->FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var7;
	local_aregs[3] = Data::F(nand::s_function_type, { var2->Deref(), var3->Deref(), var4->Deref(), var7->Deref(), nand::s_nf, var8, mach->HC(Data::F(nand::s_false_set, { var7->Deref(), var9, Data::F(nand::s_new_function_CIs, { var4->Deref(), Data::F(nand::s_function, { var3->Deref(), var9->Deref(), Data::F(nand::s5, { var8->Deref(), Const::Nil }), Const::Nil, Const::Nil, Const::Nil, Const::Nil, Const::Nil }), var2->Deref(), var10, var11, Data::F(nand::s_function, { var1->Deref(), var10->Deref(), var12, Data::F(nand::s_update_circuit, { var10->Deref(), var11->Deref(), var12->Deref(), var8->Deref(), var10->Deref(), var13, Data::F(nand::s_is,var14,Data::F(nand::s2, { var3->Deref(), nand::posint1 }),Data::F(nand::s_is,var15,Data::F(nand::s2, { var1->Deref(), nand::posint1 }),Data::F(nand::s_add_necessary_functions, { var15->Deref(), var2->Deref(), var14->Deref(), var13->Deref(), var5->Deref(), var6->Deref(), continuation }))) }) }) }) })) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_function_3::exec_static);
	}

	Operation* nand::pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__3(Prolog* mach) {
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
	local_aregs[0] = var7;
	local_aregs[1] = Data::F(nand::s2, { var1->Deref(), nand::posint1 });
	local_aregs[2] = Data::F(nand::s_add_necessary_functions, { var7->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(nand::s_is->FindProc(2));
	}

	Operation* nand::pred_new_function_CIs_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_new_function_CIs_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_new_function_CIs_5__1(mach));
	}

	Operation* nand::pred_new_function_CIs_5::exec_pred_new_function_CIs_5__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
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
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s_function,var2,var3,var4,var5,var6,var7,var8,var9),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(nand::s5,var11,var12),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(var11->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var10->Deref();
	local_aregs[4] = var12->Deref();
	local_aregs[5] = Const::Nil;
	local_aregs[6] = var13;
	local_aregs[7] = Data::F(nand::s_unify,Data::F(nand::s_function, { var2->Deref(), var3->Deref(), var4->Deref(), var13->Deref(), var6->Deref(), var7->Deref(), var8->Deref(), var9->Deref() }),var11->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_new_function_CIs_7::exec_static);
	}

	Operation* nand::pred_new_function_CIs_7::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_new_function_CIs_7::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
	std::vector<Term*> aregs = mach->RegPull(7);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_new_function_CIs_7__1(mach));
	}

	Operation* nand::pred_new_function_CIs_7::exec_pred_new_function_CIs_7__1(Prolog* mach) {
		mach->FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__2);
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
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(Const::Nil,mach))) {
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

	Operation* nand::pred_new_function_CIs_7::exec_pred_new_function_CIs_7__2(Prolog* mach) {
		mach->FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[7];
	Term* areg6 = local_aregs[6]->Deref();
	Term* areg5 = local_aregs[5]->Deref();
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
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
	if(!((areg0)->Unify(Data::F(nand::s5,Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),var9),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var11,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var12,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg4)->Unify(Data::F(nand::s5,Data::F(nand::s_function, { var1->Deref(), var2->Deref(), var3->Deref(), var13, var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref() }),var14),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var15,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var16,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var11->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = Const::Nil;
	local_aregs[3] = mach->HC(Data::F(nand::s_or,Data::F(nand::s4,Data::F(nand::s9, { var1->Deref(), var12->Deref() }),Data::F(nand::s_set_union, { var4->Deref(), Data::F(nand::s5, { var10->Deref(), Const::Nil }), var13->Deref() })),Data::F(nand::s8, { var13->Deref(), var4->Deref() }),Data::F(nand::s_new_function_CIs, { var9->Deref(), var10->Deref(), var11->Deref(), var12->Deref(), var14->Deref(), Data::F(nand::s5, { var1->Deref(), var15->Deref() }), var16->Deref(), continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_set_intersection_3::exec_static);
	}

	Operation* nand::pred_new_function_CIs_7::exec_pred_new_function_CIs_7__3(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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
	if(!((areg4)->Unify(Data::F(nand::s5, { var1->Deref(), var6 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg5)->Unify(var7,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg6)->Unify(var8,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = var6->Deref();
	local_aregs[5] = var7->Deref();
	local_aregs[6] = var8->Deref();
	local_aregs[7] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_new_function_CIs_7::exec_static);
	}

	Operation* nand::pred_function_type_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_function_type_6::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
	std::vector<Term*> aregs = mach->RegPull(6);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_function_type_6__1(mach));
	}

	Operation* nand::pred_function_type_6::exec_pred_function_type_6__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[6];
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
	local_aregs[0] = var4->Deref();
	local_aregs[1] = var7;
	local_aregs[2] = Data::F(nand::s_select_vector, { var7->Deref(), var4->Deref(), var1->Deref(), var2->Deref(), var3->Deref(), nand::s_dummy, nand::posint0, nand::s_nf, nand::posint999, var8, var6->Deref(), var5->Deref(), var9, continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_true_set_2::exec_static);
	}

	Operation* nand::pred_test_bounds_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_test_bounds_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_test_bounds_3__1(mach));
	}

	Operation* nand::pred_test_bounds_3::exec_pred_test_bounds_3__1(Prolog* mach) {
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
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_bound;
	local_aregs[1] = var4;
	local_aregs[2] = Data::F(nand::s_smallerthan, { var2->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_access_2::exec_static);
	}

	Operation* nand::pred_update_bounds_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_update_bounds_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_update_bounds_3__1(mach));
	}

	Operation* nand::pred_update_bounds_3::exec_pred_update_bounds_3__1(Prolog* mach) {
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
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = nand::s_bound;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_set_2::exec_static);
	}

	Operation* nand::pred_set_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_set_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_2__1(mach));
	}

	Operation* nand::pred_set_2::exec_pred_set_2__1(Prolog* mach) {
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
	local_aregs[0] = Data::F(nand::s4,Data::F(nand::s_recorded, { var1->Deref(), var3, var4 }),Data::F(nand::s_erase, { var4->Deref() }));
	local_aregs[1] = nand::s_true;
	local_aregs[2] = Data::F(nand::s_recorda, { var1->Deref(), var2->Deref(), var5, continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_or_2::exec_static);
	}

	Operation* nand::pred_access_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_access_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_access_2__1(mach));
	}

	Operation* nand::pred_access_2::exec_pred_access_2__1(Prolog* mach) {
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
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_recorded_3::exec_static);
	}

	Operation* nand::pred_write_gates_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_write_gates_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_write_gates_1__1(mach));
	}

	Operation* nand::pred_write_gates_1::exec_pred_write_gates_1__1(Prolog* mach) {
		mach->FillAlternative(pred_write_gates_1::exec_pred_write_gates_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_write_gates_1::exec_pred_write_gates_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3;
	local_aregs[2] = Data::F(nand::s_write,nand::s33,Data::F(nand::s_write, { var3->Deref(), Data::F(nand::s_write,nand::s1,Data::F(nand::s_immediate_predecessors, { var1->Deref(), var4, Data::F(nand::s_write, { var4->Deref(), Data::F(nand::s_nl,Data::F(nand::s_write_gates, { var2->Deref(), continuation })) }) })) }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_function_number_2::exec_static);
	}

	Operation* nand::pred_function_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_function_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_function_3__1(mach));
	}

	Operation* nand::pred_function_3::exec_pred_function_3__1(Prolog* mach) {
		mach->FillAlternative(pred_function_3::exec_pred_function_3__2);
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
	if(!((areg1)->Unify(Data::F(nand::s5,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_function_number_2::exec_static);
	}

	Operation* nand::pred_function_3::exec_pred_function_3__2(Prolog* mach) {
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
	if(!((areg1)->Unify(Data::F(nand::s5,var2,var3),mach))) {
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
	return static_cast<Operation*>(pred_function_3::exec_static);
	}

	Operation* nand::pred_function_number_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_function_number_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_function_number_2__1(mach));
	}

	Operation* nand::pred_function_number_2::exec_pred_function_number_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_true_set_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_true_set_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_true_set_2__1(mach));
	}

	Operation* nand::pred_true_set_2::exec_pred_true_set_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_false_set_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_false_set_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_false_set_2__1(mach));
	}

	Operation* nand::pred_false_set_2::exec_pred_false_set_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_conceivable_inputs_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_conceivable_inputs_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_conceivable_inputs_2__1(mach));
	}

	Operation* nand::pred_conceivable_inputs_2::exec_pred_conceivable_inputs_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var4->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_immediate_predecessors_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_immediate_predecessors_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_immediate_predecessors_2__1(mach));
	}

	Operation* nand::pred_immediate_predecessors_2::exec_pred_immediate_predecessors_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var5->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_immediate_successors_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_immediate_successors_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_immediate_successors_2__1(mach));
	}

	Operation* nand::pred_immediate_successors_2::exec_pred_immediate_successors_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var6->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_predecessors_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_predecessors_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_predecessors_2__1(mach));
	}

	Operation* nand::pred_predecessors_2::exec_pred_predecessors_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var7->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_successors_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_successors_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_successors_2__1(mach));
	}

	Operation* nand::pred_successors_2::exec_pred_successors_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(nand::s_function,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var8->Deref(),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_set_union_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_set_union_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_union_3__1(mach));
	}

	Operation* nand::pred_set_union_3::exec_pred_set_union_3__1(Prolog* mach) {
		mach->FillAlternative(pred_set_union_3::exec_pred_set_union_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
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

	Operation* nand::pred_set_union_3::exec_pred_set_union_3__2(Prolog* mach) {
		mach->FillAlternative(pred_set_union_3::exec_pred_set_union_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_set_union_3::exec_pred_set_union_3__3(Prolog* mach) {
		mach->FillAlternative(pred_set_union_3::exec_pred_set_union_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_set_union_3::exec_pred_set_union_3__4(Prolog* mach) {
		mach->FillAlternative(pred_set_union_3::exec_pred_set_union_3__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var1->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_set_union_3::exec_static);
	}

	Operation* nand::pred_set_union_3::exec_pred_set_union_3__5(Prolog* mach) {
		mach->FillAlternative(pred_set_union_3::exec_pred_set_union_3__6);
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = Data::F(nand::s_set_union, { var2->Deref(), Data::F(nand::s5, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_set_union_3::exec_pred_set_union_3__6(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var3->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(nand::s_set_union,Data::F(nand::s5, { var1->Deref(), var2->Deref() }),var4->Deref(),var5->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_set_intersection_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_set_intersection_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_intersection_3__1(mach));
	}

	Operation* nand::pred_set_intersection_3::exec_pred_set_intersection_3__1(Prolog* mach) {
		mach->FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
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

	Operation* nand::pred_set_intersection_3::exec_pred_set_intersection_3__2(Prolog* mach) {
		mach->FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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

	Operation* nand::pred_set_intersection_3::exec_pred_set_intersection_3__3(Prolog* mach) {
		mach->FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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

	Operation* nand::pred_set_intersection_3::exec_pred_set_intersection_3__4(Prolog* mach) {
		mach->FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var1->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_set_intersection_3::exec_static);
	}

	Operation* nand::pred_set_intersection_3::exec_pred_set_intersection_3__5(Prolog* mach) {
		mach->FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__6);
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = Data::F(nand::s_set_intersection, { var2->Deref(), Data::F(nand::s5, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_set_intersection_3::exec_pred_set_intersection_3__6(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(nand::s_set_intersection,Data::F(nand::s5, { var1->Deref(), var2->Deref() }),var4->Deref(),var5->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_set_difference_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_set_difference_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_difference_3__1(mach));
	}

	Operation* nand::pred_set_difference_3::exec_pred_set_difference_3__1(Prolog* mach) {
		mach->FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
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

	Operation* nand::pred_set_difference_3::exec_pred_set_difference_3__2(Prolog* mach) {
		mach->FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var1,var2),mach))) {
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

	Operation* nand::pred_set_difference_3::exec_pred_set_difference_3__3(Prolog* mach) {
		mach->FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var1->Deref(), var2->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_set_difference_3::exec_pred_set_difference_3__4(Prolog* mach) {
		mach->FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_set_difference_3::exec_static);
	}

	Operation* nand::pred_set_difference_3::exec_pred_set_difference_3__5(Prolog* mach) {
		mach->FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__6);
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(nand::s5, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = Data::F(nand::s_set_difference, { var2->Deref(), Data::F(nand::s5, { var3->Deref(), var4->Deref() }), var5->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_set_difference_3::exec_pred_set_difference_3__6(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(nand::s_set_difference,Data::F(nand::s5, { var1->Deref(), var2->Deref() }),var4->Deref(),var5->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_set_subset_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_set_subset_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_subset_2__1(mach));
	}

	Operation* nand::pred_set_subset_2::exec_pred_set_subset_2__1(Prolog* mach) {
		mach->FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__2);
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

	Operation* nand::pred_set_subset_2::exec_pred_set_subset_2__2(Prolog* mach) {
		mach->FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_set_subset_2::exec_static);
	}

	Operation* nand::pred_set_subset_2::exec_pred_set_subset_2__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(nand::s5,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(nand::s_set_subset,Data::F(nand::s5, { var1->Deref(), var2->Deref() }),var4->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* nand::pred_set_member_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* nand::pred_set_member_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_set_member_2__1(mach));
	}

	Operation* nand::pred_set_member_2::exec_pred_set_member_2__1(Prolog* mach) {
		mach->FillAlternative(pred_set_member_2::exec_pred_set_member_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(nand::s5, { var1->Deref(), var2 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* nand::pred_set_member_2::exec_pred_set_member_2__2(Prolog* mach) {
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
	if(!((areg1)->Unify(Data::F(nand::s5,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = Data::F(nand::s_set_member, { var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}
}
