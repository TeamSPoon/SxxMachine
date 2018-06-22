#include "pred_maketerm_3.h"

Code* pred_maketerm_3::entry_code;
Code* pred_maketerm_3::cl1 = new pred_maketerm_3_1();
Code* pred_maketerm_3::cl2 = new pred_maketerm_3_2();
Code* pred_maketerm_3::cl3 = new pred_maketerm_3_3();
Code* pred_maketerm_3::cl4 = new pred_maketerm_3_4();
Code* pred_maketerm_3::cl5 = new pred_maketerm_3_5();
Code* pred_maketerm_3::cl6 = new pred_maketerm_3_6();
Code* pred_maketerm_3::cl7 = new pred_maketerm_3_7();
Code* pred_maketerm_3::cl8 = new pred_maketerm_3_8();
Code* pred_maketerm_3::cl9 = new pred_maketerm_3_9();
Code* pred_maketerm_3::cl10 = new pred_maketerm_3_10();
Code* pred_maketerm_3::cl11 = new pred_maketerm_3_11();
Code* pred_maketerm_3::ap4cont;
Code* pred_maketerm_3::cut2cont;
Code* pred_maketerm_3::getargs3cont;
Code* pred_maketerm_3::prefix4cont;
Code* pred_maketerm_3::unify3cont;
std::string pred_maketerm_3::string0 = (std::string("cut")).intern();
std::string pred_maketerm_3::string1 = (std::string("(")).intern();
std::string pred_maketerm_3::string2 = (std::string(")")).intern();
std::string pred_maketerm_3::string3 = (std::string(",")).intern();
std::string pred_maketerm_3::string4 = (std::string(".")).intern();
std::string pred_maketerm_3::string5 = (std::string("[")).intern();
std::string pred_maketerm_3::string6 = (std::string("[]")).intern();
std::string pred_maketerm_3::string7 = (std::string("]")).intern();
std::string pred_maketerm_3::string8 = (std::string("ap")).intern();
std::string pred_maketerm_3::string9 = (std::string("call")).intern();
std::string pred_maketerm_3::string10 = (std::string("const")).intern();
std::string pred_maketerm_3::string11 = (std::string("cut")).intern();
std::string pred_maketerm_3::string12 = (std::string("getargs")).intern();
std::string pred_maketerm_3::string13 = (std::string("infix")).intern();
std::string pred_maketerm_3::string14 = (std::string("int")).intern();
std::string pred_maketerm_3::string15 = (std::string("maketerm")).intern();
std::string pred_maketerm_3::string16 = (std::string("newprec")).intern();
std::string pred_maketerm_3::string17 = (std::string("prefix")).intern();
std::string pred_maketerm_3::string18 = (std::string("smallerorequal")).intern();
std::string pred_maketerm_3::string19 = (std::string("unify")).intern();
std::string pred_maketerm_3::string20 = (std::string("univ")).intern();
std::string pred_maketerm_3::string21 = (std::string("var")).intern();
std::string pred_maketerm_3::string22 = (std::string("|")).intern();
Int* pred_maketerm_3::posint1 = new Int(1);
Int* pred_maketerm_3::posint900 = new Int(900);

void pred_maketerm_3::init(PrologMachine* mach) {
	entry_code = this;
ap4cont = mach->LoadPred("ap",3);
getargs3cont = mach->LoadPred("getargs",2);
prefix4cont = mach->LoadPred("prefix",3);
unify3cont = mach->LoadPred("unify",2);
}

int pred_maketerm_3::Arity() {
	return 3;
}

Code* pred_maketerm_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_maketerm_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string21,var1,var2,var3),new Const(string6));
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var5))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var1->Deref();
local_aregs[1] = var4->Deref();
HeapChoice tempVar2(mach->CUTB);
local_aregs[2] = new Funct(string0, &tempVar2,continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = nullptr;
return unify3cont;
}

Code* pred_maketerm_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string14,var1),new Const(string6));
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = new Funct(string19,var1->Deref(),var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_maketerm_3_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,var1),new Const(string6));
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
mach->DoCut(mach->CUTB);
local_aregs[0] = new Funct(string19,var1->Deref(),var2->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_maketerm_3_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,var1),new Funct(string4,new Funct(string10,new Const(string1)),var2));
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var2->Deref();
local_aregs[1] = var5;
local_aregs[2] = new Funct(string20,var3->Deref(),var1->Deref(),var5->Deref(),continuation);
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = nullptr;
return getargs3cont;
}

Code* pred_maketerm_3_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var12 = new Var(mach);
PrologObject* var11 = new Var(mach);
PrologObject* var10 = new Var(mach);
PrologObject* var9 = new Var(mach);
PrologObject* var8 = new Var(mach);
PrologObject* var7 = new Var(mach);
PrologObject* var6 = new Var(mach);
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
if(!((areg0)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var4;
Funct tempVar(string10,var5);
local_aregs[1] = new Funct(string4,&tempVar,var6);
local_aregs[2] = var1->Deref();
Funct tempVar2(string18,var7->Deref(),var3->Deref(),new Funct(string16,var8->Deref(),var7->Deref(),var9,var10,new Funct(string15,var4->Deref(),var11,var9->Deref(),new Funct(string15,var6->Deref(),var12,var10->Deref(),new Funct(string20,var2->Deref(),var5->Deref(),new Funct(string4,var11->Deref(),new Funct(string4,var12->Deref(),new Const(string6))),continuation)))));
local_aregs[3] = new Funct(string13,var7,var8,var5->Deref(),&tempVar2);
mach->CUTB = mach->CurrentChoice;
return ap4cont;
}

Code* pred_maketerm_3_6::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl7);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var8 = new Var(mach);
PrologObject* var7 = new Var(mach);
PrologObject* var6 = new Var(mach);
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,var1),var2);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var5;
local_aregs[1] = var6;
local_aregs[2] = var1->Deref();
Funct tempVar2(string16,var6->Deref(),var5->Deref(),var7,new Funct(string15,var2->Deref(),var8,var7->Deref(),new Funct(string20,var3->Deref(),var1->Deref(),new Funct(string4,var8->Deref(),new Const(string6)),continuation)));
local_aregs[3] = new Funct(string18,var5->Deref(),var4->Deref(),&tempVar2);
mach->CUTB = mach->CurrentChoice;
return prefix4cont;
}

Code* pred_maketerm_3_7::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl8);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var6 = new Var(mach);
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,new Const(string5)),var1);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string4,var2,var3);
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var5;
Funct tempVar3(string10,new Const(string3));
local_aregs[1] = new Funct(string4,&tempVar3,var6);
local_aregs[2] = var1->Deref();
Funct tempVar4(string15,new Funct(string4,new Funct(string10,new Const(string5)),var6->Deref()),var3->Deref(),posint900,continuation);
local_aregs[3] = new Funct(string15,var5->Deref(),var2->Deref(),posint900,&tempVar4);
mach->CUTB = mach->CurrentChoice;
return ap4cont;
}

Code* pred_maketerm_3_8::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl9);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var7 = new Var(mach);
PrologObject* var6 = new Var(mach);
PrologObject* var5 = new Var(mach);
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,new Const(string5)),var1);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string4,var2,var3);
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var4))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var5;
Funct tempVar3(string10,new Const(string22));
local_aregs[1] = new Funct(string4,&tempVar3,var6);
local_aregs[2] = var1->Deref();
Funct tempVar4(string4,new Funct(string10,new Const(string7)),new Const(string6));
Funct tempVar5(string15,var5->Deref(),var2->Deref(),posint900,new Funct(string15,var7->Deref(),var3->Deref(),posint900,continuation));
local_aregs[3] = new Funct(string8,var7,&tempVar4,var6->Deref(),&tempVar5);
mach->CUTB = mach->CurrentChoice;
return ap4cont;
}

Code* pred_maketerm_3_9::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl10);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,new Const(string1)),var1);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg1)->Unify(var2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var4;
Funct tempVar2(string10,new Const(string2));
Const tempVar3(string6);
local_aregs[1] = new Funct(string4,&tempVar2,&tempVar3);
local_aregs[2] = var1->Deref();
HeapChoice tempVar4(mach->CUTB);
Funct tempVar5(string15,var4->Deref(),var2->Deref(),continuation);
local_aregs[3] = new Funct(string0, &tempVar4,&tempVar5);
mach->CUTB = mach->CurrentChoice;
return ap4cont;
}

Code* pred_maketerm_3_10::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl11);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var4 = new Var(mach);
PrologObject* var3 = new Var(mach);
PrologObject* var2 = new Var(mach);
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,new Const(string5)),var1);
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Funct tempVar2(string4,var2,new Const(string6));
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var3))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = var4;
Funct tempVar3(string10,new Const(string7));
Const tempVar4(string6);
local_aregs[1] = new Funct(string4,&tempVar3,&tempVar4);
local_aregs[2] = var1->Deref();
local_aregs[3] = new Funct(string15,var4->Deref(),var2->Deref(),posint900,continuation);
mach->CUTB = mach->CurrentChoice;
return ap4cont;
}

Code* pred_maketerm_3_11::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
PrologObject* var1 = new Var(mach);
Funct tempVar(string4,new Funct(string10,new Const(string5)),new Funct(string4,new Funct(string10,new Const(string7)),new Const(string6)));
if(!((areg0)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string6);
if(!((areg1)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
if(!((areg2)->Unify(var1))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
