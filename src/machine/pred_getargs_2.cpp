#include "pred_getargs_2.h"

Code* pred_getargs_2::entry_code;
Code* pred_getargs_2::cl1 = new pred_getargs_2_1();
Code* pred_getargs_2::cl2 = new pred_getargs_2_2();
Code* pred_getargs_2::ap4cont;
std::string pred_getargs_2::string0 = (std::string("cut")).intern();
std::string pred_getargs_2::string1 = (std::string(")")).intern();
std::string pred_getargs_2::string2 = (std::string(",")).intern();
std::string pred_getargs_2::string3 = (std::string(".")).intern();
std::string pred_getargs_2::string4 = (std::string("[]")).intern();
std::string pred_getargs_2::string5 = (std::string("ap")).intern();
std::string pred_getargs_2::string6 = (std::string("const")).intern();
std::string pred_getargs_2::string7 = (std::string("getargs")).intern();
std::string pred_getargs_2::string8 = (std::string("maketerm")).intern();
std::string pred_getargs_2::string9 = (std::string("unify")).intern();
Int* pred_getargs_2::posint900 = new Int(900);

void pred_getargs_2::init(PrologMachine* mach) {
	entry_code = this;
ap4cont = mach->LoadPred("ap",3);
}

int pred_getargs_2::Arity() {
	return 2;
}

Code* pred_getargs_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_getargs_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
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
Funct tempVar(string6,new Const(string1));
Const tempVar2(string4);
local_aregs[1] = new Funct(string3,&tempVar,&tempVar2);
local_aregs[2] = var1->Deref();
Funct tempVar3(string9,new Funct(string3,var4->Deref(),new Const(string4)),var2->Deref(),continuation);
local_aregs[3] = new Funct(string8,var3->Deref(),var4,posint900,&tempVar3);
mach->CUTB = mach->CurrentChoice;
return ap4cont;
}

Code* pred_getargs_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var6 = new Var(mach);
PrologObject* var5 = new Var(mach);
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
Funct tempVar(string6,new Const(string2));
local_aregs[1] = new Funct(string3,&tempVar,var4);
local_aregs[2] = var1->Deref();
Funct tempVar2(string9,new Funct(string3,var5->Deref(),var6),var2->Deref(),new Funct(string7,var4->Deref(),var6->Deref(),continuation));
local_aregs[3] = new Funct(string8,var3->Deref(),var5,posint900,&tempVar2);
mach->CUTB = mach->CurrentChoice;
return ap4cont;
}
