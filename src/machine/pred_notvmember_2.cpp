#include "pred_notvmember_2.h"

Code* pred_notvmember_2::entry_code;
Code* pred_notvmember_2::cl1 = new pred_notvmember_2_1();
Code* pred_notvmember_2::cl2 = new pred_notvmember_2_2();
Code* pred_notvmember_2::cl3 = new pred_notvmember_2_3();
Code* pred_notvmember_2::cut2cont;
std::string pred_notvmember_2::string0 = (std::string("cut")).intern();
std::string pred_notvmember_2::string1 = (std::string(".")).intern();
std::string pred_notvmember_2::string2 = (std::string("=")).intern();
std::string pred_notvmember_2::string3 = (std::string("[]")).intern();
std::string pred_notvmember_2::string4 = (std::string("cut")).intern();
std::string pred_notvmember_2::string5 = (std::string("fail")).intern();
std::string pred_notvmember_2::string6 = (std::string("notvmember")).intern();
Int* pred_notvmember_2::posint1 = new Int(1);

void pred_notvmember_2::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_notvmember_2::Arity() {
	return 2;
}

Code* pred_notvmember_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_notvmember_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string3);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_notvmember_2_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
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
Funct tempVar(string1,new Funct(string2,var2,var1->Deref()),var3);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = new Funct(string5,continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_notvmember_2_3::Exec(PrologMachine* mach) {
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
Funct tempVar(string1,var2,var3);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var3->Deref();
local_aregs[2] = continuation;
mach->CUTB = mach->CurrentChoice;
return entry_code;
}
