#include "pred_collectvars_3.h"

Code* pred_collectvars_3::entry_code;
Code* pred_collectvars_3::cl1 = new pred_collectvars_3_1();
Code* pred_collectvars_3::cl2 = new pred_collectvars_3_2();
Code* pred_collectvars_3::cl3 = new pred_collectvars_3_3();
Code* pred_collectvars_3::cut2cont;
Code* pred_collectvars_3::noteq3cont;
std::string pred_collectvars_3::string0 = (std::string("cut")).intern();
std::string pred_collectvars_3::string1 = (std::string(".")).intern();
std::string pred_collectvars_3::string2 = (std::string("=")).intern();
std::string pred_collectvars_3::string3 = (std::string("[]")).intern();
std::string pred_collectvars_3::string4 = (std::string("_")).intern();
std::string pred_collectvars_3::string5 = (std::string("collectvars")).intern();
std::string pred_collectvars_3::string6 = (std::string("cut")).intern();
std::string pred_collectvars_3::string7 = (std::string("noteq")).intern();
std::string pred_collectvars_3::string8 = (std::string("notvmember")).intern();
std::string pred_collectvars_3::string9 = (std::string("var")).intern();
Int* pred_collectvars_3::posint1 = new Int(1);

void pred_collectvars_3::init(PrologMachine* mach) {
	entry_code = this;
noteq3cont = mach->LoadPred("noteq",2);
}

int pred_collectvars_3::Arity() {
	return 3;
}

Code* pred_collectvars_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_collectvars_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
Const tempVar(string3);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_collectvars_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var6 = new Var(mach);
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string1,new Funct(string9,var1,var2,var3),var4);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var6))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = new Const(string4);
Funct tempVar2(string0, new HeapChoice(mach->CUTB),new Funct(string5,var4->Deref(),new Funct(string1,new Funct(string2,var1->Deref(),var2->Deref()),var5->Deref()),var6->Deref(),continuation));
local_aregs[2] = new Funct(string8,var2->Deref(),var5->Deref(),&tempVar2);
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = nullptr;
return noteq3cont;
}

Code* pred_collectvars_3_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string1,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = continuation;
mach->CUTB = mach->CurrentChoice;
return entry_code;
}
