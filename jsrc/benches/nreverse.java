import java.util.function.Function;

class nreverse /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern(".");
	static Const s2 = Const.Intern(":-");
	static Const s3 = Const.Intern("call");
	static Const s4 = Const.Intern("concatenate");
	static Const s5 = Const.Intern("nreverse");
	static Const s6 = Const.Intern("top");
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint3 = Term.Number(3);
	static Int posint4 = Term.Number(4);
	static Int posint5 = Term.Number(5);
	static Int posint6 = Term.Number(6);
	static Int posint7 = Term.Number(7);
	static Int posint8 = Term.Number(8);
	static Int posint9 = Term.Number(9);
	static Int posint10 = Term.Number(10);
	static Int posint11 = Term.Number(11);
	static Int posint12 = Term.Number(12);
	static Int posint13 = Term.Number(13);
	static Int posint14 = Term.Number(14);
	static Int posint15 = Term.Number(15);
	static Int posint16 = Term.Number(16);
	static Int posint17 = Term.Number(17);
	static Int posint18 = Term.Number(18);
	static Int posint19 = Term.Number(19);
	static Int posint20 = Term.Number(20);
	static Int posint21 = Term.Number(21);
	static Int posint22 = Term.Number(22);
	static Int posint23 = Term.Number(23);
	static Int posint24 = Term.Number(24);
	static Int posint25 = Term.Number(25);
	static Int posint26 = Term.Number(26);
	static Int posint27 = Term.Number(27);
	static Int posint28 = Term.Number(28);
	static Int posint29 = Term.Number(29);
	static Int posint30 = Term.Number(30);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_4880):-nreverse(_4880).
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
		return (Function<PrologMachine, Function>) pred_nreverse_0::exec_static;
	}
}

class pred_nreverse_0 extends Code {

	/*
	 * 
	 * nreverse(_5134):-nreverse([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
	 * ,21,22,23,24,25,26,27,28,29,30],_5112,_5134).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_nreverse_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_nreverse_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = F(nreverse.s1, nreverse.posint1, F(nreverse.s1, nreverse.posint2, F(nreverse.s1,
				nreverse.posint3,
				F(nreverse.s1, nreverse.posint4, F(nreverse.s1, nreverse.posint5, F(nreverse.s1, nreverse.posint6, F(
						nreverse.s1, nreverse.posint7,
						F(nreverse.s1, nreverse.posint8, F(nreverse.s1, nreverse.posint9, F(nreverse.s1,
								nreverse.posint10,
								F(nreverse.s1, nreverse.posint11, F(nreverse.s1, nreverse.posint12, F(nreverse.s1,
										nreverse.posint13,
										F(nreverse.s1, nreverse.posint14, F(nreverse.s1, nreverse.posint15, F(
												nreverse.s1, nreverse.posint16,
												F(nreverse.s1, nreverse.posint17, F(nreverse.s1, nreverse.posint18, F(
														nreverse.s1, nreverse.posint19,
														F(nreverse.s1, nreverse.posint20, F(nreverse.s1,
																nreverse.posint21,
																F(nreverse.s1, nreverse.posint22, F(nreverse.s1,
																		nreverse.posint23,
																		F(nreverse.s1, nreverse.posint24, F(nreverse.s1,
																				nreverse.posint25,
																				F(nreverse.s1, nreverse.posint26, F(
																						nreverse.s1, nreverse.posint27,
																						F(nreverse.s1,
																								nreverse.posint28,
																								F(nreverse.s1,
																										nreverse.posint29,
																										F(nreverse.s1,
																												nreverse.posint30,
																												Const.Nil))))))))))))))))))))))))))))));
		local_aregs[1] = var1;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nreverse_2::exec_static;
	}
}

class pred_nreverse_2 extends Code {

	/*
	 * 
	 * nreverse([_5218|_5220],_5226,_5286):-nreverse(_5220,_5232,concatenate(_5232,[
	 * _5218],_5226,_5286)). nreverse([],[],_5480):-call(_5480).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_nreverse_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_nreverse_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_nreverse_2::exec_pred_nreverse_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nreverse.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = F(nreverse.s4, var4.Deref(), F(nreverse.s1, var1.Deref(), Const.Nil), var3.Deref(),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nreverse_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_nreverse_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_concatenate_3 extends Code {

	/*
	 * 
	 * concatenate([_5558|_5560],_5572,[_5558|_5566],_5622):-concatenate(_5560,_5572
	 * ,_5566,_5622). concatenate([],_5758,_5758,_5782):-call(_5782).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_concatenate_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_concatenate_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_concatenate_3::exec_pred_concatenate_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nreverse.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nreverse.s1, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_concatenate_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_concatenate_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
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
