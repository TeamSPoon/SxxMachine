#include "pred_findall_3.h"

Code* pred_findall_3::entry_code;
Code* pred_findall_3::cl1 = new pred_findall_3_1();
Code* pred_findall_3::initfindall2cont;
std::string pred_findall_3::string0 = (std::string("cut")).intern();
std::string pred_findall_3::string1 = (std::string("findall")).intern();
std::string pred_findall_3::string2 = (std::string("findall2")).intern();
std::string pred_findall_3::string3 = (std::string("initfindall")).intern();

void pred_findall_3::init(PrologMachine* mach) {
	entry_code = this;
initfindall2cont = mach->LoadPred("initfindall",1);
}

int pred_findall_3::Arity() {
	return 3;
}

Code* pred_findall_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_findall_3_1::Exec(PrologMachine* mach) {
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
local_aregs[1] = new Funct(string2,var1->Deref(),var2->Deref(),var3->Deref(),var4->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return initfindall2cont;
}
