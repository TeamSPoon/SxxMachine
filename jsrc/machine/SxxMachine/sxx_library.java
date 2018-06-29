package SxxMachine;
// Generated java file - release 0.1 - do not edit !

// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_ap_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_ap_3_1();
	static Code cl2 = new pred_ap_3_2();
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("ap");
	static String string4 = Const.IStr("call");

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_ap_3_1 extends pred_ap_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_ap_3_2 extends pred_ap_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Fun(string1, var1.Deref(), var4))))
			return Prolog.Fail0;
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

class /**/ pred_append_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_append_3_1();
	static Code cl2 = new pred_append_3_2();
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("append");
	static String string4 = Const.IStr("call");

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_append_3_1 extends pred_append_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_append_3_2 extends pred_append_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Fun(string1, var1.Deref(), var4))))
			return Prolog.Fail0;
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

class /**/ pred_assumed_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_assumed_1_1();
	static Code allassumed2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("allassumed");
	static String string2 = Const.IStr("assumed");
	static String string3 = Const.IStr("m1");

	protected void Init(Prolog mach) {
		entry_code = this;
		allassumed2cont = mach.LoadPred("allassumed", 1);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_assumed_1_1 extends pred_assumed_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Fun(string3, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return allassumed2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_assumeduring_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_assumeduring_2_1();
	static Code assume2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("-");
	static String string2 = Const.IStr("assume");
	static String string3 = Const.IStr("assumeduring");
	static String string4 = Const.IStr("exec");
	static String string5 = Const.IStr("unify");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		assume2cont = mach.LoadPred("assume", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_assumeduring_2_1 extends pred_assumeduring_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = new Fun(string1, var2.Deref(), var3);
		local_aregs[1] = new Fun(string4, var1.Deref(), new Fun(string5, posint1, var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return assume2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_atom_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_atom_1_1();
	static Code type_of3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("atom");
	static String string2 = Const.IStr("type_of");

	protected void Init(Prolog mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_atom_1_1 extends pred_atom_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
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

class /**/ pred_atomic_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_atomic_1_1();
	static Code type_of3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("atomic");
	static String string2 = Const.IStr("atomic2");
	static String string3 = Const.IStr("type_of");

	protected void Init(Prolog mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_atomic_1_1 extends pred_atomic_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2;
		local_aregs[2] = new Fun(string2, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return type_of3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_atomic2_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_atomic2_1_1();
	static Code cl2 = new pred_atomic2_1_2();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("atom");
	static String string2 = Const.IStr("atomic2");
	static String string3 = Const.IStr("call");
	static String string4 = Const.IStr("cut");
	static String string5 = Const.IStr("integer");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_atomic2_1_1 extends pred_atomic2_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string1))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_atomic2_1_2 extends pred_atomic2_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string5))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_collectvars_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_collectvars_3_1();
	static Code cl2 = new pred_collectvars_3_2();
	static Code cl3 = new pred_collectvars_3_3();
	static Code cut2cont;
	static Code noteq3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("=");
	static String string3 = Const.IStr("[]");
	static String string4 = Const.IStr("_");
	static String string5 = Const.IStr("collectvars");
	static String string6 = Const.IStr("cut");
	static String string7 = Const.IStr("noteq");
	static String string8 = Const.IStr("notvmember");
	static String string9 = Const.IStr("var");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		noteq3cont = mach.LoadPred("noteq", 2);
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_collectvars_3_1 extends pred_collectvars_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string3))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_collectvars_3_2 extends pred_collectvars_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string1, new Fun(string9, var1, var2, var3), var4))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var5)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var6)))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = new Const(string4);
		local_aregs[2] = new Fun(string8, var2.Deref(), var5.Deref(),
				new Fun(string0, new HeapChoice(mach.CUTB),
						new Fun(string5, var4.Deref(),
								new Fun(string1, new Fun(string2, var1.Deref(), var2.Deref()), var5.Deref()),
								var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return noteq3cont;
	}
}

class pred_collectvars_3_3 extends pred_collectvars_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var4)))
			return Prolog.Fail0;
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

class /**/ pred_copy_term_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_copy_term_2_1();
	static Code findall4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("=");
	static String string3 = Const.IStr("[]");
	static String string4 = Const.IStr("copy_term");
	static String string5 = Const.IStr("findall");

	protected void Init(Prolog mach) {
		entry_code = this;
		findall4cont = mach.LoadPred("findall", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_copy_term_2_1 extends pred_copy_term_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Fun(string2, var3.Deref(), var1.Deref());
		local_aregs[2] = new Fun(string1, var2.Deref(), new Const(string3));
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return findall4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_exec_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_exec_1_1();
	static Code cl2 = new pred_exec_1_2();
	static Code cl3 = new pred_exec_1_3();
	static Code cl4 = new pred_exec_1_4();
	static Code cl5 = new pred_exec_1_5();
	static Code cl6 = new pred_exec_1_6();
	//static Code cut2cont;
	static Code specialgoal3cont;
	static Code var2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(",");
	static String string2 = Const.IStr("->");
	static String string3 = Const.IStr(";");
	static String string4 = Const.IStr("call");
	static String string5 = Const.IStr("cut");
	static String string6 = Const.IStr("exec");
	static String string7 = Const.IStr("execdisj");
	static String string8 = Const.IStr("fail");
	static String string9 = Const.IStr("specialgoal");
	static String string10 = Const.IStr("true");
	static String string11 = Const.IStr("var");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		specialgoal3cont = mach.LoadPred("specialgoal", 2);
		var2cont = mach.LoadPred("var", 1);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_exec_1_1 extends pred_exec_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Fun(string0, new HeapChoice(mach.CUTB), new Fun(string8, continuation));
		mach.CUTB = mach.CurrentChoice;
		return var2cont;
	}
}

class pred_exec_1_2 extends pred_exec_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string6, var1.Deref(), new Fun(string6, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_exec_1_3 extends pred_exec_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string2, var1, var2))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string7, new Fun(string2, var1.Deref(), var2.Deref()), new Const(string10),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_exec_1_4 extends pred_exec_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string3, var1, var2))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string7, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_exec_1_5 extends pred_exec_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2;
		local_aregs[2] = new Fun(string0, new HeapChoice(mach.CUTB), new Fun(string6, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return specialgoal3cont;
	}
}

class pred_exec_1_6 extends pred_exec_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call2;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_execdisj_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_execdisj_2_1();
	static Code cl2 = new pred_execdisj_2_2();
	static Code cl3 = new pred_execdisj_2_3();
	static Code cl4 = new pred_execdisj_2_4();
	//static Code cut2cont;
	static Code exec2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("->");
	static String string2 = Const.IStr("cut");
	static String string3 = Const.IStr("exec");
	static String string4 = Const.IStr("execdisj");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_execdisj_2_1 extends pred_execdisj_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Fun(string0, new HeapChoice(mach.CUTB), new Fun(string3, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

class pred_execdisj_2_2 extends pred_execdisj_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string3, var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_execdisj_2_3 extends pred_execdisj_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

class pred_execdisj_2_4 extends pred_execdisj_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
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

class /**/ pred_execpendinggoals_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_execpendinggoals_1_1();
	static Code cl2 = new pred_execpendinggoals_1_2();
	static Code exec2cont;
	static Code execcontinuation1cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("exec");
	static String string4 = Const.IStr("execcontinuation");
	static String string5 = Const.IStr("execpendinggoals");

	protected void Init(Prolog mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
		execcontinuation1cont = mach.LoadPred("execcontinuation", 0);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_execpendinggoals_1_1 extends pred_execpendinggoals_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return execcontinuation1cont;
	}
}

class pred_execpendinggoals_1_2 extends pred_execpendinggoals_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Fun(string5, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return exec2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_findall2_4 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_findall2_4_1();
	static Code cl2 = new pred_findall2_4_2();
	static Code exec2cont;
	static Code retrievefindall3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("addfindall");
	static String string2 = Const.IStr("exec");
	static String string3 = Const.IStr("fail");
	static String string4 = Const.IStr("findall2");
	static String string5 = Const.IStr("retrievefindall");

	protected void Init(Prolog mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
		retrievefindall3cont = mach.LoadPred("retrievefindall", 2);
	}

	protected int Arity() {
		return 4;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3], mach.Areg[4] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_findall2_4_1 extends pred_findall2_4 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		if (!((areg3).Unify(var4)))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = new Fun(string1, var1.Deref(), var4.Deref(), new Fun(string3, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return exec2cont;
	}
}

class pred_findall2_4_2 extends pred_findall2_4 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		if (!((areg3).Unify(var4)))
			return Prolog.Fail0;
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

class /**/ pred_findall_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_findall_3_1();
	static Code initfindall2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("findall");
	static String string2 = Const.IStr("findall2");
	static String string3 = Const.IStr("initfindall");

	protected void Init(Prolog mach) {
		entry_code = this;
		initfindall2cont = mach.LoadPred("initfindall", 1);
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_findall_3_1 extends pred_findall_3 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Fun(string2, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return initfindall2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_freeze_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_freeze_2_1();
	static Code cl2 = new pred_freeze_2_2();
	static Code exec2cont;
	static Code var2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("cut");
	static String string2 = Const.IStr("exec");
	static String string3 = Const.IStr("freeze");
	static String string4 = Const.IStr("freeze_internal");
	static String string5 = Const.IStr("var");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
		var2cont = mach.LoadPred("var", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_freeze_2_1 extends pred_freeze_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Fun(string0, new HeapChoice(mach.CUTB),
				new Fun(string4, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return var2cont;
	}
}

class pred_freeze_2_2 extends pred_freeze_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
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

class /**/ pred_getargs_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_getargs_2_1();
	static Code cl2 = new pred_getargs_2_2();
	static Code ap4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(")");
	static String string2 = Const.IStr(",");
	static String string3 = Const.IStr(".");
	static String string4 = Const.IStr("[]");
	static String string5 = Const.IStr("ap");
	static String string6 = Const.IStr("const");
	static String string7 = Const.IStr("getargs");
	static String string8 = Const.IStr("maketerm");
	static String string9 = Const.IStr("unify");
	static Int posint900 = new Int(900);

	protected void Init(Prolog mach) {
		entry_code = this;
		ap4cont = mach.LoadPred("ap", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_getargs_2_1 extends pred_getargs_2 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Fun(string3, new Fun(string6, new Const(string1)), new Const(string4));
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string8, var3.Deref(), var4, posint900,
				new Fun(string9, new Fun(string3, var4.Deref(), new Const(string4)), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class pred_getargs_2_2 extends pred_getargs_2 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Fun(string3, new Fun(string6, new Const(string2)), var4);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string8, var3.Deref(), var5, posint900,
				new Fun(string9, new Fun(string3, var5.Deref(), var6), var2.Deref(),
						new Fun(string7, var4.Deref(), var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_infix_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_infix_3_1();
	static Code cl2 = new pred_infix_3_2();
	static Code cl3 = new pred_infix_3_3();
	static Code cl4 = new pred_infix_3_4();
	static Code cl5 = new pred_infix_3_5();
	static Code cl6 = new pred_infix_3_6();
	static Code cl7 = new pred_infix_3_7();
	static Code cl8 = new pred_infix_3_8();
	static Code cl9 = new pred_infix_3_9();
	static Code cl10 = new pred_infix_3_10();
	static Code cl11 = new pred_infix_3_11();
	static Code cl12 = new pred_infix_3_12();
	static Code cl13 = new pred_infix_3_13();
	static Code cl14 = new pred_infix_3_14();
	static Code cl15 = new pred_infix_3_15();
	static Code cl16 = new pred_infix_3_16();
	static Code cl17 = new pred_infix_3_17();
	static Code cl18 = new pred_infix_3_18();
	static Code cl19 = new pred_infix_3_19();
	static Code cl20 = new pred_infix_3_20();
	static Code cl21 = new pred_infix_3_21();
	static Code cl22 = new pred_infix_3_22();
	static Code cl23 = new pred_infix_3_23();
	static Code cl24 = new pred_infix_3_24();
	static Code cl25 = new pred_infix_3_25();
	static Code cl26 = new pred_infix_3_26();
	static Code cl27 = new pred_infix_3_27();
	static Code cl28 = new pred_infix_3_28();
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

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_infix_3_1 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1200)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string10))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_2 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1000)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string4))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_3 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1100)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string11))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_4 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1050)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string6))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_5 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string14))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_6 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string29))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_7 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string15))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_8 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string18))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_9 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string22))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_10 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string24))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_11 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string23))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_12 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string25))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_13 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string16))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_14 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string12))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_15 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl16);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string17))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_16 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string19))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_17 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint700)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string20))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_18 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint550)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string9))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_19 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl20);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string3))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_20 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string5))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_21 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string1))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_22 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl23);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string2))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_23 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string7))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_24 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl25);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string8))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_25 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string13))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_26 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl27);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint400)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string33))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string21))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_27 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint300)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string31))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string30))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_infix_3_28 extends pred_infix_3 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint200)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string32))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string26))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_integer_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_integer_1_1();
	static Code type_of3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("integer");
	static String string2 = Const.IStr("type_of");

	protected void Init(Prolog mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_integer_1_1 extends pred_integer_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
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

class /**/ pred_loop_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_loop_1_1();
	static Code cl2 = new pred_loop_1_2();
	//static Code cut2cont;
	static Code is3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("-");
	static String string2 = Const.IStr("cut");
	static String string3 = Const.IStr("is");
	static String string4 = Const.IStr("loop");
	static Int posint0 = new Int(0);
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		is3cont = mach.LoadPred("is", 2);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_loop_1_1 extends pred_loop_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint0)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_loop_1_2 extends pred_loop_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Fun(string1, var1.Deref(), posint1);
		local_aregs[2] = new Fun(string4, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return is3cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_m1_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_m1_2_1();
	static Code cl2 = new pred_m1_2_2();
	static Code var2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("-");
	static String string2 = Const.IStr(".");
	static String string3 = Const.IStr("m1");
	static String string4 = Const.IStr("var");

	protected void Init(Prolog mach) {
		entry_code = this;
		var2cont = mach.LoadPred("var", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_m1_2_1 extends pred_m1_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string2, new Fun(string1, var1.Deref(), var2), var3))))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return var2cont;
	}
}

class pred_m1_2_2 extends pred_m1_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string2, var2, var3))))
			return Prolog.Fail0;
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

class /**/ pred_maketerm_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_maketerm_2_1();
	static Code maketerm4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("maketerm");
	static Int posint1200 = new Int(1200);

	protected void Init(Prolog mach) {
		entry_code = this;
		maketerm4cont = mach.LoadPred("maketerm", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_maketerm_2_1 extends pred_maketerm_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
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

class /**/ pred_maketerm_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_maketerm_3_1();
	static Code cl2 = new pred_maketerm_3_2();
	static Code cl3 = new pred_maketerm_3_3();
	static Code cl4 = new pred_maketerm_3_4();
	static Code cl5 = new pred_maketerm_3_5();
	static Code cl6 = new pred_maketerm_3_6();
	static Code cl7 = new pred_maketerm_3_7();
	static Code cl8 = new pred_maketerm_3_8();
	static Code cl9 = new pred_maketerm_3_9();
	static Code cl10 = new pred_maketerm_3_10();
	static Code cl11 = new pred_maketerm_3_11();
	static Code ap4cont;
	//static Code cut2cont;
	static Code getargs3cont;
	static Code prefix4cont;
	static Code unify3cont;
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

	protected void Init(Prolog mach) {
		entry_code = this;
		ap4cont = mach.LoadPred("ap", 3);
		getargs3cont = mach.LoadPred("getargs", 2);
		prefix4cont = mach.LoadPred("prefix", 3);
		unify3cont = mach.LoadPred("unify", 2);
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_maketerm_3_1 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string4, new Fun(string21, var1, var2, var3), new Const(string6)))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var4)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var5)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = new Fun(string0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return unify3cont;
	}
}

class pred_maketerm_3_2 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string4, new Fun(string14, var1), new Const(string6)))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string19, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_maketerm_3_3 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, var1), new Const(string6)))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string19, var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_maketerm_3_4 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, var1),
				new Fun(string4, new Fun(string10, new Const(string1)), var2)))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var4)))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var5;
		local_aregs[2] = new Fun(string20, var3.Deref(), var1.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return getargs3cont;
	}
}

class pred_maketerm_3_5 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Fun(string4, new Fun(string10, var5), var6);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string13, var7, var8, var5.Deref(),
				new Fun(string18, var7.Deref(), var3.Deref(),
						new Fun(string16, var8.Deref(), var7.Deref(), var9, var10,
								new Fun(string15, var4.Deref(), var11, var9.Deref(),
										new Fun(string15, var6.Deref(), var12, var10.Deref(),
												new Fun(string20, var2.Deref(), var5.Deref(),
														new Fun(string4, var11.Deref(),
																new Fun(string4, var12.Deref(), new Const(string6))),
														continuation))))));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class pred_maketerm_3_6 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, var1), var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var4)))
			return Prolog.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = var6;
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string18, var5.Deref(), var4.Deref(),
				new Fun(string16, var6.Deref(), var5.Deref(), var7,
						new Fun(string15, var2.Deref(), var8, var7.Deref(), new Fun(string20, var3.Deref(),
								var1.Deref(), new Fun(string4, var8.Deref(), new Const(string6)), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return prefix4cont;
	}
}

class pred_maketerm_3_7 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, new Const(string5)), var1))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string4, var2, var3))))
			return Prolog.Fail0;
		if (!((areg2).Unify(var4)))
			return Prolog.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = new Fun(string4, new Fun(string10, new Const(string3)), var6);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string15, var5.Deref(), var2.Deref(), posint900,
				new Fun(string15, new Fun(string4, new Fun(string10, new Const(string5)), var6.Deref()), var3.Deref(),
						posint900, continuation));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class pred_maketerm_3_8 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, new Const(string5)), var1))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string4, var2, var3))))
			return Prolog.Fail0;
		if (!((areg2).Unify(var4)))
			return Prolog.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = new Fun(string4, new Fun(string10, new Const(string22)), var6);
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string8, var7,
				new Fun(string4, new Fun(string10, new Const(string7)), new Const(string6)), var6.Deref(),
				new Fun(string15, var5.Deref(), var2.Deref(), posint900,
						new Fun(string15, var7.Deref(), var3.Deref(), posint900, continuation)));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class pred_maketerm_3_9 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, new Const(string1)), var1))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Fun(string4, new Fun(string10, new Const(string2)), new Const(string6));
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string0, new HeapChoice(mach.CUTB),
				new Fun(string15, var4.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class pred_maketerm_3_10 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, new Const(string5)), var1))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string4, var2, new Const(string6)))))
			return Prolog.Fail0;
		if (!((areg2).Unify(var3)))
			return Prolog.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = new Fun(string4, new Fun(string10, new Const(string7)), new Const(string6));
		local_aregs[2] = var1.Deref();
		local_aregs[3] = new Fun(string15, var4.Deref(), var2.Deref(), posint900, continuation);
		mach.CUTB = mach.CurrentChoice;
		return ap4cont;
	}
}

class pred_maketerm_3_11 extends pred_maketerm_3 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string4, new Fun(string10, new Const(string5)),
				new Fun(string4, new Fun(string10, new Const(string7)), new Const(string6))))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return Prolog.Fail0;
		if (!((areg2).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_max_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_max_3_1();
	static Code cl2 = new pred_max_3_2();
	static Code cl3 = new pred_max_3_3();
	static Code smallerthan3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("call");
	static String string2 = Const.IStr("max");
	static String string3 = Const.IStr("smallerthan");

	protected void Init(Prolog mach) {
		entry_code = this;
		smallerthan3cont = mach.LoadPred("smallerthan", 2);
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_max_3_1 extends pred_max_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var2.Deref())))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return smallerthan3cont;
	}
}

class pred_max_3_2 extends pred_max_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return smallerthan3cont;
	}
}

class pred_max_3_3 extends pred_max_3 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return Prolog.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_newprec_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_newprec_3_1();
	static Code cl2 = new pred_newprec_3_2();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("-");
	static String string2 = Const.IStr("call");
	static String string3 = Const.IStr("cut");
	static String string4 = Const.IStr("fx");
	static String string5 = Const.IStr("fy");
	static String string6 = Const.IStr("is");
	static String string7 = Const.IStr("newprec");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_newprec_3_1 extends pred_newprec_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string4))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var2)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string6, var2.Deref(), new Fun(string1, var1.Deref(), posint1), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_newprec_3_2 extends pred_newprec_3 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string5))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_newprec_4 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_newprec_4_1();
	static Code cl2 = new pred_newprec_4_2();
	static Code cl3 = new pred_newprec_4_3();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("-");
	static String string2 = Const.IStr("cut");
	static String string3 = Const.IStr("is");
	static String string4 = Const.IStr("newprec");
	static String string5 = Const.IStr("unify");
	static String string6 = Const.IStr("xfx");
	static String string7 = Const.IStr("xfy");
	static String string8 = Const.IStr("yfx");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 4;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3], mach.Areg[4] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_newprec_4_1 extends pred_newprec_4 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg3).Unify(var3)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string3, var2.Deref(), new Fun(string1, var1.Deref(), posint1),
				new Fun(string3, var3.Deref(), new Fun(string1, var1.Deref(), posint1), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_newprec_4_2 extends pred_newprec_4 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg3).Unify(var3)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string3, var2.Deref(), new Fun(string1, var1.Deref(), posint1),
				new Fun(string5, var1.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_newprec_4_3 extends pred_newprec_4 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg2).Unify(var2)))
			return Prolog.Fail0;
		if (!((areg3).Unify(var3)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string3, var3.Deref(), new Fun(string1, var1.Deref(), posint1),
				new Fun(string5, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_not_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_not_1_1();
	static Code cl2 = new pred_not_1_2();
	static Code exec2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("call");
	static String string2 = Const.IStr("cut");
	static String string3 = Const.IStr("exec");
	static String string4 = Const.IStr("fail");
	static String string5 = Const.IStr("not");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_not_1_1 extends pred_not_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = new Fun(string0, new HeapChoice(mach.CUTB), new Fun(string4, continuation));
		mach.CUTB = mach.CurrentChoice;
		return exec2cont;
	}
}

class pred_not_1_2 extends pred_not_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_noteq_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_noteq_2_1();
	static Code cl2 = new pred_noteq_2_2();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("call");
	static String string2 = Const.IStr("cut");
	static String string3 = Const.IStr("fail");
	static String string4 = Const.IStr("noteq");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_noteq_2_1 extends pred_noteq_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string3, continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_noteq_2_2 extends pred_noteq_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class pred_notmore_0 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_notmore_0_1();
	static Code cl2 = new pred_notmore_0_2();
	static Code get02cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("call");
	static String string2 = Const.IStr("cut");
	static String string3 = Const.IStr("fail");
	static String string4 = Const.IStr("get0");
	static String string5 = Const.IStr("noteq");
	static String string6 = Const.IStr("notmore");
	static String string7 = Const.IStr("untilend");
	static Int posint1 = new Int(1);
	static Int posint10 = new Int(10);

	protected void Init(Prolog mach) {
		entry_code = this;
		get02cont = mach.LoadPred("get0", 1);
	}

	protected int Arity() {
		return 0;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_notmore_0_1 extends pred_notmore_0 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Term var1 = new Var(mach);
		local_aregs[0] = var1;
		local_aregs[1] = new Fun(string5, var1.Deref(), posint10, new Fun(string0, new HeapChoice(mach.CUTB),
				new Fun(string7, var1.Deref(), new Fun(string3, continuation))));
		mach.CUTB = mach.CurrentChoice;
		return get02cont;
	}
}

class pred_notmore_0_2 extends pred_notmore_0 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_notvmember_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_notvmember_2_1();
	static Code cl2 = new pred_notvmember_2_2();
	static Code cl3 = new pred_notvmember_2_3();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("=");
	static String string3 = Const.IStr("[]");
	static String string4 = Const.IStr("cut");
	static String string5 = Const.IStr("fail");
	static String string6 = Const.IStr("notvmember");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_notvmember_2_1 extends pred_notvmember_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string3))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_notvmember_2_2 extends pred_notvmember_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string1, new Fun(string2, var2, var1.Deref()), var3))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string5, continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_notvmember_2_3 extends pred_notvmember_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		//Term areg1 = local_aregs[1].Deref();
		//Term areg0 local_aregs[0].Deref()= ;
		Term var1 = new Var(mach);
		if (!((local_aregs[0].Deref()).Unify(var1)))
			return Prolog.Fail0;
		Term var2 = new Var(mach);
		Term var3 = new Var(mach);
		if (!((local_aregs[1].Deref()).Unify(new Fun(string1, var2, var3))))
			return Prolog.Fail0;
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

class /**/ pred_nrev_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_nrev_2_1();
	static Code cl2 = new pred_nrev_2_2();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("append");
	static String string4 = Const.IStr("cut");
	static String string5 = Const.IStr("nrev");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_nrev_2_1 extends pred_nrev_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string2))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_nrev_2_2 extends pred_nrev_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = new Fun(string3, var4.Deref(), new Fun(string1, var1.Deref(), new Const(string2)),
				var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_or_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_or_2_1();
	static Code cl2 = new pred_or_2_2();
	static Code exec2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("exec");
	static String string2 = Const.IStr("or");

	protected void Init(Prolog mach) {
		entry_code = this;
		exec2cont = mach.LoadPred("exec", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_or_2_1 extends pred_or_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return exec2cont;
	}
}

class pred_or_2_2 extends pred_or_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
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

class /**/ pred_prefix_3 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_prefix_3_1();
	static Code cl2 = new pred_prefix_3_2();
	static Code cl3 = new pred_prefix_3_3();
	static Code cl4 = new pred_prefix_3_4();
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("+");
	static String string2 = Const.IStr("-");
	static String string3 = Const.IStr(":-");
	static String string4 = Const.IStr("?-");
	static String string5 = Const.IStr("call");
	static String string6 = Const.IStr("fx");
	static String string7 = Const.IStr("prefix");
	static Int posint500 = new Int(500);
	static Int posint1200 = new Int(1200);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 3;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_prefix_3_1 extends pred_prefix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1200)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string3))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_prefix_3_2 extends pred_prefix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint1200)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string4))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_prefix_3_3 extends pred_prefix_3 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string1))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_prefix_3_4 extends pred_prefix_3 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint500)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string6))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string2))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_read_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_read_1_1();
	static Code nexttoken2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("cut");
	static String string2 = Const.IStr("maketerm");
	static String string3 = Const.IStr("nexttoken");
	static String string4 = Const.IStr("read");
	static String string5 = Const.IStr("readall");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		nexttoken2cont = mach.LoadPred("nexttoken", 1);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_read_1_1 extends pred_read_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Fun(string5, var2.Deref(), var3, new Fun(string2, var3.Deref(), var1.Deref(),
				new Fun(string0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return nexttoken2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_readall_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_readall_2_1();
	static Code cl2 = new pred_readall_2_2();
	static Code cl3 = new pred_readall_2_3();
	//static Code cut2cont;
	static Code nexttoken2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("cut");
	static String string4 = Const.IStr("end_of_clause");
	static String string5 = Const.IStr("end_of_file");
	static String string6 = Const.IStr("halt");
	static String string7 = Const.IStr("nexttoken");
	static String string8 = Const.IStr("readall");
	static String string9 = Const.IStr("unify");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		nexttoken2cont = mach.LoadPred("nexttoken", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_readall_2_1 extends pred_readall_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string5))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string6, continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_readall_2_2 extends pred_readall_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string4))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var1)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = new Fun(string9, new Const(string2), var1.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_readall_2_3 extends pred_readall_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string1, var1.Deref(), var2))))
			return Prolog.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Fun(string8, var3.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return nexttoken2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_smeq_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_smeq_1_1();
	static Code cl2 = new pred_smeq_1_2();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("<");
	static String string2 = Const.IStr("=");
	static String string3 = Const.IStr("call");
	static String string4 = Const.IStr("cut");
	static String string5 = Const.IStr("smeq");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_smeq_1_1 extends pred_smeq_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string1))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_smeq_1_2 extends pred_smeq_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_smgr_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_smgr_1_1();
	static Code cl2 = new pred_smgr_1_2();
	//static Code cut2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("=");
	static String string2 = Const.IStr(">");
	static String string3 = Const.IStr("call");
	static String string4 = Const.IStr("cut");
	static String string5 = Const.IStr("smgr");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_smgr_1_1 extends pred_smgr_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_smgr_1_2 extends pred_smgr_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string1))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_sort_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_sort_2_1();
	static Code cl2 = new pred_sort_2_2();
	static Code cut2cont = pred_split_4.entry_code;
	static Code split5cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("append");
	static String string4 = Const.IStr("cut");
	static String string5 = Const.IStr("sort");
	static String string6 = Const.IStr("split");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		//split5cont = mach.LoadPred("split", 4);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_sort_2_1 extends pred_sort_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string2))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_sort_2_2 extends pred_sort_2 {
	public Code Exec(Prolog mach) {
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
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(var3)))
			return Prolog.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var4;
		local_aregs[3] = var5;
		local_aregs[4] = new Fun(string5, var4.Deref(), var6, new Fun(string5, var5.Deref(), var7, new Fun(string3,
				var6.Deref(), new Fun(string1, var1.Deref(), var7.Deref()), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return split5cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_specialgoal_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_specialgoal_2_1();
	static Code cl2 = new pred_specialgoal_2_2();
	static Code cl3 = new pred_specialgoal_2_3();
	static Code cl4 = new pred_specialgoal_2_4();
	static Code cl5 = new pred_specialgoal_2_5();
	static Code cl6 = new pred_specialgoal_2_6();
	static Code cl7 = new pred_specialgoal_2_7();
	static Code cl8 = new pred_specialgoal_2_8();
	static Code cl9 = new pred_specialgoal_2_9();
	static Code cl10 = new pred_specialgoal_2_10();
	static Code cl11 = new pred_specialgoal_2_11();
	static Code cl12 = new pred_specialgoal_2_12();
	//static Code cut2cont;
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

	protected void Init(Prolog mach) {
		entry_code = this;
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_specialgoal_2_1 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string2, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string17, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_2 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string5, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string16, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_3 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string7, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string17, var2.Deref(), var1.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_4 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string8, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string16, var2.Deref(), var1.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_5 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string4, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string13, var2.Deref(), var1.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_6 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string3, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string24, var2.Deref(), var1.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_7 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string1, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string15, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_8 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string9, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string23, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_9 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string11, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string21, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_10 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string10, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string22, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_11 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string12, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string20, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_specialgoal_2_12 extends pred_specialgoal_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string6, var1, var2))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string19, var1.Deref(), var2.Deref()))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return Prolog.Call1;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_split_4 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_split_4_1();
	static Code cl2 = new pred_split_4_2();
	static Code cl3 = new pred_split_4_3();
	//static Code cut2cont;
	static Code smallerthan3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("cut");
	static String string4 = Const.IStr("smallerthan");
	static String string5 = Const.IStr("split");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		smallerthan3cont = mach.LoadPred("smallerthan", 2);
	}

	protected int Arity() {
		return 4;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2], mach.Areg[3], mach.Areg[4] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_split_4_1 extends pred_split_4 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Const(string2))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Const(string2))))
			return Prolog.Fail0;
		if (!((areg3).Unify(new Const(string2))))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return Prolog.Call1;
	}
}

class pred_split_4_2 extends pred_split_4 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string1, var2, var3))))
			return Prolog.Fail0;
		if (!((areg2).Unify(new Fun(string1, var2.Deref(), var4))))
			return Prolog.Fail0;
		if (!((areg3).Unify(var5)))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = new Fun(string0, new HeapChoice(mach.CUTB),
				new Fun(string5, var1.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return smallerthan3cont;
	}
}

class pred_split_4_3 extends pred_split_4 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string1, var2, var3))))
			return Prolog.Fail0;
		if (!((areg2).Unify(var4)))
			return Prolog.Fail0;
		if (!((areg3).Unify(new Fun(string1, var2.Deref(), var5))))
			return Prolog.Fail0;
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

class /**/ pred_statistics_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_statistics_2_1();
	static Code cputime2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(".");
	static String string2 = Const.IStr("[]");
	static String string3 = Const.IStr("cputime");
	static String string4 = Const.IStr("runtime");
	static String string5 = Const.IStr("statistics");

	protected void Init(Prolog mach) {
		entry_code = this;
		cputime2cont = mach.LoadPred("cputime", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_statistics_2_1 extends pred_statistics_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Const(string4))))
			return Prolog.Fail0;
		if (!((areg1).Unify(new Fun(string1, var1, new Fun(string1, var2, new Const(string2))))))
			return Prolog.Fail0;
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

class /**/ pred_termequal_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_termequal_2_1();
	static Code compare4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("=");
	static String string2 = Const.IStr("compare");
	static String string3 = Const.IStr("termequal");

	protected void Init(Prolog mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_termequal_2_1 extends pred_termequal_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
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

class /**/ pred_termgreaterequal_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_termgreaterequal_2_1();
	static Code compare4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("compare");
	static String string2 = Const.IStr("smgr");
	static String string3 = Const.IStr("termgreaterequal");

	protected void Init(Prolog mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_termgreaterequal_2_1 extends pred_termgreaterequal_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = new Fun(string2, var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return compare4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_termgreaterthan_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_termgreaterthan_2_1();
	static Code compare4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(">");
	static String string2 = Const.IStr("compare");
	static String string3 = Const.IStr("termgreaterthan");

	protected void Init(Prolog mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_termgreaterthan_2_1 extends pred_termgreaterthan_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
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

class /**/ pred_termsmallerequal_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_termsmallerequal_2_1();
	static Code compare4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("compare");
	static String string2 = Const.IStr("smeq");
	static String string3 = Const.IStr("termsmallerequal");

	protected void Init(Prolog mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_termsmallerequal_2_1 extends pred_termsmallerequal_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = new Fun(string2, var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return compare4cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_termsmallerthan_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_termsmallerthan_2_1();
	static Code compare4cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("<");
	static String string2 = Const.IStr("compare");
	static String string3 = Const.IStr("termsmallerthan");

	protected void Init(Prolog mach) {
		entry_code = this;
		compare4cont = mach.LoadPred("compare", 3);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_termsmallerthan_2_1 extends pred_termsmallerthan_2 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
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

class /**/ pred_time_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_time_1_1();
	static Code cputime2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("-");
	static String string2 = Const.IStr("cputime");
	static String string3 = Const.IStr("exec");
	static String string4 = Const.IStr("is");
	static String string5 = Const.IStr("nl");
	static String string6 = Const.IStr("time");
	static String string7 = Const.IStr("write");

	protected void Init(Prolog mach) {
		entry_code = this;
		cputime2cont = mach.LoadPred("cputime", 1);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_time_1_1 extends pred_time_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var4 = new Var(mach);
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Fun(string3, var1.Deref(),
				new Fun(string2, var3, new Fun(string4, var4, new Fun(string1, var3.Deref(), var2.Deref()),
						new Fun(string7, var4.Deref(), new Fun(string5, continuation)))));
		mach.CUTB = mach.CurrentChoice;
		return cputime2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_top_0 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_top_0_1();
	static Code cl2 = new pred_top_0_2();
	static Code write2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("?- ");
	static String string2 = Const.IStr("Yes");
	static String string3 = Const.IStr("cut");
	static String string4 = Const.IStr("exec");
	static String string5 = Const.IStr("fail");
	static String string6 = Const.IStr("nl");
	static String string7 = Const.IStr("notmore");
	static String string8 = Const.IStr("top");
	static String string9 = Const.IStr("vread");
	static String string10 = Const.IStr("write");
	static String string11 = Const.IStr("writevars");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		write2cont = mach.LoadPred("write", 1);
	}

	protected int Arity() {
		return 0;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_top_0_1 extends pred_top_0 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		local_aregs[0] = new Const(string1);
		local_aregs[1] = new Fun(string9, var1, var2,
				new Fun(string4, var1.Deref(),
						new Fun(string11, var2.Deref(), new Fun(string10, new Const(string2), new Fun(string6, new Fun(
								string7,
								new Fun(string0, new HeapChoice(mach.CUTB), new Fun(string5, continuation))))))));
		mach.CUTB = mach.CurrentChoice;
		return write2cont;
	}
}

class pred_top_0_2 extends pred_top_0 {
	public Code Exec(Prolog mach) {
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

class /**/ pred_toplevel_0 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_toplevel_0_1();
	static Code cl2 = new pred_toplevel_0_2();
	static Code top1cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("fail");
	static String string2 = Const.IStr("top");
	static String string3 = Const.IStr("toplevel");

	protected void Init(Prolog mach) {
		entry_code = this;
		top1cont = mach.LoadPred("top", 0);
	}

	protected int Arity() {
		return 0;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_toplevel_0_1 extends pred_toplevel_0 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = new Fun(string1, continuation);
		mach.CUTB = mach.CurrentChoice;
		return top1cont;
	}
}

class pred_toplevel_0_2 extends pred_toplevel_0 {
	public Code Exec(Prolog mach) {
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

class /**/ pred_untilend_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_untilend_1_1();
	static Code cl2 = new pred_untilend_1_2();
	//static Code cut2cont;
	static Code get02cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("cut");
	static String string2 = Const.IStr("get0");
	static String string3 = Const.IStr("untilend");
	static Int posint1 = new Int(1);
	static Int posint10 = new Int(10);

	protected void Init(Prolog mach) {
		entry_code = this;
		get02cont = mach.LoadPred("get0", 1);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_untilend_1_1 extends pred_untilend_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(posint10)))
			return Prolog.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return Prolog.Call1;
	}
}

class pred_untilend_1_2 extends pred_untilend_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = new Fun(string3, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return get02cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_var_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_var_1_1();
	static Code type_of3cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("type_of");
	static String string2 = Const.IStr("var");

	protected void Init(Prolog mach) {
		entry_code = this;
		type_of3cont = mach.LoadPred("type_of", 2);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_var_1_1 extends pred_var_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var1 = new Var(mach);
		if (!((areg0).Unify(var1)))
			return Prolog.Fail0;
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

class /**/ pred_vread_2 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_vread_2_1();
	static Code nexttoken2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr("[]");
	static String string2 = Const.IStr("collectvars");
	static String string3 = Const.IStr("cut");
	static String string4 = Const.IStr("maketerm");
	static String string5 = Const.IStr("nexttoken");
	static String string6 = Const.IStr("readall");
	static String string7 = Const.IStr("vread");
	static Int posint1 = new Int(1);

	protected void Init(Prolog mach) {
		entry_code = this;
		nexttoken2cont = mach.LoadPred("nexttoken", 1);
	}

	protected int Arity() {
		return 2;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1], mach.Areg[2] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_vread_2_1 extends pred_vread_2 {
	public Code Exec(Prolog mach) {
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
			return Prolog.Fail0;
		if (!((areg1).Unify(var2)))
			return Prolog.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = new Fun(string6, var3.Deref(), var4,
				new Fun(string4, var4.Deref(), var1.Deref(), new Fun(string0, new HeapChoice(mach.CUTB),
						new Fun(string2, var4.Deref(), new Const(string1), var2.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return nexttoken2cont;
	}
}

// Generated java file - release 0.1 - do not edit !
// Copyright August 16, 1996, KUL and CUM
// Authors: Bart Demoen and Paul Tarau

class /**/ pred_writevars_1 extends Code {
	static Code entry_code;
	static Code cl1 = new pred_writevars_1_1();
	static Code cl2 = new pred_writevars_1_2();
	static Code cl3 = new pred_writevars_1_3();
	static Code write2cont;
	static String string0 = Const.IStr("cut");
	static String string1 = Const.IStr(" = ");
	static String string2 = Const.IStr(".");
	static String string3 = Const.IStr("=");
	static String string4 = Const.IStr("[]");
	static String string5 = Const.IStr("call");
	static String string6 = Const.IStr("fail");
	static String string7 = Const.IStr("nl");
	static String string8 = Const.IStr("write");
	static String string9 = Const.IStr("writevars");

	protected void Init(Prolog mach) {
		entry_code = this;
		write2cont = mach.LoadPred("write", 1);
	}

	protected int Arity() {
		return 1;
	}

	public Code Exec(Prolog mach) {
		Term aregs[] = { mach.Areg[0], mach.Areg[1] };
		mach.CreateChoicePoint(aregs);
		return cl1.Exec(mach);
	}
}

class pred_writevars_1_1 extends pred_writevars_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(new Const(string4))))
			return Prolog.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return Prolog.Call1;
	}
}

class pred_writevars_1_2 extends pred_writevars_1 {
	public Code Exec(Prolog mach) {
		mach.FillAlternative(cl3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var3 = new Var(mach);
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string2, new Fun(string3, var1, var2), var3))))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = new Fun(string8, new Const(string1),
				new Fun(string8, var1.Deref(), new Fun(string7, new Fun(string6, continuation))));
		mach.CUTB = mach.CurrentChoice;
		return write2cont;
	}
}

class pred_writevars_1_3 extends pred_writevars_1 {
	public Code Exec(Prolog mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Term var2 = new Var(mach);
		Term var1 = new Var(mach);
		if (!((areg0).Unify(new Fun(string2, var1, var2))))
			return Prolog.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return entry_code;
	}
}
