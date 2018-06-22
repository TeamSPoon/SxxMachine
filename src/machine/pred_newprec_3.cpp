#include "pred_newprec_3.h"

Code* pred_newprec_3::entry_code;
Code* pred_newprec_3::cl1 = new pred_newprec_3_1();
Code* pred_newprec_3::cl2 = new pred_newprec_3_2();
Code* pred_newprec_3::cut2cont;
std::string pred_newprec_3::string0 = (std::string("cut")).intern();
std::string pred_newprec_3::string1 = (std::string("-")).intern();
std::string pred_newprec_3::string2 = (std::string("call")).intern();
std::string pred_newprec_3::string3 = (std::string("cut")).intern();
std::string pred_newprec_3::string4 = (std::string("fx")).intern();
std::string pred_newprec_3::string5 = (std::string("fy")).intern();
std::string pred_newprec_3::string6 = (std::string("is")).intern();
std::string pred_newprec_3::string7 = (std::string("newprec")).intern();
Int* pred_newprec_3::posint1 = new Int(1);

void pred_newprec_3::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_newprec_3::Arity() {
	return 3;
}

Code* pred_newprec_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_newprec_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Const tempVar(string4);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
Funct tempVar2(string1,var1->Deref(),posint1);
local_aregs[0] = new Funct(string6,var2->Deref(),&tempVar2,continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_newprec_3_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
Const tempVar(string5);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
