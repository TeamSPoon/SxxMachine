import java.util.function.Function;

class qsort /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern(".");
	static Const s2 = Const.Intern(":-");
	static Const s3 = Const.Intern("call");
	static Const s4 = Const.Intern("cut");
	static Const s5 = Const.Intern("partition");
	static Const s6 = Const.Intern("qsort");
	static Const s7 = Const.Intern("smallerorequal");
	static Const s8 = Const.Intern("top");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint4 = Term.Number(4);
	static Int posint6 = Term.Number(6);
	static Int posint7 = Term.Number(7);
	static Int posint8 = Term.Number(8);
	static Int posint10 = Term.Number(10);
	static Int posint11 = Term.Number(11);
	static Int posint17 = Term.Number(17);
	static Int posint18 = Term.Number(18);
	static Int posint21 = Term.Number(21);
	static Int posint27 = Term.Number(27);
	static Int posint28 = Term.Number(28);
	static Int posint29 = Term.Number(29);
	static Int posint31 = Term.Number(31);
	static Int posint32 = Term.Number(32);
	static Int posint33 = Term.Number(33);
	static Int posint37 = Term.Number(37);
	static Int posint39 = Term.Number(39);
	static Int posint40 = Term.Number(40);
	static Int posint46 = Term.Number(46);
	static Int posint47 = Term.Number(47);
	static Int posint51 = Term.Number(51);
	static Int posint53 = Term.Number(53);
	static Int posint55 = Term.Number(55);
	static Int posint59 = Term.Number(59);
	static Int posint61 = Term.Number(61);
	static Int posint63 = Term.Number(63);
	static Int posint65 = Term.Number(65);
	static Int posint66 = Term.Number(66);
	static Int posint74 = Term.Number(74);
	static Int posint75 = Term.Number(75);
	static Int posint81 = Term.Number(81);
	static Int posint82 = Term.Number(82);
	static Int posint83 = Term.Number(83);
	static Int posint85 = Term.Number(85);
	static Int posint90 = Term.Number(90);
	static Int posint92 = Term.Number(92);
	static Int posint94 = Term.Number(94);
	static Int posint95 = Term.Number(95);
	static Int posint99 = Term.Number(99);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_25462):-qsort(_25462).
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
		return (Function<PrologMachine, Function>) pred_qsort_0::exec_static;
	}
}

class pred_qsort_0 extends Code {

	/*
	 * 
	 * qsort(_25838):-qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,
	 * 11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92
	 * ,40,53,59,8],_25814,[],_25838).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_qsort_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_qsort_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		Var var1 = V(mach);
		local_aregs[0] = F(qsort.s1, qsort.posint27, F(qsort.s1, qsort.posint74, F(qsort.s1, qsort.posint17, F(qsort.s1,
				qsort.posint33, F(qsort.s1, qsort.posint94, F(qsort.s1, qsort.posint18, F(qsort.s1, qsort.posint46, F(
						qsort.s1, qsort.posint83,
						F(qsort.s1, qsort.posint65, F(qsort.s1, qsort.posint2, F(qsort.s1, qsort.posint32, F(qsort.s1,
								qsort.posint53,
								F(qsort.s1, qsort.posint28, F(qsort.s1, qsort.posint85, F(qsort.s1, qsort.posint99, F(
										qsort.s1, qsort.posint47,
										F(qsort.s1, qsort.posint28, F(qsort.s1, qsort.posint82, F(qsort.s1,
												qsort.posint6,
												F(qsort.s1, qsort.posint11, F(qsort.s1, qsort.posint55, F(qsort.s1,
														qsort.posint29,
														F(qsort.s1, qsort.posint39, F(qsort.s1, qsort.posint81, F(
																qsort.s1, qsort.posint90,
																F(qsort.s1, qsort.posint37, F(qsort.s1, qsort.posint10,
																		F(qsort.s1, qsort.posint0, F(qsort.s1,
																				qsort.posint66,
																				F(qsort.s1, qsort.posint51, F(qsort.s1,
																						qsort.posint7,
																						F(qsort.s1, qsort.posint21, F(
																								qsort.s1,
																								qsort.posint85,
																								F(qsort.s1,
																										qsort.posint27,
																										F(qsort.s1,
																												qsort.posint31,
																												F(qsort.s1,
																														qsort.posint63,
																														F(qsort.s1,
																																qsort.posint75,
																																F(qsort.s1,
																																		qsort.posint4,
																																		F(qsort.s1,
																																				qsort.posint95,
																																				F(qsort.s1,
																																						qsort.posint99,
																																						F(qsort.s1,
																																								qsort.posint11,
																																								F(qsort.s1,
																																										qsort.posint28,
																																										F(qsort.s1,
																																												qsort.posint61,
																																												F(qsort.s1,
																																														qsort.posint74,
																																														F(qsort.s1,
																																																qsort.posint18,
																																																F(qsort.s1,
																																																		qsort.posint92,
																																																		F(qsort.s1,
																																																				qsort.posint40,
																																																				F(qsort.s1,
																																																						qsort.posint53,
																																																						F(qsort.s1,
																																																								qsort.posint59,
																																																								F(qsort.s1,
																																																										qsort.posint8,
																																																										Const.Nil))))))))))))))))))))))))))))))))))))))))))))))))));
		local_aregs[1] = var1;
		local_aregs[2] = Const.Nil;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_qsort_3::exec_static;
	}
}

class pred_qsort_3 extends Code {

	/*
	 * 
	 * qsort([_25936|_25938],_25944,_25946,_26030):-partition(_25938,_25936,_25954,
	 * _25956,qsort(_25956,_25962,_25946,qsort(_25954,_25944,[_25936|_25962],_26030)
	 * )). qsort([],_26302,_26302,_26326):-call(_26326).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_qsort_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_qsort_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_qsort_3::exec_pred_qsort_3__2);
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
		if (!((areg0).Unify(F(qsort.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var5;
		local_aregs[3] = var6;
		local_aregs[4] = F(qsort.s6, var6.Deref(), var7, var4.Deref(),
				F(qsort.s6, var5.Deref(), var3.Deref(), F(qsort.s1, var1.Deref(), var7.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_partition_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_qsort_3__2(PrologMachine mach) {
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

class pred_partition_4 extends Code {

	/*
	 * 
	 * partition([_26418|_26420],_26432,[_26418|_26426],_26436,_26510):-
	 * smallerorequal(_26418,_26432,cut(1,partition(_26420,_26432,_26426,_26436,
	 * _26510))).
	 * partition([_26728|_26730],_26742,_26744,[_26728|_26736],_26802):-partition(
	 * _26730,_26742,_26744,_26736,_26802).
	 * partition([],_26960,[],[],_26986):-call(_26986).
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
		return (Function<PrologMachine, Function>) exec_pred_partition_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_partition_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_partition_4::exec_pred_partition_4__2);
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
		if (!((areg0).Unify(F(qsort.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(qsort.s1, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(qsort.s0, new HeapChoice(mach.CUTB),
				F(qsort.s5, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_partition_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_partition_4::exec_pred_partition_4__3);
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
		if (!((areg0).Unify(F(qsort.s1, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(qsort.s1, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_partition_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_partition_4__3(PrologMachine mach) {
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
