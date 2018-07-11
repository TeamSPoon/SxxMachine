using namespace std;

#include "crypt.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  crypt::s_cut = Data::Intern("cut");
Const* const  crypt::s1 = Data::Intern("*");
Const* const  crypt::s2 = Data::Intern("+");
Const* const  crypt::s3 = Data::Intern(".");
Const* const  crypt::s4 = Data::Intern("//");
Const* const  crypt::s5 = Data::Intern(":-");
Const* const  crypt::s_call = Data::Intern("call");
Const* const  crypt::s_even = Data::Intern("even");
Const* const  crypt::s_is = Data::Intern("is");
Const* const  crypt::s_lefteven = Data::Intern("lefteven");
Const* const  crypt::s_mod = Data::Intern("mod");
Const* const  crypt::s_mult = Data::Intern("mult");
Const* const  crypt::s_odd = Data::Intern("odd");
Const* const  crypt::s_sum = Data::Intern("sum");
Const* const  crypt::s_top = Data::Intern("top");
Const* const  crypt::s_zero = Data::Intern("zero");
Int* const  crypt::posint0 = Data::Number(0LL);
Int* const  crypt::posint1 = Data::Number(1LL);
Int* const  crypt::posint2 = Data::Number(2LL);
Int* const  crypt::posint3 = Data::Number(3LL);
Int* const  crypt::posint4 = Data::Number(4LL);
Int* const  crypt::posint5 = Data::Number(5LL);
Int* const  crypt::posint6 = Data::Number(6LL);
Int* const  crypt::posint7 = Data::Number(7LL);
Int* const  crypt::posint8 = Data::Number(8LL);
Int* const  crypt::posint9 = Data::Number(9LL);
Int* const  crypt::posint10 = Data::Number(10LL);
Operation* const  crypt::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  crypt::reg_sum_3 = PredTable::Register("sum",3, new pred_sum_3());
Operation* const  crypt::reg_sum_4 = PredTable::Register("sum",4, new pred_sum_4());
Operation* const  crypt::reg_mult_3 = PredTable::Register("mult",3, new pred_mult_3());
Operation* const  crypt::reg_mult_4 = PredTable::Register("mult",4, new pred_mult_4());
Operation* const  crypt::reg_zero_1 = PredTable::Register("zero",1, new pred_zero_1());
Operation* const  crypt::reg_odd_1 = PredTable::Register("odd",1, new pred_odd_1());
Operation* const  crypt::reg_even_1 = PredTable::Register("even",1, new pred_even_1());
Operation* const  crypt::reg_lefteven_1 = PredTable::Register("lefteven",1, new pred_lefteven_1());

	Operation* crypt::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* crypt::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
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
	local_aregs[0] = var1;
	local_aregs[1] = Data::F(crypt::s_even,var2,Data::F(crypt::s_even,var3,Data::F(crypt::s_even,var4,Data::F(crypt::s_mult,Data::F(crypt::s3, { var3->Deref(), Data::F(crypt::s3, { var2->Deref(), Data::F(crypt::s3, { var1->Deref(), Const::Nil }) }) }),var4->Deref(),Data::F(crypt::s3,var5,Data::F(crypt::s3,var6,Data::F(crypt::s3,var7,Data::F(crypt::s3,var8,var9)))),Data::F(crypt::s_lefteven, { var8->Deref(), Data::F(crypt::s_odd, { var7->Deref(), Data::F(crypt::s_even, { var6->Deref(), Data::F(crypt::s_even, { var5->Deref(), Data::F(crypt::s_zero, { var9->Deref(), Data::F(crypt::s_lefteven,var10,Data::F(crypt::s_mult,Data::F(crypt::s3, { var3->Deref(), Data::F(crypt::s3, { var2->Deref(), Data::F(crypt::s3, { var1->Deref(), Const::Nil }) }) }),var10->Deref(),Data::F(crypt::s3,var11,Data::F(crypt::s3,var12,Data::F(crypt::s3,var13,var14))),Data::F(crypt::s_lefteven, { var13->Deref(), Data::F(crypt::s_odd, { var12->Deref(), Data::F(crypt::s_even, { var11->Deref(), Data::F(crypt::s_zero, { var14->Deref(), Data::F(crypt::s_sum,Data::F(crypt::s3, { var5->Deref(), Data::F(crypt::s3, { var6->Deref(), Data::F(crypt::s3, { var7->Deref(), Data::F(crypt::s3, { var8->Deref(), Const::Nil }) }) }) }),Data::F(crypt::s3,crypt::posint0,Data::F(crypt::s3, { var11->Deref(), Data::F(crypt::s3, { var12->Deref(), Data::F(crypt::s3, { var13->Deref(), Const::Nil }) }) })),Data::F(crypt::s3,var15,Data::F(crypt::s3,var16,Data::F(crypt::s3,var17,Data::F(crypt::s3,var18,var19)))),Data::F(crypt::s_odd, { var18->Deref(), Data::F(crypt::s_odd, { var17->Deref(), Data::F(crypt::s_even, { var16->Deref(), Data::F(crypt::s_even, { var15->Deref(), Data::F(crypt::s_zero, { var19->Deref(), continuation }) }) }) }) })) }) }) }) }))) }) }) }) }) })))));
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_odd_1::exec_static);
	}

	Operation* crypt::pred_sum_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_sum_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_sum_3__1(mach));
	}

	Operation* crypt::pred_sum_3::exec_pred_sum_3__1(Prolog* mach) {
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
	local_aregs[2] = crypt::posint0;
	local_aregs[3] = var3->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_sum_4::exec_static);
	}

	Operation* crypt::pred_sum_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_sum_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_sum_4__1(mach));
	}

	Operation* crypt::pred_sum_4::exec_pred_sum_4__1(Prolog* mach) {
		mach->FillAlternative(pred_sum_4::exec_pred_sum_4__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
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
	if(!((areg0)->Unify(Data::F(crypt::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(crypt::s3,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var5,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(crypt::s3,var6,var7),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(crypt::s_is,var8,Data::F(crypt::s2,Data::F(crypt::s2, { var1->Deref(), var3->Deref() }),var5->Deref()),Data::F(crypt::s_is, { var6->Deref(), Data::F(crypt::s_mod, { var8->Deref(), crypt::posint10 }), Data::F(crypt::s_is,var9,Data::F(crypt::s4, { var8->Deref(), crypt::posint10 }),Data::F(crypt::s_sum, { var2->Deref(), var4->Deref(), var9->Deref(), var7->Deref(), continuation })) }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_sum_4::exec_pred_sum_4__2(Prolog* mach) {
		mach->FillAlternative(pred_sum_4::exec_pred_sum_4__3);
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
	if(!((areg2)->Unify(crypt::posint0,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_sum_4::exec_pred_sum_4__3(Prolog* mach) {
		mach->FillAlternative(pred_sum_4::exec_pred_sum_4__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
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
	if(!((areg2)->Unify(crypt::posint0,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(var1->Deref(),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_sum_4::exec_pred_sum_4__4(Prolog* mach) {
		mach->FillAlternative(pred_sum_4::exec_pred_sum_4__5);
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
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(crypt::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(crypt::s3,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(crypt::s_is,var6,Data::F(crypt::s2, { var1->Deref(), var3->Deref() }),Data::F(crypt::s_is,var7,Data::F(crypt::s4, { var6->Deref(), crypt::posint10 }),Data::F(crypt::s_is, { var4->Deref(), Data::F(crypt::s_mod, { var6->Deref(), crypt::posint10 }), Data::F(crypt::s_sum, { Const::Nil, var2->Deref(), var7->Deref(), var5->Deref(), continuation }) })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_sum_4::exec_pred_sum_4__5(Prolog* mach) {
		mach->FillAlternative(pred_sum_4::exec_pred_sum_4__6);
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
	if(!((areg0)->Unify(Data::F(crypt::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(crypt::s3,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = Data::F(crypt::s_is,var6,Data::F(crypt::s2, { var1->Deref(), var3->Deref() }),Data::F(crypt::s_is,var7,Data::F(crypt::s4, { var6->Deref(), crypt::posint10 }),Data::F(crypt::s_is, { var4->Deref(), Data::F(crypt::s_mod, { var6->Deref(), crypt::posint10 }), Data::F(crypt::s_sum, { Const::Nil, var2->Deref(), var7->Deref(), var5->Deref(), continuation }) })));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_sum_4::exec_pred_sum_4__6(Prolog* mach) {
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
	if(!((areg1)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(crypt::s3, { var1->Deref(), Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_mult_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_mult_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_mult_3__1(mach));
	}

	Operation* crypt::pred_mult_3::exec_pred_mult_3__1(Prolog* mach) {
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
	local_aregs[2] = crypt::posint0;
	local_aregs[3] = var3->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_mult_4::exec_static);
	}

	Operation* crypt::pred_mult_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_mult_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_mult_4__1(mach));
	}

	Operation* crypt::pred_mult_4::exec_pred_mult_4__1(Prolog* mach) {
		mach->FillAlternative(pred_mult_4::exec_pred_mult_4__2);
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
	if(!((areg0)->Unify(Data::F(crypt::s3,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(crypt::s3,var5,var6),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var7;
	local_aregs[1] = Data::F(crypt::s2,Data::F(crypt::s1, { var1->Deref(), var3->Deref() }),var4->Deref());
	local_aregs[2] = Data::F(crypt::s_is, { var5->Deref(), Data::F(crypt::s_mod, { var7->Deref(), crypt::posint10 }), Data::F(crypt::s_is,var8,Data::F(crypt::s4, { var7->Deref(), crypt::posint10 }),Data::F(crypt::s_mult, { var2->Deref(), var3->Deref(), var8->Deref(), var6->Deref(), continuation })) });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(crypt::s_is->FindProc(2));
	}

	Operation* crypt::pred_mult_4::exec_pred_mult_4__2(Prolog* mach) {
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
	if(!((areg0)->Unify(Const::Nil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg3)->Unify(Data::F(crypt::s3,var3,Data::F(crypt::s3,var4,Const::Nil)),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = Data::F(crypt::s_mod, { var2->Deref(), crypt::posint10 });
	local_aregs[2] = Data::F(crypt::s_is, { var4->Deref(), Data::F(crypt::s4, { var2->Deref(), crypt::posint10 }), continuation });
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return static_cast<Operation*>(crypt::s_is->FindProc(2));
	}

	Operation* crypt::pred_zero_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_zero_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_zero_1__1(mach));
	}

	Operation* crypt::pred_zero_1::exec_pred_zero_1__1(Prolog* mach) {
		mach->FillAlternative(pred_zero_1::exec_pred_zero_1__2);
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

	Operation* crypt::pred_zero_1::exec_pred_zero_1__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(crypt::s3,crypt::posint0,var1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_zero_1::exec_static);
	}

	Operation* crypt::pred_odd_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_odd_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_odd_1__1(mach));
	}

	Operation* crypt::pred_odd_1::exec_pred_odd_1__1(Prolog* mach) {
		mach->FillAlternative(pred_odd_1::exec_pred_odd_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_odd_1::exec_pred_odd_1__2(Prolog* mach) {
		mach->FillAlternative(pred_odd_1::exec_pred_odd_1__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint3,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_odd_1::exec_pred_odd_1__3(Prolog* mach) {
		mach->FillAlternative(pred_odd_1::exec_pred_odd_1__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint5,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_odd_1::exec_pred_odd_1__4(Prolog* mach) {
		mach->FillAlternative(pred_odd_1::exec_pred_odd_1__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint7,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_odd_1::exec_pred_odd_1__5(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint9,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_even_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_even_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_even_1__1(mach));
	}

	Operation* crypt::pred_even_1::exec_pred_even_1__1(Prolog* mach) {
		mach->FillAlternative(pred_even_1::exec_pred_even_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint0,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_even_1::exec_pred_even_1__2(Prolog* mach) {
		mach->FillAlternative(pred_even_1::exec_pred_even_1__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_even_1::exec_pred_even_1__3(Prolog* mach) {
		mach->FillAlternative(pred_even_1::exec_pred_even_1__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_even_1::exec_pred_even_1__4(Prolog* mach) {
		mach->FillAlternative(pred_even_1::exec_pred_even_1__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_even_1::exec_pred_even_1__5(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint8,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_lefteven_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* crypt::pred_lefteven_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_lefteven_1__1(mach));
	}

	Operation* crypt::pred_lefteven_1::exec_pred_lefteven_1__1(Prolog* mach) {
		mach->FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_lefteven_1::exec_pred_lefteven_1__2(Prolog* mach) {
		mach->FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_lefteven_1::exec_pred_lefteven_1__3(Prolog* mach) {
		mach->FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint6,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* crypt::pred_lefteven_1::exec_pred_lefteven_1__4(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(crypt::posint8,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return Prolog::Call1;
	}
}
