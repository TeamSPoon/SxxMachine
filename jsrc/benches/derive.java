import java.util.function.Function;

class derive /* extends CodeFile */ {
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
	static Const s16 = Const.Intern("log10");
	static Const s17 = Const.Intern("ops8");
	static Const s18 = Const.Intern("top");
	static Const s19 = Const.Intern("x");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint3 = Term.Number(3);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_8990):-ops8(log10(divide10(_8990))).
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
		local_aregs[0] = F(derive.s16, F(derive.s11, continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_ops8_0::exec_static;
	}
}

class pred_ops8_0 extends Code {

	/*
	 * 
	 * ops8(_9152):-d((x+1)*((x^2+2)*(x^3+3)),x,_9130,_9152).
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
		local_aregs[0] = F(derive.s1, F(derive.s2, derive.s19, derive.posint1),
				F(derive.s1, F(derive.s2, F(derive.s7, derive.s19, derive.posint2), derive.posint2),
						F(derive.s2, F(derive.s7, derive.s19, derive.posint3), derive.posint3)));
		local_aregs[1] = derive.s19;
		local_aregs[2] = var1;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_d_3::exec_static;
	}
}

class pred_log10_0 extends Code {

	/*
	 * 
	 * log10(_9316):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_9294,
	 * _9316).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_log10_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_log10_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = F(derive.s15, F(derive.s15, F(derive.s15, F(derive.s15, F(derive.s15,
				F(derive.s15, F(derive.s15, F(derive.s15, F(derive.s15, F(derive.s15, derive.s19))))))))));
		local_aregs[1] = derive.s19;
		local_aregs[2] = var1;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_d_3::exec_static;
	}
}

class pred_divide10_0 extends Code {

	/*
	 * 
	 * divide10(_9500):-d(x/x/x/x/x/x/x/x/x/x,x,_9478,_9500).
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
		local_aregs[0] = F(derive.s5,
				F(derive.s5,
						F(derive.s5,
								F(derive.s5, F(derive.s5, F(derive.s5,
										F(derive.s5, F(derive.s5, F(derive.s5, derive.s19, derive.s19), derive.s19),
												derive.s19),
										derive.s19), derive.s19), derive.s19),
								derive.s19),
						derive.s19),
				derive.s19);
		local_aregs[1] = derive.s19;
		local_aregs[2] = var1;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_d_3::exec_static;
	}
}

class pred_d_3 extends Code {

	/*
	 * 
	 * d(_9610+_9612,_9624,_9616+_9618,_9694):-cut(1,d(_9610,_9624,_9616,d(_9612,
	 * _9624,_9618,_9694))).
	 * d(_9904-_9906,_9918,_9910-_9912,_9988):-cut(1,d(_9904,_9918,_9910,d(_9906,
	 * _9918,_9912,_9988))).
	 * d(_10198*_10200,_10224,_10204*_10200+_10198*_10212,_10294):-cut(1,d(_10198,
	 * _10224,_10204,d(_10200,_10224,_10212,_10294))).
	 * d(_10504/_10506,_10542,(_10510*_10506-_10504*_10518)/_10506^2,_10612):-cut(1,
	 * d(_10504,_10542,_10510,d(_10506,_10542,_10518,_10612))).
	 * d(_10822^_10824,_10848,_10828*_10824*_10822^_10836,_10932):-cut(1,integer(
	 * _10824,is(_10836,_10824-1,d(_10822,_10848,_10828,_10932)))).
	 * d(-_11164,_11174,-_11168,_11230):-cut(1,d(_11164,_11174,_11168,_11230)).
	 * d(exp(_11376),_11392,exp(_11376)*_11386,_11448):-cut(1,d(_11376,_11392,_11386
	 * ,_11448)).
	 * d(log(_11594),_11606,_11598/_11594,_11662):-cut(1,d(_11594,_11606,_11598,
	 * _11662)). d(_11808,_11808,1,_11852):-cut(1,_11852).
	 * d(_11934,_11936,0,_11960):-call(_11960).
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
		if (!((areg0).Unify(F(derive.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(derive.s2, var4, var5))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(derive.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(derive.s3, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(derive.s3, var4, var5))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(derive.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(derive.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(derive.s2, F(derive.s1, var4, var2.Deref()), F(derive.s1, var1.Deref(), var5)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(derive.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(derive.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2)
				.Unify(F(derive.s5, F(derive.s3, F(derive.s1, var4, var2.Deref()), F(derive.s1, var1.Deref(), var5)),
						F(derive.s7, var2.Deref(), derive.posint2)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s10, var1.Deref(), var3.Deref(), var4.Deref(),
				F(derive.s10, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
		if (!((areg0).Unify(F(derive.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(derive.s1, F(derive.s1, var4, var2.Deref()), F(derive.s7, var1.Deref(), var5)))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s13, var2.Deref(),
				F(derive.s14, var5.Deref(), F(derive.s3, var2.Deref(), derive.posint1),
						F(derive.s10, var1.Deref(), var3.Deref(), var4.Deref(), continuation)));
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
		if (!((areg0).Unify(F(derive.s3, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(derive.s3, var3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
		if (!((areg0).Unify(F(derive.s12, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(derive.s1, F(derive.s12, var1.Deref()), var3))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
		if (!((areg0).Unify(F(derive.s15, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(derive.s5, var3, var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(derive.s10, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
		if (!((areg2).Unify(derive.posint1)))
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
		if (!((areg2).Unify(derive.posint0)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}
