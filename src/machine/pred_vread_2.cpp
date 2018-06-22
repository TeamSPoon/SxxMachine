#include "pred_vread_2.h"

Code* pred_vread_2::entry_code;
Code* pred_vread_2::cl1 = new pred_vread_2_1();
Code* pred_vread_2::nexttoken2cont;
std::string pred_vread_2::string0 = (std::string("cut")).intern();
std::string pred_vread_2::string1 = (std::string("[]")).intern();
std::string pred_vread_2::string2 = (std::string("collectvars")).intern();
std::string pred_vread_2::string3 = (std::string("cut")).intern();
std::string pred_vread_2::string4 = (std::string("maketerm")).intern();
std::string pred_vread_2::string5 = (std::string("nexttoken")).intern();
std::string pred_vread_2::string6 = (std::string("readall")).intern();
std::string pred_vread_2::string7 = (std::string("vread")).intern();
Int* pred_vread_2::posint1 = new Int(1);

void pred_vread_2::init(PrologMachine* mach) {
	entry_code = this;
nexttoken2cont = mach->LoadPred("nexttoken",1);
}

int pred_vread_2::Arity() {
	return 2;
}

Code* pred_vread_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_vread_2_1::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
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
Funct tempVar(string4,var4->Deref(),var1->Deref(),new Funct(string0, new HeapChoice(mach->CUTB),new Funct(string2,var4->Deref(),new Const(string1),var2->Deref(),continuation)));
local_aregs[1] = new Funct(string6,var3->Deref(),var4,&tempVar);
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return nexttoken2cont;
}
