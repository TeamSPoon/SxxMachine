#include "pred_time_1.h"

Code* pred_time_1::entry_code;
Code* pred_time_1::cl1 = new pred_time_1_1();
Code* pred_time_1::cputime2cont;
std::string pred_time_1::string0 = (std::string("cut")).intern();
std::string pred_time_1::string1 = (std::string("-")).intern();
std::string pred_time_1::string2 = (std::string("cputime")).intern();
std::string pred_time_1::string3 = (std::string("exec")).intern();
std::string pred_time_1::string4 = (std::string("is")).intern();
std::string pred_time_1::string5 = (std::string("nl")).intern();
std::string pred_time_1::string6 = (std::string("time")).intern();
std::string pred_time_1::string7 = (std::string("write")).intern();

void pred_time_1::init(PrologMachine* mach) {
	entry_code = this;
cputime2cont = mach->LoadPred("cputime",1);
}

int pred_time_1::Arity() {
	return 1;
}

Code* pred_time_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_time_1_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
Funct tempVar(string2,var3,new Funct(string4,var4,new Funct(string1,var3->Deref(),var2->Deref()),new Funct(string7,var4->Deref(),new Funct(string5,continuation))));
local_aregs[1] = new Funct(string3,var1->Deref(),&tempVar);
mach->CUTB = mach->CurrentChoice;
return cputime2cont;
}
