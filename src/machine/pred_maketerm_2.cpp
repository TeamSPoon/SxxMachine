#include "pred_maketerm_2.h"

Code* pred_maketerm_2::entry_code;
Code* pred_maketerm_2::cl1 = new pred_maketerm_2_1();
Code* pred_maketerm_2::maketerm4cont;
std::string pred_maketerm_2::string0 = (std::string("cut")).intern();
std::string pred_maketerm_2::string1 = (std::string("maketerm")).intern();
Int* pred_maketerm_2::posint1200 = new Int(1200);

void pred_maketerm_2::init(PrologMachine* mach) {
	entry_code = this;
maketerm4cont = mach->LoadPred("maketerm",3);
}

int pred_maketerm_2::Arity() {
	return 2;
}

Code* pred_maketerm_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_maketerm_2_1::Exec(PrologMachine* mach) {
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = posint1200;
local_aregs[3] = continuation;
mach->CUTB = mach->CurrentChoice;
return maketerm4cont;
}
