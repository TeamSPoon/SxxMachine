#include "pred_top_0.h"

Code* pred_top_0::entry_code;
Code* pred_top_0::cl1 = new pred_top_0_1();
Code* pred_top_0::cl2 = new pred_top_0_2();
Code* pred_top_0::write2cont;
std::string pred_top_0::string0 = (std::string("cut")).intern();
std::string pred_top_0::string1 = (std::string("?- ")).intern();
std::string pred_top_0::string2 = (std::string("Yes")).intern();
std::string pred_top_0::string3 = (std::string("cut")).intern();
std::string pred_top_0::string4 = (std::string("exec")).intern();
std::string pred_top_0::string5 = (std::string("fail")).intern();
std::string pred_top_0::string6 = (std::string("nl")).intern();
std::string pred_top_0::string7 = (std::string("notmore")).intern();
std::string pred_top_0::string8 = (std::string("top")).intern();
std::string pred_top_0::string9 = (std::string("vread")).intern();
std::string pred_top_0::string10 = (std::string("write")).intern();
std::string pred_top_0::string11 = (std::string("writevars")).intern();
Int* pred_top_0::posint1 = new Int(1);

void pred_top_0::init(PrologMachine* mach) {
	entry_code = this;
write2cont = mach->LoadPred("write",1);
}

int pred_top_0::Arity() {
	return 0;
}

Code* pred_top_0::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_top_0_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[0];
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
local_aregs[0] = new Const(string1);
Funct tempVar(string4,var1->Deref(),new Funct(string11,var2->Deref(),new Funct(string10,new Const(string2),new Funct(string6,new Funct(string7,new Funct(string0, new HeapChoice(mach->CUTB),new Funct(string5,continuation)))))));
local_aregs[1] = new Funct(string9,var1,var2,&tempVar);
mach->CUTB = mach->CurrentChoice;
return write2cont;
}

Code* pred_top_0_2::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[0];
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
return entry_code;
}
