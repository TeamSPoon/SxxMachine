import java.util.function.Function;

class browse /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("$concat");
	static Const s2 = Const.Intern("*");
	static Const s3 = Const.Intern(",");
	static Const s4 = Const.Intern("-");
	static Const s5 = Const.Intern("->");
	static Const s6 = Const.Intern(".");
	static Const s7 = Const.Intern(":-");
	static Const s8 = Const.Intern("=");
	static Const s9 = Const.Intern("=:=");
	static Const s10 = Const.Intern("a");
	static Const s11 = Const.Intern("arg");
	static Const s12 = Const.Intern("atom");
	static Const s13 = Const.Intern("b");
	static Const s14 = Const.Intern("call");
	static Const s15 = Const.Intern("cut");
	static Const s16 = Const.Intern("dummy");
	static Const s17 = Const.Intern("fail");
	static Const s18 = Const.Intern("fill");
	static Const s19 = Const.Intern("functor");
	static Const s20 = Const.Intern("get_pats");
	static Const s21 = Const.Intern("init");
	static Const s22 = Const.Intern("investigate");
	static Const s23 = Const.Intern("is");
	static Const s24 = Const.Intern("length");
	static Const s25 = Const.Intern("match");
	static Const s26 = Const.Intern("mod");
	static Const s27 = Const.Intern("nonvar");
	static Const s28 = Const.Intern("or");
	static Const s29 = Const.Intern("p_investigate");
	static Const s30 = Const.Intern("p_match");
	static Const s31 = Const.Intern("pattern");
	static Const s32 = Const.Intern("property");
	static Const s33 = Const.Intern("randomize");
	static Const s34 = Const.Intern("split");
	static Const s35 = Const.Intern("star");
	static Const s36 = Const.Intern("top");
	static Const s37 = Const.Intern("true");
	static Const s38 = Const.Intern("unify");
	static Const s39 = Const.Intern("var");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint4 = Term.Number(4);
	static Int posint10 = Term.Number(10);
	static Int posint17 = Term.Number(17);
	static Int posint21 = Term.Number(21);
	static Int posint100 = Term.Number(100);
	static Int posint251 = Term.Number(251);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_5434):-init(100,10,4,[[a,a,a,b,b,b,b,a,a,a,a,a,b,b,a,a,a],[a,a,b,b,b,b,a
	 * ,a,[a,a],[b,b]],[a,a,a,b,[b,a],b,a,b,a]],_5154,randomize(_5154,_5160,21,cut(1
	 * ,investigate(_5160,[[star(_5166),_5176,star(_5182),_5176,a,star(_5166),a,star
	 * (_5182),star(_5166)],[star(_5166),star(_5182),star(_5182),star(_5166),[star(
	 * _5166)],[star(_5182)]],[_5324,_5330,star(_5336),[b,a],star(_5364),_5374,_5380
	 * ]],_5434)))).
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
		Var var11 = V(mach);
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
		local_aregs[0] = browse.posint100;
		local_aregs[1] = browse.posint10;
		local_aregs[2] = browse.posint4;
		local_aregs[3] = F(browse.s6,
				F(browse.s6, browse.s10, F(browse.s6, browse.s10, F(browse.s6, browse.s10, F(browse.s6, browse.s13,
						F(browse.s6, browse.s13, F(browse.s6, browse.s13, F(browse.s6, browse.s13,
								F(browse.s6, browse.s10, F(browse.s6, browse.s10, F(browse.s6, browse.s10,
										F(browse.s6, browse.s10, F(browse.s6, browse.s10, F(browse.s6, browse.s13,
												F(browse.s6, browse.s13, F(browse.s6, browse.s10,
														F(browse.s6, browse.s10,
																F(browse.s6, browse.s10, Const.Nil))))))))))))))))),
				F(browse.s6, F(browse.s6, browse.s10, F(browse.s6, browse.s10, F(browse.s6, browse.s13, F(browse.s6,
						browse.s13,
						F(browse.s6, browse.s13, F(browse.s6, browse.s13, F(browse.s6, browse.s10, F(browse.s6,
								browse.s10,
								F(browse.s6, F(browse.s6, browse.s10, F(browse.s6, browse.s10, Const.Nil)),
										F(browse.s6, F(browse.s6, browse.s13, F(browse.s6, browse.s13, Const.Nil)),
												Const.Nil)))))))))),
						F(browse.s6, F(browse.s6, browse.s10,
								F(browse.s6, browse.s10, F(browse.s6, browse.s10, F(browse.s6, browse.s13,
										F(browse.s6, F(browse.s6, browse.s13, F(browse.s6, browse.s10, Const.Nil)),
												F(browse.s6, browse.s13,
														F(browse.s6, browse.s10,
																F(browse.s6, browse.s13,
																		F(browse.s6, browse.s10, Const.Nil))))))))),
								Const.Nil)));
		local_aregs[4] = var1;
		local_aregs[5] = F(browse.s33, var1.Deref(), var2, browse.posint21,
				F(browse.s0, new HeapChoice(mach.CUTB),
						F(browse.s22, var2.Deref(), F(browse.s6, F(browse.s6, F(browse.s35, var3), F(browse.s6, var4,
								F(browse.s6, F(browse.s35, var5), F(browse.s6, var4.Deref(), F(browse.s6, browse.s10,
										F(browse.s6, F(browse.s35, var3.Deref()), F(browse.s6, browse.s10,
												F(browse.s6, F(browse.s35, var5.Deref()),
														F(browse.s6, F(browse.s35, var3.Deref()), Const.Nil))))))))),
								F(browse.s6, F(browse.s6, F(browse.s35, var3.Deref()), F(browse.s6,
										F(browse.s35, var5.Deref()),
										F(browse.s6, F(browse.s35, var5.Deref()), F(browse.s6,
												F(browse.s35, var3.Deref()),
												F(browse.s6, F(browse.s6, F(browse.s35, var3.Deref()), Const.Nil),
														F(browse.s6,
																F(browse.s6, F(browse.s35, var5.Deref()), Const.Nil),
																Const.Nil)))))),
										F(browse.s6, F(browse.s6, var6,
												F(browse.s6, var7, F(browse.s6, F(browse.s35, var8), F(browse.s6,
														F(browse.s6, browse.s13, F(browse.s6, browse.s10, Const.Nil)),
														F(browse.s6, F(browse.s35, var9),
																F(browse.s6, var10,
																		F(browse.s6, var11, Const.Nil))))))),
												Const.Nil))),
								continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_init_5::exec_static;
	}
}

class pred_init_5 extends Code {

	/*
	 * 
	 * init(_5674,_5676,_5678,_5680,_5682,_5748):-init(_5674,_5676,_5676,_5678,_5680
	 * ,_5682,_5748).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ]} ;
		 */
		Term aregs[] = mach.RegPull(5);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_init_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_init_5__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var3.Deref();
		local_aregs[4] = var4.Deref();
		local_aregs[5] = var5.Deref();
		local_aregs[6] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_init_6::exec_static;
	}
}

class pred_init_6 extends Code {

	/*
	 * 
	 * init(0,_5930,_5932,_5934,_5936,_5938,_5996):-cut(1,_5996).
	 * init(_6096,_6098,_6100,_6102,_6104,[_6090|_6092],_6308):-fill(_6098,[],_6114,
	 * get_pats(_6102,_6104,_6122,is(_6132,_6100-_6098,fill(_6132,[pattern(_6122)|
	 * _6114],_6090,is(_6162,_6096-1,or((_6098=:=0->_6174 is _6100),_6174 is
	 * _6098-1,init(_6162,_6174,_6100,_6102,_6104,_6092,_6308))))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6]} ;
		 */
		Term aregs[] = mach.RegPull(6);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_init_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_init_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_init_6::exec_pred_init_6__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(browse.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var5)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_init_6__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var12 = V(mach);
		Var var11 = V(mach);
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
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(F(browse.s6, var6, var7))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = Const.Nil;
		local_aregs[2] = var8;
		local_aregs[3] = F(browse.s20, var4.Deref(), var5.Deref(), var9,
				F(browse.s23, var10, F(browse.s4, var3.Deref(), var2.Deref()),
						F(browse.s18, var10.Deref(), F(browse.s6, F(browse.s31, var9.Deref()), var8.Deref()),
								var6.Deref(),
								F(browse.s23, var11, F(browse.s4, var1.Deref(), browse.posint1), F(browse.s28,
										F(browse.s5, F(browse.s9, var2.Deref(), browse.posint0),
												F(browse.s23, var12, var3.Deref())),
										F(browse.s23, var12.Deref(), F(browse.s4, var2.Deref(), browse.posint1)),
										F(browse.s21, var11.Deref(), var12.Deref(), var3.Deref(), var4.Deref(),
												var5.Deref(), var7.Deref(), continuation))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_fill_3::exec_static;
	}
}

class pred_fill_3 extends Code {

	/*
	 * 
	 * fill(0,_6852,_6852,_6894):-cut(1,_6894).
	 * fill(_6980,_6982,[dummy([])|_6976],_7050):-is(_6994,_6980-1,fill(_6994,_6982,
	 * _6976,_7050)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_fill_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_fill_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_fill_3::exec_pred_fill_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(browse.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_fill_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(browse.s6, F(browse.s16, Const.Nil), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = F(browse.s4, var1.Deref(), browse.posint1);
		local_aregs[2] = F(browse.s18, var4.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_randomize_3 extends Code {

	/*
	 * 
	 * randomize([],[],_7238,_7278):-cut(1,_7278).
	 * randomize(_7366,[_7360|_7362],_7370,_7488):-length(_7366,_7376,is(_7392,_7370
	 * *17 mod 251,is(_7404,_7392 mod
	 * _7376,split(_7404,_7366,_7360,_7416,randomize(_7416,_7362,_7392,_7488))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_randomize_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_randomize_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_randomize_3::exec_pred_randomize_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_randomize_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg1).Unify(F(browse.s6, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var5;
		local_aregs[2] = F(browse.s23, var6,
				F(browse.s26, F(browse.s2, var4.Deref(), browse.posint17), browse.posint251),
				F(browse.s23, var7, F(browse.s26, var6.Deref(), var5.Deref()), F(browse.s34, var7.Deref(), var1.Deref(),
						var2.Deref(), var8, F(browse.s33, var8.Deref(), var3.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_length_2::exec_static;
	}
}

class pred_split_4 extends Code {

	/*
	 * 
	 * split(0,[_7856|_7858],_7856,_7858,_7914):-cut(1,_7914).
	 * split(_8022,[_8010|_8012],_8026,[_8010|_8018],_8102):-is(_8038,_8022-1,split(
	 * _8038,_8012,_8026,_8018,_8102)).
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
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(browse.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_split_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg1).Unify(F(browse.s6, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(browse.s6, var2.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6;
		local_aregs[1] = F(browse.s4, var1.Deref(), browse.posint1);
		local_aregs[2] = F(browse.s34, var6.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_investigate_2 extends Code {

	/*
	 * 
	 * investigate([],_8322,_8356):-cut(1,_8356).
	 * investigate([_8442|_8444],_8450,_8516):-property(_8442,pattern,_8458,
	 * p_investigate(_8458,_8450,investigate(_8444,_8450,_8516))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_investigate_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_investigate_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_investigate_2::exec_pred_investigate_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_investigate_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = browse.s31;
		local_aregs[2] = var4;
		local_aregs[3] = F(browse.s29, var4.Deref(), var3.Deref(),
				F(browse.s22, var2.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_property_3::exec_static;
	}
}

class pred_get_pats_3 extends Code {

	/*
	 * 
	 * get_pats(_8760,_8762,_8764,_8814):-get_pats(_8760,_8762,_8764,_8762,_8814).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_get_pats_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_get_pats_3__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var2.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_get_pats_4::exec_static;
	}
}

class pred_get_pats_4 extends Code {

	/*
	 * 
	 * get_pats(0,_8988,[],_8992,_9038):-cut(1,_9038).
	 * get_pats(_9164,[_9152|_9154],[_9152|_9160],_9170,_9244):-is(_9180,_9164-1,
	 * get_pats(_9180,_9154,_9160,_9170,_9244)).
	 * get_pats(_9480,[],_9484,_9486,_9542):-get_pats(_9480,_9486,_9484,_9486,_9542)
	 * .
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
		return (Function<PrologMachine, Function>) exec_pred_get_pats_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_get_pats_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_get_pats_4::exec_pred_get_pats_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(browse.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var2)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_get_pats_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_get_pats_4::exec_pred_get_pats_4__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg1).Unify(F(browse.s6, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(browse.s6, var2.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6;
		local_aregs[1] = F(browse.s4, var1.Deref(), browse.posint1);
		local_aregs[2] = F(browse.s20, var6.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_get_pats_4__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var3.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_get_pats_4::exec_static;
	}
}

class pred_property_3 extends Code {

	/*
	 * 
	 * property([],_9730,_9732,_9772):-fail(_9772).
	 * property([_9900|_9902],_9908,_9910,_9978):-functor(_9900,_9908,_9918,cut(1,
	 * arg(1,_9900,_9910,_9978))).
	 * property([_10218|_10220],_10226,_10228,_10276):-property(_10220,_10226,_10228
	 * ,_10276).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_property_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_property_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_property_3::exec_pred_property_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return (Function<PrologMachine, Function>) pred_fail_0::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_property_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_property_3::exec_pred_property_3__3);
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
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var5;
		local_aregs[3] = F(browse.s0, new HeapChoice(mach.CUTB),
				F(browse.s11, browse.posint1, var1.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_property_3__3(PrologMachine mach) {
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
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_property_3::exec_static;
	}
}

class pred_p_investigate_2 extends Code {

	/*
	 * 
	 * p_investigate([],_10448,_10470):-call(_10470).
	 * p_investigate([_10596|_10598],_10604,_10656):-p_match(_10604,_10596,
	 * p_investigate(_10598,_10604,_10656)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_p_investigate_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_p_investigate_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_p_investigate_2::exec_pred_p_investigate_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_p_investigate_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(browse.s29, var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_p_match_2::exec_static;
	}
}

class pred_p_match_2 extends Code {

	/*
	 * 
	 * p_match([],_10862,_10884):-call(_10884).
	 * p_match([_11016|_11018],_11024,_11088):-or((match(_11024,_11016),fail),true,
	 * p_match(_11018,_11024,_11088)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_p_match_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_p_match_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_p_match_2::exec_pred_p_match_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_p_match_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(browse.s3, F(browse.s25, var3.Deref(), var1.Deref()), browse.s17);
		local_aregs[1] = browse.s37;
		local_aregs[2] = F(browse.s30, var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}
}

class pred_match_2 extends Code {

	/*
	 * 
	 * match([],[],_11340):-cut(1,_11340).
	 * match([_11462|_11464],[_11468|_11470],_11544):-var(_11468,cut(1,unify(_11468,
	 * _11462,match(_11464,_11470,_11544)))).
	 * match(_11814,[_11808|_11810],_11902):-nonvar(_11808,unify(star(_11824),_11808
	 * ,cut(1,'$concat'(_11824,_11836,_11814,match(_11836,_11810,_11902))))).
	 * match([_12230|_12232],[_12236|_12238],_12318):-or((atom(_12230)->_12230=
	 * _12236),match(_12230,_12236),match(_12232,_12238,_12318)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_match_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_match_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_match_2::exec_pred_match_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_match_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_match_2::exec_pred_match_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(browse.s6, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(browse.s0, new HeapChoice(mach.CUTB),
				F(browse.s38, var3.Deref(), var1.Deref(), F(browse.s25, var2.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_match_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_match_2::exec_pred_match_2__4);
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
		if (!((areg1).Unify(F(browse.s6, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(browse.s38, F(browse.s35, var4), var2.Deref(),
				F(browse.s0, new HeapChoice(mach.CUTB), F(browse.s1, var4.Deref(), var5, var1.Deref(),
						F(browse.s25, var5.Deref(), var3.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_nonvar_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_match_2__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(browse.s6, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(browse.s5, F(browse.s12, var1.Deref()), F(browse.s8, var1.Deref(), var3.Deref()));
		local_aregs[1] = F(browse.s25, var1.Deref(), var3.Deref());
		local_aregs[2] = F(browse.s25, var2.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}
}

class pred_$concat_3 extends Code {

	/*
	 * 
	 * '$concat'([],_12542,_12542,_12566):-call(_12566).
	 * '$concat'([_12724|_12726],_12738,[_12724|_12732],_12788):-'$concat'(_12726,
	 * _12738,_12732,_12788).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_$concat_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_$concat_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_$concat_3::exec_pred_$concat_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_$concat_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(browse.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(browse.s6, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_$concat_3::exec_static;
	}
}
