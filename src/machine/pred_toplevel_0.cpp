#include "pred_toplevel_0.h"

Code* pred_toplevel_0::entry_code;
Code* pred_toplevel_0::cl1 = new pred_toplevel_0_1();
Code* pred_toplevel_0::cl2 = new pred_toplevel_0_2();
Code* pred_toplevel_0::top1cont;
std::string pred_toplevel_0::string0 = (std::string("cut")).intern();
std::string pred_toplevel_0::string1 = (std::string("fail")).intern();
std::string pred_toplevel_0::string2 = (std::string("top")).intern();
std::string pred_toplevel_0::string3 = (std::string("toplevel")).intern();

void pred_toplevel_0::init(PrologMachine* mach) {
	entry_code = this;
top1cont = mach->LoadPred("top",0);
}

int pred_toplevel_0::Arity() {
	return 0;
}

Code* pred_toplevel_0::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_toplevel_0_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[0];
local_aregs[0] = new Funct(string1,continuation);
mach->CUTB = mach->CurrentChoice;
return top1cont;
}

Code* pred_toplevel_0_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
return entry_code;
}
