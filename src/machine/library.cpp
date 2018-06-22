#include "library.h"
#include "Prolog.h"
#include "Term.h"
#include "builtins.h"

Code* pred_ap_3::entry_code;
Code* pred_ap_3::cl1 = new pred_ap_3_1();
Code* pred_ap_3::cl2 = new pred_ap_3_2();
std::string pred_ap_3::string0 = Const::IStr("cut");
std::string pred_ap_3::string1 = Const::IStr(".");
std::string pred_ap_3::string2 = Const::IStr("[]");
std::string pred_ap_3::string3 = Const::IStr("ap");
std::string pred_ap_3::string4 = Const::IStr("call");

void pred_ap_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_ap_3::Arity() {
	return 3;
}

Code* pred_ap_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_ap_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_ap_3_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var1->Deref(), var4);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_append_3::entry_code;
Code* pred_append_3::cl1 = new pred_append_3_1();
Code* pred_append_3::cl2 = new pred_append_3_2();
std::string pred_append_3::string0 = Const::IStr("cut");
std::string pred_append_3::string1 = Const::IStr(".");
std::string pred_append_3::string2 = Const::IStr("[]");
std::string pred_append_3::string3 = Const::IStr("append");
std::string pred_append_3::string4 = Const::IStr("call");

void pred_append_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_append_3::Arity() {
	return 3;
}

Code* pred_append_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_append_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_append_3_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var1->Deref(), var4);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_assumed_1::entry_code;
Code* pred_assumed_1::cl1 = new pred_assumed_1_1();
Code* pred_assumed_1::allassumed2cont;
std::string pred_assumed_1::string0 = Const::IStr("cut");
std::string pred_assumed_1::string1 = Const::IStr("allassumed");
std::string pred_assumed_1::string2 = Const::IStr("assumed");
std::string pred_assumed_1::string3 = Const::IStr("m1");

void pred_assumed_1::Init(PrologMachine* mach) {
	entry_code = this;
	allassumed2cont = mach->LoadPred("allassumed", 1);
}

int pred_assumed_1::Arity() {
	return 1;
}

Code* pred_assumed_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_assumed_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = new Funct(string3, var1->Deref(), var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return allassumed2cont;
}

Code* pred_assumeduring_2::entry_code;
Code* pred_assumeduring_2::cl1 = new pred_assumeduring_2_1();
Code* pred_assumeduring_2::assume2cont;
std::string pred_assumeduring_2::string0 = Const::IStr("cut");
std::string pred_assumeduring_2::string1 = Const::IStr("-");
std::string pred_assumeduring_2::string2 = Const::IStr("assume");
std::string pred_assumeduring_2::string3 = Const::IStr("assumeduring");
std::string pred_assumeduring_2::string4 = Const::IStr("exec");
std::string pred_assumeduring_2::string5 = Const::IStr("unify");
Int* pred_assumeduring_2::posint1 = new Int(1);

void pred_assumeduring_2::Init(PrologMachine* mach) {
	entry_code = this;
	assume2cont = mach->LoadPred("assume", 1);
}

int pred_assumeduring_2::Arity() {
	return 2;
}

Code* pred_assumeduring_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_assumeduring_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Funct(string1, var2->Deref(), var3);
	Funct tempVar(string5, posint1, var3->Deref(), continuation);
	local_aregs[1] = new Funct(string4, var1->Deref(), &tempVar);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return assume2cont;
}

Code* pred_atom_1::entry_code;
Code* pred_atom_1::cl1 = new pred_atom_1_1();
Code* pred_atom_1::type_of3cont;
std::string pred_atom_1::string0 = Const::IStr("cut");
std::string pred_atom_1::string1 = Const::IStr("atom");
std::string pred_atom_1::string2 = Const::IStr("type_of");

void pred_atom_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int pred_atom_1::Arity() {
	return 1;
}

Code* pred_atom_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_atom_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Const(string1);
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

Code* pred_atomic_1::entry_code;
Code* pred_atomic_1::cl1 = new pred_atomic_1_1();
Code* pred_atomic_1::type_of3cont;
std::string pred_atomic_1::string0 = Const::IStr("cut");
std::string pred_atomic_1::string1 = Const::IStr("atomic");
std::string pred_atomic_1::string2 = Const::IStr("atomic2");
std::string pred_atomic_1::string3 = Const::IStr("type_of");

void pred_atomic_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int pred_atomic_1::Arity() {
	return 1;
}

Code* pred_atomic_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_atomic_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = new Funct(string2, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

Code* pred_atomic2_1::entry_code;
Code* pred_atomic2_1::cl1 = new pred_atomic2_1_1();
Code* pred_atomic2_1::cl2 = new pred_atomic2_1_2();
std::string pred_atomic2_1::string0 = Const::IStr("cut");
std::string pred_atomic2_1::string1 = Const::IStr("atom");
std::string pred_atomic2_1::string2 = Const::IStr("atomic2");
std::string pred_atomic2_1::string3 = Const::IStr("call");
std::string pred_atomic2_1::string4 = Const::IStr("cut");
std::string pred_atomic2_1::string5 = Const::IStr("integer");
Int* pred_atomic2_1::posint1 = new Int(1);

void pred_atomic2_1::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_atomic2_1::Arity() {
	return 1;
}

Code* pred_atomic2_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_atomic2_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string1);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_atomic2_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string5);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_collectvars_3::entry_code;
Code* pred_collectvars_3::cl1 = new pred_collectvars_3_1();
Code* pred_collectvars_3::cl2 = new pred_collectvars_3_2();
Code* pred_collectvars_3::cl3 = new pred_collectvars_3_3();
std::string pred_collectvars_3::string0 = Const::IStr("cut");
std::string pred_collectvars_3::string1 = Const::IStr(".");
std::string pred_collectvars_3::string2 = Const::IStr("=");
std::string pred_collectvars_3::string3 = Const::IStr("[]");
std::string pred_collectvars_3::string4 = Const::IStr("_");
std::string pred_collectvars_3::string5 = Const::IStr("collectvars");
std::string pred_collectvars_3::string6 = Const::IStr("cut");
std::string pred_collectvars_3::string7 = Const::IStr("noteq");
std::string pred_collectvars_3::string8 = Const::IStr("notvmember");
std::string pred_collectvars_3::string9 = Const::IStr("var");
Int* pred_collectvars_3::posint1 = new Int(1);

void pred_collectvars_3::Init(PrologMachine* mach) {
	entry_code = this;
	//pred_noteq_2.INST  = mach.LoadPred("noteq", 2);
}

int pred_collectvars_3::Arity() {
	return 3;
}

Code* pred_collectvars_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_collectvars_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string3);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_collectvars_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var6 = new Var(mach);
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, new Funct(string9, var1, var2, var3), var4);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = new Const(string4);
	Funct tempVar2(string0, new HeapChoice(mach->CUTB), new Funct(string5, var4->Deref(), new Funct(string1, new Funct(string2, var1->Deref(), var2->Deref()), var5->Deref()), var6->Deref(), continuation));
	local_aregs[2] = new Funct(string8, var2->Deref(), var5->Deref(), &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return pred_noteq_2::INST;
}

Code* pred_collectvars_3_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
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
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_copy_term_2::entry_code;
Code* pred_copy_term_2::cl1 = new pred_copy_term_2_1();
Code* pred_copy_term_2::findall4cont;
std::string pred_copy_term_2::string0 = Const::IStr("cut");
std::string pred_copy_term_2::string1 = Const::IStr(".");
std::string pred_copy_term_2::string2 = Const::IStr("=");
std::string pred_copy_term_2::string3 = Const::IStr("[]");
std::string pred_copy_term_2::string4 = Const::IStr("copy_term");
std::string pred_copy_term_2::string5 = Const::IStr("findall");

void pred_copy_term_2::Init(PrologMachine* mach) {
	entry_code = this;
	findall4cont = mach->LoadPred("findall", 3);
}

int pred_copy_term_2::Arity() {
	return 2;
}

Code* pred_copy_term_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_copy_term_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = new Funct(string2, var3->Deref(), var1->Deref());
	Const tempVar(string3);
	local_aregs[2] = new Funct(string1, var2->Deref(), &tempVar);
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return findall4cont;
}

Code* pred_exec_1::entry_code;
Code* pred_exec_1::cl1 = new pred_exec_1_1();
Code* pred_exec_1::cl2 = new pred_exec_1_2();
Code* pred_exec_1::cl3 = new pred_exec_1_3();
Code* pred_exec_1::cl4 = new pred_exec_1_4();
Code* pred_exec_1::cl5 = new pred_exec_1_5();
Code* pred_exec_1::cl6 = new pred_exec_1_6();
Code* pred_exec_1::specialgoal3cont;
Code* pred_exec_1::var2cont;
std::string pred_exec_1::string0 = Const::IStr("cut");
std::string pred_exec_1::string1 = Const::IStr(",");
std::string pred_exec_1::string2 = Const::IStr("->");
std::string pred_exec_1::string3 = Const::IStr(";");
std::string pred_exec_1::string4 = Const::IStr("call");
std::string pred_exec_1::string5 = Const::IStr("cut");
std::string pred_exec_1::string6 = Const::IStr("exec");
std::string pred_exec_1::string7 = Const::IStr("execdisj");
std::string pred_exec_1::string8 = Const::IStr("fail");
std::string pred_exec_1::string9 = Const::IStr("specialgoal");
std::string pred_exec_1::string10 = Const::IStr("true");
std::string pred_exec_1::string11 = Const::IStr("var");
Int* pred_exec_1::posint1 = new Int(1);

void pred_exec_1::Init(PrologMachine* mach) {
	entry_code = this;
	specialgoal3cont = mach->LoadPred("specialgoal", 2);
	var2cont = mach->LoadPred("var", 1);
}

int pred_exec_1::Arity() {
	return 1;
}

Code* pred_exec_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_exec_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach->CUTB);
	Funct tempVar2(string8, continuation);
	local_aregs[1] = new Funct(string0, &tempVar, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return var2cont;
}

Code* pred_exec_1_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string6, var2->Deref(), continuation);
	local_aregs[0] = new Funct(string6, var1->Deref(), &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_exec_1_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string2, var1->Deref(), var2->Deref());
	Const tempVar3(string10);
	local_aregs[0] = new Funct(string7, &tempVar2, &tempVar3, continuation);
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_exec_1_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string3, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string7, var1->Deref(), var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_exec_1_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	HeapChoice tempVar(mach->CUTB);
	Funct tempVar2(string6, var2->Deref(), continuation);
	local_aregs[2] = new Funct(string0, &tempVar, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return specialgoal3cont;
}

Code* pred_exec_1_6::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call2;
}

Code* pred_execdisj_2::entry_code;
Code* pred_execdisj_2::cl1 = new pred_execdisj_2_1();
Code* pred_execdisj_2::cl2 = new pred_execdisj_2_2();
Code* pred_execdisj_2::cl3 = new pred_execdisj_2_3();
Code* pred_execdisj_2::cl4 = new pred_execdisj_2_4();
Code* pred_execdisj_2::exec2cont;
std::string pred_execdisj_2::string0 = Const::IStr("cut");
std::string pred_execdisj_2::string1 = Const::IStr("->");
std::string pred_execdisj_2::string2 = Const::IStr("cut");
std::string pred_execdisj_2::string3 = Const::IStr("exec");
std::string pred_execdisj_2::string4 = Const::IStr("execdisj");
Int* pred_execdisj_2::posint1 = new Int(1);

void pred_execdisj_2::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
}

int pred_execdisj_2::Arity() {
	return 2;
}

Code* pred_execdisj_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_execdisj_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar2(mach->CUTB);
	Funct tempVar3(string3, var2->Deref(), continuation);
	local_aregs[1] = new Funct(string0, &tempVar2, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Code* pred_execdisj_2_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string3, var3->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_execdisj_2_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Code* pred_execdisj_2_4::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Code* pred_execpendinggoals_1::entry_code;
Code* pred_execpendinggoals_1::cl1 = new pred_execpendinggoals_1_1();
Code* pred_execpendinggoals_1::cl2 = new pred_execpendinggoals_1_2();
Code* pred_execpendinggoals_1::exec2cont;
Code* pred_execpendinggoals_1::execcontinuation1cont;
std::string pred_execpendinggoals_1::string0 = Const::IStr("cut");
std::string pred_execpendinggoals_1::string1 = Const::IStr(".");
std::string pred_execpendinggoals_1::string2 = Const::IStr("[]");
std::string pred_execpendinggoals_1::string3 = Const::IStr("exec");
std::string pred_execpendinggoals_1::string4 = Const::IStr("execcontinuation");
std::string pred_execpendinggoals_1::string5 = Const::IStr("execpendinggoals");

void pred_execpendinggoals_1::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
	execcontinuation1cont = mach->LoadPred("execcontinuation", 0);
}

int pred_execpendinggoals_1::Arity() {
	return 1;
}

Code* pred_execpendinggoals_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_execpendinggoals_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return execcontinuation1cont;
}

Code* pred_execpendinggoals_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Funct(string5, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return exec2cont;
}

Code* pred_findall2_4::entry_code;
Code* pred_findall2_4::cl1 = new pred_findall2_4_1();
Code* pred_findall2_4::cl2 = new pred_findall2_4_2();
Code* pred_findall2_4::exec2cont;
Code* pred_findall2_4::retrievefindall3cont;
std::string pred_findall2_4::string0 = Const::IStr("cut");
std::string pred_findall2_4::string1 = Const::IStr("addfindall");
std::string pred_findall2_4::string2 = Const::IStr("exec");
std::string pred_findall2_4::string3 = Const::IStr("fail");
std::string pred_findall2_4::string4 = Const::IStr("findall2");
std::string pred_findall2_4::string5 = Const::IStr("retrievefindall");

void pred_findall2_4::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
	retrievefindall3cont = mach->LoadPred("retrievefindall", 2);
}

int pred_findall2_4::Arity() {
	return 4;
}

Code* pred_findall2_4::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3], mach->Areg[4] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_findall2_4_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	Funct tempVar(string3, continuation);
	local_aregs[1] = new Funct(string1, var1->Deref(), var4->Deref(), &tempVar);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return exec2cont;
}

Code* pred_findall2_4_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return retrievefindall3cont;
}

Code* pred_findall_3::entry_code;
Code* pred_findall_3::cl1 = new pred_findall_3_1();
Code* pred_findall_3::initfindall2cont;
std::string pred_findall_3::string0 = Const::IStr("cut");
std::string pred_findall_3::string1 = Const::IStr("findall");
std::string pred_findall_3::string2 = Const::IStr("findall2");
std::string pred_findall_3::string3 = Const::IStr("initfindall");

void pred_findall_3::Init(PrologMachine* mach) {
	entry_code = this;
	initfindall2cont = mach->LoadPred("initfindall", 1);
}

int pred_findall_3::Arity() {
	return 3;
}

Code* pred_findall_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_findall_3_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
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
	local_aregs[1] = new Funct(string2, var1->Deref(), var2->Deref(), var3->Deref(), var4->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return initfindall2cont;
}

Code* pred_freeze_2::entry_code;
Code* pred_freeze_2::cl1 = new pred_freeze_2_1();
Code* pred_freeze_2::cl2 = new pred_freeze_2_2();
Code* pred_freeze_2::exec2cont;
Code* pred_freeze_2::var2cont;
std::string pred_freeze_2::string0 = Const::IStr("cut");
std::string pred_freeze_2::string1 = Const::IStr("cut");
std::string pred_freeze_2::string2 = Const::IStr("exec");
std::string pred_freeze_2::string3 = Const::IStr("freeze");
std::string pred_freeze_2::string4 = Const::IStr("freeze_internal");
std::string pred_freeze_2::string5 = Const::IStr("var");
Int* pred_freeze_2::posint1 = new Int(1);

void pred_freeze_2::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
	var2cont = mach->LoadPred("var", 1);
}

int pred_freeze_2::Arity() {
	return 2;
}

Code* pred_freeze_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_freeze_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach->CUTB);
	Funct tempVar2(string4, var1->Deref(), var2->Deref(), continuation);
	local_aregs[1] = new Funct(string0, &tempVar, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return var2cont;
}

Code* pred_freeze_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Code* pred_getargs_2::entry_code;
Code* pred_getargs_2::cl1 = new pred_getargs_2_1();
Code* pred_getargs_2::cl2 = new pred_getargs_2_2();
Code* pred_getargs_2::ap4cont;
std::string pred_getargs_2::string0 = Const::IStr("cut");
std::string pred_getargs_2::string1 = Const::IStr(")");
std::string pred_getargs_2::string2 = Const::IStr(",");
std::string pred_getargs_2::string3 = Const::IStr(".");
std::string pred_getargs_2::string4 = Const::IStr("[]");
std::string pred_getargs_2::string5 = Const::IStr("ap");
std::string pred_getargs_2::string6 = Const::IStr("const");
std::string pred_getargs_2::string7 = Const::IStr("getargs");
std::string pred_getargs_2::string8 = Const::IStr("maketerm");
std::string pred_getargs_2::string9 = Const::IStr("unify");
Int* pred_getargs_2::posint900 = new Int(900);

void pred_getargs_2::Init(PrologMachine* mach) {
	entry_code = this;
	ap4cont = mach->LoadPred("ap", 3);
}

int pred_getargs_2::Arity() {
	return 2;
}

Code* pred_getargs_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_getargs_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	Funct tempVar(string6, new Const(string1));
	Const tempVar2(string4);
	local_aregs[1] = new Funct(string3, &tempVar, &tempVar2);
	local_aregs[2] = var1->Deref();
	Funct tempVar3(string9, new Funct(string3, var4->Deref(), new Const(string4)), var2->Deref(), continuation);
	local_aregs[3] = new Funct(string8, var3->Deref(), var4, posint900, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Code* pred_getargs_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var6 = new Var(mach);
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	Funct tempVar(string6, new Const(string2));
	local_aregs[1] = new Funct(string3, &tempVar, var4);
	local_aregs[2] = var1->Deref();
	Funct tempVar2(string9, new Funct(string3, var5->Deref(), var6), var2->Deref(), new Funct(string7, var4->Deref(), var6->Deref(), continuation));
	local_aregs[3] = new Funct(string8, var3->Deref(), var5, posint900, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Code* pred_infix_3::entry_code;
Code* pred_infix_3::cl1 = new pred_infix_3_1();
Code* pred_infix_3::cl2 = new pred_infix_3_2();
Code* pred_infix_3::cl3 = new pred_infix_3_3();
Code* pred_infix_3::cl4 = new pred_infix_3_4();
Code* pred_infix_3::cl5 = new pred_infix_3_5();
Code* pred_infix_3::cl6 = new pred_infix_3_6();
Code* pred_infix_3::cl7 = new pred_infix_3_7();
Code* pred_infix_3::cl8 = new pred_infix_3_8();
Code* pred_infix_3::cl9 = new pred_infix_3_9();
Code* pred_infix_3::cl10 = new pred_infix_3_10();
Code* pred_infix_3::cl11 = new pred_infix_3_11();
Code* pred_infix_3::cl12 = new pred_infix_3_12();
Code* pred_infix_3::cl13 = new pred_infix_3_13();
Code* pred_infix_3::cl14 = new pred_infix_3_14();
Code* pred_infix_3::cl15 = new pred_infix_3_15();
Code* pred_infix_3::cl16 = new pred_infix_3_16();
Code* pred_infix_3::cl17 = new pred_infix_3_17();
Code* pred_infix_3::cl18 = new pred_infix_3_18();
Code* pred_infix_3::cl19 = new pred_infix_3_19();
Code* pred_infix_3::cl20 = new pred_infix_3_20();
Code* pred_infix_3::cl21 = new pred_infix_3_21();
Code* pred_infix_3::cl22 = new pred_infix_3_22();
Code* pred_infix_3::cl23 = new pred_infix_3_23();
Code* pred_infix_3::cl24 = new pred_infix_3_24();
Code* pred_infix_3::cl25 = new pred_infix_3_25();
Code* pred_infix_3::cl26 = new pred_infix_3_26();
Code* pred_infix_3::cl27 = new pred_infix_3_27();
Code* pred_infix_3::cl28 = new pred_infix_3_28();
std::string pred_infix_3::string0 = Const::IStr("cut");
std::string pred_infix_3::string1 = Const::IStr("#");
std::string pred_infix_3::string2 = Const::IStr("*");
std::string pred_infix_3::string3 = Const::IStr("+");
std::string pred_infix_3::string4 = Const::IStr(",");
std::string pred_infix_3::string5 = Const::IStr("-");
std::string pred_infix_3::string6 = Const::IStr("->");
std::string pred_infix_3::string7 = Const::IStr("/");
std::string pred_infix_3::string8 = Const::IStr("//");
std::string pred_infix_3::string9 = Const::IStr(":");
std::string pred_infix_3::string10 = Const::IStr(":-");
std::string pred_infix_3::string11 = Const::IStr(";");
std::string pred_infix_3::string12 = Const::IStr("<");
std::string pred_infix_3::string13 = Const::IStr("<<");
std::string pred_infix_3::string14 = Const::IStr("=");
std::string pred_infix_3::string15 = Const::IStr("=..");
std::string pred_infix_3::string16 = Const::IStr("=:=");
std::string pred_infix_3::string17 = Const::IStr("=<");
std::string pred_infix_3::string18 = Const::IStr("==");
std::string pred_infix_3::string19 = Const::IStr(">");
std::string pred_infix_3::string20 = Const::IStr(">=");
std::string pred_infix_3::string21 = Const::IStr(">>");
std::string pred_infix_3::string22 = Const::IStr("@<");
std::string pred_infix_3::string23 = Const::IStr("@=<");
std::string pred_infix_3::string24 = Const::IStr("@>");
std::string pred_infix_3::string25 = Const::IStr("@>=");
std::string pred_infix_3::string26 = Const::IStr("^");
std::string pred_infix_3::string27 = Const::IStr("call");
std::string pred_infix_3::string28 = Const::IStr("infix");
std::string pred_infix_3::string29 = Const::IStr("is");
std::string pred_infix_3::string30 = Const::IStr("mod");
std::string pred_infix_3::string31 = Const::IStr("xfx");
std::string pred_infix_3::string32 = Const::IStr("xfy");
std::string pred_infix_3::string33 = Const::IStr("yfx");
Int* pred_infix_3::posint200 = new Int(200);
Int* pred_infix_3::posint300 = new Int(300);
Int* pred_infix_3::posint400 = new Int(400);
Int* pred_infix_3::posint500 = new Int(500);
Int* pred_infix_3::posint550 = new Int(550);
Int* pred_infix_3::posint700 = new Int(700);
Int* pred_infix_3::posint1000 = new Int(1000);
Int* pred_infix_3::posint1050 = new Int(1050);
Int* pred_infix_3::posint1100 = new Int(1100);
Int* pred_infix_3::posint1200 = new Int(1200);

void pred_infix_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_infix_3::Arity() {
	return 3;
}

Code* pred_infix_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_infix_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string10);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint1000))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string4);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint1100))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string11);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint1050))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string6);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string14);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_6::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string29);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_7::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string15);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_8::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string18);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_9::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string22);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_10::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string24);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_11::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string23);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_12::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string25);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_13::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string16);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_14::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string12);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_15::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string17);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_16::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string19);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_17::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string20);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_18::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint550))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string9);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_19::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl20);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string3);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_20::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string5);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_21::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string1);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_22::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl23);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_23::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string7);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_24::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string8);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_25::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl26);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string13);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_26::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl27);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string21);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_27::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl28);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint300))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string30);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_infix_3_28::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string26);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_integer_1::entry_code;
Code* pred_integer_1::cl1 = new pred_integer_1_1();
Code* pred_integer_1::type_of3cont;
std::string pred_integer_1::string0 = Const::IStr("cut");
std::string pred_integer_1::string1 = Const::IStr("integer");
std::string pred_integer_1::string2 = Const::IStr("type_of");

void pred_integer_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int pred_integer_1::Arity() {
	return 1;
}

Code* pred_integer_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_integer_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Const(string1);
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

Code* pred_loop_1::entry_code;
Code* pred_loop_1::cl1 = new pred_loop_1_1();
Code* pred_loop_1::cl2 = new pred_loop_1_2();
Code* pred_loop_1::is3cont;
std::string pred_loop_1::string0 = Const::IStr("cut");
std::string pred_loop_1::string1 = Const::IStr("-");
std::string pred_loop_1::string2 = Const::IStr("cut");
std::string pred_loop_1::string3 = Const::IStr("is");
std::string pred_loop_1::string4 = Const::IStr("loop");
Int* pred_loop_1::posint0 = new Int(0);
Int* pred_loop_1::posint1 = new Int(1);

void pred_loop_1::Init(PrologMachine* mach) {
	entry_code = this;
	is3cont = mach->LoadPred("is", 2);
}

int pred_loop_1::Arity() {
	return 1;
}

Code* pred_loop_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_loop_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint0))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_loop_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = new Funct(string1, var1->Deref(), posint1);
	local_aregs[2] = new Funct(string4, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return is3cont;
}

Code* pred_m1_2::entry_code;
Code* pred_m1_2::cl1 = new pred_m1_2_1();
Code* pred_m1_2::cl2 = new pred_m1_2_2();
Code* pred_m1_2::var2cont;
std::string pred_m1_2::string0 = Const::IStr("cut");
std::string pred_m1_2::string1 = Const::IStr("-");
std::string pred_m1_2::string2 = Const::IStr(".");
std::string pred_m1_2::string3 = Const::IStr("m1");
std::string pred_m1_2::string4 = Const::IStr("var");

void pred_m1_2::Init(PrologMachine* mach) {
	entry_code = this;
	var2cont = mach->LoadPred("var", 1);
}

int pred_m1_2::Arity() {
	return 2;
}

Code* pred_m1_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_m1_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string2, new Funct(string1, var1->Deref(), var2), var3);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return var2cont;
}

Code* pred_m1_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string2, var2, var3);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_maketerm_2::entry_code;
Code* pred_maketerm_2::cl1 = new pred_maketerm_2_1();
Code* pred_maketerm_2::maketerm4cont;
std::string pred_maketerm_2::string0 = Const::IStr("cut");
std::string pred_maketerm_2::string1 = Const::IStr("maketerm");
Int* pred_maketerm_2::posint1200 = new Int(1200);

void pred_maketerm_2::Init(PrologMachine* mach) {
	entry_code = this;
	maketerm4cont = mach->LoadPred("maketerm", 3);
}

int pred_maketerm_2::Arity() {
	return 2;
}

Code* pred_maketerm_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_maketerm_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = posint1200;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return maketerm4cont;
}

Code* pred_maketerm_3::entry_code;
Code* pred_maketerm_3::cl1 = new pred_maketerm_3_1();
Code* pred_maketerm_3::cl2 = new pred_maketerm_3_2();
Code* pred_maketerm_3::cl3 = new pred_maketerm_3_3();
Code* pred_maketerm_3::cl4 = new pred_maketerm_3_4();
Code* pred_maketerm_3::cl5 = new pred_maketerm_3_5();
Code* pred_maketerm_3::cl6 = new pred_maketerm_3_6();
Code* pred_maketerm_3::cl7 = new pred_maketerm_3_7();
Code* pred_maketerm_3::cl8 = new pred_maketerm_3_8();
Code* pred_maketerm_3::cl9 = new pred_maketerm_3_9();
Code* pred_maketerm_3::cl10 = new pred_maketerm_3_10();
Code* pred_maketerm_3::cl11 = new pred_maketerm_3_11();
Code* pred_maketerm_3::ap4cont;
Code* pred_maketerm_3::getargs3cont;
Code* pred_maketerm_3::prefix4cont;
Code* pred_maketerm_3::unify3cont;
std::string pred_maketerm_3::string0 = Const::IStr("cut");
std::string pred_maketerm_3::string1 = Const::IStr("(");
std::string pred_maketerm_3::string2 = Const::IStr(")");
std::string pred_maketerm_3::string3 = Const::IStr(",");
std::string pred_maketerm_3::string4 = Const::IStr(".");
std::string pred_maketerm_3::string5 = Const::IStr("[");
std::string pred_maketerm_3::string6 = Const::IStr("[]");
std::string pred_maketerm_3::string7 = Const::IStr("]");
std::string pred_maketerm_3::string8 = Const::IStr("ap");
std::string pred_maketerm_3::string9 = Const::IStr("call");
std::string pred_maketerm_3::string10 = Const::IStr("const");
std::string pred_maketerm_3::string11 = Const::IStr("cut");
std::string pred_maketerm_3::string12 = Const::IStr("getargs");
std::string pred_maketerm_3::string13 = Const::IStr("infix");
std::string pred_maketerm_3::string14 = Const::IStr("int");
std::string pred_maketerm_3::string15 = Const::IStr("maketerm");
std::string pred_maketerm_3::string16 = Const::IStr("newprec");
std::string pred_maketerm_3::string17 = Const::IStr("prefix");
std::string pred_maketerm_3::string18 = Const::IStr("smallerorequal");
std::string pred_maketerm_3::string19 = Const::IStr("unify");
std::string pred_maketerm_3::string20 = Const::IStr("univ");
std::string pred_maketerm_3::string21 = Const::IStr("var");
std::string pred_maketerm_3::string22 = Const::IStr("|");
Int* pred_maketerm_3::posint1 = new Int(1);
Int* pred_maketerm_3::posint900 = new Int(900);

void pred_maketerm_3::Init(PrologMachine* mach) {
	entry_code = this;
	ap4cont = mach->LoadPred("ap", 3);
	getargs3cont = mach->LoadPred("getargs", 2);
	prefix4cont = mach->LoadPred("prefix", 3);
	unify3cont = mach->LoadPred("unify", 2);
}

int pred_maketerm_3::Arity() {
	return 3;
}

Code* pred_maketerm_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_maketerm_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string21, var1, var2, var3), new Const(string6));
	if(!((areg0)->Unify(&tempVar))) {
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
	HeapChoice tempVar2(mach->CUTB);
	local_aregs[2] = new Funct(string0, &tempVar2, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return unify3cont;
}

Code* pred_maketerm_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string14, var1), new Const(string6));
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string19, var1->Deref(), var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_maketerm_3_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, var1), new Const(string6));
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string19, var1->Deref(), var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_maketerm_3_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, var1), new Funct(string4, new Funct(string10, new Const(string1)), var2));
	if(!((areg0)->Unify(&tempVar))) {
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
	local_aregs[2] = new Funct(string20, var3->Deref(), var1->Deref(), var5->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return getargs3cont;
}

Code* pred_maketerm_3_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var12 = new Var(mach);
	Term* var11 = new Var(mach);
	Term* var10 = new Var(mach);
	Term* var9 = new Var(mach);
	Term* var8 = new Var(mach);
	Term* var7 = new Var(mach);
	Term* var6 = new Var(mach);
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
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
	Funct tempVar(string10, var5);
	local_aregs[1] = new Funct(string4, &tempVar, var6);
	local_aregs[2] = var1->Deref();
	Funct tempVar2(string18, var7->Deref(), var3->Deref(), new Funct(string16, var8->Deref(), var7->Deref(), var9, var10, new Funct(string15, var4->Deref(), var11, var9->Deref(), new Funct(string15, var6->Deref(), var12, var10->Deref(), new Funct(string20, var2->Deref(), var5->Deref(), new Funct(string4, var11->Deref(), new Funct(string4, var12->Deref(), new Const(string6))), continuation)))));
	local_aregs[3] = new Funct(string13, var7, var8, var5->Deref(), &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Code* pred_maketerm_3_6::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var8 = new Var(mach);
	Term* var7 = new Var(mach);
	Term* var6 = new Var(mach);
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, var1), var2);
	if(!((areg0)->Unify(&tempVar))) {
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
	Funct tempVar2(string16, var6->Deref(), var5->Deref(), var7, new Funct(string15, var2->Deref(), var8, var7->Deref(), new Funct(string20, var3->Deref(), var1->Deref(), new Funct(string4, var8->Deref(), new Const(string6)), continuation)));
	local_aregs[3] = new Funct(string18, var5->Deref(), var4->Deref(), &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return prefix4cont;
}

Code* pred_maketerm_3_7::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var6 = new Var(mach);
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, new Const(string5)), var1);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string4, var2, var3);
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	Funct tempVar3(string10, new Const(string3));
	local_aregs[1] = new Funct(string4, &tempVar3, var6);
	local_aregs[2] = var1->Deref();
	Funct tempVar4(string15, new Funct(string4, new Funct(string10, new Const(string5)), var6->Deref()), var3->Deref(), posint900, continuation);
	local_aregs[3] = new Funct(string15, var5->Deref(), var2->Deref(), posint900, &tempVar4);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Code* pred_maketerm_3_8::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var7 = new Var(mach);
	Term* var6 = new Var(mach);
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, new Const(string5)), var1);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string4, var2, var3);
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	Funct tempVar3(string10, new Const(string22));
	local_aregs[1] = new Funct(string4, &tempVar3, var6);
	local_aregs[2] = var1->Deref();
	Funct tempVar4(string4, new Funct(string10, new Const(string7)), new Const(string6));
	Funct tempVar5(string15, var5->Deref(), var2->Deref(), posint900, new Funct(string15, var7->Deref(), var3->Deref(), posint900, continuation));
	local_aregs[3] = new Funct(string8, var7, &tempVar4, var6->Deref(), &tempVar5);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Code* pred_maketerm_3_9::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, new Const(string1)), var1);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	Funct tempVar2(string10, new Const(string2));
	Const tempVar3(string6);
	local_aregs[1] = new Funct(string4, &tempVar2, &tempVar3);
	local_aregs[2] = var1->Deref();
	HeapChoice tempVar4(mach->CUTB);
	Funct tempVar5(string15, var4->Deref(), var2->Deref(), continuation);
	local_aregs[3] = new Funct(string0, &tempVar4, &tempVar5);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Code* pred_maketerm_3_10::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, new Const(string5)), var1);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string4, var2, new Const(string6));
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	Funct tempVar3(string10, new Const(string7));
	Const tempVar4(string6);
	local_aregs[1] = new Funct(string4, &tempVar3, &tempVar4);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = new Funct(string15, var4->Deref(), var2->Deref(), posint900, continuation);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Code* pred_maketerm_3_11::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, new Const(string5)), new Funct(string4, new Funct(string10, new Const(string7)), new Const(string6)));
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string6);
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_max_3::entry_code;
Code* pred_max_3::cl1 = new pred_max_3_1();
Code* pred_max_3::cl2 = new pred_max_3_2();
Code* pred_max_3::cl3 = new pred_max_3_3();
Code* pred_max_3::smallerthan3cont;
std::string pred_max_3::string0 = Const::IStr("cut");
std::string pred_max_3::string1 = Const::IStr("call");
std::string pred_max_3::string2 = Const::IStr("max");
std::string pred_max_3::string3 = Const::IStr("smallerthan");

void pred_max_3::Init(PrologMachine* mach) {
	entry_code = this;
	smallerthan3cont = mach->LoadPred("smallerthan", 2);
}

int pred_max_3::Arity() {
	return 3;
}

Code* pred_max_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_max_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return smallerthan3cont;
}

Code* pred_max_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return smallerthan3cont;
}

Code* pred_max_3_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_newprec_3::entry_code;
Code* pred_newprec_3::cl1 = new pred_newprec_3_1();
Code* pred_newprec_3::cl2 = new pred_newprec_3_2();
std::string pred_newprec_3::string0 = Const::IStr("cut");
std::string pred_newprec_3::string1 = Const::IStr("-");
std::string pred_newprec_3::string2 = Const::IStr("call");
std::string pred_newprec_3::string3 = Const::IStr("cut");
std::string pred_newprec_3::string4 = Const::IStr("fx");
std::string pred_newprec_3::string5 = Const::IStr("fy");
std::string pred_newprec_3::string6 = Const::IStr("is");
std::string pred_newprec_3::string7 = Const::IStr("newprec");
Int* pred_newprec_3::posint1 = new Int(1);

void pred_newprec_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_newprec_3::Arity() {
	return 3;
}

Code* pred_newprec_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_newprec_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Const tempVar(string4);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string1, var1->Deref(), posint1);
	local_aregs[0] = new Funct(string6, var2->Deref(), &tempVar2, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_newprec_3_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string5);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_newprec_4::entry_code;
Code* pred_newprec_4::cl1 = new pred_newprec_4_1();
Code* pred_newprec_4::cl2 = new pred_newprec_4_2();
Code* pred_newprec_4::cl3 = new pred_newprec_4_3();
std::string pred_newprec_4::string0 = Const::IStr("cut");
std::string pred_newprec_4::string1 = Const::IStr("-");
std::string pred_newprec_4::string2 = Const::IStr("cut");
std::string pred_newprec_4::string3 = Const::IStr("is");
std::string pred_newprec_4::string4 = Const::IStr("newprec");
std::string pred_newprec_4::string5 = Const::IStr("unify");
std::string pred_newprec_4::string6 = Const::IStr("xfx");
std::string pred_newprec_4::string7 = Const::IStr("xfy");
std::string pred_newprec_4::string8 = Const::IStr("yfx");
Int* pred_newprec_4::posint1 = new Int(1);

void pred_newprec_4::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_newprec_4::Arity() {
	return 4;
}

Code* pred_newprec_4::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3], mach->Areg[4] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_newprec_4_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Const tempVar(string6);
	if(!((areg0)->Unify(&tempVar))) {
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
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string1, var1->Deref(), posint1);
	Funct tempVar3(string3, var3->Deref(), new Funct(string1, var1->Deref(), posint1), continuation);
	local_aregs[0] = new Funct(string3, var2->Deref(), &tempVar2, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_newprec_4_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Const tempVar(string7);
	if(!((areg0)->Unify(&tempVar))) {
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
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string1, var1->Deref(), posint1);
	Funct tempVar3(string5, var1->Deref(), var3->Deref(), continuation);
	local_aregs[0] = new Funct(string3, var2->Deref(), &tempVar2, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_newprec_4_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Const tempVar(string8);
	if(!((areg0)->Unify(&tempVar))) {
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
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string1, var1->Deref(), posint1);
	Funct tempVar3(string5, var1->Deref(), var2->Deref(), continuation);
	local_aregs[0] = new Funct(string3, var3->Deref(), &tempVar2, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_not_1::entry_code;
Code* pred_not_1::cl1 = new pred_not_1_1();
Code* pred_not_1::cl2 = new pred_not_1_2();
Code* pred_not_1::exec2cont;
std::string pred_not_1::string0 = Const::IStr("cut");
std::string pred_not_1::string1 = Const::IStr("call");
std::string pred_not_1::string2 = Const::IStr("cut");
std::string pred_not_1::string3 = Const::IStr("exec");
std::string pred_not_1::string4 = Const::IStr("fail");
std::string pred_not_1::string5 = Const::IStr("not");
Int* pred_not_1::posint1 = new Int(1);

void pred_not_1::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
}

int pred_not_1::Arity() {
	return 1;
}

Code* pred_not_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_not_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach->CUTB);
	Funct tempVar2(string4, continuation);
	local_aregs[1] = new Funct(string0, &tempVar, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return exec2cont;
}

Code* pred_not_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_noteq_2::INST = new pred_not_1();
Code* pred_noteq_2::entry_code;
Code* pred_noteq_2::cl1 = new pred_noteq_2_1();
Code* pred_noteq_2::cl2 = new pred_noteq_2_2();
std::string pred_noteq_2::string0 = Const::IStr("cut");
std::string pred_noteq_2::string1 = Const::IStr("call");
std::string pred_noteq_2::string2 = Const::IStr("cut");
std::string pred_noteq_2::string3 = Const::IStr("fail");
std::string pred_noteq_2::string4 = Const::IStr("noteq");
Int* pred_noteq_2::posint1 = new Int(1);

void pred_noteq_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_noteq_2::Arity() {
	return 2;
}

Code* pred_noteq_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_noteq_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string3, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_noteq_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_notmore_0::cl1 = new pred_notmore_0_1();
Code* pred_notmore_0::cl2 = new pred_notmore_0_2();
Code* pred_notmore_0::get02cont;
std::string pred_notmore_0::string0 = Const::IStr("cut");
std::string pred_notmore_0::string1 = Const::IStr("call");
std::string pred_notmore_0::string2 = Const::IStr("cut");
std::string pred_notmore_0::string3 = Const::IStr("fail");
std::string pred_notmore_0::string4 = Const::IStr("get0");
std::string pred_notmore_0::string5 = Const::IStr("noteq");
std::string pred_notmore_0::string6 = Const::IStr("notmore");
std::string pred_notmore_0::string7 = Const::IStr("untilend");
Int* pred_notmore_0::posint1 = new Int(1);
Int* pred_notmore_0::posint10 = new Int(10);
Code* pred_notmore_0::entry_code = new pred_notmore_0();

void pred_notmore_0::Init(PrologMachine* mach) {
	entry_code = this;
	get02cont = pred_get0_1::INST;
}

int pred_notmore_0::Arity() {
	return 0;
}

Code* pred_notmore_0::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_notmore_0_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Term* var1 = new Var(mach);
	local_aregs[0] = var1;
	Funct tempVar(string0, new HeapChoice(mach->CUTB), new Funct(string7, var1->Deref(), new Funct(string3, continuation)));
	local_aregs[1] = new Funct(string5, var1->Deref(), posint10, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return get02cont;
}

Code* pred_notmore_0_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_notvmember_2::entry_code;
Code* pred_notvmember_2::cl1 = new pred_notvmember_2_1();
Code* pred_notvmember_2::cl2 = new pred_notvmember_2_2();
Code* pred_notvmember_2::cl3 = new pred_notvmember_2_3();
std::string pred_notvmember_2::string0 = Const::IStr("cut");
std::string pred_notvmember_2::string1 = Const::IStr(".");
std::string pred_notvmember_2::string2 = Const::IStr("=");
std::string pred_notvmember_2::string3 = Const::IStr("[]");
std::string pred_notvmember_2::string4 = Const::IStr("cut");
std::string pred_notvmember_2::string5 = Const::IStr("fail");
std::string pred_notvmember_2::string6 = Const::IStr("notvmember");
Int* pred_notvmember_2::posint1 = new Int(1);

void pred_notvmember_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_notvmember_2::Arity() {
	return 2;
}

Code* pred_notvmember_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_notvmember_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string3);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_notvmember_2_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, new Funct(string2, var2, var1->Deref()), var3);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string5, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_notvmember_2_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	//Term areg1 = local_aregs[1].Deref();
	//Term areg0 local_aregs[0].Deref()= ;
	Term* var1 = new Var(mach);
	if(!((local_aregs[0]->Deref())->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Term* var2 = new Var(mach);
	Term* var3 = new Var(mach);
	Funct tempVar(string1, var2, var3);
	if(!((local_aregs[1]->Deref())->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_nrev_2::entry_code;
Code* pred_nrev_2::cl1 = new pred_nrev_2_1();
Code* pred_nrev_2::cl2 = new pred_nrev_2_2();
std::string pred_nrev_2::string0 = Const::IStr("cut");
std::string pred_nrev_2::string1 = Const::IStr(".");
std::string pred_nrev_2::string2 = Const::IStr("[]");
std::string pred_nrev_2::string3 = Const::IStr("append");
std::string pred_nrev_2::string4 = Const::IStr("cut");
std::string pred_nrev_2::string5 = Const::IStr("nrev");
Int* pred_nrev_2::posint1 = new Int(1);

void pred_nrev_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_nrev_2::Arity() {
	return 2;
}

Code* pred_nrev_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_nrev_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_nrev_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4;
	Funct tempVar2(string1, var1->Deref(), new Const(string2));
	local_aregs[2] = new Funct(string3, var4->Deref(), &tempVar2, var3->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_or_2::entry_code;
Code* pred_or_2::cl1 = new pred_or_2_1();
Code* pred_or_2::cl2 = new pred_or_2_2();
Code* pred_or_2::exec2cont;
std::string pred_or_2::string0 = Const::IStr("cut");
std::string pred_or_2::string1 = Const::IStr("exec");
std::string pred_or_2::string2 = Const::IStr("or");

void pred_or_2::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
}

int pred_or_2::Arity() {
	return 2;
}

Code* pred_or_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_or_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Code* pred_or_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Code* pred_prefix_3::entry_code;
Code* pred_prefix_3::cl1 = new pred_prefix_3_1();
Code* pred_prefix_3::cl2 = new pred_prefix_3_2();
Code* pred_prefix_3::cl3 = new pred_prefix_3_3();
Code* pred_prefix_3::cl4 = new pred_prefix_3_4();
std::string pred_prefix_3::string0 = Const::IStr("cut");
std::string pred_prefix_3::string1 = Const::IStr("+");
std::string pred_prefix_3::string2 = Const::IStr("-");
std::string pred_prefix_3::string3 = Const::IStr(":-");
std::string pred_prefix_3::string4 = Const::IStr("?-");
std::string pred_prefix_3::string5 = Const::IStr("call");
std::string pred_prefix_3::string6 = Const::IStr("fx");
std::string pred_prefix_3::string7 = Const::IStr("prefix");
Int* pred_prefix_3::posint500 = new Int(500);
Int* pred_prefix_3::posint1200 = new Int(1200);

void pred_prefix_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_prefix_3::Arity() {
	return 3;
}

Code* pred_prefix_3::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_prefix_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string3);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_prefix_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string4);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_prefix_3_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string1);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_prefix_3_4::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_read_1::entry_code;
Code* pred_read_1::cl1 = new pred_read_1_1();
Code* pred_read_1::nexttoken2cont;
std::string pred_read_1::string0 = Const::IStr("cut");
std::string pred_read_1::string1 = Const::IStr("cut");
std::string pred_read_1::string2 = Const::IStr("maketerm");
std::string pred_read_1::string3 = Const::IStr("nexttoken");
std::string pred_read_1::string4 = Const::IStr("read");
std::string pred_read_1::string5 = Const::IStr("readall");
Int* pred_read_1::posint1 = new Int(1);

void pred_read_1::Init(PrologMachine* mach) {
	entry_code = this;
	nexttoken2cont = mach->LoadPred("nexttoken", 1);
}

int pred_read_1::Arity() {
	return 1;
}

Code* pred_read_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_read_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	Funct tempVar(string2, var3->Deref(), var1->Deref(), new Funct(string0, new HeapChoice(mach->CUTB), continuation));
	local_aregs[1] = new Funct(string5, var2->Deref(), var3, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return nexttoken2cont;
}

Code* pred_readall_2::entry_code;
Code* pred_readall_2::cl1 = new pred_readall_2_1();
Code* pred_readall_2::cl2 = new pred_readall_2_2();
Code* pred_readall_2::cl3 = new pred_readall_2_3();
Code* pred_readall_2::nexttoken2cont;
std::string pred_readall_2::string0 = Const::IStr("cut");
std::string pred_readall_2::string1 = Const::IStr(".");
std::string pred_readall_2::string2 = Const::IStr("[]");
std::string pred_readall_2::string3 = Const::IStr("cut");
std::string pred_readall_2::string4 = Const::IStr("end_of_clause");
std::string pred_readall_2::string5 = Const::IStr("end_of_file");
std::string pred_readall_2::string6 = Const::IStr("halt");
std::string pred_readall_2::string7 = Const::IStr("nexttoken");
std::string pred_readall_2::string8 = Const::IStr("readall");
std::string pred_readall_2::string9 = Const::IStr("unify");
Int* pred_readall_2::posint1 = new Int(1);

void pred_readall_2::Init(PrologMachine* mach) {
	entry_code = this;
	nexttoken2cont = mach->LoadPred("nexttoken", 1);
}

int pred_readall_2::Arity() {
	return 2;
}

Code* pred_readall_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_readall_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string5);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string6, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_readall_2_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string4);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Const tempVar2(string2);
	local_aregs[0] = new Funct(string9, &tempVar2, var1->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_readall_2_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, var1->Deref(), var2);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = new Funct(string8, var3->Deref(), var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return nexttoken2cont;
}

Code* pred_smeq_1::entry_code;
Code* pred_smeq_1::cl1 = new pred_smeq_1_1();
Code* pred_smeq_1::cl2 = new pred_smeq_1_2();
std::string pred_smeq_1::string0 = Const::IStr("cut");
std::string pred_smeq_1::string1 = Const::IStr("<");
std::string pred_smeq_1::string2 = Const::IStr("=");
std::string pred_smeq_1::string3 = Const::IStr("call");
std::string pred_smeq_1::string4 = Const::IStr("cut");
std::string pred_smeq_1::string5 = Const::IStr("smeq");
Int* pred_smeq_1::posint1 = new Int(1);

void pred_smeq_1::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_smeq_1::Arity() {
	return 1;
}

Code* pred_smeq_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_smeq_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string1);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_smeq_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_smgr_1::entry_code;
Code* pred_smgr_1::cl1 = new pred_smgr_1_1();
Code* pred_smgr_1::cl2 = new pred_smgr_1_2();
std::string pred_smgr_1::string0 = Const::IStr("cut");
std::string pred_smgr_1::string1 = Const::IStr("=");
std::string pred_smgr_1::string2 = Const::IStr(">");
std::string pred_smgr_1::string3 = Const::IStr("call");
std::string pred_smgr_1::string4 = Const::IStr("cut");
std::string pred_smgr_1::string5 = Const::IStr("smgr");
Int* pred_smgr_1::posint1 = new Int(1);

void pred_smgr_1::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_smgr_1::Arity() {
	return 1;
}

Code* pred_smgr_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_smgr_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_smgr_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string1);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_sort_2::entry_code;
Code* pred_sort_2::cl1 = new pred_sort_2_1();
Code* pred_sort_2::cl2 = new pred_sort_2_2();
Code* pred_sort_2::cut2cont = pred_split_4::entry_code;
Code* pred_sort_2::split5cont;
std::string pred_sort_2::string0 = Const::IStr("cut");
std::string pred_sort_2::string1 = Const::IStr(".");
std::string pred_sort_2::string2 = Const::IStr("[]");
std::string pred_sort_2::string3 = Const::IStr("append");
std::string pred_sort_2::string4 = Const::IStr("cut");
std::string pred_sort_2::string5 = Const::IStr("sort");
std::string pred_sort_2::string6 = Const::IStr("split");
Int* pred_sort_2::posint1 = new Int(1);

void pred_sort_2::Init(PrologMachine* mach) {
	entry_code = this;
	//split5cont = mach.LoadPred("split", 4);
}

int pred_sort_2::Arity() {
	return 2;
}

Code* pred_sort_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_sort_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_sort_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var7 = new Var(mach);
	Term* var6 = new Var(mach);
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = var5;
	Funct tempVar2(string5, var5->Deref(), var7, new Funct(string3, var6->Deref(), new Funct(string1, var1->Deref(), var7->Deref()), var3->Deref(), continuation));
	local_aregs[4] = new Funct(string5, var4->Deref(), var6, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return split5cont;
}

Code* pred_specialgoal_2::entry_code;
Code* pred_specialgoal_2::cl1 = new pred_specialgoal_2_1();
Code* pred_specialgoal_2::cl2 = new pred_specialgoal_2_2();
Code* pred_specialgoal_2::cl3 = new pred_specialgoal_2_3();
Code* pred_specialgoal_2::cl4 = new pred_specialgoal_2_4();
Code* pred_specialgoal_2::cl5 = new pred_specialgoal_2_5();
Code* pred_specialgoal_2::cl6 = new pred_specialgoal_2_6();
Code* pred_specialgoal_2::cl7 = new pred_specialgoal_2_7();
Code* pred_specialgoal_2::cl8 = new pred_specialgoal_2_8();
Code* pred_specialgoal_2::cl9 = new pred_specialgoal_2_9();
Code* pred_specialgoal_2::cl10 = new pred_specialgoal_2_10();
Code* pred_specialgoal_2::cl11 = new pred_specialgoal_2_11();
Code* pred_specialgoal_2::cl12 = new pred_specialgoal_2_12();
std::string pred_specialgoal_2::string0 = Const::IStr("cut");
std::string pred_specialgoal_2::string1 = Const::IStr(";");
std::string pred_specialgoal_2::string2 = Const::IStr("<");
std::string pred_specialgoal_2::string3 = Const::IStr("=");
std::string pred_specialgoal_2::string4 = Const::IStr("=:=");
std::string pred_specialgoal_2::string5 = Const::IStr("=<");
std::string pred_specialgoal_2::string6 = Const::IStr("==");
std::string pred_specialgoal_2::string7 = Const::IStr(">");
std::string pred_specialgoal_2::string8 = Const::IStr(">=");
std::string pred_specialgoal_2::string9 = Const::IStr("@<");
std::string pred_specialgoal_2::string10 = Const::IStr("@=<");
std::string pred_specialgoal_2::string11 = Const::IStr("@>");
std::string pred_specialgoal_2::string12 = Const::IStr("@>=");
std::string pred_specialgoal_2::string13 = Const::IStr("arithequal");
std::string pred_specialgoal_2::string14 = Const::IStr("cut");
std::string pred_specialgoal_2::string15 = Const::IStr("or");
std::string pred_specialgoal_2::string16 = Const::IStr("smallerorequal");
std::string pred_specialgoal_2::string17 = Const::IStr("smallerthan");
std::string pred_specialgoal_2::string18 = Const::IStr("specialgoal");
std::string pred_specialgoal_2::string19 = Const::IStr("termequal");
std::string pred_specialgoal_2::string20 = Const::IStr("termgreaterequal");
std::string pred_specialgoal_2::string21 = Const::IStr("termgreaterthan");
std::string pred_specialgoal_2::string22 = Const::IStr("termsmallerequal");
std::string pred_specialgoal_2::string23 = Const::IStr("termsmallerthan");
std::string pred_specialgoal_2::string24 = Const::IStr("unify");
Int* pred_specialgoal_2::posint1 = new Int(1);

void pred_specialgoal_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int pred_specialgoal_2::Arity() {
	return 2;
}

Code* pred_specialgoal_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_specialgoal_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string17, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string5, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string16, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string7, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string17, var2->Deref(), var1->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string8, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string16, var2->Deref(), var1->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string13, var2->Deref(), var1->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_6::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string3, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string24, var2->Deref(), var1->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_7::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string15, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_8::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string9, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string23, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_9::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string11, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string21, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_10::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string10, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string22, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_11::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string12, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string20, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_12::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string6, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string19, var1->Deref(), var2->Deref());
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_split_4::entry_code;
Code* pred_split_4::cl1 = new pred_split_4_1();
Code* pred_split_4::cl2 = new pred_split_4_2();
Code* pred_split_4::cl3 = new pred_split_4_3();
Code* pred_split_4::smallerthan3cont;
std::string pred_split_4::string0 = Const::IStr("cut");
std::string pred_split_4::string1 = Const::IStr(".");
std::string pred_split_4::string2 = Const::IStr("[]");
std::string pred_split_4::string3 = Const::IStr("cut");
std::string pred_split_4::string4 = Const::IStr("smallerthan");
std::string pred_split_4::string5 = Const::IStr("split");
Int* pred_split_4::posint1 = new Int(1);

void pred_split_4::Init(PrologMachine* mach) {
	entry_code = this;
	smallerthan3cont = mach->LoadPred("smallerthan", 2);
}

int pred_split_4::Arity() {
	return 4;
}

Code* pred_split_4::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3], mach->Areg[4] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_split_4_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string2);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar3(string2);
	if(!((areg3)->Unify(&tempVar3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_split_4_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, var2, var3);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var2->Deref(), var4);
	if(!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar3(mach->CUTB);
	Funct tempVar4(string5, var1->Deref(), var3->Deref(), var4->Deref(), var5->Deref(), continuation);
	local_aregs[2] = new Funct(string0, &tempVar3, &tempVar4);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return smallerthan3cont;
}

Code* pred_split_4_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var5 = new Var(mach);
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, var2, var3);
	if(!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var2->Deref(), var5);
	if(!((areg3)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = var5->Deref();
	local_aregs[4] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_statistics_2::entry_code;
Code* pred_statistics_2::cl1 = new pred_statistics_2_1();
Code* pred_statistics_2::cputime2cont;
std::string pred_statistics_2::string0 = Const::IStr("cut");
std::string pred_statistics_2::string1 = Const::IStr(".");
std::string pred_statistics_2::string2 = Const::IStr("[]");
std::string pred_statistics_2::string3 = Const::IStr("cputime");
std::string pred_statistics_2::string4 = Const::IStr("runtime");
std::string pred_statistics_2::string5 = Const::IStr("statistics");

void pred_statistics_2::Init(PrologMachine* mach) {
	entry_code = this;
	cputime2cont = mach->LoadPred("cputime", 1);
}

int pred_statistics_2::Arity() {
	return 2;
}

Code* pred_statistics_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_statistics_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Const tempVar(string4);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var1, new Funct(string1, var2, new Const(string2)));
	if(!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return cputime2cont;
}

Code* pred_termequal_2::entry_code;
Code* pred_termequal_2::cl1 = new pred_termequal_2_1();
Code* pred_termequal_2::compare4cont;
std::string pred_termequal_2::string0 = Const::IStr("cut");
std::string pred_termequal_2::string1 = Const::IStr("=");
std::string pred_termequal_2::string2 = Const::IStr("compare");
std::string pred_termequal_2::string3 = Const::IStr("termequal");

void pred_termequal_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int pred_termequal_2::Arity() {
	return 2;
}

Code* pred_termequal_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_termequal_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Const(string1);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

Code* pred_termgreaterequal_2::entry_code;
Code* pred_termgreaterequal_2::cl1 = new pred_termgreaterequal_2_1();
Code* pred_termgreaterequal_2::compare4cont;
std::string pred_termgreaterequal_2::string0 = Const::IStr("cut");
std::string pred_termgreaterequal_2::string1 = Const::IStr("compare");
std::string pred_termgreaterequal_2::string2 = Const::IStr("smgr");
std::string pred_termgreaterequal_2::string3 = Const::IStr("termgreaterequal");

void pred_termgreaterequal_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int pred_termgreaterequal_2::Arity() {
	return 2;
}

Code* pred_termgreaterequal_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_termgreaterequal_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = new Funct(string2, var3->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

Code* pred_termgreaterthan_2::entry_code;
Code* pred_termgreaterthan_2::cl1 = new pred_termgreaterthan_2_1();
Code* pred_termgreaterthan_2::compare4cont;
std::string pred_termgreaterthan_2::string0 = Const::IStr("cut");
std::string pred_termgreaterthan_2::string1 = Const::IStr(">");
std::string pred_termgreaterthan_2::string2 = Const::IStr("compare");
std::string pred_termgreaterthan_2::string3 = Const::IStr("termgreaterthan");

void pred_termgreaterthan_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int pred_termgreaterthan_2::Arity() {
	return 2;
}

Code* pred_termgreaterthan_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_termgreaterthan_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Const(string1);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

Code* pred_termsmallerequal_2::entry_code;
Code* pred_termsmallerequal_2::cl1 = new pred_termsmallerequal_2_1();
Code* pred_termsmallerequal_2::compare4cont;
std::string pred_termsmallerequal_2::string0 = Const::IStr("cut");
std::string pred_termsmallerequal_2::string1 = Const::IStr("compare");
std::string pred_termsmallerequal_2::string2 = Const::IStr("smeq");
std::string pred_termsmallerequal_2::string3 = Const::IStr("termsmallerequal");

void pred_termsmallerequal_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int pred_termsmallerequal_2::Arity() {
	return 2;
}

Code* pred_termsmallerequal_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_termsmallerequal_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = new Funct(string2, var3->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

Code* pred_termsmallerthan_2::entry_code;
Code* pred_termsmallerthan_2::cl1 = new pred_termsmallerthan_2_1();
Code* pred_termsmallerthan_2::compare4cont;
std::string pred_termsmallerthan_2::string0 = Const::IStr("cut");
std::string pred_termsmallerthan_2::string1 = Const::IStr("<");
std::string pred_termsmallerthan_2::string2 = Const::IStr("compare");
std::string pred_termsmallerthan_2::string3 = Const::IStr("termsmallerthan");

void pred_termsmallerthan_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int pred_termsmallerthan_2::Arity() {
	return 2;
}

Code* pred_termsmallerthan_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_termsmallerthan_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Const(string1);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

Code* pred_time_1::entry_code;
Code* pred_time_1::cl1 = new pred_time_1_1();
Code* pred_time_1::cputime2cont;
std::string pred_time_1::string0 = Const::IStr("cut");
std::string pred_time_1::string1 = Const::IStr("-");
std::string pred_time_1::string2 = Const::IStr("cputime");
std::string pred_time_1::string3 = Const::IStr("exec");
std::string pred_time_1::string4 = Const::IStr("is");
std::string pred_time_1::string5 = Const::IStr("nl");
std::string pred_time_1::string6 = Const::IStr("time");
std::string pred_time_1::string7 = Const::IStr("write");

void pred_time_1::Init(PrologMachine* mach) {
	entry_code = this;
	cputime2cont = mach->LoadPred("cputime", 1);
}

int pred_time_1::Arity() {
	return 1;
}

Code* pred_time_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_time_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	Funct tempVar(string2, var3, new Funct(string4, var4, new Funct(string1, var3->Deref(), var2->Deref()), new Funct(string7, var4->Deref(), new Funct(string5, continuation))));
	local_aregs[1] = new Funct(string3, var1->Deref(), &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return cputime2cont;
}

Code* pred_top_0::entry_code;
Code* pred_top_0::cl1 = new pred_top_0_1();
Code* pred_top_0::cl2 = new pred_top_0_2();
Code* pred_top_0::write2cont;
std::string pred_top_0::string0 = Const::IStr("cut");
std::string pred_top_0::string1 = Const::IStr("?- ");
std::string pred_top_0::string2 = Const::IStr("Yes");
std::string pred_top_0::string3 = Const::IStr("cut");
std::string pred_top_0::string4 = Const::IStr("exec");
std::string pred_top_0::string5 = Const::IStr("fail");
std::string pred_top_0::string6 = Const::IStr("nl");
std::string pred_top_0::string7 = Const::IStr("notmore");
std::string pred_top_0::string8 = Const::IStr("top");
std::string pred_top_0::string9 = Const::IStr("vread");
std::string pred_top_0::string10 = Const::IStr("write");
std::string pred_top_0::string11 = Const::IStr("writevars");
Int* pred_top_0::posint1 = new Int(1);

void pred_top_0::Init(PrologMachine* mach) {
	entry_code = this;
	write2cont = mach->LoadPred("write", 1);
}

int pred_top_0::Arity() {
	return 0;
}

Code* pred_top_0::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_top_0_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	local_aregs[0] = new Const(string1);
	Funct tempVar(string4, var1->Deref(), new Funct(string11, var2->Deref(), new Funct(string10, new Const(string2), new Funct(string6, new Funct(string7, new Funct(string0, new HeapChoice(mach->CUTB), new Funct(string5, continuation)))))));
	local_aregs[1] = new Funct(string9, var1, var2, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return write2cont;
}

Code* pred_top_0_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_toplevel_0::entry_code;
Code* pred_toplevel_0::cl1 = new pred_toplevel_0_1();
Code* pred_toplevel_0::cl2 = new pred_toplevel_0_2();
Code* pred_toplevel_0::top1cont;
std::string pred_toplevel_0::string0 = Const::IStr("cut");
std::string pred_toplevel_0::string1 = Const::IStr("fail");
std::string pred_toplevel_0::string2 = Const::IStr("top");
std::string pred_toplevel_0::string3 = Const::IStr("toplevel");

void pred_toplevel_0::Init(PrologMachine* mach) {
	entry_code = this;
	top1cont = mach->LoadPred("top", 0);
}

int pred_toplevel_0::Arity() {
	return 0;
}

Code* pred_toplevel_0::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_toplevel_0_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = new Funct(string1, continuation);
	mach->CUTB = mach->CurrentChoice;
	return top1cont;
}

Code* pred_toplevel_0_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

Code* pred_untilend_1::entry_code;
Code* pred_untilend_1::cl1 = new pred_untilend_1_1();
Code* pred_untilend_1::cl2 = new pred_untilend_1_2();
Code* pred_untilend_1::get02cont;
std::string pred_untilend_1::string0 = Const::IStr("cut");
std::string pred_untilend_1::string1 = Const::IStr("cut");
std::string pred_untilend_1::string2 = Const::IStr("get0");
std::string pred_untilend_1::string3 = Const::IStr("untilend");
Int* pred_untilend_1::posint1 = new Int(1);
Int* pred_untilend_1::posint10 = new Int(10);

void pred_untilend_1::Init(PrologMachine* mach) {
	entry_code = this;
	get02cont = mach->LoadPred("get0", 1);
}

int pred_untilend_1::Arity() {
	return 1;
}

Code* pred_untilend_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_untilend_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(posint10))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Code* pred_untilend_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = new Funct(string3, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return get02cont;
}

Code* pred_var_1::entry_code;
Code* pred_var_1::cl1 = new pred_var_1_1();
Code* pred_var_1::type_of3cont;
std::string pred_var_1::string0 = Const::IStr("cut");
std::string pred_var_1::string1 = Const::IStr("type_of");
std::string pred_var_1::string2 = Const::IStr("var");

void pred_var_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int pred_var_1::Arity() {
	return 1;
}

Code* pred_var_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_var_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Const(string2);
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

Code* pred_vread_2::entry_code;
Code* pred_vread_2::cl1 = new pred_vread_2_1();
Code* pred_vread_2::nexttoken2cont;
std::string pred_vread_2::string0 = Const::IStr("cut");
std::string pred_vread_2::string1 = Const::IStr("[]");
std::string pred_vread_2::string2 = Const::IStr("collectvars");
std::string pred_vread_2::string3 = Const::IStr("cut");
std::string pred_vread_2::string4 = Const::IStr("maketerm");
std::string pred_vread_2::string5 = Const::IStr("nexttoken");
std::string pred_vread_2::string6 = Const::IStr("readall");
std::string pred_vread_2::string7 = Const::IStr("vread");
Int* pred_vread_2::posint1 = new Int(1);

void pred_vread_2::Init(PrologMachine* mach) {
	entry_code = this;
	nexttoken2cont = mach->LoadPred("nexttoken", 1);
}

int pred_vread_2::Arity() {
	return 2;
}

Code* pred_vread_2::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_vread_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	Funct tempVar(string4, var4->Deref(), var1->Deref(), new Funct(string0, new HeapChoice(mach->CUTB), new Funct(string2, var4->Deref(), new Const(string1), var2->Deref(), continuation)));
	local_aregs[1] = new Funct(string6, var3->Deref(), var4, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return nexttoken2cont;
}

Code* pred_writevars_1::entry_code;
Code* pred_writevars_1::cl1 = new pred_writevars_1_1();
Code* pred_writevars_1::cl2 = new pred_writevars_1_2();
Code* pred_writevars_1::cl3 = new pred_writevars_1_3();
Code* pred_writevars_1::write2cont;
std::string pred_writevars_1::string0 = Const::IStr("cut");
std::string pred_writevars_1::string1 = Const::IStr(" = Const.IStr(");
std::string pred_writevars_1::string2 = Const::IStr(".");
std::string pred_writevars_1::string3 = Const::IStr("=");
std::string pred_writevars_1::string4 = Const::IStr("[]");
std::string pred_writevars_1::string5 = Const::IStr("call");
std::string pred_writevars_1::string6 = Const::IStr("fail");
std::string pred_writevars_1::string7 = Const::IStr("nl");
std::string pred_writevars_1::string8 = Const::IStr("write");
std::string pred_writevars_1::string9 = Const::IStr("writevars");

void pred_writevars_1::Init(PrologMachine* mach) {
	entry_code = this;
	write2cont = mach->LoadPred("write", 1);
}

int pred_writevars_1::Arity() {
	return 1;
}

Code* pred_writevars_1::Exec(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return cl1->Exec(mach);
}

Code* pred_writevars_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string4);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Code* pred_writevars_1_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, new Funct(string3, var1, var2), var3);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	Const tempVar2(string1);
	Funct tempVar3(string8, var1->Deref(), new Funct(string7, new Funct(string6, continuation)));
	local_aregs[1] = new Funct(string8, &tempVar2, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	return write2cont;
}

Code* pred_writevars_1_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, var1, var2);
	if(!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}
