using namespace std;

#include "meta_qsort.h"
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
Const* const  meta_qsort::s_cut = Data::Intern("cut");
Const* const  meta_qsort::s1 = Data::Intern("!");
Const* const  meta_qsort::s2 = Data::Intern(",");
Const* const  meta_qsort::s3 = Data::Intern("->");
Const* const  meta_qsort::s4 = Data::Intern(".");
Const* const  meta_qsort::s5 = Data::Intern(":-");
Const* const  meta_qsort::s6 = Data::Intern(";");
Const* const  meta_qsort::s7 = Data::Intern("=");
Const* const  meta_qsort::s8 = Data::Intern("=<");
Const* const  meta_qsort::s9 = Data::Intern("\\+");
Const* const  meta_qsort::s_call = Data::Intern("call");
Const* const  meta_qsort::s_define = Data::Intern("define");
Const* const  meta_qsort::s_fail = Data::Intern("fail");
Const* const  meta_qsort::s_interpret = Data::Intern("interpret");
Const* const  meta_qsort::s_interpret_built_in = Data::Intern("interpret_built_in");
Const* const  meta_qsort::s_interpret_disjunction = Data::Intern("interpret_disjunction");
Const* const  meta_qsort::s_is_built_in = Data::Intern("is_built_in");
Const* const  meta_qsort::s_meta_qsort = Data::Intern("meta_qsort");
Const* const  meta_qsort::s_nonvar = Data::Intern("nonvar");
Const* const  meta_qsort::s_number = Data::Intern("number");
Const* const  meta_qsort::s_or = Data::Intern("or");
Const* const  meta_qsort::s_partition = Data::Intern("partition");
Const* const  meta_qsort::s_qsort = Data::Intern("qsort");
Const* const  meta_qsort::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  meta_qsort::s_top = Data::Intern("top");
Const* const  meta_qsort::s_true = Data::Intern("true");
Const* const  meta_qsort::s_var = Data::Intern("var");
Int* const  meta_qsort::posint0 = Data::Number(0LL);
Int* const  meta_qsort::posint1 = Data::Number(1LL);
Int* const  meta_qsort::posint2 = Data::Number(2LL);
Int* const  meta_qsort::posint4 = Data::Number(4LL);
Int* const  meta_qsort::posint6 = Data::Number(6LL);
Int* const  meta_qsort::posint7 = Data::Number(7LL);
Int* const  meta_qsort::posint8 = Data::Number(8LL);
Int* const  meta_qsort::posint10 = Data::Number(10LL);
Int* const  meta_qsort::posint11 = Data::Number(11LL);
Int* const  meta_qsort::posint17 = Data::Number(17LL);
Int* const  meta_qsort::posint18 = Data::Number(18LL);
Int* const  meta_qsort::posint21 = Data::Number(21LL);
Int* const  meta_qsort::posint27 = Data::Number(27LL);
Int* const  meta_qsort::posint28 = Data::Number(28LL);
Int* const  meta_qsort::posint29 = Data::Number(29LL);
Int* const  meta_qsort::posint31 = Data::Number(31LL);
Int* const  meta_qsort::posint32 = Data::Number(32LL);
Int* const  meta_qsort::posint33 = Data::Number(33LL);
Int* const  meta_qsort::posint37 = Data::Number(37LL);
Int* const  meta_qsort::posint39 = Data::Number(39LL);
Int* const  meta_qsort::posint40 = Data::Number(40LL);
Int* const  meta_qsort::posint46 = Data::Number(46LL);
Int* const  meta_qsort::posint47 = Data::Number(47LL);
Int* const  meta_qsort::posint51 = Data::Number(51LL);
Int* const  meta_qsort::posint53 = Data::Number(53LL);
Int* const  meta_qsort::posint55 = Data::Number(55LL);
Int* const  meta_qsort::posint59 = Data::Number(59LL);
Int* const  meta_qsort::posint61 = Data::Number(61LL);
Int* const  meta_qsort::posint63 = Data::Number(63LL);
Int* const  meta_qsort::posint65 = Data::Number(65LL);
Int* const  meta_qsort::posint66 = Data::Number(66LL);
Int* const  meta_qsort::posint74 = Data::Number(74LL);
Int* const  meta_qsort::posint75 = Data::Number(75LL);
Int* const  meta_qsort::posint81 = Data::Number(81LL);
Int* const  meta_qsort::posint82 = Data::Number(82LL);
Int* const  meta_qsort::posint83 = Data::Number(83LL);
Int* const  meta_qsort::posint85 = Data::Number(85LL);
Int* const  meta_qsort::posint90 = Data::Number(90LL);
Int* const  meta_qsort::posint92 = Data::Number(92LL);
Int* const  meta_qsort::posint94 = Data::Number(94LL);
Int* const  meta_qsort::posint95 = Data::Number(95LL);
Int* const  meta_qsort::posint99 = Data::Number(99LL);
Operation* const  meta_qsort::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  meta_qsort::reg_meta_qsort_0 = PredTable::Register("meta_qsort",0, new pred_meta_qsort_0());
Operation* const  meta_qsort::reg_interpret_1 = PredTable::Register("interpret",1, new pred_interpret_1());
Operation* const  meta_qsort::reg_interpret_2 = PredTable::Register("interpret",2, new pred_interpret_2());
Operation* const  meta_qsort::reg_interpret_disjunction_3 = PredTable::Register("interpret_disjunction",3, new pred_interpret_disjunction_3());
Operation* const  meta_qsort::reg_is_built_in_1 = PredTable::Register("is_built_in",1, new pred_is_built_in_1());
Operation* const  meta_qsort::reg_interpret_built_in_1 = PredTable::Register("interpret_built_in",1, new pred_interpret_built_in_1());
Operation* const  meta_qsort::reg_define_2 = PredTable::Register("define",2, new pred_define_2());

	Operation* meta_qsort::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* meta_qsort::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_meta_qsort_0::exec_static);
	}

	Operation* meta_qsort::pred_meta_qsort_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_meta_qsort_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_meta_qsort_0__1(mach));
	}

	Operation* meta_qsort::pred_meta_qsort_0::exec_pred_meta_qsort_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = meta_qsort::s_qsort;
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_interpret_1::exec_static);
	}

	Operation* meta_qsort::pred_interpret_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_interpret_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_interpret_1__1(mach));
	}

	Operation* meta_qsort::pred_interpret_1::exec_pred_interpret_1__1(Prolog* mach) {
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
	local_aregs[2] = Data::F(meta_qsort::s_or,Data::F(meta_qsort::s2,Data::F(meta_qsort::s_nonvar, { var2->Deref() }),Data::F(meta_qsort::s2,meta_qsort::s1,Data::F(meta_qsort::s_interpret, { var2->Deref() }))),meta_qsort::s_true,continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_interpret_2::exec_static);
	}

	Operation* meta_qsort::pred_interpret_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_interpret_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_interpret_2__1(mach));
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__1(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__2);
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
	local_aregs[1] = mach->HC(Data::F(meta_qsort::s_fail, { continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(meta_qsort::s_var->FindProc(1));
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__2(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(meta_qsort::s_interpret, { var1->Deref(), var4, Data::F(meta_qsort::s_or,Data::F(meta_qsort::s3,Data::F(meta_qsort::s_nonvar, { var4->Deref() }),Data::F(meta_qsort::s7, { var3->Deref(), Data::F(meta_qsort::s2, { var4->Deref(), var2->Deref() }) })),Data::F(meta_qsort::s_interpret, { var2->Deref(), var3->Deref() }),continuation) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__3(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(meta_qsort::s_interpret_disjunction, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__4(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(meta_qsort::s_interpret_disjunction,Data::F(meta_qsort::s3, { var1->Deref(), var2->Deref() }),meta_qsort::s_fail,var3->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__5(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s9,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(meta_qsort::s_interpret_disjunction,Data::F(meta_qsort::s3, { var1->Deref(), meta_qsort::s_fail }),meta_qsort::s_true,var2->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__6(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(meta_qsort::s1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(meta_qsort::s_true,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__7(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__8);
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
	local_aregs[1] = mach->HC(Data::F(meta_qsort::s_fail, { continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(meta_qsort::s_number->FindProc(1));
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__8(Prolog* mach) {
		mach->FillAlternative(pred_interpret_2::exec_pred_interpret_2__9);
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
	local_aregs[1] = mach->HC(Data::F(meta_qsort::s_interpret_built_in, { var1->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_is_built_in_1::exec_static);
	}

	Operation* meta_qsort::pred_interpret_2::exec_pred_interpret_2__9(Prolog* mach) {
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
	local_aregs[2] = Data::F(meta_qsort::s_interpret, { var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_define_2::exec_static);
	}

	Operation* meta_qsort::pred_interpret_disjunction_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_interpret_disjunction_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_interpret_disjunction_3__1(mach));
	}

	Operation* meta_qsort::pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__1(Prolog* mach) {
		mach->FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__2);
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
	if(!((areg0)->Unify(Data::F(meta_qsort::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5;
	local_aregs[2] = mach->HC(Data::F(meta_qsort::s_or,Data::F(meta_qsort::s3,Data::F(meta_qsort::s_nonvar, { var5->Deref() }),Data::F(meta_qsort::s7, { var4->Deref(), Data::F(meta_qsort::s3, { var5->Deref(), var2->Deref() }) })),Data::F(meta_qsort::s_interpret, { var2->Deref(), var4->Deref() }),continuation));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_interpret_2::exec_static);
	}

	Operation* meta_qsort::pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__2(Prolog* mach) {
		mach->FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(meta_qsort::s_interpret, { var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__3(Prolog* mach) {
		mach->FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__4);
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
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_interpret_2::exec_static);
	}

	Operation* meta_qsort::pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__4(Prolog* mach) {
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
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_interpret_2::exec_static);
	}

	Operation* meta_qsort::pred_is_built_in_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_is_built_in_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_is_built_in_1__1(mach));
	}

	Operation* meta_qsort::pred_is_built_in_1::exec_pred_is_built_in_1__1(Prolog* mach) {
		mach->FillAlternative(pred_is_built_in_1::exec_pred_is_built_in_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(meta_qsort::s_true,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_is_built_in_1::exec_pred_is_built_in_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s8,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_built_in_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_interpret_built_in_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_interpret_built_in_1__1(mach));
	}

	Operation* meta_qsort::pred_interpret_built_in_1::exec_pred_interpret_built_in_1__1(Prolog* mach) {
		mach->FillAlternative(pred_interpret_built_in_1::exec_pred_interpret_built_in_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(meta_qsort::s_true,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_interpret_built_in_1::exec_pred_interpret_built_in_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s8,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerorequal_2::exec_static);
	}

	Operation* meta_qsort::pred_define_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* meta_qsort::pred_define_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_define_2__1(mach));
	}

	Operation* meta_qsort::pred_define_2::exec_pred_define_2__1(Prolog* mach) {
		mach->FillAlternative(pred_define_2::exec_pred_define_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(meta_qsort::s_qsort,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(meta_qsort::s_qsort,Data::F(meta_qsort::s4,meta_qsort::posint27,Data::F(meta_qsort::s4,meta_qsort::posint74,Data::F(meta_qsort::s4,meta_qsort::posint17,Data::F(meta_qsort::s4,meta_qsort::posint33,Data::F(meta_qsort::s4,meta_qsort::posint94,Data::F(meta_qsort::s4,meta_qsort::posint18,Data::F(meta_qsort::s4,meta_qsort::posint46,Data::F(meta_qsort::s4,meta_qsort::posint83,Data::F(meta_qsort::s4,meta_qsort::posint65,Data::F(meta_qsort::s4,meta_qsort::posint2,Data::F(meta_qsort::s4,meta_qsort::posint32,Data::F(meta_qsort::s4,meta_qsort::posint53,Data::F(meta_qsort::s4,meta_qsort::posint28,Data::F(meta_qsort::s4,meta_qsort::posint85,Data::F(meta_qsort::s4,meta_qsort::posint99,Data::F(meta_qsort::s4,meta_qsort::posint47,Data::F(meta_qsort::s4,meta_qsort::posint28,Data::F(meta_qsort::s4,meta_qsort::posint82,Data::F(meta_qsort::s4,meta_qsort::posint6,Data::F(meta_qsort::s4,meta_qsort::posint11,Data::F(meta_qsort::s4,meta_qsort::posint55,Data::F(meta_qsort::s4,meta_qsort::posint29,Data::F(meta_qsort::s4,meta_qsort::posint39,Data::F(meta_qsort::s4,meta_qsort::posint81,Data::F(meta_qsort::s4,meta_qsort::posint90,Data::F(meta_qsort::s4,meta_qsort::posint37,Data::F(meta_qsort::s4,meta_qsort::posint10,Data::F(meta_qsort::s4,meta_qsort::posint0,Data::F(meta_qsort::s4,meta_qsort::posint66,Data::F(meta_qsort::s4,meta_qsort::posint51,Data::F(meta_qsort::s4,meta_qsort::posint7,Data::F(meta_qsort::s4,meta_qsort::posint21,Data::F(meta_qsort::s4,meta_qsort::posint85,Data::F(meta_qsort::s4,meta_qsort::posint27,Data::F(meta_qsort::s4,meta_qsort::posint31,Data::F(meta_qsort::s4,meta_qsort::posint63,Data::F(meta_qsort::s4,meta_qsort::posint75,Data::F(meta_qsort::s4,meta_qsort::posint4,Data::F(meta_qsort::s4,meta_qsort::posint95,Data::F(meta_qsort::s4,meta_qsort::posint99,Data::F(meta_qsort::s4,meta_qsort::posint11,Data::F(meta_qsort::s4,meta_qsort::posint28,Data::F(meta_qsort::s4,meta_qsort::posint61,Data::F(meta_qsort::s4,meta_qsort::posint74,Data::F(meta_qsort::s4,meta_qsort::posint18,Data::F(meta_qsort::s4,meta_qsort::posint92,Data::F(meta_qsort::s4,meta_qsort::posint40,Data::F(meta_qsort::s4,meta_qsort::posint53,Data::F(meta_qsort::s4,meta_qsort::posint59,Data::F(meta_qsort::s4,meta_qsort::posint8,Const::Nil)))))))))))))))))))))))))))))))))))))))))))))))))),var1,Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_define_2::exec_pred_define_2__2(Prolog* mach) {
		mach->FillAlternative(pred_define_2::exec_pred_define_2__3);
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
	if(!((areg0)->Unify(Data::F(meta_qsort::s_qsort,Data::F(meta_qsort::s4,var1,var2),var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(meta_qsort::s2,Data::F(meta_qsort::s_partition, { var2->Deref(), var1->Deref(), var5, var6 }),Data::F(meta_qsort::s2,Data::F(meta_qsort::s_qsort, { var6->Deref(), var7, var4->Deref() }),Data::F(meta_qsort::s_qsort, { var5->Deref(), var3->Deref(), Data::F(meta_qsort::s4, { var1->Deref(), var7->Deref() }) }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_define_2::exec_pred_define_2__3(Prolog* mach) {
		mach->FillAlternative(pred_define_2::exec_pred_define_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s_qsort, { Const::Nil, var1, var1->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(meta_qsort::s_true,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_define_2::exec_pred_define_2__4(Prolog* mach) {
		mach->FillAlternative(pred_define_2::exec_pred_define_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s_partition,Data::F(meta_qsort::s4,var1,var2),var3,Data::F(meta_qsort::s4, { var1->Deref(), var4 }),var5),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(meta_qsort::s2,Data::F(meta_qsort::s8, { var1->Deref(), var3->Deref() }),Data::F(meta_qsort::s2,meta_qsort::s1,Data::F(meta_qsort::s_partition, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_define_2::exec_pred_define_2__5(Prolog* mach) {
		mach->FillAlternative(pred_define_2::exec_pred_define_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s_partition,Data::F(meta_qsort::s4,var1,var2),var3,var4,Data::F(meta_qsort::s4, { var1->Deref(), var5 })),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(meta_qsort::s_partition, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* meta_qsort::pred_define_2::exec_pred_define_2__6(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(meta_qsort::s_partition, { Const::Nil, var1, Const::Nil, Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(meta_qsort::s_true,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}
}
