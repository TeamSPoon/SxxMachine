#include "pred_findall2_4.h"

Code* pred_findall2_4::entry_code;
Code* pred_findall2_4::cl1 = new pred_findall2_4_1();
Code* pred_findall2_4::cl2 = new pred_findall2_4_2();
Code* pred_findall2_4::exec2cont;
Code* pred_findall2_4::retrievefindall3cont;
std::string pred_findall2_4::string0 = (std::string("cut")).intern();
std::string pred_findall2_4::string1 = (std::string("addfindall")).intern();
std::string pred_findall2_4::string2 = (std::string("exec")).intern();
std::string pred_findall2_4::string3 = (std::string("fail")).intern();
std::string pred_findall2_4::string4 = (std::string("findall2")).intern();
std::string pred_findall2_4::string5 = (std::string("retrievefindall")).intern();

void pred_findall2_4::init(PrologMachine* mach) {
	entry_code = this;
exec2cont = mach->LoadPred("exec",1);
retrievefindall3cont = mach->LoadPred("retrievefindall",2);
}

int pred_findall2_4::Arity() {
	return 4;
}

Code* pred_findall2_4::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3], mach->Areg[4] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_findall2_4_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
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
Funct tempVar(string3,continuation);
local_aregs[1] = new Funct(string1,var1->Deref(),var4->Deref(),&tempVar);
mach->CUTB = mach->CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return exec2cont;
}

Code* pred_findall2_4_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
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
