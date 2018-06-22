#include "pred_prefix_3.h"

Code* pred_prefix_3::entry_code;
Code* pred_prefix_3::cl1 = new pred_prefix_3_1();
Code* pred_prefix_3::cl2 = new pred_prefix_3_2();
Code* pred_prefix_3::cl3 = new pred_prefix_3_3();
Code* pred_prefix_3::cl4 = new pred_prefix_3_4();
std::string pred_prefix_3::string0 = (std::string("cut")).intern();
std::string pred_prefix_3::string1 = (std::string("+")).intern();
std::string pred_prefix_3::string2 = (std::string("-")).intern();
std::string pred_prefix_3::string3 = (std::string(":-")).intern();
std::string pred_prefix_3::string4 = (std::string("?-")).intern();
std::string pred_prefix_3::string5 = (std::string("call")).intern();
std::string pred_prefix_3::string6 = (std::string("fx")).intern();
std::string pred_prefix_3::string7 = (std::string("prefix")).intern();
Int* pred_prefix_3::posint500 = new Int(500);
Int* pred_prefix_3::posint1200 = new Int(1200);

void pred_prefix_3::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_prefix_3::Arity() {
	return 3;
}

Code* pred_prefix_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_prefix_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint1200))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string6);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string3);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_prefix_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint1200))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string6);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string4);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_prefix_3_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint500))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string6);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string1);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_prefix_3_4::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint500))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string6);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string2);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
