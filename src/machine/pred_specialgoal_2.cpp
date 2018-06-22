#include "pred_specialgoal_2.h"

Code* pred_specialgoal_2::entry_code;
Code* pred_specialgoal_2::cl1 = new pred_specialgoal_2_1();
Code* pred_specialgoal_2::cl2 = new pred_specialgoal_2_2();
Code* pred_specialgoal_2::cl3 = new pred_specialgoal_2_3();
Code* pred_specialgoal_2::cl4 = new pred_specialgoal_2_4();
Code* pred_specialgoal_2::cl5 = new pred_specialgoal_2_5();
Code* pred_specialgoal_2::cl6 = new pred_specialgoal_2_6();
Code* pred_specialgoal_2::cl7 = new pred_specialgoal_2_7();
Code* pred_specialgoal_2::cl8 = new pred_specialgoal_2_8();
Code* pred_specialgoal_2::cl9 = new pred_specialgoal_2_9();
Code* pred_specialgoal_2::cl10 = new pred_specialgoal_2_10();
Code* pred_specialgoal_2::cl11 = new pred_specialgoal_2_11();
Code* pred_specialgoal_2::cl12 = new pred_specialgoal_2_12();
Code* pred_specialgoal_2::cut2cont;
std::string pred_specialgoal_2::string0 = (std::string("cut")).intern();
std::string pred_specialgoal_2::string1 = (std::string(";")).intern();
std::string pred_specialgoal_2::string2 = (std::string("<")).intern();
std::string pred_specialgoal_2::string3 = (std::string("=")).intern();
std::string pred_specialgoal_2::string4 = (std::string("=:=")).intern();
std::string pred_specialgoal_2::string5 = (std::string("=<")).intern();
std::string pred_specialgoal_2::string6 = (std::string("==")).intern();
std::string pred_specialgoal_2::string7 = (std::string(">")).intern();
std::string pred_specialgoal_2::string8 = (std::string(">=")).intern();
std::string pred_specialgoal_2::string9 = (std::string("@<")).intern();
std::string pred_specialgoal_2::string10 = (std::string("@=<")).intern();
std::string pred_specialgoal_2::string11 = (std::string("@>")).intern();
std::string pred_specialgoal_2::string12 = (std::string("@>=")).intern();
std::string pred_specialgoal_2::string13 = (std::string("arithequal")).intern();
std::string pred_specialgoal_2::string14 = (std::string("cut")).intern();
std::string pred_specialgoal_2::string15 = (std::string("or")).intern();
std::string pred_specialgoal_2::string16 = (std::string("smallerorequal")).intern();
std::string pred_specialgoal_2::string17 = (std::string("smallerthan")).intern();
std::string pred_specialgoal_2::string18 = (std::string("specialgoal")).intern();
std::string pred_specialgoal_2::string19 = (std::string("termequal")).intern();
std::string pred_specialgoal_2::string20 = (std::string("termgreaterequal")).intern();
std::string pred_specialgoal_2::string21 = (std::string("termgreaterthan")).intern();
std::string pred_specialgoal_2::string22 = (std::string("termsmallerequal")).intern();
std::string pred_specialgoal_2::string23 = (std::string("termsmallerthan")).intern();
std::string pred_specialgoal_2::string24 = (std::string("unify")).intern();
Int* pred_specialgoal_2::posint1 = new Int(1);

void pred_specialgoal_2::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_specialgoal_2::Arity() {
	return 2;
}

Code* pred_specialgoal_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_specialgoal_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string2,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string17,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string5,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string16,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string7,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string17,var2->Deref(),var1->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string8,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string16,var2->Deref(),var1->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string13,var2->Deref(),var1->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_6::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl7);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string3,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string24,var2->Deref(),var1->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_7::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl8);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string1,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string15,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_8::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl9);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string9,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string23,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_9::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl10);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string11,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string21,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_10::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl11);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string10,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string22,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_11::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl12);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string12,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string20,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_specialgoal_2_12::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string6,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string19,var1->Deref(),var2->Deref());
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}
