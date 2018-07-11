using namespace std;

#include "unify.h"
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
Const* const  unify::s_cut = Data::Intern("cut");
Const* const  unify::s1 = Data::Intern("!");
Const* const  unify::s2 = Data::Intern("+");
Const* const  unify::s3 = Data::Intern(",");
Const* const  unify::s4 = Data::Intern("-");
Const* const  unify::s5 = Data::Intern("-->");
Const* const  unify::s6 = Data::Intern(".");
Const* const  unify::s7 = Data::Intern("/");
Const* const  unify::s8 = Data::Intern(":-");
Const* const  unify::s9 = Data::Intern("<");
Const* const  unify::s10 = Data::Intern("=");
Const* const  unify::s11 = Data::Intern("=<");
Const* const  unify::s12 = Data::Intern(">");
Const* const  unify::s13 = Data::Intern("\\+");
Const* const  unify::s14 = Data::Intern("^");
Const* const  unify::s_add = Data::Intern("add");
Const* const  unify::s_arg = Data::Intern("arg");
Const* const  unify::s_atomic = Data::Intern("atomic");
Const* const  unify::s_block = Data::Intern("block");
Const* const  unify::s_block_args = Data::Intern("block_args");
Const* const  unify::s_call = Data::Intern("call");
Const* const  unify::s_compare = Data::Intern("compare");
Const* const  unify::s_cons = Data::Intern("cons");
Const* const  unify::s_deref = Data::Intern("deref");
Const* const  unify::s_equal = Data::Intern("equal");
Const* const  unify::s_fail = Data::Intern("fail");
Const* const  unify::s_functor = Data::Intern("functor");
Const* const  unify::s_h = Data::Intern("h");
Const* const  unify::s_in_2 = Data::Intern("in_2");
Const* const  unify::s_incl = Data::Intern("incl");
Const* const  unify::s_incl_2 = Data::Intern("incl_2");
Const* const  unify::s_incl_3 = Data::Intern("incl_3");
Const* const  unify::s_init = Data::Intern("init");
Const* const  unify::s_init_var = Data::Intern("init_var");
Const* const  unify::s_is = Data::Intern("is");
Const* const  unify::s_jump = Data::Intern("jump");
Const* const  unify::s_label = Data::Intern("label");
Const* const  unify::s_last = Data::Intern("last");
Const* const  unify::s_main = Data::Intern("main");
Const* const  unify::s_make_slots = Data::Intern("make_slots");
Const* const  unify::s_make_word = Data::Intern("make_word");
Const* const  unify::s_move = Data::Intern("move");
Const* const  unify::s_my_compound = Data::Intern("my_compound");
Const* const  unify::s_myin = Data::Intern("myin");
Const* const  unify::s_nonlast = Data::Intern("nonlast");
Const* const  unify::s_nonvar = Data::Intern("nonvar");
Const* const  unify::s_not = Data::Intern("not");
Const* const  unify::s_size = Data::Intern("size");
Const* const  unify::s_size_args = Data::Intern("size_args");
Const* const  unify::s_structure = Data::Intern("structure");
Const* const  unify::s_switch = Data::Intern("switch");
Const* const  unify::s_tatm = Data::Intern("tatm");
Const* const  unify::s_termtag = Data::Intern("termtag");
Const* const  unify::s_tlst = Data::Intern("tlst");
Const* const  unify::s_top = Data::Intern("top");
Const* const  unify::s_trail = Data::Intern("trail");
Const* const  unify::s_tstr = Data::Intern("tstr");
Const* const  unify::s_tvar = Data::Intern("tvar");
Const* const  unify::s_u = Data::Intern("u");
Const* const  unify::s_unify = Data::Intern("unify");
Const* const  unify::s_unify_arg = Data::Intern("unify_arg");
Const* const  unify::s_unify_args = Data::Intern("unify_args");
Const* const  unify::s_unify_block = Data::Intern("unify_block");
Const* const  unify::s_unify_readmode = Data::Intern("unify_readmode");
Const* const  unify::s_unify_var = Data::Intern("unify_var");
Const* const  unify::s_unify_writemode = Data::Intern("unify_writemode");
Const* const  unify::s_uninit = Data::Intern("uninit");
Const* const  unify::s_var = Data::Intern("var");
Const* const  unify::s69 = Data::Intern("{}");
Int* const  unify::negint1 = Data::Number(-1LL);
Int* const  unify::posint0 = Data::Number(0LL);
Int* const  unify::posint1 = Data::Number(1LL);
Int* const  unify::posint2 = Data::Number(2LL);
Operation* const  unify::reg_top_0 = PredTable::Register("top",0, new SxxMachine::sxx_library::pred_top_0());
Operation* const  unify::reg_main_1 = PredTable::Register("main",1, new pred_main_1());
Operation* const  unify::reg_u_4 = PredTable::Register("u",4, new pred_u_4());
Operation* const  unify::reg_$002D$002D$003E_2 = PredTable::Register("-->",2, new SxxMachine::Builtins::pred_$002D$002D$003E_2());
Operation* const  unify::reg_make_word_3 = PredTable::Register("make_word",3, new pred_make_word_3());
Operation* const  unify::reg_add_3 = PredTable::Register("add",3, new pred_add_3());
Operation* const  unify::reg_myin_2 = PredTable::Register("myin",2, new pred_myin_2());
Operation* const  unify::reg_in_2_3 = PredTable::Register("in_2",3, new pred_in_2_3());
Operation* const  unify::reg_incl_3 = PredTable::Register("incl",3, new pred_incl_3());
Operation* const  unify::reg_incl_2_3 = PredTable::Register("incl_2",3, new pred_incl_2_3());
Operation* const  unify::reg_incl_3_5 = PredTable::Register("incl_3",5, new pred_incl_3_5());
Operation* const  unify::reg_my_compound_1 = PredTable::Register("my_compound",1, new pred_my_compound_1());
Operation* const  unify::reg_cons_1 = PredTable::Register("cons",1, new pred_cons_1());
Operation* const  unify::reg_structure_1 = PredTable::Register("structure",1, new pred_structure_1());
Operation* const  unify::reg_termtag_2 = PredTable::Register("termtag",2, new pred_termtag_2());

	Operation* unify::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_top_0::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0]} ;*/
	std::vector<Term*> aregs = mach->RegPull(0);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_top_0__1(mach));
	}

	Operation* unify::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Var* var1 = Data::V(mach);
	local_aregs[0] = var1;
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_main_1::exec_static);
	}

	Operation* unify::pred_main_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_main_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_main_1__1(mach));
	}

	Operation* unify::pred_main_1::exec_pred_main_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = Data::F(unify::s6,unify::posint1,Data::F(unify::s6,var3,Const::Nil));
	local_aregs[2] = Data::F(unify::s6, { var2->Deref(), Const::Nil });
	local_aregs[3] = var4;
	local_aregs[4] = Data::F(unify::s_size, { var4->Deref(), unify::posint0, var1->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_u_4::exec_static);
	}

	Operation* unify::pred_u_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_u_4::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
	std::vector<Term*> aregs = mach->RegPull(4);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_u_4__1(mach));
	}

	Operation* unify::pred_u_4::exec_pred_u_4__1(Prolog* mach) {
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
	local_aregs[2] = var3->Deref();
	local_aregs[3] = var5;
	local_aregs[4] = var4->Deref();
	local_aregs[5] = Const::Nil;
	local_aregs[6] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(SxxMachine::Builtins::pred_unify_6::exec_static);
	}

	Operation* unify::pred_$002D$002D$003E_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_$002D$002D$003E_2__1(mach));
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s13,Data::F(unify::s_myin, { var1->Deref(), var3->Deref() }))),Data::F(unify::s3,unify::s1,Data::F(unify::s_uninit, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_myin, { var1->Deref(), var3->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s_init, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), unify::s_nonlast, var5 }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4);
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
	if(!((areg0)->Unify(Data::F(unify::s_uninit,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_my_compound, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,var5,unify::s_h),var1->Deref()),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_termtag, { var2->Deref(), var5->Deref() })),Data::F(unify::s3,Data::F(unify::s_unify_block,unify::s_nonlast,var2->Deref(),var6,var3->Deref(),var7,var8),Data::F(unify::s69,Data::F(unify::s_incl, { var1->Deref(), var7->Deref(), var4->Deref() }))))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_uninit,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_atomic, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,unify::s_tatm,var2->Deref()),var1->Deref()),Const::Nil),Data::F(unify::s69,Data::F(unify::s_incl, { var1->Deref(), var3->Deref(), var4->Deref() }))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_uninit,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_var, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s_unify_var, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_init,var1,var2,var3,var4,var5,var6),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_nonvar, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_termtag, { var2->Deref(), var7 })),Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_deref, { var1->Deref() }),Data::F(unify::s6,Data::F(unify::s_switch, { var7->Deref(), var1->Deref(), Data::F(unify::s6,Data::F(unify::s_trail, { var1->Deref() }),var8), var9, unify::s_fail }),Const::Nil)),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_unify_writemode, { var1->Deref(), var2->Deref(), var3->Deref(), var5->Deref(), var6->Deref(), var8->Deref(), Const::Nil })),Data::F(unify::s69,Data::F(unify::s_unify_readmode, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), var6->Deref(), var9->Deref(), Const::Nil }))))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8);
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
	if(!((areg0)->Unify(Data::F(unify::s_init,var1,var2,var3,var4,var5,var6),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_var, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s_unify_var, { var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_var,var1,var2,var3,var3->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_myin, { var1->Deref(), var3->Deref() }),Data::F(unify::s_myin, { var2->Deref(), var3->Deref() }))),Data::F(unify::s3,unify::s1,Data::F(unify::s6,Data::F(unify::s_unify, { var1->Deref(), var2->Deref(), unify::s_fail }),Const::Nil))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__9(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_var,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_myin, { var1->Deref(), var3->Deref() }),Data::F(unify::s13,Data::F(unify::s_myin, { var2->Deref(), var3->Deref() })))),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move, { var1->Deref(), var2->Deref() }),Const::Nil),Data::F(unify::s69,Data::F(unify::s_incl, { var2->Deref(), var3->Deref(), var4->Deref() }))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__10(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_var,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s13,Data::F(unify::s_myin, { var1->Deref(), var3->Deref() })),Data::F(unify::s_myin, { var2->Deref(), var3->Deref() }))),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move, { var2->Deref(), var1->Deref() }),Const::Nil),Data::F(unify::s69,Data::F(unify::s_incl, { var1->Deref(), var3->Deref(), var4->Deref() }))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__11(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_var,var1,var2,var3,var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s13,Data::F(unify::s_myin, { var1->Deref(), var3->Deref() })),Data::F(unify::s13,Data::F(unify::s_myin, { var2->Deref(), var3->Deref() })))),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,unify::s_tvar,unify::s_h),var1->Deref()),Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,unify::s_tvar,unify::s_h),var2->Deref()),Data::F(unify::s6,Data::F(unify::s_add,unify::posint1,unify::s_h),Data::F(unify::s6,Data::F(unify::s_move, { var2->Deref(), Data::F(unify::s6,Data::F(unify::s4,unify::s_h,unify::posint1),Const::Nil) }),Const::Nil)))),Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_incl, { var1->Deref(), var3->Deref(), var5 }),Data::F(unify::s_incl, { var2->Deref(), var5->Deref(), var4->Deref() })))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__12(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__13);
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
	if(!((areg0)->Unify(Data::F(unify::s_unify_readmode,var1,var2,var3,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_structure, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_equal,Data::F(unify::s6, { var1->Deref(), Const::Nil }),Data::F(unify::s14,unify::s_tatm,Data::F(unify::s7,var6,var7)),unify::s_fail),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_functor, { var2->Deref(), var6->Deref(), var7->Deref() })),Data::F(unify::s_unify_args,unify::posint1,var7->Deref(),var2->Deref(),var3->Deref(),var4->Deref(),unify::posint0,var1->Deref(),var5->Deref()))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__13(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_readmode,var1,var2,var3,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_cons, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s_unify_args,unify::posint1,unify::posint2,var2->Deref(),var3->Deref(),var4->Deref(),unify::negint1,var1->Deref(),var5->Deref()))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__14(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_readmode,var1,var2,var3,var3->Deref(),var4),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_atomic, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s6,Data::F(unify::s_equal, { var1->Deref(), Data::F(unify::s14,unify::s_tatm,var2->Deref()), unify::s_fail }),Const::Nil))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__15(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__16);
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
	if(!((areg0)->Unify(Data::F(unify::s_unify_args,var1,var2,var3,var4,var4->Deref(),var5,var6,var7),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s12, { var1->Deref(), var2->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__16(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_unify_args,var1,var2,var3,var4,var5,var6,var7,Data::F(unify::s6,var8,var9)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s10, { var1->Deref(), var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s_unify_arg, { var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), unify::s_last, var9->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__17(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_unify_args,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s9, { var1->Deref(), var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s_unify_arg, { var1->Deref(), var3->Deref(), var4->Deref(), var9, var6->Deref(), var7->Deref(), unify::s_nonlast, var10 }),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_is,var11,Data::F(unify::s2, { var1->Deref(), unify::posint1 }))),Data::F(unify::s_unify_args, { var11->Deref(), var2->Deref(), var3->Deref(), var9->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var8->Deref() }))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__18(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_unify_arg,var1,var2,var3,var4,var5,var6,var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s6,Data::F(unify::s2, { var6->Deref(), var9 }),Const::Nil),var10),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_is, { var9->Deref(), Data::F(unify::s2, { var1->Deref(), var5->Deref() }) }),Data::F(unify::s3,Data::F(unify::s_incl, { var10->Deref(), var3->Deref(), var11 }),Data::F(unify::s_arg, { var1->Deref(), var2->Deref(), var12 })))),Data::F(unify::s_init, { var10->Deref(), var12->Deref(), var11->Deref(), var4->Deref(), var7->Deref(), var8->Deref() }))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__19(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__20);
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
	if(!((areg0)->Unify(Data::F(unify::s_unify_writemode,var1,var2,var3,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_my_compound, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,var6,unify::s_h),Data::F(unify::s6, { var1->Deref(), Const::Nil })),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_termtag, { var2->Deref(), var6->Deref() })),Data::F(unify::s_unify_block, { var4->Deref(), var2->Deref(), var7, var3->Deref(), var8, var5->Deref() }))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__20(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_writemode,var1,var2,var3,var4,var5),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_atomic, { var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,unify::s_tatm,var2->Deref()),Data::F(unify::s6, { var1->Deref(), Const::Nil })),Const::Nil))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__21(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_unify_block,unify::s_last,var1,var2,var3,var3->Deref(),Data::F(unify::s6,var4,var5)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_add, { var2->Deref(), unify::s_h }),Data::F(unify::s6,Data::F(unify::s_jump, { var4->Deref() }),Const::Nil)),Data::F(unify::s69,Data::F(unify::s_size, { var1->Deref(), unify::posint0, var2->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__22(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__23);
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
	if(!((areg0)->Unify(Data::F(unify::s_unify_block,unify::s_nonlast,var1,var2,var3,var4,Data::F(unify::s6,var5,var6)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_add, { var2->Deref(), unify::s_h }),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_size, { var1->Deref(), unify::posint0, var2->Deref() }),Data::F(unify::s_is,var7,Data::F(unify::s4, { var2->Deref() })))),Data::F(unify::s_block, { var1->Deref(), var7->Deref(), unify::posint0, var3->Deref(), var4->Deref(), var6->Deref() })))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__23(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_block,var1,var2,var3,var4,var5,var6),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_structure, { var1->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,unify::s_tatm,Data::F(unify::s7,var7,var8)),Data::F(unify::s6,Data::F(unify::s2,unify::s_h,var2->Deref()),Const::Nil)),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_functor, { var1->Deref(), var7->Deref(), var8->Deref() }),Data::F(unify::s3,Data::F(unify::s_is,var9,Data::F(unify::s2,Data::F(unify::s2, { var2->Deref(), var8->Deref() }),unify::posint1)),Data::F(unify::s_is,var10,Data::F(unify::s2, { var2->Deref(), unify::posint1 }))))),Data::F(unify::s3,Data::F(unify::s_make_slots,unify::posint1,var8->Deref(),var1->Deref(),var10->Deref(),var11,var4->Deref(),var12),Data::F(unify::s_block_args,unify::posint1,var8->Deref(),var1->Deref(),var9->Deref(),var3->Deref(),var11->Deref(),var12->Deref(),var5->Deref(),var6->Deref())))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__24(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_block,var1,var2,var3,var4,var5,var6),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_cons, { var1->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_is,var7,Data::F(unify::s2, { var2->Deref(), unify::posint2 }))),Data::F(unify::s3,Data::F(unify::s_make_slots,unify::posint1,unify::posint2,var1->Deref(),var2->Deref(),var8,var4->Deref(),var9),Data::F(unify::s_block_args,unify::posint1,unify::posint2,var1->Deref(),var7->Deref(),var3->Deref(),var8->Deref(),var9->Deref(),var5->Deref(),var6->Deref()))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__25(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__26);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_block,var1,var2,var2->Deref(),var3,var3->Deref(),Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_atomic, { var1->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__26(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__27);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_block,var1,var2,var2->Deref(),var3,var3->Deref(),Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_var, { var1->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__27(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__28);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_block_args,var1,var2,var3,var4,var4->Deref(),Const::Nil,var5,var5->Deref(),Const::Nil),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s12, { var1->Deref(), var2->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__28(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__29);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_block_args,var1,var2,var3,var4,var5,Data::F(unify::s6, { var4->Deref(), Const::Nil }),var6,var7,Data::F(unify::s6,var8,var9)),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s10, { var1->Deref(), var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_label, { var8->Deref() }),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_arg, { var1->Deref(), var3->Deref(), var10 })),Data::F(unify::s_block, { var10->Deref(), var4->Deref(), var5->Deref(), var6->Deref(), var7->Deref(), var9->Deref() }))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__29(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__30);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_block_args,var1,var2,var3,var4,var5,Data::F(unify::s6, { var4->Deref(), var6 }),var7,var8,var9),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s9, { var1->Deref(), var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_arg, { var1->Deref(), var3->Deref(), var10 })),Data::F(unify::s3,Data::F(unify::s_block, { var10->Deref(), var4->Deref(), var11, var7->Deref(), var12, var13 }),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_is,var14,Data::F(unify::s2, { var1->Deref(), unify::posint1 }))),Data::F(unify::s_block_args, { var14->Deref(), var2->Deref(), var3->Deref(), var11->Deref(), var5->Deref(), var6->Deref(), var12->Deref(), var8->Deref(), var9->Deref() })))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__30(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__31);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = Data::V(mach);
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_make_slots,var1,var2,var3,var4,Const::Nil,var5,var5->Deref()),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s12, { var1->Deref(), var2->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__31(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__32);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
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
	if(!((areg0)->Unify(Data::F(unify::s_make_slots,var1,var2,var3,var4,Data::F(unify::s6,var5,var6),var7,var8),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s11, { var1->Deref(), var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_arg, { var1->Deref(), var3->Deref(), var9 })),Data::F(unify::s3,Data::F(unify::s_init_var, { var9->Deref(), var4->Deref(), var7->Deref() }),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_incl, { var9->Deref(), var7->Deref(), var10 }),Data::F(unify::s_make_word, { var9->Deref(), var5->Deref(), var11 }))),Data::F(unify::s3,Data::F(unify::s6,Data::F(unify::s_move, { var11->Deref(), Data::F(unify::s6,Data::F(unify::s2,unify::s_h,var4->Deref()),Const::Nil) }),Const::Nil),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_is,var12,Data::F(unify::s2, { var4->Deref(), unify::posint1 })),Data::F(unify::s_is,var13,Data::F(unify::s2, { var1->Deref(), unify::posint1 })))),Data::F(unify::s_make_slots, { var13->Deref(), var2->Deref(), var3->Deref(), var12->Deref(), var6->Deref(), var10->Deref(), var8->Deref() })))))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__32(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__33);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_init_var,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_var, { var1->Deref() }),Data::F(unify::s13,Data::F(unify::s_myin, { var1->Deref(), var3->Deref() })))),Data::F(unify::s3,unify::s1,Data::F(unify::s6,Data::F(unify::s_move,Data::F(unify::s14,unify::s_tvar,Data::F(unify::s2,unify::s_h,var2->Deref())),var1->Deref()),Const::Nil))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__33(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__34);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_init_var,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s3,Data::F(unify::s_var, { var1->Deref() }),Data::F(unify::s_myin, { var1->Deref(), var3->Deref() }))),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__34(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__35);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_init_var,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_nonvar, { var1->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__35(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__36);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_size,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_structure, { var1->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_functor, { var1->Deref(), var2, var3 })),Data::F(unify::s3,Data::F(unify::s_add,unify::posint1),Data::F(unify::s3,Data::F(unify::s_add, { var3->Deref() }),Data::F(unify::s_size_args,unify::posint1,var3->Deref(),var1->Deref())))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__36(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__37);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_size,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_cons, { var1->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s_add,unify::posint2),Data::F(unify::s_size_args,unify::posint1,unify::posint2,var1->Deref())))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__37(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__38);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_size,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_atomic, { var1->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__38(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__39);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_size,var1),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_var, { var1->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__39(Prolog* mach) {
		mach->FillAlternative(SxxMachine::Builtins::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__40);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(Data::F(unify::s_size_args,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s12, { var1->Deref(), var2->Deref() })),unify::s1),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__40(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(unify::s_size_args,var1,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s11, { var1->Deref(), var2->Deref() })),Data::F(unify::s3,unify::s1,Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_arg, { var1->Deref(), var3->Deref(), var4 })),Data::F(unify::s3,Data::F(unify::s_size, { var4->Deref() }),Data::F(unify::s3,Data::F(unify::s69,Data::F(unify::s_is,var5,Data::F(unify::s2, { var1->Deref(), unify::posint1 }))),Data::F(unify::s_size_args, { var5->Deref(), var2->Deref(), var3->Deref() })))))),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_make_word_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_make_word_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_make_word_3__1(mach));
	}

	Operation* unify::pred_make_word_3::exec_pred_make_word_3__1(Prolog* mach) {
		mach->FillAlternative(pred_make_word_3::exec_pred_make_word_3__2);
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
	if(!((areg2)->Unify(Data::F(unify::s14,var3,Data::F(unify::s2,unify::s_h,var2->Deref())),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(Data::F(unify::s_termtag, { var1->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_my_compound_1::exec_static);
	}

	Operation* unify::pred_make_word_3::exec_pred_make_word_3__2(Prolog* mach) {
		mach->FillAlternative(pred_make_word_3::exec_pred_make_word_3__3);
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
	local_aregs[1] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(unify::s_var->FindProc(1));
	}

	Operation* unify::pred_make_word_3::exec_pred_make_word_3__3(Prolog* mach) {
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
	if(!((areg2)->Unify(Data::F(unify::s14,unify::s_tatm,var1->Deref()),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = mach->HC(continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<Operation*>(unify::s_atomic->FindProc(1));
	}

	Operation* unify::pred_add_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_add_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_add_3__1(mach));
	}

	Operation* unify::pred_add_3::exec_pred_add_3__1(Prolog* mach) {
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
	local_aregs[0] = var3->Deref();
	local_aregs[1] = Data::F(unify::s2, { var2->Deref(), var1->Deref() });
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<Operation*>(unify::s_is->FindProc(2));
	}

	Operation* unify::pred_myin_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_myin_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_myin_2__1(mach));
	}

	Operation* unify::pred_myin_2::exec_pred_myin_2__1(Prolog* mach) {
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
	if(!((areg1)->Unify(Data::F(unify::s6,var2,var3),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = Data::F(unify::s_in_2, { var4->Deref(), var1->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(unify::s_compare->FindProc(3));
	}

	Operation* unify::pred_in_2_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_in_2_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_in_2_3__1(mach));
	}

	Operation* unify::pred_in_2_3::exec_pred_in_2_3__1(Prolog* mach) {
		mach->FillAlternative(pred_in_2_3::exec_pred_in_2_3__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(unify::s10,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var2,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_in_2_3::exec_pred_in_2_3__2(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(unify::s12,mach))) {
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
	return static_cast<Operation*>(pred_myin_2::exec_static);
	}

	Operation* unify::pred_incl_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_incl_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_incl_3__1(mach));
	}

	Operation* unify::pred_incl_3::exec_pred_incl_3__1(Prolog* mach) {
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
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var3->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_incl_2_3::exec_static);
	}

	Operation* unify::pred_incl_2_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_incl_2_3::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
	std::vector<Term*> aregs = mach->RegPull(3);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_incl_2_3__1(mach));
	}

	Operation* unify::pred_incl_2_3::exec_pred_incl_2_3__1(Prolog* mach) {
		mach->FillAlternative(pred_incl_2_3::exec_pred_incl_2_3__2);
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
	if(!((areg2)->Unify(Data::F(unify::s6, { var1->Deref(), Const::Nil }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_incl_2_3::exec_pred_incl_2_3__2(Prolog* mach) {
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
	if(!((areg0)->Unify(Data::F(unify::s6,var1,var2),mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(var3,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg2)->Unify(var4,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var1->Deref();
	local_aregs[3] = Data::F(unify::s_incl_3, { var5->Deref(), var3->Deref(), var1->Deref(), var2->Deref(), var4->Deref(), continuation });
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(unify::s_compare->FindProc(3));
	}

	Operation* unify::pred_incl_3_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_incl_3_5::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
	std::vector<Term*> aregs = mach->RegPull(5);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_incl_3_5__1(mach));
	}

	Operation* unify::pred_incl_3_5::exec_pred_incl_3_5__1(Prolog* mach) {
		mach->FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(unify::s9,mach))) {
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
	if(!((areg4)->Unify(Data::F(unify::s6, { var1->Deref(), Data::F(unify::s6, { var2->Deref(), var3->Deref() }) }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_incl_3_5::exec_pred_incl_3_5__2(Prolog* mach) {
		mach->FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(unify::s10,mach))) {
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
	if(!((areg4)->Unify(Data::F(unify::s6, { var2->Deref(), var3->Deref() }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return Prolog::Call1;
	}

	Operation* unify::pred_incl_3_5::exec_pred_incl_3_5__3(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[5];
	Term* areg4 = local_aregs[4]->Deref();
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = Data::V(mach);
	Var* var3 = Data::V(mach);
	Var* var2 = Data::V(mach);
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(unify::s12,mach))) {
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
	if(!((areg4)->Unify(Data::F(unify::s6, { var2->Deref(), var4 }),mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[5] = local_aregs[4] = nullptr;
	return static_cast<Operation*>(pred_incl_2_3::exec_static);
	}

	Operation* unify::pred_my_compound_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_my_compound_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_my_compound_1__1(mach));
	}

	Operation* unify::pred_my_compound_1::exec_pred_my_compound_1__1(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = Data::F(unify::s_not,Data::F(unify::s_atomic, { var1->Deref() }),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(unify::s_nonvar->FindProc(1));
	}

	Operation* unify::pred_cons_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_cons_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_cons_1__1(mach));
	}

	Operation* unify::pred_cons_1::exec_pred_cons_1__1(Prolog* mach) {
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
	local_aregs[1] = Data::F(unify::s_unify,Data::F(unify::s6,var2,var3),var1->Deref(),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(unify::s_nonvar->FindProc(1));
	}

	Operation* unify::pred_structure_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_structure_1::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
	std::vector<Term*> aregs = mach->RegPull(1);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_structure_1__1(mach));
	}

	Operation* unify::pred_structure_1::exec_pred_structure_1__1(Prolog* mach) {
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
	local_aregs[1] = Data::F(unify::s_not,Data::F(unify::s10, { var1->Deref(), Data::F(unify::s6,var2,var3) }),continuation);
	mach->CUTB = mach->CurrentChoice;
	return static_cast<Operation*>(pred_my_compound_1::exec_static);
	}

	Operation* unify::pred_termtag_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation* unify::pred_termtag_2::exec_static(Prolog* mach) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
	std::vector<Term*> aregs = mach->RegPull(2);
	mach->CreateChoicePoint(aregs);
	return static_cast<Operation*>(exec_pred_termtag_2__1(mach));
	}

	Operation* unify::pred_termtag_2::exec_pred_termtag_2__1(Prolog* mach) {
		mach->FillAlternative(pred_termtag_2::exec_pred_termtag_2__2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(unify::s_tstr,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_structure_1::exec_static);
	}

	Operation* unify::pred_termtag_2::exec_pred_termtag_2__2(Prolog* mach) {
		mach->FillAlternative(pred_termtag_2::exec_pred_termtag_2__3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(unify::s_tlst,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(pred_cons_1::exec_static);
	}

	Operation* unify::pred_termtag_2::exec_pred_termtag_2__3(Prolog* mach) {
		mach->FillAlternative(pred_termtag_2::exec_pred_termtag_2__4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(unify::s_tatm,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(unify::s_atomic->FindProc(1));
	}

	Operation* unify::pred_termtag_2::exec_pred_termtag_2__4(Prolog* mach) {
		mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = Data::V(mach);
	if(!((areg0)->Unify(var1,mach))) {
		return Prolog::Fail0;
	}
	if(!((areg1)->Unify(unify::s_tvar,mach))) {
		return Prolog::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<Operation*>(unify::s_var->FindProc(1));
	}
}
