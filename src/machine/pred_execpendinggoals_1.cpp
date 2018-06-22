#include "pred_execpendinggoals_1.h"

Code* pred_execpendinggoals_1::entry_code;
Code* pred_execpendinggoals_1::cl1 = new pred_execpendinggoals_1_1();
Code* pred_execpendinggoals_1::cl2 = new pred_execpendinggoals_1_2();
Code* pred_execpendinggoals_1::exec2cont;
Code* pred_execpendinggoals_1::execcontinuation1cont;
std::string pred_execpendinggoals_1::string0 = (std::string("cut")).intern();
std::string pred_execpendinggoals_1::string1 = (std::string(".")).intern();
std::string pred_execpendinggoals_1::string2 = (std::string("[]")).intern();
std::string pred_execpendinggoals_1::string3 = (std::string("exec")).intern();
std::string pred_execpendinggoals_1::string4 = (std::string("execcontinuation")).intern();
std::string pred_execpendinggoals_1::string5 = (std::string("execpendinggoals")).intern();

void pred_execpendinggoals_1::init(PrologMachine* mach) {
	entry_code = this;
exec2cont = mach->LoadPred("exec",1);
execcontinuation1cont = mach->LoadPred("execcontinuation",0);
}

int pred_execpendinggoals_1::Arity() {
	return 1;
}

Code* pred_execpendinggoals_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_execpendinggoals_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
Const tempVar(string2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[1] = nullptr;
return execcontinuation1cont;
}

Code* pred_execpendinggoals_1_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string1,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = new Funct(string5,var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
return exec2cont;
}
