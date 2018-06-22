#include "pred_ap_3.h"

Code* pred_ap_3::entry_code;
Code* pred_ap_3::cl1 = new pred_ap_3_1();
Code* pred_ap_3::cl2 = new pred_ap_3_2();
std::string pred_ap_3::string0 = (std::string("cut")).intern();
std::string pred_ap_3::string1 = (std::string(".")).intern();
std::string pred_ap_3::string2 = (std::string("[]")).intern();
std::string pred_ap_3::string3 = (std::string("ap")).intern();
std::string pred_ap_3::string4 = (std::string("call")).intern();

void pred_ap_3::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_ap_3::Arity() {
	return 3;
}

Code* pred_ap_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_ap_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
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
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string1,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string1,var1->Deref(),var4);
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
