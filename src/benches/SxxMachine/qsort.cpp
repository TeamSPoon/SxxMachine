using namespace std;

#include "qsort.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  qsort::s_cut = Data::Intern("cut");
Const* const  qsort::s1 = Data::Intern(".");
Const* const  qsort::s2 = Data::Intern(":-");
Const* const  qsort::s_call = Data::Intern("call");
Const* const  qsort::s_partition = Data::Intern("partition");
Const* const  qsort::s_qsort = Data::Intern("qsort");
Const* const  qsort::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  qsort::s_top = Data::Intern("top");
Int* const  qsort::posint0 = Data::Number(0LL);
Int* const  qsort::posint1 = Data::Number(1LL);
Int* const  qsort::posint2 = Data::Number(2LL);
Int* const  qsort::posint4 = Data::Number(4LL);
Int* const  qsort::posint6 = Data::Number(6LL);
Int* const  qsort::posint7 = Data::Number(7LL);
Int* const  qsort::posint8 = Data::Number(8LL);
Int* const  qsort::posint10 = Data::Number(10LL);
Int* const  qsort::posint11 = Data::Number(11LL);
Int* const  qsort::posint17 = Data::Number(17LL);
Int* const  qsort::posint18 = Data::Number(18LL);
Int* const  qsort::posint21 = Data::Number(21LL);
Int* const  qsort::posint27 = Data::Number(27LL);
Int* const  qsort::posint28 = Data::Number(28LL);
Int* const  qsort::posint29 = Data::Number(29LL);
Int* const  qsort::posint31 = Data::Number(31LL);
Int* const  qsort::posint32 = Data::Number(32LL);
Int* const  qsort::posint33 = Data::Number(33LL);
Int* const  qsort::posint37 = Data::Number(37LL);
Int* const  qsort::posint39 = Data::Number(39LL);
Int* const  qsort::posint40 = Data::Number(40LL);
Int* const  qsort::posint46 = Data::Number(46LL);
Int* const  qsort::posint47 = Data::Number(47LL);
Int* const  qsort::posint51 = Data::Number(51LL);
Int* const  qsort::posint53 = Data::Number(53LL);
Int* const  qsort::posint55 = Data::Number(55LL);
Int* const  qsort::posint59 = Data::Number(59LL);
Int* const  qsort::posint61 = Data::Number(61LL);
Int* const  qsort::posint63 = Data::Number(63LL);
Int* const  qsort::posint65 = Data::Number(65LL);
Int* const  qsort::posint66 = Data::Number(66LL);
Int* const  qsort::posint74 = Data::Number(74LL);
Int* const  qsort::posint75 = Data::Number(75LL);
Int* const  qsort::posint81 = Data::Number(81LL);
Int* const  qsort::posint82 = Data::Number(82LL);
Int* const  qsort::posint83 = Data::Number(83LL);
Int* const  qsort::posint85 = Data::Number(85LL);
Int* const  qsort::posint90 = Data::Number(90LL);
Int* const  qsort::posint92 = Data::Number(92LL);
Int* const  qsort::posint94 = Data::Number(94LL);
Int* const  qsort::posint95 = Data::Number(95LL);
Int* const  qsort::posint99 = Data::Number(99LL);
Operation* const  qsort::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  qsort::reg_qsort_0 = PredTable::Register("qsort",0, new pred_qsort_0());
Operation* const  qsort::reg_qsort_3 = PredTable::Register("qsort",3, new pred_qsort_3());
Operation* const  qsort::reg_partition_4 = PredTable::Register("partition",4, new pred_partition_4());

	Operation* qsort::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* qsort::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* qsort::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_qsort_0::exec_static);
	}

	Operation* qsort::pred_qsort_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* qsort::pred_qsort_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_qsort_0__1(mach));
	}

	Operation* qsort::pred_qsort_0::exec_pred_qsort_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = Data::F(qsort::s1,qsort::posint27,Data::F(qsort::s1,qsort::posint74,Data::F(qsort::s1,qsort::posint17,Data::F(qsort::s1,qsort::posint33,Data::F(qsort::s1,qsort::posint94,Data::F(qsort::s1,qsort::posint18,Data::F(qsort::s1,qsort::posint46,Data::F(qsort::s1,qsort::posint83,Data::F(qsort::s1,qsort::posint65,Data::F(qsort::s1,qsort::posint2,Data::F(qsort::s1,qsort::posint32,Data::F(qsort::s1,qsort::posint53,Data::F(qsort::s1,qsort::posint28,Data::F(qsort::s1,qsort::posint85,Data::F(qsort::s1,qsort::posint99,Data::F(qsort::s1,qsort::posint47,Data::F(qsort::s1,qsort::posint28,Data::F(qsort::s1,qsort::posint82,Data::F(qsort::s1,qsort::posint6,Data::F(qsort::s1,qsort::posint11,Data::F(qsort::s1,qsort::posint55,Data::F(qsort::s1,qsort::posint29,Data::F(qsort::s1,qsort::posint39,Data::F(qsort::s1,qsort::posint81,Data::F(qsort::s1,qsort::posint90,Data::F(qsort::s1,qsort::posint37,Data::F(qsort::s1,qsort::posint10,Data::F(qsort::s1,qsort::posint0,Data::F(qsort::s1,qsort::posint66,Data::F(qsort::s1,qsort::posint51,Data::F(qsort::s1,qsort::posint7,Data::F(qsort::s1,qsort::posint21,Data::F(qsort::s1,qsort::posint85,Data::F(qsort::s1,qsort::posint27,Data::F(qsort::s1,qsort::posint31,Data::F(qsort::s1,qsort::posint63,Data::F(qsort::s1,qsort::posint75,Data::F(qsort::s1,qsort::posint4,Data::F(qsort::s1,qsort::posint95,Data::F(qsort::s1,qsort::posint99,Data::F(qsort::s1,qsort::posint11,Data::F(qsort::s1,qsort::posint28,Data::F(qsort::s1,qsort::posint61,Data::F(qsort::s1,qsort::posint74,Data::F(qsort::s1,qsort::posint18,Data::F(qsort::s1,qsort::posint92,Data::F(qsort::s1,qsort::posint40,Data::F(qsort::s1,qsort::posint53,Data::F(qsort::s1,qsort::posint59,Data::F(qsort::s1,qsort::posint8,Const::Nil))))))))))))))))))))))))))))))))))))))))))))))))));
	local_aregs[1] = var1;
	local_aregs[2] = Const::Nil;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_qsort_3::exec_static);
	}

	Operation* qsort::pred_qsort_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* qsort::pred_qsort_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_qsort_3__1(mach));
	}

	Operation* qsort::pred_qsort_3::exec_pred_qsort_3__1(Prolog* mach) {
		mach->FillAlternative(pred_qsort_3::exec_pred_qsort_3__2);
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
	if(!((areg0)->Unify(Data::F(qsort::s1,var1,var2),mach))) {
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
	local_aregs[4] = Data::F(qsort::s_qsort, { var6->Deref(), var7, var4->Deref(), Data::F(qsort::s_qsort, { var5->Deref(), var3->Deref(), Data::F(qsort::s1, { var1->Deref(), var7->Deref() }), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_partition_4::exec_static);
	}

	Operation* qsort::pred_qsort_3::exec_pred_qsort_3__2(Prolog* mach) {
		mach->RemoveChoice();
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

	Operation* qsort::pred_partition_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* qsort::pred_partition_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_partition_4__1(mach));
	}

	Operation* qsort::pred_partition_4::exec_pred_partition_4__1(Prolog* mach) {
		mach->FillAlternative(pred_partition_4::exec_pred_partition_4__2);
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
	if(!((areg0)->Unify(Data::F(qsort::s1,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(qsort::s1, { var1->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(qsort::s_partition, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* qsort::pred_partition_4::exec_pred_partition_4__2(Prolog* mach) {
		mach->FillAlternative(pred_partition_4::exec_pred_partition_4__3);
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
	if(!((areg0)->Unify(Data::F(qsort::s1,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(qsort::s1, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_partition_4::exec_static);
	}

	Operation* qsort::pred_partition_4::exec_pred_partition_4__3(Prolog* mach) {
		mach->RemoveChoice();
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
}
