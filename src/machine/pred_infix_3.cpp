#include "pred_infix_3.h"

Code* pred_infix_3::entry_code;
Code* pred_infix_3::cl1 = new pred_infix_3_1();
Code* pred_infix_3::cl2 = new pred_infix_3_2();
Code* pred_infix_3::cl3 = new pred_infix_3_3();
Code* pred_infix_3::cl4 = new pred_infix_3_4();
Code* pred_infix_3::cl5 = new pred_infix_3_5();
Code* pred_infix_3::cl6 = new pred_infix_3_6();
Code* pred_infix_3::cl7 = new pred_infix_3_7();
Code* pred_infix_3::cl8 = new pred_infix_3_8();
Code* pred_infix_3::cl9 = new pred_infix_3_9();
Code* pred_infix_3::cl10 = new pred_infix_3_10();
Code* pred_infix_3::cl11 = new pred_infix_3_11();
Code* pred_infix_3::cl12 = new pred_infix_3_12();
Code* pred_infix_3::cl13 = new pred_infix_3_13();
Code* pred_infix_3::cl14 = new pred_infix_3_14();
Code* pred_infix_3::cl15 = new pred_infix_3_15();
Code* pred_infix_3::cl16 = new pred_infix_3_16();
Code* pred_infix_3::cl17 = new pred_infix_3_17();
Code* pred_infix_3::cl18 = new pred_infix_3_18();
Code* pred_infix_3::cl19 = new pred_infix_3_19();
Code* pred_infix_3::cl20 = new pred_infix_3_20();
Code* pred_infix_3::cl21 = new pred_infix_3_21();
Code* pred_infix_3::cl22 = new pred_infix_3_22();
Code* pred_infix_3::cl23 = new pred_infix_3_23();
Code* pred_infix_3::cl24 = new pred_infix_3_24();
Code* pred_infix_3::cl25 = new pred_infix_3_25();
Code* pred_infix_3::cl26 = new pred_infix_3_26();
Code* pred_infix_3::cl27 = new pred_infix_3_27();
Code* pred_infix_3::cl28 = new pred_infix_3_28();
std::string pred_infix_3::string0 = (std::string("cut")).intern();
std::string pred_infix_3::string1 = (std::string("#")).intern();
std::string pred_infix_3::string2 = (std::string("*")).intern();
std::string pred_infix_3::string3 = (std::string("+")).intern();
std::string pred_infix_3::string4 = (std::string(",")).intern();
std::string pred_infix_3::string5 = (std::string("-")).intern();
std::string pred_infix_3::string6 = (std::string("->")).intern();
std::string pred_infix_3::string7 = (std::string("/")).intern();
std::string pred_infix_3::string8 = (std::string("//")).intern();
std::string pred_infix_3::string9 = (std::string(":")).intern();
std::string pred_infix_3::string10 = (std::string(":-")).intern();
std::string pred_infix_3::string11 = (std::string(";")).intern();
std::string pred_infix_3::string12 = (std::string("<")).intern();
std::string pred_infix_3::string13 = (std::string("<<")).intern();
std::string pred_infix_3::string14 = (std::string("=")).intern();
std::string pred_infix_3::string15 = (std::string("=..")).intern();
std::string pred_infix_3::string16 = (std::string("=:=")).intern();
std::string pred_infix_3::string17 = (std::string("=<")).intern();
std::string pred_infix_3::string18 = (std::string("==")).intern();
std::string pred_infix_3::string19 = (std::string(">")).intern();
std::string pred_infix_3::string20 = (std::string(">=")).intern();
std::string pred_infix_3::string21 = (std::string(">>")).intern();
std::string pred_infix_3::string22 = (std::string("@<")).intern();
std::string pred_infix_3::string23 = (std::string("@=<")).intern();
std::string pred_infix_3::string24 = (std::string("@>")).intern();
std::string pred_infix_3::string25 = (std::string("@>=")).intern();
std::string pred_infix_3::string26 = (std::string("^")).intern();
std::string pred_infix_3::string27 = (std::string("call")).intern();
std::string pred_infix_3::string28 = (std::string("infix")).intern();
std::string pred_infix_3::string29 = (std::string("is")).intern();
std::string pred_infix_3::string30 = (std::string("mod")).intern();
std::string pred_infix_3::string31 = (std::string("xfx")).intern();
std::string pred_infix_3::string32 = (std::string("xfy")).intern();
std::string pred_infix_3::string33 = (std::string("yfx")).intern();
Int* pred_infix_3::posint200 = new Int(200);
Int* pred_infix_3::posint300 = new Int(300);
Int* pred_infix_3::posint400 = new Int(400);
Int* pred_infix_3::posint500 = new Int(500);
Int* pred_infix_3::posint550 = new Int(550);
Int* pred_infix_3::posint700 = new Int(700);
Int* pred_infix_3::posint1000 = new Int(1000);
Int* pred_infix_3::posint1050 = new Int(1050);
Int* pred_infix_3::posint1100 = new Int(1100);
Int* pred_infix_3::posint1200 = new Int(1200);

void pred_infix_3::init(PrologMachine* mach) {
	entry_code = this;
}

int pred_infix_3::Arity() {
	return 3;
}

Code* pred_infix_3::Exec(PrologMachine* mach) {
	std::vector<PrologObject*> aregs = { mach->Areg[0], mach->Areg[1], mach->Areg[2], mach->Areg[3] };
mach->CreateChoicePoint(aregs);
return cl1->Exec(mach);
}

Code* pred_infix_3_1::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl2);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint1200))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string10);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_2::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl3);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint1000))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string32);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string4);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_3::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl4);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint1100))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string32);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string11);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_4::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl5);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint1050))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string32);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string6);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_5::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl6);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string14);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_6::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl7);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string29);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_7::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl8);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string15);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_8::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl9);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string18);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_9::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl10);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string22);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_10::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl11);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string24);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_11::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl12);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string23);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_12::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl13);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string25);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_13::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl14);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string16);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_14::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl15);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string12);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_15::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl16);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string17);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_16::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl17);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string19);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_17::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl18);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint700))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string20);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_18::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl19);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint550))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string32);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string9);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_19::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl20);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint500))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string3);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_20::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl21);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint500))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string5);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_21::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl22);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint500))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string1);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_22::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl23);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint400))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string2);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_23::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl24);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint400))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string7);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_24::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl25);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint400))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string8);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_25::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl26);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint400))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string13);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_26::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl27);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint400))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string33);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string21);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_27::Exec(PrologMachine* mach) {
	mach->FillAlternative(cl28);
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint300))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string31);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string30);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}

Code* pred_infix_3_28::Exec(PrologMachine* mach) {
	mach->RemoveChoice();
std::vector<PrologObject*> local_aregs = mach->Areg;
PrologObject* continuation = local_aregs[3];
PrologObject* areg2 = local_aregs[2]->Deref();
PrologObject* areg1 = local_aregs[1]->Deref();
PrologObject* areg0 = local_aregs[0]->Deref();
if(!((areg0)->Unify(posint200))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar(string32);
if(!((areg1)->Unify(&tempVar))) {
	return UpperPrologMachine::Fail0;
}
Const tempVar2(string26);
if(!((areg2)->Unify(&tempVar2))) {
	return UpperPrologMachine::Fail0;
}
local_aregs[0] = continuation;
mach->CUTB = mach->CurrentChoice;
local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
return UpperPrologMachine::Call1;
}
