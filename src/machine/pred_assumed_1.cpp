#include "pred_assumed_1.h"

Code* pred_assumed_1::entry_code;
Code* pred_assumed_1::cl1 = new pred_assumed_1_1();
Code* pred_assumed_1::allassumed2cont;
std::string pred_assumed_1::string0 = (std::string("cut")).intern();
std::string pred_assumed_1::string1 = (std::string("allassumed")).intern();
std::string pred_assumed_1::string2 = (std::string("assumed")).intern();
std::string pred_assumed_1::string3 = (std::string("m1")).intern();

void pred_assumed_1::init(PrologMachine* mach) {
	entry_code = this;
allassumed2cont = mach->LoadPred("allassumed",1);
}

int pred_assumed_1::Arity() {
	return 1;
}

Code* pred_assumed_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_assumed_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = new Funct(string3,var1->Deref(),var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
return allassumed2cont;
}
