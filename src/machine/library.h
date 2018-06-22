#ifndef LIBRARY
#define LIBRARY

#include "Code.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Code;
class PrologMachine;
class Int;

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_ap_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_ap_3_1 : public pred_ap_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_ap_3_2 : public pred_ap_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_append_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_append_3_1 : public pred_append_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_append_3_2 : public pred_append_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_assumed_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* allassumed2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_assumed_1_1 : public pred_assumed_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_assumeduring_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* assume2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_assumeduring_2_1 : public pred_assumeduring_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_atom_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_atom_1_1 : public pred_atom_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_atomic_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_atomic_1_1 : public pred_atomic_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_atomic2_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_atomic2_1_1 : public pred_atomic2_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_atomic2_1_2 : public pred_atomic2_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_collectvars_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	//static Code cut2cont;
	//static Code pred_noteq_3.INST;
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
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_collectvars_3_1 : public pred_collectvars_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_collectvars_3_2 : public pred_collectvars_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_collectvars_3_3 : public pred_collectvars_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_copy_term_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* findall4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_copy_term_2_1 : public pred_copy_term_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

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
	//static Code cut2cont;
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

	void Init(PrologMachine* mach) override;

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

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_execdisj_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	static Code* cl4;
	//static Code cut2cont;
	static Code* exec2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_execdisj_2_1 : public pred_execdisj_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_execdisj_2_2 : public pred_execdisj_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_execdisj_2_3 : public pred_execdisj_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_execdisj_2_4 : public pred_execdisj_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_execpendinggoals_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* exec2cont;
	static Code* execcontinuation1cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_execpendinggoals_1_1 : public pred_execpendinggoals_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_execpendinggoals_1_2 : public pred_execpendinggoals_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_findall2_4 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* exec2cont;
	static Code* retrievefindall3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_findall2_4_1 : public pred_findall2_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_findall2_4_2 : public pred_findall2_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_findall_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* initfindall2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_findall_3_1 : public pred_findall_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_freeze_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* exec2cont;
	static Code* var2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_freeze_2_1 : public pred_freeze_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_freeze_2_2 : public pred_freeze_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_getargs_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* ap4cont;
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
	static Int* posint900;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_getargs_2_1 : public pred_getargs_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_getargs_2_2 : public pred_getargs_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_infix_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	static Code* cl4;
	static Code* cl5;
	static Code* cl6;
	static Code* cl7;
	static Code* cl8;
	static Code* cl9;
	static Code* cl10;
	static Code* cl11;
	static Code* cl12;
	static Code* cl13;
	static Code* cl14;
	static Code* cl15;
	static Code* cl16;
	static Code* cl17;
	static Code* cl18;
	static Code* cl19;
	static Code* cl20;
	static Code* cl21;
	static Code* cl22;
	static Code* cl23;
	static Code* cl24;
	static Code* cl25;
	static Code* cl26;
	static Code* cl27;
	static Code* cl28;
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
	static std::string string12;
	static std::string string13;
	static std::string string14;
	static std::string string15;
	static std::string string16;
	static std::string string17;
	static std::string string18;
	static std::string string19;
	static std::string string20;
	static std::string string21;
	static std::string string22;
	static std::string string23;
	static std::string string24;
	static std::string string25;
	static std::string string26;
	static std::string string27;
	static std::string string28;
	static std::string string29;
	static std::string string30;
	static std::string string31;
	static std::string string32;
	static std::string string33;
	static Int* posint200;
	static Int* posint300;
	static Int* posint400;
	static Int* posint500;
	static Int* posint550;
	static Int* posint700;
	static Int* posint1000;
	static Int* posint1050;
	static Int* posint1100;
	static Int* posint1200;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_1 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_2 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_3 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_4 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_5 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_6 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_7 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_8 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_9 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_10 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_11 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_12 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_13 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_14 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_15 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_16 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_17 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_18 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_19 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_20 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_21 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_22 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_23 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_24 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_25 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_26 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_27 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_infix_3_28 : public pred_infix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_integer_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_integer_1_1 : public pred_integer_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_loop_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static Code* is3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static Int* posint0;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_loop_1_1 : public pred_loop_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_loop_1_2 : public pred_loop_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_m1_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* var2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_m1_2_1 : public pred_m1_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_m1_2_2 : public pred_m1_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_maketerm_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* maketerm4cont;
	static std::string string0;
	static std::string string1;
	static Int* posint1200;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_2_1 : public pred_maketerm_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_maketerm_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	static Code* cl4;
	static Code* cl5;
	static Code* cl6;
	static Code* cl7;
	static Code* cl8;
	static Code* cl9;
	static Code* cl10;
	static Code* cl11;
	static Code* ap4cont;
	//static Code cut2cont;
	static Code* getargs3cont;
	static Code* prefix4cont;
	static Code* unify3cont;
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
	static std::string string12;
	static std::string string13;
	static std::string string14;
	static std::string string15;
	static std::string string16;
	static std::string string17;
	static std::string string18;
	static std::string string19;
	static std::string string20;
	static std::string string21;
	static std::string string22;
	static Int* posint1;
	static Int* posint900;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_1 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_2 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_3 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_4 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_5 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_6 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_7 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_8 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_9 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_10 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_maketerm_3_11 : public pred_maketerm_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_max_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	static Code* smallerthan3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_max_3_1 : public pred_max_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_max_3_2 : public pred_max_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_max_3_3 : public pred_max_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_newprec_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static std::string string7;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_newprec_3_1 : public pred_newprec_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_newprec_3_2 : public pred_newprec_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_newprec_4 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static std::string string7;
	static std::string string8;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_newprec_4_1 : public pred_newprec_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_newprec_4_2 : public pred_newprec_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_newprec_4_3 : public pred_newprec_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_not_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* exec2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_not_1_1 : public pred_not_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_not_1_2 : public pred_not_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_noteq_2 : public Code {
public:
	static Code* INST;
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_noteq_2_1 : public pred_noteq_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_noteq_2_2 : public pred_noteq_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_notmore_0 : public Code {
public:
	static Code* cl1;
	static Code* cl2;
	static Code* get02cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static std::string string7;
	static Int* posint1;
	static Int* posint10;
	static Code* entry_code;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_notmore_0_1 : public pred_notmore_0 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_notmore_0_2 : public pred_notmore_0 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_notvmember_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_notvmember_2_1 : public pred_notvmember_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_notvmember_2_2 : public pred_notvmember_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_notvmember_2_3 : public pred_notvmember_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_nrev_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_nrev_2_1 : public pred_nrev_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_nrev_2_2 : public pred_nrev_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_or_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* exec2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_or_2_1 : public pred_or_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_or_2_2 : public pred_or_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_prefix_3 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	static Code* cl4;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static std::string string7;
	static Int* posint500;
	static Int* posint1200;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_prefix_3_1 : public pred_prefix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_prefix_3_2 : public pred_prefix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_prefix_3_3 : public pred_prefix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_prefix_3_4 : public pred_prefix_3 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_read_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* nexttoken2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_read_1_1 : public pred_read_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_readall_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	//static Code cut2cont;
	static Code* nexttoken2cont;
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
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_readall_2_1 : public pred_readall_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_readall_2_2 : public pred_readall_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_readall_2_3 : public pred_readall_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_smeq_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_smeq_1_1 : public pred_smeq_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_smeq_1_2 : public pred_smeq_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_smgr_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_smgr_1_1 : public pred_smgr_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_smgr_1_2 : public pred_smgr_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_sort_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cut2cont;
	static Code* split5cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_sort_2_1 : public pred_sort_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_sort_2_2 : public pred_sort_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_specialgoal_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	static Code* cl4;
	static Code* cl5;
	static Code* cl6;
	static Code* cl7;
	static Code* cl8;
	static Code* cl9;
	static Code* cl10;
	static Code* cl11;
	static Code* cl12;
	//static Code cut2cont;
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
	static std::string string12;
	static std::string string13;
	static std::string string14;
	static std::string string15;
	static std::string string16;
	static std::string string17;
	static std::string string18;
	static std::string string19;
	static std::string string20;
	static std::string string21;
	static std::string string22;
	static std::string string23;
	static std::string string24;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_1 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_2 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_3 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_4 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_5 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_6 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_7 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_8 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_9 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_10 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_11 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_specialgoal_2_12 : public pred_specialgoal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_split_4 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* cl3;
	//static Code cut2cont;
	static Code* smallerthan3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_split_4_1 : public pred_split_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_split_4_2 : public pred_split_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_split_4_3 : public pred_split_4 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_statistics_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cputime2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_statistics_2_1 : public pred_statistics_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_termequal_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_termequal_2_1 : public pred_termequal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_termgreaterequal_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_termgreaterequal_2_1 : public pred_termgreaterequal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_termgreaterthan_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_termgreaterthan_2_1 : public pred_termgreaterthan_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_termsmallerequal_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_termsmallerequal_2_1 : public pred_termsmallerequal_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_termsmallerthan_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_termsmallerthan_2_1 : public pred_termsmallerthan_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_time_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cputime2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static std::string string7;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_time_1_1 : public pred_time_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_top_0 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
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
	static std::string string10;
	static std::string string11;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_top_0_1 : public pred_top_0 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_top_0_2 : public pred_top_0 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_toplevel_0 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	static Code* top1cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_toplevel_0_1 : public pred_toplevel_0 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_toplevel_0_2 : public pred_toplevel_0 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_untilend_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* cl2;
	//static Code cut2cont;
	static Code* get02cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static Int* posint1;
	static Int* posint10;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_untilend_1_1 : public pred_untilend_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

class pred_untilend_1_2 : public pred_untilend_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_var_1 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_var_1_1 : public pred_var_1 {
public:
	Code* Exec(PrologMachine* mach) override;
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_vread_2 : public Code {
public:
	static Code* entry_code;
	static Code* cl1;
	static Code* nexttoken2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static std::string string6;
	static std::string string7;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	Code* Exec(PrologMachine* mach) override;
};

class pred_vread_2_1 : public pred_vread_2 {
public:
	Code* Exec(PrologMachine* mach) override;
};

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

	void Init(PrologMachine* mach) override;

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


#endif	//#ifndef LIBRARY
