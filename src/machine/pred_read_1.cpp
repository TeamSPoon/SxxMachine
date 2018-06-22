#include "pred_read_1.h"

Code* pred_read_1::entry_code;
Code* pred_read_1::cl1 = new pred_read_1_1();
Code* pred_read_1::nexttoken2cont;
std::string pred_read_1::string0 = (std::string("cut")).intern();
std::string pred_read_1::string1 = (std::string("cut")).intern();
std::string pred_read_1::string2 = (std::string("maketerm")).intern();
std::string pred_read_1::string3 = (std::string("nexttoken")).intern();
std::string pred_read_1::string4 = (std::string("read")).intern();
std::string pred_read_1::string5 = (std::string("readall")).intern();
Int* pred_read_1::posint1 = new Int(1);

void pred_read_1::init(PrologMachine* mach) {
	entry_code = this;
nexttoken2cont = mach->LoadPred("nexttoken",1);
}

int pred_read_1::Arity() {
	return 1;
}

Code* pred_read_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_read_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
Funct tempVar(string2,var3->Deref(),var1->Deref(),new Funct(string0, new HeapChoice(mach->CUTB),continuation));
local_aregs[1] = new Funct(string5,var2->Deref(),var3,&tempVar);
mach->CUTB = mach->CurrentChoice;
return nexttoken2cont;
}
