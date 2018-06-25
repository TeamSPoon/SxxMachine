
// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau
import java.util.function.Function;

class /**/ hand_pred_ap_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_ap_3_1();
	static Function cl2 = new hand_pred_ap_3_2();
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "[]".intern();
	static String string3 = "ap".intern();
	static String string4 = "call".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_ap_3_1 extends hand_pred_ap_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_ap_3_2 extends hand_pred_ap_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Funct(string1, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_append_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_append_3_1();
	static Function cl2 = new hand_pred_append_3_2();
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "[]".intern();
	static String string3 = "append".intern();
	static String string4 = "call".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_append_3_1 extends hand_pred_append_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_append_3_2 extends hand_pred_append_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Funct(string1, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_assumed_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_assumed_1_1();
	static Function allassumed2cont;
	static String string0 = "cut".intern();
	static String string1 = "allassumed".intern();
	static String string2 = "assumed".intern();
	static String string3 = "m1".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		allassumed2cont = mach.LoadPred("allassumed", 1);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_assumed_1_1 extends hand_pred_assumed_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Funct(string3, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return allassumed2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_assumeduring_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_assumeduring_2_1();
	static Function assume2cont;
	static String string0 = "cut".intern();
	static String string1 = "-".intern();
	static String string2 = "assume".intern();
	static String string3 = "assumeduring".intern();
	static String string4 = "exec".intern();
	static String string5 = "unify".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		assume2cont = mach.LoadPred("assume", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_assumeduring_2_1 extends hand_pred_assumeduring_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = new Funct(string1, var2.Deref(), var3);
		local_aregs[1] = new Funct(string4, var1.Deref(), new Funct(string5, posint1, var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return assume2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_atom_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_atom_1_1();
	static Function type_of3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("atom");
	static String string2 = Const.IStr("type_of");

	void Init(PrologMachine mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_atom_1_1 extends hand_pred_atom_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Const(string1);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return type_of3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_atomic_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_atomic_1_1();
	static Function type_of3cont;
	static String string0 = "cut".intern();
	static String string1 = "atomic".intern();
	static String string2 = "atomic2".intern();
	static String string3 = "type_of".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_atomic_1_1 extends hand_pred_atomic_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2;
		local_aregs[2] = new Funct(string2, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return type_of3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_atomic2_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_atomic2_1_1();
	static Function cl2 = new hand_pred_atomic2_1_2();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = "atom".intern();
	static String string2 = "atomic2".intern();
	static String string3 = "call".intern();
	static String string4 = "cut".intern();
	static String string5 = "integer".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_atomic2_1_1 extends hand_pred_atomic2_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string1))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_atomic2_1_2 extends hand_pred_atomic2_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_collectvars_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_collectvars_3_1();
	static Function cl2 = new hand_pred_collectvars_3_2();
	static Function cl3 = new hand_pred_collectvars_3_3();
	static Function cut2cont;
	static Function noteq3cont;
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "=".intern();
	static String string3 = "[]".intern();
	static String string4 = "_".intern();
	static String string5 = "collectvars".intern();
	static String string6 = "cut".intern();
	static String string7 = "noteq".intern();
	static String string8 = "notvmember".intern();
	static String string9 = "var".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		noteq3cont = mach.LoadPred("noteq", 2);
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_collectvars_3_1 extends hand_pred_collectvars_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_collectvars_3_2 extends hand_pred_collectvars_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var6 = new Var(mach);
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, new Funct(string9, var1, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = new Const(string4);
		local_aregs[2] = new Funct(string8, var2.Deref(), var5.Deref(),
				new Funct(string0, new HeapChoice(mach.CUTB),
						new Funct(string5, var4.Deref(),
								new Funct(string1, new Funct(string2, var1.Deref(), var2.Deref()), var5.Deref()),
								var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return noteq3cont;
	}
}

class hand_pred_collectvars_3_3 extends hand_pred_collectvars_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_copy_term_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_copy_term_2_1();
	static Function findall4cont;
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "=".intern();
	static String string3 = "[]".intern();
	static String string4 = "copy_term".intern();
	static String string5 = "findall".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		findall4cont = mach.LoadPred("findall", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_copy_term_2_1 extends hand_pred_copy_term_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Funct(string2, var3.Deref(), var1.Deref());
		local_aregs[2] = new Funct(string1, var2.Deref(), new Const(string3));
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return findall4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_exec_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_exec_1_1();
	static Function cl2 = new hand_pred_exec_1_2();
	static Function cl3 = new hand_pred_exec_1_3();
	static Function cl4 = new hand_pred_exec_1_4();
	static Function cl5 = new hand_pred_exec_1_5();
	static Function cl6 = new hand_pred_exec_1_6();
	static Function cut2cont;
	static Function specialgoal3cont;
	static Function var2cont;
	static String string0 = "cut".intern();
	static String string1 = ",".intern();
	static String string2 = "->".intern();
	static String string3 = ";".intern();
	static String string4 = "call".intern();
	static String string5 = "cut".intern();
	static String string6 = "exec".intern();
	static String string7 = "execdisj".intern();
	static String string8 = "fail".intern();
	static String string9 = "specialgoal".intern();
	static String string10 = "true".intern();
	static String string11 = "var".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		specialgoal3cont = mach.LoadPred("specialgoal", 2);
		var2cont = mach.LoadPred("var", 1);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_exec_1_1 extends hand_pred_exec_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Funct(string0, new HeapChoice(mach.CUTB), new Funct(string8, continuation));
		mach.CUTB = mach.CurrentChoice;
		return var2cont;
	}
}

class hand_pred_exec_1_2 extends hand_pred_exec_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string6, var1.Deref(), new Funct(string6, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_exec_1_3 extends hand_pred_exec_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string2, var1, var2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string7, new Funct(string2, var1.Deref(), var2.Deref()), new Const(string10),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_exec_1_4 extends hand_pred_exec_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string3, var1, var2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string7, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_exec_1_5 extends hand_pred_exec_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2;
		local_aregs[2] = new Funct(string0, new HeapChoice(mach.CUTB), new Funct(string6, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return specialgoal3cont;
	}
}

class hand_pred_exec_1_6 extends hand_pred_exec_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call2;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_execdisj_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_execdisj_2_1();
	static Function cl2 = new hand_pred_execdisj_2_2();
	static Function cl3 = new hand_pred_execdisj_2_3();
	static Function cl4 = new hand_pred_execdisj_2_4();
	static Function cut2cont;
	static Function exec2cont;
	static String string0 = "cut".intern();
	static String string1 = "->".intern();
	static String string2 = "cut".intern();
	static String string3 = "exec".intern();
	static String string4 = "execdisj".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_execdisj_2_1 extends hand_pred_execdisj_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Funct(string0, new HeapChoice(mach.CUTB), new Funct(string3, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

class hand_pred_execdisj_2_2 extends hand_pred_execdisj_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string3, var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_execdisj_2_3 extends hand_pred_execdisj_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

class hand_pred_execdisj_2_4 extends hand_pred_execdisj_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_execpendinggoals_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_execpendinggoals_1_1();
	static Function cl2 = new hand_pred_execpendinggoals_1_2();
	static Function exec2cont;
	static Function execcontinuation1cont;
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "[]".intern();
	static String string3 = "exec".intern();
	static String string4 = "execcontinuation".intern();
	static String string5 = "execpendinggoals".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
		execcontinuation1cont = mach.LoadPred("execcontinuation", 0);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_execpendinggoals_1_1 extends hand_pred_execpendinggoals_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return execcontinuation1cont;
	}
}

class hand_pred_execpendinggoals_1_2 extends hand_pred_execpendinggoals_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Funct(string5, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return exec2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_findall2_4 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_findall2_4_1();
	static Function cl2 = new hand_pred_findall2_4_2();
	static Function exec2cont;
	static Function retrievefindall3cont;
	static String string0 = "cut".intern();
	static String string1 = "addfindall".intern();
	static String string2 = "exec".intern();
	static String string3 = "fail".intern();
	static String string4 = "findall2".intern();
	static String string5 = "retrievefindall".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
		retrievefindall3cont = mach.LoadPred("retrievefindall", 2);
	}

	int Arity() {
		return 4;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3], mach.Areg[4] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_findall2_4_1 extends hand_pred_findall2_4 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = new Funct(string1, var1.Deref(), var4.Deref(), new Funct(string3, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return exec2cont;
	}
}

class hand_pred_findall2_4_2 extends hand_pred_findall2_4 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return retrievefindall3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_findall_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_findall_3_1();
	static Function initfindall2cont;
	static String string0 = "cut".intern();
	static String string1 = "findall".intern();
	static String string2 = "findall2".intern();
	static String string3 = "initfindall".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		initfindall2cont = mach.LoadPred("initfindall", 1);
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_findall_3_1 extends hand_pred_findall_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Funct(string2, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return initfindall2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_freeze_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_freeze_2_1();
	static Function cl2 = new hand_pred_freeze_2_2();
	static Function exec2cont;
	static Function var2cont;
	static String string0 = "cut".intern();
	static String string1 = "cut".intern();
	static String string2 = "exec".intern();
	static String string3 = "freeze".intern();
	static String string4 = "freeze_internal".intern();
	static String string5 = "var".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
		var2cont = mach.LoadPred("var", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_freeze_2_1 extends hand_pred_freeze_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Funct(string0, new HeapChoice(mach.CUTB),
				new Funct(string4, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return var2cont;
	}
}

class hand_pred_freeze_2_2 extends hand_pred_freeze_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_getargs_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_getargs_2_1();
	static Function cl2 = new hand_pred_getargs_2_2();
	static Function ap4cont;
	static String string0 = "cut".intern();
	static String string1 = ")".intern();
	static String string2 = ",".intern();
	static String string3 = ".".intern();
	static String string4 = "[]".intern();
	static String string5 = "ap".intern();
	static String string6 = "const".intern();
	static String string7 = "getargs".intern();
	static String string8 = "maketerm".intern();
	static String string9 = "unify".intern();
	static Int posint900 = new Int(900);

	void Init(PrologMachine mach) {
		entry_code = this;
		ap4cont = mach.LoadPred("ap", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_getargs_2_1 extends hand_pred_getargs_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Funct(string3, new Funct(string6, new Const(string1)), new Const(string4));
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string8, var3.Deref(), var4, posint900,
				new Funct(string9, new Funct(string3, var4.Deref(), new Const(string4)), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class hand_pred_getargs_2_2 extends hand_pred_getargs_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var6 = new Var(mach);
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Funct(string3, new Funct(string6, new Const(string2)), var4);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string8, var3.Deref(), var5, posint900,
				new Funct(string9, new Funct(string3, var5.Deref(), var6), var2.Deref(),
						new Funct(string7, var4.Deref(), var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_infix_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_infix_3_1();
	static Function cl2 = new hand_pred_infix_3_2();
	static Function cl3 = new hand_pred_infix_3_3();
	static Function cl4 = new hand_pred_infix_3_4();
	static Function cl5 = new hand_pred_infix_3_5();
	static Function cl6 = new hand_pred_infix_3_6();
	static Function cl7 = new hand_pred_infix_3_7();
	static Function cl8 = new hand_pred_infix_3_8();
	static Function cl9 = new hand_pred_infix_3_9();
	static Function cl10 = new hand_pred_infix_3_10();
	static Function cl11 = new hand_pred_infix_3_11();
	static Function cl12 = new hand_pred_infix_3_12();
	static Function cl13 = new hand_pred_infix_3_13();
	static Function cl14 = new hand_pred_infix_3_14();
	static Function cl15 = new hand_pred_infix_3_15();
	static Function cl16 = new hand_pred_infix_3_16();
	static Function cl17 = new hand_pred_infix_3_17();
	static Function cl18 = new hand_pred_infix_3_18();
	static Function cl19 = new hand_pred_infix_3_19();
	static Function cl20 = new hand_pred_infix_3_20();
	static Function cl21 = new hand_pred_infix_3_21();
	static Function cl22 = new hand_pred_infix_3_22();
	static Function cl23 = new hand_pred_infix_3_23();
	static Function cl24 = new hand_pred_infix_3_24();
	static Function cl25 = new hand_pred_infix_3_25();
	static Function cl26 = new hand_pred_infix_3_26();
	static Function cl27 = new hand_pred_infix_3_27();
	static Function cl28 = new hand_pred_infix_3_28();
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("#");
	static String string2 = Const.IStr("*");
	static String string3 = Const.IStr("+");
	static String string4 = Const.IStr(",");
	static String string5 = Const.IStr("-");
	static String string6 = Const.IStr("->");
	static String string7 = Const.IStr("/");
	static String string8 = Const.IStr("//");
	static String string9 = Const.IStr(":");
	static String string10 = Const.IStr(":-");
	static String string11 = Const.IStr(";");
	static String string12 = Const.IStr("<");
	static String string13 = Const.IStr("<<");
	static String string14 = Const.IStr("=");
	static String string15 = Const.IStr("=..");
	static String string16 = Const.IStr("=:=");
	static String string17 = Const.IStr("=<");
	static String string18 = Const.IStr("==");
	static String string19 = Const.IStr(">");
	static String string20 = Const.IStr(">=");
	static String string21 = Const.IStr(">>");
	static String string22 = Const.IStr("@<");
	static String string23 = Const.IStr("@=<");
	static String string24 = Const.IStr("@>");
	static String string25 = Const.IStr("@>=");
	static String string26 = Const.IStr("^");
	static String string27 = Const.IStr("call");
	static String string28 = Const.IStr("infix");
	static String string29 = Const.IStr("is");
	static String string30 = Const.IStr("mod");
	static String string31 = Const.IStr("xfx");
	static String string32 = Const.IStr("xfy");
	static String string33 = Const.IStr("yfx");
	static Int posint200 = new Int(200);
	static Int posint300 = new Int(300);
	static Int posint400 = new Int(400);
	static Int posint500 = new Int(500);
	static Int posint550 = new Int(550);
	static Int posint700 = new Int(700);
	static Int posint1000 = new Int(1000);
	static Int posint1050 = new Int(1050);
	static Int posint1100 = new Int(1100);
	static Int posint1200 = new Int(1200);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_infix_3_1 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1200)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string10))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_2 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1000)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_3 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1100)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string11))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_4 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1050)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string6))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_5 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string14))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_6 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string29))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_7 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string15))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_8 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string18))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_9 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string22))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_10 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string24))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_11 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string23))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_12 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string25))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_13 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string16))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_14 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string12))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_15 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl16);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string17))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_16 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string19))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_17 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string20))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_18 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint550)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string9))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_19 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl20);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_20 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_21 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_22 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl23);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_23 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string7))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_24 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl25);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string8))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_25 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string13))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_26 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl27);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string21))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_27 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint300)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string30))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_infix_3_28 extends hand_pred_infix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint200)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string26))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_integer_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_integer_1_1();
	static Function type_of3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("integer");
	static String string2 = Const.IStr("type_of");

	void Init(PrologMachine mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_integer_1_1 extends hand_pred_integer_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Const(string1);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return type_of3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_loop_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_loop_1_1();
	static Function cl2 = new hand_pred_loop_1_2();
	static Function cut2cont;
	static Function is3cont;
	static String string0 = "cut".intern();
	static String string1 = "-".intern();
	static String string2 = "cut".intern();
	static String string3 = "is".intern();
	static String string4 = "loop".intern();
	static Int posint0 = new Int(0);
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		is3cont = mach.LoadPred("is", 2);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_loop_1_1 extends hand_pred_loop_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint0)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_loop_1_2 extends hand_pred_loop_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Funct(string1, var1.Deref(), posint1);
		local_aregs[2] = new Funct(string4, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return is3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_m1_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_m1_2_1();
	static Function cl2 = new hand_pred_m1_2_2();
	static Function var2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("-");
	static String string2 = Const.IStr(".");
	static String string3 = Const.IStr("m1");
	static String string4 = Const.IStr("var");

	void Init(PrologMachine mach) {
		entry_code = this;
		var2cont = mach.LoadPred("var", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_m1_2_1 extends hand_pred_m1_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string2, new Funct(string1, var1.Deref(), var2), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return var2cont;
	}
}

class hand_pred_m1_2_2 extends hand_pred_m1_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string2, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_maketerm_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_maketerm_2_1();
	static Function maketerm4cont;
	static String string0 = "cut".intern();
	static String string1 = "maketerm".intern();
	static Int posint1200 = new Int(1200);

	void Init(PrologMachine mach) {
		entry_code = this;
		maketerm4cont = mach.LoadPred("maketerm", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_maketerm_2_1 extends hand_pred_maketerm_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = posint1200;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return maketerm4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_maketerm_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_maketerm_3_1();
	static Function cl2 = new hand_pred_maketerm_3_2();
	static Function cl3 = new hand_pred_maketerm_3_3();
	static Function cl4 = new hand_pred_maketerm_3_4();
	static Function cl5 = new hand_pred_maketerm_3_5();
	static Function cl6 = new hand_pred_maketerm_3_6();
	static Function cl7 = new hand_pred_maketerm_3_7();
	static Function cl8 = new hand_pred_maketerm_3_8();
	static Function cl9 = new hand_pred_maketerm_3_9();
	static Function cl10 = new hand_pred_maketerm_3_10();
	static Function cl11 = new hand_pred_maketerm_3_11();
	static Function ap4cont;
	static Function cut2cont;
	static Function getargs3cont;
	static Function prefix4cont;
	static Function unify3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("(");
	static String string2 = Const.IStr(")");
	static String string3 = Const.IStr(",");
	static String string4 = Const.IStr(".");
	static String string5 = Const.IStr("[");
	static String string6 = Const.IStr("[]");
	static String string7 = Const.IStr("]");
	static String string8 = Const.IStr("ap");
	static String string9 = Const.IStr("call");
	static String string10 = Const.IStr("const");
	static String string11 = Const.IStr("cut");
	static String string12 = Const.IStr("getargs");
	static String string13 = Const.IStr("infix");
	static String string14 = Const.IStr("int");
	static String string15 = Const.IStr("maketerm");
	static String string16 = Const.IStr("newprec");
	static String string17 = Const.IStr("prefix");
	static String string18 = Const.IStr("smallerorequal");
	static String string19 = Const.IStr("unify");
	static String string20 = Const.IStr("univ");
	static String string21 = Const.IStr("var");
	static String string22 = Const.IStr("|");
	static Int posint1 = new Int(1);
	static Int posint900 = new Int(900);

	void Init(PrologMachine mach) {
		entry_code = this;
		ap4cont = mach.LoadPred("ap", 3);
		getargs3cont = mach.LoadPred("getargs", 2);
		prefix4cont = mach.LoadPred("prefix", 3);
		unify3cont = mach.LoadPred("unify", 2);
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_maketerm_3_1 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string21, var1, var2, var3), new Const(string6)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = new Funct(string0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return unify3cont;
	}
}

class hand_pred_maketerm_3_2 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string14, var1), new Const(string6)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string19, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_maketerm_3_3 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, var1), new Const(string6)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string19, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_maketerm_3_4 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, var1),
				new Funct(string4, new Funct(string10, new Const(string1)), var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var5;
		local_aregs[2] = new Funct(string20, var3.Deref(), var1.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return getargs3cont;
	}
}

class hand_pred_maketerm_3_5 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var12 = new Var(mach);
		Term var11 = new Var(mach);
		Term var10 = new Var(mach);
		Term var9 = new Var(mach);
		Term var8 = new Var(mach);
		Term var7 = new Var(mach);
		Term var6 = new Var(mach);
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Funct(string4, new Funct(string10, var5), var6);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string13, var7, var8, var5.Deref(),
				new Funct(string18, var7.Deref(), var3.Deref(),
						new Funct(string16, var8.Deref(), var7.Deref(), var9, var10,
								new Funct(string15, var4.Deref(), var11, var9.Deref(),
										new Funct(string15, var6.Deref(), var12, var10.Deref(),
												new Funct(string20, var2.Deref(), var5.Deref(),
														new Funct(string4, var11.Deref(),
																new Funct(string4, var12.Deref(), new Const(string6))),
														continuation))))));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class hand_pred_maketerm_3_6 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var8 = new Var(mach);
		Term var7 = new Var(mach);
		Term var6 = new Var(mach);
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, var1), var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = var6;
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string18, var5.Deref(), var4.Deref(),
				new Funct(string16, var6.Deref(), var5.Deref(), var7,
						new Funct(string15, var2.Deref(), var8, var7.Deref(), new Funct(string20, var3.Deref(),
								var1.Deref(), new Funct(string4, var8.Deref(), new Const(string6)), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return prefix4cont;
	}
}

class hand_pred_maketerm_3_7 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var6 = new Var(mach);
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, new Const(string5)), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string4, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = new Funct(string4, new Funct(string10, new Const(string3)), var6);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string15, var5.Deref(), var2.Deref(), posint900,
				new Funct(string15, new Funct(string4, new Funct(string10, new Const(string5)), var6.Deref()),
						var3.Deref(), posint900, continuation));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class hand_pred_maketerm_3_8 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var7 = new Var(mach);
		Term var6 = new Var(mach);
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, new Const(string5)), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string4, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = new Funct(string4, new Funct(string10, new Const(string22)), var6);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string8, var7,
				new Funct(string4, new Funct(string10, new Const(string7)), new Const(string6)), var6.Deref(),
				new Funct(string15, var5.Deref(), var2.Deref(), posint900,
						new Funct(string15, var7.Deref(), var3.Deref(), posint900, continuation)));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class hand_pred_maketerm_3_9 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, new Const(string1)), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Funct(string4, new Funct(string10, new Const(string2)), new Const(string6));
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string0, new HeapChoice(mach.CUTB),
				new Funct(string15, var4.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class hand_pred_maketerm_3_10 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, new Const(string5)), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string4, var2, new Const(string6)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Funct(string4, new Funct(string10, new Const(string7)), new Const(string6));
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Funct(string15, var4.Deref(), var2.Deref(), posint900, continuation);
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class hand_pred_maketerm_3_11 extends hand_pred_maketerm_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, new Funct(string10, new Const(string5)),
				new Funct(string4, new Funct(string10, new Const(string7)), new Const(string6))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_max_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_max_3_1();
	static Function cl2 = new hand_pred_max_3_2();
	static Function cl3 = new hand_pred_max_3_3();
	static Function smallerthan3cont;
	static String string0 = "cut".intern();
	static String string1 = "call".intern();
	static String string2 = "max".intern();
	static String string3 = "smallerthan".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		smallerthan3cont = mach.LoadPred("smallerthan", 2);
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_max_3_1 extends hand_pred_max_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return smallerthan3cont;
	}
}

class hand_pred_max_3_2 extends hand_pred_max_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return smallerthan3cont;
	}
}

class hand_pred_max_3_3 extends hand_pred_max_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_newprec_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_newprec_3_1();
	static Function cl2 = new hand_pred_newprec_3_2();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = "-".intern();
	static String string2 = "call".intern();
	static String string3 = "cut".intern();
	static String string4 = "fx".intern();
	static String string5 = "fy".intern();
	static String string6 = "is".intern();
	static String string7 = "newprec".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_newprec_3_1 extends hand_pred_newprec_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string6, var2.Deref(), new Funct(string1, var1.Deref(), posint1), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_newprec_3_2 extends hand_pred_newprec_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_newprec_4 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_newprec_4_1();
	static Function cl2 = new hand_pred_newprec_4_2();
	static Function cl3 = new hand_pred_newprec_4_3();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = "-".intern();
	static String string2 = "cut".intern();
	static String string3 = "is".intern();
	static String string4 = "newprec".intern();
	static String string5 = "unify".intern();
	static String string6 = "xfx".intern();
	static String string7 = "xfy".intern();
	static String string8 = "yfx".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 4;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3], mach.Areg[4] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_newprec_4_1 extends hand_pred_newprec_4 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string3, var2.Deref(), new Funct(string1, var1.Deref(), posint1),
				new Funct(string3, var3.Deref(), new Funct(string1, var1.Deref(), posint1), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_newprec_4_2 extends hand_pred_newprec_4 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string7))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string3, var2.Deref(), new Funct(string1, var1.Deref(), posint1),
				new Funct(string5, var1.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_newprec_4_3 extends hand_pred_newprec_4 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string3, var3.Deref(), new Funct(string1, var1.Deref(), posint1),
				new Funct(string5, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_not_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_not_1_1();
	static Function cl2 = new hand_pred_not_1_2();
	static Function exec2cont;
	static String string0 = "cut".intern();
	static String string1 = "call".intern();
	static String string2 = "cut".intern();
	static String string3 = "exec".intern();
	static String string4 = "fail".intern();
	static String string5 = "not".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_not_1_1 extends hand_pred_not_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Funct(string0, new HeapChoice(mach.CUTB), new Funct(string4, continuation));
		mach.CUTB = mach.CurrentChoice;
		return exec2cont;
	}
}

class hand_pred_not_1_2 extends hand_pred_not_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_noteq_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_noteq_2_1();
	static Function cl2 = new hand_pred_noteq_2_2();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = "call".intern();
	static String string2 = "cut".intern();
	static String string3 = "fail".intern();
	static String string4 = "noteq".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_noteq_2_1 extends hand_pred_noteq_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string3, continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_noteq_2_2 extends hand_pred_noteq_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_notmore_0 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_notmore_0_1();
	static Function cl2 = new hand_pred_notmore_0_2();
	static Function get02cont;
	static String string0 = "cut".intern();
	static String string1 = "call".intern();
	static String string2 = "cut".intern();
	static String string3 = "fail".intern();
	static String string4 = "get0".intern();
	static String string5 = "noteq".intern();
	static String string6 = "notmore".intern();
	static String string7 = "untilend".intern();
	static Int posint1 = new Int(1);
	static Int posint10 = new Int(10);

	void Init(PrologMachine mach) {
		entry_code = this;
		get02cont = mach.LoadPred("get0", 1);
	}

	int Arity() {
		return 0;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_notmore_0_1 extends hand_pred_notmore_0 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Term var1 = new Var(mach);
		local_aregs[0] = var1;
		local_aregs[1] = new Funct(string5, var1.Deref(), posint10, new Funct(string0, new HeapChoice(mach.CUTB),
				new Funct(string7, var1.Deref(), new Funct(string3, continuation))));
		mach.CUTB = mach.CurrentChoice;
		return get02cont;
	}
}

class hand_pred_notmore_0_2 extends hand_pred_notmore_0 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_notvmember_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_notvmember_2_1();
	static Function cl2 = new hand_pred_notvmember_2_2();
	static Function cl3 = new hand_pred_notvmember_2_3();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "=".intern();
	static String string3 = "[]".intern();
	static String string4 = "cut".intern();
	static String string5 = "fail".intern();
	static String string6 = "notvmember".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_notvmember_2_1 extends hand_pred_notvmember_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_notvmember_2_2 extends hand_pred_notvmember_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string1, new Funct(string2, var2, var1.Deref()), var3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string5, continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_notvmember_2_3 extends hand_pred_notvmember_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_nrev_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_nrev_2_1();
	static Function cl2 = new hand_pred_nrev_2_2();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "[]".intern();
	static String string3 = "append".intern();
	static String string4 = "cut".intern();
	static String string5 = "nrev".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_nrev_2_1 extends hand_pred_nrev_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_nrev_2_2 extends hand_pred_nrev_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = new Funct(string3, var4.Deref(), new Funct(string1, var1.Deref(), new Const(string2)),
				var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_or_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_or_2_1();
	static Function cl2 = new hand_pred_or_2_2();
	static Function exec2cont;
	static String string0 = "cut".intern();
	static String string1 = "exec".intern();
	static String string2 = "or".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_or_2_1 extends hand_pred_or_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

class hand_pred_or_2_2 extends hand_pred_or_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_prefix_3 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_prefix_3_1();
	static Function cl2 = new hand_pred_prefix_3_2();
	static Function cl3 = new hand_pred_prefix_3_3();
	static Function cl4 = new hand_pred_prefix_3_4();
	static String string0 = "cut".intern();
	static String string1 = "+".intern();
	static String string2 = "-".intern();
	static String string3 = ":-".intern();
	static String string4 = "?-".intern();
	static String string5 = "call".intern();
	static String string6 = "fx".intern();
	static String string7 = "prefix".intern();
	static Int posint500 = new Int(500);
	static Int posint1200 = new Int(1200);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 3;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_prefix_3_1 extends hand_pred_prefix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1200)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_prefix_3_2 extends hand_pred_prefix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1200)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_prefix_3_3 extends hand_pred_prefix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_prefix_3_4 extends hand_pred_prefix_3 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_read_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_read_1_1();
	static Function nexttoken2cont;
	static String string0 = "cut".intern();
	static String string1 = "cut".intern();
	static String string2 = "maketerm".intern();
	static String string3 = "nexttoken".intern();
	static String string4 = "read".intern();
	static String string5 = "readall".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		nexttoken2cont = mach.LoadPred("nexttoken", 1);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_read_1_1 extends hand_pred_read_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Funct(string5, var2.Deref(), var3, new Funct(string2, var3.Deref(), var1.Deref(),
				new Funct(string0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return nexttoken2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_readall_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_readall_2_1();
	static Function cl2 = new hand_pred_readall_2_2();
	static Function cl3 = new hand_pred_readall_2_3();
	static Function cut2cont;
	static Function nexttoken2cont;
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "[]".intern();
	static String string3 = "cut".intern();
	static String string4 = "end_of_clause".intern();
	static String string5 = "end_of_file".intern();
	static String string6 = "halt".intern();
	static String string7 = "nexttoken".intern();
	static String string8 = "readall".intern();
	static String string9 = "unify".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		nexttoken2cont = mach.LoadPred("nexttoken", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_readall_2_1 extends hand_pred_readall_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string6, continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_readall_2_2 extends hand_pred_readall_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Funct(string9, new Const(string2), var1.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_readall_2_3 extends hand_pred_readall_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string1, var1.Deref(), var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Funct(string8, var3.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return nexttoken2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_smeq_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_smeq_1_1();
	static Function cl2 = new hand_pred_smeq_1_2();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = "<".intern();
	static String string2 = "=".intern();
	static String string3 = "call".intern();
	static String string4 = "cut".intern();
	static String string5 = "smeq".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_smeq_1_1 extends hand_pred_smeq_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string1))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_smeq_1_2 extends hand_pred_smeq_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_smgr_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_smgr_1_1();
	static Function cl2 = new hand_pred_smgr_1_2();
	static Function cut2cont;
	static String string0 = "cut".intern();
	static String string1 = "=".intern();
	static String string2 = ">".intern();
	static String string3 = "call".intern();
	static String string4 = "cut".intern();
	static String string5 = "smgr".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_smgr_1_1 extends hand_pred_smgr_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_smgr_1_2 extends hand_pred_smgr_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_sort_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_sort_2_1();
	static Function cl2 = new hand_pred_sort_2_2();
	static Function cut2cont;
	static Function split5cont;
	static String string0 = "cut".intern();
	static String string1 = ".".intern();
	static String string2 = "[]".intern();
	static String string3 = "append".intern();
	static String string4 = "cut".intern();
	static String string5 = "sort".intern();
	static String string6 = "split".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		split5cont = mach.LoadPred("split", 4);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_sort_2_1 extends hand_pred_sort_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_sort_2_2 extends hand_pred_sort_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var7 = new Var(mach);
		Term var6 = new Var(mach);
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var4;
		local_aregs[3] = var5;
		local_aregs[4] = new Funct(string5, var4.Deref(), var6,
				new Funct(string5, var5.Deref(), var7, new Funct(string3, var6.Deref(),
						new Funct(string1, var1.Deref(), var7.Deref()), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return split5cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_specialgoal_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_specialgoal_2_1();
	static Function cl2 = new hand_pred_specialgoal_2_2();
	static Function cl3 = new hand_pred_specialgoal_2_3();
	static Function cl4 = new hand_pred_specialgoal_2_4();
	static Function cl5 = new hand_pred_specialgoal_2_5();
	static Function cl6 = new hand_pred_specialgoal_2_6();
	static Function cl7 = new hand_pred_specialgoal_2_7();
	static Function cl8 = new hand_pred_specialgoal_2_8();
	static Function cl9 = new hand_pred_specialgoal_2_9();
	static Function cl10 = new hand_pred_specialgoal_2_10();
	static Function cl11 = new hand_pred_specialgoal_2_11();
	static Function cl12 = new hand_pred_specialgoal_2_12();
	// static Function cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(";");
	static String string2 = Const.IStr("<");
	static String string3 = Const.IStr("=");
	static String string4 = Const.IStr("=:=");
	static String string5 = Const.IStr("=<");
	static String string6 = Const.IStr("==");
	static String string7 = Const.IStr(">");
	static String string8 = Const.IStr(">=");
	static String string9 = Const.IStr("@<");
	static String string10 = Const.IStr("@=<");
	static String string11 = Const.IStr("@>");
	static String string12 = Const.IStr("@>=");
	static String string13 = Const.IStr("arithequal");
	static String string14 = Const.IStr("cut");
	static String string15 = Const.IStr("or");
	static String string16 = Const.IStr("smallerorequal");
	static String string17 = Const.IStr("smallerthan");
	static String string18 = Const.IStr("specialgoal");
	static String string19 = Const.IStr("termequal");
	static String string20 = Const.IStr("termgreaterequal");
	static String string21 = Const.IStr("termgreaterthan");
	static String string22 = Const.IStr("termsmallerequal");
	static String string23 = Const.IStr("termsmallerthan");
	static String string24 = Const.IStr("unify");
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_specialgoal_2_1 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string17, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_2 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string16, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_3 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string17, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_4 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string8, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string16, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_5 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string4, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string13, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_6 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string3, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string24, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_7 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string15, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_8 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string9, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string23, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_9 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string11, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string21, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_10 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string10, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string22, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_11 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string12, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string20, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_specialgoal_2_12 extends hand_pred_specialgoal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string19, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_split_4 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_split_4_1();
	static Function cl2 = new hand_pred_split_4_2();
	static Function cl3 = new hand_pred_split_4_3();
	static Function cut2cont;
	static Function smallerthan3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("cut");
	static String string4 = Const.IStr("smallerthan");
	static String string5 = Const.IStr("split");
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		smallerthan3cont = mach.LoadPred("smallerthan", 2);
	}

	int Arity() {
		return 4;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3], mach.Areg[4] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_split_4_1 extends hand_pred_split_4 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(new Const(string2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_split_4_2 extends hand_pred_split_4 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(new Funct(string1, var2.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = new Funct(string0, new HeapChoice(mach.CUTB),
				new Funct(string5, var1.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return smallerthan3cont;
	}
}

class hand_pred_split_4_3 extends hand_pred_split_4 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var5 = new Var(mach);
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(new Funct(string1, var2.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_statistics_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_statistics_2_1();
	static Function cputime2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("cputime");
	static String string4 = Const.IStr("runtime");
	static String string5 = Const.IStr("statistics");

	void Init(PrologMachine mach) {
		entry_code = this;
		cputime2cont = mach.LoadPred("cputime", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_statistics_2_1 extends hand_pred_statistics_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(new Funct(string1, var1, new Funct(string1, var2, new Const(string2))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return cputime2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_termequal_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_termequal_2_1();
	static Function compare4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("=");
	static String string2 = Const.IStr("compare");
	static String string3 = Const.IStr("termequal");

	void Init(PrologMachine mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_termequal_2_1 extends hand_pred_termequal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = new Const(string1);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return compare4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_termgreaterequal_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_termgreaterequal_2_1();
	static Function compare4cont;
	static String string0 = "cut".intern();
	static String string1 = "compare".intern();
	static String string2 = "smgr".intern();
	static String string3 = "termgreaterequal".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_termgreaterequal_2_1 extends hand_pred_termgreaterequal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = new Funct(string2, var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return compare4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_termgreaterthan_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_termgreaterthan_2_1();
	static Function compare4cont;
	static String string0 = "cut".intern();
	static String string1 = ">".intern();
	static String string2 = "compare".intern();
	static String string3 = "termgreaterthan".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_termgreaterthan_2_1 extends hand_pred_termgreaterthan_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = new Const(string1);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return compare4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_termsmallerequal_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_termsmallerequal_2_1();
	static Function compare4cont;
	static String string0 = "cut".intern();
	static String string1 = "compare".intern();
	static String string2 = "smeq".intern();
	static String string3 = "termsmallerequal".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_termsmallerequal_2_1 extends hand_pred_termsmallerequal_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = new Funct(string2, var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return compare4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_termsmallerthan_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_termsmallerthan_2_1();
	static Function compare4cont;
	static String string0 = "cut".intern();
	static String string1 = "<".intern();
	static String string2 = "compare".intern();
	static String string3 = "termsmallerthan".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_termsmallerthan_2_1 extends hand_pred_termsmallerthan_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = new Const(string1);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return compare4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_time_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_time_1_1();
	static Function cputime2cont;
	static String string0 = "cut".intern();
	static String string1 = "-".intern();
	static String string2 = "cputime".intern();
	static String string3 = "exec".intern();
	static String string4 = "is".intern();
	static String string5 = "nl".intern();
	static String string6 = "time".intern();
	static String string7 = "write".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		cputime2cont = mach.LoadPred("cputime", 1);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_time_1_1 extends hand_pred_time_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Funct(string3, var1.Deref(),
				new Funct(string2, var3, new Funct(string4, var4, new Funct(string1, var3.Deref(), var2.Deref()),
						new Funct(string7, var4.Deref(), new Funct(string5, continuation)))));
		mach.CUTB = mach.CurrentChoice;
		return cputime2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_top_0 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_top_0_1();
	static Function cl2 = new hand_pred_top_0_2();
	static Function write2cont;
	static String string0 = "cut".intern();
	static String string1 = "?- ".intern();
	static String string2 = "Yes".intern();
	static String string3 = "cut".intern();
	static String string4 = "exec".intern();
	static String string5 = "fail".intern();
	static String string6 = "nl".intern();
	static String string7 = "notmore".intern();
	static String string8 = "top".intern();
	static String string9 = "vread".intern();
	static String string10 = "write".intern();
	static String string11 = "writevars".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		write2cont = mach.LoadPred("write", 1);
	}

	int Arity() {
		return 0;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_top_0_1 extends hand_pred_top_0 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		local_aregs[0] = new Const(string1);
		local_aregs[1] = new Funct(string9, var1, var2,
				new Funct(string4, var1.Deref(), new Funct(string11, var2.Deref(),
						new Funct(string10, new Const(string2), new Funct(string6, new Funct(string7,
								new Funct(string0, new HeapChoice(mach.CUTB), new Funct(string5, continuation))))))));
		mach.CUTB = mach.CurrentChoice;
		return write2cont;
	}
}

class hand_pred_top_0_2 extends hand_pred_top_0 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_toplevel_0 extends Code {
	static Function entry_code = new hand_pred_toplevel_0();
	static Function cl1 = new hand_pred_toplevel_0_1();
	static Function cl2 = new hand_pred_toplevel_0_2();
	static Function top1cont;
	static String string0 = "cut".intern();
	static String string1 = "fail".intern();
	static String string2 = "top".intern();
	static String string3 = "toplevel".intern();

	int Arity() {
		return 0;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_toplevel_0_1 extends hand_pred_toplevel_0 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = new Funct(string1, continuation);
		mach.CUTB = mach.CurrentChoice;
		if (top1cont == null) {
			top1cont = mach.LoadPred("top", 0);
		}
		return top1cont;
	}
}

class hand_pred_toplevel_0_2 extends hand_pred_toplevel_0 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_untilend_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_untilend_1_1();
	static Function cl2 = new hand_pred_untilend_1_2();
	static Function cut2cont;
	static Function get02cont;
	static String string0 = "cut".intern();
	static String string1 = "cut".intern();
	static String string2 = "get0".intern();
	static String string3 = "untilend".intern();
	static Int posint1 = new Int(1);
	static Int posint10 = new Int(10);

	void Init(PrologMachine mach) {
		entry_code = this;
		get02cont = mach.LoadPred("get0", 1);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_untilend_1_1 extends hand_pred_untilend_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint10)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_untilend_1_2 extends hand_pred_untilend_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Funct(string3, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return get02cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_var_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_var_1_1();
	static Function type_of3cont;
	static String string0 = "cut".intern();
	static String string1 = "type_of".intern();
	static String string2 = "var".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_var_1_1 extends hand_pred_var_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Const(string2);
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return type_of3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_vread_2 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_vread_2_1();
	static Function nexttoken2cont;
	static String string0 = "cut".intern();
	static String string1 = "[]".intern();
	static String string2 = "collectvars".intern();
	static String string3 = "cut".intern();
	static String string4 = "maketerm".intern();
	static String string5 = "nexttoken".intern();
	static String string6 = "readall".intern();
	static String string7 = "vread".intern();
	static Int posint1 = new Int(1);

	void Init(PrologMachine mach) {
		entry_code = this;
		nexttoken2cont = mach.LoadPred("nexttoken", 1);
	}

	int Arity() {
		return 2;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_vread_2_1 extends hand_pred_vread_2 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Funct(string6, var3.Deref(), var4,
				new Funct(string4, var4.Deref(), var1.Deref(), new Funct(string0, new HeapChoice(mach.CUTB),
						new Funct(string2, var4.Deref(), new Const(string1), var2.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return nexttoken2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ hand_pred_writevars_1 extends Code {
	static Function entry_code;
	static Function cl1 = new hand_pred_writevars_1_1();
	static Function cl2 = new hand_pred_writevars_1_2();
	static Function cl3 = new hand_pred_writevars_1_3();
	static Function write2cont;
	static String string0 = "cut".intern();
	static String string1 = " = ".intern();
	static String string2 = ".".intern();
	static String string3 = "=".intern();
	static String string4 = "[]".intern();
	static String string5 = "call".intern();
	static String string6 = "fail".intern();
	static String string7 = "nl".intern();
	static String string8 = "write".intern();
	static String string9 = "writevars".intern();

	void Init(PrologMachine mach) {
		entry_code = this;
		write2cont = mach.LoadPred("write", 1);
	}

	int Arity() {
		return 1;
	}

	static Function exec_static(PrologMachine mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return (Function) cl1.apply(mach);
	}
}

class hand_pred_writevars_1_1 extends hand_pred_writevars_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class hand_pred_writevars_1_2 extends hand_pred_writevars_1 {
	static Function exec_static(PrologMachine mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string2, new Funct(string3, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = new Funct(string8, new Const(string1),
				new Funct(string8, var1.Deref(), new Funct(string7, new Funct(string6, continuation))));
		mach.CUTB = mach.CurrentChoice;
		return write2cont;
	}
}

class hand_pred_writevars_1_3 extends hand_pred_writevars_1 {
	static Function exec_static(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Funct(string2, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}
