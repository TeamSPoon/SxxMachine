#ifndef CODE
#define CODE

#include <string>
#include <vector>
#include <iostream>
#include <any>
#include <typeinfo>
#include <functional>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class PrologMachine;
class Var;
class Term;
class Const;
class Funct;
class Method;
class NoSuchMethodException;
class SecurityException;

// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall
class Code : public std::function<Function*(PrologMachine*)> {

public:
	static Var* V(PrologMachine* mach);

	static Funct* F(Const* name, std::vector<Term> &args);

	static Funct* F(const std::string& name, std::vector<Term> &args);

private:
	static Method* findMethod(std::type_info c, const std::string& methodName);

public:
	static Method* GetMethod(std::type_info c, std::any o);

	virtual internal public* std::function<Function*(PrologMachine*);

	virtual int Arity();

	virtual void Debug(Code* code);

	virtual void Init(PrologMachine* mach);

};

class FailProc : public Code {
public:
	int Arity() override;

	FailProc(PrologMachine* mach);

	virtual internal public* std::function<Function*(PrologMachine*);

};

class CutProc : public Code {
public:
	int Arity() override;

	CutProc(PrologMachine* mach);

	static* std::function<Function*(PrologMachine*);
};

class TrueProc : public Code {
public:
	int Arity() override;

	TrueProc(PrologMachine* mach);

	static* std::function<Function*(PrologMachine*);

};

class Call1Proc : public Code {
public:
	int Arity() override;

	Call1Proc(PrologMachine* mach);

	static* std::function<Function*(PrologMachine*);
};

class Call2Proc : public Code {
public:
	int Arity() override;

	Call2Proc(PrologMachine* mach);

	static* std::function<Function*(PrologMachine*);
};

class Undoable {

public:
	virtual void Unwind() = 0;

};


#endif	//#ifndef CODE
