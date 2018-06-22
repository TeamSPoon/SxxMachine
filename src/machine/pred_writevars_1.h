#ifndef PRED_WRITEVARS_1
#define PRED_WRITEVARS_1

#include "Prolog.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class PrologMachine;

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_writevars_1 : public Code {
public:
	static Code* entry_code;
static Code* cl1;
static Code* cl2;
static Code* cl3;
static Code* write2cont;
static std::string string0;
static std::string string1;
static std::string string2;
static std::string string3;
static std::string string4;
static std::string string5;
static std::string string6;
static std::string string7;
static std::string string8;
static std::string string9;

void init(PrologMachine* mach) override;
int Arity() override;
Code* Exec(PrologMachine* mach) override;
};

class pred_writevars_1_1 : public pred_writevars_1 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_writevars_1_2 : public pred_writevars_1 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_writevars_1_3 : public pred_writevars_1 {
public:
Code* Exec(PrologMachine* mach) override;
};



#endif	//#ifndef PRED_WRITEVARS_1
