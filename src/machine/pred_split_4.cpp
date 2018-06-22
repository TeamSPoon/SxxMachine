#include "pred_split_4.h"

Code* pred_split_4::entry_code;
Code* pred_split_4::cl1 = new pred_split_4_1();
Code* pred_split_4::cl2 = new pred_split_4_2();
Code* pred_split_4::cl3 = new pred_split_4_3();
Code* pred_split_4::cut2cont;
Code* pred_split_4::smallerthan3cont;
std::string pred_split_4::string0 = (std::string("cut")).intern();
std::string pred_split_4::string1 = (std::string(".")).intern();
std::string pred_split_4::string2 = (std::string("[]")).intern();
std::string pred_split_4::string3 = (std::string("cut")).intern();
std::string pred_split_4::string4 = (std::string("smallerthan")).intern();
std::string pred_split_4::string5 = (std::string("split")).intern();
Int* pred_split_4::posint1 = new Int(1);

void pred_split_4::init(PrologMachine* mach) {
	entry_code = this;
smallerthan3cont = mach->LoadPred("smallerthan",2);
}

int pred_split_4::Arity() {
	return 4;
}

Code* pred_split_4::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3], mach->Areg[4] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_split_4_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string2);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string2);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar3(string2);
if(!((areg3)->Unify(&tempVar3))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_split_4_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar(string1,var2,var3);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string1,var2->Deref(),var4);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var1->Deref();
HeapChoice tempVar3(mach->CUTB);
Funct tempVar4(string5,var1->Deref(),var3->Deref(),var4->Deref(),var5->Deref(),continuation);
local_aregs[2] = new Funct(string0, &tempVar3,&tempVar4);
mach->CUTB = mach->CurrentChoice;
local_aregs[4] = local_aregs[3] = nullptr;
return smallerthan3cont;
}

Code* pred_split_4_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar(string1,var2,var3);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string1,var2->Deref(),var5);
if(!((areg3)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = var4->Deref();
local_aregs[3] = var5->Deref();
local_aregs[4] = continuation;
mach->CUTB = mach->CurrentChoice;
return entry_code;
}
