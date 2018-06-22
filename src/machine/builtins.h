#ifndef BUILTINS
#define BUILTINS

#include "Prolog.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class PrologMachine;
class Code;
class PrologObject;
class Var;

// some builtins written in Java for Prolog
// Bart Demoen, Paul Tarau Aug 1996 Moncton
// there is a mapping from special names (like <) to tokens
// with only letters - the compiler must be aware of that mapping


// smallerthan implements </2

class pred_smallerthan_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

// smallerorequal implements =</2

class pred_smallerorequal_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

// arithequal implements =:=/2

class pred_arithequal_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

// arithdifferent implements =\= /2

class pred_arithdifferent_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

// is implements is/2

class pred_is_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};


// unify implements =/2

class pred_unify_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};


// univ implements the left direction of =../2

class pred_univ_3 : public Code {
  public:
  int Arity() override;

	// Areg[0] is a free variable
	// Areg[1] is a Const
	// Areg[2] is a list of PrologObjects

  Code* Exec(PrologMachine* mach) override;
};

class pred_write_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_nl_0 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_functor_3 : public Code {
  public:
  int Arity() override;

  virtual bool DoFunctor3(PrologMachine* mach, PrologObject* arg1, PrologObject* arg2, PrologObject* arg3);

  Code* Exec(PrologMachine* mach) override;
};


class pred_arg_3 : public Code {
  public:
  int Arity() override;

  virtual bool DoArg3(PrologMachine* mach, PrologObject* arg1, PrologObject* arg2, PrologObject* arg3);

  Code* Exec(PrologMachine* mach) override;
};

class pred_nexttoken_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};


class pred_cputime_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class findall_list : public PrologObject {
public:
	Var* uptonowbegin,* uptonowend;
  long long time = 0;

  virtual ~findall_list() {
	  delete uptonowbegin;
	  delete uptonowend;
  }

  findall_list(PrologMachine* mach);

  PrologObject* Deref() override;

  bool Unify(PrologObject* that) override;

  std::string toString() override;

};

class pred_initfindall_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_addfindall_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_retrievefindall_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};


class pred_var_equal_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_trail_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_choice_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_type_of_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};


class pred_assume_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_allassumed_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_get0_1 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};


class pred_halt_0 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_setarg_3 : public Code {
  public:
  int Arity() override;

  virtual bool DoSetArg3(PrologMachine* mach, PrologObject* arg1, PrologObject* arg2, PrologObject* arg3);

  Code* Exec(PrologMachine* mach) override;
};

class pred_compare_3 : public Code {
  public:
  int Arity() override;

  //	Int < Const < Funct < Var

  virtual int Compare(PrologObject* t, PrologObject* s);

  Code* Exec(PrologMachine* mach) override;
};


class pred_freeze_internal_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_execcontinuation_0 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};

class pred_frozen_2 : public Code {
  public:
  int Arity() override;

  Code* Exec(PrologMachine* mach) override;
};


#endif	//#ifndef BUILTINS
