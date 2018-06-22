#include "pred_sort_2.h"

Code* pred_sort_2::entry_code;
Code* pred_sort_2::cl1 = new pred_sort_2_1();
Code* pred_sort_2::cl2 = new pred_sort_2_2();
Code* pred_sort_2::cut2cont;
Code* pred_sort_2::split5cont;
std::string pred_sort_2::string0 = (std::string("cut")).intern();
std::string pred_sort_2::string1 = (std::string(".")).intern();
std::string pred_sort_2::string2 = (std::string("[]")).intern();
std::string pred_sort_2::string3 = (std::string("append")).intern();
std::string pred_sort_2::string4 = (std::string("cut")).intern();
std::string pred_sort_2::string5 = (std::string("sort")).intern();
std::string pred_sort_2::string6 = (std::string("split")).intern();
Int* pred_sort_2::posint1 = new Int(1);

void pred_sort_2::init(PrologMachine* mach) {
	entry_code = this;
split5cont = mach->LoadPred("split",4);
}

int pred_sort_2::Arity() {
	return 2;
}

Code* pred_sort_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_sort_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
Const tempVar(string2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string2);
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_sort_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var7 = new Var(mach);
PrologObject* var6 = new Var(mach);
PrologObject* var5 = new Var(mach);
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
local_aregs[0] = var1->Deref();
local_aregs[1] = var2->Deref();
local_aregs[2] = var4;
local_aregs[3] = var5;
Funct tempVar2(string5,var5->Deref(),var7,new Funct(string3,var6->Deref(),new Funct(string1,var1->Deref(),var7->Deref()),var3->Deref(),continuation));
local_aregs[4] = new Funct(string5,var4->Deref(),var6,&tempVar2);
mach->CUTB = mach->CurrentChoice;
return split5cont;
}
