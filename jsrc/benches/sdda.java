import java.util.function.Function;

class sdda /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern(" ");
	static Const s2 = Const.Intern("*");
	static Const s3 = Const.Intern("+");
	static Const s4 = Const.Intern(",");
	static Const s5 = Const.Intern("-");
	static Const s6 = Const.Intern("->");
	static Const s7 = Const.Intern(".");
	static Const s8 = Const.Intern("/");
	static Const s9 = Const.Intern("//");
	static Const s10 = Const.Intern(":-");
	static Const s11 = Const.Intern("<");
	static Const s12 = Const.Intern("=");
	static Const s13 = Const.Intern("=..");
	static Const s14 = Const.Intern(">=");
	static Const s15 = Const.Intern("a");
	static Const s16 = Const.Intern("add_to_list");
	static Const s17 = Const.Intern("all_shared");
	static Const s18 = Const.Intern("atom");
	static Const s19 = Const.Intern("atomic");
	static Const s20 = Const.Intern("bind_all");
	static Const s21 = Const.Intern("body_exit_mode");
	static Const s22 = Const.Intern("build_name");
	static Const s23 = Const.Intern("built_in");
	static Const s24 = Const.Intern("c");
	static Const s25 = Const.Intern("call");
	static Const s26 = Const.Intern("clause_exit_mode");
	static Const s27 = Const.Intern("clause_exit_modes_list");
	static Const s28 = Const.Intern("concat");
	static Const s29 = Const.Intern("cut");
	static Const s30 = Const.Intern("do_sdda");
	static Const s31 = Const.Intern("dup");
	static Const s32 = Const.Intern("dup_var");
	static Const s33 = Const.Intern("entry_exit_modes_list");
	static Const s34 = Const.Intern("eqmember");
	static Const s35 = Const.Intern("equiv");
	static Const s36 = Const.Intern("equiv_vars");
	static Const s37 = Const.Intern("fail");
	static Const s38 = Const.Intern("functor");
	static Const s39 = Const.Intern("g");
	static Const s40 = Const.Intern("is");
	static Const s41 = Const.Intern("length");
	static Const s42 = Const.Intern("look_up_act");
	static Const s43 = Const.Intern("make_name");
	static Const s44 = Const.Intern("member");
	static Const s45 = Const.Intern("mod");
	static Const s46 = Const.Intern("name");
	static Const s47 = Const.Intern("name_vars");
	static Const s48 = Const.Intern("nl");
	static Const s49 = Const.Intern("nonvar");
	static Const s50 = Const.Intern("not");
	static Const s51 = Const.Intern("or");
	static Const s52 = Const.Intern("proc_exit_mode");
	static Const s53 = Const.Intern("read_procedures");
	static Const s54 = Const.Intern("smallerthan");
	static Const s55 = Const.Intern("smember");
	static Const s56 = Const.Intern("sumember");
	static Const s57 = Const.Intern("termequal");
	static Const s58 = Const.Intern("test");
	static Const s59 = Const.Intern("top");
	static Const s60 = Const.Intern("true");
	static Const s61 = Const.Intern("umember");
	static Const s62 = Const.Intern("unify");
	static Const s63 = Const.Intern("var");
	static Const s64 = Const.Intern("worst_case");
	static Const s65 = Const.Intern("write");
	static Const s66 = Const.Intern("write_list2");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint3 = Term.Number(3);
	static Int posint26 = Term.Number(26);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_8774):-do_sdda(test,_8748,_8750,_8752,_8774).
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
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		local_aregs[0] = sdda.s58;
		local_aregs[1] = var1;
		local_aregs[2] = var2;
		local_aregs[3] = var3;
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_do_sdda_4::exec_static;
	}
}

class pred_do_sdda_4 extends Code {

	/*
	 * 
	 * do_sdda(_8880,_8882,_8884,_8886,_8954):-read_procedures(_8890,_8882,_8894,
	 * entry_exit_modes_list(_8890,_8882,_8894,_8954)).
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
		return (Function<PrologMachine, Function>) exec_pred_do_sdda_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_do_sdda_4__1(PrologMachine mach) {
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var6;
		local_aregs[3] = F(sdda.s33, var5.Deref(), var2.Deref(), var6.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_read_procedures_3::exec_static;
	}
}

class pred_read_procedures_3 extends Code {

	/*
	 * 
	 * read_procedures([[a/2,a(_9160,_9162),a(_9172,_9172)|_9180],[c/3,(c(_9202,
	 * _9204,_9206):-a(_9202,_9204))|_9224]|_9230],_9250,[c(_9234,_9236,_9238)|_9244
	 * ],_9292):-cut(1,_9292).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_read_procedures_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_read_procedures_3__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var14 = V(mach);
		Var var13 = V(mach);
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
		if (!((areg0)
				.Unify(F(sdda.s7,
						F(sdda.s7, F(sdda.s8, sdda.s15, sdda.posint2),
								F(sdda.s7, F(sdda.s15, var1, var2), F(sdda.s7, F(sdda.s15, var3, var3.Deref()), var4))),
						F(sdda.s7,
								F(sdda.s7, F(sdda.s8, sdda.s24, sdda.posint3), F(sdda.s7, F(sdda.s10,
										F(sdda.s24, var5, var6, var7), F(sdda.s15, var5.Deref(), var6.Deref())), var8)),
								var9)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var10)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, F(sdda.s24, var11, var12, var13), var14))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}
}

class pred_entry_exit_modes_list_3 extends Code {

	/*
	 * 
	 * entry_exit_modes_list(_9362,_9364,_9366,_9410):-var(_9366,_9410).
	 * entry_exit_modes_list(_9522,_9524,[_9516|_9518],_9630):-
	 * =..(_9516,[_9530|_9532],length(_9532,_9544,proc_exit_mode(_9522,_9524,[],
	 * _9530/_9544,_9532,_9564,entry_exit_modes_list(_9522,_9524,_9518,_9630)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_entry_exit_modes_list_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_entry_exit_modes_list_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_entry_exit_modes_list_3::exec_pred_entry_exit_modes_list_3__2);
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
		local_aregs[0] = var3.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_entry_exit_modes_list_3__2(PrologMachine mach) {
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(sdda.s7, var5, var6);
		local_aregs[2] = F(sdda.s41, var6.Deref(), var7,
				F(sdda.s52, var1.Deref(), var2.Deref(), Const.Nil, F(sdda.s8, var5.Deref(), var7.Deref()), var6.Deref(),
						var8, F(sdda.s33, var1.Deref(), var2.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_proc_exit_mode_6 extends Code {

	/*
	 * 
	 * proc_exit_mode(_9976,_9978,_9980,_9970/_9972,_9984,_9986,_10058):-built_in(
	 * _9970/_9972,_9984,_9986,_10058).
	 * proc_exit_mode(_10228,_10230,_10232,_10222/_10224,_10236,_10238,_10326):-
	 * look_up_act([_10222/_10224,_10236,_10238],_10230,_10326).
	 * proc_exit_mode(_10482,_10484,_10486,_10476/_10478,_10490,_10492,_10684):-
	 * umember([_10476/_10478|_10504],_10482,dup(_10504,_10516,
	 * clause_exit_modes_list(_10482,_10484,_10486,_10516,_10490,_10530,or((_10530=[
	 * ]->fail),true,worst_case(_10530,_10492,dup(_10490,_10560,add_to_list([_10476/
	 * _10478,_10560,_10492],_10484,_10684))))))).
	 * proc_exit_mode(_11202,_11204,_11206,_11196/_11198,_11210,_11212,_11330):-
	 * =..(_11222,[_11196|_11210],all_shared(_11210,_11212,add_to_list([_11196/
	 * _11198,_11210,_11212],_11204,_11330))).
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
		return (Function<PrologMachine, Function>) exec_pred_proc_exit_mode_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_proc_exit_mode_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sdda.s8, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sdda.s8, var4.Deref(), var5.Deref());
		local_aregs[1] = var6.Deref();
		local_aregs[2] = var7.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_built_in_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_proc_exit_mode_6__2(PrologMachine mach) {
		mach.FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sdda.s8, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sdda.s7, F(sdda.s8, var4.Deref(), var5.Deref()),
				F(sdda.s7, var6.Deref(), F(sdda.s7, var7.Deref(), Const.Nil)));
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_look_up_act_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_proc_exit_mode_6__3(PrologMachine mach) {
		mach.FillAlternative(pred_proc_exit_mode_6::exec_pred_proc_exit_mode_6__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg3).Unify(F(sdda.s8, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sdda.s7, F(sdda.s8, var4.Deref(), var5.Deref()), var8);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(sdda.s31, var8.Deref(), var9,
				F(sdda.s27, var1.Deref(), var2.Deref(), var3.Deref(), var9.Deref(), var6.Deref(), var10,
						F(sdda.s51, F(sdda.s6, F(sdda.s12, var10.Deref(), Const.Nil), sdda.s37), sdda.s60,
								F(sdda.s64, var10.Deref(), var7.Deref(),
										F(sdda.s31, var6.Deref(), var11, F(sdda.s16,
												F(sdda.s7, F(sdda.s8, var4.Deref(), var5.Deref()),
														F(sdda.s7, var11.Deref(), F(sdda.s7, var7.Deref(), Const.Nil))),
												var2.Deref(), continuation))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_umember_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_proc_exit_mode_6__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sdda.s8, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var8;
		local_aregs[1] = F(sdda.s7, var4.Deref(), var6.Deref());
		local_aregs[2] = F(sdda.s17, var6.Deref(), var7.Deref(),
				F(sdda.s16,
						F(sdda.s7, F(sdda.s8, var4.Deref(), var5.Deref()),
								F(sdda.s7, var6.Deref(), F(sdda.s7, var7.Deref(), Const.Nil))),
						var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_clause_exit_modes_list_6 extends Code {

	/*
	 * 
	 * clause_exit_modes_list(_11580,_11582,_11584,_11586,_11588,[],_11658):-var(
	 * _11586,cut(1,_11658)).
	 * clause_exit_modes_list(_11812,_11814,_11816,[_11806|_11808],_11820,_11822,
	 * _11918):-eqmember([_11806,_11820],_11816,clause_exit_modes_list(_11812,_11814
	 * ,_11816,_11808,_11820,_11822,_11918)).
	 * clause_exit_modes_list(_12192,_12194,_12196,[_12180|_12182],_12200,[_12186|
	 * _12188],_12322):-dup(_12200,_12186,clause_exit_mode(_12192,_12194,[[_12180,
	 * _12200]|_12196],_12180,_12186,clause_exit_modes_list(_12192,_12194,_12196,
	 * _12182,_12200,_12188,_12322))).
	 * clause_exit_modes_list(_12682,_12684,_12686,[_12676|_12678],_12690,_12692,
	 * _12764):-clause_exit_modes_list(_12682,_12684,_12686,_12678,_12690,_12692,
	 * _12764).
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
		return (Function<PrologMachine, Function>) exec_pred_clause_exit_modes_list_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_clause_exit_modes_list_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__2);
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
		if (!((areg5).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_clause_exit_modes_list_6__2(PrologMachine mach) {
		mach.FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sdda.s7, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sdda.s7, var4.Deref(), F(sdda.s7, var6.Deref(), Const.Nil));
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(sdda.s27, var1.Deref(), var2.Deref(), var3.Deref(), var5.Deref(), var6.Deref(), var7.Deref(),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_eqmember_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_clause_exit_modes_list_6__3(PrologMachine mach) {
		mach.FillAlternative(pred_clause_exit_modes_list_6::exec_pred_clause_exit_modes_list_6__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sdda.s7, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(F(sdda.s7, var7, var8))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6.Deref();
		local_aregs[1] = var7.Deref();
		local_aregs[2] = F(sdda.s26, var1.Deref(), var2.Deref(),
				F(sdda.s7, F(sdda.s7, var4.Deref(), F(sdda.s7, var6.Deref(), Const.Nil)), var3.Deref()), var4.Deref(),
				var7.Deref(), F(sdda.s27, var1.Deref(), var2.Deref(), var3.Deref(), var5.Deref(), var6.Deref(),
						var8.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_dup_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_clause_exit_modes_list_6__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sdda.s7, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = var6.Deref();
		local_aregs[5] = var7.Deref();
		local_aregs[6] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_clause_exit_modes_list_6::exec_static;
	}
}

class pred_clause_exit_mode_5 extends Code {

	/*
	 * 
	 * clause_exit_mode(_12976,_12978,_12980,_12982,_12984,_13118):-or(_12982=(
	 * _12988:-_12990),(_12982=_12988,_12990=true),=..(_12988,[_13024|_13026],unify(
	 * _13026,_12984,body_exit_mode(_12976,_12978,_12980,_12990,_13118)))).
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
		return (Function<PrologMachine, Function>) exec_pred_clause_exit_mode_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_clause_exit_mode_5__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		local_aregs[0] = F(sdda.s12, var4.Deref(), F(sdda.s10, var6, var7));
		local_aregs[1] = F(sdda.s4, F(sdda.s12, var4.Deref(), var6.Deref()), F(sdda.s12, var7.Deref(), sdda.s60));
		local_aregs[2] = F(sdda.s13, var6.Deref(), F(sdda.s7, var8, var9), F(sdda.s62, var9.Deref(), var5.Deref(),
				F(sdda.s21, var1.Deref(), var2.Deref(), var3.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}
}

class pred_body_exit_mode_4 extends Code {

	/*
	 * 
	 * body_exit_mode(_13462,_13464,_13466,(_13456,_13458),_13540):-body_exit_mode(
	 * _13462,_13464,_13466,_13456,body_exit_mode(_13462,_13464,_13466,_13458,_13540
	 * )).
	 * body_exit_mode(_13798,_13800,_13802,_13804,_13914):-functor(_13804,_13810,
	 * _13812,=..(_13804,[_13810|_13818],proc_exit_mode(_13798,_13800,_13802,_13810/
	 * _13812,_13818,_13844,unify(_13818,_13844,_13914)))).
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
		return (Function<PrologMachine, Function>) exec_pred_body_exit_mode_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_body_exit_mode_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_body_exit_mode_4::exec_pred_body_exit_mode_4__2);
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sdda.s4, var4, var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = F(sdda.s21, var1.Deref(), var2.Deref(), var3.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_body_exit_mode_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_body_exit_mode_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var5;
		local_aregs[2] = var6;
		local_aregs[3] = F(sdda.s13, var4.Deref(), F(sdda.s7, var5.Deref(), var7),
				F(sdda.s52, var1.Deref(), var2.Deref(), var3.Deref(), F(sdda.s8, var5.Deref(), var6.Deref()),
						var7.Deref(), var8, F(sdda.s62, var7.Deref(), var8.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_functor_3::exec_static;
	}
}

class pred_unify_2 extends Code {

	/*
	 * 
	 * unify(_14286,_14286,_14322):-cut(1,_14322).
	 * unify(_14420,g,_14482):-atomic(_14420,cut(1,not(_14420=[],_14482))).
	 * unify(g,_14658,_14718):-atomic(_14658,cut(1,not(_14658=[],_14718))).
	 * unify([_14892|_14894],[_14898|_14900],_14964):-cut(1,unify(_14892,_14898,
	 * unify(_14894,_14900,_14964))). unify(_15162,_15164,_15240):-
	 * =..(_15162,[_15168|_15170],=..(_15164,[_15168|_15182],unify(_15170,_15182,
	 * _15240))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_unify_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_unify_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_unify_2::exec_pred_unify_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_unify_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_unify_2::exec_pred_unify_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sdda.s39)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s50, F(sdda.s12, var1.Deref(), Const.Nil), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_unify_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_unify_2::exec_pred_unify_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(sdda.s39)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s50, F(sdda.s12, var1.Deref(), Const.Nil), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_unify_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_unify_2::exec_pred_unify_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sdda.s62, var1.Deref(), var3.Deref(), F(sdda.s62, var2.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_unify_2__5(PrologMachine mach) {
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
		local_aregs[1] = F(sdda.s7, var3, var4);
		local_aregs[2] = F(sdda.s13, var2.Deref(), F(sdda.s7, var3.Deref(), var5),
				F(sdda.s62, var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_equiv_2 extends Code {

	/*
	 * 
	 * equiv(_15482,_15484,_15526):-equiv(_15482,_15484,_15492,_15526).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_equiv_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_2__1(PrologMachine mach) {
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
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_equiv_3::exec_static;
	}
}

class pred_equiv_3 extends Code {

	/*
	 * 
	 * equiv(_15688,_15690,_15692,_15744):-termequal(_15688,_15690,cut(1,_15744)).
	 * equiv(g,_15920,_15922,_15988):-atomic(_15920,cut(1,not(_15920=[],_15988))).
	 * equiv(_16182,g,_16186,_16252):-atomic(_16182,cut(1,not(_16182=[],_16252))).
	 * equiv(_16446,_16448,_16450,_16524):-var(_16446,cut(1,var(_16448,equiv_vars(
	 * _16446,_16448,_16450,_16524)))).
	 * equiv(_16778,_16780,_16782,_16856):-var(_16780,cut(1,var(_16778,equiv_vars(
	 * _16778,_16780,_16782,_16856)))).
	 * equiv([_17110|_17112],[_17116|_17118],_17126,_17194):-cut(1,equiv(_17110,
	 * _17116,_17126,equiv(_17112,_17118,_17126,_17194))).
	 * equiv(_17440,_17442,_17444,_17528):-
	 * =..(_17440,[_17448|_17450],=..(_17442,[_17448|_17462],equiv(_17450,_17462,
	 * _17444,_17528))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_equiv_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__2);
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
		local_aregs[2] = F(sdda.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(sdda.s39)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s50, F(sdda.s12, var1.Deref(), Const.Nil), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sdda.s39)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s50, F(sdda.s12, var1.Deref(), Const.Nil), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__5);
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
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s63, var2.Deref(), F(sdda.s36, var1.Deref(), var2.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__6);
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
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s63, var1.Deref(), F(sdda.s36, var1.Deref(), var2.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_3__6(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_3::exec_pred_equiv_3__7);
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
		if (!((areg0).Unify(F(sdda.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sdda.s35, var1.Deref(), var3.Deref(), var5.Deref(),
				F(sdda.s35, var2.Deref(), var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_3__7(PrologMachine mach) {
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
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s7, var4, var5);
		local_aregs[2] = F(sdda.s13, var2.Deref(), F(sdda.s7, var4.Deref(), var6),
				F(sdda.s35, var5.Deref(), var6.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_equiv_vars_3 extends Code {

	/*
	 * 
	 * equiv_vars(_17804,_17806,_17808,_17888):-var(_17808,cut(1,unify([[_17804,
	 * _17806]|_17830],_17808,_17888))).
	 * equiv_vars(_18122,_18124,[[_18104,_18110]|_18118],_18190):-termequal(_18122,
	 * _18104,cut(1,termequal(_18124,_18110,_18190))).
	 * equiv_vars(_18444,_18446,[[_18426,_18432]|_18440],_18512):-termequal(_18446,
	 * _18432,cut(1,termequal(_18444,_18426,_18512))).
	 * equiv_vars(_18754,_18756,[_18748|_18750],_18806):-equiv_vars(_18754,_18756,
	 * _18750,_18806).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_equiv_vars_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_vars_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__2);
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
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s62, F(sdda.s7, F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)), var4),
						var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_vars_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__3);
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
		if (!((areg2).Unify(F(sdda.s7, F(sdda.s7, var3, F(sdda.s7, var4, Const.Nil)), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(sdda.s0, new HeapChoice(mach.CUTB), F(sdda.s57, var2.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_vars_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_equiv_vars_3::exec_pred_equiv_vars_3__4);
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
		if (!((areg2).Unify(F(sdda.s7, F(sdda.s7, var3, F(sdda.s7, var4, Const.Nil)), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = F(sdda.s0, new HeapChoice(mach.CUTB), F(sdda.s57, var1.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_equiv_vars_3__4(PrologMachine mach) {
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
		if (!((areg2).Unify(F(sdda.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_equiv_vars_3::exec_static;
	}
}

class pred_dup_2 extends Code {

	/*
	 * 
	 * dup(_18988,_18990,_19032):-dup(_18988,_18990,_18998,_19032).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_dup_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_dup_2__1(PrologMachine mach) {
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
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_dup_3::exec_static;
	}
}

class pred_dup_3 extends Code {

	/*
	 * 
	 * dup(_19212,_19214,_19216,_19280):-var(_19212,cut(1,dup_var(_19212,_19214,
	 * _19216,_19280))).
	 * dup(_19516,_19516,_19520,_19570):-atomic(_19516,cut(1,_19570)).
	 * dup([_19742|_19744],[_19748|_19750],_19758,_19826):-cut(1,dup(_19742,_19748,
	 * _19758,dup(_19744,_19750,_19758,_19826))). dup(_20090,_20092,_20094,_20178):-
	 * =..(_20090,[_20098|_20100],dup(_20100,_20112,_20094,=..(_20092,[_20098|_20112
	 * ],_20178))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_dup_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_dup_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_dup_3::exec_pred_dup_3__2);
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
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s32, var1.Deref(), var2.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_dup_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_dup_3::exec_pred_dup_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_dup_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_dup_3::exec_pred_dup_3__4);
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
		if (!((areg0).Unify(F(sdda.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sdda.s31, var1.Deref(), var3.Deref(), var5.Deref(),
				F(sdda.s31, var2.Deref(), var4.Deref(), var5.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_dup_3__4(PrologMachine mach) {
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
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s7, var4, var5);
		local_aregs[2] = F(sdda.s31, var5.Deref(), var6, var3.Deref(),
				F(sdda.s13, var2.Deref(), F(sdda.s7, var4.Deref(), var6.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_dup_var_3 extends Code {

	/*
	 * 
	 * dup_var(_20472,_20474,_20476,_20556):-var(_20476,cut(1,unify([[_20472,_20474]
	 * |_20498],_20476,_20556))).
	 * dup_var(_20808,_20796,[[_20790,_20796]|_20804],_20864):-termequal(_20808,
	 * _20790,cut(1,_20864)).
	 * dup_var(_21068,_21070,[_21062|_21064],_21120):-dup_var(_21068,_21070,_21064,
	 * _21120).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_dup_var_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_dup_var_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__2);
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
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB),
				F(sdda.s62, F(sdda.s7, F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)), var4),
						var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_dup_var_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_dup_var_3::exec_pred_dup_var_3__3);
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
		if (!((areg2).Unify(F(sdda.s7, F(sdda.s7, var3, F(sdda.s7, var2.Deref(), Const.Nil)), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(sdda.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_dup_var_3__3(PrologMachine mach) {
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
		if (!((areg2).Unify(F(sdda.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_dup_var_3::exec_static;
	}
}

class pred_built_in_3 extends Code {

	/*
	 * 
	 * built_in(true/0,[],[],_21352):-call(_21352).
	 * built_in(fail/0,[],[],_21554):-call(_21554).
	 * built_in((=)/2,[_21730,_21736],[g,g],_21812):-or(atomic(_21730),atomic(_21736
	 * ),_21812).
	 * built_in((=)/2,[_22016,_22022],[_22016,_22016],_22066):-call(_22066).
	 * built_in((+)/2,[_22242,_22248],[_22242,_22248],_22292):-call(_22292).
	 * built_in((-)/2,[_22468,_22474],[_22468,_22474],_22518):-call(_22518).
	 * built_in((*)/2,[_22694,_22700],[_22694,_22700],_22744):-call(_22744).
	 * built_in((/)/2,[_22920,_22926],[_22920,_22926],_22970):-call(_22970).
	 * built_in((>=)/2,[_23146,_23152],[_23146,_23152],_23196):-call(_23196).
	 * built_in((<)/2,[_23372,_23378],[_23372,_23378],_23422):-call(_23422).
	 * built_in((is)/2,[_23598,_23604],[g,_23604],_23648):-call(_23648).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_built_in_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(F(sdda.s8, sdda.s60, sdda.posint0))))
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

	public static Function<PrologMachine, Function> exec_pred_built_in_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(F(sdda.s8, sdda.s37, sdda.posint0))))
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

	public static Function<PrologMachine, Function> exec_pred_built_in_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s12, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, sdda.s39, F(sdda.s7, sdda.s39, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sdda.s19, var1.Deref());
		local_aregs[1] = F(sdda.s19, var2.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s12, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), F(sdda.s7, var1.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s3, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__6(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s5, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__7(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s2, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__8(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s8, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__9(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s14, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__10(PrologMachine mach) {
		mach.FillAlternative(pred_built_in_3::exec_pred_built_in_3__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s11, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), F(sdda.s7, var2.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_built_in_3__11(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s8, sdda.s40, sdda.posint2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1, F(sdda.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, sdda.s39, F(sdda.s7, var2.Deref(), Const.Nil)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_worst_case_2 extends Code {

	/*
	 * 
	 * worst_case([],_23820,_23842):-call(_23842).
	 * worst_case([_24004|_24006],_24012,_24064):-unify(_24004,_24012,worst_case(
	 * _24006,_24012,_24064)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_worst_case_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_worst_case_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_worst_case_2::exec_pred_worst_case_2__2);
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

	public static Function<PrologMachine, Function> exec_pred_worst_case_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sdda.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(sdda.s64, var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_unify_2::exec_static;
	}
}

class pred_look_up_act_2 extends Code {

	/*
	 * 
	 * look_up_act(_24304,_24306,_24356):-var(_24306,cut(1,fail(_24356))).
	 * look_up_act([_24566/_24568,_24578,_24584],[[_24566/_24568,_24602,_24584]|
	 * _24616],_24662):-equiv(_24578,_24602,_24662).
	 * look_up_act([_24858/_24860,_24870,_24876],[_24882|_24884],_24954):-
	 * look_up_act([_24858/_24860,_24870,_24876],_24884,_24954).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_look_up_act_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_look_up_act_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB), F(sdda.s37, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_look_up_act_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_look_up_act_2::exec_pred_look_up_act_2__3);
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
		if (!((areg0).Unify(F(sdda.s7, F(sdda.s8, var1, var2), F(sdda.s7, var3, F(sdda.s7, var4, Const.Nil))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, F(sdda.s7, F(sdda.s8, var1.Deref(), var2.Deref()),
				F(sdda.s7, var5, F(sdda.s7, var4.Deref(), Const.Nil))), var6))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var5.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_equiv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_look_up_act_2__3(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(F(sdda.s7, F(sdda.s8, var1, var2), F(sdda.s7, var3, F(sdda.s7, var4, Const.Nil))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var5, var6))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sdda.s7, F(sdda.s8, var1.Deref(), var2.Deref()),
				F(sdda.s7, var3.Deref(), F(sdda.s7, var4.Deref(), Const.Nil)));
		local_aregs[1] = var6.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_look_up_act_2::exec_static;
	}
}

class pred_all_shared_2 extends Code {

	/*
	 * 
	 * all_shared(_25150,_25152,_25220):-unify(_25150,_25158,_25160,bind_all(_25164,
	 * _25160,unify(_25150,_25152,_25160,_25220))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_all_shared_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_all_shared_2__1(PrologMachine mach) {
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
		local_aregs[2] = var4;
		local_aregs[3] = F(sdda.s20, var5, var4.Deref(),
				F(sdda.s62, var1.Deref(), var2.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_unify_3::exec_static;
	}
}

class pred_bind_all_2 extends Code {

	/*
	 * 
	 * bind_all(_25550,_25552,_25590):-var(_25552,_25590).
	 * bind_all(_25790,[[_25784,_25790]|_25798],_25854):-var(_25790,bind_all(_25790,
	 * _25798,_25854)).
	 * bind_all(_26116,[[_26098,_26104]|_26112],_26158):-bind_all(_26116,_26112,
	 * _26158).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_bind_all_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_bind_all_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_bind_all_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_bind_all_2::exec_pred_bind_all_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, F(sdda.s7, var2, F(sdda.s7, var1.Deref(), Const.Nil)), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s20, var1.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_bind_all_2__3(PrologMachine mach) {
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
		if (!((areg1).Unify(F(sdda.s7, F(sdda.s7, var2, F(sdda.s7, var3, Const.Nil)), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_bind_all_2::exec_static;
	}
}

class pred_add_to_list_2 extends Code {

	/*
	 * 
	 * add_to_list(_4212,_4214,_4228):-var(_4214,unify([_4212|_4220],_4214,_4228)).
	 * add_to_list(_4264,[_4260|_4262],_4272):-add_to_list(_4264,_4262,_4272).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_add_to_list_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_add_to_list_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_add_to_list_2::exec_pred_add_to_list_2__2);
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
		local_aregs[1] = F(sdda.s62, F(sdda.s7, var1.Deref(), var3), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_add_to_list_2__2(PrologMachine mach) {
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
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_add_to_list_2::exec_static;
	}
}

class pred_umember_2 extends Code {

	/*
	 * 
	 * umember(_4296,_4298,_4306):-var(_4298,cut(1,fail(_4306))).
	 * umember(_4340,[_4340|_4342],_4352):-call(_4352).
	 * umember(_4374,[_4370|_4372],_4382):-umember(_4374,_4372,_4382).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_umember_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_umember_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_umember_2::exec_pred_umember_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB), F(sdda.s37, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_umember_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_umember_2::exec_pred_umember_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1.Deref(), var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_umember_2__3(PrologMachine mach) {
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
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_umember_2::exec_static;
	}
}

class pred_sumember_2 extends Code {

	/*
	 * 
	 * sumember(_4406,_4408,_4416):-var(_4408,cut(1,fail(_4416))).
	 * sumember(_4454,[_4450|_4452],_4462):-termequal(_4454,_4450,_4462).
	 * sumember(_4492,[_4488|_4490],_4500):-sumember(_4492,_4490,_4500).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_sumember_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_sumember_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_sumember_2::exec_pred_sumember_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB), F(sdda.s37, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_sumember_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_sumember_2::exec_pred_sumember_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_sumember_2__3(PrologMachine mach) {
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
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sumember_2::exec_static;
	}
}

class pred_member_2 extends Code {

	/*
	 * 
	 * member(_4526,[_4526|_4528],_4538):-call(_4538).
	 * member(_4560,[_4556|_4558],_4568):-member(_4560,_4558,_4568).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_member_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_member_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_member_2::exec_pred_member_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var1.Deref(), var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_member_2__2(PrologMachine mach) {
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
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_member_2::exec_static;
	}
}

class pred_smember_2 extends Code {

	/*
	 * 
	 * smember(_4598,[_4594|_4596],_4606):-termequal(_4598,_4594,_4606).
	 * smember(_4636,[_4632|_4634],_4644):-smember(_4636,_4634,_4644).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_smember_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_smember_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_smember_2::exec_pred_smember_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_smember_2__2(PrologMachine mach) {
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
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smember_2::exec_static;
	}
}

class pred_eqmember_2 extends Code {

	/*
	 * 
	 * eqmember(_4674,[_4670|_4672],_4682):-equiv(_4674,_4670,_4682).
	 * eqmember(_4712,[_4708|_4710],_4720):-eqmember(_4712,_4710,_4720).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_eqmember_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_eqmember_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_eqmember_2::exec_pred_eqmember_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_equiv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_eqmember_2__2(PrologMachine mach) {
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
		if (!((areg1).Unify(F(sdda.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_eqmember_2::exec_static;
	}
}

class pred_concat_3 extends Code {

	/*
	 * 
	 * concat([],_4744,_4744,_4754):-call(_4754).
	 * concat([_4774|_4776],_4784,[_4774|_4782],_4792):-concat(_4776,_4784,_4782,
	 * _4792).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_concat_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_concat_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_concat_3::exec_pred_concat_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_concat_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(sdda.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_concat_3::exec_static;
	}
}

class pred_nl_0 extends Code {

	/*
	 * 
	 * nl(_4828):-call(_4828).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_nl_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_nl_0__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class pred_write_list2_3 extends Code {

	/*
	 * 
	 * write_list2([_4842|_4844],_4846,_4848,_4908):-name_vars(_4842,_4846,_4850,
	 * write(_4842,or((nonvar(_4844)->write(','),nl,write('
	 * '),write_list2(_4844,_4850,_4848)),_4848=_4850,_4908))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_write_list2_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_write_list2_3__1(PrologMachine mach) {
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
		if (!((areg0).Unify(F(sdda.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var5;
		local_aregs[3] = F(sdda.s65, var1.Deref(),
				F(sdda.s51,
						F(sdda.s6, F(sdda.s49, var2.Deref()),
								F(sdda.s4, F(sdda.s65, sdda.s4),
										F(sdda.s4, sdda.s48,
												F(sdda.s4, F(sdda.s65, sdda.s1),
														F(sdda.s66, var2.Deref(), var5.Deref(), var4.Deref()))))),
						F(sdda.s12, var4.Deref(), var5.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_name_vars_3::exec_static;
	}
}

class pred_name_vars_3 extends Code {

	/*
	 * 
	 * name_vars(_4950,_4952,_4954,_4968):-var(_4950,cut(1,make_name(_4952,_4950,is(
	 * _4954,_4952+1,_4968)))).
	 * name_vars(_5014,_5016,_5016,_5024):-atom(_5014,cut(1,_5024)).
	 * name_vars([_5056|_5058],_5060,_5062,_5072):-cut(1,name_vars(_5056,_5060,_5064
	 * ,name_vars(_5058,_5064,_5062,_5072))). name_vars(_5116,_5118,_5120,_5134):-
	 * =..(_5116,[_5124|_5126],name_vars(_5126,_5118,_5120,_5134)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_name_vars_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_name_vars_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__2);
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
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB), F(sdda.s43, var2.Deref(), var1.Deref(),
				F(sdda.s40, var3.Deref(), F(sdda.s3, var2.Deref(), sdda.posint1), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_name_vars_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__3);
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
		if (!((areg2).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atom_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_name_vars_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_name_vars_3::exec_pred_name_vars_3__4);
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
		if (!((areg0).Unify(F(sdda.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sdda.s47, var1.Deref(), var3.Deref(), var5,
				F(sdda.s47, var2.Deref(), var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_name_vars_3__4(PrologMachine mach) {
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
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sdda.s7, var4, var5);
		local_aregs[2] = F(sdda.s47, var5.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_make_name_2 extends Code {

	/*
	 * 
	 * make_name(_5170,_5172,_5210):-is(_5180,_5170//26,is(_5200,_5170 mod
	 * 26+"A",build_name(_5180,_5200,_5202,name(_5172,_5202,_5210)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_make_name_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_make_name_2__1(PrologMachine mach) {
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
		local_aregs[0] = var3;
		local_aregs[1] = F(sdda.s9, var1.Deref(), sdda.posint26);
		local_aregs[2] = F(sdda.s40, var4, F(sdda.s3, F(sdda.s45, var1.Deref(), sdda.posint26), Const.Intern("A")),
				F(sdda.s22, var3.Deref(), var4.Deref(), var5, F(sdda.s46, var2.Deref(), var5.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_build_name_3 extends Code {

	/*
	 * 
	 * build_name(0,_5262,[_5262],_5272):-cut(1,_5272).
	 * build_name(_5302,_5298,[_5298|_5300],_5318):-smallerthan(0,_5302,is(_5310,
	 * _5302-1,build_name(_5310,_5298,_5300,_5318))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_build_name_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_build_name_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_build_name_3::exec_pred_build_name_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(sdda.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sdda.s7, var1.Deref(), Const.Nil))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_build_name_3__2(PrologMachine mach) {
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
		if (!((areg2).Unify(F(sdda.s7, var2.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sdda.posint0;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(sdda.s40, var4, F(sdda.s5, var1.Deref(), sdda.posint1),
				F(sdda.s22, var4.Deref(), var2.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}
