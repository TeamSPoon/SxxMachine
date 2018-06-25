import java.util.function.Function;

class mu /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("-");
	static Const s2 = Const.Intern(".");
	static Const s3 = Const.Intern(":-");
	static Const s4 = Const.Intern("a");
	static Const s5 = Const.Intern("append");
	static Const s6 = Const.Intern("call");
	static Const s7 = Const.Intern("cut");
	static Const s8 = Const.Intern("i");
	static Const s9 = Const.Intern("is");
	static Const s10 = Const.Intern("m");
	static Const s11 = Const.Intern("mu");
	static Const s12 = Const.Intern("rule");
	static Const s13 = Const.Intern("rule1");
	static Const s14 = Const.Intern("rule2");
	static Const s15 = Const.Intern("rule3");
	static Const s16 = Const.Intern("rule4");
	static Const s17 = Const.Intern("smallerthan");
	static Const s18 = Const.Intern("theorem");
	static Const s19 = Const.Intern("top");
	static Const s20 = Const.Intern("u");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint3 = Term.Number(3);
	static Int posint4 = Term.Number(4);
	static Int posint5 = Term.Number(5);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_33782):-mu(_33782).
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
		return (Function<PrologMachine, Function>) pred_mu_0::exec_static;
	}
}

class pred_mu_0 extends Code {

	/*
	 * 
	 * mu(_33894):-theorem([m,u,i,i,u],5,_33866,cut(1,_33894)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_mu_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_mu_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = F(mu.s2, mu.s10,
				F(mu.s2, mu.s20, F(mu.s2, mu.s8, F(mu.s2, mu.s8, F(mu.s2, mu.s20, Const.Nil)))));
		local_aregs[1] = mu.posint5;
		local_aregs[2] = var1;
		local_aregs[3] = F(mu.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_theorem_3::exec_static;
	}
}

class pred_theorem_3 extends Code {

	/*
	 * 
	 * theorem([m,i],_34036,[[a,m,i]],_34060):-call(_34060).
	 * theorem(_34154,_34166,[[_34152|_34154]|_34160],_34260):-smallerthan(0,_34166,
	 * is(_34184,_34166-1,theorem(_34190,_34184,_34160,rule(_34152,_34190,_34154,
	 * _34260)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_theorem_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_theorem_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_theorem_3::exec_pred_theorem_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, mu.s10, F(mu.s2, mu.s8, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(mu.s2, F(mu.s2, mu.s4, F(mu.s2, mu.s10, F(mu.s2, mu.s8, Const.Nil))), Const.Nil))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_theorem_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg2).Unify(F(mu.s2, F(mu.s2, var3, var1.Deref()), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = mu.posint0;
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(mu.s9, var5, F(mu.s1, var2.Deref(), mu.posint1), F(mu.s18, var6, var5.Deref(), var4.Deref(),
				F(mu.s12, var3.Deref(), var6.Deref(), var1.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_rule_3 extends Code {

	/*
	 * 
	 * rule(1,_34560,_34562,_34608):-rule1(_34560,_34562,_34608).
	 * rule(2,_34730,_34732,_34778):-rule2(_34730,_34732,_34778).
	 * rule(3,_34900,_34902,_34948):-rule3(_34900,_34902,_34948).
	 * rule(4,_35070,_35072,_35118):-rule4(_35070,_35072,_35118).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_rule_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_rule_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_rule_3::exec_pred_rule_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(mu.posint1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_rule1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_rule_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_rule_3::exec_pred_rule_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(mu.posint2)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_rule2_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_rule_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_rule_3::exec_pred_rule_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(mu.posint3)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_rule3_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_rule_3__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(mu.posint4)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_rule4_2::exec_static;
	}
}

class pred_rule1_2 extends Code {

	/*
	 * 
	 * rule1([i],[i,u],_35280):-call(_35280).
	 * rule1([_35370|_35372],[_35370|_35378],_35424):-rule1(_35372,_35378,_35424).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_rule1_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_rule1_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_rule1_2::exec_pred_rule1_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(F(mu.s2, mu.s8, Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(mu.s2, mu.s8, F(mu.s2, mu.s20, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_rule1_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(mu.s2, var1.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_rule1_2::exec_static;
	}
}

class pred_rule2_2 extends Code {

	/*
	 * 
	 * rule2([m|_35544],[m|_35550],_35598):-append(_35544,_35544,_35550,_35598).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_rule2_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_rule2_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, mu.s10, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(mu.s2, mu.s10, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_append_3::exec_static;
	}
}

class pred_rule3_2 extends Code {

	/*
	 * 
	 * rule3([i,i,i|_35750],[u|_35750],_35784):-call(_35784).
	 * rule3([_35886|_35888],[_35886|_35894],_35940):-rule3(_35888,_35894,_35940).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_rule3_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_rule3_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_rule3_2::exec_pred_rule3_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, mu.s8, F(mu.s2, mu.s8, F(mu.s2, mu.s8, var1))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(mu.s2, mu.s20, var1.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_rule3_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(mu.s2, var1.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_rule3_2::exec_static;
	}
}

class pred_rule4_2 extends Code {

	/*
	 * 
	 * rule4([u,u|_36078],_36078,_36106):-call(_36106).
	 * rule4([_36214|_36216],[_36214|_36222],_36268):-rule4(_36216,_36222,_36268).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_rule4_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_rule4_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_rule4_2::exec_pred_rule4_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, mu.s20, F(mu.s2, mu.s20, var1)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_rule4_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(mu.s2, var1.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_rule4_2::exec_static;
	}
}

class pred_append_3 extends Code {

	/*
	 * 
	 * append([],_36406,_36406,_36430):-call(_36430).
	 * append([_36558|_36560],_36572,[_36558|_36566],_36622):-append(_36560,_36572,
	 * _36566,_36622).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_append_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_append_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_append_3::exec_pred_append_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_append_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(mu.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(mu.s2, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_append_3::exec_static;
	}
}
