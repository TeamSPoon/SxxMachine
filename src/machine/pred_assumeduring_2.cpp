#include "pred_assumeduring_2.h"

Code* pred_assumeduring_2::entry_code;
Code* pred_assumeduring_2::cl1 = new pred_assumeduring_2_1();
Code* pred_assumeduring_2::assume2cont;
std::string pred_assumeduring_2::string0 = (std::string("cut")).intern();
std::string pred_assumeduring_2::string1 = (std::string("-")).intern();
std::string pred_assumeduring_2::string2 = (std::string("assume")).intern();
std::string pred_assumeduring_2::string3 = (std::string("assumeduring")).intern();
std::string pred_assumeduring_2::string4 = (std::string("exec")).intern();
std::string pred_assumeduring_2::string5 = (std::string("unify")).intern();
Int* pred_assumeduring_2::posint1 = new Int(1);

void pred_assumeduring_2::init(PrologMachine* mach) {
	entry_code = this;
assume2cont = mach->LoadPred("assume",1);
}

int pred_assumeduring_2::Arity() {
	return 2;
}

Code* pred_assumeduring_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_assumeduring_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = new Funct(string1,var2->Deref(),var3);
Funct tempVar(string5,posint1,var3->Deref(),continuation);
local_aregs[1] = new Funct(string4,var1->Deref(),&tempVar);
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return assume2cont;
}
