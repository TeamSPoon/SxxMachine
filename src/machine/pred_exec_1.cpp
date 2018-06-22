#include "pred_exec_1.h"

Code* pred_exec_1::entry_code;
Code* pred_exec_1::cl1 = new pred_exec_1_1();
Code* pred_exec_1::cl2 = new pred_exec_1_2();
Code* pred_exec_1::cl3 = new pred_exec_1_3();
Code* pred_exec_1::cl4 = new pred_exec_1_4();
Code* pred_exec_1::cl5 = new pred_exec_1_5();
Code* pred_exec_1::cl6 = new pred_exec_1_6();
Code* pred_exec_1::cut2cont;
Code* pred_exec_1::specialgoal3cont;
Code* pred_exec_1::var2cont;
std::string pred_exec_1::string0 = (std::string("cut")).intern();
std::string pred_exec_1::string1 = (std::string(",")).intern();
std::string pred_exec_1::string2 = (std::string("->")).intern();
std::string pred_exec_1::string3 = (std::string(";")).intern();
std::string pred_exec_1::string4 = (std::string("call")).intern();
std::string pred_exec_1::string5 = (std::string("cut")).intern();
std::string pred_exec_1::string6 = (std::string("exec")).intern();
std::string pred_exec_1::string7 = (std::string("execdisj")).intern();
std::string pred_exec_1::string8 = (std::string("fail")).intern();
std::string pred_exec_1::string9 = (std::string("specialgoal")).intern();
std::string pred_exec_1::string10 = (std::string("true")).intern();
std::string pred_exec_1::string11 = (std::string("var")).intern();
Int* pred_exec_1::posint1 = new Int(1);

void pred_exec_1::init(PrologMachine* mach) {
	entry_code = this;
specialgoal3cont = mach->LoadPred("specialgoal",2);
var2cont = mach->LoadPred("var",1);
}

int pred_exec_1::Arity() {
	return 1;
}

Code* pred_exec_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_exec_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
HeapChoice tempVar(mach->CUTB);
Funct tempVar2(string8,continuation);
local_aregs[1] = new Funct(string0, &tempVar,&tempVar2);
mach->CUTB = mach->CurrentChoice;
return var2cont;
}

Code* pred_exec_1_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string1,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
Funct tempVar2(string6,var2->Deref(),continuation);
local_aregs[0] = new Funct(string6,var1->Deref(),&tempVar2);
mach->CUTB = mach->CurrentChoice;
return UpperPrologMachine::Call1;
}

Code* pred_exec_1_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string2,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
Funct tempVar2(string2,var1->Deref(),var2->Deref());
Const tempVar3(string10);
local_aregs[0] = new Funct(string7,&tempVar2,&tempVar3,continuation);
mach->CUTB = mach->CurrentChoice;
return UpperPrologMachine::Call1;
}

Code* pred_exec_1_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string3,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = new Funct(string7,var1->Deref(),var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
return UpperPrologMachine::Call1;
}

Code* pred_exec_1_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var2;
HeapChoice tempVar(mach->CUTB);
Funct tempVar2(string6,var2->Deref(),continuation);
local_aregs[2] = new Funct(string0, &tempVar,&tempVar2);
mach->CUTB = mach->CurrentChoice;
return specialgoal3cont;
}

Code* pred_exec_1_6::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach->CurrentChoice;
return UpperPrologMachine::Call2;
}
