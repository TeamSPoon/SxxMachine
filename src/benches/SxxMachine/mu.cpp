using namespace std;

#include "mu.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../bootlib/SxxMachine/sxx_library.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  mu::s_cut = Data::Intern("cut");
Const* const  mu::s1 = Data::Intern("-");
Const* const  mu::s2 = Data::Intern(".");
Const* const  mu::s3 = Data::Intern(":-");
Const* const  mu::s_a = Data::Intern("a");
Const* const  mu::s_append = Data::Intern("append");
Const* const  mu::s_call = Data::Intern("call");
Const* const  mu::s_i = Data::Intern("i");
Const* const  mu::s_is = Data::Intern("is");
Const* const  mu::s_m = Data::Intern("m");
Const* const  mu::s_mu = Data::Intern("mu");
Const* const  mu::s_rule = Data::Intern("rule");
Const* const  mu::s_rule1 = Data::Intern("rule1");
Const* const  mu::s_rule2 = Data::Intern("rule2");
Const* const  mu::s_rule3 = Data::Intern("rule3");
Const* const  mu::s_rule4 = Data::Intern("rule4");
Const* const  mu::s_smallerthan = Data::Intern("smallerthan");
Const* const  mu::s_theorem = Data::Intern("theorem");
Const* const  mu::s_top = Data::Intern("top");
Const* const  mu::s_u = Data::Intern("u");
Int* const  mu::posint0 = Data::Number(0LL);
Int* const  mu::posint1 = Data::Number(1LL);
Int* const  mu::posint2 = Data::Number(2LL);
Int* const  mu::posint3 = Data::Number(3LL);
Int* const  mu::posint4 = Data::Number(4LL);
Int* const  mu::posint5 = Data::Number(5LL);
Operation* const  mu::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  mu::reg_mu_0 = PredTable::Register("mu",0, new pred_mu_0());
Operation* const  mu::reg_theorem_3 = PredTable::Register("theorem",3, new pred_theorem_3());
Operation* const  mu::reg_rule_3 = PredTable::Register("rule",3, new pred_rule_3());
Operation* const  mu::reg_rule1_2 = PredTable::Register("rule1",2, new pred_rule1_2());
Operation* const  mu::reg_rule2_2 = PredTable::Register("rule2",2, new pred_rule2_2());
Operation* const  mu::reg_rule3_2 = PredTable::Register("rule3",2, new pred_rule3_2());
Operation* const  mu::reg_rule4_2 = PredTable::Register("rule4",2, new pred_rule4_2());
Operation* const  mu::reg_append_3 = PredTable::Register("append",3, new SxxMachine::sxx_library::pred_append_3());

	Operation* mu::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* mu::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_mu_0::exec_static);
	}

	Operation* mu::pred_mu_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_mu_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_mu_0__1(mach));
	}

	Operation* mu::pred_mu_0::exec_pred_mu_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = Data::F(mu::s2,mu::s_m,Data::F(mu::s2,mu::s_u,Data::F(mu::s2,mu::s_i,Data::F(mu::s2,mu::s_i,Data::F(mu::s2,mu::s_u,Const::Nil)))));
	local_aregs[1] = mu::posint5;
	local_aregs[2] = var1;
	local_aregs[3] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_theorem_3::exec_static);
	}

	Operation* mu::pred_theorem_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_theorem_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_theorem_3__1(mach));
	}

	Operation* mu::pred_theorem_3::exec_pred_theorem_3__1(Prolog* mach) {
		mach->FillAlternative(pred_theorem_3::exec_pred_theorem_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(mu::s2,mu::s_m,Data::F(mu::s2,mu::s_i,Const::Nil)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(mu::s2,Data::F(mu::s2,mu::s_a,Data::F(mu::s2,mu::s_m,Data::F(mu::s2,mu::s_i,Const::Nil))),Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* mu::pred_theorem_3::exec_pred_theorem_3__2(Prolog* mach) {
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
	if(!((areg2)->Unify(Data::F(mu::s2,Data::F(mu::s2,var3,var1->Deref()),var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = mu::posint0;
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Data::F(mu::s_is,var5,Data::F(mu::s1, { var2->Deref(), mu::posint1 }),Data::F(mu::s_theorem,var6,var5->Deref(),var4->Deref(),Data::F(mu::s_rule, { var3->Deref(), var6->Deref(), var1->Deref(), continuation })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* mu::pred_rule_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_rule_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_rule_3__1(mach));
	}

	Operation* mu::pred_rule_3::exec_pred_rule_3__1(Prolog* mach) {
		mach->FillAlternative(pred_rule_3::exec_pred_rule_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(mu::posint1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_rule1_2::exec_static);
	}

	Operation* mu::pred_rule_3::exec_pred_rule_3__2(Prolog* mach) {
		mach->FillAlternative(pred_rule_3::exec_pred_rule_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(mu::posint2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_rule2_2::exec_static);
	}

	Operation* mu::pred_rule_3::exec_pred_rule_3__3(Prolog* mach) {
		mach->FillAlternative(pred_rule_3::exec_pred_rule_3__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(mu::posint3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_rule3_2::exec_static);
	}

	Operation* mu::pred_rule_3::exec_pred_rule_3__4(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(mu::posint4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_rule4_2::exec_static);
	}

	Operation* mu::pred_rule1_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_rule1_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_rule1_2__1(mach));
	}

	Operation* mu::pred_rule1_2::exec_pred_rule1_2__1(Prolog* mach) {
		mach->FillAlternative(pred_rule1_2::exec_pred_rule1_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Data::F(mu::s2,mu::s_i,Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(mu::s2,mu::s_i,Data::F(mu::s2,mu::s_u,Const::Nil)),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* mu::pred_rule1_2::exec_pred_rule1_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(mu::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(mu::s2, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_rule1_2::exec_static);
	}

	Operation* mu::pred_rule2_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_rule2_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_rule2_2__1(mach));
	}

	Operation* mu::pred_rule2_2::exec_pred_rule2_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(mu::s2,mu::s_m,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(mu::s2,mu::s_m,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_append_3::exec_static);
	}

	Operation* mu::pred_rule3_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_rule3_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_rule3_2__1(mach));
	}

	Operation* mu::pred_rule3_2::exec_pred_rule3_2__1(Prolog* mach) {
		mach->FillAlternative(pred_rule3_2::exec_pred_rule3_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(mu::s2,mu::s_i,Data::F(mu::s2,mu::s_i,Data::F(mu::s2,mu::s_i,var1))),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(mu::s2,mu::s_u,var1->Deref()),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* mu::pred_rule3_2::exec_pred_rule3_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(mu::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(mu::s2, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_rule3_2::exec_static);
	}

	Operation* mu::pred_rule4_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_rule4_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_rule4_2__1(mach));
	}

	Operation* mu::pred_rule4_2::exec_pred_rule4_2__1(Prolog* mach) {
		mach->FillAlternative(pred_rule4_2::exec_pred_rule4_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(mu::s2,mu::s_u,Data::F(mu::s2,mu::s_u,var1)),mach))) {
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

	Operation* mu::pred_rule4_2::exec_pred_rule4_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(mu::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(mu::s2, { var1->Deref(), var3 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_rule4_2::exec_static);
	}

	Operation* mu::pred_append_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* mu::pred_append_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_append_3__1(mach));
	}

	Operation* mu::pred_append_3::exec_pred_append_3__1(Prolog* mach) {
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

	Operation* mu::pred_append_3::exec_pred_append_3__2(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(mu::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(mu::s2, { var1->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_append_3::exec_static);
	}
}
