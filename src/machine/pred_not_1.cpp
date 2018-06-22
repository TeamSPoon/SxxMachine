#include "pred_not_1.h"

Code* pred_not_1::entry_code;
Code* pred_not_1::cl1 = new pred_not_1_1();
Code* pred_not_1::cl2 = new pred_not_1_2();
Code* pred_not_1::exec2cont;
std::string pred_not_1::string0 = (std::string("cut")).intern();
std::string pred_not_1::string1 = (std::string("call")).intern();
std::string pred_not_1::string2 = (std::string("cut")).intern();
std::string pred_not_1::string3 = (std::string("exec")).intern();
std::string pred_not_1::string4 = (std::string("fail")).intern();
std::string pred_not_1::string5 = (std::string("not")).intern();
Int* pred_not_1::posint1 = new Int(1);

void pred_not_1::init(PrologMachine* mach) {
	entry_code = this;
exec2cont = mach->LoadPred("exec",1);
}

int pred_not_1::Arity() {
	return 1;
}

Code* pred_not_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_not_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach->CUTB);
Funct tempVar2(string4,continuation);
local_aregs[1] = new Funct(string0, &tempVar,&tempVar2);
mach->CUTB = mach->CurrentChoice;
return exec2cont;
}

Code* pred_not_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
