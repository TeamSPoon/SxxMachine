#include "pred_newprec_4.h"

Code* pred_newprec_4::entry_code;
Code* pred_newprec_4::cl1 = new pred_newprec_4_1();
Code* pred_newprec_4::cl2 = new pred_newprec_4_2();
Code* pred_newprec_4::cl3 = new pred_newprec_4_3();
Code* pred_newprec_4::cut2cont;
std::string pred_newprec_4::string0 = (std::string("cut")).intern();
std::string pred_newprec_4::string1 = (std::string("-")).intern();
std::string pred_newprec_4::string2 = (std::string("cut")).intern();
std::string pred_newprec_4::string3 = (std::string("is")).intern();
std::string pred_newprec_4::string4 = (std::string("newprec")).intern();
std::string pred_newprec_4::string5 = (std::string("unify")).intern();
std::string pred_newprec_4::string6 = (std::string("xfx")).intern();
std::string pred_newprec_4::string7 = (std::string("xfy")).intern();
std::string pred_newprec_4::string8 = (std::string("yfx")).intern();
Int* pred_newprec_4::posint1 = new Int(1);

void pred_newprec_4::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_newprec_4::Arity() {
	return 4;
}

Code* pred_newprec_4::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3], mach->Areg[4] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_newprec_4_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Const tempVar(string6);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
Funct tempVar2(string1,var1->Deref(),posint1);
Funct tempVar3(string3,var3->Deref(),new Funct(string1,var1->Deref(),posint1),continuation);
local_aregs[0] = new Funct(string3,var2->Deref(),&tempVar2,&tempVar3);
mach->CUTB = mach->CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_newprec_4_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Const tempVar(string7);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
Funct tempVar2(string1,var1->Deref(),posint1);
Funct tempVar3(string5,var1->Deref(),var3->Deref(),continuation);
local_aregs[0] = new Funct(string3,var2->Deref(),&tempVar2,&tempVar3);
mach->CUTB = mach->CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_newprec_4_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[4];
PrologObject* areg3 = local_aregs[3]->Deref();
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Const tempVar(string8);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg3)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
Funct tempVar2(string1,var1->Deref(),posint1);
Funct tempVar3(string5,var1->Deref(),var2->Deref(),continuation);
local_aregs[0] = new Funct(string3,var3->Deref(),&tempVar2,&tempVar3);
mach->CUTB = mach->CurrentChoice;
local_aregs[4] = local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}
