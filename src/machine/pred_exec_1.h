#ifndef PRED_EXEC_1
#define PRED_EXEC_1

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

class pred_exec_1 : public Code {
public:
	static Code* entry_code;
static Code* cl1;
static Code* cl2;
static Code* cl3;
static Code* cl4;
static Code* cl5;
static Code* cl6;
static Code* cut2cont;
static Code* specialgoal3cont;
static Code* var2cont;
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
static std::string string10;
static std::string string11;
static Int* posint1;

void init(PrologMachine* mach) override;
int Arity() override;
Code* Exec(PrologMachine* mach) override;
};

class pred_exec_1_1 : public pred_exec_1 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_exec_1_2 : public pred_exec_1 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_exec_1_3 : public pred_exec_1 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_exec_1_4 : public pred_exec_1 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_exec_1_5 : public pred_exec_1 {
public:
Code* Exec(PrologMachine* mach) override;
};

class pred_exec_1_6 : public pred_exec_1 {
public:
Code* Exec(PrologMachine* mach) override;
};



#endif	//#ifndef PRED_EXEC_1
