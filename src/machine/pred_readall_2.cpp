#include "pred_readall_2.h"

Code* pred_readall_2::entry_code;
Code* pred_readall_2::cl1 = new pred_readall_2_1();
Code* pred_readall_2::cl2 = new pred_readall_2_2();
Code* pred_readall_2::cl3 = new pred_readall_2_3();
Code* pred_readall_2::cut2cont;
Code* pred_readall_2::nexttoken2cont;
std::string pred_readall_2::string0 = (std::string("cut")).intern();
std::string pred_readall_2::string1 = (std::string(".")).intern();
std::string pred_readall_2::string2 = (std::string("[]")).intern();
std::string pred_readall_2::string3 = (std::string("cut")).intern();
std::string pred_readall_2::string4 = (std::string("end_of_clause")).intern();
std::string pred_readall_2::string5 = (std::string("end_of_file")).intern();
std::string pred_readall_2::string6 = (std::string("halt")).intern();
std::string pred_readall_2::string7 = (std::string("nexttoken")).intern();
std::string pred_readall_2::string8 = (std::string("readall")).intern();
std::string pred_readall_2::string9 = (std::string("unify")).intern();
Int* pred_readall_2::posint1 = new Int(1);

void pred_readall_2::init(PrologMachine* mach) {
	entry_code = this;
nexttoken2cont = mach->LoadPred("nexttoken",1);
}

int pred_readall_2::Arity() {
	return 2;
}

Code* pred_readall_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_readall_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
Const tempVar(string5);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = new Funct(string6,continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_readall_2_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
Const tempVar(string4);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
Const tempVar2(string2);
local_aregs[0] = new Funct(string9,&tempVar2,var1->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_readall_2_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar(string1,var1->Deref(),var2);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var3;
local_aregs[1] = new Funct(string8,var3->Deref(),var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return nexttoken2cont;
}
