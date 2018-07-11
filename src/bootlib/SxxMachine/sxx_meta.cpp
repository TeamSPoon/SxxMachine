using namespace std;

#include "sxx_meta.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "sxx_library.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  sxx_meta::s_cut = Data::Intern("cut");
Const* const  sxx_meta::s1 = Data::Intern("*->");
Const* const  sxx_meta::s2 = Data::Intern(",");
Const* const  sxx_meta::s3 = Data::Intern(".");
Const* const  sxx_meta::s4 = Data::Intern(":-");
Const* const  sxx_meta::s5 = Data::Intern(";");
Const* const  sxx_meta::s6 = Data::Intern("=");
Const* const  sxx_meta::s7 = Data::Intern("\\+");
Const* const  sxx_meta::s_call = Data::Intern("call");
Const* const  sxx_meta::s_dotwo = Data::Intern("dotwo");
Const* const  sxx_meta::s_fail = Data::Intern("fail");
Const* const  sxx_meta::s_forall = Data::Intern("forall");
Const* const  sxx_meta::s_nb_setarg = Data::Intern("nb_setarg");
Const* const  sxx_meta::s_not = Data::Intern("not");
Const* const  sxx_meta::s_one_of_or_else = Data::Intern("one_of_or_else");
Const* const  sxx_meta::s_or = Data::Intern("or");
Const* const  sxx_meta::s_redo_each_call = Data::Intern("redo_each_call");
Const* const  sxx_meta::s_setup_call_cleanup = Data::Intern("setup_call_cleanup");
Const* const  sxx_meta::s_true = Data::Intern("true");
Const* const  sxx_meta::s_undo = Data::Intern("undo");
Const* const  sxx_meta::s_unify = Data::Intern("unify");
Int* const  sxx_meta::posint1 = Data::Number(1LL);
Operation* const  sxx_meta::reg_forall_2 = PredTable::Register("forall",2, new SxxMachine::sxx_meta::pred_forall_2());
Operation* const  sxx_meta::reg_undo_1 = PredTable::Register("undo",1, new SxxMachine::Metaterm::pred_undo_1());
Operation* const  sxx_meta::reg_redo_each_call_3 = PredTable::Register("redo_each_call",3, new SxxMachine::sxx_meta::pred_redo_each_call_3());
Operation* const  sxx_meta::reg_or_2 = PredTable::Register("or",2, new SxxMachine::sxx_meta::pred_or_2());
Operation* const  sxx_meta::reg_one_of_or_else_3 = PredTable::Register("one_of_or_else",3, new SxxMachine::sxx_meta::pred_one_of_or_else_3());

	Operation* sxx_meta::pred_forall_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_meta::pred_forall_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_forall_2__1(mach));
	}

	Operation* sxx_meta::pred_forall_2::exec_pred_forall_2__1(Prolog* mach) {
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
	local_aregs[0] = Data::F(sxx_meta::s7,Data::F(sxx_meta::s2,Data::F(sxx_meta::s_call, { var1->Deref() }),Data::F(sxx_meta::s7,Data::F(sxx_meta::s7,Data::F(sxx_meta::s_call,var3)))));
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_not_1::exec_static);
	}

	Operation* sxx_meta::pred_undo_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_meta::pred_undo_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_undo_1__1(mach));
	}

	Operation* sxx_meta::pred_undo_1::exec_pred_undo_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return Prolog::Call2;
	}

	Operation* sxx_meta::pred_redo_each_call_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_meta::pred_redo_each_call_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_redo_each_call_3__1(mach));
	}

	Operation* sxx_meta::pred_redo_each_call_3::exec_pred_redo_each_call_3__1(Prolog* mach) {
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
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_setup_call_cleanup_3::exec_static);
	}

	Operation* sxx_meta::pred_or_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_meta::pred_or_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_or_2__1(mach));
	}

	Operation* sxx_meta::pred_or_2::exec_pred_or_2__1(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(sxx_meta::s1,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = Data::F(sxx_meta::s_dotwo,sxx_meta::s_true);
	local_aregs[1] = var4;
	local_aregs[2] = Data::F(sxx_meta::s_or,Data::F(sxx_meta::s2,Data::F(sxx_meta::s_call, { var1->Deref() }),Data::F(sxx_meta::s_nb_setarg,sxx_meta::posint1,var4->Deref(),sxx_meta::s_fail)),Data::F(sxx_meta::s5,Data::F(sxx_meta::s6, { var4->Deref(), Data::F(sxx_meta::s_dotwo,sxx_meta::s_true) }),var5),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation* sxx_meta::pred_one_of_or_else_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* sxx_meta::pred_one_of_or_else_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_one_of_or_else_3__1(mach));
	}

	Operation* sxx_meta::pred_one_of_or_else_3::exec_pred_one_of_or_else_3__1(Prolog* mach) {
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
	local_aregs[0] = Data::F(sxx_meta::s1,var4,var5);
	local_aregs[1] = var6;
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_or_2::exec_static);
	}
}
