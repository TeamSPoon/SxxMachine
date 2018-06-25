using namespace std;

#include "sxx_read.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../machine/builtins.h"
#include "sxx_library.h"
#include "../library/sxx_builtins_cafe.h"
#include "../benches/sdda.h"

Const* sxx_read::s0 = Const::Intern("cut");
Const* sxx_read::s1 = Const::Intern("#");
Const* sxx_read::s2 = Const::Intern("(");
Const* sxx_read::s3 = Const::Intern(")");
Const* sxx_read::s4 = Const::Intern("*");
Const* sxx_read::s5 = Const::Intern("+");
Const* sxx_read::s6 = Const::Intern(",");
Const* sxx_read::s7 = Const::Intern("-");
Const* sxx_read::s8 = Const::Intern("->");
Const* sxx_read::s9 = Const::Intern(".");
Const* sxx_read::s10 = Const::Intern("/");
Const* sxx_read::s11 = Const::Intern("//");
Const* sxx_read::s12 = Const::Intern(":");
Const* sxx_read::s13 = Const::Intern(":-");
Const* sxx_read::s14 = Const::Intern(";");
Const* sxx_read::s15 = Const::Intern("<");
Const* sxx_read::s16 = Const::Intern("<<");
Const* sxx_read::s17 = Const::Intern("=");
Const* sxx_read::s18 = Const::Intern("=..");
Const* sxx_read::s19 = Const::Intern("=:=");
Const* sxx_read::s20 = Const::Intern("=<");
Const* sxx_read::s21 = Const::Intern("==");
Const* sxx_read::s22 = Const::Intern(">");
Const* sxx_read::s23 = Const::Intern(">=");
Const* sxx_read::s24 = Const::Intern(">>");
Const* sxx_read::s25 = Const::Intern("?-");
Const* sxx_read::s26 = Const::Intern("@<");
Const* sxx_read::s27 = Const::Intern("@=<");
Const* sxx_read::s28 = Const::Intern("@>");
Const* sxx_read::s29 = Const::Intern("@>=");
Const* sxx_read::s30 = Const::Intern("[");
Const* sxx_read::s31 = Const::Intern("]");
Const* sxx_read::s32 = Const::Intern("^");
Const* sxx_read::s33 = Const::Intern("_");
Const* sxx_read::s34 = Const::Intern("ap");
Const* sxx_read::s35 = Const::Intern("call");
Const* sxx_read::s36 = Const::Intern("collectvars");
Const* sxx_read::s37 = Const::Intern("const");
Const* sxx_read::s38 = Const::Intern("cut");
Const* sxx_read::s39 = Const::Intern("end_of_clause");
Const* sxx_read::s40 = Const::Intern("end_of_file");
Const* sxx_read::s41 = Const::Intern("fail");
Const* sxx_read::s42 = Const::Intern("fx");
Const* sxx_read::s43 = Const::Intern("fy");
Const* sxx_read::s44 = Const::Intern("getargs");
Const* sxx_read::s45 = Const::Intern("halt");
Const* sxx_read::s46 = Const::Intern("infix");
Const* sxx_read::s47 = Const::Intern("int");
Const* sxx_read::s48 = Const::Intern("is");
Const* sxx_read::s49 = Const::Intern("maketerm");
Const* sxx_read::s50 = Const::Intern("mod");
Const* sxx_read::s51 = Const::Intern("newprec");
Const* sxx_read::s52 = Const::Intern("nexttoken");
Const* sxx_read::s53 = Const::Intern("noteq");
Const* sxx_read::s54 = Const::Intern("notvmember");
Const* sxx_read::s55 = Const::Intern("prefix");
Const* sxx_read::s56 = Const::Intern("read");
Const* sxx_read::s57 = Const::Intern("readall");
Const* sxx_read::s58 = Const::Intern("smallerorequal");
Const* sxx_read::s59 = Const::Intern("unify");
Const* sxx_read::s60 = Const::Intern("univ");
Const* sxx_read::s61 = Const::Intern("var");
Const* sxx_read::s62 = Const::Intern("vread");
Const* sxx_read::s63 = Const::Intern("xfx");
Const* sxx_read::s64 = Const::Intern("xfy");
Const* sxx_read::s65 = Const::Intern("yfx");
Const* sxx_read::s66 = Const::Intern("|");
Int* sxx_read::posint1 = Term::Number(1);
Int* sxx_read::posint200 = Term::Number(200);
Int* sxx_read::posint300 = Term::Number(300);
Int* sxx_read::posint400 = Term::Number(400);
Int* sxx_read::posint500 = Term::Number(500);
Int* sxx_read::posint550 = Term::Number(550);
Int* sxx_read::posint700 = Term::Number(700);
Int* sxx_read::posint900 = Term::Number(900);
Int* sxx_read::posint1000 = Term::Number(1000);
Int* sxx_read::posint1050 = Term::Number(1050);
Int* sxx_read::posint1100 = Term::Number(1100);
Int* sxx_read::posint1200 = Term::Number(1200);

static* function < Function*pred_vread_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_vread_2__1(mach));
}

static* function < Function*pred_vread_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_read::s57, { var3->Deref(), var4, F(sxx_read::s49, { var4->Deref(), var1->Deref(), F(sxx_read::s0, &tempVar, F(sxx_read::s36, { var4->Deref(), Const::Nil, var2->Deref(), continuation })) }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nexttoken_1::exec_static);
}

static* function < Function*pred_read_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_read_1__1(mach));
}

static* function < Function*pred_read_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_read::s57, { var2->Deref(), var3, F(sxx_read::s49, { var3->Deref(), var1->Deref(), F(sxx_read::s0, &tempVar, continuation) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nexttoken_1::exec_static);
}

static* function < Function*pred_collectvars_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_collectvars_3__1(mach));
}

static* function < Function*pred_collectvars_3::(PrologMachine*) {
	mach::FillAlternative(pred_collectvars_3::exec_pred_collectvars_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_collectvars_3::(PrologMachine*) {
	mach::FillAlternative(pred_collectvars_3::exec_pred_collectvars_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s61, var1, var2, var3), var4)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = sxx_read::s33;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_read::s54, { var2->Deref(), var5->Deref(), F(sxx_read::s0, &tempVar, F(sxx_read::s36, { var4->Deref(), F(sxx_read::s9, F(sxx_read::s17, { var1->Deref(), var2->Deref() }), var5->Deref()), var6->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_noteq_2::exec_static);
}

static* function < Function*pred_collectvars_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_collectvars_3::exec_static);
}

static* function < Function*pred_notvmember_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_notvmember_2__1(mach));
}

static* function < Function*pred_notvmember_2::(PrologMachine*) {
	mach::FillAlternative(pred_notvmember_2::exec_pred_notvmember_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_notvmember_2::(PrologMachine*) {
	mach::FillAlternative(pred_notvmember_2::exec_pred_notvmember_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_read::s9, F(sxx_read::s17, var2, var1->Deref()), var3)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s41, { continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_notvmember_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_read::s9, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_notvmember_2::exec_static);
}

static* function < Function*pred_readall_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_readall_2__1(mach));
}

static* function < Function*pred_readall_2::(PrologMachine*) {
	mach::FillAlternative(pred_readall_2::exec_pred_readall_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_read::s40))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s45, { continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_readall_2::(PrologMachine*) {
	mach::FillAlternative(pred_readall_2::exec_pred_readall_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_read::s39))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s59, { Const::Nil, var1->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_readall_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_read::s9, { var1->Deref(), var2 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = F(sxx_read::s57, { var3->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nexttoken_1::exec_static);
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_infix_3__1(mach));
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s13))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint1000))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s64))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint1100))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s64))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s14))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint1050))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s64))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s8))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s17))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s48))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s18))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s21))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s26))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s28))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__12);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s27))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__13);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s29))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__14);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s19))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__15);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s15))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__16);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s20))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__17);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s22))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__18);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint700))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s23))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__19);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint550))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s64))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s12))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__20);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint500))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__21);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint500))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__22);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint500))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__23);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint400))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__24);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint400))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s10))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__25);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint400))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s11))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__26);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint400))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s16))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__27);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint400))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s24))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::FillAlternative(pred_infix_3::exec_pred_infix_3__28);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint300))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s50))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_infix_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint200))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s64))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s32))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prefix_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_prefix_3__1(mach));
}

static* function < Function*pred_prefix_3::(PrologMachine*) {
	mach::FillAlternative(pred_prefix_3::exec_pred_prefix_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s42))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s13))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prefix_3::(PrologMachine*) {
	mach::FillAlternative(pred_prefix_3::exec_pred_prefix_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s42))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s25))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prefix_3::(PrologMachine*) {
	mach::FillAlternative(pred_prefix_3::exec_pred_prefix_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint500))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s42))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_prefix_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(sxx_read::posint500))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_read::s42))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(sxx_read::s7))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_maketerm_3__1(mach));
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s61, var1, var2, var3), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_read::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s47, var1), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s59, { var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, var1), Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s59, { var1->Deref(), var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, var1), F(sxx_read::s9, F(sxx_read::s37, sxx_read::s2), var2))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var5;
	local_aregs[2] = F(sxx_read::s60, { var3->Deref(), var1->Deref(), var5->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_getargs_2::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var12 = V(mach);
	Var* var11 = V(mach);
	Var* var10 = V(mach);
	Var* var9 = V(mach);
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = F(sxx_read::s9, F(sxx_read::s37, var5), var6);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(sxx_read::s46, var7, var8, var5->Deref(), F(sxx_read::s58, { var7->Deref(), var3->Deref(), F(sxx_read::s51, { var8->Deref(), var7->Deref(), var9, var10, F(sxx_read::s49, { var4->Deref(), var11, var9->Deref(), F(sxx_read::s49, { var6->Deref(), var12, var10->Deref(), F(sxx_read::s60, { var2->Deref(), var5->Deref(), F(sxx_read::s9, { var11->Deref(), F(sxx_read::s9, { var12->Deref(), Const::Nil }) }), continuation }) }) }) }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, var1), var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var6;
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(sxx_read::s58, { var5->Deref(), var4->Deref(), F(sxx_read::s51, { var6->Deref(), var5->Deref(), var7, F(sxx_read::s49, { var2->Deref(), var8, var7->Deref(), F(sxx_read::s60, { var3->Deref(), var1->Deref(), F(sxx_read::s9, { var8->Deref(), Const::Nil }), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_prefix_3::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__8);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, sxx_read::s30), var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_read::s9, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = F(sxx_read::s9, F(sxx_read::s37, sxx_read::s6), var6);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(sxx_read::s49, { var5->Deref(), var2->Deref(), sxx_read::posint900, F(sxx_read::s49, F(sxx_read::s9, F(sxx_read::s37, sxx_read::s30), var6->Deref()), var3->Deref(), sxx_read::posint900, continuation) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__9);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, sxx_read::s30), var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_read::s9, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = F(sxx_read::s9, F(sxx_read::s37, sxx_read::s66), var6);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(sxx_read::s34, var7, F(sxx_read::s9, F(sxx_read::s37, sxx_read::s31), Const::Nil), var6->Deref(), F(sxx_read::s49, { var5->Deref(), var2->Deref(), sxx_read::posint900, F(sxx_read::s49, { var7->Deref(), var3->Deref(), sxx_read::posint900, continuation }) }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__10);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, sxx_read::s2), var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = F(sxx_read::s9, F(sxx_read::s37, sxx_read::s3), Const::Nil);
	local_aregs[2] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(sxx_read::s0, &tempVar, F(sxx_read::s49, { var4->Deref(), var2->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__11);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, sxx_read::s30), var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_read::s9, var2, Const::Nil)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = F(sxx_read::s9, F(sxx_read::s37, sxx_read::s31), Const::Nil);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(sxx_read::s49, { var4->Deref(), var2->Deref(), sxx_read::posint900, continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}

static* function < Function*pred_maketerm_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, F(sxx_read::s37, sxx_read::s30), F(sxx_read::s9, F(sxx_read::s37, sxx_read::s31), Const::Nil))))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_newprec_4::(PrologMachine*) {
	/*
	 * Term aregs[] =
	 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
	 */
	std::vector<Term*> aregs = mach::RegPull(4);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_newprec_4__1(mach));
}

static* function < Function*pred_newprec_4::(PrologMachine*) {
	mach::FillAlternative(pred_newprec_4::exec_pred_newprec_4__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_read::s63))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s48, { var2->Deref(), F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), F(sxx_read::s48, { var3->Deref(), F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_newprec_4::(PrologMachine*) {
	mach::FillAlternative(pred_newprec_4::exec_pred_newprec_4__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_read::s64))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s48, { var2->Deref(), F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), F(sxx_read::s59, { var1->Deref(), var3->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_newprec_4::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_read::s65))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s48, { var3->Deref(), F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), F(sxx_read::s59, { var1->Deref(), var2->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_newprec_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_newprec_3__1(mach));
}

static* function < Function*pred_newprec_3::(PrologMachine*) {
	mach::FillAlternative(pred_newprec_3::exec_pred_newprec_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_read::s42))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_read::s48, { var2->Deref(), F(sxx_read::s7, { var1->Deref(), sxx_read::posint1 }), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_newprec_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_read::s43))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_getargs_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_getargs_2__1(mach));
}

static* function < Function*pred_getargs_2::(PrologMachine*) {
	mach::FillAlternative(pred_getargs_2::exec_pred_getargs_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = F(sxx_read::s9, F(sxx_read::s37, sxx_read::s3), Const::Nil);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(sxx_read::s49, { var3->Deref(), var4, sxx_read::posint900, F(sxx_read::s59, F(sxx_read::s9, { var4->Deref(), Const::Nil }), var2->Deref(), continuation) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}

static* function < Function*pred_getargs_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = F(sxx_read::s9, F(sxx_read::s37, sxx_read::s6), var4);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = F(sxx_read::s49, { var3->Deref(), var5, sxx_read::posint900, F(sxx_read::s59, F(sxx_read::s9, { var5->Deref(), var6 }), var2->Deref(), F(sxx_read::s44, { var4->Deref(), var6->Deref(), continuation })) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}

static* function < Function*pred_maketerm_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_maketerm_2__1(mach));
}

static* function < Function*pred_maketerm_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = sxx_read::posint1200;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_maketerm_3::exec_static);
}

static* function < Function*pred_ap_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_ap_3__1(mach));
}

static* function < Function*pred_ap_3::(PrologMachine*) {
	mach::FillAlternative(pred_ap_3::exec_pred_ap_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_ap_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_read::s9, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sxx_read::s9, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ap_3::exec_static);
}
