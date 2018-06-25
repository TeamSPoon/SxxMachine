using namespace std;

#include "library.h"
#include "Prolog.h"
#include "Term.h"

java::util::function::Function* hand_pred_ap_3::entry_code;
java::util::function::Function* hand_pred_ap_3::cl1 = new hand_pred_ap_3_1();
java::util::function::Function* hand_pred_ap_3::cl2 = new hand_pred_ap_3_2();
wstring hand_pred_ap_3::string0 = (wstring("cut")).intern();
wstring hand_pred_ap_3::string1 = (wstring(".")).intern();
wstring hand_pred_ap_3::string2 = (wstring("[]")).intern();
wstring hand_pred_ap_3::string3 = (wstring("ap")).intern();
wstring hand_pred_ap_3::string4 = (wstring("call")).intern();

void hand_pred_ap_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_ap_3::Arity() {
	return 3;
}

Function* hand_pred_ap_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_ap_3_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_ap_3_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var1->Deref(), var4);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_append_3::entry_code;
java::util::function::Function* hand_pred_append_3::cl1 =
		new hand_pred_append_3_1();
java::util::function::Function* hand_pred_append_3::cl2 =
		new hand_pred_append_3_2();
wstring hand_pred_append_3::string0 = (wstring("cut")).intern();
wstring hand_pred_append_3::string1 = (wstring(".")).intern();
wstring hand_pred_append_3::string2 = (wstring("[]")).intern();
wstring hand_pred_append_3::string3 = (wstring("append")).intern();
wstring hand_pred_append_3::string4 = (wstring("call")).intern();

void hand_pred_append_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_append_3::Arity() {
	return 3;
}

Function* hand_pred_append_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_append_3_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_append_3_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var1->Deref(), var4);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_assumed_1::entry_code;
java::util::function::Function* hand_pred_assumed_1::cl1 =
		new hand_pred_assumed_1_1();
java::util::function::Function* hand_pred_assumed_1::allassumed2cont;
wstring hand_pred_assumed_1::string0 = (wstring("cut")).intern();
wstring hand_pred_assumed_1::string1 = (wstring("allassumed")).intern();
wstring hand_pred_assumed_1::string2 = (wstring("assumed")).intern();
wstring hand_pred_assumed_1::string3 = (wstring("m1")).intern();

void hand_pred_assumed_1::Init(PrologMachine* mach) {
	entry_code = this;
	allassumed2cont = mach->LoadPred("allassumed", 1);
}

int hand_pred_assumed_1::Arity() {
	return 1;
}

Function* hand_pred_assumed_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_assumed_1_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = new Funct(string3, var1->Deref(), var2->Deref(),
			continuation);
	mach->CUTB = mach->CurrentChoice;
	return allassumed2cont;
}

java::util::function::Function* hand_pred_assumeduring_2::entry_code;
java::util::function::Function* hand_pred_assumeduring_2::cl1 =
		new hand_pred_assumeduring_2_1();
java::util::function::Function* hand_pred_assumeduring_2::assume2cont;
wstring hand_pred_assumeduring_2::string0 = (wstring("cut")).intern();
wstring hand_pred_assumeduring_2::string1 = (wstring("-")).intern();
wstring hand_pred_assumeduring_2::string2 = (wstring("assume")).intern();
wstring hand_pred_assumeduring_2::string3 = (wstring("assumeduring")).intern();
wstring hand_pred_assumeduring_2::string4 = (wstring("exec")).intern();
wstring hand_pred_assumeduring_2::string5 = (wstring("unify")).intern();
Int* hand_pred_assumeduring_2::posint1 = new Int(1);

void hand_pred_assumeduring_2::Init(PrologMachine* mach) {
	entry_code = this;
	assume2cont = mach->LoadPred("assume", 1);
}

int hand_pred_assumeduring_2::Arity() {
	return 2;
}

Function* hand_pred_assumeduring_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_assumeduring_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Funct(string1, var2->Deref(), var3);
	Funct tempVar(string5, posint1, var3->Deref(), continuation);
	local_aregs[1] = new Funct(string4, var1->Deref(), &tempVar);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return assume2cont;
}

java::util::function::Function* hand_pred_atom_1::entry_code;
java::util::function::Function* hand_pred_atom_1::cl1 =
		new hand_pred_atom_1_1();
java::util::function::Function* hand_pred_atom_1::type_of3cont;
wstring hand_pred_atom_1::string0 = Const::IStr("cut");
wstring hand_pred_atom_1::string1 = Const::IStr("atom");
wstring hand_pred_atom_1::string2 = Const::IStr("type_of");

void hand_pred_atom_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int hand_pred_atom_1::Arity() {
	return 1;
}

Function* hand_pred_atom_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_atom_1_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Const(string1);
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

java::util::function::Function* hand_pred_atomic_1::entry_code;
java::util::function::Function* hand_pred_atomic_1::cl1 =
		new hand_pred_atomic_1_1();
java::util::function::Function* hand_pred_atomic_1::type_of3cont;
wstring hand_pred_atomic_1::string0 = (wstring("cut")).intern();
wstring hand_pred_atomic_1::string1 = (wstring("atomic")).intern();
wstring hand_pred_atomic_1::string2 = (wstring("atomic2")).intern();
wstring hand_pred_atomic_1::string3 = (wstring("type_of")).intern();

void hand_pred_atomic_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int hand_pred_atomic_1::Arity() {
	return 1;
}

Function* hand_pred_atomic_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_atomic_1_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2;
	local_aregs[2] = new Funct(string2, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

java::util::function::Function* hand_pred_atomic2_1::entry_code;
java::util::function::Function* hand_pred_atomic2_1::cl1 =
		new hand_pred_atomic2_1_1();
java::util::function::Function* hand_pred_atomic2_1::cl2 =
		new hand_pred_atomic2_1_2();
java::util::function::Function* hand_pred_atomic2_1::cut2cont;
wstring hand_pred_atomic2_1::string0 = (wstring("cut")).intern();
wstring hand_pred_atomic2_1::string1 = (wstring("atom")).intern();
wstring hand_pred_atomic2_1::string2 = (wstring("atomic2")).intern();
wstring hand_pred_atomic2_1::string3 = (wstring("call")).intern();
wstring hand_pred_atomic2_1::string4 = (wstring("cut")).intern();
wstring hand_pred_atomic2_1::string5 = (wstring("integer")).intern();
Int* hand_pred_atomic2_1::posint1 = new Int(1);

void hand_pred_atomic2_1::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_atomic2_1::Arity() {
	return 1;
}

Function* hand_pred_atomic2_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_atomic2_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string1);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_atomic2_1_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string5);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_collectvars_3::entry_code;
java::util::function::Function* hand_pred_collectvars_3::cl1 =
		new hand_pred_collectvars_3_1();
java::util::function::Function* hand_pred_collectvars_3::cl2 =
		new hand_pred_collectvars_3_2();
java::util::function::Function* hand_pred_collectvars_3::cl3 =
		new hand_pred_collectvars_3_3();
java::util::function::Function* hand_pred_collectvars_3::cut2cont;
java::util::function::Function* hand_pred_collectvars_3::noteq3cont;
wstring hand_pred_collectvars_3::string0 = (wstring("cut")).intern();
wstring hand_pred_collectvars_3::string1 = (wstring(".")).intern();
wstring hand_pred_collectvars_3::string2 = (wstring("=")).intern();
wstring hand_pred_collectvars_3::string3 = (wstring("[]")).intern();
wstring hand_pred_collectvars_3::string4 = (wstring("_")).intern();
wstring hand_pred_collectvars_3::string5 = (wstring("collectvars")).intern();
wstring hand_pred_collectvars_3::string6 = (wstring("cut")).intern();
wstring hand_pred_collectvars_3::string7 = (wstring("noteq")).intern();
wstring hand_pred_collectvars_3::string8 = (wstring("notvmember")).intern();
wstring hand_pred_collectvars_3::string9 = (wstring("var")).intern();
Int* hand_pred_collectvars_3::posint1 = new Int(1);

void hand_pred_collectvars_3::Init(PrologMachine* mach) {
	entry_code = this;
	noteq3cont = mach->LoadPred("noteq", 2);
}

int hand_pred_collectvars_3::Arity() {
	return 3;
}

Function* hand_pred_collectvars_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_collectvars_3_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string3);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_collectvars_3_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var6))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = new Const(string4);
	Funct tempVar2(string0, new HeapChoice(mach->CUTB),
			new Funct(string5, var4->Deref(),
					new Funct(string1,
							new Funct(string2, var1->Deref(), var2->Deref()),
							var5->Deref()), var6->Deref(), continuation));
	local_aregs[2] = new Funct(string8, var2->Deref(), var5->Deref(),
			&tempVar2);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return noteq3cont;
}

Function* hand_pred_collectvars_3_3::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_copy_term_2::entry_code;
java::util::function::Function* hand_pred_copy_term_2::cl1 =
		new hand_pred_copy_term_2_1();
java::util::function::Function* hand_pred_copy_term_2::findall4cont;
wstring hand_pred_copy_term_2::string0 = (wstring("cut")).intern();
wstring hand_pred_copy_term_2::string1 = (wstring(".")).intern();
wstring hand_pred_copy_term_2::string2 = (wstring("=")).intern();
wstring hand_pred_copy_term_2::string3 = (wstring("[]")).intern();
wstring hand_pred_copy_term_2::string4 = (wstring("copy_term")).intern();
wstring hand_pred_copy_term_2::string5 = (wstring("findall")).intern();

void hand_pred_copy_term_2::Init(PrologMachine* mach) {
	entry_code = this;
	findall4cont = mach->LoadPred("findall", 3);
}

int hand_pred_copy_term_2::Arity() {
	return 2;
}

Function* hand_pred_copy_term_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_copy_term_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
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

java::util::function::Function* hand_pred_exec_1::entry_code;
java::util::function::Function* hand_pred_exec_1::cl1 =
		new hand_pred_exec_1_1();
java::util::function::Function* hand_pred_exec_1::cl2 =
		new hand_pred_exec_1_2();
java::util::function::Function* hand_pred_exec_1::cl3 =
		new hand_pred_exec_1_3();
java::util::function::Function* hand_pred_exec_1::cl4 =
		new hand_pred_exec_1_4();
java::util::function::Function* hand_pred_exec_1::cl5 =
		new hand_pred_exec_1_5();
java::util::function::Function* hand_pred_exec_1::cl6 =
		new hand_pred_exec_1_6();
java::util::function::Function* hand_pred_exec_1::cut2cont;
java::util::function::Function* hand_pred_exec_1::specialgoal3cont;
java::util::function::Function* hand_pred_exec_1::var2cont;
wstring hand_pred_exec_1::string0 = (wstring("cut")).intern();
wstring hand_pred_exec_1::string1 = (wstring(",")).intern();
wstring hand_pred_exec_1::string2 = (wstring("->")).intern();
wstring hand_pred_exec_1::string3 = (wstring(";")).intern();
wstring hand_pred_exec_1::string4 = (wstring("call")).intern();
wstring hand_pred_exec_1::string5 = (wstring("cut")).intern();
wstring hand_pred_exec_1::string6 = (wstring("exec")).intern();
wstring hand_pred_exec_1::string7 = (wstring("execdisj")).intern();
wstring hand_pred_exec_1::string8 = (wstring("fail")).intern();
wstring hand_pred_exec_1::string9 = (wstring("specialgoal")).intern();
wstring hand_pred_exec_1::string10 = (wstring("true")).intern();
wstring hand_pred_exec_1::string11 = (wstring("var")).intern();
Int* hand_pred_exec_1::posint1 = new Int(1);

void hand_pred_exec_1::Init(PrologMachine* mach) {
	entry_code = this;
	specialgoal3cont = mach->LoadPred("specialgoal", 2);
	var2cont = mach->LoadPred("var", 1);
}

int hand_pred_exec_1::Arity() {
	return 1;
}

Function* hand_pred_exec_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_exec_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach->CUTB);
	Funct tempVar2(string8, continuation);
	local_aregs[1] = new Funct(string0, &tempVar, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return var2cont;
}

Function* hand_pred_exec_1_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string6, var2->Deref(), continuation);
	local_aregs[0] = new Funct(string6, var1->Deref(), &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_exec_1_3::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string2, var1->Deref(), var2->Deref());
	Const tempVar3(string10);
	local_aregs[0] = new Funct(string7, &tempVar2, &tempVar3, continuation);
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_exec_1_4::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string3, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string7, var1->Deref(), var2->Deref(),
			continuation);
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_exec_1_5::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
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

Function* hand_pred_exec_1_6::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call2;
}

java::util::function::Function* hand_pred_execdisj_2::entry_code;
java::util::function::Function* hand_pred_execdisj_2::cl1 =
		new hand_pred_execdisj_2_1();
java::util::function::Function* hand_pred_execdisj_2::cl2 =
		new hand_pred_execdisj_2_2();
java::util::function::Function* hand_pred_execdisj_2::cl3 =
		new hand_pred_execdisj_2_3();
java::util::function::Function* hand_pred_execdisj_2::cl4 =
		new hand_pred_execdisj_2_4();
java::util::function::Function* hand_pred_execdisj_2::cut2cont;
java::util::function::Function* hand_pred_execdisj_2::exec2cont;
wstring hand_pred_execdisj_2::string0 = (wstring("cut")).intern();
wstring hand_pred_execdisj_2::string1 = (wstring("->")).intern();
wstring hand_pred_execdisj_2::string2 = (wstring("cut")).intern();
wstring hand_pred_execdisj_2::string3 = (wstring("exec")).intern();
wstring hand_pred_execdisj_2::string4 = (wstring("execdisj")).intern();
Int* hand_pred_execdisj_2::posint1 = new Int(1);

void hand_pred_execdisj_2::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
}

int hand_pred_execdisj_2::Arity() {
	return 2;
}

Function* hand_pred_execdisj_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_execdisj_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
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

Function* hand_pred_execdisj_2_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string3, var3->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_execdisj_2_3::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Function* hand_pred_execdisj_2_4::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

java::util::function::Function* hand_pred_execpendinggoals_1::entry_code;
java::util::function::Function* hand_pred_execpendinggoals_1::cl1 =
		new hand_pred_execpendinggoals_1_1();
java::util::function::Function* hand_pred_execpendinggoals_1::cl2 =
		new hand_pred_execpendinggoals_1_2();
java::util::function::Function* hand_pred_execpendinggoals_1::exec2cont;
java::util::function::Function* hand_pred_execpendinggoals_1::execcontinuation1cont;
wstring hand_pred_execpendinggoals_1::string0 = (wstring("cut")).intern();
wstring hand_pred_execpendinggoals_1::string1 = (wstring(".")).intern();
wstring hand_pred_execpendinggoals_1::string2 = (wstring("[]")).intern();
wstring hand_pred_execpendinggoals_1::string3 = (wstring("exec")).intern();
wstring hand_pred_execpendinggoals_1::string4 =
		(wstring("execcontinuation")).intern();
wstring hand_pred_execpendinggoals_1::string5 =
		(wstring("execpendinggoals")).intern();

void hand_pred_execpendinggoals_1::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
	execcontinuation1cont = mach->LoadPred("execcontinuation", 0);
}

int hand_pred_execpendinggoals_1::Arity() {
	return 1;
}

Function* hand_pred_execpendinggoals_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_execpendinggoals_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return execcontinuation1cont;
}

Function* hand_pred_execpendinggoals_1_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Funct(string5, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return exec2cont;
}

java::util::function::Function* hand_pred_findall2_4::entry_code;
java::util::function::Function* hand_pred_findall2_4::cl1 =
		new hand_pred_findall2_4_1();
java::util::function::Function* hand_pred_findall2_4::cl2 =
		new hand_pred_findall2_4_2();
java::util::function::Function* hand_pred_findall2_4::exec2cont;
java::util::function::Function* hand_pred_findall2_4::retrievefindall3cont;
wstring hand_pred_findall2_4::string0 = (wstring("cut")).intern();
wstring hand_pred_findall2_4::string1 = (wstring("addfindall")).intern();
wstring hand_pred_findall2_4::string2 = (wstring("exec")).intern();
wstring hand_pred_findall2_4::string3 = (wstring("fail")).intern();
wstring hand_pred_findall2_4::string4 = (wstring("findall2")).intern();
wstring hand_pred_findall2_4::string5 = (wstring("retrievefindall")).intern();

void hand_pred_findall2_4::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
	retrievefindall3cont = mach->LoadPred("retrievefindall", 2);
}

int hand_pred_findall2_4::Arity() {
	return 4;
}

Function* hand_pred_findall2_4::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3], mach->Areg[4] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_findall2_4_1::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	Funct tempVar(string3, continuation);
	local_aregs[1] = new Funct(string1, var1->Deref(), var4->Deref(), &tempVar);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return exec2cont;
}

Function* hand_pred_findall2_4_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg3)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3->Deref();
	local_aregs[1] = var4->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return retrievefindall3cont;
}

java::util::function::Function* hand_pred_findall_3::entry_code;
java::util::function::Function* hand_pred_findall_3::cl1 =
		new hand_pred_findall_3_1();
java::util::function::Function* hand_pred_findall_3::initfindall2cont;
wstring hand_pred_findall_3::string0 = (wstring("cut")).intern();
wstring hand_pred_findall_3::string1 = (wstring("findall")).intern();
wstring hand_pred_findall_3::string2 = (wstring("findall2")).intern();
wstring hand_pred_findall_3::string3 = (wstring("initfindall")).intern();

void hand_pred_findall_3::Init(PrologMachine* mach) {
	entry_code = this;
	initfindall2cont = mach->LoadPred("initfindall", 1);
}

int hand_pred_findall_3::Arity() {
	return 3;
}

Function* hand_pred_findall_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_findall_3_1::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = new Funct(string2, var1->Deref(), var2->Deref(),
			var3->Deref(), var4->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return initfindall2cont;
}

java::util::function::Function* hand_pred_freeze_2::entry_code;
java::util::function::Function* hand_pred_freeze_2::cl1 =
		new hand_pred_freeze_2_1();
java::util::function::Function* hand_pred_freeze_2::cl2 =
		new hand_pred_freeze_2_2();
java::util::function::Function* hand_pred_freeze_2::exec2cont;
java::util::function::Function* hand_pred_freeze_2::var2cont;
wstring hand_pred_freeze_2::string0 = (wstring("cut")).intern();
wstring hand_pred_freeze_2::string1 = (wstring("cut")).intern();
wstring hand_pred_freeze_2::string2 = (wstring("exec")).intern();
wstring hand_pred_freeze_2::string3 = (wstring("freeze")).intern();
wstring hand_pred_freeze_2::string4 = (wstring("freeze_internal")).intern();
wstring hand_pred_freeze_2::string5 = (wstring("var")).intern();
Int* hand_pred_freeze_2::posint1 = new Int(1);

void hand_pred_freeze_2::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
	var2cont = mach->LoadPred("var", 1);
}

int hand_pred_freeze_2::Arity() {
	return 2;
}

Function* hand_pred_freeze_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_freeze_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
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

Function* hand_pred_freeze_2_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

java::util::function::Function* hand_pred_getargs_2::entry_code;
java::util::function::Function* hand_pred_getargs_2::cl1 =
		new hand_pred_getargs_2_1();
java::util::function::Function* hand_pred_getargs_2::cl2 =
		new hand_pred_getargs_2_2();
java::util::function::Function* hand_pred_getargs_2::ap4cont;
wstring hand_pred_getargs_2::string0 = (wstring("cut")).intern();
wstring hand_pred_getargs_2::string1 = (wstring(")")).intern();
wstring hand_pred_getargs_2::string2 = (wstring(",")).intern();
wstring hand_pred_getargs_2::string3 = (wstring(".")).intern();
wstring hand_pred_getargs_2::string4 = (wstring("[]")).intern();
wstring hand_pred_getargs_2::string5 = (wstring("ap")).intern();
wstring hand_pred_getargs_2::string6 = (wstring("const")).intern();
wstring hand_pred_getargs_2::string7 = (wstring("getargs")).intern();
wstring hand_pred_getargs_2::string8 = (wstring("maketerm")).intern();
wstring hand_pred_getargs_2::string9 = (wstring("unify")).intern();
Int* hand_pred_getargs_2::posint900 = new Int(900);

void hand_pred_getargs_2::Init(PrologMachine* mach) {
	entry_code = this;
	ap4cont = mach->LoadPred("ap", 3);
}

int hand_pred_getargs_2::Arity() {
	return 2;
}

Function* hand_pred_getargs_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_getargs_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	Funct tempVar(string6, new Const(string1));
	Const tempVar2(string4);
	local_aregs[1] = new Funct(string3, &tempVar, &tempVar2);
	local_aregs[2] = var1->Deref();
	Funct tempVar3(string9,
			new Funct(string3, var4->Deref(), new Const(string4)),
			var2->Deref(), continuation);
	local_aregs[3] = new Funct(string8, var3->Deref(), var4, posint900,
			&tempVar3);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Function* hand_pred_getargs_2_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	Funct tempVar(string6, new Const(string2));
	local_aregs[1] = new Funct(string3, &tempVar, var4);
	local_aregs[2] = var1->Deref();
	Funct tempVar2(string9, new Funct(string3, var5->Deref(), var6),
			var2->Deref(),
			new Funct(string7, var4->Deref(), var6->Deref(), continuation));
	local_aregs[3] = new Funct(string8, var3->Deref(), var5, posint900,
			&tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

java::util::function::Function* hand_pred_infix_3::entry_code;
java::util::function::Function* hand_pred_infix_3::cl1 =
		new hand_pred_infix_3_1();
java::util::function::Function* hand_pred_infix_3::cl2 =
		new hand_pred_infix_3_2();
java::util::function::Function* hand_pred_infix_3::cl3 =
		new hand_pred_infix_3_3();
java::util::function::Function* hand_pred_infix_3::cl4 =
		new hand_pred_infix_3_4();
java::util::function::Function* hand_pred_infix_3::cl5 =
		new hand_pred_infix_3_5();
java::util::function::Function* hand_pred_infix_3::cl6 =
		new hand_pred_infix_3_6();
java::util::function::Function* hand_pred_infix_3::cl7 =
		new hand_pred_infix_3_7();
java::util::function::Function* hand_pred_infix_3::cl8 =
		new hand_pred_infix_3_8();
java::util::function::Function* hand_pred_infix_3::cl9 =
		new hand_pred_infix_3_9();
java::util::function::Function* hand_pred_infix_3::cl10 =
		new hand_pred_infix_3_10();
java::util::function::Function* hand_pred_infix_3::cl11 =
		new hand_pred_infix_3_11();
java::util::function::Function* hand_pred_infix_3::cl12 =
		new hand_pred_infix_3_12();
java::util::function::Function* hand_pred_infix_3::cl13 =
		new hand_pred_infix_3_13();
java::util::function::Function* hand_pred_infix_3::cl14 =
		new hand_pred_infix_3_14();
java::util::function::Function* hand_pred_infix_3::cl15 =
		new hand_pred_infix_3_15();
java::util::function::Function* hand_pred_infix_3::cl16 =
		new hand_pred_infix_3_16();
java::util::function::Function* hand_pred_infix_3::cl17 =
		new hand_pred_infix_3_17();
java::util::function::Function* hand_pred_infix_3::cl18 =
		new hand_pred_infix_3_18();
java::util::function::Function* hand_pred_infix_3::cl19 =
		new hand_pred_infix_3_19();
java::util::function::Function* hand_pred_infix_3::cl20 =
		new hand_pred_infix_3_20();
java::util::function::Function* hand_pred_infix_3::cl21 =
		new hand_pred_infix_3_21();
java::util::function::Function* hand_pred_infix_3::cl22 =
		new hand_pred_infix_3_22();
java::util::function::Function* hand_pred_infix_3::cl23 =
		new hand_pred_infix_3_23();
java::util::function::Function* hand_pred_infix_3::cl24 =
		new hand_pred_infix_3_24();
java::util::function::Function* hand_pred_infix_3::cl25 =
		new hand_pred_infix_3_25();
java::util::function::Function* hand_pred_infix_3::cl26 =
		new hand_pred_infix_3_26();
java::util::function::Function* hand_pred_infix_3::cl27 =
		new hand_pred_infix_3_27();
java::util::function::Function* hand_pred_infix_3::cl28 =
		new hand_pred_infix_3_28();
wstring hand_pred_infix_3::string0 = Const::IStr("cut");
wstring hand_pred_infix_3::string1 = Const::IStr("#");
wstring hand_pred_infix_3::string2 = Const::IStr("*");
wstring hand_pred_infix_3::string3 = Const::IStr("+");
wstring hand_pred_infix_3::string4 = Const::IStr(",");
wstring hand_pred_infix_3::string5 = Const::IStr("-");
wstring hand_pred_infix_3::string6 = Const::IStr("->");
wstring hand_pred_infix_3::string7 = Const::IStr("/");
wstring hand_pred_infix_3::string8 = Const::IStr("//");
wstring hand_pred_infix_3::string9 = Const::IStr(":");
wstring hand_pred_infix_3::string10 = Const::IStr(":-");
wstring hand_pred_infix_3::string11 = Const::IStr(";");
wstring hand_pred_infix_3::string12 = Const::IStr("<");
wstring hand_pred_infix_3::string13 = Const::IStr("<<");
wstring hand_pred_infix_3::string14 = Const::IStr("=");
wstring hand_pred_infix_3::string15 = Const::IStr("=..");
wstring hand_pred_infix_3::string16 = Const::IStr("=:=");
wstring hand_pred_infix_3::string17 = Const::IStr("=<");
wstring hand_pred_infix_3::string18 = Const::IStr("==");
wstring hand_pred_infix_3::string19 = Const::IStr(">");
wstring hand_pred_infix_3::string20 = Const::IStr(">=");
wstring hand_pred_infix_3::string21 = Const::IStr(">>");
wstring hand_pred_infix_3::string22 = Const::IStr("@<");
wstring hand_pred_infix_3::string23 = Const::IStr("@=<");
wstring hand_pred_infix_3::string24 = Const::IStr("@>");
wstring hand_pred_infix_3::string25 = Const::IStr("@>=");
wstring hand_pred_infix_3::string26 = Const::IStr("^");
wstring hand_pred_infix_3::string27 = Const::IStr("call");
wstring hand_pred_infix_3::string28 = Const::IStr("infix");
wstring hand_pred_infix_3::string29 = Const::IStr("is");
wstring hand_pred_infix_3::string30 = Const::IStr("mod");
wstring hand_pred_infix_3::string31 = Const::IStr("xfx");
wstring hand_pred_infix_3::string32 = Const::IStr("xfy");
wstring hand_pred_infix_3::string33 = Const::IStr("yfx");
Int* hand_pred_infix_3::posint200 = new Int(200);
Int* hand_pred_infix_3::posint300 = new Int(300);
Int* hand_pred_infix_3::posint400 = new Int(400);
Int* hand_pred_infix_3::posint500 = new Int(500);
Int* hand_pred_infix_3::posint550 = new Int(550);
Int* hand_pred_infix_3::posint700 = new Int(700);
Int* hand_pred_infix_3::posint1000 = new Int(1000);
Int* hand_pred_infix_3::posint1050 = new Int(1050);
Int* hand_pred_infix_3::posint1100 = new Int(1100);
Int* hand_pred_infix_3::posint1200 = new Int(1200);

void hand_pred_infix_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_infix_3::Arity() {
	return 3;
}

Function* hand_pred_infix_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_infix_3_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string10);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint1000))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string4);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_3::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint1100))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string11);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_4::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint1050))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string6);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_5::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string14);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_6::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string29);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_7::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string15);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_8::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string18);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_9::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string22);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_10::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string24);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_11::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string23);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_12::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl13);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string25);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_13::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl14);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string16);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_14::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl15);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string12);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_15::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl16);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string17);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_16::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl17);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string19);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_17::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl18);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint700))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string20);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_18::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl19);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint550))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string9);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_19::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl20);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string3);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_20::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl21);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string5);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_21::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl22);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string1);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_22::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl23);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_23::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl24);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string7);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_24::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl25);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string8);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_25::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl26);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string13);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_26::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl27);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint400))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string33);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string21);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_27::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl28);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint300))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string31);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string30);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_infix_3_28::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string32);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string26);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_integer_1::entry_code;
java::util::function::Function* hand_pred_integer_1::cl1 =
		new hand_pred_integer_1_1();
java::util::function::Function* hand_pred_integer_1::type_of3cont;
wstring hand_pred_integer_1::string0 = Const::IStr("cut");
wstring hand_pred_integer_1::string1 = Const::IStr("integer");
wstring hand_pred_integer_1::string2 = Const::IStr("type_of");

void hand_pred_integer_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int hand_pred_integer_1::Arity() {
	return 1;
}

Function* hand_pred_integer_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_integer_1_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Const(string1);
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

java::util::function::Function* hand_pred_loop_1::entry_code;
java::util::function::Function* hand_pred_loop_1::cl1 =
		new hand_pred_loop_1_1();
java::util::function::Function* hand_pred_loop_1::cl2 =
		new hand_pred_loop_1_2();
java::util::function::Function* hand_pred_loop_1::cut2cont;
java::util::function::Function* hand_pred_loop_1::is3cont;
wstring hand_pred_loop_1::string0 = (wstring("cut")).intern();
wstring hand_pred_loop_1::string1 = (wstring("-")).intern();
wstring hand_pred_loop_1::string2 = (wstring("cut")).intern();
wstring hand_pred_loop_1::string3 = (wstring("is")).intern();
wstring hand_pred_loop_1::string4 = (wstring("loop")).intern();
Int* hand_pred_loop_1::posint0 = new Int(0);
Int* hand_pred_loop_1::posint1 = new Int(1);

void hand_pred_loop_1::Init(PrologMachine* mach) {
	entry_code = this;
	is3cont = mach->LoadPred("is", 2);
}

int hand_pred_loop_1::Arity() {
	return 1;
}

Function* hand_pred_loop_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_loop_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint0))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_loop_1_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = new Funct(string1, var1->Deref(), posint1);
	local_aregs[2] = new Funct(string4, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return is3cont;
}

java::util::function::Function* hand_pred_m1_2::entry_code;
java::util::function::Function* hand_pred_m1_2::cl1 = new hand_pred_m1_2_1();
java::util::function::Function* hand_pred_m1_2::cl2 = new hand_pred_m1_2_2();
java::util::function::Function* hand_pred_m1_2::var2cont;
wstring hand_pred_m1_2::string0 = Const::IStr("cut");
wstring hand_pred_m1_2::string1 = Const::IStr("-");
wstring hand_pred_m1_2::string2 = Const::IStr(".");
wstring hand_pred_m1_2::string3 = Const::IStr("m1");
wstring hand_pred_m1_2::string4 = Const::IStr("var");

void hand_pred_m1_2::Init(PrologMachine* mach) {
	entry_code = this;
	var2cont = mach->LoadPred("var", 1);
}

int hand_pred_m1_2::Arity() {
	return 2;
}

Function* hand_pred_m1_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_m1_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string2, new Funct(string1, var1->Deref(), var2), var3);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return var2cont;
}

Function* hand_pred_m1_2_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string2, var2, var3);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_maketerm_2::entry_code;
java::util::function::Function* hand_pred_maketerm_2::cl1 =
		new hand_pred_maketerm_2_1();
java::util::function::Function* hand_pred_maketerm_2::maketerm4cont;
wstring hand_pred_maketerm_2::string0 = (wstring("cut")).intern();
wstring hand_pred_maketerm_2::string1 = (wstring("maketerm")).intern();
Int* hand_pred_maketerm_2::posint1200 = new Int(1200);

void hand_pred_maketerm_2::Init(PrologMachine* mach) {
	entry_code = this;
	maketerm4cont = mach->LoadPred("maketerm", 3);
}

int hand_pred_maketerm_2::Arity() {
	return 2;
}

Function* hand_pred_maketerm_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_maketerm_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = posint1200;
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return maketerm4cont;
}

java::util::function::Function* hand_pred_maketerm_3::entry_code;
java::util::function::Function* hand_pred_maketerm_3::cl1 =
		new hand_pred_maketerm_3_1();
java::util::function::Function* hand_pred_maketerm_3::cl2 =
		new hand_pred_maketerm_3_2();
java::util::function::Function* hand_pred_maketerm_3::cl3 =
		new hand_pred_maketerm_3_3();
java::util::function::Function* hand_pred_maketerm_3::cl4 =
		new hand_pred_maketerm_3_4();
java::util::function::Function* hand_pred_maketerm_3::cl5 =
		new hand_pred_maketerm_3_5();
java::util::function::Function* hand_pred_maketerm_3::cl6 =
		new hand_pred_maketerm_3_6();
java::util::function::Function* hand_pred_maketerm_3::cl7 =
		new hand_pred_maketerm_3_7();
java::util::function::Function* hand_pred_maketerm_3::cl8 =
		new hand_pred_maketerm_3_8();
java::util::function::Function* hand_pred_maketerm_3::cl9 =
		new hand_pred_maketerm_3_9();
java::util::function::Function* hand_pred_maketerm_3::cl10 =
		new hand_pred_maketerm_3_10();
java::util::function::Function* hand_pred_maketerm_3::cl11 =
		new hand_pred_maketerm_3_11();
java::util::function::Function* hand_pred_maketerm_3::ap4cont;
java::util::function::Function* hand_pred_maketerm_3::cut2cont;
java::util::function::Function* hand_pred_maketerm_3::getargs3cont;
java::util::function::Function* hand_pred_maketerm_3::prefix4cont;
java::util::function::Function* hand_pred_maketerm_3::unify3cont;
wstring hand_pred_maketerm_3::string0 = Const::IStr("cut");
wstring hand_pred_maketerm_3::string1 = Const::IStr("(");
wstring hand_pred_maketerm_3::string2 = Const::IStr(")");
wstring hand_pred_maketerm_3::string3 = Const::IStr(",");
wstring hand_pred_maketerm_3::string4 = Const::IStr(".");
wstring hand_pred_maketerm_3::string5 = Const::IStr("[");
wstring hand_pred_maketerm_3::string6 = Const::IStr("[]");
wstring hand_pred_maketerm_3::string7 = Const::IStr("]");
wstring hand_pred_maketerm_3::string8 = Const::IStr("ap");
wstring hand_pred_maketerm_3::string9 = Const::IStr("call");
wstring hand_pred_maketerm_3::string10 = Const::IStr("const");
wstring hand_pred_maketerm_3::string11 = Const::IStr("cut");
wstring hand_pred_maketerm_3::string12 = Const::IStr("getargs");
wstring hand_pred_maketerm_3::string13 = Const::IStr("infix");
wstring hand_pred_maketerm_3::string14 = Const::IStr("int");
wstring hand_pred_maketerm_3::string15 = Const::IStr("maketerm");
wstring hand_pred_maketerm_3::string16 = Const::IStr("newprec");
wstring hand_pred_maketerm_3::string17 = Const::IStr("prefix");
wstring hand_pred_maketerm_3::string18 = Const::IStr("smallerorequal");
wstring hand_pred_maketerm_3::string19 = Const::IStr("unify");
wstring hand_pred_maketerm_3::string20 = Const::IStr("univ");
wstring hand_pred_maketerm_3::string21 = Const::IStr("var");
wstring hand_pred_maketerm_3::string22 = Const::IStr("|");
Int* hand_pred_maketerm_3::posint1 = new Int(1);
Int* hand_pred_maketerm_3::posint900 = new Int(900);

void hand_pred_maketerm_3::Init(PrologMachine* mach) {
	entry_code = this;
	ap4cont = mach->LoadPred("ap", 3);
	getargs3cont = mach->LoadPred("getargs", 2);
	prefix4cont = mach->LoadPred("prefix", 3);
	unify3cont = mach->LoadPred("unify", 2);
}

int hand_pred_maketerm_3::Arity() {
	return 3;
}

Function* hand_pred_maketerm_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_maketerm_3_1::exec_static(PrologMachine* mach) {
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
	Funct tempVar(string4, new Funct(string21, var1, var2, var3),
			new Const(string6));
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var5))) {
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

Function* hand_pred_maketerm_3_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string19, var1->Deref(), var2->Deref(),
			continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_maketerm_3_3::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string19, var1->Deref(), var2->Deref(),
			continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_maketerm_3_4::exec_static(PrologMachine* mach) {
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
	Funct tempVar(string4, new Funct(string10, var1),
			new Funct(string4, new Funct(string10, new Const(string1)), var2));
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var5;
	local_aregs[2] = new Funct(string20, var3->Deref(), var1->Deref(),
			var5->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return getargs3cont;
}

Function* hand_pred_maketerm_3_5::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	Funct tempVar(string10, var5);
	local_aregs[1] = new Funct(string4, &tempVar, var6);
	local_aregs[2] = var1->Deref();
	Funct tempVar2(string18, var7->Deref(), var3->Deref(),
			new Funct(string16, var8->Deref(), var7->Deref(), var9, var10,
					new Funct(string15, var4->Deref(), var11, var9->Deref(),
							new Funct(string15, var6->Deref(), var12,
									var10->Deref(),
									new Funct(string20, var2->Deref(),
											var5->Deref(),
											new Funct(string4, var11->Deref(),
													new Funct(string4,
															var12->Deref(),
															new Const(
																	string6))),
											continuation)))));
	local_aregs[3] = new Funct(string13, var7, var8, var5->Deref(), &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Function* hand_pred_maketerm_3_6::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	local_aregs[1] = var6;
	local_aregs[2] = var1->Deref();
	Funct tempVar2(string16, var6->Deref(), var5->Deref(), var7,
			new Funct(string15, var2->Deref(), var8, var7->Deref(),
					new Funct(string20, var3->Deref(), var1->Deref(),
							new Funct(string4, var8->Deref(),
									new Const(string6)), continuation)));
	local_aregs[3] = new Funct(string18, var5->Deref(), var4->Deref(),
			&tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return prefix4cont;
}

Function* hand_pred_maketerm_3_7::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string4, var2, var3);
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	Funct tempVar3(string10, new Const(string3));
	local_aregs[1] = new Funct(string4, &tempVar3, var6);
	local_aregs[2] = var1->Deref();
	Funct tempVar4(string15,
			new Funct(string4, new Funct(string10, new Const(string5)),
					var6->Deref()), var3->Deref(), posint900, continuation);
	local_aregs[3] = new Funct(string15, var5->Deref(), var2->Deref(),
			posint900, &tempVar4);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Function* hand_pred_maketerm_3_8::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string4, var2, var3);
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var5;
	Funct tempVar3(string10, new Const(string22));
	local_aregs[1] = new Funct(string4, &tempVar3, var6);
	local_aregs[2] = var1->Deref();
	Funct tempVar4(string4, new Funct(string10, new Const(string7)),
			new Const(string6));
	Funct tempVar5(string15, var5->Deref(), var2->Deref(), posint900,
			new Funct(string15, var7->Deref(), var3->Deref(), posint900,
					continuation));
	local_aregs[3] = new Funct(string8, var7, &tempVar4, var6->Deref(),
			&tempVar5);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Function* hand_pred_maketerm_3_9::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
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

Function* hand_pred_maketerm_3_10::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string4, var2, new Const(string6));
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	Funct tempVar3(string10, new Const(string7));
	Const tempVar4(string6);
	local_aregs[1] = new Funct(string4, &tempVar3, &tempVar4);
	local_aregs[2] = var1->Deref();
	local_aregs[3] = new Funct(string15, var4->Deref(), var2->Deref(),
			posint900, continuation);
	mach->CUTB = mach->CurrentChoice;
	return ap4cont;
}

Function* hand_pred_maketerm_3_11::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Funct tempVar(string4, new Funct(string10, new Const(string5)),
			new Funct(string4, new Funct(string10, new Const(string7)),
					new Const(string6)));
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string6);
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_max_3::entry_code;
java::util::function::Function* hand_pred_max_3::cl1 = new hand_pred_max_3_1();
java::util::function::Function* hand_pred_max_3::cl2 = new hand_pred_max_3_2();
java::util::function::Function* hand_pred_max_3::cl3 = new hand_pred_max_3_3();
java::util::function::Function* hand_pred_max_3::smallerthan3cont;
wstring hand_pred_max_3::string0 = (wstring("cut")).intern();
wstring hand_pred_max_3::string1 = (wstring("call")).intern();
wstring hand_pred_max_3::string2 = (wstring("max")).intern();
wstring hand_pred_max_3::string3 = (wstring("smallerthan")).intern();

void hand_pred_max_3::Init(PrologMachine* mach) {
	entry_code = this;
	smallerthan3cont = mach->LoadPred("smallerthan", 2);
}

int hand_pred_max_3::Arity() {
	return 3;
}

Function* hand_pred_max_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_max_3_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var2->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return smallerthan3cont;
}

Function* hand_pred_max_3_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = nullptr;
	return smallerthan3cont;
}

Function* hand_pred_max_3_3::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_newprec_3::entry_code;
java::util::function::Function* hand_pred_newprec_3::cl1 =
		new hand_pred_newprec_3_1();
java::util::function::Function* hand_pred_newprec_3::cl2 =
		new hand_pred_newprec_3_2();
java::util::function::Function* hand_pred_newprec_3::cut2cont;
wstring hand_pred_newprec_3::string0 = (wstring("cut")).intern();
wstring hand_pred_newprec_3::string1 = (wstring("-")).intern();
wstring hand_pred_newprec_3::string2 = (wstring("call")).intern();
wstring hand_pred_newprec_3::string3 = (wstring("cut")).intern();
wstring hand_pred_newprec_3::string4 = (wstring("fx")).intern();
wstring hand_pred_newprec_3::string5 = (wstring("fy")).intern();
wstring hand_pred_newprec_3::string6 = (wstring("is")).intern();
wstring hand_pred_newprec_3::string7 = (wstring("newprec")).intern();
Int* hand_pred_newprec_3::posint1 = new Int(1);

void hand_pred_newprec_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_newprec_3::Arity() {
	return 3;
}

Function* hand_pred_newprec_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_newprec_3_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Const tempVar(string4);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string1, var1->Deref(), posint1);
	local_aregs[0] = new Funct(string6, var2->Deref(), &tempVar2, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_newprec_3_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string5);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_newprec_4::entry_code;
java::util::function::Function* hand_pred_newprec_4::cl1 =
		new hand_pred_newprec_4_1();
java::util::function::Function* hand_pred_newprec_4::cl2 =
		new hand_pred_newprec_4_2();
java::util::function::Function* hand_pred_newprec_4::cl3 =
		new hand_pred_newprec_4_3();
java::util::function::Function* hand_pred_newprec_4::cut2cont;
wstring hand_pred_newprec_4::string0 = (wstring("cut")).intern();
wstring hand_pred_newprec_4::string1 = (wstring("-")).intern();
wstring hand_pred_newprec_4::string2 = (wstring("cut")).intern();
wstring hand_pred_newprec_4::string3 = (wstring("is")).intern();
wstring hand_pred_newprec_4::string4 = (wstring("newprec")).intern();
wstring hand_pred_newprec_4::string5 = (wstring("unify")).intern();
wstring hand_pred_newprec_4::string6 = (wstring("xfx")).intern();
wstring hand_pred_newprec_4::string7 = (wstring("xfy")).intern();
wstring hand_pred_newprec_4::string8 = (wstring("yfx")).intern();
Int* hand_pred_newprec_4::posint1 = new Int(1);

void hand_pred_newprec_4::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_newprec_4::Arity() {
	return 4;
}

Function* hand_pred_newprec_4::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3], mach->Areg[4] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_newprec_4_1::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg3)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Funct tempVar2(string1, var1->Deref(), posint1);
	Funct tempVar3(string3, var3->Deref(),
			new Funct(string1, var1->Deref(), posint1), continuation);
	local_aregs[0] = new Funct(string3, var2->Deref(), &tempVar2, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_newprec_4_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg3)->Unify(var3))) {
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

Function* hand_pred_newprec_4_3::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg3)->Unify(var3))) {
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

java::util::function::Function* hand_pred_not_1::entry_code;
java::util::function::Function* hand_pred_not_1::cl1 = new hand_pred_not_1_1();
java::util::function::Function* hand_pred_not_1::cl2 = new hand_pred_not_1_2();
java::util::function::Function* hand_pred_not_1::exec2cont;
wstring hand_pred_not_1::string0 = (wstring("cut")).intern();
wstring hand_pred_not_1::string1 = (wstring("call")).intern();
wstring hand_pred_not_1::string2 = (wstring("cut")).intern();
wstring hand_pred_not_1::string3 = (wstring("exec")).intern();
wstring hand_pred_not_1::string4 = (wstring("fail")).intern();
wstring hand_pred_not_1::string5 = (wstring("not")).intern();
Int* hand_pred_not_1::posint1 = new Int(1);

void hand_pred_not_1::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
}

int hand_pred_not_1::Arity() {
	return 1;
}

Function* hand_pred_not_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_not_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach->CUTB);
	Funct tempVar2(string4, continuation);
	local_aregs[1] = new Funct(string0, &tempVar, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return exec2cont;
}

Function* hand_pred_not_1_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_noteq_2::entry_code;
java::util::function::Function* hand_pred_noteq_2::cl1 =
		new hand_pred_noteq_2_1();
java::util::function::Function* hand_pred_noteq_2::cl2 =
		new hand_pred_noteq_2_2();
java::util::function::Function* hand_pred_noteq_2::cut2cont;
wstring hand_pred_noteq_2::string0 = (wstring("cut")).intern();
wstring hand_pred_noteq_2::string1 = (wstring("call")).intern();
wstring hand_pred_noteq_2::string2 = (wstring("cut")).intern();
wstring hand_pred_noteq_2::string3 = (wstring("fail")).intern();
wstring hand_pred_noteq_2::string4 = (wstring("noteq")).intern();
Int* hand_pred_noteq_2::posint1 = new Int(1);

void hand_pred_noteq_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_noteq_2::Arity() {
	return 2;
}

Function* hand_pred_noteq_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_noteq_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string3, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_noteq_2_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_notmore_0::entry_code;
java::util::function::Function* hand_pred_notmore_0::cl1 =
		new hand_pred_notmore_0_1();
java::util::function::Function* hand_pred_notmore_0::cl2 =
		new hand_pred_notmore_0_2();
java::util::function::Function* hand_pred_notmore_0::get02cont;
wstring hand_pred_notmore_0::string0 = (wstring("cut")).intern();
wstring hand_pred_notmore_0::string1 = (wstring("call")).intern();
wstring hand_pred_notmore_0::string2 = (wstring("cut")).intern();
wstring hand_pred_notmore_0::string3 = (wstring("fail")).intern();
wstring hand_pred_notmore_0::string4 = (wstring("get0")).intern();
wstring hand_pred_notmore_0::string5 = (wstring("noteq")).intern();
wstring hand_pred_notmore_0::string6 = (wstring("notmore")).intern();
wstring hand_pred_notmore_0::string7 = (wstring("untilend")).intern();
Int* hand_pred_notmore_0::posint1 = new Int(1);
Int* hand_pred_notmore_0::posint10 = new Int(10);

void hand_pred_notmore_0::Init(PrologMachine* mach) {
	entry_code = this;
	get02cont = mach->LoadPred("get0", 1);
}

int hand_pred_notmore_0::Arity() {
	return 0;
}

Function* hand_pred_notmore_0::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_notmore_0_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Term* var1 = new Var(mach);
	local_aregs[0] = var1;
	Funct tempVar(string0, new HeapChoice(mach->CUTB),
			new Funct(string7, var1->Deref(),
					new Funct(string3, continuation)));
	local_aregs[1] = new Funct(string5, var1->Deref(), posint10, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return get02cont;
}

Function* hand_pred_notmore_0_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_notvmember_2::entry_code;
java::util::function::Function* hand_pred_notvmember_2::cl1 =
		new hand_pred_notvmember_2_1();
java::util::function::Function* hand_pred_notvmember_2::cl2 =
		new hand_pred_notvmember_2_2();
java::util::function::Function* hand_pred_notvmember_2::cl3 =
		new hand_pred_notvmember_2_3();
java::util::function::Function* hand_pred_notvmember_2::cut2cont;
wstring hand_pred_notvmember_2::string0 = (wstring("cut")).intern();
wstring hand_pred_notvmember_2::string1 = (wstring(".")).intern();
wstring hand_pred_notvmember_2::string2 = (wstring("=")).intern();
wstring hand_pred_notvmember_2::string3 = (wstring("[]")).intern();
wstring hand_pred_notvmember_2::string4 = (wstring("cut")).intern();
wstring hand_pred_notvmember_2::string5 = (wstring("fail")).intern();
wstring hand_pred_notvmember_2::string6 = (wstring("notvmember")).intern();
Int* hand_pred_notvmember_2::posint1 = new Int(1);

void hand_pred_notvmember_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_notvmember_2::Arity() {
	return 2;
}

Function* hand_pred_notvmember_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_notvmember_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string3);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_notvmember_2_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, new Funct(string2, var2, var1->Deref()), var3);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string5, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_notvmember_2_3::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, var2, var3);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_nrev_2::entry_code;
java::util::function::Function* hand_pred_nrev_2::cl1 =
		new hand_pred_nrev_2_1();
java::util::function::Function* hand_pred_nrev_2::cl2 =
		new hand_pred_nrev_2_2();
java::util::function::Function* hand_pred_nrev_2::cut2cont;
wstring hand_pred_nrev_2::string0 = (wstring("cut")).intern();
wstring hand_pred_nrev_2::string1 = (wstring(".")).intern();
wstring hand_pred_nrev_2::string2 = (wstring("[]")).intern();
wstring hand_pred_nrev_2::string3 = (wstring("append")).intern();
wstring hand_pred_nrev_2::string4 = (wstring("cut")).intern();
wstring hand_pred_nrev_2::string5 = (wstring("nrev")).intern();
Int* hand_pred_nrev_2::posint1 = new Int(1);

void hand_pred_nrev_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_nrev_2::Arity() {
	return 2;
}

Function* hand_pred_nrev_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_nrev_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_nrev_2_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4;
	Funct tempVar2(string1, var1->Deref(), new Const(string2));
	local_aregs[2] = new Funct(string3, var4->Deref(), &tempVar2, var3->Deref(),
			continuation);
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_or_2::entry_code;
java::util::function::Function* hand_pred_or_2::cl1 = new hand_pred_or_2_1();
java::util::function::Function* hand_pred_or_2::cl2 = new hand_pred_or_2_2();
java::util::function::Function* hand_pred_or_2::exec2cont;
wstring hand_pred_or_2::string0 = (wstring("cut")).intern();
wstring hand_pred_or_2::string1 = (wstring("exec")).intern();
wstring hand_pred_or_2::string2 = (wstring("or")).intern();

void hand_pred_or_2::Init(PrologMachine* mach) {
	entry_code = this;
	exec2cont = mach->LoadPred("exec", 1);
}

int hand_pred_or_2::Arity() {
	return 2;
}

Function* hand_pred_or_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_or_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

Function* hand_pred_or_2_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return exec2cont;
}

java::util::function::Function* hand_pred_prefix_3::entry_code;
java::util::function::Function* hand_pred_prefix_3::cl1 =
		new hand_pred_prefix_3_1();
java::util::function::Function* hand_pred_prefix_3::cl2 =
		new hand_pred_prefix_3_2();
java::util::function::Function* hand_pred_prefix_3::cl3 =
		new hand_pred_prefix_3_3();
java::util::function::Function* hand_pred_prefix_3::cl4 =
		new hand_pred_prefix_3_4();
wstring hand_pred_prefix_3::string0 = (wstring("cut")).intern();
wstring hand_pred_prefix_3::string1 = (wstring("+")).intern();
wstring hand_pred_prefix_3::string2 = (wstring("-")).intern();
wstring hand_pred_prefix_3::string3 = (wstring(":-")).intern();
wstring hand_pred_prefix_3::string4 = (wstring("?-")).intern();
wstring hand_pred_prefix_3::string5 = (wstring("call")).intern();
wstring hand_pred_prefix_3::string6 = (wstring("fx")).intern();
wstring hand_pred_prefix_3::string7 = (wstring("prefix")).intern();
Int* hand_pred_prefix_3::posint500 = new Int(500);
Int* hand_pred_prefix_3::posint1200 = new Int(1200);

void hand_pred_prefix_3::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_prefix_3::Arity() {
	return 3;
}

Function* hand_pred_prefix_3::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_prefix_3_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string3);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_prefix_3_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint1200))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string4);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_prefix_3_3::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string1);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_prefix_3_4::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint500))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string6);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_read_1::entry_code;
java::util::function::Function* hand_pred_read_1::cl1 =
		new hand_pred_read_1_1();
java::util::function::Function* hand_pred_read_1::nexttoken2cont;
wstring hand_pred_read_1::string0 = (wstring("cut")).intern();
wstring hand_pred_read_1::string1 = (wstring("cut")).intern();
wstring hand_pred_read_1::string2 = (wstring("maketerm")).intern();
wstring hand_pred_read_1::string3 = (wstring("nexttoken")).intern();
wstring hand_pred_read_1::string4 = (wstring("read")).intern();
wstring hand_pred_read_1::string5 = (wstring("readall")).intern();
Int* hand_pred_read_1::posint1 = new Int(1);

void hand_pred_read_1::Init(PrologMachine* mach) {
	entry_code = this;
	nexttoken2cont = mach->LoadPred("nexttoken", 1);
}

int hand_pred_read_1::Arity() {
	return 1;
}

Function* hand_pred_read_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_read_1_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	Funct tempVar(string2, var3->Deref(), var1->Deref(),
			new Funct(string0, new HeapChoice(mach->CUTB), continuation));
	local_aregs[1] = new Funct(string5, var2->Deref(), var3, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return nexttoken2cont;
}

java::util::function::Function* hand_pred_readall_2::entry_code;
java::util::function::Function* hand_pred_readall_2::cl1 =
		new hand_pred_readall_2_1();
java::util::function::Function* hand_pred_readall_2::cl2 =
		new hand_pred_readall_2_2();
java::util::function::Function* hand_pred_readall_2::cl3 =
		new hand_pred_readall_2_3();
java::util::function::Function* hand_pred_readall_2::cut2cont;
java::util::function::Function* hand_pred_readall_2::nexttoken2cont;
wstring hand_pred_readall_2::string0 = (wstring("cut")).intern();
wstring hand_pred_readall_2::string1 = (wstring(".")).intern();
wstring hand_pred_readall_2::string2 = (wstring("[]")).intern();
wstring hand_pred_readall_2::string3 = (wstring("cut")).intern();
wstring hand_pred_readall_2::string4 = (wstring("end_of_clause")).intern();
wstring hand_pred_readall_2::string5 = (wstring("end_of_file")).intern();
wstring hand_pred_readall_2::string6 = (wstring("halt")).intern();
wstring hand_pred_readall_2::string7 = (wstring("nexttoken")).intern();
wstring hand_pred_readall_2::string8 = (wstring("readall")).intern();
wstring hand_pred_readall_2::string9 = (wstring("unify")).intern();
Int* hand_pred_readall_2::posint1 = new Int(1);

void hand_pred_readall_2::Init(PrologMachine* mach) {
	entry_code = this;
	nexttoken2cont = mach->LoadPred("nexttoken", 1);
}

int hand_pred_readall_2::Arity() {
	return 2;
}

Function* hand_pred_readall_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_readall_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string5);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = new Funct(string6, continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_readall_2_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	Const tempVar(string4);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	Const tempVar2(string2);
	local_aregs[0] = new Funct(string9, &tempVar2, var1->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_readall_2_3::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, var1->Deref(), var2);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = new Funct(string8, var3->Deref(), var2->Deref(),
			continuation);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return nexttoken2cont;
}

java::util::function::Function* hand_pred_smeq_1::entry_code;
java::util::function::Function* hand_pred_smeq_1::cl1 =
		new hand_pred_smeq_1_1();
java::util::function::Function* hand_pred_smeq_1::cl2 =
		new hand_pred_smeq_1_2();
java::util::function::Function* hand_pred_smeq_1::cut2cont;
wstring hand_pred_smeq_1::string0 = (wstring("cut")).intern();
wstring hand_pred_smeq_1::string1 = (wstring("<")).intern();
wstring hand_pred_smeq_1::string2 = (wstring("=")).intern();
wstring hand_pred_smeq_1::string3 = (wstring("call")).intern();
wstring hand_pred_smeq_1::string4 = (wstring("cut")).intern();
wstring hand_pred_smeq_1::string5 = (wstring("smeq")).intern();
Int* hand_pred_smeq_1::posint1 = new Int(1);

void hand_pred_smeq_1::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_smeq_1::Arity() {
	return 1;
}

Function* hand_pred_smeq_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_smeq_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string1);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_smeq_1_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_smgr_1::entry_code;
java::util::function::Function* hand_pred_smgr_1::cl1 =
		new hand_pred_smgr_1_1();
java::util::function::Function* hand_pred_smgr_1::cl2 =
		new hand_pred_smgr_1_2();
java::util::function::Function* hand_pred_smgr_1::cut2cont;
wstring hand_pred_smgr_1::string0 = (wstring("cut")).intern();
wstring hand_pred_smgr_1::string1 = (wstring("=")).intern();
wstring hand_pred_smgr_1::string2 = (wstring(">")).intern();
wstring hand_pred_smgr_1::string3 = (wstring("call")).intern();
wstring hand_pred_smgr_1::string4 = (wstring("cut")).intern();
wstring hand_pred_smgr_1::string5 = (wstring("smgr")).intern();
Int* hand_pred_smgr_1::posint1 = new Int(1);

void hand_pred_smgr_1::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_smgr_1::Arity() {
	return 1;
}

Function* hand_pred_smgr_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_smgr_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_smgr_1_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string1);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_sort_2::entry_code;
java::util::function::Function* hand_pred_sort_2::cl1 =
		new hand_pred_sort_2_1();
java::util::function::Function* hand_pred_sort_2::cl2 =
		new hand_pred_sort_2_2();
java::util::function::Function* hand_pred_sort_2::cut2cont;
java::util::function::Function* hand_pred_sort_2::split5cont;
wstring hand_pred_sort_2::string0 = (wstring("cut")).intern();
wstring hand_pred_sort_2::string1 = (wstring(".")).intern();
wstring hand_pred_sort_2::string2 = (wstring("[]")).intern();
wstring hand_pred_sort_2::string3 = (wstring("append")).intern();
wstring hand_pred_sort_2::string4 = (wstring("cut")).intern();
wstring hand_pred_sort_2::string5 = (wstring("sort")).intern();
wstring hand_pred_sort_2::string6 = (wstring("split")).intern();
Int* hand_pred_sort_2::posint1 = new Int(1);

void hand_pred_sort_2::Init(PrologMachine* mach) {
	entry_code = this;
	split5cont = mach->LoadPred("split", 4);
}

int hand_pred_sort_2::Arity() {
	return 2;
}

Function* hand_pred_sort_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_sort_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_sort_2_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var4;
	local_aregs[3] = var5;
	Funct tempVar2(string5, var5->Deref(), var7,
			new Funct(string3, var6->Deref(),
					new Funct(string1, var1->Deref(), var7->Deref()),
					var3->Deref(), continuation));
	local_aregs[4] = new Funct(string5, var4->Deref(), var6, &tempVar2);
	mach->CUTB = mach->CurrentChoice;
	return split5cont;
}

java::util::function::Function* hand_pred_specialgoal_2::entry_code;
java::util::function::Function* hand_pred_specialgoal_2::cl1 =
		new hand_pred_specialgoal_2_1();
java::util::function::Function* hand_pred_specialgoal_2::cl2 =
		new hand_pred_specialgoal_2_2();
java::util::function::Function* hand_pred_specialgoal_2::cl3 =
		new hand_pred_specialgoal_2_3();
java::util::function::Function* hand_pred_specialgoal_2::cl4 =
		new hand_pred_specialgoal_2_4();
java::util::function::Function* hand_pred_specialgoal_2::cl5 =
		new hand_pred_specialgoal_2_5();
java::util::function::Function* hand_pred_specialgoal_2::cl6 =
		new hand_pred_specialgoal_2_6();
java::util::function::Function* hand_pred_specialgoal_2::cl7 =
		new hand_pred_specialgoal_2_7();
java::util::function::Function* hand_pred_specialgoal_2::cl8 =
		new hand_pred_specialgoal_2_8();
java::util::function::Function* hand_pred_specialgoal_2::cl9 =
		new hand_pred_specialgoal_2_9();
java::util::function::Function* hand_pred_specialgoal_2::cl10 =
		new hand_pred_specialgoal_2_10();
java::util::function::Function* hand_pred_specialgoal_2::cl11 =
		new hand_pred_specialgoal_2_11();
java::util::function::Function* hand_pred_specialgoal_2::cl12 =
		new hand_pred_specialgoal_2_12();
wstring hand_pred_specialgoal_2::string0 = Const::IStr("cut");
wstring hand_pred_specialgoal_2::string1 = Const::IStr(";");
wstring hand_pred_specialgoal_2::string2 = Const::IStr("<");
wstring hand_pred_specialgoal_2::string3 = Const::IStr("=");
wstring hand_pred_specialgoal_2::string4 = Const::IStr("=:=");
wstring hand_pred_specialgoal_2::string5 = Const::IStr("=<");
wstring hand_pred_specialgoal_2::string6 = Const::IStr("==");
wstring hand_pred_specialgoal_2::string7 = Const::IStr(">");
wstring hand_pred_specialgoal_2::string8 = Const::IStr(">=");
wstring hand_pred_specialgoal_2::string9 = Const::IStr("@<");
wstring hand_pred_specialgoal_2::string10 = Const::IStr("@=<");
wstring hand_pred_specialgoal_2::string11 = Const::IStr("@>");
wstring hand_pred_specialgoal_2::string12 = Const::IStr("@>=");
wstring hand_pred_specialgoal_2::string13 = Const::IStr("arithequal");
wstring hand_pred_specialgoal_2::string14 = Const::IStr("cut");
wstring hand_pred_specialgoal_2::string15 = Const::IStr("or");
wstring hand_pred_specialgoal_2::string16 = Const::IStr("smallerorequal");
wstring hand_pred_specialgoal_2::string17 = Const::IStr("smallerthan");
wstring hand_pred_specialgoal_2::string18 = Const::IStr("specialgoal");
wstring hand_pred_specialgoal_2::string19 = Const::IStr("termequal");
wstring hand_pred_specialgoal_2::string20 = Const::IStr("termgreaterequal");
wstring hand_pred_specialgoal_2::string21 = Const::IStr("termgreaterthan");
wstring hand_pred_specialgoal_2::string22 = Const::IStr("termsmallerequal");
wstring hand_pred_specialgoal_2::string23 = Const::IStr("termsmallerthan");
wstring hand_pred_specialgoal_2::string24 = Const::IStr("unify");
Int* hand_pred_specialgoal_2::posint1 = new Int(1);

void hand_pred_specialgoal_2::Init(PrologMachine* mach) {
	entry_code = this;
}

int hand_pred_specialgoal_2::Arity() {
	return 2;
}

Function* hand_pred_specialgoal_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_specialgoal_2_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string17, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string5, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string16, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_3::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl4);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string7, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string17, var2->Deref(), var1->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_4::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl5);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string8, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string16, var2->Deref(), var1->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_5::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl6);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string4, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string13, var2->Deref(), var1->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_6::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl7);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string3, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string24, var2->Deref(), var1->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_7::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl8);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string1, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string15, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_8::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl9);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string9, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string23, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_9::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl10);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string11, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string21, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_10::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl11);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string10, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string22, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_11::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl12);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string12, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string20, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_specialgoal_2_12::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string6, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string19, var1->Deref(), var2->Deref());
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

java::util::function::Function* hand_pred_split_4::entry_code;
java::util::function::Function* hand_pred_split_4::cl1 =
		new hand_pred_split_4_1();
java::util::function::Function* hand_pred_split_4::cl2 =
		new hand_pred_split_4_2();
java::util::function::Function* hand_pred_split_4::cl3 =
		new hand_pred_split_4_3();
java::util::function::Function* hand_pred_split_4::cut2cont;
java::util::function::Function* hand_pred_split_4::smallerthan3cont;
wstring hand_pred_split_4::string0 = Const::IStr("cut");
wstring hand_pred_split_4::string1 = Const::IStr(".");
wstring hand_pred_split_4::string2 = Const::IStr("[]");
wstring hand_pred_split_4::string3 = Const::IStr("cut");
wstring hand_pred_split_4::string4 = Const::IStr("smallerthan");
wstring hand_pred_split_4::string5 = Const::IStr("split");
Int* hand_pred_split_4::posint1 = new Int(1);

void hand_pred_split_4::Init(PrologMachine* mach) {
	entry_code = this;
	smallerthan3cont = mach->LoadPred("smallerthan", 2);
}

int hand_pred_split_4::Arity() {
	return 4;
}

Function* hand_pred_split_4::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2],
			mach->Areg[3], mach->Areg[4] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_split_4_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[4];
	Term* areg3 = local_aregs[3]->Deref();
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar(string2);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar2(string2);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	Const tempVar3(string2);
	if (!((areg3)->Unify(&tempVar3))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_split_4_2::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, var2, var3);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var2->Deref(), var4);
	if (!((areg2)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg3)->Unify(var5))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar3(mach->CUTB);
	Funct tempVar4(string5, var1->Deref(), var3->Deref(), var4->Deref(),
			var5->Deref(), continuation);
	local_aregs[2] = new Funct(string0, &tempVar3, &tempVar4);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[4] = local_aregs[3] = nullptr;
	return smallerthan3cont;
}

Function* hand_pred_split_4_3::exec_static(PrologMachine* mach) {
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
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar(string1, var2, var3);
	if (!((areg1)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var2->Deref(), var5);
	if (!((areg3)->Unify(&tempVar2))) {
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

java::util::function::Function* hand_pred_statistics_2::entry_code;
java::util::function::Function* hand_pred_statistics_2::cl1 =
		new hand_pred_statistics_2_1();
java::util::function::Function* hand_pred_statistics_2::cputime2cont;
wstring hand_pred_statistics_2::string0 = Const::IStr("cut");
wstring hand_pred_statistics_2::string1 = Const::IStr(".");
wstring hand_pred_statistics_2::string2 = Const::IStr("[]");
wstring hand_pred_statistics_2::string3 = Const::IStr("cputime");
wstring hand_pred_statistics_2::string4 = Const::IStr("runtime");
wstring hand_pred_statistics_2::string5 = Const::IStr("statistics");

void hand_pred_statistics_2::Init(PrologMachine* mach) {
	entry_code = this;
	cputime2cont = mach->LoadPred("cputime", 1);
}

int hand_pred_statistics_2::Arity() {
	return 2;
}

Function* hand_pred_statistics_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_statistics_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Const tempVar(string4);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	Funct tempVar2(string1, var1, new Funct(string1, var2, new Const(string2)));
	if (!((areg1)->Unify(&tempVar2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return cputime2cont;
}

java::util::function::Function* hand_pred_termequal_2::entry_code;
java::util::function::Function* hand_pred_termequal_2::cl1 =
		new hand_pred_termequal_2_1();
java::util::function::Function* hand_pred_termequal_2::compare4cont;
wstring hand_pred_termequal_2::string0 = Const::IStr("cut");
wstring hand_pred_termequal_2::string1 = Const::IStr("=");
wstring hand_pred_termequal_2::string2 = Const::IStr("compare");
wstring hand_pred_termequal_2::string3 = Const::IStr("termequal");

void hand_pred_termequal_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int hand_pred_termequal_2::Arity() {
	return 2;
}

Function* hand_pred_termequal_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_termequal_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Const(string1);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

java::util::function::Function* hand_pred_termgreaterequal_2::entry_code;
java::util::function::Function* hand_pred_termgreaterequal_2::cl1 =
		new hand_pred_termgreaterequal_2_1();
java::util::function::Function* hand_pred_termgreaterequal_2::compare4cont;
wstring hand_pred_termgreaterequal_2::string0 = (wstring("cut")).intern();
wstring hand_pred_termgreaterequal_2::string1 = (wstring("compare")).intern();
wstring hand_pred_termgreaterequal_2::string2 = (wstring("smgr")).intern();
wstring hand_pred_termgreaterequal_2::string3 =
		(wstring("termgreaterequal")).intern();

void hand_pred_termgreaterequal_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int hand_pred_termgreaterequal_2::Arity() {
	return 2;
}

Function* hand_pred_termgreaterequal_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_termgreaterequal_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = new Funct(string2, var3->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

java::util::function::Function* hand_pred_termgreaterthan_2::entry_code;
java::util::function::Function* hand_pred_termgreaterthan_2::cl1 =
		new hand_pred_termgreaterthan_2_1();
java::util::function::Function* hand_pred_termgreaterthan_2::compare4cont;
wstring hand_pred_termgreaterthan_2::string0 = (wstring("cut")).intern();
wstring hand_pred_termgreaterthan_2::string1 = (wstring(">")).intern();
wstring hand_pred_termgreaterthan_2::string2 = (wstring("compare")).intern();
wstring hand_pred_termgreaterthan_2::string3 =
		(wstring("termgreaterthan")).intern();

void hand_pred_termgreaterthan_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int hand_pred_termgreaterthan_2::Arity() {
	return 2;
}

Function* hand_pred_termgreaterthan_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_termgreaterthan_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Const(string1);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

java::util::function::Function* hand_pred_termsmallerequal_2::entry_code;
java::util::function::Function* hand_pred_termsmallerequal_2::cl1 =
		new hand_pred_termsmallerequal_2_1();
java::util::function::Function* hand_pred_termsmallerequal_2::compare4cont;
wstring hand_pred_termsmallerequal_2::string0 = (wstring("cut")).intern();
wstring hand_pred_termsmallerequal_2::string1 = (wstring("compare")).intern();
wstring hand_pred_termsmallerequal_2::string2 = (wstring("smeq")).intern();
wstring hand_pred_termsmallerequal_2::string3 =
		(wstring("termsmallerequal")).intern();

void hand_pred_termsmallerequal_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int hand_pred_termsmallerequal_2::Arity() {
	return 2;
}

Function* hand_pred_termsmallerequal_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_termsmallerequal_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = new Funct(string2, var3->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

java::util::function::Function* hand_pred_termsmallerthan_2::entry_code;
java::util::function::Function* hand_pred_termsmallerthan_2::cl1 =
		new hand_pred_termsmallerthan_2_1();
java::util::function::Function* hand_pred_termsmallerthan_2::compare4cont;
wstring hand_pred_termsmallerthan_2::string0 = (wstring("cut")).intern();
wstring hand_pred_termsmallerthan_2::string1 = (wstring("<")).intern();
wstring hand_pred_termsmallerthan_2::string2 = (wstring("compare")).intern();
wstring hand_pred_termsmallerthan_2::string3 =
		(wstring("termsmallerthan")).intern();

void hand_pred_termsmallerthan_2::Init(PrologMachine* mach) {
	entry_code = this;
	compare4cont = mach->LoadPred("compare", 3);
}

int hand_pred_termsmallerthan_2::Arity() {
	return 2;
}

Function* hand_pred_termsmallerthan_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_termsmallerthan_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = new Const(string1);
	local_aregs[1] = var1->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return compare4cont;
}

java::util::function::Function* hand_pred_time_1::entry_code;
java::util::function::Function* hand_pred_time_1::cl1 =
		new hand_pred_time_1_1();
java::util::function::Function* hand_pred_time_1::cputime2cont;
wstring hand_pred_time_1::string0 = (wstring("cut")).intern();
wstring hand_pred_time_1::string1 = (wstring("-")).intern();
wstring hand_pred_time_1::string2 = (wstring("cputime")).intern();
wstring hand_pred_time_1::string3 = (wstring("exec")).intern();
wstring hand_pred_time_1::string4 = (wstring("is")).intern();
wstring hand_pred_time_1::string5 = (wstring("nl")).intern();
wstring hand_pred_time_1::string6 = (wstring("time")).intern();
wstring hand_pred_time_1::string7 = (wstring("write")).intern();

void hand_pred_time_1::Init(PrologMachine* mach) {
	entry_code = this;
	cputime2cont = mach->LoadPred("cputime", 1);
}

int hand_pred_time_1::Arity() {
	return 1;
}

Function* hand_pred_time_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_time_1_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	Funct tempVar(string2, var3,
			new Funct(string4, var4,
					new Funct(string1, var3->Deref(), var2->Deref()),
					new Funct(string7, var4->Deref(),
							new Funct(string5, continuation))));
	local_aregs[1] = new Funct(string3, var1->Deref(), &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return cputime2cont;
}

java::util::function::Function* hand_pred_top_0::entry_code;
java::util::function::Function* hand_pred_top_0::cl1 = new hand_pred_top_0_1();
java::util::function::Function* hand_pred_top_0::cl2 = new hand_pred_top_0_2();
java::util::function::Function* hand_pred_top_0::write2cont;
wstring hand_pred_top_0::string0 = (wstring("cut")).intern();
wstring hand_pred_top_0::string1 = (wstring("?- ")).intern();
wstring hand_pred_top_0::string2 = (wstring("Yes")).intern();
wstring hand_pred_top_0::string3 = (wstring("cut")).intern();
wstring hand_pred_top_0::string4 = (wstring("exec")).intern();
wstring hand_pred_top_0::string5 = (wstring("fail")).intern();
wstring hand_pred_top_0::string6 = (wstring("nl")).intern();
wstring hand_pred_top_0::string7 = (wstring("notmore")).intern();
wstring hand_pred_top_0::string8 = (wstring("top")).intern();
wstring hand_pred_top_0::string9 = (wstring("vread")).intern();
wstring hand_pred_top_0::string10 = (wstring("write")).intern();
wstring hand_pred_top_0::string11 = (wstring("writevars")).intern();
Int* hand_pred_top_0::posint1 = new Int(1);

void hand_pred_top_0::Init(PrologMachine* mach) {
	entry_code = this;
	write2cont = mach->LoadPred("write", 1);
}

int hand_pred_top_0::Arity() {
	return 0;
}

Function* hand_pred_top_0::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_top_0_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	local_aregs[0] = new Const(string1);
	Funct tempVar(string4, var1->Deref(),
			new Funct(string11, var2->Deref(),
					new Funct(string10, new Const(string2),
							new Funct(string6,
									new Funct(string7,
											new Funct(string0,
													new HeapChoice(mach->CUTB),
													new Funct(string5,
															continuation)))))));
	local_aregs[1] = new Funct(string9, var1, var2, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	return write2cont;
}

Function* hand_pred_top_0_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_toplevel_0::entry_code =
		new hand_pred_toplevel_0();
java::util::function::Function* hand_pred_toplevel_0::cl1 =
		new hand_pred_toplevel_0_1();
java::util::function::Function* hand_pred_toplevel_0::cl2 =
		new hand_pred_toplevel_0_2();
java::util::function::Function* hand_pred_toplevel_0::top1cont;
wstring hand_pred_toplevel_0::string0 = (wstring("cut")).intern();
wstring hand_pred_toplevel_0::string1 = (wstring("fail")).intern();
wstring hand_pred_toplevel_0::string2 = (wstring("top")).intern();
wstring hand_pred_toplevel_0::string3 = (wstring("toplevel")).intern();

int hand_pred_toplevel_0::Arity() {
	return 0;
}

Function* hand_pred_toplevel_0::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_toplevel_0_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = new Funct(string1, continuation);
	mach->CUTB = mach->CurrentChoice;
	if (top1cont == nullptr) {
		top1cont = mach->LoadPred("top", 0);
	}
	return top1cont;
}

Function* hand_pred_toplevel_0_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[0];
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}

java::util::function::Function* hand_pred_untilend_1::entry_code;
java::util::function::Function* hand_pred_untilend_1::cl1 =
		new hand_pred_untilend_1_1();
java::util::function::Function* hand_pred_untilend_1::cl2 =
		new hand_pred_untilend_1_2();
java::util::function::Function* hand_pred_untilend_1::cut2cont;
java::util::function::Function* hand_pred_untilend_1::get02cont;
wstring hand_pred_untilend_1::string0 = (wstring("cut")).intern();
wstring hand_pred_untilend_1::string1 = (wstring("cut")).intern();
wstring hand_pred_untilend_1::string2 = (wstring("get0")).intern();
wstring hand_pred_untilend_1::string3 = (wstring("untilend")).intern();
Int* hand_pred_untilend_1::posint1 = new Int(1);
Int* hand_pred_untilend_1::posint10 = new Int(10);

void hand_pred_untilend_1::Init(PrologMachine* mach) {
	entry_code = this;
	get02cont = mach->LoadPred("get0", 1);
}

int hand_pred_untilend_1::Arity() {
	return 1;
}

Function* hand_pred_untilend_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_untilend_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if (!((areg0)->Unify(posint10))) {
		return UpperPrologMachine::Fail0;
	}
	mach->DoCut(mach->CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_untilend_1_2::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2;
	local_aregs[1] = new Funct(string3, var2->Deref(), continuation);
	mach->CUTB = mach->CurrentChoice;
	return get02cont;
}

java::util::function::Function* hand_pred_var_1::entry_code;
java::util::function::Function* hand_pred_var_1::cl1 = new hand_pred_var_1_1();
java::util::function::Function* hand_pred_var_1::type_of3cont;
wstring hand_pred_var_1::string0 = (wstring("cut")).intern();
wstring hand_pred_var_1::string1 = (wstring("type_of")).intern();
wstring hand_pred_var_1::string2 = (wstring("var")).intern();

void hand_pred_var_1::Init(PrologMachine* mach) {
	entry_code = this;
	type_of3cont = mach->LoadPred("type_of", 2);
}

int hand_pred_var_1::Arity() {
	return 1;
}

Function* hand_pred_var_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_var_1_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = new Const(string2);
	local_aregs[2] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return type_of3cont;
}

java::util::function::Function* hand_pred_vread_2::entry_code;
java::util::function::Function* hand_pred_vread_2::cl1 =
		new hand_pred_vread_2_1();
java::util::function::Function* hand_pred_vread_2::nexttoken2cont;
wstring hand_pred_vread_2::string0 = (wstring("cut")).intern();
wstring hand_pred_vread_2::string1 = (wstring("[]")).intern();
wstring hand_pred_vread_2::string2 = (wstring("collectvars")).intern();
wstring hand_pred_vread_2::string3 = (wstring("cut")).intern();
wstring hand_pred_vread_2::string4 = (wstring("maketerm")).intern();
wstring hand_pred_vread_2::string5 = (wstring("nexttoken")).intern();
wstring hand_pred_vread_2::string6 = (wstring("readall")).intern();
wstring hand_pred_vread_2::string7 = (wstring("vread")).intern();
Int* hand_pred_vread_2::posint1 = new Int(1);

void hand_pred_vread_2::Init(PrologMachine* mach) {
	entry_code = this;
	nexttoken2cont = mach->LoadPred("nexttoken", 1);
}

int hand_pred_vread_2::Arity() {
	return 2;
}

Function* hand_pred_vread_2::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_vread_2_1::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Term* var4 = new Var(mach);
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	if (!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if (!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var3;
	Funct tempVar(string4, var4->Deref(), var1->Deref(),
			new Funct(string0, new HeapChoice(mach->CUTB),
					new Funct(string2, var4->Deref(), new Const(string1),
							var2->Deref(), continuation)));
	local_aregs[1] = new Funct(string6, var3->Deref(), var4, &tempVar);
	mach->CUTB = mach->CurrentChoice;
	local_aregs[2] = nullptr;
	return nexttoken2cont;
}

java::util::function::Function* hand_pred_writevars_1::entry_code;
java::util::function::Function* hand_pred_writevars_1::cl1 =
		new hand_pred_writevars_1_1();
java::util::function::Function* hand_pred_writevars_1::cl2 =
		new hand_pred_writevars_1_2();
java::util::function::Function* hand_pred_writevars_1::cl3 =
		new hand_pred_writevars_1_3();
java::util::function::Function* hand_pred_writevars_1::write2cont;
wstring hand_pred_writevars_1::string0 = (wstring("cut")).intern();
wstring hand_pred_writevars_1::string1 = (wstring(" = ")).intern();
wstring hand_pred_writevars_1::string2 = (wstring(".")).intern();
wstring hand_pred_writevars_1::string3 = (wstring("=")).intern();
wstring hand_pred_writevars_1::string4 = (wstring("[]")).intern();
wstring hand_pred_writevars_1::string5 = (wstring("call")).intern();
wstring hand_pred_writevars_1::string6 = (wstring("fail")).intern();
wstring hand_pred_writevars_1::string7 = (wstring("nl")).intern();
wstring hand_pred_writevars_1::string8 = (wstring("write")).intern();
wstring hand_pred_writevars_1::string9 = (wstring("writevars")).intern();

void hand_pred_writevars_1::Init(PrologMachine* mach) {
	entry_code = this;
	write2cont = mach->LoadPred("write", 1);
}

int hand_pred_writevars_1::Arity() {
	return 1;
}

Function* hand_pred_writevars_1::exec_static(PrologMachine* mach) {
	std::vector<Term*> aregs = { mach->Areg[0], mach->Areg[1] };
	mach->CreateChoicePoint(aregs);
	return static_cast<Function*>(cl1->apply(mach));
}

Function* hand_pred_writevars_1_1::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl2);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Const tempVar(string4);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach->CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

Function* hand_pred_writevars_1_2::exec_static(PrologMachine* mach) {
	mach->FillAlternative(cl3);
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var3 = new Var(mach);
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, new Funct(string3, var1, var2), var3);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	Const tempVar2(string1);
	Funct tempVar3(string8, var1->Deref(),
			new Funct(string7, new Funct(string6, continuation)));
	local_aregs[1] = new Funct(string8, &tempVar2, &tempVar3);
	mach->CUTB = mach->CurrentChoice;
	return write2cont;
}

Function* hand_pred_writevars_1_3::exec_static(PrologMachine* mach) {
	mach->RemoveChoice();
	std::vector<Term*> local_aregs = mach->Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Term* var2 = new Var(mach);
	Term* var1 = new Var(mach);
	Funct tempVar(string2, var1, var2);
	if (!((areg0)->Unify(&tempVar))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = continuation;
	mach->CUTB = mach->CurrentChoice;
	return entry_code;
}
