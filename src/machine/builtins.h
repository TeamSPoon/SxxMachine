#ifndef BUILTINS
#define BUILTINS

#include "Code.h"
#include "Term.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class PrologMachine;
class Var;
class Term;

// some builtins written in Java for Prolog
// Bart Demoen, Paul Tarau Aug 1996 Moncton
// there is a mapping from special names (like <) to tokens
// with only letters - the compiler must be aware of that mapping

// smallerthan implements </2

class pred_smallerthan_2 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_smallerthan_2(PrologMachine* mach);
};

// smallerorequal implements =</2

class pred_smallerorequal_2 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

// arithequal implements =:=/2

class pred_arithequal_2 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

// arithdifferent implements =\= /2

class pred_arithdifferent_2 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

// is implements is/2

class pred_is_2 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_is_2(PrologMachine* mach);
};

// unify implements =/2

class pred_unify_2 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_unify_2(PrologMachine* mach);
};

// univ implements the left direction of =../2

class pred_univ_3 : public Code {
public:
	int Arity() override;

	// Areg[0] is a free variable
	// Areg[1] is a Const
	// Areg[2] is a list of PrologObjects

	static Function* exec_static(PrologMachine* mach);
};

class pred_write_1 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_write_1(PrologMachine* mach);
};

class pred_nl_0 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class pred_functor_3 : public Code {
public:
	int Arity() override;

	static bool DoFunctor3(PrologMachine* mach, Term* arg1, Term* arg2, Term* arg3);

	static Function* exec_static(PrologMachine* mach);
};

class pred_arg_3 : public Code {
public:
	int Arity() override;

	static bool DoArg3(PrologMachine* mach, Term* arg1, Term* arg2, Term* arg3);

	static Function* exec_static(PrologMachine* mach);
};

class pred_nexttoken_1 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_nexttoken_1(PrologMachine* mach);
};

class pred_cputime_1 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_cputime_1(PrologMachine* mach);
};

class findall_list : public Term {
public:
	Var* uptonowbegin,* uptonowend;
	long long time = 0;

	virtual ~findall_list() {
		delete uptonowbegin;
		delete uptonowend;
	}

	findall_list(PrologMachine* mach);

	Term* Deref() override;

	bool Unify(Term* that) override;

	std::string toString() override;

};

class pred_initfindall_1 : public Code {
public:
	static Code* entry_code;

	int Arity() override;

	static Code* exec_pred_initfindall_1(PrologMachine* mach);
};

class pred_addfindall_2 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class pred_retrievefindall_2 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_retrievefindall_2(PrologMachine* mach);
};

class pred_var_equal_2 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class pred_trail_1 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class pred_choice_1 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class pred_type_of_2 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_type_of_2(PrologMachine* mach);
};

class pred_assume_1 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_assume_1(PrologMachine* mach);
};

class pred_allassumed_1 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_allassumed_1(PrologMachine* mach);
};

class pred_get0_1 : public Code {
public:
	int Arity() override;

	static Code* exec_pred_get0_1(PrologMachine* mach);
};

class pred_halt_0 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class pred_setarg_3 : public Code {
public:
	int Arity() override;

	static bool DoSetArg3(PrologMachine* mach, Term* arg1, Term* arg2, Term* arg3);

	static Function* exec_static(PrologMachine* mach);
};

class pred_compare_3 : public Code {
public:
	static pred_compare_3* entry_code;

	int Arity() override;

	// Int < Const < Funct < Var

	static int Compare(Term* t, Term* s);

	static Code* exec_pred_compare_3(PrologMachine* mach);
};

class pred_freeze_internal_2 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class pred_execcontinuation_0 : public Code {
public:
	static Code* entry_code;

	int Arity() override;

	static* std::function<Function*(PrologMachine*);
};

class pred_frozen_2 : public Code {
public:
	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};


#endif	//#ifndef BUILTINS
