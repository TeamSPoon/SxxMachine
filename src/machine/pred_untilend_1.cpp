#include "pred_untilend_1.h"

Code* pred_untilend_1::entry_code;
Code* pred_untilend_1::cl1 = new pred_untilend_1_1();
Code* pred_untilend_1::cl2 = new pred_untilend_1_2();
Code* pred_untilend_1::cut2cont;
Code* pred_untilend_1::get02cont;
std::string pred_untilend_1::string0 = (std::string("cut")).intern();
std::string pred_untilend_1::string1 = (std::string("cut")).intern();
std::string pred_untilend_1::string2 = (std::string("get0")).intern();
std::string pred_untilend_1::string3 = (std::string("untilend")).intern();
Int* pred_untilend_1::posint1 = new Int(1);
Int* pred_untilend_1::posint10 = new Int(10);

void pred_untilend_1::init(PrologMachine* mach) {
	entry_code = this;
get02cont = mach->LoadPred("get0",1);
}

int pred_untilend_1::Arity() {
	return 1;
}

Code* pred_untilend_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_untilend_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint10))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
return UpperPrologMachine::Call1;
}

Code* pred_untilend_1_2::Exec(PrologMachine* mach) {
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
local_aregs[1] = new Funct(string3,var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
return get02cont;
}
