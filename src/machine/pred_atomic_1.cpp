#include "pred_atomic_1.h"

Code* pred_atomic_1::entry_code;
Code* pred_atomic_1::cl1 = new pred_atomic_1_1();
Code* pred_atomic_1::type_of3cont;
std::string pred_atomic_1::string0 = (std::string("cut")).intern();
std::string pred_atomic_1::string1 = (std::string("atomic")).intern();
std::string pred_atomic_1::string2 = (std::string("atomic2")).intern();
std::string pred_atomic_1::string3 = (std::string("type_of")).intern();

void pred_atomic_1::init(PrologMachine* mach) {
	entry_code = this;
type_of3cont = mach->LoadPred("type_of",2);
}

int pred_atomic_1::Arity() {
	return 1;
}

Code* pred_atomic_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_atomic_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
local_aregs[2] = new Funct(string2,var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
return type_of3cont;
}
