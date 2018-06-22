#include "pred_max_3.h"

Code* pred_max_3::entry_code;
Code* pred_max_3::cl1 = new pred_max_3_1();
Code* pred_max_3::cl2 = new pred_max_3_2();
Code* pred_max_3::cl3 = new pred_max_3_3();
Code* pred_max_3::smallerthan3cont;
std::string pred_max_3::string0 = (std::string("cut")).intern();
std::string pred_max_3::string1 = (std::string("call")).intern();
std::string pred_max_3::string2 = (std::string("max")).intern();
std::string pred_max_3::string3 = (std::string("smallerthan")).intern();

void pred_max_3::init(PrologMachine* mach) {
	entry_code = this;
smallerthan3cont = mach->LoadPred("smallerthan",2);
}

int pred_max_3::Arity() {
	return 3;
}

Code* pred_max_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_max_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
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
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
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
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
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
