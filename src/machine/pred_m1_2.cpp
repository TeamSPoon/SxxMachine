#include "pred_m1_2.h"

Code* pred_m1_2::entry_code;
Code* pred_m1_2::cl1 = new pred_m1_2_1();
Code* pred_m1_2::cl2 = new pred_m1_2_2();
Code* pred_m1_2::var2cont;
std::string pred_m1_2::string0 = (std::string("cut")).intern();
std::string pred_m1_2::string1 = (std::string("-")).intern();
std::string pred_m1_2::string2 = (std::string(".")).intern();
std::string pred_m1_2::string3 = (std::string("m1")).intern();
std::string pred_m1_2::string4 = (std::string("var")).intern();

void pred_m1_2::init(PrologMachine* mach) {
	entry_code = this;
var2cont = mach->LoadPred("var",1);
}

int pred_m1_2::Arity() {
	return 2;
}

Code* pred_m1_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_m1_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
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
Funct tempVar(string2,new Funct(string1,var1->Deref(),var2),var3);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return var2cont;
}

Code* pred_m1_2_2::Exec(PrologMachine* mach) {
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
Funct tempVar(string2,var2,var3);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach->CurrentChoice;
return entry_code;
}
