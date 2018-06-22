#include "pred_copy_term_2.h"

Code* pred_copy_term_2::entry_code;
Code* pred_copy_term_2::cl1 = new pred_copy_term_2_1();
Code* pred_copy_term_2::findall4cont;
std::string pred_copy_term_2::string0 = (std::string("cut")).intern();
std::string pred_copy_term_2::string1 = (std::string(".")).intern();
std::string pred_copy_term_2::string2 = (std::string("=")).intern();
std::string pred_copy_term_2::string3 = (std::string("[]")).intern();
std::string pred_copy_term_2::string4 = (std::string("copy_term")).intern();
std::string pred_copy_term_2::string5 = (std::string("findall")).intern();

void pred_copy_term_2::init(PrologMachine* mach) {
	entry_code = this;
findall4cont = mach->LoadPred("findall",3);
}

int pred_copy_term_2::Arity() {
	return 2;
}

Code* pred_copy_term_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_copy_term_2_1::Exec(PrologMachine* mach) {
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
local_aregs[0] = var3;
local_aregs[1] = new Funct(string2,var3->Deref(),var1->Deref());
Const tempVar(string3);
local_aregs[2] = new Funct(string1,var2->Deref(),&tempVar);
local_aregs[3] = continuation;
mach->CUTB = mach->CurrentChoice;
return findall4cont;
}
