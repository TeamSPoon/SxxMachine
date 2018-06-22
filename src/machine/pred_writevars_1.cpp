#include "pred_writevars_1.h"

Code* pred_writevars_1::entry_code;
Code* pred_writevars_1::cl1 = new pred_writevars_1_1();
Code* pred_writevars_1::cl2 = new pred_writevars_1_2();
Code* pred_writevars_1::cl3 = new pred_writevars_1_3();
Code* pred_writevars_1::write2cont;
std::string pred_writevars_1::string0 = (std::string("cut")).intern();
std::string pred_writevars_1::string1 = (std::string(" = ")).intern();
std::string pred_writevars_1::string2 = (std::string(".")).intern();
std::string pred_writevars_1::string3 = (std::string("=")).intern();
std::string pred_writevars_1::string4 = (std::string("[]")).intern();
std::string pred_writevars_1::string5 = (std::string("call")).intern();
std::string pred_writevars_1::string6 = (std::string("fail")).intern();
std::string pred_writevars_1::string7 = (std::string("nl")).intern();
std::string pred_writevars_1::string8 = (std::string("write")).intern();
std::string pred_writevars_1::string9 = (std::string("writevars")).intern();

void pred_writevars_1::init(PrologMachine* mach) {
	entry_code = this;
write2cont = mach->LoadPred("write",1);
}

int pred_writevars_1::Arity() {
	return 1;
}

Code* pred_writevars_1::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_writevars_1_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
Const tempVar(string4);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_writevars_1_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string2,new Funct(string3,var1,var2),var3);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
Const tempVar2(string1);
Funct tempVar3(string8,var1->Deref(),new Funct(string7,new Funct(string6,continuation)));
local_aregs[1] = new Funct(string8,&tempVar2,&tempVar3);
mach->CUTB = mach->CurrentChoice;
return write2cont;
}

Code* pred_writevars_1_3::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[1];
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string2,var1,var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = continuation;
mach->CUTB = mach->CurrentChoice;
return entry_code;
}
