using namespace std;

#include "browse.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "../../bootlib/SxxMachine/sxx_library.h"
#include "../../bootlib/SxxMachine/sxx_meta.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  browse::s_cut = Data::Intern("cut");
Const* const  browse::s1 = Data::Intern("$concat");
Const* const  browse::s2 = Data::Intern("*");
Const* const  browse::s3 = Data::Intern(",");
Const* const  browse::s4 = Data::Intern("-");
Const* const  browse::s5 = Data::Intern("->");
Const* const  browse::s6 = Data::Intern(".");
Const* const  browse::s7 = Data::Intern(":-");
Const* const  browse::s8 = Data::Intern("=");
Const* const  browse::s9 = Data::Intern("=:=");
Const* const  browse::s_a = Data::Intern("a");
Const* const  browse::s_arg = Data::Intern("arg");
Const* const  browse::s_atom = Data::Intern("atom");
Const* const  browse::s_b = Data::Intern("b");
Const* const  browse::s_call = Data::Intern("call");
Const* const  browse::s_dummy = Data::Intern("dummy");
Const* const  browse::s_fail = Data::Intern("fail");
Const* const  browse::s_fill = Data::Intern("fill");
Const* const  browse::s_functor = Data::Intern("functor");
Const* const  browse::s_get_pats = Data::Intern("get_pats");
Const* const  browse::s_init = Data::Intern("init");
Const* const  browse::s_investigate = Data::Intern("investigate");
Const* const  browse::s_is = Data::Intern("is");
Const* const  browse::s_length = Data::Intern("length");
Const* const  browse::s_match = Data::Intern("match");
Const* const  browse::s_mod = Data::Intern("mod");
Const* const  browse::s_nonvar = Data::Intern("nonvar");
Const* const  browse::s_or = Data::Intern("or");
Const* const  browse::s_p_investigate = Data::Intern("p_investigate");
Const* const  browse::s_p_match = Data::Intern("p_match");
Const* const  browse::s_pattern = Data::Intern("pattern");
Const* const  browse::s_property = Data::Intern("property");
Const* const  browse::s_randomize = Data::Intern("randomize");
Const* const  browse::s_split = Data::Intern("split");
Const* const  browse::s_star = Data::Intern("star");
Const* const  browse::s_top = Data::Intern("top");
Const* const  browse::s_true = Data::Intern("true");
Const* const  browse::s_unify = Data::Intern("unify");
Const* const  browse::s_var = Data::Intern("var");
Int* const  browse::posint0 = Data::Number(0LL);
Int* const  browse::posint1 = Data::Number(1LL);
Int* const  browse::posint4 = Data::Number(4LL);
Int* const  browse::posint10 = Data::Number(10LL);
Int* const  browse::posint17 = Data::Number(17LL);
Int* const  browse::posint21 = Data::Number(21LL);
Int* const  browse::posint100 = Data::Number(100LL);
Int* const  browse::posint251 = Data::Number(251LL);
const Operation browse::reg_top_0 = PredTable::Register("top", 0, new SxxMachine::sxx_library::pred_top_0());
const Operation browse::reg_init_5 = PredTable::Register("init", 5, new pred_init_5());
const Operation browse::reg_init_6 = PredTable::Register("init", 6, new pred_init_6());
const Operation browse::reg_fill_3 = PredTable::Register("fill", 3, new pred_fill_3());
const Operation browse::reg_randomize_3 = PredTable::Register("randomize", 3, new pred_randomize_3());
const Operation browse::reg_split_4 = PredTable::Register("split", 4, new SxxMachine::sxx_library::pred_split_4());
const Operation browse::reg_investigate_2 = PredTable::Register("investigate", 2, new pred_investigate_2());
const Operation browse::reg_get_pats_3 = PredTable::Register("get_pats", 3, new pred_get_pats_3());
const Operation browse::reg_get_pats_4 = PredTable::Register("get_pats", 4, new pred_get_pats_4());
const Operation browse::reg_property_3 = PredTable::Register("property", 3, new pred_property_3());
const Operation browse::reg_p_investigate_2 = PredTable::Register("p_investigate", 2, new pred_p_investigate_2());
const Operation browse::reg_p_match_2 = PredTable::Register("p_match", 2, new pred_p_match_2());
const Operation browse::reg_match_2 = PredTable::Register("match", 2, new pred_match_2());
const Operation browse::reg_$0024concat_3 = PredTable::Register("$concat", 3, new pred_$0024concat_3());

	Operation browse::pred_top_0::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_top_0::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0]} ;*/
		std::vector<Term*> aregs = mach->RegPull(0);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_top_0__1(mach));
	}

	Operation browse::pred_top_0::exec_pred_top_0__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[0];
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
		local_aregs[0] = browse::posint100;
		local_aregs[1] = browse::posint10;
		local_aregs[2] = browse::posint4;
		local_aregs[3] = Data::F(browse::s6, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Const::Nil))))))))))))))))), Data::F(browse::s6, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Const::Nil)), Data::F(browse::s6, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_b, Const::Nil)), Const::Nil)))))))))), Data::F(browse::s6, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_a, Const::Nil)), Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_a, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_a, Const::Nil))))))))), Const::Nil)));
		local_aregs[4] = var1;
		local_aregs[5] = Data::F(browse::s_randomize, { var1->Deref(), var2, browse::posint21, mach->HC(Data::F(browse::s_investigate, { var2->Deref(), Data::F(browse::s6, Data::F(browse::s6, Data::F(browse::s_star, var3), Data::F(browse::s6, var4, Data::F(browse::s6, Data::F(browse::s_star, var5), Data::F(browse::s6, { var4->Deref(), Data::F(browse::s6, browse::s_a, Data::F(browse::s6, Data::F(browse::s_star, { var3->Deref() }), Data::F(browse::s6, browse::s_a, Data::F(browse::s6, Data::F(browse::s_star, { var5->Deref() }), Data::F(browse::s6, Data::F(browse::s_star, { var3->Deref() }), Const::Nil))))) })))), Data::F(browse::s6, Data::F(browse::s6, Data::F(browse::s_star, { var3->Deref() }), Data::F(browse::s6, Data::F(browse::s_star, { var5->Deref() }), Data::F(browse::s6, Data::F(browse::s_star, { var5->Deref() }), Data::F(browse::s6, Data::F(browse::s_star, { var3->Deref() }), Data::F(browse::s6, Data::F(browse::s6, Data::F(browse::s_star, { var3->Deref() }), Const::Nil), Data::F(browse::s6, Data::F(browse::s6, Data::F(browse::s_star, { var5->Deref() }), Const::Nil), Const::Nil)))))), Data::F(browse::s6, Data::F(browse::s6, var6, Data::F(browse::s6, var7, Data::F(browse::s6, Data::F(browse::s_star, var8), Data::F(browse::s6, Data::F(browse::s6, browse::s_b, Data::F(browse::s6, browse::s_a, Const::Nil)), Data::F(browse::s6, Data::F(browse::s_star, var9), Data::F(browse::s6, var10, Data::F(browse::s6, var11, Const::Nil))))))), Const::Nil))), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_init_5::exec_static);
	}

	Operation browse::pred_init_5::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_init_5::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
		std::vector<Term*> aregs = mach->RegPull(5);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_init_5__1(mach));
	}

	Operation browse::pred_init_5::exec_pred_init_5__1(Prolog* mach) {
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = var4->Deref();
		local_aregs[5] = var5->Deref();
		local_aregs[6] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_init_6::exec_static);
	}

	Operation browse::pred_init_6::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_init_6::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
		std::vector<Term*> aregs = mach->RegPull(6);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_init_6__1(mach));
	}

	Operation browse::pred_init_6::exec_pred_init_6__1(Prolog* mach) {
		mach->FillAlternative(pred_init_6::exec_pred_init_6__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
		Term* areg5 = local_aregs[5]->Deref();
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
		if(!((areg0)->Unify(browse::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(var5))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_init_6::exec_pred_init_6__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[6];
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg4)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg5)->Unify(Data::F(browse::s6, var6, var7)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Const::Nil;
		local_aregs[2] = var8;
		local_aregs[3] = Data::F(browse::s_get_pats, { var4->Deref(), var5->Deref(), var9, Data::F(browse::s_is, var10, Data::F(browse::s4, { var3->Deref(), var2->Deref() }), Data::F(browse::s_fill, { var10->Deref(), Data::F(browse::s6, Data::F(browse::s_pattern, { var9->Deref() }), var8->Deref()), var6->Deref(), Data::F(browse::s_is, var11, Data::F(browse::s4, { var1->Deref(), browse::posint1 }), Data::F(browse::s_or, Data::F(browse::s5, Data::F(browse::s9, { var2->Deref(), browse::posint0 }), Data::F(browse::s_is, var12, var3->Deref())), Data::F(browse::s_is, { var12->Deref(), Data::F(browse::s4, { var2->Deref(), browse::posint1 }) }), Data::F(browse::s_init, { var11->Deref(), var12->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), var7->Deref(), continuation }))) })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = nullptr;
		return static_cast<Operation>(pred_fill_3::exec_static);
	}

	Operation browse::pred_fill_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_fill_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_fill_3__1(mach));
	}

	Operation browse::pred_fill_3::exec_pred_fill_3__1(Prolog* mach) {
		mach->FillAlternative(pred_fill_3::exec_pred_fill_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(browse::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_fill_3::exec_pred_fill_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(browse::s6, Data::F(browse::s_dummy, { Const::Nil }), var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(browse::s4, { var1->Deref(), browse::posint1 });
		local_aregs[2] = Data::F(browse::s_fill, { var4->Deref(), var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation browse::pred_randomize_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_randomize_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_randomize_3__1(mach));
	}

	Operation browse::pred_randomize_3::exec_pred_randomize_3__1(Prolog* mach) {
		mach->FillAlternative(pred_randomize_3::exec_pred_randomize_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_randomize_3::exec_pred_randomize_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(browse::s6, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var5;
		local_aregs[2] = Data::F(browse::s_is, var6, Data::F(browse::s_mod, Data::F(browse::s2, { var4->Deref(), browse::posint17 }), browse::posint251), Data::F(browse::s_is, var7, Data::F(browse::s_mod, { var6->Deref(), var5->Deref() }), Data::F(browse::s_split, { var7->Deref(), var1->Deref(), var2->Deref(), var8, Data::F(browse::s_randomize, { var8->Deref(), var3->Deref(), var6->Deref(), continuation }) })));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_length_2::exec_static);
	}

	Operation browse::pred_split_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_split_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_split_4__1(mach));
	}

	Operation browse::pred_split_4::exec_pred_split_4__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_library::pred_split_4::exec_pred_split_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(browse::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2->Deref()))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_split_4::exec_pred_split_4__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(browse::s6, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(Data::F(browse::s6, { var2->Deref(), var5 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = Data::F(browse::s4, { var1->Deref(), browse::posint1 });
		local_aregs[2] = Data::F(browse::s_split, { var6->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation browse::pred_investigate_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_investigate_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_investigate_2__1(mach));
	}

	Operation browse::pred_investigate_2::exec_pred_investigate_2__1(Prolog* mach) {
		mach->FillAlternative(pred_investigate_2::exec_pred_investigate_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_investigate_2::exec_pred_investigate_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = browse::s_pattern;
		local_aregs[2] = var4;
		local_aregs[3] = Data::F(browse::s_p_investigate, { var4->Deref(), var3->Deref(), Data::F(browse::s_investigate, { var2->Deref(), var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_property_3::exec_static);
	}

	Operation browse::pred_get_pats_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_get_pats_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_get_pats_3__1(mach));
	}

	Operation browse::pred_get_pats_3::exec_pred_get_pats_3__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = var3->Deref();
		local_aregs[3] = var2->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_get_pats_4::exec_static);
	}

	Operation browse::pred_get_pats_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_get_pats_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_get_pats_4__1(mach));
	}

	Operation browse::pred_get_pats_4::exec_pred_get_pats_4__1(Prolog* mach) {
		mach->FillAlternative(pred_get_pats_4::exec_pred_get_pats_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(browse::posint0))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var2))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_get_pats_4::exec_pred_get_pats_4__2(Prolog* mach) {
		mach->FillAlternative(pred_get_pats_4::exec_pred_get_pats_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(browse::s6, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(browse::s6, { var2->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var6;
		local_aregs[1] = Data::F(browse::s4, { var1->Deref(), browse::posint1 });
		local_aregs[2] = Data::F(browse::s_get_pats, { var6->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_is_2::exec_static);
	}

	Operation browse::pred_get_pats_4::exec_pred_get_pats_4__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg3)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var2->Deref();
		local_aregs[3] = var3->Deref();
		local_aregs[4] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_get_pats_4::exec_static);
	}

	Operation browse::pred_property_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_property_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_property_3__1(mach));
	}

	Operation browse::pred_property_3::exec_pred_property_3__1(Prolog* mach) {
		mach->FillAlternative(pred_property_3::exec_pred_property_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_fail_0::exec_static);
	}

	Operation browse::pred_property_3::exec_pred_property_3__2(Prolog* mach) {
		mach->FillAlternative(pred_property_3::exec_pred_property_3__3);
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
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var5;
		local_aregs[3] = mach->HC(Data::F(browse::s_arg, browse::posint1, var1->Deref(), var4->Deref(), continuation));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_functor_3::exec_static);
	}

	Operation browse::pred_property_3::exec_pred_property_3__3(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_property_3::exec_static);
	}

	Operation browse::pred_p_investigate_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_p_investigate_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_p_investigate_2__1(mach));
	}

	Operation browse::pred_p_investigate_2::exec_pred_p_investigate_2__1(Prolog* mach) {
		mach->FillAlternative(pred_p_investigate_2::exec_pred_p_investigate_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_p_investigate_2::exec_pred_p_investigate_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = var1->Deref();
		local_aregs[2] = Data::F(browse::s_p_investigate, { var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_p_match_2::exec_static);
	}

	Operation browse::pred_p_match_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_p_match_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_p_match_2__1(mach));
	}

	Operation browse::pred_p_match_2::exec_pred_p_match_2__1(Prolog* mach) {
		mach->FillAlternative(pred_p_match_2::exec_pred_p_match_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_p_match_2::exec_pred_p_match_2__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(browse::s3, Data::F(browse::s_match, { var3->Deref(), var1->Deref() }), browse::s_fail);
		local_aregs[1] = browse::s_true;
		local_aregs[2] = Data::F(browse::s_p_match, { var2->Deref(), var3->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_or_2::exec_static);
	}

	Operation browse::pred_match_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_match_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_match_2__1(mach));
	}

	Operation browse::pred_match_2::exec_pred_match_2__1(Prolog* mach) {
		mach->FillAlternative(pred_match_2::exec_pred_match_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_match_2::exec_pred_match_2__2(Prolog* mach) {
		mach->FillAlternative(pred_match_2::exec_pred_match_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(browse::s6, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3->Deref();
		local_aregs[1] = mach->HC(Data::F(browse::s_unify, { var3->Deref(), var1->Deref(), Data::F(browse::s_match, { var2->Deref(), var4->Deref(), continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_var_1::exec_static);
	}

	Operation browse::pred_match_2::exec_pred_match_2__3(Prolog* mach) {
		mach->FillAlternative(pred_match_2::exec_pred_match_2__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var5 = Data::V(mach);
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(browse::s6, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = Data::F(browse::s_unify, Data::F(browse::s_star, var4), var2->Deref(), mach->HC(Data::F(browse::s1, { var4->Deref(), var5, var1->Deref(), Data::F(browse::s_match, { var5->Deref(), var3->Deref(), continuation }) })));
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_nonvar_1::exec_static);
	}

	Operation browse::pred_match_2::exec_pred_match_2__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(browse::s6, var3, var4)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = Data::F(browse::s5, Data::F(browse::s_atom, { var1->Deref() }), Data::F(browse::s8, { var1->Deref(), var3->Deref() }));
		local_aregs[1] = Data::F(browse::s_match, { var1->Deref(), var3->Deref() });
		local_aregs[2] = Data::F(browse::s_match, { var2->Deref(), var4->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_or_2::exec_static);
	}

	Operation browse::pred_$0024concat_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation browse::pred_$0024concat_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_$0024concat_3__1(mach));
	}

	Operation browse::pred_$0024concat_3::exec_pred_$0024concat_3__1(Prolog* mach) {
		mach->FillAlternative(pred_$0024concat_3::exec_pred_$0024concat_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1->Deref()))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation browse::pred_$0024concat_3::exec_pred_$0024concat_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(browse::s6, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(browse::s6, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(pred_$0024concat_3::exec_static);
	}
}
