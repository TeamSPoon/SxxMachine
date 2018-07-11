using namespace std;

#include "query.h"
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
Const* const  query::s_cut = Data::Intern("cut");
Const* const  query::s1 = Data::Intern("*");
Const* const  query::s2 = Data::Intern(".");
Const* const  query::s3 = Data::Intern("//");
Const* const  query::s4 = Data::Intern(":-");
Const* const  query::s_area = Data::Intern("area");
Const* const  query::s_argentina = Data::Intern("argentina");
Const* const  query::s_bangladesh = Data::Intern("bangladesh");
Const* const  query::s_brazil = Data::Intern("brazil");
Const* const  query::s_call = Data::Intern("call");
Const* const  query::s_china = Data::Intern("china");
Const* const  query::s_density = Data::Intern("density");
Const* const  query::s_egypt = Data::Intern("egypt");
Const* const  query::s_ethiopia = Data::Intern("ethiopia");
Const* const  query::s_fail = Data::Intern("fail");
Const* const  query::s_france = Data::Intern("france");
Const* const  query::s_india = Data::Intern("india");
Const* const  query::s_indonesia = Data::Intern("indonesia");
Const* const  query::s_iran = Data::Intern("iran");
Const* const  query::s_is = Data::Intern("is");
Const* const  query::s_italy = Data::Intern("italy");
Const* const  query::s_japan = Data::Intern("japan");
Const* const  query::s_mexico = Data::Intern("mexico");
Const* const  query::s_nigeria = Data::Intern("nigeria");
Const* const  query::s_pakistan = Data::Intern("pakistan");
Const* const  query::s_philippines = Data::Intern("philippines");
Const* const  query::s_poland = Data::Intern("poland");
Const* const  query::s_pop = Data::Intern("pop");
Const* const  query::s_query = Data::Intern("query");
Const* const  query::s_s_korea = Data::Intern("s_korea");
Const* const  query::s_smallerthan = Data::Intern("smallerthan");
Const* const  query::s_spain = Data::Intern("spain");
Const* const  query::s_thailand = Data::Intern("thailand");
Const* const  query::s_top = Data::Intern("top");
Const* const  query::s_turkey = Data::Intern("turkey");
Const* const  query::s_uk = Data::Intern("uk");
Const* const  query::s_usa = Data::Intern("usa");
Const* const  query::s_ussr = Data::Intern("ussr");
Const* const  query::s_w_germany = Data::Intern("w_germany");
Int* const  query::posint20 = Data::Number(20LL);
Int* const  query::posint21 = Data::Number(21LL);
Int* const  query::posint37 = Data::Number(37LL);
Int* const  query::posint55 = Data::Number(55LL);
Int* const  query::posint86 = Data::Number(86LL);
Int* const  query::posint90 = Data::Number(90LL);
Int* const  query::posint96 = Data::Number(96LL);
Int* const  query::posint100 = Data::Number(100LL);
Int* const  query::posint116 = Data::Number(116LL);
Int* const  query::posint121 = Data::Number(121LL);
Int* const  query::posint148 = Data::Number(148LL);
Int* const  query::posint190 = Data::Number(190LL);
Int* const  query::posint200 = Data::Number(200LL);
Int* const  query::posint213 = Data::Number(213LL);
Int* const  query::posint251 = Data::Number(251LL);
Int* const  query::posint272 = Data::Number(272LL);
Int* const  query::posint296 = Data::Number(296LL);
Int* const  query::posint311 = Data::Number(311LL);
Int* const  query::posint320 = Data::Number(320LL);
Int* const  query::posint335 = Data::Number(335LL);
Int* const  query::posint337 = Data::Number(337LL);
Int* const  query::posint350 = Data::Number(350LL);
Int* const  query::posint352 = Data::Number(352LL);
Int* const  query::posint364 = Data::Number(364LL);
Int* const  query::posint373 = Data::Number(373LL);
Int* const  query::posint383 = Data::Number(383LL);
Int* const  query::posint386 = Data::Number(386LL);
Int* const  query::posint410 = Data::Number(410LL);
Int* const  query::posint415 = Data::Number(415LL);
Int* const  query::posint525 = Data::Number(525LL);
Int* const  query::posint554 = Data::Number(554LL);
Int* const  query::posint559 = Data::Number(559LL);
Int* const  query::posint570 = Data::Number(570LL);
Int* const  query::posint581 = Data::Number(581LL);
Int* const  query::posint613 = Data::Number(613LL);
Int* const  query::posint620 = Data::Number(620LL);
Int* const  query::posint628 = Data::Number(628LL);
Int* const  query::posint682 = Data::Number(682LL);
Int* const  query::posint750 = Data::Number(750LL);
Int* const  query::posint764 = Data::Number(764LL);
Int* const  query::posint1042 = Data::Number(1042LL);
Int* const  query::posint1080 = Data::Number(1080LL);
Int* const  query::posint1097 = Data::Number(1097LL);
Int* const  query::posint1139 = Data::Number(1139LL);
Int* const  query::posint1276 = Data::Number(1276LL);
Int* const  query::posint2119 = Data::Number(2119LL);
Int* const  query::posint2521 = Data::Number(2521LL);
Int* const  query::posint3288 = Data::Number(3288LL);
Int* const  query::posint3380 = Data::Number(3380LL);
Int* const  query::posint3609 = Data::Number(3609LL);
Int* const  query::posint5863 = Data::Number(5863LL);
Int* const  query::posint8250 = Data::Number(8250LL);
Int* const  query::posint8708 = Data::Number(8708LL);
Operation* const  query::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  query::reg_query_0 = PredTable::Register("query",0, new pred_query_0());
Operation* const  query::reg_query_1 = PredTable::Register("query",1, new pred_query_1());
Operation* const  query::reg_density_2 = PredTable::Register("density",2, new pred_density_2());
Operation* const  query::reg_pop_2 = PredTable::Register("pop",2, new pred_pop_2());
Operation* const  query::reg_area_2 = PredTable::Register("area",2, new pred_area_2());

	Operation* query::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* query::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* query::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_query_0::exec_static);
	}

	Operation* query::pred_query_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* query::pred_query_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_query_0__1(mach));
	}

	Operation* query::pred_query_0::exec_pred_query_0__1(Prolog* mach) {
		mach->FillAlternative(pred_query_0::exec_pred_query_0__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = Data::F(query::s_fail, { continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_query_1::exec_static);
	}

	Operation* query::pred_query_0::exec_pred_query_0__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return Prolog::Call1;
	}

	Operation* query::pred_query_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* query::pred_query_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_query_1__1(mach));
	}

	Operation* query::pred_query_1::exec_pred_query_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = Data::V(mach);
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(query::s2,var1,Data::F(query::s2,var2,Data::F(query::s2,var3,Data::F(query::s2,var4,Const::Nil)))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = Data::F(query::s_density, { var3->Deref(), var4->Deref(), Data::F(query::s_smallerthan, { var4->Deref(), var2->Deref(), Data::F(query::s_is,var5,Data::F(query::s1,query::posint20,var2->Deref()),Data::F(query::s_is,var6,Data::F(query::s1,query::posint21,var4->Deref()),Data::F(query::s_smallerthan, { var5->Deref(), var6->Deref(), continuation }))) }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_density_2::exec_static);
	}

	Operation* query::pred_density_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* query::pred_density_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_density_2__1(mach));
	}

	Operation* query::pred_density_2::exec_pred_density_2__1(Prolog* mach) {
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
	local_aregs[2] = Data::F(query::s_area, { var1->Deref(), var4, Data::F(query::s_is, { var2->Deref(), Data::F(query::s3,Data::F(query::s1, { var3->Deref(), query::posint100 }),var4->Deref()), continuation }) });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_pop_2::exec_static);
	}

	Operation* query::pred_pop_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* query::pred_pop_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_pop_2__1(mach));
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__1(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_china,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint8250,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__2(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_india,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint5863,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__3(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_ussr,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint2521,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__4(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_usa,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint2119,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__5(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_indonesia,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint1276,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__6(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_japan,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint1097,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__7(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_brazil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint1042,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__8(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_bangladesh,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint750,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__9(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_pakistan,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint682,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__10(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_w_germany,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint620,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__11(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_nigeria,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint613,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__12(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_mexico,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint581,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__13(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_uk,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint559,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__14(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_italy,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint554,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__15(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_france,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint525,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__16(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_philippines,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint415,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__17(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_thailand,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint410,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__18(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_turkey,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint383,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__19(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__20);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_egypt,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint364,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__20(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_spain,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint352,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__21(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_poland,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint337,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__22(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__23);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_s_korea,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint335,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__23(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_iran,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint320,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__24(Prolog* mach) {
		mach->FillAlternative(pred_pop_2::exec_pred_pop_2__25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_ethiopia,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint272,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_pop_2::exec_pred_pop_2__25(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_argentina,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint251,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* query::pred_area_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_area_2__1(mach));
	}

	Operation* query::pred_area_2::exec_pred_area_2__1(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_china,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint3380,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__2(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_india,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint1139,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__3(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_ussr,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint8708,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__4(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_usa,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint3609,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__5(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_indonesia,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint570,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__6(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_japan,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint148,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__7(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_brazil,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint3288,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__8(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_bangladesh,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint55,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__9(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_pakistan,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint311,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__10(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_w_germany,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint96,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__11(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_nigeria,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint373,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__12(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_mexico,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint764,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__13(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_uk,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint86,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__14(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_italy,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint116,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__15(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_france,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint213,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__16(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_philippines,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint90,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__17(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_thailand,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint200,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__18(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_turkey,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint296,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__19(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__20);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_egypt,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint386,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__20(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_spain,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint190,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__21(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_poland,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint121,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__22(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__23);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_s_korea,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint37,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__23(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_iran,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint628,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__24(Prolog* mach) {
		mach->FillAlternative(pred_area_2::exec_pred_area_2__25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_ethiopia,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint350,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* query::pred_area_2::exec_pred_area_2__25(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(query::s_argentina,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(query::posint1080,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}
}
