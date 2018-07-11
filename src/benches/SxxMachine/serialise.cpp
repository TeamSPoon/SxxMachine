using namespace std;

#include "serialise.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "../../machine/SxxMachine/Builtins.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  serialise::s_cut = Data::Intern("cut");
Const* const  serialise::s1 = Data::Intern("+");
Const* const  serialise::s2 = Data::Intern(".");
Const* const  serialise::s3 = Data::Intern(":-");
Const* const  serialise::s_arrange = Data::Intern("arrange");
Const* const  serialise::s_before = Data::Intern("before");
Const* const  serialise::s_call = Data::Intern("call");
Const* const  serialise::s_is = Data::Intern("is");
Const* const  serialise::s_numbered = Data::Intern("numbered");
Const* const  serialise::s_pair = Data::Intern("pair");
Const* const  serialise::s_pairlists = Data::Intern("pairlists");
Const* const  serialise::s_serialise = Data::Intern("serialise");
Const* const  serialise::s_smallerthan = Data::Intern("smallerthan");
Const* const  serialise::s_split = Data::Intern("split");
Const* const  serialise::s_top = Data::Intern("top");
Const* const  serialise::s_tree = Data::Intern("tree");
Const* const  serialise::s_void = Data::Intern("void");
Int* const  serialise::posint1 = Data::Number(1LL);
Operation* const  serialise::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  serialise::reg_serialise_0 = PredTable::Register("serialise",0, new pred_serialise_0());
Operation* const  serialise::reg_serialise_2 = PredTable::Register("serialise",2, new pred_serialise_2());
Operation* const  serialise::reg_pairlists_3 = PredTable::Register("pairlists",3, new pred_pairlists_3());
Operation* const  serialise::reg_arrange_2 = PredTable::Register("arrange",2, new pred_arrange_2());
Operation* const  serialise::reg_split_4 = PredTable::Register("split",4, new SxxMachine::sxx_library::pred_split_4());
Operation* const  serialise::reg_before_2 = PredTable::Register("before",2, new pred_before_2());
Operation* const  serialise::reg_numbered_3 = PredTable::Register("numbered",3, new pred_numbered_3());

	Operation* serialise::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* serialise::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_serialise_0::exec_static);
	}

	Operation* serialise::pred_serialise_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_serialise_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_serialise_0__1(mach));
	}

	Operation* serialise::pred_serialise_0::exec_pred_serialise_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = Const::Intern("ABLE WAS I ERE I SAW ELBA");
	local_aregs[1] = var1;
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_serialise_2::exec_static);
	}

	Operation* serialise::pred_serialise_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_serialise_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_serialise_2__1(mach));
	}

	Operation* serialise::pred_serialise_2::exec_pred_serialise_2__1(Prolog* mach) {
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
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = Data::F(serialise::s_arrange, { var3->Deref(), var4, Data::F(serialise::s_numbered, { var4->Deref(), serialise::posint1, var5, continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_pairlists_3::exec_static);
	}

	Operation* serialise::pred_pairlists_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_pairlists_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_pairlists_3__1(mach));
	}

	Operation* serialise::pred_pairlists_3::exec_pred_pairlists_3__1(Prolog* mach) {
		mach->FillAlternative(pred_pairlists_3::exec_pred_pairlists_3__2);
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
	if(!((areg0)->Unify(Data::F(serialise::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(serialise::s2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(serialise::s2,Data::F(serialise::s_pair, { var1->Deref(), var3->Deref() }),var5),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = var5->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_pairlists_3::exec_static);
	}

	Operation* serialise::pred_pairlists_3::exec_pred_pairlists_3__2(Prolog* mach) {
		mach->RemoveChoice();
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

	Operation* serialise::pred_arrange_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_arrange_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_arrange_2__1(mach));
	}

	Operation* serialise::pred_arrange_2::exec_pred_arrange_2__1(Prolog* mach) {
		mach->FillAlternative(pred_arrange_2::exec_pred_arrange_2__2);
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
	if(!((areg0)->Unify(Data::F(serialise::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(serialise::s_tree,var3,var1->Deref(),var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var5;
	local_aregs[3] = var6;
	local_aregs[4] = Data::F(serialise::s_arrange, { var5->Deref(), var3->Deref(), Data::F(serialise::s_arrange, { var6->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::sxx_library::pred_split_4::exec_static);
	}

	Operation* serialise::pred_arrange_2::exec_pred_arrange_2__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(serialise::s_void,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* serialise::pred_split_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_split_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_split_4__1(mach));
	}

	Operation* serialise::pred_split_4::exec_pred_split_4__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_split_4::exec_pred_split_4__2);
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
	if(!((areg0)->Unify(Data::F(serialise::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(serialise::s_split, { var2->Deref(), var1->Deref(), var3->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* serialise::pred_split_4::exec_pred_split_4__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_split_4::exec_pred_split_4__3);
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
	if(!((areg0)->Unify(Data::F(serialise::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(Data::F(serialise::s2, { var1->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = mach->HC(Data::F(serialise::s_split, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_before_2::exec_static);
	}

	Operation* serialise::pred_split_4::exec_pred_split_4__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_split_4::exec_pred_split_4__4);
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
	if(!((areg0)->Unify(Data::F(serialise::s2,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(serialise::s2, { var1->Deref(), var5 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = mach->HC(Data::F(serialise::s_split, { var2->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(pred_before_2::exec_static);
	}

	Operation* serialise::pred_split_4::exec_pred_split_4__4(Prolog* mach) {
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

	Operation* serialise::pred_before_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_before_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_before_2__1(mach));
	}

	Operation* serialise::pred_before_2::exec_pred_before_2__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(serialise::s_pair,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(serialise::s_pair,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_smallerthan_2::exec_static);
	}

	Operation* serialise::pred_numbered_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* serialise::pred_numbered_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_numbered_3__1(mach));
	}

	Operation* serialise::pred_numbered_3::exec_pred_numbered_3__1(Prolog* mach) {
		mach->FillAlternative(pred_numbered_3::exec_pred_numbered_3__2);
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
	if(!((areg0)->Unify(Data::F(serialise::s_tree,var1,Data::F(serialise::s_pair,var2,var3),var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var5->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = Data::F(serialise::s_is,var7,Data::F(serialise::s1, { var3->Deref(), serialise::posint1 }),Data::F(serialise::s_numbered, { var4->Deref(), var7->Deref(), var6->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_numbered_3::exec_static);
	}

	Operation* serialise::pred_numbered_3::exec_pred_numbered_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(serialise::s_void,mach))) {
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
}
