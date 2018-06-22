#include "pred_noteq_2.h"

Code* pred_noteq_2::entry_code;
Code* pred_noteq_2::cl1 = new pred_noteq_2_1();
Code* pred_noteq_2::cl2 = new pred_noteq_2_2();
Code* pred_noteq_2::cut2cont;
std::string pred_noteq_2::string0 = (std::string("cut")).intern();
std::string pred_noteq_2::string1 = (std::string("call")).intern();
std::string pred_noteq_2::string2 = (std::string("cut")).intern();
std::string pred_noteq_2::string3 = (std::string("fail")).intern();
std::string pred_noteq_2::string4 = (std::string("noteq")).intern();
Int* pred_noteq_2::posint1 = new Int(1);

void pred_noteq_2::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_noteq_2::Arity() {
	return 2;
}

Code* pred_noteq_2::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_noteq_2_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var1->Deref()))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = new Funct(string3,continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_noteq_2_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[2];
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
