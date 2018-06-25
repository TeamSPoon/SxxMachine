#ifndef LIBRARY
#define LIBRARY

#include "Code.h"
#include <string>
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class PrologMachine;
class Int;

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_ap_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_ap_3_1: public hand_pred_ap_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_ap_3_2: public hand_pred_ap_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_append_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_append_3_1: public hand_pred_append_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_append_3_2: public hand_pred_append_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_assumed_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* allassumed2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_assumed_1_1: public hand_pred_assumed_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_assumeduring_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* assume2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_assumeduring_2_1: public hand_pred_assumeduring_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_atom_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_atom_1_1: public hand_pred_atom_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_atomic_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_atomic_1_1: public hand_pred_atomic_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_atomic2_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_atomic2_1_1: public hand_pred_atomic2_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_atomic2_1_2: public hand_pred_atomic2_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_collectvars_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cut2cont;
	static Function* noteq3cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_collectvars_3_1: public hand_pred_collectvars_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_collectvars_3_2: public hand_pred_collectvars_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_collectvars_3_3: public hand_pred_collectvars_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_copy_term_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* findall4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_copy_term_2_1: public hand_pred_copy_term_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_exec_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cl4;
	static Function* cl5;
	static Function* cl6;
	static Function* cut2cont;
	static Function* specialgoal3cont;
	static Function* var2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_exec_1_1: public hand_pred_exec_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_exec_1_2: public hand_pred_exec_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_exec_1_3: public hand_pred_exec_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_exec_1_4: public hand_pred_exec_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_exec_1_5: public hand_pred_exec_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_exec_1_6: public hand_pred_exec_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_execdisj_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cl4;
	static Function* cut2cont;
	static Function* exec2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_execdisj_2_1: public hand_pred_execdisj_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_execdisj_2_2: public hand_pred_execdisj_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_execdisj_2_3: public hand_pred_execdisj_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_execdisj_2_4: public hand_pred_execdisj_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_execpendinggoals_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* exec2cont;
	static Function* execcontinuation1cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_execpendinggoals_1_1: public hand_pred_execpendinggoals_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_execpendinggoals_1_2: public hand_pred_execpendinggoals_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_findall2_4: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* exec2cont;
	static Function* retrievefindall3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_findall2_4_1: public hand_pred_findall2_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_findall2_4_2: public hand_pred_findall2_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_findall_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* initfindall2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_findall_3_1: public hand_pred_findall_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_freeze_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* exec2cont;
	static Function* var2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_freeze_2_1: public hand_pred_freeze_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_freeze_2_2: public hand_pred_freeze_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_getargs_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* ap4cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_getargs_2_1: public hand_pred_getargs_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_getargs_2_2: public hand_pred_getargs_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_infix_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cl4;
	static Function* cl5;
	static Function* cl6;
	static Function* cl7;
	static Function* cl8;
	static Function* cl9;
	static Function* cl10;
	static Function* cl11;
	static Function* cl12;
	static Function* cl13;
	static Function* cl14;
	static Function* cl15;
	static Function* cl16;
	static Function* cl17;
	static Function* cl18;
	static Function* cl19;
	static Function* cl20;
	static Function* cl21;
	static Function* cl22;
	static Function* cl23;
	static Function* cl24;
	static Function* cl25;
	static Function* cl26;
	static Function* cl27;
	static Function* cl28;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_1: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_2: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_3: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_4: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_5: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_6: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_7: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_8: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_9: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_10: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_11: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_12: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_13: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_14: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_15: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_16: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_17: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_18: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_19: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_20: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_21: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_22: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_23: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_24: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_25: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_26: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_27: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_infix_3_28: public hand_pred_infix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_integer_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_integer_1_1: public hand_pred_integer_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_loop_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static Function* is3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static Int* posint0;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_loop_1_1: public hand_pred_loop_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_loop_1_2: public hand_pred_loop_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_m1_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* var2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_m1_2_1: public hand_pred_m1_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_m1_2_2: public hand_pred_m1_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_maketerm_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* maketerm4cont;
	static std::string string0;
	static std::string string1;
	static Int* posint1200;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_2_1: public hand_pred_maketerm_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_maketerm_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cl4;
	static Function* cl5;
	static Function* cl6;
	static Function* cl7;
	static Function* cl8;
	static Function* cl9;
	static Function* cl10;
	static Function* cl11;
	static Function* ap4cont;
	static Function* cut2cont;
	static Function* getargs3cont;
	static Function* prefix4cont;
	static Function* unify3cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_1: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_2: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_3: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_4: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_5: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_6: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_7: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_8: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_9: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_10: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_maketerm_3_11: public hand_pred_maketerm_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_max_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* smallerthan3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_max_3_1: public hand_pred_max_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_max_3_2: public hand_pred_max_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_max_3_3: public hand_pred_max_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_newprec_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_newprec_3_1: public hand_pred_newprec_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_newprec_3_2: public hand_pred_newprec_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_newprec_4: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cut2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_newprec_4_1: public hand_pred_newprec_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_newprec_4_2: public hand_pred_newprec_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_newprec_4_3: public hand_pred_newprec_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_not_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* exec2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_not_1_1: public hand_pred_not_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_not_1_2: public hand_pred_not_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_noteq_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_noteq_2_1: public hand_pred_noteq_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_noteq_2_2: public hand_pred_noteq_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_notmore_0: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* get02cont;
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

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_notmore_0_1: public hand_pred_notmore_0 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_notmore_0_2: public hand_pred_notmore_0 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_notvmember_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cut2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_notvmember_2_1: public hand_pred_notvmember_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_notvmember_2_2: public hand_pred_notvmember_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_notvmember_2_3: public hand_pred_notvmember_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_nrev_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_nrev_2_1: public hand_pred_nrev_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_nrev_2_2: public hand_pred_nrev_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_or_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* exec2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_or_2_1: public hand_pred_or_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_or_2_2: public hand_pred_or_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_prefix_3: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cl4;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_prefix_3_1: public hand_pred_prefix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_prefix_3_2: public hand_pred_prefix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_prefix_3_3: public hand_pred_prefix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_prefix_3_4: public hand_pred_prefix_3 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_read_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* nexttoken2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_read_1_1: public hand_pred_read_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_readall_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cut2cont;
	static Function* nexttoken2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_readall_2_1: public hand_pred_readall_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_readall_2_2: public hand_pred_readall_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_readall_2_3: public hand_pred_readall_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_smeq_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_smeq_1_1: public hand_pred_smeq_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_smeq_1_2: public hand_pred_smeq_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_smgr_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_smgr_1_1: public hand_pred_smgr_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_smgr_1_2: public hand_pred_smgr_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_sort_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static Function* split5cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_sort_2_1: public hand_pred_sort_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_sort_2_2: public hand_pred_sort_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_specialgoal_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cl4;
	static Function* cl5;
	static Function* cl6;
	static Function* cl7;
	static Function* cl8;
	static Function* cl9;
	static Function* cl10;
	static Function* cl11;
	static Function* cl12;
	// static Function cut2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_1: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_2: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_3: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_4: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_5: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_6: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_7: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_8: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_9: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_10: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_11: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_specialgoal_2_12: public hand_pred_specialgoal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_split_4: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* cut2cont;
	static Function* smallerthan3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;
	static Int* posint1;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_split_4_1: public hand_pred_split_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_split_4_2: public hand_pred_split_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_split_4_3: public hand_pred_split_4 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_statistics_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cputime2cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static std::string string4;
	static std::string string5;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_statistics_2_1: public hand_pred_statistics_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_termequal_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_termequal_2_1: public hand_pred_termequal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_termgreaterequal_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_termgreaterequal_2_1: public hand_pred_termgreaterequal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_termgreaterthan_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_termgreaterthan_2_1: public hand_pred_termgreaterthan_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_termsmallerequal_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_termsmallerequal_2_1: public hand_pred_termsmallerequal_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_termsmallerthan_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* compare4cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_termsmallerthan_2_1: public hand_pred_termsmallerthan_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_time_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cputime2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_time_1_1: public hand_pred_time_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_top_0: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* write2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_top_0_1: public hand_pred_top_0 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_top_0_2: public hand_pred_top_0 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_toplevel_0: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* top1cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_toplevel_0_1: public hand_pred_toplevel_0 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_toplevel_0_2: public hand_pred_toplevel_0 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_untilend_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cut2cont;
	static Function* get02cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;
	static std::string string3;
	static Int* posint1;
	static Int* posint10;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_untilend_1_1: public hand_pred_untilend_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_untilend_1_2: public hand_pred_untilend_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_var_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* type_of3cont;
	static std::string string0;
	static std::string string1;
	static std::string string2;

	void Init(PrologMachine* mach) override;

	int Arity() override;

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_var_1_1: public hand_pred_var_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_vread_2: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* nexttoken2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_vread_2_1: public hand_pred_vread_2 {
public:
	static Function* exec_static(PrologMachine* mach);
};

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class hand_pred_writevars_1: public Code {
public:
	static Function* entry_code;
	static Function* cl1;
	static Function* cl2;
	static Function* cl3;
	static Function* write2cont;
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

	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_writevars_1_1: public hand_pred_writevars_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_writevars_1_2: public hand_pred_writevars_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

class hand_pred_writevars_1_3: public hand_pred_writevars_1 {
public:
	static Function* exec_static(PrologMachine* mach);
};

#endif	//#ifndef LIBRARY
