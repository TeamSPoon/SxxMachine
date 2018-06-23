#ifndef PROLOG
#define PROLOG

#include "Runnable.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <any>
#include <typeinfo>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class Term;
class PredTable;
class FailProc;
class Call1Proc;
class Call2Proc;
class CutProc;
class TrueProc;
class PrologTokenizer;
class Lexer;
class Var;
class ClassNotFoundException;
class IllegalAccessException;
class InstantiationException;
class Name;

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

class PrologMachine : public UpperPrologMachine, public Runnable {
public:
	std::vector<Term*> Areg(32);
	std::vector<ChoicePointStackEntry*> ChoicePointStack;
	std::vector<Term*> TrailStack;
	PrologTokenizer* stdin;
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
		delete stdin;
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

	virtual Code* LoadPred(const std::string& Name, int arity); // arity is source arity before bin

	virtual Code* GetAlternative();

	virtual void FillAlternative(Code* Alt);

	virtual void RemoveChoice();

	virtual void RestoreArguments();

	virtual void UnTrail();

	virtual void TrailEntry(Term* po);

	virtual void CreateChoicePoint(std::vector<Term*>& args);

	virtual void DoCut(int CutTo);
};

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

// there is a choice between 3 predicate table implementations
// we leave them all here, until we decide which is best

// class PredTable extends java.util.Hashtable {
// PredTable() {
// new Hashtable();
// }
// void InsertNameArity(String N, int A, Code Adr) {
// put(A+N,Adr);
// }
// Code IsInPredTable(String N, int A) {
// return (Code)get(A+N);
// }
// }

// class PredTable extends Vector
// {
// PredTable() { new Vector(); }
//
// void InsertNameArity(String N, int A, Code Adr)
// { //System.err.println("!!!SIZE="+size()+"ADD"+N+"/"+A);
// if (size() <= A) setSize(A+1);
// Hashtable T = (Hashtable)elementAt(A);
// if (T == null)
// { T = new Hashtable();
// setElementAt(T,A);
// }
// T.put(N,Adr);
// }
//
// Code IsInPredTable(String N, int A)
// { //System.err.println("!!!FIND"+N+"/"+A);
// if(A>=size()) return null;
// return (Code)((Hashtable)elementAt(A)).get(N);
// }
// }
/*
class PredTable {
	Hashtable tables[];

	PredTable() {
		tables = new Hashtable[33];
	}

	void InsertNameArity(String N, int A, Code Adr) {
		Hashtable T = tables[A];
		if (T == null) {
			tables[A] = T = new Hashtable();
		}
		T.put(N, Adr);
	}

	Code IsInPredTable(String N, int A) {
		if (tables[A] == null)
			return null;
		return (Code) (tables[A].get(N));
	}
}*/

class Term {

public:
	virtual Term* Deref();

	std::string toString() override;

	virtual bool Unify(Term* that);

	virtual bool Bind(Term* that);

	virtual bool Equal(Term* that);

	virtual std::string GetName();

	virtual int Arity();

	virtual void UnTrailSelf();

	virtual Term* Copy(PrologMachine* m, long long t);

	virtual long long LongValue();

	virtual bool IsList();

	virtual bool IsNil();

	static Term* Compound(const std::string& string6, std::vector<Term> &terms);

	static Term* Var(PrologMachine* mach);

	virtual Term* findOrAttrValue(PrologMachine* mach, bool b, Term* deref);

	virtual void putAttrValue(PrologMachine* mach, Term* deref, Term* deref2);

	virtual void setAttrs(PrologMachine* mach, Term* deref);

};

class Var final : public Term {
public:
	std::any Refers;
	long long timestamp = 0;
	PrologMachine* mach;

	virtual ~Var() {
		delete mach;
	}

	Var(PrologMachine* machin);

	Var(PrologMachine* machin, long long t);

	Term* Copy(PrologMachine* m, long long t) override;

	Term* Deref() override;

	void UnTrailSelf() override;

	std::string toString() override;

	bool Bind(Term* that) override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;
};

class FrozenVar final : public Term {
public:
	Term* Refers;
	long long timestamp = 0;
	PrologMachine* mach;
	Term* goals;

	virtual ~FrozenVar() {
		delete Refers;
		delete mach;
		delete goals;
	}

	FrozenVar(PrologMachine* machin, Term* action);

	FrozenVar(PrologMachine* machin, long long t, Term* action);

	Term* Copy(PrologMachine* m, long long t) override;

	Term* Deref() override;

	void UnTrailSelf() override;

	std::string toString() override;

	bool Bind(Term* that) override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;
};

class Int final : public Term {
public:
	long long IntValue = 0;

	Int(long long i);

	Term* Copy(PrologMachine* m, long long t) override;

	long long LongValue() override;

	Term* Deref() override;

	std::string toString() override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	std::string GetName() override;

};

class Const final : public Term {
public:
	std::string Name;

	long long LongValue() override;

	Const(const std::string& N);

	Term* Copy(PrologMachine* m, long long t) override;

	Term* Deref() override;

	std::string toString() override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	int Arity() override;

	std::string GetName() override;

	bool IsNil() override;

	static std::string IStr(const std::string& string);

	static Term* Intern(const std::string& N);

};

class Continuation final : public Term {
public:
	Code* code;
	std::vector<Term*> Args;

	virtual ~Continuation() {
		delete code;
	}

	Continuation(std::vector<Term*>& args, Code* c);

	Term* Deref() override;

	bool Unify(Term* that) override;

};

class Funct final : public Term {
public:
	std::vector<Term*> Arguments;
	std::string Name;

	Term* Copy(PrologMachine* m, long long t) override;

	Funct(const std::string& N);

	Funct(const std::string& N, int arity);

	Funct(const std::string& N, Term* a1);

	Funct(const std::string& N, Term* a1, Term* a2);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17);

	Funct(const std::string& N, Term* a1, Term* a2, Term* a3, Term* a4, Term* a5, Term* a6, Term* a7, Term* a8, Term* a9, Term* a10, Term* a11, Term* a12, Term* a13, Term* a14, Term* a15, Term* a16, Term* a17, Term* a18);

	Funct(const std::string& N, std::vector<Term*>& args);

	long long LongValue() override;

	Term* Deref() override;

	bool islist(int i, const std::string& Name);

	bool IsList() override;

	std::string listify(Term* T);

	std::string toString() override;

	bool Unify(Term* that) override;

	bool Equal(Term* that) override;

	int Arity() override;

	std::string GetName() override;
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

////////////// lexer

class PrologTokenizer : public java::io::StreamTokenizer {
public:
	PrologTokenizer(InputStream* I);
};


#endif	//#ifndef PROLOG
