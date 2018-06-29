using namespace std;

#include "sxx_read.h"
#include "../../machine/SxxMachine/Const.h"
#include "../../machine/SxxMachine/Int.h"
#include "../../machine/SxxMachine/Prolog.h"
#include "../../machine/SxxMachine/Term.h"
#include "../../machine/SxxMachine/Data.h"
#include "../../machine/SxxMachine/Var.h"
#include "../../machine/SxxMachine/Builtins.h"
#include "sxx_library.h"

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;
Const* const  sxx_read::s_cut = Data::Intern("cut");
Const* const  sxx_read::s1 = Data::Intern("#");
Const* const  sxx_read::s2 = Data::Intern("(");
Const* const  sxx_read::s3 = Data::Intern(")");
Const* const  sxx_read::s4 = Data::Intern("*");
Const* const  sxx_read::s5 = Data::Intern("+");
Const* const  sxx_read::s6 = Data::Intern(",");
Const* const  sxx_read::s7 = Data::Intern("-");
Const* const  sxx_read::s8 = Data::Intern("->");
Const* const  sxx_read::s9 = Data::Intern(".");
Const* const  sxx_read::s10 = Data::Intern("/");
Const* const  sxx_read::s11 = Data::Intern("//");
Const* const  sxx_read::s12 = Data::Intern(":");
Const* const  sxx_read::s13 = Data::Intern(":-");
Const* const  sxx_read::s14 = Data::Intern(";");
Const* const  sxx_read::s15 = Data::Intern("<");
Const* const  sxx_read::s16 = Data::Intern("<<");
Const* const  sxx_read::s17 = Data::Intern("=");
Const* const  sxx_read::s18 = Data::Intern("=..");
Const* const  sxx_read::s19 = Data::Intern("=:=");
Const* const  sxx_read::s20 = Data::Intern("=<");
Const* const  sxx_read::s21 = Data::Intern("==");
Const* const  sxx_read::s22 = Data::Intern(">");
Const* const  sxx_read::s23 = Data::Intern(">=");
Const* const  sxx_read::s24 = Data::Intern(">>");
Const* const  sxx_read::s25 = Data::Intern("?-");
Const* const  sxx_read::s26 = Data::Intern("@<");
Const* const  sxx_read::s27 = Data::Intern("@=<");
Const* const  sxx_read::s28 = Data::Intern("@>");
Const* const  sxx_read::s29 = Data::Intern("@>=");
Const* const  sxx_read::s30 = Data::Intern("[");
Const* const  sxx_read::s31 = Data::Intern("]");
Const* const  sxx_read::s32 = Data::Intern("^");
Const* const  sxx_read::s__ = Data::Intern("_");
Const* const  sxx_read::s_ap = Data::Intern("ap");
Const* const  sxx_read::s_call = Data::Intern("call");
Const* const  sxx_read::s_collectvars = Data::Intern("collectvars");
Const* const  sxx_read::s_const = Data::Intern("const");
Const* const  sxx_read::s_end_of_clause = Data::Intern("end_of_clause");
Const* const  sxx_read::s_end_of_file = Data::Intern("end_of_file");
Const* const  sxx_read::s_fail = Data::Intern("fail");
Const* const  sxx_read::s_fx = Data::Intern("fx");
Const* const  sxx_read::s_fy = Data::Intern("fy");
Const* const  sxx_read::s_getargs = Data::Intern("getargs");
Const* const  sxx_read::s_halt = Data::Intern("halt");
Const* const  sxx_read::s_infix = Data::Intern("infix");
Const* const  sxx_read::s_int = Data::Intern("int");
Const* const  sxx_read::s_is = Data::Intern("is");
Const* const  sxx_read::s_maketerm = Data::Intern("maketerm");
Const* const  sxx_read::s_mod = Data::Intern("mod");
Const* const  sxx_read::s_newprec = Data::Intern("newprec");
Const* const  sxx_read::s_nexttoken = Data::Intern("nexttoken");
Const* const  sxx_read::s_noteq = Data::Intern("noteq");
Const* const  sxx_read::s_notvmember = Data::Intern("notvmember");
Const* const  sxx_read::s_prefix = Data::Intern("prefix");
Const* const  sxx_read::s_read = Data::Intern("read");
Const* const  sxx_read::s_readall = Data::Intern("readall");
Const* const  sxx_read::s_smallerorequal = Data::Intern("smallerorequal");
Const* const  sxx_read::s_unify = Data::Intern("unify");
Const* const  sxx_read::s_univ = Data::Intern("univ");
Const* const  sxx_read::s_var = Data::Intern("var");
Const* const  sxx_read::s_vread = Data::Intern("vread");
Const* const  sxx_read::s_xfx = Data::Intern("xfx");
Const* const  sxx_read::s_xfy = Data::Intern("xfy");
Const* const  sxx_read::s_yfx = Data::Intern("yfx");
Const* const  sxx_read::s66 = Data::Intern("|");
Int* const  sxx_read::posint1 = Data::Number(1LL);
Int* const  sxx_read::posint200 = Data::Number(200LL);
Int* const  sxx_read::posint300 = Data::Number(300LL);
Int* const  sxx_read::posint400 = Data::Number(400LL);
Int* const  sxx_read::posint500 = Data::Number(500LL);
Int* const  sxx_read::posint550 = Data::Number(550LL);
Int* const  sxx_read::posint700 = Data::Number(700LL);
Int* const  sxx_read::posint900 = Data::Number(900LL);
Int* const  sxx_read::posint1000 = Data::Number(1000LL);
Int* const  sxx_read::posint1050 = Data::Number(1050LL);
Int* const  sxx_read::posint1100 = Data::Number(1100LL);
Int* const  sxx_read::posint1200 = Data::Number(1200LL);
const Operation sxx_read::reg_vread_2 = PredTable::Register("vread", 2, new SxxMachine::sxx_read::pred_vread_2());
const Operation sxx_read::reg_read_1 = PredTable::Register("read", 1, new SxxMachine::sxx_read::pred_read_1());
const Operation sxx_read::reg_collectvars_3 = PredTable::Register("collectvars", 3, new SxxMachine::sxx_read::pred_collectvars_3());
const Operation sxx_read::reg_notvmember_2 = PredTable::Register("notvmember", 2, new SxxMachine::sxx_read::pred_notvmember_2());
const Operation sxx_read::reg_readall_2 = PredTable::Register("readall", 2, new SxxMachine::sxx_read::pred_readall_2());
const Operation sxx_read::reg_infix_3 = PredTable::Register("infix", 3, new SxxMachine::sxx_read::pred_infix_3());
const Operation sxx_read::reg_prefix_3 = PredTable::Register("prefix", 3, new SxxMachine::sxx_read::pred_prefix_3());
const Operation sxx_read::reg_maketerm_3 = PredTable::Register("maketerm", 3, new SxxMachine::sxx_read::pred_maketerm_3());
const Operation sxx_read::reg_newprec_4 = PredTable::Register("newprec", 4, new SxxMachine::sxx_read::pred_newprec_4());
const Operation sxx_read::reg_newprec_3 = PredTable::Register("newprec", 3, new SxxMachine::sxx_read::pred_newprec_3());
const Operation sxx_read::reg_getargs_2 = PredTable::Register("getargs", 2, new SxxMachine::sxx_read::pred_getargs_2());
const Operation sxx_read::reg_maketerm_2 = PredTable::Register("maketerm", 2, new SxxMachine::sxx_read::pred_maketerm_2());
const Operation sxx_read::reg_ap_3 = PredTable::Register("ap", 3, new SxxMachine::sxx_read::pred_ap_3());

	Operation sxx_read::pred_vread_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_vread_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_vread_2__1(mach));
	}

	Operation sxx_read::pred_vread_2::exec_pred_vread_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(sxx_read::s_readall, { var3->Deref(), var4, Data::F(sxx_read::s_maketerm, { var4->Deref(), var1->Deref(), mach->HC(Data::F(sxx_read::s_collectvars, { var4->Deref(), Const::Nil, var2->Deref(), continuation })) }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_nexttoken_1::exec_static);
	}

	Operation sxx_read::pred_read_1::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_read_1::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
		std::vector<Term*> aregs = mach->RegPull(1);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_read_1__1(mach));
	}

	Operation sxx_read::pred_read_1::exec_pred_read_1__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[1];
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2;
		local_aregs[1] = Data::F(sxx_read::s_readall, { var2->Deref(), var3, Data::F(sxx_read::s_maketerm, { var3->Deref(), var1->Deref(), mach->HC(continuation) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::Builtins::pred_nexttoken_1::exec_static);
	}

	Operation sxx_read::pred_collectvars_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_collectvars_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_collectvars_3__1(mach));
	}

	Operation sxx_read::pred_collectvars_3::exec_pred_collectvars_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_collectvars_3::exec_pred_collectvars_3__2);
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
		mach->DoCut(mach->CUTB);
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_collectvars_3::exec_pred_collectvars_3__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_collectvars_3::exec_pred_collectvars_3__3);
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_var, var1, var2, var3), var4)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var5))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = sxx_read::s__;
		local_aregs[2] = Data::F(sxx_read::s_notvmember, { var2->Deref(), var5->Deref(), mach->HC(Data::F(sxx_read::s_collectvars, { var4->Deref(), Data::F(sxx_read::s9, Data::F(sxx_read::s17, { var1->Deref(), var2->Deref() }), var5->Deref()), var6->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_library::pred_noteq_2::exec_static);
	}

	Operation sxx_read::pred_collectvars_3::exec_pred_collectvars_3__3(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, var1, var2)))) {
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
		return static_cast<Operation>(SxxMachine::sxx_read::pred_collectvars_3::exec_static);
	}

	Operation sxx_read::pred_notvmember_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_notvmember_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_notvmember_2__1(mach));
	}

	Operation sxx_read::pred_notvmember_2::exec_pred_notvmember_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_notvmember_2::exec_pred_notvmember_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
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

	Operation sxx_read::pred_notvmember_2::exec_pred_notvmember_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_notvmember_2::exec_pred_notvmember_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s17, var2, var1->Deref()), var3)))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_fail, { continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_notvmember_2::exec_pred_notvmember_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_read::s9, var2, var3)))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_notvmember_2::exec_static);
	}

	Operation sxx_read::pred_readall_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_readall_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_readall_2__1(mach));
	}

	Operation sxx_read::pred_readall_2::exec_pred_readall_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_readall_2::exec_pred_readall_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sxx_read::s_end_of_file))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_halt, { continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_readall_2::exec_pred_readall_2__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_readall_2::exec_pred_readall_2__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sxx_read::s_end_of_clause))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_unify, { Const::Nil, var1->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_readall_2::exec_pred_readall_2__3(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_read::s9, { var1->Deref(), var2 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(sxx_read::s_readall, { var3->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[2] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_nexttoken_1::exec_static);
	}

	Operation sxx_read::pred_infix_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_infix_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_infix_3__1(mach));
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint1200))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s13))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint1000))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfy))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s6))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint1100))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfy))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s14))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__5);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint1050))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfy))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s8))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s17))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__6(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__7);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s_is))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__7(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__8);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s18))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__8(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__9);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s21))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__9(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s26))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__10(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s28))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__11(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__12);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s27))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__12(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__13);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s29))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__13(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__14);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s19))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__14(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__15);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s15))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__15(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__16);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s20))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__16(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__17);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s22))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__17(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__18);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint700))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s23))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__18(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__19);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint550))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfy))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s12))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__19(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__20);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint500))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__20(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__21);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint500))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__21(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__22);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint500))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__22(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__23);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint400))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__23(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__24);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint400))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s10))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__24(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__25);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint400))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s11))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__25(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__26);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint400))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s16))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__26(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__27);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint400))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_yfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s24))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__27(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_infix_3::exec_pred_infix_3__28);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint300))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s_mod))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_infix_3::exec_pred_infix_3__28(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint200))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_xfy))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s32))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_prefix_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_prefix_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_prefix_3__1(mach));
	}

	Operation sxx_read::pred_prefix_3::exec_pred_prefix_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_prefix_3::exec_pred_prefix_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint1200))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_fx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s13))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_prefix_3::exec_pred_prefix_3__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_prefix_3::exec_pred_prefix_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint1200))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_fx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s25))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_prefix_3::exec_pred_prefix_3__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_prefix_3::exec_pred_prefix_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint500))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_fx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_prefix_3::exec_pred_prefix_3__4(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		if(!((areg0)->Unify(sxx_read::posint500))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(sxx_read::s_fx))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(sxx_read::s7))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_maketerm_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_maketerm_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_maketerm_3__1(mach));
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__2);
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_var, var1, var2, var3), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var4))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var5))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var4->Deref();
		local_aregs[2] = mach->HC(continuation);
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::Builtins::pred_unify_2::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_int, var1), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_unify, { var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__3(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__4);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, var1), Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_unify, { var1->Deref(), var2->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__4(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__5);
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, var1), Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s2), var2))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var5;
		local_aregs[2] = Data::F(sxx_read::s_univ, { var3->Deref(), var1->Deref(), var5->Deref(), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = nullptr;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_getargs_2::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__5(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__6);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
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
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(sxx_read::s9, Data::F(sxx_read::s_const, var5), var6);
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(sxx_read::s_infix, var7, var8, var5->Deref(), Data::F(sxx_read::s_smallerorequal, { var7->Deref(), var3->Deref(), Data::F(sxx_read::s_newprec, { var8->Deref(), var7->Deref(), var9, var10, Data::F(sxx_read::s_maketerm, { var4->Deref(), var11, var9->Deref(), Data::F(sxx_read::s_maketerm, { var6->Deref(), var12, var10->Deref(), Data::F(sxx_read::s_univ, { var2->Deref(), var5->Deref(), Data::F(sxx_read::s9, { var11->Deref(), Data::F(sxx_read::s9, { var12->Deref(), Const::Nil }) }), continuation }) }) }) }) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__6(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__7);
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, var1), var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var5;
		local_aregs[1] = var6;
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(sxx_read::s_smallerorequal, { var5->Deref(), var4->Deref(), Data::F(sxx_read::s_newprec, { var6->Deref(), var5->Deref(), var7, Data::F(sxx_read::s_maketerm, { var2->Deref(), var8, var7->Deref(), Data::F(sxx_read::s_univ, { var3->Deref(), var1->Deref(), Data::F(sxx_read::s9, { var8->Deref(), Const::Nil }), continuation }) }) }) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_prefix_3::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__7(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__8);
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s30), var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_read::s9, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var5;
		local_aregs[1] = Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s6), var6);
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(sxx_read::s_maketerm, { var5->Deref(), var2->Deref(), sxx_read::posint900, Data::F(sxx_read::s_maketerm, Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s30), var6->Deref()), var3->Deref(), sxx_read::posint900, continuation) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__8(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__9);
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s30), var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_read::s9, var2, var3)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var4))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var5;
		local_aregs[1] = Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s66), var6);
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(sxx_read::s_ap, var7, Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s31), Const::Nil), var6->Deref(), Data::F(sxx_read::s_maketerm, { var5->Deref(), var2->Deref(), sxx_read::posint900, Data::F(sxx_read::s_maketerm, { var7->Deref(), var3->Deref(), sxx_read::posint900, continuation }) }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__9(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__10);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s2), var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s3), Const::Nil);
		local_aregs[2] = var1->Deref();
		local_aregs[3] = mach->HC(Data::F(sxx_read::s_maketerm, { var4->Deref(), var2->Deref(), continuation }));
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__10(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_maketerm_3::exec_pred_maketerm_3__11);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var4 = Data::V(mach);
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s30), var1)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Data::F(sxx_read::s9, var2, Const::Nil)))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var3))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var4;
		local_aregs[1] = Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s31), Const::Nil);
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(sxx_read::s_maketerm, { var4->Deref(), var2->Deref(), sxx_read::posint900, continuation });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}

	Operation sxx_read::pred_maketerm_3::exec_pred_maketerm_3__11(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s30), Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s31), Const::Nil))))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(Const::Nil))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var1))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = continuation;
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_newprec_4::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_newprec_4::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
		std::vector<Term*> aregs = mach->RegPull(4);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_newprec_4__1(mach));
	}

	Operation sxx_read::pred_newprec_4::exec_pred_newprec_4__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_newprec_4::exec_pred_newprec_4__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sxx_read::s_xfx))) {
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
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_is, { var2->Deref(), Data::F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), Data::F(sxx_read::s_is, { var3->Deref(), Data::F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_newprec_4::exec_pred_newprec_4__2(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_newprec_4::exec_pred_newprec_4__3);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[4];
		Term* areg3 = local_aregs[3]->Deref();
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var3 = Data::V(mach);
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sxx_read::s_xfy))) {
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
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_is, { var2->Deref(), Data::F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), Data::F(sxx_read::s_unify, { var1->Deref(), var3->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_newprec_4::exec_pred_newprec_4__3(Prolog* mach) {
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
		if(!((areg0)->Unify(sxx_read::s_yfx))) {
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
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_is, { var3->Deref(), Data::F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), Data::F(sxx_read::s_unify, { var1->Deref(), var2->Deref(), continuation }) });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_newprec_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_newprec_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_newprec_3__1(mach));
	}

	Operation sxx_read::pred_newprec_3::exec_pred_newprec_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_newprec_3::exec_pred_newprec_3__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sxx_read::s_fx))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(var2))) {
			return Prolog::Fail0;
		}
		mach->DoCut(mach->CUTB);
		local_aregs[0] = Data::F(sxx_read::s_is, { var2->Deref(), Data::F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), continuation });
		mach->CUTB = mach->CurrentChoice;
		local_aregs[3] = local_aregs[2] = nullptr;
		return Prolog::Call1;
	}

	Operation sxx_read::pred_newprec_3::exec_pred_newprec_3__2(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[3];
		Term* areg2 = local_aregs[2]->Deref();
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(sxx_read::s_fy))) {
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

	Operation sxx_read::pred_getargs_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_getargs_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_getargs_2__1(mach));
	}

	Operation sxx_read::pred_getargs_2::exec_pred_getargs_2__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_getargs_2::exec_pred_getargs_2__2);
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
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
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s3), Const::Nil);
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(sxx_read::s_maketerm, { var3->Deref(), var4, sxx_read::posint900, Data::F(sxx_read::s_unify, Data::F(sxx_read::s9, { var4->Deref(), Const::Nil }), var2->Deref(), continuation) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}

	Operation sxx_read::pred_getargs_2::exec_pred_getargs_2__2(Prolog* mach) {
		mach->RemoveChoice();
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
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var3;
		local_aregs[1] = Data::F(sxx_read::s9, Data::F(sxx_read::s_const, sxx_read::s6), var4);
		local_aregs[2] = var1->Deref();
		local_aregs[3] = Data::F(sxx_read::s_maketerm, { var3->Deref(), var5, sxx_read::posint900, Data::F(sxx_read::s_unify, Data::F(sxx_read::s9, { var5->Deref(), var6 }), var2->Deref(), Data::F(sxx_read::s_getargs, { var4->Deref(), var6->Deref(), continuation })) });
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}

	Operation sxx_read::pred_maketerm_2::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_maketerm_2::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
		std::vector<Term*> aregs = mach->RegPull(2);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_maketerm_2__1(mach));
	}

	Operation sxx_read::pred_maketerm_2::exec_pred_maketerm_2__1(Prolog* mach) {
		mach->RemoveChoice();
		std::vector<Term*> local_aregs = mach->Areg;
		Term* continuation = local_aregs[2];
		Term* areg1 = local_aregs[1]->Deref();
		Term* areg0 = local_aregs[0]->Deref();
		Var* var2 = Data::V(mach);
		Var* var1 = Data::V(mach);
		if(!((areg0)->Unify(var1))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var2))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var1->Deref();
		local_aregs[1] = var2->Deref();
		local_aregs[2] = sxx_read::posint1200;
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_maketerm_3::exec_static);
	}

	Operation sxx_read::pred_ap_3::Exec(Prolog* mach) {
		return exec_static(mach);
	}

	Operation sxx_read::pred_ap_3::exec_static(Prolog* mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
		std::vector<Term*> aregs = mach->RegPull(3);
		mach->CreateChoicePoint(aregs);
		return static_cast<Operation>(exec_pred_ap_3__1(mach));
	}

	Operation sxx_read::pred_ap_3::exec_pred_ap_3__1(Prolog* mach) {
		mach->FillAlternative(SxxMachine::sxx_read::pred_ap_3::exec_pred_ap_3__2);
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

	Operation sxx_read::pred_ap_3::exec_pred_ap_3__2(Prolog* mach) {
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
		if(!((areg0)->Unify(Data::F(sxx_read::s9, var1, var2)))) {
			return Prolog::Fail0;
		}
		if(!((areg1)->Unify(var3))) {
			return Prolog::Fail0;
		}
		if(!((areg2)->Unify(Data::F(sxx_read::s9, { var1->Deref(), var4 })))) {
			return Prolog::Fail0;
		}
		local_aregs[0] = var2->Deref();
		local_aregs[1] = var3->Deref();
		local_aregs[2] = var4->Deref();
		local_aregs[3] = continuation;
		mach->CUTB = mach->CurrentChoice;
		return static_cast<Operation>(SxxMachine::sxx_read::pred_ap_3::exec_static);
	}
}
