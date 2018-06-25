import java.util.function.Function;

class ops8 /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("*");
	static Const s2 = Const.Intern("+");
	static Const s3 = Const.Intern("-");
	static Const s4 = Const.Intern(".");
	static Const s5 = Const.Intern("/");
	static Const s6 = Const.Intern(":-");
	static Const s7 = Const.Intern("^");
	static Const s8 = Const.Intern("call");
	static Const s9 = Const.Intern("cut");
	static Const s10 = Const.Intern("d");
	static Const s11 = Const.Intern("exp");
	static Const s12 = Const.Intern("integer");
	static Const s13 = Const.Intern("is");
	static Const s14 = Const.Intern("log");
	static Const s15 = Const.Intern("ops8");
	static Const s16 = Const.Intern("top");
	static Const s17 = Const.Intern("x");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint3 = Term.Number(3);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_8950):-ops8(_8950).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_top_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_top_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_ops8_0::exec_static;
	}
}

class pred_ops8_0 extends Code {

	/*
	 * 
	 * ops8(_9068):-d((x+1)*((x^2+2)*(x^3+3)),x,_9046,_9068).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_ops8_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_ops8_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = F(ops8.s1, F(ops8.s2, ops8.s17, ops8.posint1),
				F(ops8.s1, F(ops8.s2, F(ops8.s7, ops8.s17, ops8.posint2), ops8.posint2),
						F(ops8.s2, F(ops8.s7, ops8.s17, ops8.posint3), ops8.posint3)));
		local_aregs[1] = ops8.s17;
		local_aregs[2] = var1;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_d_3::exec_static;
	}
}

class pred_d_3 extends Code {

	/*
	 * 
	 * d(_9166+_9168,_9180,_9172+_9174,_9250):-cut(1,d(_9166,_9180,_9172,d(_9168,
	 * _9180,_9174,_9250))).
	 * d(_9448-_9450,_9462,_9454-_9456,_9532):-cut(1,d(_9448,_9462,_9454,d(_9450,
	 * _9462,_9456,_9532))).
	 * d(_9730*_9732,_9756,_9736*_9732+_9730*_9744,_9826):-cut(1,d(_9730,_9756,_9736
	 * ,d(_9732,_9756,_9744,_9826))).
	 * d(_10024/_10026,_10062,(_10030*_10026-_10024*_10038)/_10026^2,_10132):-cut(1,
	 * d(_10024,_10062,_10030,d(_10026,_10062,_10038,_10132))).
	 * d(_10330^_10332,_10356,_10336*_10332*_10330^_10344,_10440):-cut(1,integer(
	 * _10332,is(_10344,_10332-1,d(_10330,_10356,_10336,_10440)))).
	 * d(-_10660,_10670,-_10664,_10726):-cut(1,d(_10660,_10670,_10664,_10726)).
	 * d(exp(_10860),_10876,exp(_10860)*_10870,_10932):-cut(1,d(_10860,_10876,_10870
	 * ,_10932)).
	 * d(log(_11066),_11078,_11070/_11066,_11134):-cut(1,d(_11066,_11078,_11070,
	 * _11134)). d(_11268,_11268,1,_11312):-cut(1,_11312).
	 * d(_11382,_11384,0,_11408):-call(_11408).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_d_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s2, var4, var5))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(ops8.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s3, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s3, var4, var5))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(ops8.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s2, F(ops8.s1, var4, var2.Deref()), F(ops8.s1, var1.Deref(), var5)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(ops8.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s5, F(ops8.s3, F(ops8.s1, var4, var2.Deref()), F(ops8.s1, var1.Deref(), var5)),
				F(ops8.s7, var2.Deref(), ops8.posint2)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(ops8.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s1, F(ops8.s1, var4, var2.Deref()), F(ops8.s7, var1.Deref(), var5)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s12, var2.Deref(), F(ops8.s13, var5.Deref(), F(ops8.s3, var2.Deref(), ops8.posint1),
				F(ops8.s10, var1.Deref(), var3.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__6(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s3, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s3, var3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__7(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s11, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s1, F(ops8.s11, var1.Deref()), var3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__8(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(ops8.s14, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(ops8.s5, var3, var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(ops8.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__9(PrologMachine mach) {
		mach.FillAlternative(pred_d_3::exec_pred_d_3__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(ops8.posint1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_d_3__10(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(ops8.posint0)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}
