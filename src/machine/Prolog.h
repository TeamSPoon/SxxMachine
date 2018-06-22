#ifndef PROLOG
#define PROLOG

#include "Runnable.h"
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <cmath>
#include <cctype>
#include <stdexcept>
#include <any>
#include <typeinfo>
#include "exceptionhelper.h"
#include "stringhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class PrologObject;
class PredTable;
class FailProc;
class Call1Proc;
class Call2Proc;
class CutProc;
class TrueProc;
class PrologTokenizer;
class Lexer;
class InputStream;
class OutputStream;
class Thread;
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


class PrologFromJava {
  static void main(std::vector<std::string>& args);
};

static void main(std::vector<std::string>& args);
}

class ChoicePointStackEntry {
public:
	Code* Alternative;
  int Trail = 0;
  std::vector<PrologObject*> Arguments;
  long long TimeStamp = 0;

  virtual ~ChoicePointStackEntry() {
	  delete Alternative;
  }

  ChoicePointStackEntry(std::vector<PrologObject*>& args);
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
	std::vector<PrologObject*> Areg(32);
  std::vector<ChoicePointStackEntry*> ChoicePointStack;
  std::vector<PrologObject*> TrailStack;
  PrologTokenizer* stdin;
  long long TimeStamp = 0;
  int CUTB = 0;
  int CurrentChoice = 0;
  int TrailTop = 0;
  Lexer* lextoc = nullptr;
  PrologObject* assumptions;
  PrologObject* pendinggoals;
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


  virtual PrologObject* SolveGoal(PrologObject* Goal);

  virtual void InitOnce();

  virtual void InitAlways();

  virtual PrologObject* nexttoken();

  virtual Code* LoadPred(const std::string& Name, int arity); // arity is source arity before bin


  virtual Code* GetAlternative();

  virtual void FillAlternative(Code* Alt);

  virtual void RemoveChoice();

  virtual void RestoreArguments();

  virtual void UnTrail();

  virtual void TrailEntry(PrologObject* po);

  virtual void CreateChoicePoint(std::vector<PrologObject*>& args);

  virtual void DoCut(int CutTo);
};

class Code {
  public:
  virtual int Arity();

  virtual Code* Exec(PrologMachine* mach);

  virtual void init(PrologMachine* mach);
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

//class PredTable extends java.util.Hashtable {
//  PredTable() {
//    new Hashtable();
//  }
//  void InsertNameArity(String N, int A, Code Adr) {
//    put(A+N,Adr);
//  }
//  Code IsInPredTable(String N, int A) {
//    return (Code)get(A+N);
//  }
//}


//class PredTable extends Vector
//{
//  PredTable() { new Vector(); }
//
//  void InsertNameArity(String N, int A, Code Adr)
//	{ //System.err.println("!!!SIZE="+size()+"ADD"+N+"/"+A);
//	  if (size() <= A) setSize(A+1);
//	  Hashtable T = (Hashtable)elementAt(A);
//	  if (T == null)
//	  	{ T = new Hashtable();
//	  	  setElementAt(T,A);
//	  	}
//	  T.put(N,Adr);
//	}
//
//  Code IsInPredTable(String N, int A)
//	{ //System.err.println("!!!FIND"+N+"/"+A);
//	  if(A>=size()) return null;
//	  return (Code)((Hashtable)elementAt(A)).get(N);
//	}
//}

class PredTable {
public:
	std::vector<std::unordered_map> tables;

  PredTable();

  virtual void InsertNameArity(const std::string& N, int A, Code* Adr);

  virtual Code* IsInPredTable(const std::string& N, int A);
};



class PrologObject {


  public:
  virtual PrologObject* Deref();

  std::string toString() override;

  virtual bool Unify(PrologObject* that);

  virtual bool Bind(PrologObject* that);

  virtual bool Equal(PrologObject* that);

  virtual std::string GetName();

  virtual int Arity();

  virtual void UnTrailSelf();

  virtual PrologObject* Copy(PrologMachine* m, long long t);

  virtual long long ValueOf();

  virtual bool islist();

  virtual bool isnil();

};


class Var final : public PrologObject {
public:
	std::any Refers;
  long long timestamp = 0;
  PrologMachine* mach;

  virtual ~Var() {
	  delete mach;
  }

  Var(PrologMachine* machin);

  Var(PrologMachine* machin, long long t);

  PrologObject* Copy(PrologMachine* m, long long t) override;

  PrologObject* Deref() override;

  void UnTrailSelf() override;

  std::string toString() override;

  bool Bind(PrologObject* that) override;

  bool Unify(PrologObject* that) override;

  bool Equal(PrologObject* that) override;

  std::string GetName() override;
};

class FrozenVar final : public PrologObject {
public:
	PrologObject* Refers;
  long long timestamp = 0;
  PrologMachine* mach;
  PrologObject* goals;

  virtual ~FrozenVar() {
	  delete Refers;
	  delete mach;
	  delete goals;
  }

  FrozenVar(PrologMachine* machin, PrologObject* action);

  FrozenVar(PrologMachine* machin, long long t, PrologObject* action);

  PrologObject* Copy(PrologMachine* m, long long t) override;

  PrologObject* Deref() override;

  void UnTrailSelf() override;

  std::string toString() override;

  bool Bind(PrologObject* that) override;

  bool Unify(PrologObject* that) override;

  bool Equal(PrologObject* that) override;

  std::string GetName() override;
};

class Int final : public PrologObject {
public:
	long long IntValue = 0;

  Int(long long i);

  PrologObject* Copy(PrologMachine* m, long long t) override;

  long long ValueOf() override;

  PrologObject* Deref() override;

  std::string toString() override;

  bool Unify(PrologObject* that) override;

  bool Equal(PrologObject* that) override;

  std::string GetName() override;

};


class Const final : public PrologObject {
  public:
  std::string Name;

  long long ValueOf() override;

  Const(const std::string& N);

  PrologObject* Copy(PrologMachine* m, long long t) override;

  PrologObject* Deref() override;

  std::string toString() override;

  bool Unify(PrologObject* that) override;

  bool Equal(PrologObject* that) override;

  int Arity() override;

  std::string GetName() override;

  bool isnil() override;

};

class Continuation final : public PrologObject {
  public:
  Code* code;
  std::vector<PrologObject*> Args;

  virtual ~Continuation() {
	  delete code;
  }

  Continuation(std::vector<PrologObject*>& args, Code* c);

  PrologObject* Deref() override;

  bool Unify(PrologObject* that) override;

};


class Funct final : public PrologObject {
public:
	std::vector<PrologObject*> Arguments;
  std::string Name;

  PrologObject* Copy(PrologMachine* m, long long t) override;

  Funct(const std::string& N);

  Funct(const std::string& N, int arity);

  Funct(const std::string& N, PrologObject* a1);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15, PrologObject* a16);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15, PrologObject* a16, PrologObject* a17);

  Funct(const std::string& N, PrologObject* a1, PrologObject* a2, PrologObject* a3, PrologObject* a4, PrologObject* a5, PrologObject* a6, PrologObject* a7, PrologObject* a8, PrologObject* a9, PrologObject* a10, PrologObject* a11, PrologObject* a12, PrologObject* a13, PrologObject* a14, PrologObject* a15, PrologObject* a16, PrologObject* a17, PrologObject* a18);




  Funct(const std::string& N, std::vector<PrologObject*>& args);

  long long ValueOf() override;

  PrologObject* Deref() override;

  bool islist(int i, const std::string& Name);

  bool islist() override;



  std::string listify(PrologObject* T);


  std::string toString() override;

  bool Unify(PrologObject* that) override;

  bool Equal(PrologObject* that) override;

  int Arity() override;

  std::string GetName() override;
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

  PrologObject* Deref() override;

  void UnTrailSelf() override;

  PrologObject* Copy(PrologMachine* m, long long t) override;
};

class HeapChoice final : public PrologObject {
  public:
  int CutTo = 0;

  HeapChoice(int c);
};

class SetArgTrail final : public PrologObject {
  public:
  PrologObject* OldValue;
  Var* Which;
  PrologMachine* mach;

  virtual ~SetArgTrail() {
	  delete OldValue;
	  delete Which;
	  delete mach;
  }

  SetArgTrail(PrologObject* old, Var* changed, PrologMachine* m);

  void UnTrailSelf() override;

};

class PopPendingGoals final : public PrologObject {
public:
	PrologMachine* mach;
  PrologObject* old;

  virtual ~PopPendingGoals() {
	  delete mach;
	  delete old;
  }

  PopPendingGoals(PrologMachine* m, PrologObject* o);

  void UnTrailSelf() override;

};

class PopAssumptions final : public PrologObject {
public:
	PrologMachine* mach;
  PrologObject* old;

  virtual ~PopAssumptions() {
	  delete mach;
	  delete old;
  }

  PopAssumptions(PrologMachine* m, PrologObject* o);

  void UnTrailSelf() override;

};

////////////// lexer


class PrologTokenizer : public java::io::StreamTokenizer {
  public:
  PrologTokenizer(InputStream* I);
};


class Lexer : public java::io::StreamTokenizer {

public:
PrologMachine* prologmachine;

  virtual ~Lexer() {
	  delete prologmachine;
	  delete Somethingwrong;
  }

  Lexer(InputStream* I, PrologMachine* p) throw(std::exception);

  Lexer(const std::string& s, PrologMachine* p) throw(std::exception);

  Lexer(PrologMachine* p) throw(std::exception);

  static std::string anonymous;

  static std::string char2string(int c);

  bool inClause = false;

  virtual bool atEOF();

  virtual bool atEOC();

  virtual PrologObject* make_const();

//  PrologObject make_string() {
//    return new stringToken(sval);
//  }

  virtual PrologObject* make_int();

  virtual PrologObject* make_real();

  virtual PrologObject* make_var();

  virtual void whitespaceChar(char c);

  virtual void wordChar(char c);

  std::unordered_map dict;

  PrologObject* Somethingwrong = new Funct((std::string("exception")).intern(),new Int(666));

  private:
  PrologObject* next0() throw(std::exception);

  public:
  virtual PrologObject* next();

};



#endif	//#ifndef PROLOG
