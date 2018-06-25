import java.util.function.Function;

class serialise /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("+");
	static Const s2 = Const.Intern(".");
	static Const s3 = Const.Intern(":-");
	static Const s4 = Const.Intern("arrange");
	static Const s5 = Const.Intern("before");
	static Const s6 = Const.Intern("call");
	static Const s7 = Const.Intern("cut");
	static Const s8 = Const.Intern("is");
	static Const s9 = Const.Intern("numbered");
	static Const s10 = Const.Intern("pair");
	static Const s11 = Const.Intern("pairlists");
	static Const s12 = Const.Intern("serialise");
	static Const s13 = Const.Intern("smallerthan");
	static Const s14 = Const.Intern("split");
	static Const s15 = Const.Intern("top");
	static Const s16 = Const.Intern("tree");
	static Const s17 = Const.Intern("void");
	static Int posint1 = Term.Number(1);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_9006):-serialise(_9006).
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
		return (Function<PrologMachine, Function>) pred_serialise_0::exec_static;
	}
}

class pred_serialise_0 extends Code {

	/*
	 * 
	 * serialise(_9092):-serialise("ABLE WAS I ERE I SAW ELBA",_9070,_9092).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_serialise_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_serialise_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = Const.Intern("ABLE WAS I ERE I SAW ELBA");
		local_aregs[1] = var1;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_serialise_2::exec_static;
	}
}

class pred_serialise_2 extends Code {

	/*
	 * 
	 * serialise(_9176,_9178,_9246):-pairlists(_9176,_9178,_9186,arrange(_9186,_9192
	 * ,numbered(_9192,1,_9200,_9246))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_serialise_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_serialise_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3;
		local_aregs[3] = F(serialise.s4, var3.Deref(), var4,
				F(serialise.s9, var4.Deref(), serialise.posint1, var5, continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_pairlists_3::exec_static;
	}
}

class pred_pairlists_3 extends Code {

	/*
	 * 
	 * pairlists([_9480|_9482],[_9486|_9488],[pair(_9480,_9486)|_9500],_9556):-
	 * pairlists(_9482,_9488,_9500,_9556). pairlists([],[],[],_9716):-call(_9716).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_pairlists_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_pairlists_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_pairlists_3::exec_pred_pairlists_3__2);
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
		if (!((areg0).Unify(F(serialise.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(serialise.s2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(serialise.s2, F(serialise.s10, var1.Deref(), var3.Deref()), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = var5.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_pairlists_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_pairlists_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_arrange_2 extends Code {

	/*
	 * 
	 * arrange([_9814|_9816],tree(_9820,_9814,_9824),_9898):-split(_9816,_9814,_9838
	 * ,_9840,arrange(_9838,_9820,arrange(_9840,_9824,_9898))).
	 * arrange([],void,_10168):-call(_10168).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_arrange_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_arrange_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_arrange_2::exec_pred_arrange_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(serialise.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(serialise.s16, var3, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var5;
		local_aregs[3] = var6;
		local_aregs[4] = F(serialise.s4, var5.Deref(), var3.Deref(),
				F(serialise.s4, var6.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_split_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_arrange_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(serialise.s17)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_split_4 extends Code {

	/*
	 * 
	 * split([_10258|_10260],_10258,_10268,_10270,_10332):-cut(1,split(_10260,_10258
	 * ,_10268,_10270,_10332)).
	 * split([_10506|_10508],_10520,[_10506|_10514],_10524,_10598):-before(_10506,
	 * _10520,cut(1,split(_10508,_10520,_10514,_10524,_10598))).
	 * split([_10822|_10824],_10836,_10838,[_10822|_10830],_10914):-before(_10836,
	 * _10822,cut(1,split(_10824,_10836,_10838,_10830,_10914))).
	 * split([],_11140,[],[],_11166):-call(_11166).
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
		return (Function<PrologMachine, Function>) exec_pred_split_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_split_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_split_4::exec_pred_split_4__2);
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
		if (!((areg0).Unify(F(serialise.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(serialise.s14, var2.Deref(), var1.Deref(), var3.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_split_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_split_4::exec_pred_split_4__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(serialise.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(serialise.s2, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(serialise.s0, new HeapChoice(mach.CUTB),
				F(serialise.s14, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_before_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_split_4__3(PrologMachine mach) {
		mach.FillAlternative(pred_split_4::exec_pred_split_4__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(serialise.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(serialise.s2, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(serialise.s0, new HeapChoice(mach.CUTB),
				F(serialise.s14, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_before_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_split_4__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_before_2 extends Code {

	/*
	 * 
	 * before(pair(_11290,_11292),pair(_11296,_11298),_11344):-smallerthan(_11290,
	 * _11296,_11344).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_before_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_before_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(serialise.s10, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(serialise.s10, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_numbered_3 extends Code {

	/*
	 * 
	 * numbered(tree(_11486,pair(_11480,_11482),_11490),_11496,_11498,_11578):-
	 * numbered(_11486,_11496,_11482,is(_11516,_11482+1,numbered(_11490,_11516,
	 * _11498,_11578))). numbered(void,_11852,_11852,_11876):-call(_11876).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_numbered_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_numbered_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_numbered_3::exec_pred_numbered_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(serialise.s16, var1, F(serialise.s10, var2, var3), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var5.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = F(serialise.s8, var7, F(serialise.s1, var3.Deref(), serialise.posint1),
				F(serialise.s9, var4.Deref(), var7.Deref(), var6.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_numbered_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_numbered_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(serialise.s17)))
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
