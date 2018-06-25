import java.util.function.Function;

class tak /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("-");
	static Const s2 = Const.Intern(".");
	static Const s3 = Const.Intern(":-");
	static Const s4 = Const.Intern("is");
	static Const s5 = Const.Intern("smallerorequal");
	static Const s6 = Const.Intern("smallerthan");
	static Const s7 = Const.Intern("tak");
	static Const s8 = Const.Intern("top");
	static Const s9 = Const.Intern("unify");
	static Int posint1 = Term.Number(1);
	static Int posint6 = Term.Number(6);
	static Int posint12 = Term.Number(12);
	static Int posint18 = Term.Number(18);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_4664):-tak(_4664).
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
		return (Function<PrologMachine, Function>) pred_tak_0::exec_static;
	}
}

class pred_tak_0 extends Code {

	/*
	 * 
	 * tak(_4742):-tak(18,12,6,_4720,_4742).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_tak_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_tak_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = tak.posint18;
		local_aregs[1] = tak.posint12;
		local_aregs[2] = tak.posint6;
		local_aregs[3] = var1;
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_tak_4::exec_static;
	}
}

class pred_tak_4 extends Code {

	/*
	 * 
	 * tak(_4854,_4856,_4858,_4860,_4924):-smallerorequal(_4854,_4856,unify(_4860,
	 * _4858,_4924)).
	 * tak(_5108,_5110,_5112,_5114,_5284):-smallerthan(_5110,_5108,is(_5130,_5108-1,
	 * tak(_5130,_5110,_5112,_5142,is(_5152,_5110-1,tak(_5152,_5112,_5108,_5164,is(
	 * _5174,_5112-1,tak(_5174,_5108,_5110,_5186,tak(_5142,_5164,_5186,_5114,_5284))
	 * )))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
		 */
		Term aregs[] = mach.RegPull(4);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_tak_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_tak_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_tak_4::exec_pred_tak_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(tak.s9, var4.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_tak_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var10 = V(mach);
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(tak.s4, var5, F(tak.s1, var1.Deref(), tak.posint1), F(tak.s7, var5.Deref(), var2.Deref(),
				var3.Deref(), var6,
				F(tak.s4, var7, F(tak.s1, var2.Deref(), tak.posint1), F(tak.s7, var7.Deref(), var3.Deref(),
						var1.Deref(), var8,
						F(tak.s4, var9, F(tak.s1, var3.Deref(), tak.posint1), F(tak.s7, var9.Deref(), var1.Deref(),
								var2.Deref(), var10,
								F(tak.s7, var6.Deref(), var8.Deref(), var10.Deref(), var4.Deref(), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}
