#ifndef CODE
#define CODE

#include <string>
#include <vector>
#include <iostream>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class PrologMachine;

// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall

class Code {
public:
	virtual int Arity();

	virtual Code* Exec(PrologMachine* mach);

	virtual void Init(PrologMachine* mach);

};

class FailProc : public Code {
public:
	int Arity() override;

	FailProc(PrologMachine* mach);

	Code* Exec(PrologMachine* mach) override;

};

class CutProc : public Code {
public:
	int Arity() override;

	CutProc(PrologMachine* mach);

	Code* Exec(PrologMachine* mach) override;
};

class TrueProc : public Code {
public:
	int Arity() override;

	TrueProc(PrologMachine* mach);

	Code* Exec(PrologMachine* mach) override;

};

class Call1Proc : public Code {
public:
	int Arity() override;

	Call1Proc(PrologMachine* mach);

	Code* Exec(PrologMachine* mach) override;
};

class Call2Proc : public Code {
public:
	int Arity() override;

	Call2Proc(PrologMachine* mach);

	Code* Exec(PrologMachine* mach) override;
};


#endif	//#ifndef CODE
