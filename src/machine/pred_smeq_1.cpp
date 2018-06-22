#include "pred_smeq_1.h"

Code* pred_smeq_1::entry_code;
Code* pred_smeq_1::cl1 = new pred_smeq_1_1();
Code* pred_smeq_1::cl2 = new pred_smeq_1_2();
Code* pred_smeq_1::cut2cont;
std::string pred_smeq_1::string0 = (std::string("cut")).intern();
std::string pred_smeq_1::string1 = (std::string("<")).intern();
std::string pred_smeq_1::string2 = (std::string("=")).intern();
std::string pred_smeq_1::string3 = (std::string("call")).intern();
std::string pred_smeq_1::string4 = (std::string("cut")).intern();
std::string pred_smeq_1::string5 = (std::string("smeq")).intern();
Int* pred_smeq_1::posint1 = new Int(1);

void pred_smeq_1::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_smeq_1::Arity() {
	return 1;
}

Code* pred_smeq_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_smeq_1_1::Exec(PrologMachine* mach) {
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

Code* pred_smeq_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
Const tempVar(string2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
