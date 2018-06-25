#ifndef PROLOG
#define PROLOG

#include "Lexer.h"
#include "Term.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <typeinfo>
#include <functional>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class PrologMachine;
class PredTable;
class FailProc;
class Call1Proc;
class Call2Proc;
class CutProc;
class TrueProc;
class Term;
class ChoicePointStackEntry;
class PrologTokenizer;
class Lexer;
class Code;
class Undoable;
class Var;
class ClassNotFoundException;
class IllegalAccessException;
class InstantiationException;
class Appendable;

// jProlog 0.1 Copyright (C) Bart Demoen, Paul Tarau 1996
// Prolog implementation in Java
// KUL and CUM

// changes by Bart Demoen - 25 Jan 1997 - for calling Prolog from within Java
// allows to make a new PrologMachine, start a goal and get answers back
// all at once as with findall


class Prolog {
public:
	static PrologMachine* M;

	static void main(std::vector<std::string>& args);

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
	virtual ~PrologMachine() {
		delete stdin;
		delete lextoc;
		delete assumptions;
		delete pendingGoals;
		delete currentinput;
		delete currentoutput;
	}

	virtual PredTable* getPredicates();

	std::vector<Term*> Areg(32);
	std::vector<ChoicePointStackEntry*> ChoicePointStack;
	std::vector<Term*> TrailStack;
	Lexer::PrologTokenizer* stdin;
	long long TimeStamp = 0;
	int CUTB = 0;
	int CurrentChoice = 0;
	int TrailTop = 0;
	Lexer* lextoc = nullptr;
	Term* assumptions;
	Term* pendingGoals;
	int ExceptionRaised = 0;
	InputStream* currentinput;
	OutputStream* currentoutput;

	virtual void run();

	static int GetArity(std::function<Function*(PrologMachine*)>& code);

	static void Debug(std::function<Function*(PrologMachine*)>& code);

	virtual Term* SolveGoal(Term* Goal);

	virtual void InitOnce();

	virtual void InitAlways();

	virtual Term* nexttoken();

	virtual Function* LoadPred(const std::string& Name, const int& arity); // arity is source arity before bin

	virtual internal* std::function<Function*(PrologMachine*);

	virtual void FillAlternative(std::function<Function*(PrologMachine*)>& Alt);

	virtual void RemoveChoice();

	virtual void RestoreArguments();

	virtual void UnTrail();

	virtual void TrailEntry(Term* po);

	virtual void CreateChoicePoint(std::vector<Term*>& args);

	virtual void DoCut(const int& CutTo);

	virtual Code* LoadPred1(const std::string& name, const int& arity);

	virtual void push1(Undoable* undoable);

	virtual void Reg(const int& i);

	virtual std::vector<Term*> RegPull(const int& i);

public:
	class ChoicePointStackEntry {
	private:
		PrologMachine* outerInstance;

	public:
		std::function<Function*(PrologMachine*)> Alternative;
		int Trail = 0;
		std::vector<Term*> Arguments;
		long long TimeStamp = 0;

		virtual ~ChoicePointStackEntry() {
			delete Alternative;
			delete outerInstance;
		}

		ChoicePointStackEntry(PrologMachine* outerInstance, std::vector<Term*>& args);
	};

};

class PrologObject : public Term {

public:
	Term* Deref() override;

	void formattedOutput(const int& formatFlags, Appendable* buffer) throw(IOException) override;

	bool Unify(Term* that) override;

	bool Bind(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;

	int Arity() override;

	void UnTrailSelf() override;

	Term* Copy(PrologMachine* m, long long t) override;

	long long LongValue() override;

	bool IsList() override;

	bool IsNil() override;

};

// the following is used while copying a term

class VarDict final : public PrologObject {
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

class HeapChoice final : public PrologObject {
public:
	int CutTo = 0;

	HeapChoice(const int& c);
};

class SetArgTrail final : public PrologObject {
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

class PopPendingGoals final : public PrologObject {
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

class PopAssumptions final : public PrologObject {
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
