#include "pred_or_2.h"

Code* pred_or_2::entry_code;
Code* pred_or_2::cl1 = new pred_or_2_1();
Code* pred_or_2::cl2 = new pred_or_2_2();
Code* pred_or_2::exec2cont;
std::string pred_or_2::string0 = (std::string("cut")).intern();
std::string pred_or_2::string1 = (std::string("exec")).intern();
std::string pred_or_2::string2 = (std::string("or")).intern();

void pred_or_2::init(PrologMachine* mach) {
	entry_code = this;
exec2cont = mach->LoadPred("exec",1);
}

int pred_or_2::Arity() {
	return 2;
}

Code* pred_or_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_or_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
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
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return exec2cont;
}

Code* pred_or_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
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
local_aregs[0] = var2->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return exec2cont;
}
