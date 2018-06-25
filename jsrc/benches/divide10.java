import java.util.function.Function;

class divide10 /* extends CodeFile */ {
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
	static Const s11 = Const.Intern("divide10");
	static Const s12 = Const.Intern("exp");
	static Const s13 = Const.Intern("integer");
	static Const s14 = Const.Intern("is");
	static Const s15 = Const.Intern("log");
	static Const s16 = Const.Intern("top");
	static Const s17 = Const.Intern("x");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_13150):-divide10(_13150).
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
		return (Function<PrologMachine, Function>) pred_divide10_0::exec_static;
	}
}

class pred_divide10_0 extends Code {

	/*
	 * 
	 * divide10(_13280):-d(x/x/x/x/x/x/x/x/x/x,x,_13258,_13280).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_divide10_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_divide10_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = F(divide10.s5,
				F(divide10.s5,
						F(divide10.s5, F(divide10.s5, F(divide10.s5, F(divide10.s5,
								F(divide10.s5, F(divide10.s5, F(divide10.s5, divide10.s17, divide10.s17), divide10.s17),
										divide10.s17),
								divide10.s17), divide10.s17), divide10.s17), divide10.s17),
						divide10.s17),
				divide10.s17);
		local_aregs[1] = divide10.s17;
		local_aregs[2] = var1;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_d_3::exec_static;
	}
}

class pred_d_3 extends Code {

	/*
	 * 
	 * d(_13378+_13380,_13392,_13384+_13386,_13462):-cut(1,d(_13378,_13392,_13384,d(
	 * _13380,_13392,_13386,_13462))).
	 * d(_13660-_13662,_13674,_13666-_13668,_13744):-cut(1,d(_13660,_13674,_13666,d(
	 * _13662,_13674,_13668,_13744))).
	 * d(_13942*_13944,_13968,_13948*_13944+_13942*_13956,_14038):-cut(1,d(_13942,
	 * _13968,_13948,d(_13944,_13968,_13956,_14038))).
	 * d(_14236/_14238,_14274,(_14242*_14238-_14236*_14250)/_14238^2,_14344):-cut(1,
	 * d(_14236,_14274,_14242,d(_14238,_14274,_14250,_14344))).
	 * d(_14542^_14544,_14568,_14548*_14544*_14542^_14556,_14652):-cut(1,integer(
	 * _14544,is(_14556,_14544-1,d(_14542,_14568,_14548,_14652)))).
	 * d(-_14872,_14882,-_14876,_14938):-cut(1,d(_14872,_14882,_14876,_14938)).
	 * d(exp(_15072),_15088,exp(_15072)*_15082,_15144):-cut(1,d(_15072,_15088,_15082
	 * ,_15144)).
	 * d(log(_15278),_15290,_15282/_15278,_15346):-cut(1,d(_15278,_15290,_15282,
	 * _15346)). d(_15480,_15480,1,_15524):-cut(1,_15524).
	 * d(_15594,_15596,0,_15620):-call(_15620).
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
		if (!((areg0).Unify(F(divide10.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(divide10.s2, var4, var5))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(divide10.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(divide10.s3, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(divide10.s3, var4, var5))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(divide10.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(divide10.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(divide10.s2, F(divide10.s1, var4, var2.Deref()), F(divide10.s1, var1.Deref(), var5)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(divide10.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(divide10.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(
				F(divide10.s5, F(divide10.s3, F(divide10.s1, var4, var2.Deref()), F(divide10.s1, var1.Deref(), var5)),
						F(divide10.s7, var2.Deref(), divide10.posint2)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(divide10.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(divide10.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(divide10.s1, F(divide10.s1, var4, var2.Deref()), F(divide10.s7, var1.Deref(), var5)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s13, var2.Deref(),
				F(divide10.s14, var5.Deref(), F(divide10.s3, var2.Deref(), divide10.posint1),
						F(divide10.s10, var1.Deref(), var3.Deref(), var4.Deref(), continuation)));
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
		if (!((areg0).Unify(F(divide10.s3, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(divide10.s3, var3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
		if (!((areg0).Unify(F(divide10.s12, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(divide10.s1, F(divide10.s12, var1.Deref()), var3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
		if (!((areg0).Unify(F(divide10.s15, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(divide10.s5, var3, var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(divide10.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
		if (!((areg2).Unify(divide10.posint1)))
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
		if (!((areg2).Unify(divide10.posint0)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}
