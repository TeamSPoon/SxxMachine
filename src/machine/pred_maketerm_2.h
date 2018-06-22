#ifndef PRED_MAKETERM_2
#define PRED_MAKETERM_2

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

class pred_maketerm_2 : public Code {
public:
	static Code* entry_code;
static Code* cl1;
static Code* maketerm4cont;
static std::string string0;
static std::string string1;
static Int* posint1200;

void init(PrologMachine* mach) override;
int Arity() override;
Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_2_1 : public pred_maketerm_2 {
public:
Code* Exec(PrologMachine* mach) override;
};



#endif	//#ifndef PRED_MAKETERM_2
