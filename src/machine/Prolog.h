#ifndef PROLOG
#define PROLOG

#include "Term.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class Term;
class PredTable;
class FailProc;
class Call1Proc;
class Call2Proc;
class CutProc;
class TrueProc;
class Lexer;
class Var;

// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall

class Prolog {
	static void main(std::vector<std::string>& args);
};

class ChoicePointStackEntry {
public:
	Code* Alternative;
	int Trail = 0;
	std::vector<Term*> Arguments;
	long long TimeStamp = 0;

	virtual ~ChoicePointStackEntry() {
		delete Alternative;
	}

	ChoicePointStackEntry(std::vector<Term*>& args);
};

class UpperPrologMachine {
public:
	static PredTable* Predicates;
	static FailProc* Fail0;
	static Call1Proc* Call1;
	static Call2Proc* Call2;
	static CutProc* Cut2;
	static TrueProc* True0;
};

class PrologMachine : public UpperPrologMachine {
public:
	std::vector<Term*> Areg(32);
	std::vector<ChoicePointStackEntry*> ChoicePointStack;
	std::vector<Term*> TrailStack;
	// PrologTokenizer stdin ;
	long long TimeStamp = 0;
	int CUTB = 0;
	int CurrentChoice = 0;
	int TrailTop = 0;
	Lexer* lextoc = nullptr;
	Term* assumptions;
	Term* pendinggoals;
	int ExceptionRaised = 0;
	InputStream* currentinput;
	OutputStream* currentoutput;

	virtual ~PrologMachine() {
		delete lextoc;
		delete assumptions;
		delete pendinggoals;
		delete currentinput;
		delete currentoutput;
	}

	virtual void run();

	virtual Term* SolveGoal(Term* Goal);

	virtual void InitOnce();

	virtual void InitAlways();

	virtual Term* nexttoken();

	virtual Code* GetAlternative();

	virtual void FillAlternative(Code* Alt);

	virtual void RemoveChoice();

	virtual void RestoreArguments();

	virtual void UnTrail();

	virtual void TrailEntry(Term* po);

	virtual void CreateChoicePoint(std::vector<Term*>& args);

	virtual void DoCut(int CutTo);

	virtual Code* LoadPred(const std::string& name, int arity);
};

class PrologObject : public Term {

public:
	Term* Deref() override;

	std::string toString() override;

	bool Unify(Term* that) override;

	bool Bind(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;

	int Arity() override;

	void UnTrailSelf() override;

	Term* Copy(PrologMachine* m, long long t) override;

	virtual long long ValueOf();

	virtual bool islist();

	virtual bool isnil();

};

// the following is used while copying a term

class VarDict final : public Term {
public:
	Var* old,* newer;

	virtual ~VarDict() {
		delete old;
		delete newer;
	}

	VarDict(Var* changed, Var* copy);

	Term* Deref() override;

	void UnTrailSelf() override;

	Term* Copy(PrologMachine* m, long long t) override;
};

class HeapChoice final : public Term {
public:
	int CutTo = 0;

	HeapChoice(int c);
};

class SetArgTrail final : public Term {
public:
	Term* OldValue;
	Var* Which;
	PrologMachine* mach;

	virtual ~SetArgTrail() {
		delete OldValue;
		delete Which;
		delete mach;
	}

	SetArgTrail(Term* old, Var* changed, PrologMachine* m);

	void UnTrailSelf() override;

};

class PopPendingGoals final : public Term {
public:
	PrologMachine* mach;
	Term* old;

	virtual ~PopPendingGoals() {
		delete mach;
		delete old;
	}

	PopPendingGoals(PrologMachine* m, Term* o);

	void UnTrailSelf() override;

};

class PopAssumptions final : public Term {
public:
	PrologMachine* mach;
	Term* old;

	virtual ~PopAssumptions() {
		delete mach;
		delete old;
	}

	PopAssumptions(PrologMachine* m, Term* o);

	void UnTrailSelf() override;

};


#endif	//#ifndef PROLOG
