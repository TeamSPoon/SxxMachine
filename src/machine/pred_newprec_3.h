#ifndef PRED_NEWPREC_3
#define PRED_NEWPREC_3

#include "Prolog.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class Int;
class PrologMachine;

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_newprec_3 : public Code {
public:
	static Code* entry_code;
static Code* cl1;
static Code* cl2;
static Code* cut2cont;
static std::string string0;
static std::string string1;
static std::string string2;
static std::string string3;
static std::string string4;
static std::string string5;
static std::string string6;
static std::string string7;
static Int* posint1;

void init(PrologMachine* mach) override;
int Arity() override;
Code* Exec(PrologMachine* mach) override;
};

class pred_newprec_3_1 : public pred_newprec_3 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_newprec_3_2 : public pred_newprec_3 {
public:
Code* Exec(PrologMachine* mach) override;
};



#endif	//#ifndef PRED_NEWPREC_3
