import java.util.function.Function;

class perfect /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("*");
	static Const s2 = Const.Intern("+");
	static Const s3 = Const.Intern("-");
	static Const s4 = Const.Intern(".");
	static Const s5 = Const.Intern(":-");
	static Const s6 = Const.Intern("arithequal");
	static Const s7 = Const.Intern("calc");
	static Const s8 = Const.Intern("call");
	static Const s9 = Const.Intern("cut");
	static Const s10 = Const.Intern("divisible");
	static Const s11 = Const.Intern("findall");
	static Const s12 = Const.Intern("generateList");
	static Const s13 = Const.Intern("is");
	static Const s14 = Const.Intern("isprime");
	static Const s15 = Const.Intern("listperf");
	static Const s16 = Const.Intern("mod");
	static Const s17 = Const.Intern("not");
	static Const s18 = Const.Intern("ok");
	static Const s19 = Const.Intern("perfect");
	static Const s20 = Const.Intern("power");
	static Const s21 = Const.Intern("smallerorequal");
	static Const s22 = Const.Intern("smallerthan");
	static Const s23 = Const.Intern("top");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint6 = Term.Number(6);
	static Int posint28 = Term.Number(28);
	static Int posint100 = Term.Number(100);
	static Int posint496 = Term.Number(496);
	static Int posint8128 = Term.Number(8128);
	static Int posint2096128 = Term.Number(2096128);
	static Int posint33550336 = Term.Number(33550336);
	static Int posint8589869056 = Term.Number(8589869056);
	static Int posint137438691328 = Term.Number(137438691328);
	static Int posint35184367894528 = Term.Number(35184367894528);
	static Int posint144115187807420416 = Term.Number(144115187807420416);
	static Int posint2305843008139952128 = Term.Number(2305843008139952128);
	static Int posint9444732965670570950656 = Term.Number(9444732965670570950656);
	static Int posint2417851639228158837784576 = Term.Number(2417851639228158837784576);
	static Int posint38685626227663735544086528 = Term.Number(38685626227663735544086528);
	static Int posint9903520314282971830448816128 = Term.Number(9903520314282971830448816128);
	static Int posint40564819207303336344294875201536 = Term.Number(40564819207303336344294875201536);
	static Int posint166153499473114483824745506383331328 = Term.Number(166153499473114483824745506383331328);
	static Int posint2658455991569831744654692615953842176 = Term.Number(2658455991569831744654692615953842176);
	static Int posint10889035741470030830754200461521744560128 = Term.Number(10889035741470030830754200461521744560128);
	static Int posint2787593149816327892690784192460327776944128 = Term
			.Number(2787593149816327892690784192460327776944128);
	static Int posint44601490397061246283066714178813853366747136 = Term
			.Number(44601490397061246283066714178813853366747136);
	static Int posint182687704666362864775460301858080473799697891328 = Term
			.Number(182687704666362864775460301858080473799697891328);
	static Int posint46768052394588893382517909811217778170473142550528 = Term
			.Number(46768052394588893382517909811217778170473142550528);
	static Int posint191561942608236107294793378084303638130997321548169216 = Term
			.Number(191561942608236107294793378084303638130997321548169216);
	static Int posint12554203470773361527671578846336104669690446551334525075456 = Term
			.Number(12554203470773361527671578846336104669690446551334525075456);
	static Int posint3213876088517980551083924184681057554444177758164088967397376 = Term
			.Number(3213876088517980551083924184681057554444177758164088967397376);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_13122):-findall(_13082,perfect(100,_13082),_13090,ok(_13090,_13122)).
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
		Var var2 = V(mach);
		Var var1 = V(mach);
		local_aregs[0] = var1;
		local_aregs[1] = F(perfect.s19, perfect.posint100, var1.Deref());
		local_aregs[2] = var2;
		local_aregs[3] = F(perfect.s18, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_findall_3::exec_static;
	}
}

class pred_ok_1 extends Code {

	/*
	 * 
	 * ok([3213876088517980551083924184681057554444177758164088967397376,
	 * 12554203470773361527671578846336104669690446551334525075456,
	 * 191561942608236107294793378084303638130997321548169216,
	 * 46768052394588893382517909811217778170473142550528,
	 * 182687704666362864775460301858080473799697891328,
	 * 44601490397061246283066714178813853366747136,
	 * 2787593149816327892690784192460327776944128,
	 * 10889035741470030830754200461521744560128,
	 * 2658455991569831744654692615953842176,166153499473114483824745506383331328,
	 * 40564819207303336344294875201536,9903520314282971830448816128,
	 * 38685626227663735544086528,2417851639228158837784576,9444732965670570950656,
	 * 2305843008139952128,144115187807420416,35184367894528,137438691328,8589869056
	 * ,33550336,2096128,8128,496,28,6],_13610):-call(_13610).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_ok_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_ok_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(F(perfect.s4, perfect.posint3213876088517980551083924184681057554444177758164088967397376,
				F(perfect.s4, perfect.posint12554203470773361527671578846336104669690446551334525075456, F(perfect.s4,
						perfect.posint191561942608236107294793378084303638130997321548169216,
						F(perfect.s4, perfect.posint46768052394588893382517909811217778170473142550528, F(perfect.s4,
								perfect.posint182687704666362864775460301858080473799697891328,
								F(perfect.s4, perfect.posint44601490397061246283066714178813853366747136, F(perfect.s4,
										perfect.posint2787593149816327892690784192460327776944128,
										F(perfect.s4, perfect.posint10889035741470030830754200461521744560128, F(
												perfect.s4, perfect.posint2658455991569831744654692615953842176,
												F(perfect.s4, perfect.posint166153499473114483824745506383331328, F(
														perfect.s4, perfect.posint40564819207303336344294875201536,
														F(perfect.s4, perfect.posint9903520314282971830448816128, F(
																perfect.s4, perfect.posint38685626227663735544086528,
																F(perfect.s4, perfect.posint2417851639228158837784576,
																		F(perfect.s4,
																				perfect.posint9444732965670570950656,
																				F(perfect.s4,
																						perfect.posint2305843008139952128,
																						F(perfect.s4,
																								perfect.posint144115187807420416,
																								F(perfect.s4,
																										perfect.posint35184367894528,
																										F(perfect.s4,
																												perfect.posint137438691328,
																												F(perfect.s4,
																														perfect.posint8589869056,
																														F(perfect.s4,
																																perfect.posint33550336,
																																F(perfect.s4,
																																		perfect.posint2096128,
																																		F(perfect.s4,
																																				perfect.posint8128,
																																				F(perfect.s4,
																																						perfect.posint496,
																																						F(perfect.s4,
																																								perfect.posint28,
																																								F(perfect.s4,
																																										perfect.posint6,
																																										Const.Nil)))))))))))))))))))))))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_divisible_2 extends Code {

	/*
	 * 
	 * divisible(_13668,_13670,_13746):-is(_13680,_13670*_13670,smallerorequal(
	 * _13680,_13668,arithequal(0,_13668 mod _13670,_13746))).
	 * divisible(_13964,_13966,_14036):-smallerthan(_13966,_13964,is(_13982,_13966+1
	 * ,divisible(_13964,_13982,_14036))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_divisible_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_divisible_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_divisible_2::exec_pred_divisible_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = F(perfect.s1, var2.Deref(), var2.Deref());
		local_aregs[2] = F(perfect.s21, var3.Deref(), var1.Deref(),
				F(perfect.s6, perfect.posint0, F(perfect.s16, var1.Deref(), var2.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_divisible_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(perfect.s13, var3, F(perfect.s2, var2.Deref(), perfect.posint1),
				F(perfect.s10, var1.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_isprime_2 extends Code {

	/*
	 * 
	 * isprime([_14248|_14250],_14248,_14324):-is(_14260,2,smallerthan(1,_14248,not(
	 * divisible(_14248,_14260),_14324))).
	 * isprime([_14532|_14534],_14540,_14580):-isprime(_14534,_14540,_14580).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_isprime_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_isprime_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_isprime_2::exec_pred_isprime_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(perfect.s4, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = perfect.posint2;
		local_aregs[2] = F(perfect.s22, perfect.posint1, var1.Deref(),
				F(perfect.s17, F(perfect.s10, var1.Deref(), var3.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_isprime_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(perfect.s4, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_isprime_2::exec_static;
	}
}

class pred_power_3 extends Code {

	/*
	 * 
	 * power(_14692,0,1,_14736):-cut(1,_14736).
	 * power(_14818,_14820,_14822,_14906):-is(_14832,_14820-1,power(_14818,_14832,
	 * _14842,is(_14822,_14842*_14818,_14906))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_power_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_power_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_power_3::exec_pred_power_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(perfect.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(perfect.posint1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_power_3__2(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = F(perfect.s3, var2.Deref(), perfect.posint1);
		local_aregs[2] = F(perfect.s20, var1.Deref(), var4.Deref(), var5,
				F(perfect.s13, var3.Deref(), F(perfect.s1, var5.Deref(), var1.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_calc_3 extends Code {

	/*
	 * 
	 * calc(2,_15148,_15150,_15254):-power(2,_15148,_15158,is(_15168,_15158-1,power(
	 * 2,_15148-1,_15184,is(_15150,_15168*_15184,_15254)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_calc_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_calc_3__1(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(perfect.posint2)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = perfect.posint2;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var3;
		local_aregs[3] = F(perfect.s13, var4, F(perfect.s3, var3.Deref(), perfect.posint1),
				F(perfect.s20, perfect.posint2, F(perfect.s3, var1.Deref(), perfect.posint1), var5,
						F(perfect.s13, var2.Deref(), F(perfect.s1, var4.Deref(), var5.Deref()), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_power_3::exec_static;
	}
}

class pred_listperf_2 extends Code {

	/*
	 * 
	 * listperf([_15564|_15566],_15572,_15614):-calc(2,_15564,_15572,_15614).
	 * listperf([_15758|_15760],_15766,_15806):-listperf(_15760,_15766,_15806).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_listperf_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_listperf_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_listperf_2::exec_pred_listperf_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(perfect.s4, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = perfect.posint2;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_calc_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_listperf_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(perfect.s4, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_listperf_2::exec_static;
	}
}

class pred_generateList_2 extends Code {

	/*
	 * 
	 * generateList(0,[],_15960):-call(_15960).
	 * generateList(_16074,[_16068|_16070],_16164):-smallerthan(0,_16074,is(_16068,
	 * _16074+1,is(_16104,_16074-1,generateList(_16104,_16070,_16164)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_generateList_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_generateList_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_generateList_2::exec_pred_generateList_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(perfect.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_generateList_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(perfect.s4, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = perfect.posint0;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(perfect.s13, var2.Deref(), F(perfect.s2, var1.Deref(), perfect.posint1),
				F(perfect.s13, var4, F(perfect.s3, var1.Deref(), perfect.posint1),
						F(perfect.s12, var4.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_perfect_2 extends Code {

	/*
	 * 
	 * perfect(_16456,_16458,_16530):-generateList(_16456,_16464,findall(_16470,
	 * isprime(_16464,_16470),_16478,listperf(_16478,_16458,_16530))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_perfect_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_perfect_2__1(PrologMachine mach) {
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
		local_aregs[1] = var3;
		local_aregs[2] = F(perfect.s11, var4, F(perfect.s14, var3.Deref(), var4.Deref()), var5,
				F(perfect.s15, var5.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_generateList_2::exec_static;
	}
}
