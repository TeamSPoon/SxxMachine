#include "pred_statistics_2.h"

Code* pred_statistics_2::entry_code;
Code* pred_statistics_2::cl1 = new pred_statistics_2_1();
Code* pred_statistics_2::cputime2cont;
std::string pred_statistics_2::string0 = (std::string("cut")).intern();
std::string pred_statistics_2::string1 = (std::string(".")).intern();
std::string pred_statistics_2::string2 = (std::string("[]")).intern();
std::string pred_statistics_2::string3 = (std::string("cputime")).intern();
std::string pred_statistics_2::string4 = (std::string("runtime")).intern();
std::string pred_statistics_2::string5 = (std::string("statistics")).intern();

void pred_statistics_2::init(PrologMachine* mach) {
	entry_code = this;
cputime2cont = mach->LoadPred("cputime",1);
}

int pred_statistics_2::Arity() {
	return 2;
}

Code* pred_statistics_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_statistics_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Const tempVar(string4);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string1,var1,new Funct(string1,var2,new Const(string2)));
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return cputime2cont;
}
