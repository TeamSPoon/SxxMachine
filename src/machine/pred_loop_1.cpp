#include "pred_loop_1.h"

Code* pred_loop_1::entry_code;
Code* pred_loop_1::cl1 = new pred_loop_1_1();
Code* pred_loop_1::cl2 = new pred_loop_1_2();
Code* pred_loop_1::cut2cont;
Code* pred_loop_1::is3cont;
std::string pred_loop_1::string0 = (std::string("cut")).intern();
std::string pred_loop_1::string1 = (std::string("-")).intern();
std::string pred_loop_1::string2 = (std::string("cut")).intern();
std::string pred_loop_1::string3 = (std::string("is")).intern();
std::string pred_loop_1::string4 = (std::string("loop")).intern();
Int* pred_loop_1::posint0 = new Int(0);
Int* pred_loop_1::posint1 = new Int(1);

void pred_loop_1::init(PrologMachine* mach) {
	entry_code = this;
is3cont = mach->LoadPred("is",2);
}

int pred_loop_1::Arity() {
	return 1;
}

Code* pred_loop_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_loop_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint0))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
return UpperPrologMachine::Call1;
}

Code* pred_loop_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2;
local_aregs[1] = new Funct(string1,var1->Deref(),posint1);
local_aregs[2] = new Funct(string4,var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
return is3cont;
}
