import java.util.function.Function;

class nand /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern(" inputs:   ");
	static Const s2 = Const.Intern("+");
	static Const s3 = Const.Intern(",");
	static Const s4 = Const.Intern("->");
	static Const s5 = Const.Intern(".");
	static Const s6 = Const.Intern(":-");
	static Const s7 = Const.Intern(";");
	static Const s8 = Const.Intern("=");
	static Const s9 = Const.Intern(">=");
	static Const s10 = Const.Intern("access");
	static Const s11 = Const.Intern("add_necessary_functions");
	static Const s12 = Const.Intern("best_vector");
	static Const s13 = Const.Intern("bound");
	static Const s14 = Const.Intern("call");
	static Const s15 = Const.Intern("conceivable_inputs");
	static Const s16 = Const.Intern("cov");
	static Const s17 = Const.Intern("cover_type1");
	static Const s18 = Const.Intern("cover_type2");
	static Const s19 = Const.Intern("cover_vector");
	static Const s20 = Const.Intern("cut");
	static Const s21 = Const.Intern("dummy");
	static Const s22 = Const.Intern("erase");
	static Const s23 = Const.Intern("exclude_if_vector_in_false_set");
	static Const s24 = Const.Intern("exf");
	static Const s25 = Const.Intern("exmcf");
	static Const s26 = Const.Intern("exp");
	static Const s27 = Const.Intern("fail");
	static Const s28 = Const.Intern("false_set");
	static Const s29 = Const.Intern("fcn");
	static Const s30 = Const.Intern("function");
	static Const s31 = Const.Intern("function_number");
	static Const s32 = Const.Intern("function_type");
	static Const s33 = Const.Intern("gate #");
	static Const s34 = Const.Intern("immediate_predecessors");
	static Const s35 = Const.Intern("immediate_successors");
	static Const s36 = Const.Intern("init_state");
	static Const s37 = Const.Intern("is");
	static Const s38 = Const.Intern("main");
	static Const s39 = Const.Intern("max_type");
	static Const s40 = Const.Intern("mcf");
	static Const s41 = Const.Intern("new_function_CIs");
	static Const s42 = Const.Intern("nf");
	static Const s43 = Const.Intern("nl");
	static Const s44 = Const.Intern("not");
	static Const s45 = Const.Intern("or");
	static Const s46 = Const.Intern("predecessors");
	static Const s47 = Const.Intern("recorda");
	static Const s48 = Const.Intern("recorded");
	static Const s49 = Const.Intern("search");
	static Const s50 = Const.Intern("select_vector");
	static Const s51 = Const.Intern("set");
	static Const s52 = Const.Intern("set_difference");
	static Const s53 = Const.Intern("set_intersection");
	static Const s54 = Const.Intern("set_member");
	static Const s55 = Const.Intern("set_subset");
	static Const s56 = Const.Intern("set_union");
	static Const s57 = Const.Intern("smallerorequal");
	static Const s58 = Const.Intern("smallerthan");
	static Const s59 = Const.Intern("successors");
	static Const s60 = Const.Intern("test_bounds");
	static Const s61 = Const.Intern("top");
	static Const s62 = Const.Intern("true");
	static Const s63 = Const.Intern("true_set");
	static Const s64 = Const.Intern("type_order");
	static Const s65 = Const.Intern("unify");
	static Const s66 = Const.Intern("update_bounds");
	static Const s67 = Const.Intern("update_circuit");
	static Const s68 = Const.Intern("var");
	static Const s69 = Const.Intern("vector_cover_type");
	static Const s70 = Const.Intern("vector_types");
	static Const s71 = Const.Intern("write");
	static Const s72 = Const.Intern("write_gates");
	static Int posint0 = Term.Number(0);
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
	static Int posint31 = Term.Number(31);
	static Int posint100 = Term.Number(100);
	static Int posint999 = Term.Number(999);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_37856):-main(0,_37856).
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
		local_aregs[0] = nand.posint0;
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_main_1::exec_static;
	}
}

class pred_main_1 extends Code {

	/*
	 * 
	 * main(_37920,_38004):-init_state(_37920,_37926,_37928,_37930,
	 * add_necessary_functions(_37926,_37928,_37930,_37940,_37942,test_bounds(_37926
	 * ,_37940,_37942,search(_37926,_37940,_37942,_38004)))).
	 * main(_38344,_38366):-call(_38366).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_main_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_main_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_main_1::exec_pred_main_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2;
		local_aregs[2] = var3;
		local_aregs[3] = var4;
		local_aregs[4] = F(nand.s11, var2.Deref(), var3.Deref(), var4.Deref(), var5, var6, F(nand.s60, var2.Deref(),
				var5.Deref(), var6.Deref(), F(nand.s49, var2.Deref(), var5.Deref(), var6.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_init_state_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_main_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_init_state_4 extends Code {

	/*
	 * 
	 * init_state(0,2,3,[function(2,[1,2],[0,3],[],[],[],[],[]),function(1,[2,3],[0,
	 * 1],[],[],[],[],[]),function(0,[1,3],[0,2],[],[],[],[],[])],_38628):-
	 * update_bounds(_38578,100,_38582,_38628).
	 * init_state(1,3,4,[function(3,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(2,[
	 * 4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[]
	 * ,[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_39112):-update_bounds(
	 * _39062,100,_39066,_39112).
	 * init_state(2,3,4,[function(3,[1,2,4,6,7],[0,3,5],[],[],[],[],[]),function(2,[
	 * 4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[]
	 * ,[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_39596):-update_bounds(
	 * _39546,100,_39550,_39596).
	 * init_state(3,3,4,[function(3,[1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[
	 * 4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[]
	 * ,[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_40080):-update_bounds(
	 * _40030,100,_40034,_40080).
	 * init_state(4,3,5,[function(4,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(3,[
	 * 1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[]
	 * ,[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2
	 * ,4,6],[],[],[],[],[])],_40636):-update_bounds(_40586,100,_40590,_40636).
	 * init_state(5,5,8,[function(7,[1,3,4,6,9,11,12,14,16,18,21,23,24,26,29,31],[0,
	 * 2,5,7,8,10,13,15,17,19,20,22,25,27,28,30],[],[],[],[],[]),function(6,[2,3,5,6
	 * ,8,9,12,15,17,18,20,21,24,27,30,31],[0,1,4,7,10,11,13,14,16,19,22,23,25,26,28
	 * ,29],[],[],[],[],[]),function(5,[7,10,11,13,14,15,19,22,23,25,26,27,28,29,30,
	 * 31],[0,1,2,3,4,5,6,8,9,12,16,17,18,20,21,24],[],[],[],[],[]),function(4,[16,
	 * 17,18,19,20,21,22,23,24,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,7,8,9,10,11,12,
	 * 13,14,15],[],[],[],[],[]),function(3,[8,9,10,11,12,13,14,15,24,25,26,27,28,29
	 * ,30,31],[0,1,2,3,4,5,6,7,16,17,18,19,20,21,22,23],[],[],[],[],[]),function(2,
	 * [4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31],[0,1,2,3,8,9,10,11,16,17,18,19,
	 * 24,25,26,27],[],[],[],[],[]),function(1,[2,3,6,7,10,11,14,15,18,19,22,23,26,
	 * 27,30,31],[0,1,4,5,8,9,12,13,16,17,20,21,24,25,28,29],[],[],[],[],[]),
	 * function(0,[1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31],[0,2,4,6,8,10,12,14,
	 * 16,18,20,22,24,26,28,30],[],[],[],[],[])],_42560):-update_bounds(_42510,21,
	 * _42514,_42560).
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
		return (Function<PrologMachine, Function>) exec_pred_init_state_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_init_state_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(nand.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.posint2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(nand.posint3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5,
				F(nand.s30, nand.posint2, F(nand.s5, nand.posint1, F(nand.s5, nand.posint2, Const.Nil)),
						F(nand.s5, nand.posint0, F(nand.s5, nand.posint3, Const.Nil)), Const.Nil, Const.Nil, Const.Nil,
						Const.Nil, Const.Nil),
				F(nand.s5,
						F(nand.s30, nand.posint1, F(nand.s5, nand.posint2, F(nand.s5, nand.posint3, Const.Nil)), F(
								nand.s5, nand.posint0, F(nand.s5, nand.posint1, Const.Nil)), Const.Nil, Const.Nil,
								Const.Nil, Const.Nil, Const.Nil),
						F(nand.s5,
								F(nand.s30, nand.posint0, F(nand.s5, nand.posint1, F(nand.s5, nand.posint3, Const.Nil)),
										F(nand.s5, nand.posint0, F(nand.s5, nand.posint2, Const.Nil)), Const.Nil,
										Const.Nil, Const.Nil, Const.Nil, Const.Nil),
								Const.Nil))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1;
		local_aregs[1] = nand.posint100;
		local_aregs[2] = var2;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_update_bounds_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_init_state_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(nand.posint1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.posint3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(nand.posint4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5, F(nand.s30, nand.posint3,
				F(nand.s5, nand.posint3,
						F(nand.s5, nand.posint5, F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
				F(nand.s5, nand.posint0,
						F(nand.s5, nand.posint1, F(nand.s5, nand.posint2, F(nand.s5, nand.posint4, Const.Nil)))),
				Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
				F(nand.s5,
						F(nand.s30, nand.posint2,
								F(nand.s5, nand.posint4, F(nand.s5, nand.posint5,
										F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
								F(nand.s5, nand.posint0,
										F(nand.s5, nand.posint1,
												F(nand.s5, nand.posint2, F(nand.s5, nand.posint3, Const.Nil)))),
								Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
						F(nand.s5,
								F(nand.s30, nand.posint1,
										F(nand.s5, nand.posint2,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint1,
														F(nand.s5, nand.posint4, F(nand.s5, nand.posint5, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
								F(nand.s5, F(nand.s30, nand.posint0,
										F(nand.s5, nand.posint1,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint5, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint2,
														F(nand.s5, nand.posint4, F(nand.s5, nand.posint6, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil), Const.Nil)))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1;
		local_aregs[1] = nand.posint100;
		local_aregs[2] = var2;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_update_bounds_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_init_state_4__3(PrologMachine mach) {
		mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(nand.posint2)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.posint3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(nand.posint4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5, F(nand.s30, nand.posint3, F(nand.s5, nand.posint1,
				F(nand.s5, nand.posint2,
						F(nand.s5, nand.posint4, F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil))))),
				F(nand.s5, nand.posint0, F(nand.s5, nand.posint3, F(nand.s5, nand.posint5, Const.Nil))), Const.Nil,
				Const.Nil, Const.Nil, Const.Nil, Const.Nil),
				F(nand.s5,
						F(nand.s30, nand.posint2,
								F(nand.s5, nand.posint4, F(nand.s5, nand.posint5,
										F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
								F(nand.s5, nand.posint0,
										F(nand.s5, nand.posint1,
												F(nand.s5, nand.posint2, F(nand.s5, nand.posint3, Const.Nil)))),
								Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
						F(nand.s5,
								F(nand.s30, nand.posint1,
										F(nand.s5, nand.posint2,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint1,
														F(nand.s5, nand.posint4, F(nand.s5, nand.posint5, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
								F(nand.s5, F(nand.s30, nand.posint0,
										F(nand.s5, nand.posint1,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint5, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint2,
														F(nand.s5, nand.posint4, F(nand.s5, nand.posint6, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil), Const.Nil)))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1;
		local_aregs[1] = nand.posint100;
		local_aregs[2] = var2;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_update_bounds_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_init_state_4__4(PrologMachine mach) {
		mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(nand.posint3)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.posint3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(nand.posint4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5, F(nand.s30, nand.posint3,
				F(nand.s5, nand.posint1,
						F(nand.s5, nand.posint2, F(nand.s5, nand.posint4, F(nand.s5, nand.posint7, Const.Nil)))),
				F(nand.s5, nand.posint0,
						F(nand.s5, nand.posint3, F(nand.s5, nand.posint5, F(nand.s5, nand.posint6, Const.Nil)))),
				Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
				F(nand.s5,
						F(nand.s30, nand.posint2,
								F(nand.s5, nand.posint4, F(nand.s5, nand.posint5,
										F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
								F(nand.s5, nand.posint0,
										F(nand.s5, nand.posint1,
												F(nand.s5, nand.posint2, F(nand.s5, nand.posint3, Const.Nil)))),
								Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
						F(nand.s5,
								F(nand.s30, nand.posint1,
										F(nand.s5, nand.posint2,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint1,
														F(nand.s5, nand.posint4, F(nand.s5, nand.posint5, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
								F(nand.s5, F(nand.s30, nand.posint0,
										F(nand.s5, nand.posint1,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint5, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint2,
														F(nand.s5, nand.posint4, F(nand.s5, nand.posint6, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil), Const.Nil)))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1;
		local_aregs[1] = nand.posint100;
		local_aregs[2] = var2;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_update_bounds_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_init_state_4__5(PrologMachine mach) {
		mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(nand.posint4)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.posint3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(nand.posint5)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5, F(nand.s30, nand.posint4,
				F(nand.s5, nand.posint3,
						F(nand.s5, nand.posint5, F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
				F(nand.s5, nand.posint0,
						F(nand.s5, nand.posint1, F(nand.s5, nand.posint2, F(nand.s5, nand.posint4, Const.Nil)))),
				Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
				F(nand.s5,
						F(nand.s30, nand.posint3,
								F(nand.s5, nand.posint1, F(nand.s5, nand.posint2,
										F(nand.s5, nand.posint4, F(nand.s5, nand.posint7, Const.Nil)))),
								F(nand.s5, nand.posint0,
										F(nand.s5, nand.posint3,
												F(nand.s5, nand.posint5, F(nand.s5, nand.posint6, Const.Nil)))),
								Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
						F(nand.s5,
								F(nand.s30, nand.posint2,
										F(nand.s5, nand.posint4,
												F(nand.s5, nand.posint5,
														F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint1,
														F(nand.s5, nand.posint2, F(nand.s5, nand.posint3, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
								F(nand.s5, F(nand.s30, nand.posint1,
										F(nand.s5, nand.posint2,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, Const.Nil)))),
										F(nand.s5, nand.posint0,
												F(nand.s5, nand.posint1,
														F(nand.s5, nand.posint4, F(nand.s5, nand.posint5, Const.Nil)))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
										F(nand.s5, F(nand.s30, nand.posint0, F(nand.s5, nand.posint1,
												F(nand.s5, nand.posint3,
														F(nand.s5, nand.posint5, F(nand.s5, nand.posint7, Const.Nil)))),
												F(nand.s5, nand.posint0,
														F(nand.s5, nand.posint2,
																F(nand.s5, nand.posint4,
																		F(nand.s5, nand.posint6, Const.Nil)))),
												Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
												Const.Nil))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1;
		local_aregs[1] = nand.posint100;
		local_aregs[2] = var2;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_update_bounds_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_init_state_4__6(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(nand.posint5)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.posint5)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(nand.posint8)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5,
				F(nand.s30, nand.posint7, F(nand.s5, nand.posint1, F(nand.s5, nand.posint3, F(nand.s5, nand.posint4,
						F(nand.s5, nand.posint6, F(nand.s5, nand.posint9, F(nand.s5, nand.posint11,
								F(nand.s5, nand.posint12, F(nand.s5, nand.posint14, F(nand.s5, nand.posint16,
										F(nand.s5, nand.posint18, F(nand.s5, nand.posint21, F(nand.s5, nand.posint23,
												F(nand.s5, nand.posint24, F(nand.s5, nand.posint26,
														F(nand.s5, nand.posint29,
																F(nand.s5, nand.posint31, Const.Nil)))))))))))))))),
						F(nand.s5, nand.posint0, F(nand.s5, nand.posint2, F(nand.s5, nand.posint5, F(nand.s5,
								nand.posint7,
								F(nand.s5, nand.posint8, F(nand.s5, nand.posint10, F(nand.s5, nand.posint13, F(nand.s5,
										nand.posint15,
										F(nand.s5, nand.posint17, F(nand.s5, nand.posint19, F(nand.s5, nand.posint20, F(
												nand.s5, nand.posint22,
												F(nand.s5, nand.posint25, F(nand.s5, nand.posint27,
														F(nand.s5, nand.posint28,
																F(nand.s5, nand.posint30, Const.Nil)))))))))))))))),
						Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
				F(nand.s5, F(nand.s30, nand.posint6, F(nand.s5, nand.posint2, F(nand.s5, nand.posint3, F(nand.s5,
						nand.posint5,
						F(nand.s5, nand.posint6, F(nand.s5, nand.posint8, F(nand.s5, nand.posint9,
								F(nand.s5, nand.posint12, F(nand.s5, nand.posint15, F(nand.s5, nand.posint17,
										F(nand.s5, nand.posint18, F(nand.s5, nand.posint20, F(nand.s5, nand.posint21,
												F(nand.s5, nand.posint24, F(nand.s5, nand.posint27,
														F(nand.s5, nand.posint30,
																F(nand.s5, nand.posint31, Const.Nil)))))))))))))))),
						F(nand.s5, nand.posint0, F(nand.s5, nand.posint1, F(nand.s5, nand.posint4, F(nand.s5,
								nand.posint7,
								F(nand.s5, nand.posint10, F(nand.s5, nand.posint11, F(nand.s5, nand.posint13, F(nand.s5,
										nand.posint14,
										F(nand.s5, nand.posint16, F(nand.s5, nand.posint19, F(nand.s5, nand.posint22, F(
												nand.s5, nand.posint23,
												F(nand.s5, nand.posint25, F(nand.s5, nand.posint26,
														F(nand.s5, nand.posint28,
																F(nand.s5, nand.posint29, Const.Nil)))))))))))))))),
						Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
						F(nand.s5, F(nand.s30, nand.posint5, F(nand.s5, nand.posint7, F(nand.s5, nand.posint10,
								F(nand.s5, nand.posint11, F(nand.s5, nand.posint13, F(nand.s5, nand.posint14,
										F(nand.s5, nand.posint15, F(nand.s5, nand.posint19, F(nand.s5, nand.posint22,
												F(nand.s5, nand.posint23, F(nand.s5, nand.posint25,
														F(nand.s5, nand.posint26, F(nand.s5, nand.posint27,
																F(nand.s5, nand.posint28, F(nand.s5, nand.posint29,
																		F(nand.s5, nand.posint30,
																				F(nand.s5, nand.posint31,
																						Const.Nil)))))))))))))))),
								F(nand.s5, nand.posint0, F(nand.s5, nand.posint1, F(nand.s5, nand.posint2, F(nand.s5,
										nand.posint3,
										F(nand.s5, nand.posint4, F(nand.s5, nand.posint5, F(nand.s5, nand.posint6, F(
												nand.s5, nand.posint8,
												F(nand.s5, nand.posint9, F(nand.s5, nand.posint12,
														F(nand.s5, nand.posint16, F(nand.s5, nand.posint17,
																F(nand.s5, nand.posint18, F(nand.s5, nand.posint20,
																		F(nand.s5, nand.posint21,
																				F(nand.s5, nand.posint24,
																						Const.Nil)))))))))))))))),
								Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
								F(nand.s5, F(nand.s30, nand.posint4, F(nand.s5, nand.posint16, F(nand.s5, nand.posint17,
										F(nand.s5, nand.posint18, F(nand.s5, nand.posint19, F(nand.s5, nand.posint20, F(
												nand.s5, nand.posint21,
												F(nand.s5, nand.posint22, F(nand.s5, nand.posint23, F(nand.s5,
														nand.posint24,
														F(nand.s5, nand.posint25, F(nand.s5, nand.posint26, F(nand.s5,
																nand.posint27,
																F(nand.s5, nand.posint28, F(nand.s5, nand.posint29,
																		F(nand.s5, nand.posint30,
																				F(nand.s5, nand.posint31,
																						Const.Nil)))))))))))))))),
										F(nand.s5, nand.posint0, F(nand.s5, nand.posint1, F(nand.s5, nand.posint2, F(
												nand.s5, nand.posint3,
												F(nand.s5, nand.posint4, F(nand.s5, nand.posint5, F(nand.s5,
														nand.posint6,
														F(nand.s5, nand.posint7, F(nand.s5, nand.posint8, F(nand.s5,
																nand.posint9,
																F(nand.s5, nand.posint10, F(nand.s5, nand.posint11, F(
																		nand.s5, nand.posint12,
																		F(nand.s5, nand.posint13, F(nand.s5,
																				nand.posint14,
																				F(nand.s5, nand.posint15,
																						Const.Nil)))))))))))))))),
										Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
										F(nand.s5, F(nand.s30, nand.posint3, F(nand.s5, nand.posint8, F(nand.s5,
												nand.posint9,
												F(nand.s5, nand.posint10, F(nand.s5, nand.posint11, F(nand.s5,
														nand.posint12,
														F(nand.s5, nand.posint13, F(nand.s5, nand.posint14, F(nand.s5,
																nand.posint15,
																F(nand.s5, nand.posint24, F(nand.s5, nand.posint25, F(
																		nand.s5, nand.posint26,
																		F(nand.s5, nand.posint27, F(nand.s5,
																				nand.posint28,
																				F(nand.s5, nand.posint29, F(nand.s5,
																						nand.posint30,
																						F(nand.s5, nand.posint31,
																								Const.Nil)))))))))))))))),
												F(nand.s5, nand.posint0, F(nand.s5, nand.posint1, F(nand.s5,
														nand.posint2,
														F(nand.s5, nand.posint3, F(nand.s5, nand.posint4, F(nand.s5,
																nand.posint5,
																F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, F(
																		nand.s5, nand.posint16,
																		F(nand.s5, nand.posint17, F(nand.s5,
																				nand.posint18,
																				F(nand.s5, nand.posint19, F(nand.s5,
																						nand.posint20,
																						F(nand.s5, nand.posint21, F(
																								nand.s5, nand.posint22,
																								F(nand.s5,
																										nand.posint23,
																										Const.Nil)))))))))))))))),
												Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
												F(nand.s5, F(nand.s30, nand.posint2, F(nand.s5, nand.posint4, F(nand.s5,
														nand.posint5,
														F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, F(nand.s5,
																nand.posint12,
																F(nand.s5, nand.posint13, F(nand.s5, nand.posint14, F(
																		nand.s5, nand.posint15,
																		F(nand.s5, nand.posint20, F(nand.s5,
																				nand.posint21,
																				F(nand.s5, nand.posint22, F(nand.s5,
																						nand.posint23,
																						F(nand.s5, nand.posint28, F(
																								nand.s5, nand.posint29,
																								F(nand.s5,
																										nand.posint30,
																										F(nand.s5,
																												nand.posint31,
																												Const.Nil)))))))))))))))),
														F(nand.s5, nand.posint0, F(nand.s5, nand.posint1, F(nand.s5,
																nand.posint2,
																F(nand.s5, nand.posint3, F(nand.s5, nand.posint8, F(
																		nand.s5, nand.posint9,
																		F(nand.s5, nand.posint10, F(nand.s5,
																				nand.posint11,
																				F(nand.s5, nand.posint16, F(nand.s5,
																						nand.posint17,
																						F(nand.s5, nand.posint18, F(
																								nand.s5, nand.posint19,
																								F(nand.s5,
																										nand.posint24,
																										F(nand.s5,
																												nand.posint25,
																												F(nand.s5,
																														nand.posint26,
																														F(nand.s5,
																																nand.posint27,
																																Const.Nil)))))))))))))))),
														Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
														F(nand.s5, F(nand.s30, nand.posint1, F(nand.s5, nand.posint2, F(
																nand.s5, nand.posint3,
																F(nand.s5, nand.posint6, F(nand.s5, nand.posint7, F(
																		nand.s5, nand.posint10,
																		F(nand.s5, nand.posint11, F(nand.s5,
																				nand.posint14,
																				F(nand.s5, nand.posint15, F(nand.s5,
																						nand.posint18,
																						F(nand.s5, nand.posint19, F(
																								nand.s5, nand.posint22,
																								F(nand.s5,
																										nand.posint23,
																										F(nand.s5,
																												nand.posint26,
																												F(nand.s5,
																														nand.posint27,
																														F(nand.s5,
																																nand.posint30,
																																F(nand.s5,
																																		nand.posint31,
																																		Const.Nil)))))))))))))))),
																F(nand.s5, nand.posint0, F(nand.s5, nand.posint1, F(
																		nand.s5, nand.posint4,
																		F(nand.s5, nand.posint5, F(nand.s5,
																				nand.posint8,
																				F(nand.s5, nand.posint9, F(nand.s5,
																						nand.posint12,
																						F(nand.s5, nand.posint13, F(
																								nand.s5, nand.posint16,
																								F(nand.s5,
																										nand.posint17,
																										F(nand.s5,
																												nand.posint20,
																												F(nand.s5,
																														nand.posint21,
																														F(nand.s5,
																																nand.posint24,
																																F(nand.s5,
																																		nand.posint25,
																																		F(nand.s5,
																																				nand.posint28,
																																				F(nand.s5,
																																						nand.posint29,
																																						Const.Nil)))))))))))))))),
																Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
																F(nand.s5, F(nand.s30, nand.posint0, F(nand.s5,
																		nand.posint1,
																		F(nand.s5, nand.posint3, F(nand.s5,
																				nand.posint5,
																				F(nand.s5, nand.posint7, F(nand.s5,
																						nand.posint9,
																						F(nand.s5, nand.posint11, F(
																								nand.s5, nand.posint13,
																								F(nand.s5,
																										nand.posint15,
																										F(nand.s5,
																												nand.posint17,
																												F(nand.s5,
																														nand.posint19,
																														F(nand.s5,
																																nand.posint21,
																																F(nand.s5,
																																		nand.posint23,
																																		F(nand.s5,
																																				nand.posint25,
																																				F(nand.s5,
																																						nand.posint27,
																																						F(nand.s5,
																																								nand.posint29,
																																								F(nand.s5,
																																										nand.posint31,
																																										Const.Nil)))))))))))))))),
																		F(nand.s5, nand.posint0, F(nand.s5,
																				nand.posint2,
																				F(nand.s5, nand.posint4, F(nand.s5,
																						nand.posint6,
																						F(nand.s5, nand.posint8, F(
																								nand.s5, nand.posint10,
																								F(nand.s5,
																										nand.posint12,
																										F(nand.s5,
																												nand.posint14,
																												F(nand.s5,
																														nand.posint16,
																														F(nand.s5,
																																nand.posint18,
																																F(nand.s5,
																																		nand.posint20,
																																		F(nand.s5,
																																				nand.posint22,
																																				F(nand.s5,
																																						nand.posint24,
																																						F(nand.s5,
																																								nand.posint26,
																																								F(nand.s5,
																																										nand.posint28,
																																										F(nand.s5,
																																												nand.posint30,
																																												Const.Nil)))))))))))))))),
																		Const.Nil, Const.Nil, Const.Nil, Const.Nil,
																		Const.Nil), Const.Nil)))))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1;
		local_aregs[1] = nand.posint21;
		local_aregs[2] = var2;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_update_bounds_3::exec_static;
	}
}

class pred_search_3 extends Code {

	/*
	 * 
	 * search(_3998,_4000,_4002,_4022):-select_vector(_3998,_4000,_4002,_4004,_4006,
	 * cut(1,cover_vector(_3998,_4000,_4002,_4004,_4006,_4008,_4010,
	 * add_necessary_functions(_3998,_4008,_4010,_4012,_4014,test_bounds(_3998,_4012
	 * ,_4014,search(_3998,_4012,_4014,_4022)))))).
	 * search(_4112,_4114,_4116,_4124):-update_bounds(_4112,_4114,_4116,fail(_4124))
	 * .
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_search_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_search_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_search_3::exec_pred_search_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
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
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4;
		local_aregs[4] = var5;
		local_aregs[5] = F(nand.s0, new HeapChoice(mach.CUTB),
				F(nand.s19, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6, var7,
						F(nand.s11, var1.Deref(), var6.Deref(), var7.Deref(), var8, var9,
								F(nand.s60, var1.Deref(), var8.Deref(), var9.Deref(),
										F(nand.s49, var1.Deref(), var8.Deref(), var9.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_select_vector_5::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_search_3__2(PrologMachine mach) {
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
		local_aregs[3] = F(nand.s27, continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_update_bounds_3::exec_static;
	}
}

class pred_select_vector_5 extends Code {

	/*
	 * 
	 * select_vector(_4156,_4158,_4160,_4162,_4164,_4188):-select_vector(_4160,_4156
	 * ,_4158,_4160,dummy,0,nf,999,_4162,_4164,_4166,_4168,cut(1,not(_4166=cov,not(
	 * _4166=nf,_4188)))).
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
		return (Function<PrologMachine, Function>) exec_pred_select_vector_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_select_vector_5__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var3.Deref();
		local_aregs[4] = nand.s21;
		local_aregs[5] = nand.posint0;
		local_aregs[6] = nand.s42;
		local_aregs[7] = nand.posint999;
		local_aregs[8] = var4.Deref();
		local_aregs[9] = var5.Deref();
		local_aregs[10] = var6;
		local_aregs[11] = var7;
		local_aregs[12] = F(nand.s0, new HeapChoice(mach.CUTB), F(nand.s44, F(nand.s8, var6.Deref(), nand.s16),
				F(nand.s44, F(nand.s8, var6.Deref(), nand.s42), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_select_vector_12::exec_static;
	}
}

class pred_select_vector_12 extends Code {

	/*
	 * 
	 * select_vector([_4258|_4260],_4262,_4264,_4266,_4268,_4270,_4272,_4274,_4268,
	 * _4270,_4272,_4274,_4284):-function_number(_4258,_4276,smallerthan(_4276,_4262
	 * ,_4284)).
	 * select_vector([_4338|_4340],_4342,_4344,_4346,_4348,_4350,_4352,_4354,_4356,
	 * _4358,_4360,_4362,_4382):-function_number(_4338,_4364,smallerorequal(_4342,
	 * _4364,true_set(_4338,_4366,select_vector(_4366,_4338,_4342,_4344,_4346,_4348,
	 * _4350,_4352,_4354,_4368,_4370,_4372,_4374,select_vector(_4340,_4342,_4344,
	 * _4346,_4368,_4370,_4372,_4374,_4356,_4358,_4360,_4362,_4382))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
		 * [11],mach.Areg[12]} ;
		 */
		Term aregs[] = mach.RegPull(12);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_select_vector_12__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_select_vector_12__1(PrologMachine mach) {
		mach.FillAlternative(pred_select_vector_12::exec_pred_select_vector_12__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var9)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var8.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var9.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var10;
		local_aregs[2] = F(nand.s58, var10.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_function_number_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_select_vector_12__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var19 = V(mach);
		Var var18 = V(mach);
		Var var17 = V(mach);
		Var var16 = V(mach);
		Var var15 = V(mach);
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var9)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var10)))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var11)))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var12)))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var13)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var14;
		local_aregs[2] = F(nand.s57, var3.Deref(), var14.Deref(),
				F(nand.s63, var1.Deref(), var15,
						F(nand.s50, var15.Deref(), var1.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref(),
								var7.Deref(), var8.Deref(), var9.Deref(), var16, var17, var18, var19,
								F(nand.s50, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var16.Deref(),
										var17.Deref(), var18.Deref(), var19.Deref(), var10.Deref(), var11.Deref(),
										var12.Deref(), var13.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_function_number_2::exec_static;
	}
}

class pred_select_vector_13 extends Code {

	/*
	 * 
	 * select_vector([],_4500,_4502,_4504,_4506,_4508,_4510,_4512,_4514,_4508,_4510,
	 * _4512,_4514,_4524):-call(_4524).
	 * select_vector([_4564|_4566],_4568,_4570,_4572,_4574,_4576,_4578,_4580,_4582,
	 * _4584,_4586,_4588,_4590,_4610):-vector_cover_type(_4570,_4574,_4568,_4564,
	 * _4592,_4594,best_vector(_4576,_4578,_4580,_4582,_4568,_4564,_4592,_4594,_4596
	 * ,_4598,_4600,_4602,select_vector(_4566,_4568,_4570,_4572,_4574,_4596,_4598,
	 * _4600,_4602,_4584,_4586,_4588,_4590,_4610))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
		 * [11],mach.Areg[12],mach.Areg[13]} ;
		 */
		Term aregs[] = mach.RegPull(13);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_select_vector_13__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_select_vector_13__1(PrologMachine mach) {
		mach.FillAlternative(pred_select_vector_13::exec_pred_select_vector_13__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[13];
		Term areg12 = local_aregs[12].Deref();
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg0).Unify(Const.Nil)))
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
		if (!((areg6).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg12).Unify(var8.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_select_vector_13__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[13];
		Term areg12 = local_aregs[12].Deref();
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var20 = V(mach);
		Var var19 = V(mach);
		Var var18 = V(mach);
		Var var17 = V(mach);
		Var var16 = V(mach);
		Var var15 = V(mach);
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var9)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var10)))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var11)))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var12)))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var13)))
			return UpperPrologMachine.Fail0;
		if (!((areg12).Unify(var14)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var6.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var1.Deref();
		local_aregs[4] = var15;
		local_aregs[5] = var16;
		local_aregs[6] = F(nand.s12, var7.Deref(), var8.Deref(), var9.Deref(), var10.Deref(), var3.Deref(),
				var1.Deref(), var15.Deref(), var16.Deref(), var17, var18, var19, var20,
				F(nand.s50, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref(), var17.Deref(),
						var18.Deref(), var19.Deref(), var20.Deref(), var11.Deref(), var12.Deref(), var13.Deref(),
						var14.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = null;
		return (Function<PrologMachine, Function>) pred_vector_cover_type_6::exec_static;
	}
}

class pred_vector_cover_type_6 extends Code {

	/*
	 * 
	 * vector_cover_type(_4722,_4724,_4726,_4728,_4730,_4732,_4750):-
	 * immediate_predecessors(_4726,_4734,conceivable_inputs(_4726,_4736,false_set(
	 * _4726,_4738,cover_type1(_4734,_4724,_4728,nf,0,_4740,_4742,cover_type2(_4736,
	 * _4724,_4722,_4738,_4728,_4740,_4742,_4730,_4732,_4750))))).
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
		return (Function<PrologMachine, Function>) exec_pred_vector_cover_type_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_vector_cover_type_6__1(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var7;
		local_aregs[2] = F(nand.s15, var3.Deref(), var8,
				F(nand.s28, var3.Deref(), var9,
						F(nand.s17, var7.Deref(), var2.Deref(), var4.Deref(), nand.s42, nand.posint0, var10, var11,
								F(nand.s18, var8.Deref(), var2.Deref(), var1.Deref(), var9.Deref(), var4.Deref(),
										var10.Deref(), var11.Deref(), var5.Deref(), var6.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_immediate_predecessors_2::exec_static;
	}
}

class pred_cover_type1_7 extends Code {

	/*
	 * 
	 * cover_type1([],_4838,_4840,_4842,_4844,_4842,_4844,_4854):-call(_4854).
	 * cover_type1([_4882|_4884],_4886,_4888,_4890,_4892,_4894,_4896,_4952):-
	 * function(_4882,_4886,_4898,true_set(_4898,_4900,not(set_member(_4888,_4900),
	 * cut(1,false_set(_4898,_4908,or((set_member(_4888,_4908)->max_type(_4890,cov,
	 * _4922)),max_type(_4890,exp,_4922),is(_4944,_4892+1,cover_type1(_4884,_4886,
	 * _4888,_4922,_4944,_4894,_4896,_4952)))))))).
	 * cover_type1([_5052|_5054],_5056,_5058,_5060,_5062,_5064,_5066,_5074):-
	 * cover_type1(_5054,_5056,_5058,_5060,_5062,_5064,_5066,_5074).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7]} ;
		 */
		Term aregs[] = mach.RegPull(7);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_cover_type1_7__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_cover_type1_7__1(PrologMachine mach) {
		mach.FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[7];
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_type1_7__2(PrologMachine mach) {
		mach.FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[7];
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var9;
		local_aregs[3] = F(nand.s63, var9.Deref(), var10,
				F(nand.s44, F(nand.s54, var4.Deref(), var10.Deref()),
						F(nand.s0, new HeapChoice(mach.CUTB),
								F(nand.s28, var9.Deref(), var11,
										F(nand.s45,
												F(nand.s4, F(nand.s54, var4.Deref(), var11.Deref()),
														F(nand.s39, var5.Deref(), nand.s16, var12)),
												F(nand.s39, var5.Deref(), nand.s26, var12.Deref()),
												F(nand.s37, var13, F(nand.s2, var6.Deref(), nand.posint1),
														F(nand.s17, var2.Deref(), var3.Deref(), var4.Deref(),
																var12.Deref(), var13.Deref(), var7.Deref(),
																var8.Deref(), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_function_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_type1_7__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[7];
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = var6.Deref();
		local_aregs[5] = var7.Deref();
		local_aregs[6] = var8.Deref();
		local_aregs[7] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_type1_7::exec_static;
	}
}

class pred_cover_type2_9 extends Code {

	/*
	 * 
	 * cover_type2([],_5118,_5120,_5122,_5124,_5126,_5128,_5126,_5128,_5138):-call(
	 * _5138).
	 * cover_type2([_5170|_5172],_5174,_5176,_5178,_5180,_5182,_5184,_5186,_5188,
	 * _5210):-smallerthan(_5170,_5176,function(_5170,_5174,_5190,false_set(_5190,
	 * _5192,set_member(_5180,_5192,cut(1,max_type(_5182,var,_5194,is(_5202,_5184+1,
	 * cover_type2(_5172,_5174,_5176,_5178,_5180,_5194,_5202,_5186,_5188,_5210))))))
	 * )).
	 * cover_type2([_5322|_5324],_5326,_5328,_5330,_5332,_5334,_5336,_5338,_5340,
	 * _5448):-smallerorequal(_5328,_5322,function(_5322,_5326,_5342,true_set(_5342,
	 * _5344,not(set_member(_5332,_5344),cut(1,false_set(_5342,_5352,or((set_member(
	 * _5332,_5352)->(set_subset(_5330,_5344)->max_type(_5334,fcn,_5372);max_type(
	 * _5334,mcf,_5372))),(set_subset(_5330,_5344)->max_type(_5334,exf,_5372);
	 * max_type(_5334,exmcf,_5372)),is(_5440,_5336+1,cover_type2(_5324,_5326,_5328,
	 * _5330,_5332,_5372,_5440,_5338,_5340,_5448))))))))).
	 * cover_type2([_5564|_5566],_5568,_5570,_5572,_5574,_5576,_5578,_5580,_5582,
	 * _5590):-cover_type2(_5566,_5568,_5570,_5572,_5574,_5576,_5578,_5580,_5582,
	 * _5590).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
		 */
		Term aregs[] = mach.RegPull(9);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_cover_type2_9__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_cover_type2_9__1(PrologMachine mach) {
		mach.FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[9];
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(Const.Nil)))
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
		if (!((areg6).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_type2_9__2(PrologMachine mach) {
		mach.FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[9];
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var9)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var10)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = F(nand.s30, var1.Deref(), var3.Deref(), var11,
				F(nand.s28, var11.Deref(), var12,
						F(nand.s54, var6.Deref(), var12.Deref(),
								F(nand.s0, new HeapChoice(mach.CUTB), F(nand.s39, var7.Deref(), nand.s68, var13,
										F(nand.s37, var14, F(nand.s2, var8.Deref(), nand.posint1),
												F(nand.s18, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(),
														var6.Deref(), var13.Deref(), var14.Deref(), var9.Deref(),
														var10.Deref(), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_type2_9__3(PrologMachine mach) {
		mach.FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[9];
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var15 = V(mach);
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var9)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var10)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(
				nand.s30, var1.Deref(), var3.Deref(), var11, F(
						nand.s63, var11.Deref(), var12, F(
								nand.s44, F(nand.s54, var6.Deref(), var12.Deref()), F(nand.s0,
										new HeapChoice(mach.CUTB), F(nand.s28, var11.Deref(), var13, F(
												nand.s45, F(nand.s4, F(nand.s54, var6.Deref(), var13.Deref()),
														F(nand.s7,
																F(nand.s4, F(nand.s55, var5.Deref(), var12.Deref()),
																		F(nand.s39, var7.Deref(), nand.s29, var14)),
																F(nand.s39, var7.Deref(), nand.s40, var14.Deref()))),
												F(nand.s7,
														F(nand.s4, F(nand.s55, var5.Deref(), var12.Deref()),
																F(nand.s39, var7.Deref(), nand.s24, var14.Deref())),
														F(nand.s39, var7.Deref(), nand.s25, var14.Deref())),
												F(nand.s37, var15, F(nand.s2, var8.Deref(), nand.posint1),
														F(nand.s18, var2.Deref(), var3.Deref(), var4.Deref(),
																var5.Deref(), var6.Deref(), var14.Deref(),
																var15.Deref(), var9.Deref(), var10.Deref(),
																continuation))))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_type2_9__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[9];
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var9)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var10)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = var6.Deref();
		local_aregs[5] = var7.Deref();
		local_aregs[6] = var8.Deref();
		local_aregs[7] = var9.Deref();
		local_aregs[8] = var10.Deref();
		local_aregs[9] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_type2_9::exec_static;
	}
}

class pred_best_vector_12 extends Code {

	/*
	 * 
	 * best_vector(dummy,_5642,_5644,_5646,_5648,_5650,_5652,_5654,_5648,_5650,_5652
	 * ,_5654,_5662):-cut(1,_5662).
	 * best_vector(_5704,_5706,_5708,_5710,dummy,_5712,_5714,_5716,_5704,_5706,_5708
	 * ,_5710,_5724):-cut(1,_5724).
	 * best_vector(_5766,_5768,_5770,_5772,_5774,_5776,_5770,_5778,_5766,_5768,_5770
	 * ,_5772,_5788):-function_number(_5766,_5780,function_number(_5774,_5780,
	 * smallerthan(_5772,_5778,cut(1,_5788)))).
	 * best_vector(_5854,_5856,_5858,_5860,_5862,_5864,_5858,_5866,_5862,_5864,_5858
	 * ,_5866,_5876):-function_number(_5854,_5868,function_number(_5862,_5868,
	 * smallerorequal(_5866,_5860,cut(1,_5876)))).
	 * best_vector(_5942,_5944,_5946,_5948,_5950,_5952,_5946,_5954,_5942,_5944,_5946
	 * ,_5948,_5978):-or(_5946=exp,_5946=var,function_number(_5942,_5968,
	 * function_number(_5950,_5970,smallerthan(_5970,_5968,cut(1,_5978))))).
	 * best_vector(_6052,_6054,_6056,_6058,_6060,_6062,_6056,_6064,_6060,_6062,_6056
	 * ,_6064,_6088):-or(_6056=exp,_6056=var,function_number(_6052,_6078,
	 * function_number(_6060,_6080,smallerthan(_6078,_6080,cut(1,_6088))))).
	 * best_vector(_6162,_6164,_6166,_6168,_6170,_6172,_6166,_6174,_6162,_6164,_6166
	 * ,_6168,_6204):-not((_6166=exp;_6166=var),function_number(_6162,_6194,
	 * function_number(_6170,_6196,smallerthan(_6194,_6196,cut(1,_6204))))).
	 * best_vector(_6276,_6278,_6280,_6282,_6284,_6286,_6280,_6288,_6284,_6286,_6280
	 * ,_6288,_6318):-not((_6280=exp;_6280=var),function_number(_6276,_6308,
	 * function_number(_6284,_6310,smallerthan(_6310,_6308,cut(1,_6318))))).
	 * best_vector(_6390,_6392,_6394,_6396,_6398,_6400,_6402,_6404,_6390,_6392,_6394
	 * ,_6396,_6412):-type_order(_6402,_6394,cut(1,_6412)).
	 * best_vector(_6462,_6464,_6466,_6468,_6470,_6472,_6474,_6476,_6470,_6472,_6474
	 * ,_6476,_6484):-type_order(_6466,_6474,cut(1,_6484)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg
		 * [11],mach.Areg[12]} ;
		 */
		Term aregs[] = mach.RegPull(12);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_best_vector_12__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__1(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg0).Unify(nand.s21)))
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
		if (!((areg6).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__2(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(nand.s21)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__3(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var8;
		local_aregs[2] = F(nand.s31, var5.Deref(), var8.Deref(),
				F(nand.s58, var4.Deref(), var7.Deref(), F(nand.s0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_function_number_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__4(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var8;
		local_aregs[2] = F(nand.s31, var5.Deref(), var8.Deref(),
				F(nand.s57, var7.Deref(), var4.Deref(), F(nand.s0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_function_number_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__5(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
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
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(nand.s8, var3.Deref(), nand.s26);
		local_aregs[1] = F(nand.s8, var3.Deref(), nand.s68);
		local_aregs[2] = F(nand.s31, var1.Deref(), var8, F(nand.s31, var5.Deref(), var9,
				F(nand.s58, var9.Deref(), var8.Deref(), F(nand.s0, new HeapChoice(mach.CUTB), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__6(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
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
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(nand.s8, var3.Deref(), nand.s26);
		local_aregs[1] = F(nand.s8, var3.Deref(), nand.s68);
		local_aregs[2] = F(nand.s31, var1.Deref(), var8, F(nand.s31, var5.Deref(), var9,
				F(nand.s58, var8.Deref(), var9.Deref(), F(nand.s0, new HeapChoice(mach.CUTB), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__7(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
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
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(nand.s7, F(nand.s8, var3.Deref(), nand.s26), F(nand.s8, var3.Deref(), nand.s68));
		local_aregs[1] = F(nand.s31, var1.Deref(), var8, F(nand.s31, var5.Deref(), var9,
				F(nand.s58, var8.Deref(), var9.Deref(), F(nand.s0, new HeapChoice(mach.CUTB), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_not_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__8(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
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
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(nand.s7, F(nand.s8, var3.Deref(), nand.s26), F(nand.s8, var3.Deref(), nand.s68));
		local_aregs[1] = F(nand.s31, var1.Deref(), var8, F(nand.s31, var5.Deref(), var9,
				F(nand.s58, var9.Deref(), var8.Deref(), F(nand.s0, new HeapChoice(mach.CUTB), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_not_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__9(PrologMachine mach) {
		mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var7.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(nand.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_type_order_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_best_vector_12__10(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[12];
		Term areg11 = local_aregs[11].Deref();
		Term areg10 = local_aregs[10].Deref();
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg10).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg11).Unify(var8.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var7.Deref();
		local_aregs[2] = F(nand.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_type_order_2::exec_static;
	}
}

class pred_max_type_3 extends Code {

	/*
	 * 
	 * max_type(_6534,_6536,_6534,_6544):-type_order(_6534,_6536,cut(1,_6544)).
	 * max_type(_6576,_6578,_6578,_6592):-not(type_order(_6576,_6578),cut(1,_6592)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_max_type_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_max_type_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_max_type_3::exec_pred_max_type_3__2);
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
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(nand.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_type_order_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_max_type_3__2(PrologMachine mach) {
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
		if (!((areg2).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(nand.s64, var1.Deref(), var2.Deref());
		local_aregs[1] = F(nand.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_not_1::exec_static;
	}
}

class pred_type_order_2 extends Code {

	/*
	 * 
	 * type_order(cov,exp,_6630):-call(_6630).
	 * type_order(cov,var,_6654):-call(_6654).
	 * type_order(cov,fcn,_6678):-call(_6678).
	 * type_order(cov,mcf,_6702):-call(_6702).
	 * type_order(cov,exf,_6726):-call(_6726).
	 * type_order(cov,exmcf,_6750):-call(_6750).
	 * type_order(cov,nf,_6774):-call(_6774).
	 * type_order(exp,var,_6798):-call(_6798).
	 * type_order(exp,fcn,_6822):-call(_6822).
	 * type_order(exp,mcf,_6846):-call(_6846).
	 * type_order(exp,exf,_6870):-call(_6870).
	 * type_order(exp,exmcf,_6894):-call(_6894).
	 * type_order(exp,nf,_6918):-call(_6918).
	 * type_order(var,fcn,_6942):-call(_6942).
	 * type_order(var,mcf,_6966):-call(_6966).
	 * type_order(var,exf,_6990):-call(_6990).
	 * type_order(var,exmcf,_7014):-call(_7014).
	 * type_order(var,nf,_7038):-call(_7038).
	 * type_order(fcn,mcf,_7062):-call(_7062).
	 * type_order(fcn,exf,_7086):-call(_7086).
	 * type_order(fcn,exmcf,_7110):-call(_7110).
	 * type_order(fcn,nf,_7134):-call(_7134).
	 * type_order(mcf,exf,_7158):-call(_7158).
	 * type_order(mcf,exmcf,_7182):-call(_7182).
	 * type_order(mcf,nf,_7206):-call(_7206).
	 * type_order(exf,exmcf,_7230):-call(_7230).
	 * type_order(exf,nf,_7254):-call(_7254).
	 * type_order(exmcf,nf,_7278):-call(_7278).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_type_order_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__7(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__8(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__9(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__10(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__11(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__12(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__13(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__14(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__15(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__16);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__16(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__17(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__18(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__19(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__20);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__20(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__21(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__22(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__23);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__23(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__24(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__25);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__25(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__26(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__27);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__27(PrologMachine mach) {
		mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_type_order_2__28(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_cover_vector_7 extends Code {

	/*
	 * 
	 * cover_vector(_7294,_7296,_7298,_7300,_7302,_7304,_7306,_7320):-
	 * immediate_predecessors(_7300,_7308,conceivable_inputs(_7300,_7310,
	 * vector_types(_7312,cover_vector(_7312,_7308,_7310,_7300,_7302,_7294,_7296,
	 * _7298,_7304,_7306,_7320)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7]} ;
		 */
		Term aregs[] = mach.RegPull(7);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_cover_vector_7__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_7__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[7];
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var8;
		local_aregs[2] = F(nand.s15, var4.Deref(), var9,
				F(nand.s70, var10, F(nand.s19, var10.Deref(), var8.Deref(), var9.Deref(), var4.Deref(), var5.Deref(),
						var1.Deref(), var2.Deref(), var3.Deref(), var6.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_immediate_predecessors_2::exec_static;
	}
}

class pred_vector_types_1 extends Code {

	/*
	 * 
	 * vector_types(var,_7400):-call(_7400). vector_types(exp,_7422):-call(_7422).
	 * vector_types(fcn,_7444):-call(_7444). vector_types(mcf,_7466):-call(_7466).
	 * vector_types(exf,_7488):-call(_7488). vector_types(exmcf,_7510):-call(_7510).
	 * vector_types(nf,_7532):-call(_7532).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_vector_types_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_vector_types_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_vector_types_1__2(PrologMachine mach) {
		mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_vector_types_1__3(PrologMachine mach) {
		mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_vector_types_1__4(PrologMachine mach) {
		mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_vector_types_1__5(PrologMachine mach) {
		mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_vector_types_1__6(PrologMachine mach) {
		mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_vector_types_1__7(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(nand.s42)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_cover_vector_10 extends Code {

	/*
	 * 
	 * cover_vector(exp,[_7548|_7550],_7552,_7554,_7556,_7558,_7560,_7562,_7560,
	 * _7564,_7582):-function(_7548,_7562,_7566,true_set(_7566,_7568,not(set_member(
	 * _7556,_7568),update_circuit(_7562,_7566,_7554,_7556,_7562,_7564,_7582)))).
	 * cover_vector(exp,[_7656|_7658],_7660,_7662,_7664,_7666,_7668,_7670,_7668,
	 * _7672,_7682):-cover_vector(exp,_7658,_7674,_7662,_7664,_7666,_7668,_7670,
	 * _7668,_7672,_7682).
	 * cover_vector(var,_7744,[_7740|_7742],_7746,_7748,_7750,_7752,_7754,_7752,
	 * _7756,_7768):-smallerthan(_7740,_7750,function(_7740,_7754,_7758,false_set(
	 * _7758,_7760,set_member(_7748,_7760,update_circuit(_7754,_7758,_7746,_7748,
	 * _7754,_7756,_7768))))).
	 * cover_vector(var,_7856,[_7852|_7854],_7858,_7860,_7862,_7864,_7866,_7864,
	 * _7868,_7878):-cover_vector(var,_7870,_7854,_7858,_7860,_7862,_7864,_7866,
	 * _7864,_7868,_7878).
	 * cover_vector(fcn,_7940,[_7936|_7938],_7942,_7944,_7946,_7948,_7950,_7948,
	 * _7952,_7968):-smallerorequal(_7946,_7936,function(_7936,_7950,_7954,false_set
	 * (_7954,_7956,set_member(_7944,_7956,true_set(_7954,_7958,false_set(_7942,
	 * _7960,set_subset(_7960,_7958,update_circuit(_7950,_7954,_7942,_7944,_7950,
	 * _7952,_7968)))))))).
	 * cover_vector(fcn,_8080,[_8076|_8078],_8082,_8084,_8086,_8088,_8090,_8088,
	 * _8092,_8102):-cover_vector(fcn,_8094,_8078,_8082,_8084,_8086,_8088,_8090,
	 * _8088,_8092,_8102).
	 * cover_vector(mcf,_8164,[_8160|_8162],_8166,_8168,_8170,_8172,_8174,_8172,
	 * _8176,_8198):-smallerorequal(_8170,_8160,function(_8160,_8174,_8178,false_set
	 * (_8178,_8180,set_member(_8168,_8180,true_set(_8178,_8182,false_set(_8166,
	 * _8184,not(set_subset(_8184,_8182),update_circuit(_8174,_8178,_8166,_8168,
	 * _8174,_8176,_8198)))))))).
	 * cover_vector(mcf,_8308,[_8304|_8306],_8310,_8312,_8314,_8316,_8318,_8316,
	 * _8320,_8330):-cover_vector(mcf,_8322,_8306,_8310,_8312,_8314,_8316,_8318,
	 * _8316,_8320,_8330).
	 * cover_vector(exf,_8392,[_8388|_8390],_8394,_8396,_8398,_8400,_8402,_8400,
	 * _8404,_8432):-smallerorequal(_8398,_8388,function(_8388,_8402,_8406,false_set
	 * (_8406,_8408,not(set_member(_8396,_8408),true_set(_8406,_8416,not(set_member(
	 * _8396,_8416),false_set(_8394,_8424,set_subset(_8424,_8416,update_circuit(
	 * _8402,_8406,_8394,_8396,_8402,_8404,_8432))))))))).
	 * cover_vector(exf,_8548,[_8544|_8546],_8550,_8552,_8554,_8556,_8558,_8556,
	 * _8560,_8570):-cover_vector(exf,_8562,_8546,_8550,_8552,_8554,_8556,_8558,
	 * _8556,_8560,_8570).
	 * cover_vector(exmcf,_8632,[_8628|_8630],_8634,_8636,_8638,_8640,_8642,_8640,
	 * _8644,_8678):-smallerorequal(_8638,_8628,function(_8628,_8642,_8646,false_set
	 * (_8646,_8648,not(set_member(_8636,_8648),true_set(_8646,_8656,not(set_member(
	 * _8636,_8656),false_set(_8634,_8664,not(set_subset(_8664,_8656),update_circuit
	 * (_8642,_8646,_8634,_8636,_8642,_8644,_8678))))))))).
	 * cover_vector(exmcf,_8792,[_8788|_8790],_8794,_8796,_8798,_8800,_8802,_8800,
	 * _8804,_8814):-cover_vector(exmcf,_8806,_8790,_8794,_8796,_8798,_8800,_8802,
	 * _8800,_8804,_8814).
	 * cover_vector(nf,_8870,_8872,_8874,_8876,_8878,_8880,_8882,_8884,_8886,_8930):
	 * -is(_8884,_8880+1,false_set(_8874,_8894,new_function_CIs(_8882,function(_8880
	 * ,_8894,[_8876],[],[],[],[],[]),_8878,_8920,_8922,update_circuit(_8920,_8922,
	 * _8874,_8876,_8920,_8886,_8930)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;
		 */
		Term aregs[] = mach.RegPull(10);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_cover_vector_10__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__1(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var8.Deref();
		local_aregs[2] = var10;
		local_aregs[3] = F(nand.s63, var10.Deref(), var11,
				F(nand.s44, F(nand.s54, var5.Deref(), var11.Deref()), F(nand.s67, var8.Deref(), var10.Deref(),
						var4.Deref(), var5.Deref(), var8.Deref(), var9.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_function_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__2(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(nand.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = nand.s26;
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var10;
		local_aregs[3] = var4.Deref();
		local_aregs[4] = var5.Deref();
		local_aregs[5] = var6.Deref();
		local_aregs[6] = var7.Deref();
		local_aregs[7] = var8.Deref();
		local_aregs[8] = var7.Deref();
		local_aregs[9] = var9.Deref();
		local_aregs[10] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_vector_10::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__3(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var6.Deref();
		local_aregs[2] = F(nand.s30, var2.Deref(), var8.Deref(), var10,
				F(nand.s28, var10.Deref(), var11, F(nand.s54, var5.Deref(), var11.Deref(), F(nand.s67, var8.Deref(),
						var10.Deref(), var4.Deref(), var5.Deref(), var8.Deref(), var9.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__4(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(nand.s68)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = nand.s68;
		local_aregs[1] = var10;
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = var5.Deref();
		local_aregs[5] = var6.Deref();
		local_aregs[6] = var7.Deref();
		local_aregs[7] = var8.Deref();
		local_aregs[8] = var7.Deref();
		local_aregs[9] = var9.Deref();
		local_aregs[10] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_vector_10::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__5(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(nand.s30, var2.Deref(), var8.Deref(), var10, F(nand.s28, var10.Deref(), var11,
				F(nand.s54, var5.Deref(), var11.Deref(), F(nand.s63, var10.Deref(), var12,
						F(nand.s28, var4.Deref(), var13,
								F(nand.s55, var13.Deref(), var12.Deref(), F(nand.s67, var8.Deref(), var10.Deref(),
										var4.Deref(), var5.Deref(), var8.Deref(), var9.Deref(), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__6(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(nand.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = nand.s29;
		local_aregs[1] = var10;
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = var5.Deref();
		local_aregs[5] = var6.Deref();
		local_aregs[6] = var7.Deref();
		local_aregs[7] = var8.Deref();
		local_aregs[8] = var7.Deref();
		local_aregs[9] = var9.Deref();
		local_aregs[10] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_vector_10::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__7(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(nand.s30, var2.Deref(), var8.Deref(), var10,
				F(nand.s28, var10.Deref(), var11,
						F(nand.s54, var5.Deref(), var11.Deref(),
								F(nand.s63, var10.Deref(), var12,
										F(nand.s28, var4.Deref(), var13,
												F(nand.s44, F(nand.s55, var13.Deref(), var12.Deref()),
														F(nand.s67, var8.Deref(), var10.Deref(), var4.Deref(),
																var5.Deref(), var8.Deref(), var9.Deref(),
																continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__8(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(nand.s40)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = nand.s40;
		local_aregs[1] = var10;
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = var5.Deref();
		local_aregs[5] = var6.Deref();
		local_aregs[6] = var7.Deref();
		local_aregs[7] = var8.Deref();
		local_aregs[8] = var7.Deref();
		local_aregs[9] = var9.Deref();
		local_aregs[10] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_vector_10::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__9(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(nand.s30, var2.Deref(), var8.Deref(), var10, F(nand.s28, var10.Deref(), var11, F(nand.s44,
				F(nand.s54, var5.Deref(), var11.Deref()),
				F(nand.s63, var10.Deref(), var12, F(nand.s44, F(nand.s54, var5.Deref(), var12.Deref()),
						F(nand.s28, var4.Deref(), var13,
								F(nand.s55, var13.Deref(), var12.Deref(), F(nand.s67, var8.Deref(), var10.Deref(),
										var4.Deref(), var5.Deref(), var8.Deref(), var9.Deref(), continuation))))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__10(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(nand.s24)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = nand.s24;
		local_aregs[1] = var10;
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = var5.Deref();
		local_aregs[5] = var6.Deref();
		local_aregs[6] = var7.Deref();
		local_aregs[7] = var8.Deref();
		local_aregs[8] = var7.Deref();
		local_aregs[9] = var9.Deref();
		local_aregs[10] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_vector_10::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__11(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(nand.s30, var2.Deref(), var8.Deref(), var10,
				F(nand.s28, var10.Deref(), var11,
						F(nand.s44, F(nand.s54, var5.Deref(), var11.Deref()),
								F(nand.s63, var10.Deref(), var12,
										F(nand.s44, F(nand.s54, var5.Deref(), var12.Deref()),
												F(nand.s28, var4.Deref(), var13,
														F(nand.s44, F(nand.s55, var13.Deref(), var12.Deref()),
																F(nand.s67, var8.Deref(), var10.Deref(), var4.Deref(),
																		var5.Deref(), var8.Deref(), var9.Deref(),
																		continuation))))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__12(PrologMachine mach) {
		mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
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
		if (!((areg0).Unify(nand.s25)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = nand.s25;
		local_aregs[1] = var10;
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = var5.Deref();
		local_aregs[5] = var6.Deref();
		local_aregs[6] = var7.Deref();
		local_aregs[7] = var8.Deref();
		local_aregs[8] = var7.Deref();
		local_aregs[9] = var9.Deref();
		local_aregs[10] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_cover_vector_10::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_cover_vector_10__13(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[10];
		Term areg9 = local_aregs[9].Deref();
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg0).Unify(nand.s42)))
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
		if (!((areg6).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg9).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var8.Deref();
		local_aregs[1] = F(nand.s2, var6.Deref(), nand.posint1);
		local_aregs[2] = F(nand.s28, var3.Deref(), var10,
				F(nand.s41, var7.Deref(),
						F(nand.s30, var6.Deref(), var10.Deref(), F(nand.s5, var4.Deref(), Const.Nil), Const.Nil,
								Const.Nil, Const.Nil, Const.Nil, Const.Nil),
						var5.Deref(), var11, var12, F(nand.s67, var11.Deref(), var12.Deref(), var3.Deref(),
								var4.Deref(), var11.Deref(), var9.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_update_circuit_6 extends Code {

	/*
	 * 
	 * update_circuit([],_9008,_9010,_9012,_9014,[],_9024):-call(_9024).
	 * update_circuit([function(_9050,_9052,_9054,_9056,_9058,_9060,_9062,_9064)|
	 * _9070],_9096,_9098,_9100,_9102,[function(_9050,_9076,_9078,_9080,_9082,_9084,
	 * _9086,_9088)|_9094],_9548):-unify(function(_9106,_9108,_9110,_9112,_9114,
	 * _9116,_9118,_9120),_9096,unify(function(_9124,_9126,_9128,_9130,_9132,_9134,
	 * _9136,_9138),_9098,set_union([_9106],_9118,_9146,set_union([_9124],_9138,
	 * _9154,or((_9050=_9124->set_union(_9052,_9110,_9168)),_9168=_9052,or((_9050=
	 * _9106->set_union(_9168,_9128,_9194)),_9194=_9168,or(((set_member(_9050,_9114)
	 * ;set_member(_9050,_9116))->set_union(_9194,[_9100],_9076)),_9076=_9194,or((
	 * _9050=_9106->set_union(_9054,[_9100],_9078)),_9078=_9054,or(((set_member(
	 * _9050,_9118);_9050=_9106)->set_difference(_9056,_9154,_9308)),_9308=_9056,or(
	 * (set_member(_9106,_9056),set_member(_9100,_9054)->set_difference(_9308,[_9106
	 * ],_9352)),_9352=_9308,or((_9050=_9106->exclude_if_vector_in_false_set(_9352,
	 * _9102,_9100,_9380)),_9380=_9352,or((_9050=_9124->set_difference(_9380,[_9106]
	 * ,_9080)),_9080=_9380,or((_9050=_9124->set_union(_9058,[_9106],_9082)),_9082=
	 * _9058,or((_9050=_9106->set_union(_9060,[_9124],_9084)),_9084=_9060,or((
	 * set_member(_9050,_9154)->set_union(_9062,_9146,_9086)),_9086=_9062,or((
	 * set_member(_9050,_9146)->set_union(_9064,_9154,_9088)),_9088=_9064,
	 * update_circuit(_9070,_9096,_9098,_9100,_9102,_9094,_9548))))))))))))))))).
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
		return (Function<PrologMachine, Function>) exec_pred_update_circuit_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_update_circuit_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_update_circuit_6::exec_pred_update_circuit_6__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_update_circuit_6__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var44 = V(mach);
		Var var43 = V(mach);
		Var var42 = V(mach);
		Var var41 = V(mach);
		Var var40 = V(mach);
		Var var39 = V(mach);
		Var var38 = V(mach);
		Var var37 = V(mach);
		Var var36 = V(mach);
		Var var35 = V(mach);
		Var var34 = V(mach);
		Var var33 = V(mach);
		Var var32 = V(mach);
		Var var31 = V(mach);
		Var var30 = V(mach);
		Var var29 = V(mach);
		Var var28 = V(mach);
		Var var27 = V(mach);
		Var var26 = V(mach);
		Var var25 = V(mach);
		Var var24 = V(mach);
		Var var23 = V(mach);
		Var var22 = V(mach);
		Var var21 = V(mach);
		Var var20 = V(mach);
		Var var19 = V(mach);
		Var var18 = V(mach);
		Var var17 = V(mach);
		Var var16 = V(mach);
		Var var15 = V(mach);
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
		if (!((areg0).Unify(F(nand.s5, F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8), var9))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var10)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var11)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var12)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var13)))
			return UpperPrologMachine.Fail0;
		if (!((areg5)
				.Unify(F(nand.s5, F(nand.s30, var1.Deref(), var14, var15, var16, var17, var18, var19, var20), var21))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(nand.s30, var22, var23, var24, var25, var26, var27, var28, var29);
		local_aregs[1] = var10.Deref();
		local_aregs[2] = F(nand.s65, F(nand.s30, var30, var31, var32, var33, var34, var35, var36, var37), var11.Deref(),
				F(nand.s56, F(nand.s5, var22.Deref(), Const.Nil), var28.Deref(), var38,
						F(nand.s56, F(nand.s5, var30.Deref(), Const.Nil), var37.Deref(), var39, F(nand.s45,
								F(nand.s4, F(nand.s8, var1.Deref(), var30.Deref()),
										F(nand.s56, var2.Deref(), var24.Deref(), var40)),
								F(nand.s8, var40.Deref(), var2.Deref()),
								F(nand.s45,
										F(nand.s4, F(nand.s8, var1.Deref(), var22.Deref()),
												F(nand.s56, var40.Deref(), var32.Deref(), var41)),
										F(nand.s8, var41.Deref(), var40.Deref()),
										F(nand.s45, F(nand.s4,
												F(nand.s7, F(nand.s54, var1.Deref(), var26.Deref()),
														F(nand.s54, var1.Deref(), var27.Deref())),
												F(nand.s56, var41.Deref(), F(nand.s5, var12.Deref(), Const.Nil),
														var14.Deref())),
												F(nand.s8, var14.Deref(), var41.Deref()),
												F(nand.s45, F(nand.s4, F(nand.s8, var1.Deref(), var22.Deref()),
														F(nand.s56, var3.Deref(), F(nand.s5, var12.Deref(), Const.Nil),
																var15.Deref())),
														F(nand.s8, var15.Deref(), var3.Deref()),
														F(nand.s45, F(nand.s4,
																F(nand.s7, F(nand.s54, var1.Deref(), var28.Deref()),
																		F(nand.s8, var1.Deref(), var22.Deref())),
																F(nand.s52, var4.Deref(), var39.Deref(), var42)),
																F(nand.s8, var42.Deref(), var4.Deref()),
																F(nand.s45, F(nand.s4, F(nand.s3,
																		F(nand.s54, var22.Deref(), var4.Deref()),
																		F(nand.s54, var12.Deref(), var3.Deref())),
																		F(nand.s52, var42.Deref(),
																				F(nand.s5, var22.Deref(), Const.Nil),
																				var43)),
																		F(nand.s8, var43.Deref(), var42.Deref()),
																		F(nand.s45, F(nand.s4,
																				F(nand.s8, var1.Deref(), var22.Deref()),
																				F(nand.s23, var43.Deref(),
																						var13.Deref(), var12.Deref(),
																						var44)),
																				F(nand.s8, var44.Deref(),
																						var43.Deref()),
																				F(nand.s45, F(nand.s4,
																						F(nand.s8, var1.Deref(),
																								var30.Deref()),
																						F(nand.s52, var44.Deref(),
																								F(nand.s5,
																										var22.Deref(),
																										Const.Nil),
																								var16.Deref())),
																						F(nand.s8, var16.Deref(),
																								var44.Deref()),
																						F(nand.s45, F(nand.s4,
																								F(nand.s8, var1.Deref(),
																										var30.Deref()),
																								F(nand.s56,
																										var5.Deref(),
																										F(nand.s5, var22
																												.Deref(),
																												Const.Nil),
																										var17.Deref())),
																								F(nand.s8,
																										var17.Deref(),
																										var5.Deref()),
																								F(nand.s45, F(nand.s4,
																										F(nand.s8, var1
																												.Deref(),
																												var22.Deref()),
																										F(nand.s56, var6
																												.Deref(),
																												F(nand.s5,
																														var30.Deref(),
																														Const.Nil),
																												var18.Deref())),
																										F(nand.s8, var18
																												.Deref(),
																												var6.Deref()),
																										F(nand.s45, F(
																												nand.s4,
																												F(nand.s54,
																														var1.Deref(),
																														var39.Deref()),
																												F(nand.s56,
																														var7.Deref(),
																														var38.Deref(),
																														var19.Deref())),
																												F(nand.s8,
																														var19.Deref(),
																														var7.Deref()),
																												F(nand.s45,
																														F(nand.s4,
																																F(nand.s54,
																																		var1.Deref(),
																																		var38.Deref()),
																																F(nand.s56,
																																		var8.Deref(),
																																		var39.Deref(),
																																		var20.Deref())),
																														F(nand.s8,
																																var20.Deref(),
																																var8.Deref()),
																														F(nand.s67,
																																var9.Deref(),
																																var10.Deref(),
																																var11.Deref(),
																																var12.Deref(),
																																var13.Deref(),
																																var21.Deref(),
																																continuation))))))))))))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_unify_2::exec_static;
	}
}

class pred_exclude_if_vector_in_false_set_4 extends Code {

	/*
	 * 
	 * exclude_if_vector_in_false_set([],_9720,_9722,[],_9732):-call(_9732).
	 * exclude_if_vector_in_false_set([_9754|_9756],_9758,_9760,_9762,_9774):-
	 * function(_9754,_9758,_9764,false_set(_9764,_9766,set_member(_9760,_9766,cut(1
	 * ,exclude_if_vector_in_false_set(_9756,_9758,_9760,_9762,_9774))))).
	 * exclude_if_vector_in_false_set([_9840|_9842],_9850,_9852,[_9840|_9848],_9860)
	 * :-exclude_if_vector_in_false_set(_9842,_9850,_9852,_9848,_9860).
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
		return (Function<PrologMachine, Function>) exec_pred_exclude_if_vector_in_false_set_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_exclude_if_vector_in_false_set_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg3).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_exclude_if_vector_in_false_set_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var6;
		local_aregs[3] = F(nand.s28, var6.Deref(), var7,
				F(nand.s54, var4.Deref(), var7.Deref(), F(nand.s0, new HeapChoice(mach.CUTB),
						F(nand.s23, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_function_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_exclude_if_vector_in_false_set_4__3(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_exclude_if_vector_in_false_set_4::exec_static;
	}
}

class pred_add_necessary_functions_5 extends Code {

	/*
	 * 
	 * add_necessary_functions(_9892,_9894,_9896,_9898,_9900,_9908):-
	 * add_necessary_functions(_9892,_9892,_9894,_9896,_9898,_9900,_9908).
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
		return (Function<PrologMachine, Function>) exec_pred_add_necessary_functions_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_add_necessary_functions_5__1(PrologMachine mach) {
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
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var3.Deref();
		local_aregs[4] = var4.Deref();
		local_aregs[5] = var5.Deref();
		local_aregs[6] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_add_necessary_functions_6::exec_static;
	}
}

class pred_add_necessary_functions_6 extends Code {

	/*
	 * 
	 * add_necessary_functions(_9946,_9948,_9946,_9950,_9946,_9950,_9958):-cut(1,
	 * _9958).
	 * add_necessary_functions(_9988,_9990,_9992,_9994,_9996,_9998,_10060):-function
	 * (_9988,_9994,_10000,function_type(_9990,_9992,_9994,_10000,nf,_10002,cut(1,
	 * false_set(_10000,_10004,new_function_CIs(_9994,function(_9992,_10004,[_10002]
	 * ,[],[],[],[],[]),_9990,_10030,_10032,function(_9988,_10030,_10034,
	 * update_circuit(_10030,_10032,_10034,_10002,_10030,_10036,is(_10044,_9992+1,is
	 * (_10052,_9988+1,add_necessary_functions(_10052,_9990,_10044,_10036,_9996,
	 * _9998,_10060)))))))))).
	 * add_necessary_functions(_10196,_10198,_10200,_10202,_10204,_10206,_10222):-is
	 * (_10214,_10196+1,add_necessary_functions(_10214,_10198,_10200,_10202,_10204,
	 * _10206,_10222)).
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
		return (Function<PrologMachine, Function>) exec_pred_add_necessary_functions_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_add_necessary_functions_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_add_necessary_functions_6__2(PrologMachine mach) {
		mach.FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var15 = V(mach);
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
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = var7;
		local_aregs[3] = F(nand.s32, var2.Deref(), var3.Deref(), var4.Deref(), var7.Deref(), nand.s42, var8,
				F(nand.s0, new HeapChoice(mach.CUTB),
						F(nand.s28, var7.Deref(), var9,
								F(nand.s41, var4.Deref(),
										F(nand.s30, var3.Deref(), var9.Deref(), F(nand.s5, var8.Deref(), Const.Nil),
												Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
										var2.Deref(), var10, var11,
										F(nand.s30, var1.Deref(), var10.Deref(), var12, F(nand.s67, var10.Deref(),
												var11.Deref(), var12.Deref(), var8.Deref(), var10.Deref(), var13,
												F(nand.s37, var14, F(nand.s2, var3.Deref(), nand.posint1),
														F(nand.s37, var15, F(nand.s2, var1.Deref(), nand.posint1),
																F(nand.s11, var15.Deref(), var2.Deref(), var14.Deref(),
																		var13.Deref(), var5.Deref(), var6.Deref(),
																		continuation)))))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_function_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_add_necessary_functions_6__3(PrologMachine mach) {
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
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var7;
		local_aregs[1] = F(nand.s2, var1.Deref(), nand.posint1);
		local_aregs[2] = F(nand.s11, var7.Deref(), var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref(),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_new_function_CIs_5 extends Code {

	/*
	 * 
	 * new_function_CIs(_10294,function(_10272,_10274,_10276,_10278,_10280,_10282,
	 * _10284,_10286),_10296,[_10290|_10292],_10290,_10324):-new_function_CIs(_10294
	 * ,_10272,_10276,_10296,_10292,[],_10298,unify(function(_10272,_10274,_10276,
	 * _10298,_10280,_10282,_10284,_10286),_10290,_10324)).
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
		return (Function<PrologMachine, Function>) exec_pred_new_function_CIs_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_new_function_CIs_5__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s30, var2, var3, var4, var5, var6, var7, var8, var9))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var10)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(nand.s5, var11, var12))))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var11.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var10.Deref();
		local_aregs[4] = var12.Deref();
		local_aregs[5] = Const.Nil;
		local_aregs[6] = var13;
		local_aregs[7] = F(nand.s65, F(nand.s30, var2.Deref(), var3.Deref(), var4.Deref(), var13.Deref(), var6.Deref(),
				var7.Deref(), var8.Deref(), var9.Deref()), var11.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_new_function_CIs_7::exec_static;
	}
}

class pred_new_function_CIs_7 extends Code {

	/*
	 * 
	 * new_function_CIs([],_10372,_10374,_10376,[],_10378,_10378,_10388):-call(
	 * _10388).
	 * new_function_CIs([function(_10416,_10418,_10420,_10422,_10424,_10426,_10428,
	 * _10430)|_10436],_10462,_10464,_10466,[function(_10416,_10418,_10420,_10446,
	 * _10424,_10426,_10428,_10430)|_10460],_10468,_10470,_10516):-set_intersection(
	 * _10464,_10420,[],cut(1,or((_10416>=_10466->set_union(_10422,[_10462],_10446))
	 * ,_10446=_10422,new_function_CIs(_10436,_10462,_10464,_10466,_10460,[_10416|
	 * _10468],_10470,_10516)))).
	 * new_function_CIs([_10586|_10588],_10596,_10598,_10600,[_10586|_10594],_10602,
	 * _10604,_10612):-new_function_CIs(_10588,_10596,_10598,_10600,_10594,_10602,
	 * _10604,_10612).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7]} ;
		 */
		Term aregs[] = mach.RegPull(7);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_new_function_CIs_7__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_new_function_CIs_7__1(PrologMachine mach) {
		mach.FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[7];
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_new_function_CIs_7__2(PrologMachine mach) {
		mach.FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[7];
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var16 = V(mach);
		Var var15 = V(mach);
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
		if (!((areg0).Unify(F(nand.s5, F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8), var9))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var10)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var11)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var12)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(F(nand.s5, F(nand.s30, var1.Deref(), var2.Deref(), var3.Deref(), var13, var5.Deref(),
				var6.Deref(), var7.Deref(), var8.Deref()), var14))))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var15)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var16)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var11.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = Const.Nil;
		local_aregs[3] = F(nand.s0, new HeapChoice(mach.CUTB),
				F(nand.s45,
						F(nand.s4, F(nand.s9, var1.Deref(), var12.Deref()),
								F(nand.s56, var4.Deref(), F(nand.s5, var10.Deref(), Const.Nil), var13.Deref())),
						F(nand.s8, var13.Deref(), var4.Deref()),
						F(nand.s41, var9.Deref(), var10.Deref(), var11.Deref(), var12.Deref(), var14.Deref(),
								F(nand.s5, var1.Deref(), var15.Deref()), var16.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_set_intersection_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_new_function_CIs_7__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[7];
		Term areg6 = local_aregs[6].Deref();
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(F(nand.s5, var1.Deref(), var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var8)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = var6.Deref();
		local_aregs[5] = var7.Deref();
		local_aregs[6] = var8.Deref();
		local_aregs[7] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_new_function_CIs_7::exec_static;
	}
}

class pred_function_type_6 extends Code {

	/*
	 * 
	 * function_type(_10656,_10658,_10660,_10662,_10664,_10666,_10680):-true_set(
	 * _10662,_10668,select_vector(_10668,_10662,_10656,_10658,_10660,dummy,0,nf,999
	 * ,_10670,_10666,_10664,_10672,_10680)).
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
		return (Function<PrologMachine, Function>) exec_pred_function_type_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_function_type_6__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
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
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var7;
		local_aregs[2] = F(nand.s50, var7.Deref(), var4.Deref(), var1.Deref(), var2.Deref(), var3.Deref(), nand.s21,
				nand.posint0, nand.s42, nand.posint999, var8, var6.Deref(), var5.Deref(), var9, continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_true_set_2::exec_static;
	}
}

class pred_test_bounds_3 extends Code {

	/*
	 * 
	 * test_bounds(_10742,_10744,_10746,_10756):-access(bound,_10748,smallerthan(
	 * _10744,_10748,_10756)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_test_bounds_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_test_bounds_3__1(PrologMachine mach) {
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
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = nand.s13;
		local_aregs[1] = var4;
		local_aregs[2] = F(nand.s58, var2.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_access_2::exec_static;
	}
}

class pred_update_bounds_3 extends Code {

	/*
	 * 
	 * update_bounds(_10790,_10792,_10794,_10802):-set(bound,_10792,_10802).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_update_bounds_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_update_bounds_3__1(PrologMachine mach) {
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
		local_aregs[0] = nand.s13;
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_set_2::exec_static;
	}
}

class pred_set_2 extends Code {

	/*
	 * 
	 * set(_10828,_10830,_10858):-or((recorded(_10828,_10836,_10838)->erase(_10838))
	 * ,true,recorda(_10828,_10830,_10850,_10858)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_set_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_set_2__1(PrologMachine mach) {
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
		local_aregs[0] = F(nand.s4, F(nand.s48, var1.Deref(), var3, var4), F(nand.s22, var4.Deref()));
		local_aregs[1] = nand.s62;
		local_aregs[2] = F(nand.s47, var1.Deref(), var2.Deref(), var5, continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}
}

class pred_access_2 extends Code {

	/*
	 * 
	 * access(_10892,_10894,_10904):-recorded(_10892,_10894,_10896,_10904).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_access_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_access_2__1(PrologMachine mach) {
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
		return (Function<PrologMachine, Function>) pred_recorded_3::exec_static;
	}
}

class pred_write_gates_1 extends Code {

	/*
	 * 
	 * write_gates([],_10938):-call(_10938).
	 * write_gates([_10954|_10956],_10968):-function_number(_10954,_10958,write('
	 * gate #',write(_10958,write(' inputs:
	 * ',immediate_predecessors(_10954,_10960,write(_10960,nl(write_gates(_10956,
	 * _10968)))))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_write_gates_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_write_gates_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_write_gates_1::exec_pred_write_gates_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_write_gates_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3;
		local_aregs[2] = F(nand.s71, nand.s33, F(nand.s71, var3.Deref(), F(nand.s71, nand.s1, F(nand.s34, var1.Deref(),
				var4, F(nand.s71, var4.Deref(), F(nand.s43, F(nand.s72, var2.Deref(), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_function_number_2::exec_static;
	}
}

class pred_function_3 extends Code {

	/*
	 * 
	 * function(_11038,[_11034|_11036],_11034,_11046):-function_number(_11034,_11038
	 * ,cut(1,_11046)).
	 * function(_11084,[_11080|_11082],_11086,_11094):-function(_11084,_11082,_11086
	 * ,_11094).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_function_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_function_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_function_3::exec_pred_function_3__2);
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
		if (!((areg1).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(nand.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_function_number_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_function_3__2(PrologMachine mach) {
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
		if (!((areg1).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_function_3::exec_static;
	}
}

class pred_function_number_2 extends Code {

	/*
	 * 
	 * function_number(function(_11124,_11126,_11128,_11130,_11132,_11134,_11136,
	 * _11138),_11124,_11148):-call(_11148).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_function_number_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_function_number_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_true_set_2 extends Code {

	/*
	 * 
	 * true_set(function(_11166,_11168,_11170,_11172,_11174,_11176,_11178,_11180),
	 * _11168,_11190):-call(_11190).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_true_set_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_true_set_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_false_set_2 extends Code {

	/*
	 * 
	 * false_set(function(_11208,_11210,_11212,_11214,_11216,_11218,_11220,_11222),
	 * _11212,_11232):-call(_11232).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_false_set_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_false_set_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_conceivable_inputs_2 extends Code {

	/*
	 * 
	 * conceivable_inputs(function(_11250,_11252,_11254,_11256,_11258,_11260,_11262,
	 * _11264),_11256,_11274):-call(_11274).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_conceivable_inputs_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_conceivable_inputs_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_immediate_predecessors_2 extends Code {

	/*
	 * 
	 * immediate_predecessors(function(_11292,_11294,_11296,_11298,_11300,_11302,
	 * _11304,_11306),_11300,_11316):-call(_11316).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_immediate_predecessors_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_immediate_predecessors_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var5.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_immediate_successors_2 extends Code {

	/*
	 * 
	 * immediate_successors(function(_11334,_11336,_11338,_11340,_11342,_11344,
	 * _11346,_11348),_11344,_11358):-call(_11358).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_immediate_successors_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_immediate_successors_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var6.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_predecessors_2 extends Code {

	/*
	 * 
	 * predecessors(function(_11376,_11378,_11380,_11382,_11384,_11386,_11388,_11390
	 * ),_11388,_11400):-call(_11400).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_predecessors_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_predecessors_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var7.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_successors_2 extends Code {

	/*
	 * 
	 * successors(function(_11418,_11420,_11422,_11424,_11426,_11428,_11430,_11432),
	 * _11432,_11442):-call(_11442).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_successors_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_successors_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(nand.s30, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var8.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_set_union_3 extends Code {

	/*
	 * 
	 * set_union([],[],[],_11466):-call(_11466).
	 * set_union([],[_11486|_11488],[_11486|_11488],_11504):-call(_11504).
	 * set_union([_11524|_11526],[],[_11524|_11526],_11542):-call(_11542).
	 * set_union([_11562|_11564],[_11562|_11570],[_11562|_11576],_11584):-set_union(
	 * _11564,_11570,_11576,_11584).
	 * set_union([_11614|_11616],[_11620|_11622],[_11614|_11628],_11642):-
	 * smallerthan(_11614,_11620,set_union(_11616,[_11620|_11622],_11628,_11642)).
	 * set_union([_11680|_11682],[_11686|_11688],[_11686|_11694],_11708):-
	 * smallerthan(_11686,_11680,set_union([_11680|_11682],_11688,_11694,_11708)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_set_union_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_set_union_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_set_union_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_set_union_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_set_union_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_set_union_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_set_union_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__6);
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(nand.s56, var2.Deref(), F(nand.s5, var3.Deref(), var4.Deref()), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_set_union_3__6(PrologMachine mach) {
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var3.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(nand.s56, F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_set_intersection_3 extends Code {

	/*
	 * 
	 * set_intersection([],[],[],_11752):-call(_11752).
	 * set_intersection([],[_11772|_11774],[],_11784):-call(_11784).
	 * set_intersection([_11804|_11806],[],[],_11816):-call(_11816).
	 * set_intersection([_11836|_11838],[_11836|_11844],[_11836|_11850],_11858):-
	 * set_intersection(_11838,_11844,_11850,_11858).
	 * set_intersection([_11888|_11890],[_11894|_11896],_11898,_11912):-smallerthan(
	 * _11888,_11894,set_intersection(_11890,[_11894|_11896],_11898,_11912)).
	 * set_intersection([_11950|_11952],[_11956|_11958],_11960,_11974):-smallerthan(
	 * _11956,_11950,set_intersection([_11950|_11952],_11958,_11960,_11974)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_set_intersection_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_set_intersection_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_set_intersection_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_set_intersection_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
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

	public static Function<PrologMachine, Function> exec_pred_set_intersection_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_set_intersection_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_set_intersection_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__6);
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(nand.s53, var2.Deref(), F(nand.s5, var3.Deref(), var4.Deref()), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_set_intersection_3__6(PrologMachine mach) {
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(nand.s53, F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_set_difference_3 extends Code {

	/*
	 * 
	 * set_difference([],[],[],_12018):-call(_12018).
	 * set_difference([],[_12038|_12040],[],_12050):-call(_12050).
	 * set_difference([_12070|_12072],[],[_12070|_12072],_12088):-call(_12088).
	 * set_difference([_12108|_12110],[_12108|_12116],_12118,_12126):-set_difference
	 * (_12110,_12116,_12118,_12126).
	 * set_difference([_12156|_12158],[_12162|_12164],[_12156|_12170],_12184):-
	 * smallerthan(_12156,_12162,set_difference(_12158,[_12162|_12164],_12170,_12184
	 * )).
	 * set_difference([_12222|_12224],[_12228|_12230],_12232,_12246):-smallerthan(
	 * _12228,_12222,set_difference([_12222|_12224],_12230,_12232,_12246)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_set_difference_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_set_difference_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_set_difference_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_set_difference_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_set_difference_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_set_difference_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_set_difference_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__6);
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(nand.s5, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(nand.s52, var2.Deref(), F(nand.s5, var3.Deref(), var4.Deref()), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_set_difference_3__6(PrologMachine mach) {
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
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(nand.s52, F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_set_subset_2 extends Code {

	/*
	 * 
	 * set_subset([],_12282,_12292):-call(_12292).
	 * set_subset([_12310|_12312],[_12310|_12318],_12326):-set_subset(_12312,_12318,
	 * _12326).
	 * set_subset([_12352|_12354],[_12358|_12360],_12374):-smallerthan(_12358,_12352
	 * ,set_subset([_12352|_12354],_12360,_12374)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_set_subset_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_set_subset_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__2);
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

	public static Function<PrologMachine, Function> exec_pred_set_subset_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1.Deref(), var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_set_subset_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_set_subset_2__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(nand.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(nand.s55, F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}

class pred_set_member_2 extends Code {

	/*
	 * 
	 * set_member(_12408,[_12408|_12410],_12420):-call(_12420).
	 * set_member(_12442,[_12438|_12440],_12450):-smallerthan(_12438,_12442,
	 * set_member(_12442,_12440,_12450)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_set_member_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_set_member_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_set_member_2::exec_pred_set_member_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(nand.s5, var1.Deref(), var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_set_member_2__2(PrologMachine mach) {
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
		if (!((areg1).Unify(F(nand.s5, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(nand.s54, var1.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}
}
