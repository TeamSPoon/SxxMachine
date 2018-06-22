#include "pred_atomic2_1.h"

Code* pred_atomic2_1::entry_code;
Code* pred_atomic2_1::cl1 = new pred_atomic2_1_1();
Code* pred_atomic2_1::cl2 = new pred_atomic2_1_2();
Code* pred_atomic2_1::cut2cont;
std::string pred_atomic2_1::string0 = (std::string("cut")).intern();
std::string pred_atomic2_1::string1 = (std::string("atom")).intern();
std::string pred_atomic2_1::string2 = (std::string("atomic2")).intern();
std::string pred_atomic2_1::string3 = (std::string("call")).intern();
std::string pred_atomic2_1::string4 = (std::string("cut")).intern();
std::string pred_atomic2_1::string5 = (std::string("integer")).intern();
Int* pred_atomic2_1::posint1 = new Int(1);

void pred_atomic2_1::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_atomic2_1::Arity() {
	return 1;
}

Code* pred_atomic2_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_atomic2_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
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
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
Const tempVar(string5);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
