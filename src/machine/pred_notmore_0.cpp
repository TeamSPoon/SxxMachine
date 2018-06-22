#include "pred_notmore_0.h"

Code* pred_notmore_0::entry_code;
Code* pred_notmore_0::cl1 = new pred_notmore_0_1();
Code* pred_notmore_0::cl2 = new pred_notmore_0_2();
Code* pred_notmore_0::get02cont;
std::string pred_notmore_0::string0 = (std::string("cut")).intern();
std::string pred_notmore_0::string1 = (std::string("call")).intern();
std::string pred_notmore_0::string2 = (std::string("cut")).intern();
std::string pred_notmore_0::string3 = (std::string("fail")).intern();
std::string pred_notmore_0::string4 = (std::string("get0")).intern();
std::string pred_notmore_0::string5 = (std::string("noteq")).intern();
std::string pred_notmore_0::string6 = (std::string("notmore")).intern();
std::string pred_notmore_0::string7 = (std::string("untilend")).intern();
Int* pred_notmore_0::posint1 = new Int(1);
Int* pred_notmore_0::posint10 = new Int(10);

void pred_notmore_0::init(PrologMachine* mach) {
	entry_code = this;
get02cont = mach->LoadPred("get0",1);
}

int pred_notmore_0::Arity() {
	return 0;
}

Code* pred_notmore_0::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_notmore_0_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[0];
PrologObject* var1 = new Var(mach);
local_aregs[0] = var1;
Funct tempVar(string0, new HeapChoice(mach->CUTB),new Funct(string7,var1->Deref(),new Funct(string3,continuation)));
local_aregs[1] = new Funct(string5,var1->Deref(),posint10,&tempVar);
mach->CUTB = mach->CurrentChoice;
return get02cont;
}

Code* pred_notmore_0_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
return UpperPrologMachine::Call1;
}
