import java.util.function.Function;

class reducer /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("*");
	static Const s2 = Const.Intern("+");
	static Const s3 = Const.Intern(",");
	static Const s4 = Const.Intern("-");
	static Const s5 = Const.Intern("-->");
	static Const s6 = Const.Intern("->");
	static Const s7 = Const.Intern(".");
	static Const s8 = Const.Intern("//");
	static Const s9 = Const.Intern(":-");
	static Const s10 = Const.Intern("<");
	static Const s11 = Const.Intern("=");
	static Const s12 = Const.Intern("=:=");
	static Const s13 = Const.Intern("=<");
	static Const s14 = Const.Intern("=\\=");
	static Const s15 = Const.Intern(">");
	static Const s16 = Const.Intern(">=");
	static Const s17 = Const.Intern("\\==");
	static Const s18 = Const.Intern("append");
	static Const s19 = Const.Intern("apply");
	static Const s20 = Const.Intern("arg");
	static Const s21 = Const.Intern("arithequal");
	static Const s22 = Const.Intern("atom");
	static Const s23 = Const.Intern("atomic");
	static Const s24 = Const.Intern("b");
	static Const s25 = Const.Intern("bp");
	static Const s26 = Const.Intern("c");
	static Const s27 = Const.Intern("call");
	static Const s28 = Const.Intern("compare");
	static Const s29 = Const.Intern("cond");
	static Const s30 = Const.Intern("cp");
	static Const s31 = Const.Intern("curry");
	static Const s32 = Const.Intern("currylist");
	static Const s33 = Const.Intern("cut");
	static Const s34 = Const.Intern("diffv");
	static Const s35 = Const.Intern("diffv_2");
	static Const s36 = Const.Intern("diffv_3");
	static Const s37 = Const.Intern("end");
	static Const s38 = Const.Intern("eval");
	static Const s39 = Const.Intern("eval1");
	static Const s40 = Const.Intern("fac");
	static Const s41 = Const.Intern("false");
	static Const s42 = Const.Intern("functor");
	static Const s43 = Const.Intern("hd");
	static Const s44 = Const.Intern("i");
	static Const s45 = Const.Intern("inserthead");
	static Const s46 = Const.Intern("inserttail");
	static Const s47 = Const.Intern("intersectv");
	static Const s48 = Const.Intern("intersectv_2");
	static Const s49 = Const.Intern("intersectv_3");
	static Const s50 = Const.Intern("intersectv_list");
	static Const s51 = Const.Intern("inv");
	static Const s52 = Const.Intern("inv_2");
	static Const s53 = Const.Intern("is");
	static Const s54 = Const.Intern("k");
	static Const s55 = Const.Intern("list_functor_name");
	static Const s56 = Const.Intern("listify");
	static Const s57 = Const.Intern("listify_list");
	static Const s58 = Const.Intern("make_list");
	static Const s59 = Const.Intern("member");
	static Const s60 = Const.Intern("mod");
	static Const s61 = Const.Intern("notinv");
	static Const s62 = Const.Intern("notinv_2");
	static Const s63 = Const.Intern("notinv_3");
	static Const s64 = Const.Intern("number");
	static Const s65 = Const.Intern("or");
	static Const s66 = Const.Intern("quick");
	static Const s67 = Const.Intern("quick2");
	static Const s68 = Const.Intern("relop");
	static Const s69 = Const.Intern("s");
	static Const s70 = Const.Intern("small_subsetv");
	static Const s71 = Const.Intern("smallerorequal");
	static Const s72 = Const.Intern("smallerthan");
	static Const s73 = Const.Intern("sp");
	static Const s74 = Const.Intern("split");
	static Const s75 = Const.Intern("subsetv");
	static Const s76 = Const.Intern("subsetv_2");
	static Const s77 = Const.Intern("t");
	static Const s78 = Const.Intern("t_append");
	static Const s79 = Const.Intern("t_argvars");
	static Const s80 = Const.Intern("t_def");
	static Const s81 = Const.Intern("t_redex");
	static Const s82 = Const.Intern("t_reduce");
	static Const s83 = Const.Intern("t_rule1");
	static Const s84 = Const.Intern("t_rule2");
	static Const s85 = Const.Intern("t_trans");
	static Const s86 = Const.Intern("t_vars");
	static Const s87 = Const.Intern("termequal");
	static Const s88 = Const.Intern("tl");
	static Const s89 = Const.Intern("top");
	static Const s90 = Const.Intern("true");
	static Const s91 = Const.Intern("try");
	static Const s92 = Const.Intern("unify");
	static Const s93 = Const.Intern("unionv");
	static Const s94 = Const.Intern("unionv_2");
	static Const s95 = Const.Intern("unionv_3");
	static Const s96 = Const.Intern("var");
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint3 = Term.Number(3);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_37922):-try(fac(3),_37866,try(quick([3,1,2]),_37894,_37922)).
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
		local_aregs[0] = F(reducer.s40, reducer.posint3);
		local_aregs[1] = var1;
		local_aregs[2] = F(reducer.s91,
				F(reducer.s66,
						F(reducer.s7, reducer.posint3,
								F(reducer.s7, reducer.posint1, F(reducer.s7, reducer.posint2, Const.Nil)))),
				var2, continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_try_2::exec_static;
	}
}

class pred_try_2 extends Code {

	/*
	 * 
	 * try(_38050,_38052,_38128):-listify(_38050,_38058,curry(_38058,_38064,t_reduce
	 * (_38064,_38070,make_list(_38070,_38052,_38128)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_try_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_try_2__1(PrologMachine mach) {
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
		local_aregs[2] = F(reducer.s31, var3.Deref(), var4,
				F(reducer.s82, var4.Deref(), var5, F(reducer.s58, var5.Deref(), var2.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_listify_2::exec_static;
	}
}

class pred_end_1 extends Code {

	/*
	 * 
	 * end(_38378,_38416):-atom(_38378,cut(1,_38416)).
	 * end(_38506,_38540):-termequal(_38506,[],_38540).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_end_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_end_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_end_1::exec_pred_end_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_atom_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_end_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = Const.Nil;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}
}

class pred_list_functor_name_1 extends Code {

	/*
	 * 
	 * list_functor_name(_38644,_38686):-functor([_38648|_38650],_38644,_38658,
	 * _38686).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_list_functor_name_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_list_functor_name_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(reducer.s7, var2, var3);
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var4;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_functor_3::exec_static;
	}
}

class pred_t_def_3 extends Code {

	/*
	 * 
	 * t_def(fac,[_38804],cond(_38804=0,1,_38804*fac(_38804-1)),_38866):-call(_38866
	 * ).
	 * t_def(quick,[_38970],cond(_38970=[],[],cond(tl(_38970)=[],_38970,quick2(split
	 * (hd(_38970),tl(_38970))))),_39052):-call(_39052).
	 * t_def(quick2,[_39156],append(quick(hd(_39156)),quick(tl(_39156))),_39210):-
	 * call(_39210).
	 * t_def(split,[_39314,_39320],cond(_39320=[],[[_39314]],cond(hd(_39320)=<_39314
	 * ,inserthead(hd(_39320),split(_39314,tl(_39320))),inserttail(hd(_39320),split(
	 * _39314,tl(_39320))))),_39436):-call(_39436).
	 * t_def(inserthead,[_39540,_39546],[[_39540|hd(_39546)]|tl(_39546)],_39598):-
	 * call(_39598).
	 * t_def(inserttail,[_39702,_39708],[hd(_39708),_39702|tl(_39708)],_39760):-call
	 * (_39760).
	 * t_def(append,[_39864,_39870],cond(_39864=[],_39870,[hd(_39864)|append(tl(
	 * _39864),_39870)]),_39936):-call(_39936).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_t_def_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_def_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s40)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var1, Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s29, F(reducer.s11, var1.Deref(), reducer.posint0), reducer.posint1,
				F(reducer.s1, var1.Deref(), F(reducer.s40, F(reducer.s4, var1.Deref(), reducer.posint1)))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_def_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s66)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var1, Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s29, F(reducer.s11, var1.Deref(), Const.Nil), Const.Nil,
				F(reducer.s29, F(reducer.s11, F(reducer.s88, var1.Deref()), Const.Nil), var1.Deref(),
						F(reducer.s67, F(reducer.s74, F(reducer.s43, var1.Deref()), F(reducer.s88, var1.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_def_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s67)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var1, Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s18, F(reducer.s66, F(reducer.s43, var1.Deref())),
				F(reducer.s66, F(reducer.s88, var1.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_def_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s74)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var1, F(reducer.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s29, F(reducer.s11, var2.Deref(), Const.Nil),
				F(reducer.s7, F(reducer.s7, var1.Deref(), Const.Nil), Const.Nil),
				F(reducer.s29, F(reducer.s13, F(reducer.s43, var2.Deref()), var1.Deref()),
						F(reducer.s45, F(reducer.s43, var2.Deref()),
								F(reducer.s74, var1.Deref(), F(reducer.s88, var2.Deref()))),
						F(reducer.s46, F(reducer.s43, var2.Deref()),
								F(reducer.s74, var1.Deref(), F(reducer.s88, var2.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_def_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s45)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var1, F(reducer.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s7, F(reducer.s7, var1.Deref(), F(reducer.s43, var2.Deref())),
				F(reducer.s88, var2.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_def_3__6(PrologMachine mach) {
		mach.FillAlternative(pred_t_def_3::exec_pred_t_def_3__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s46)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var1, F(reducer.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s7, F(reducer.s43, var2.Deref()),
				F(reducer.s7, var1.Deref(), F(reducer.s88, var2.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_def_3__7(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s18)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var1, F(reducer.s7, var2, Const.Nil)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s29, F(reducer.s11, var1.Deref(), Const.Nil), var2.Deref(), F(reducer.s7,
				F(reducer.s43, var1.Deref()), F(reducer.s18, F(reducer.s88, var1.Deref()), var2.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_t_reduce_2 extends Code {

	/*
	 * 
	 * t_reduce(_40040,_40042,_40098):-atomic(_40040,cut(1,unify(_40040,_40042,
	 * _40098))). t_reduce([_40270,_40276|_40278],[_40282,_40288|_40278],_40370):-
	 * list_functor_name(_40278,t_reduce(_40276,_40288,cut(1,t_reduce(_40270,_40282,
	 * cut(1,_40370))))).
	 * t_reduce(_40592,_40594,_40674):-t_append(_40598,_40600,_40602,_40592,t_redex(
	 * _40602,_40600,cut(1,t_reduce(_40598,_40594,cut(1,_40674))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_t_reduce_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_reduce_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__2);
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
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s92, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_reduce_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_t_reduce_2::exec_pred_t_reduce_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var4, F(reducer.s7, var5, var3.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(reducer.s82, var2.Deref(), var5.Deref(), F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s82, var1.Deref(), var4.Deref(), F(reducer.s0, new HeapChoice(mach.CUTB), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_list_functor_name_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_reduce_2__3(PrologMachine mach) {
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
		local_aregs[1] = var4;
		local_aregs[2] = var5;
		local_aregs[3] = var1.Deref();
		local_aregs[4] = F(reducer.s81, var5.Deref(), var4.Deref(), F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s82, var3.Deref(), var2.Deref(), F(reducer.s0, new HeapChoice(mach.CUTB), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_append_4::exec_static;
	}
}

class pred_t_append_4 extends Code {

	/*
	 * 
	 * t_append(_40938,_40938,_40942,_40942,_40966):-call(_40966).
	 * t_append([_41096|_41098],_41110,_41112,[_41096|_41104],_41170):-t_append(
	 * _41098,_41110,_41112,_41104,_41170).
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
		return (Function<PrologMachine, Function>) exec_pred_t_append_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_append_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_append_4::exec_pred_t_append_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
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
		if (!((areg3).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_append_4__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(reducer.s7, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_append_4::exec_static;
	}
}

class pred_t_redex_2 extends Code {

	/*
	 * 
	 * t_redex([_41344,_41350,_41356,_41362|sp],[[_41368|_41350],[_41368|_41356]|
	 * _41362],_41434):-t_reduce(_41344,_41368,_41434).
	 * t_redex([_41570,_41576,_41582,_41588|bp],[[_41570|_41576],_41582|_41588],
	 * _41636):-call(_41636).
	 * t_redex([_41744,_41750,_41756,_41762|cp],[_41750,[_41744|_41756]|_41762],
	 * _41810):-call(_41810).
	 * t_redex([_41918,_41924,_41930|s],[[_41936|_41924],_41936|_41930],_41996):-
	 * t_reduce(_41918,_41936,_41996).
	 * t_redex([_42132,_42138,_42144|b],[[_42132|_42138]|_42144],_42186):-call(
	 * _42186).
	 * t_redex([_42294,_42300,_42306|c],[_42300,_42294|_42306],_42348):-call(_42348)
	 * . t_redex([_42456,_42462|k],_42462,_42492):-call(_42492).
	 * t_redex([_42600|i],_42600,_42630):-call(_42630).
	 * t_redex([_42738,_42744,_42750|cond],_42744,_42816):-t_reduce(_42750,_42764,
	 * unify(true,_42764,cut(1,_42816))).
	 * t_redex([_43014,_43020,_43026|cond],_43014,_43056):-call(_43056).
	 * t_redex([_43164|apply],_43172,_43212):-t_reduce(_43164,_43172,_43212).
	 * t_redex([_43348|hd],_43356,_43418):-list_functor_name(_43360,t_reduce(_43348,
	 * [_43364,_43356|_43360],_43418)).
	 * t_redex([_43590|tl],_43598,_43660):-list_functor_name(_43602,t_reduce(_43590,
	 * [_43598,_43612|_43602],_43660)).
	 * t_redex([_43832,_43838|_43840],_43846,_43986):-end(_43840,member(_43840,[+,-,
	 * *,//,mod],t_reduce(_43838,_43892,t_reduce(_43832,_43898,number(_43892,number(
	 * _43898,eval(_43840,_43846,_43892,_43898,_43986))))))).
	 * t_redex([_44408,_44414|_44416],_44422,_44596):-end(_44416,member(_44416,[<,>,
	 * =<,>=,=\=,=:=],t_reduce(_44414,_44474,t_reduce(_44408,_44480,number(_44474,
	 * number(_44480,or((relop(_44416,_44474,_44480)->_44422=true),_44422=false,cut(
	 * 1,_44596)))))))).
	 * t_redex([_45002,_45008|=],_45016,_45110):-t_reduce(_45008,_45022,t_reduce(
	 * _45002,_45028,or((_45022=_45028->_45016=true),_45016=false,cut(1,_45110)))).
	 * t_redex([_45358|_45360],_45366,_45458):-end(_45360,member(_45360,[-],t_reduce
	 * (_45358,_45388,number(_45388,eval1(_45360,_45398,_45388,_45458))))).
	 * t_redex(_45780,_45782,_45876):-append(_45786,_45788,_45780,end(_45788,t_def(
	 * _45788,_45800,_45802,t(_45800,_45802,_45810,append(_45786,_45810,_45782,
	 * _45876))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_t_redex_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(
				F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, F(reducer.s7, var4, reducer.s73)))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, F(reducer.s7, var5, var2.Deref()),
				F(reducer.s7, F(reducer.s7, var5.Deref(), var3.Deref()), var4.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var5.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_reduce_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(
				F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, F(reducer.s7, var4, reducer.s25)))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(
				F(reducer.s7, F(reducer.s7, var1.Deref(), var2.Deref()), F(reducer.s7, var3.Deref(), var4.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(
				F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, F(reducer.s7, var4, reducer.s30)))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(
				F(reducer.s7, var2.Deref(), F(reducer.s7, F(reducer.s7, var1.Deref(), var3.Deref()), var4.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, reducer.s69))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1)
				.Unify(F(reducer.s7, F(reducer.s7, var4, var2.Deref()), F(reducer.s7, var4.Deref(), var3.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_reduce_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, reducer.s24))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, F(reducer.s7, var1.Deref(), var2.Deref()), var3.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, reducer.s26))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var2.Deref(), F(reducer.s7, var1.Deref(), var3.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__7(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, reducer.s54)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__8(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, reducer.s44))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__9(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, reducer.s29))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = F(reducer.s92, reducer.s90, var4.Deref(),
				F(reducer.s0, new HeapChoice(mach.CUTB), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_reduce_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__10(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, F(reducer.s7, var3, reducer.s29))))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__11(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, reducer.s19))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_reduce_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__12(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, reducer.s43))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = F(reducer.s82, var1.Deref(), F(reducer.s7, var4, F(reducer.s7, var2.Deref(), var3.Deref())),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_list_functor_name_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__13(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, reducer.s88))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = F(reducer.s82, var1.Deref(), F(reducer.s7, var2.Deref(), F(reducer.s7, var4, var3.Deref())),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_list_functor_name_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__14(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__15);
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
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(reducer.s59, var3.Deref(), F(reducer.s7, reducer.s2,
				F(reducer.s7, reducer.s4,
						F(reducer.s7, reducer.s1, F(reducer.s7, reducer.s8, F(reducer.s7, reducer.s60, Const.Nil))))),
				F(reducer.s82, var2.Deref(), var5, F(reducer.s82, var1.Deref(), var6, F(reducer.s64, var5.Deref(), F(
						reducer.s64, var6.Deref(),
						F(reducer.s38, var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref(), continuation))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_end_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__15(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__16);
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
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(reducer.s59, var3.Deref(),
				F(reducer.s7, reducer.s10,
						F(reducer.s7, reducer.s15,
								F(reducer.s7, reducer.s13,
										F(reducer.s7, reducer.s16,
												F(reducer.s7, reducer.s14, F(reducer.s7, reducer.s12, Const.Nil)))))),
				F(reducer.s82, var2.Deref(), var5,
						F(reducer.s82, var1.Deref(), var6,
								F(reducer.s64, var5.Deref(),
										F(reducer.s64, var6.Deref(), F(reducer.s65,
												F(reducer.s6, F(reducer.s68, var3.Deref(), var5.Deref(), var6.Deref()),
														F(reducer.s11, var4.Deref(), reducer.s90)),
												F(reducer.s11, var4.Deref(), reducer.s41),
												F(reducer.s0, new HeapChoice(mach.CUTB), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_end_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__16(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, reducer.s11)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = F(reducer.s82, var1.Deref(), var5,
				F(reducer.s65,
						F(reducer.s6, F(reducer.s11, var4.Deref(), var5.Deref()),
								F(reducer.s11, var3.Deref(), reducer.s90)),
						F(reducer.s11, var3.Deref(), reducer.s41),
						F(reducer.s0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_reduce_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__17(PrologMachine mach) {
		mach.FillAlternative(pred_t_redex_2::exec_pred_t_redex_2__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(reducer.s59, var2.Deref(), F(reducer.s7, reducer.s4, Const.Nil), F(reducer.s82, var1.Deref(),
				var4, F(reducer.s64, var4.Deref(), F(reducer.s39, var2.Deref(), var5, var4.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_end_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_redex_2__18(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		local_aregs[0] = var3;
		local_aregs[1] = var4;
		local_aregs[2] = var1.Deref();
		local_aregs[3] = F(reducer.s37, var4.Deref(),
				F(reducer.s80, var4.Deref(), var5, var6, F(reducer.s77, var5.Deref(), var6.Deref(), var7,
						F(reducer.s18, var3.Deref(), var7.Deref(), var2.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_append_3::exec_static;
	}
}

class pred_eval_4 extends Code {

	/*
	 * 
	 * eval(+,_46256,_46258,_46260,_46318):-is(_46256,_46258+_46260,_46318).
	 * eval(-,_46478,_46480,_46482,_46540):-is(_46478,_46480-_46482,_46540).
	 * eval(*,_46700,_46702,_46704,_46762):-is(_46700,_46702*_46704,_46762).
	 * eval(//,_46922,_46924,_46926,_46984):-is(_46922,_46924//_46926,_46984).
	 * eval(mod,_47144,_47146,_47148,_47206):-is(_47144,_47146 mod _47148,_47206).
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
		return (Function<PrologMachine, Function>) exec_pred_eval_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_eval_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_eval_4::exec_pred_eval_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s2)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s2, var2.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_eval_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_eval_4::exec_pred_eval_4__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s4)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s4, var2.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_eval_4__3(PrologMachine mach) {
		mach.FillAlternative(pred_eval_4::exec_pred_eval_4__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s1, var2.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_eval_4__4(PrologMachine mach) {
		mach.FillAlternative(pred_eval_4::exec_pred_eval_4__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s8)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s8, var2.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_eval_4__5(PrologMachine mach) {
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
		if (!((areg0).Unify(reducer.s60)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s60, var2.Deref(), var3.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_eval1_3 extends Code {

	/*
	 * 
	 * eval1(-,_47366,_47368,_47418):-is(_47366,-_47368,_47418).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_eval1_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_eval1_3__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s4)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s4, var2.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_relop_3 extends Code {

	/*
	 * 
	 * relop(<,_47576,_47578,_47624):-smallerthan(_47576,_47578,_47624).
	 * relop(>,_47794,_47796,_47842):-smallerthan(_47796,_47794,_47842).
	 * relop(=<,_48012,_48014,_48060):-smallerorequal(_48012,_48014,_48060).
	 * relop(>=,_48230,_48232,_48278):-smallerorequal(_48232,_48230,_48278).
	 * relop(=\=,_48448,_48450,_48496):- =\=(_48448,_48450,_48496).
	 * relop(=:=,_48660,_48662,_48708):-arithequal(_48662,_48660,_48708).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_relop_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_relop_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_relop_3::exec_pred_relop_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s10)))
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
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_relop_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_relop_3::exec_pred_relop_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s15)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_relop_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_relop_3::exec_pred_relop_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s13)))
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
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_relop_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_relop_3::exec_pred_relop_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s16)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_relop_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_relop_3::exec_pred_relop_3__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s14)))
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
		return (Function<PrologMachine, Function>) pred_sym__c61_system_notequals_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_relop_3__6(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s12)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_arithequal_2::exec_static;
	}
}

class pred_t_3 extends Code {

	/*
	 * 
	 * t(_48876,_48878,_48880,_48958):-listify(_48878,_48886,curry(_48886,_48892,
	 * t_argvars(_48876,_48892,_48880,cut(1,_48958)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_t_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_3__1(PrologMachine mach) {
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
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = F(reducer.s31, var4.Deref(), var5, F(reducer.s79, var1.Deref(), var5.Deref(), var3.Deref(),
				F(reducer.s0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_listify_2::exec_static;
	}
}

class pred_t_argvars_3 extends Code {

	/*
	 * 
	 * t_argvars([],_3298,_3298,_3308):-call(_3308).
	 * t_argvars([_3328|_3330],_3332,_3334,_3346):-t_argvars(_3330,_3332,_3336,
	 * t_vars(_3336,_3338,t_trans(_3328,_3336,_3338,_3334,_3346))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_t_argvars_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_argvars_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_argvars_3::exec_pred_t_argvars_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_t_argvars_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var5;
		local_aregs[3] = F(reducer.s86, var5.Deref(), var6,
				F(reducer.s85, var1.Deref(), var5.Deref(), var6.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_argvars_3::exec_static;
	}
}

class pred_curry_2 extends Code {

	/*
	 * 
	 * curry(_3394,_3394,_3410):-or(var(_3394),atomic(_3394),cut(1,_3410)).
	 * curry([_3442|_3444],_3446,_3454):-currylist(_3444,_3446,_3442,_3454).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_curry_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_curry_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_curry_2::exec_pred_curry_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(reducer.s96, var1.Deref());
		local_aregs[1] = F(reducer.s23, var1.Deref());
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_curry_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var1.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_currylist_3::exec_static;
	}
}

class pred_currylist_3 extends Code {

	/*
	 * 
	 * currylist([],_3480,_3480,_3488):-cut(1,_3488).
	 * currylist([_3514|_3516],_3518,_3520,_3536):-curry(_3514,_3522,currylist(_3516
	 * ,_3518,[_3522|_3520],_3536)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_currylist_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_currylist_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_currylist_3::exec_pred_currylist_3__2);
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
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_currylist_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var5;
		local_aregs[2] = F(reducer.s32, var2.Deref(), var3.Deref(), F(reducer.s7, var5.Deref(), var4.Deref()),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_curry_2::exec_static;
	}
}

class pred_t_vars_2 extends Code {

	/*
	 * 
	 * t_vars(_3574,[[_3574]],_3590):-var(_3574,cut(1,_3590)).
	 * t_vars(_3624,[[]],_3632):-atomic(_3624,cut(1,_3632)).
	 * t_vars([_3662],[[]],_3678):-atomic(_3662,cut(1,_3678)).
	 * t_vars([_3708|_3710],[_3714,[_3720|_3722],[_3732|_3734]],_3760):-t_vars(_3708
	 * ,[_3720|_3722],t_vars(_3710,[_3732|_3734],unionv(_3720,_3732,_3714,_3760))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_t_vars_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_vars_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, F(reducer.s7, var1.Deref(), Const.Nil), Const.Nil))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_vars_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, Const.Nil, Const.Nil))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_vars_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_t_vars_2::exec_pred_t_vars_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, Const.Nil, Const.Nil))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_vars_2__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var3,
				F(reducer.s7, F(reducer.s7, var4, var5), F(reducer.s7, F(reducer.s7, var6, var7), Const.Nil))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(reducer.s7, var4.Deref(), var5.Deref());
		local_aregs[2] = F(reducer.s86, var2.Deref(), F(reducer.s7, var6.Deref(), var7.Deref()),
				F(reducer.s93, var4.Deref(), var6.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_t_vars_2::exec_static;
	}
}

class pred_t_trans_4 extends Code {

	/*
	 * 
	 * t_trans(_3808,_3804,_3810,[_3804|k],_3838):-or(atomic(_3804),(var(_3804),
	 * _3804\==_3808),cut(1,_3838)).
	 * t_trans(_3872,_3874,_3876,i,_3884):-termequal(_3872,_3874,cut(1,_3884)).
	 * t_trans(_3930,_3926,[_3920|_3922],[_3926|k],_3938):-notinv(_3930,_3920,_3938)
	 * . t_trans(_3990,[_3968|_3970],[_3974,_3980,_3986],_3992,_4052):-unify([_3996|
	 * _3998],_3980,unify([_4002|_4004],_3986,or(end(_3970),(_4004=[_4012,[_4018|
	 * _4020]],_4018\==[]),t_rule1(_3990,_3970,_4002,_3986,_3968,_3996,_3980,_3992,
	 * _4052)))).
	 * t_trans(_4146,[_4118,_4124|_4126],[_4130,_4136,_4142],_4148,_4192):-unify([
	 * _4152|_4154],_4136,unify([_4158,_4164,_4170],_4142,unify([_4176|_4178],_4170,
	 * unify([_4182|_4184],_4164,t_rule2(_4146,_4126,_4124,_4182,_4164,_4118,_4152,
	 * _4136,_4148,_4192))))).
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
		return (Function<PrologMachine, Function>) exec_pred_t_trans_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_trans_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__2);
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(reducer.s7, var2.Deref(), reducer.s54))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(reducer.s23, var2.Deref());
		local_aregs[1] = F(reducer.s3, F(reducer.s96, var2.Deref()), F(reducer.s17, var2.Deref(), var1.Deref()));
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_trans_4__2(PrologMachine mach) {
		mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__3);
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(reducer.s44)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_trans_4__3(PrologMachine mach) {
		mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__4);
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
		if (!((areg2).Unify(F(reducer.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(reducer.s7, var2.Deref(), reducer.s54))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_notinv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_trans_4__4(PrologMachine mach) {
		mach.FillAlternative(pred_t_trans_4::exec_pred_t_trans_4__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s7, var4, F(reducer.s7, var5, F(reducer.s7, var6, Const.Nil))))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var7)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(reducer.s7, var8, var9);
		local_aregs[1] = var5.Deref();
		local_aregs[2] = F(reducer.s92, F(reducer.s7, var10, var11), var6.Deref(),
				F(reducer.s65, F(reducer.s37, var3.Deref()),
						F(reducer.s3,
								F(reducer.s11, var11.Deref(),
										F(reducer.s7, var12, F(reducer.s7, F(reducer.s7, var13, var14), Const.Nil))),
								F(reducer.s17, var13.Deref(), Const.Nil)),
						F(reducer.s83, var1.Deref(), var3.Deref(), var10.Deref(), var6.Deref(), var2.Deref(),
								var8.Deref(), var5.Deref(), var7.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_unify_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_trans_4__5(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var2, F(reducer.s7, var3, var4)))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s7, var5, F(reducer.s7, var6, F(reducer.s7, var7, Const.Nil))))))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var8)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(reducer.s7, var9, var10);
		local_aregs[1] = var6.Deref();
		local_aregs[2] = F(reducer.s92, F(reducer.s7, var11, F(reducer.s7, var12, F(reducer.s7, var13, Const.Nil))),
				var7.Deref(),
				F(reducer.s92, F(reducer.s7, var14, var15), var13.Deref(),
						F(reducer.s92, F(reducer.s7, var16, var17), var12.Deref(),
								F(reducer.s84, var1.Deref(), var4.Deref(), var3.Deref(), var16.Deref(), var12.Deref(),
										var2.Deref(), var9.Deref(), var6.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_unify_2::exec_static;
	}
}

class pred_t_rule1_8 extends Code {

	/*
	 * 
	 * t_rule1(_4266,_4268,_4270,_4272,_4274,_4276,_4278,_4268,_4286):-notinv(_4266,
	 * _4270,termequal(_4266,_4274,cut(1,_4286))).
	 * t_rule1(_4348,_4344,_4350,_4352,_4354,_4356,_4358,[_4338,_4344|b],_4366):-
	 * notinv(_4348,_4350,inv(_4348,_4356,\==(_4348,_4354,cut(1,t_trans(_4348,_4354,
	 * _4358,_4338,_4366))))).
	 * t_rule1(_4448,_4450,_4452,_4454,_4438,_4456,_4458,[_4438,_4444|c],_4466):-
	 * notinv(_4448,_4456,cut(1,t_trans(_4448,_4450,_4454,_4444,_4466))).
	 * t_rule1(_4532,_4534,_4536,_4538,_4540,_4542,_4544,[_4522,_4528|s],_4552):-
	 * t_trans(_4532,_4534,_4538,_4528,t_trans(_4532,_4540,_4544,_4522,_4552)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8]} ;
		 */
		Term aregs[] = mach.RegPull(8);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_t_rule1_8__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule1_8__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[8];
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
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(reducer.s87, var1.Deref(), var5.Deref(),
				F(reducer.s0, new HeapChoice(mach.CUTB), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_notinv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule1_8__2(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[8];
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
		if (!((areg7).Unify(F(reducer.s7, var8, F(reducer.s7, var2.Deref(), reducer.s24)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(reducer.s51, var1.Deref(), var6.Deref(),
				F(reducer.s17, var1.Deref(), var5.Deref(), F(reducer.s0, new HeapChoice(mach.CUTB),
						F(reducer.s85, var1.Deref(), var5.Deref(), var7.Deref(), var8.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_notinv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule1_8__3(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule1_8::exec_pred_t_rule1_8__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[8];
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
		if (!((areg7).Unify(F(reducer.s7, var5.Deref(), F(reducer.s7, var8, reducer.s26)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var6.Deref();
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s85, var1.Deref(), var2.Deref(), var4.Deref(), var8.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_notinv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule1_8__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[8];
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
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(F(reducer.s7, var8, F(reducer.s7, var9, reducer.s69)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var9.Deref();
		local_aregs[4] = F(reducer.s85, var1.Deref(), var5.Deref(), var7.Deref(), var8.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null;
		return (Function<PrologMachine, Function>) pred_t_trans_4::exec_static;
	}
}

class pred_t_rule2_9 extends Code {

	/*
	 * 
	 * t_rule2(_4616,_4612,_4618,_4620,_4622,_4606,_4624,_4626,[_4606,_4612|c],_4634
	 * ):-termequal(_4616,_4618,notinv(_4616,_4624,cut(1,_4634))).
	 * t_rule2(_4698,_4694,_4700,_4702,_4704,_4706,_4708,_4710,[_4688,_4694|s],_4718
	 * ):-termequal(_4698,_4700,cut(1,t_trans(_4698,_4706,_4710,_4688,_4718))).
	 * t_rule2(_4792,_4788,_4794,_4796,_4798,_4776,_4800,_4802,[_4776,_4782,_4788|cp
	 * ],_4810):-inv(_4792,_4796,notinv(_4792,_4800,cut(1,t_trans(_4792,_4794,_4798,
	 * _4782,_4810)))).
	 * t_rule2(_4892,_4888,_4894,_4896,_4898,_4900,_4902,_4904,[_4876,_4882,_4888|sp
	 * ],_4912):-inv(_4892,_4896,cut(1,t_trans(_4892,_4894,_4898,_4882,t_trans(_4892
	 * ,_4900,_4904,_4876,_4912)))).
	 * t_rule2(_4986,_4984,_4982,_4988,_4990,_4992,_4994,_4996,[_4982|_4984],_5004):
	 * -termequal(_4986,_4992,cut(1,_5004)).
	 * t_rule2(_5066,_5062,_5056,_5068,_5070,_5072,_5074,_5076,[_5050,_5056,_5062|bp
	 * ],_5084):-t_trans(_5066,_5072,_5076,_5050,_5084).
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
		return (Function<PrologMachine, Function>) exec_pred_t_rule2_9__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule2_9__1(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__2);
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
		if (!((areg8).Unify(F(reducer.s7, var6.Deref(), F(reducer.s7, var2.Deref(), reducer.s26)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(reducer.s61, var1.Deref(), var7.Deref(),
				F(reducer.s0, new HeapChoice(mach.CUTB), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule2_9__2(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__3);
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
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(F(reducer.s7, var9, F(reducer.s7, var2.Deref(), reducer.s69)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s85, var1.Deref(), var6.Deref(), var8.Deref(), var9.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule2_9__3(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__4);
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
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8)
				.Unify(F(reducer.s7, var6.Deref(), F(reducer.s7, var9, F(reducer.s7, var2.Deref(), reducer.s30))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = F(reducer.s61, var1.Deref(), var7.Deref(), F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s85, var1.Deref(), var3.Deref(), var5.Deref(), var9.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_inv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule2_9__4(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__5);
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
		if (!((areg8).Unify(F(reducer.s7, var9, F(reducer.s7, var10, F(reducer.s7, var2.Deref(), reducer.s73))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s85, var1.Deref(), var3.Deref(), var5.Deref(), var10.Deref(),
						F(reducer.s85, var1.Deref(), var6.Deref(), var8.Deref(), var9.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_inv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule2_9__5(PrologMachine mach) {
		mach.FillAlternative(pred_t_rule2_9::exec_pred_t_rule2_9__6);
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
		if (!((areg8).Unify(F(reducer.s7, var3.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var6.Deref();
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_t_rule2_9__6(PrologMachine mach) {
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
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8)
				.Unify(F(reducer.s7, var9, F(reducer.s7, var3.Deref(), F(reducer.s7, var2.Deref(), reducer.s25))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var6.Deref();
		local_aregs[2] = var8.Deref();
		local_aregs[3] = var9.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = null;
		return (Function<PrologMachine, Function>) pred_t_trans_4::exec_static;
	}
}

class pred_make_list_2 extends Code {

	/*
	 * 
	 * make_list(_5126,_5126,_5134):-atomic(_5126,_5134).
	 * make_list([_5158,_5164|_5166],[_5164|_5172],_5180):-list_functor_name(_5166,
	 * make_list(_5158,_5172,_5180)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_make_list_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_make_list_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_make_list_2::exec_pred_make_list_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_make_list_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, F(reducer.s7, var2, var3)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var2.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(reducer.s58, var1.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_list_functor_name_1::exec_static;
	}
}

class pred_listify_2 extends Code {

	/*
	 * 
	 * listify(_5210,_5210,_5226):-or(var(_5210),atomic(_5210),cut(1,_5226)).
	 * listify(_5262,[_5258|_5260],_5272):-functor(_5262,_5258,_5264,listify_list(1,
	 * _5264,_5262,_5260,_5272)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_listify_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_listify_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_listify_2::exec_pred_listify_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(reducer.s96, var1.Deref());
		local_aregs[1] = F(reducer.s23, var1.Deref());
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_listify_2__2(PrologMachine mach) {
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
		if (!((areg1).Unify(F(reducer.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var4;
		local_aregs[3] = F(reducer.s57, reducer.posint1, var4.Deref(), var1.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_functor_3::exec_static;
	}
}

class pred_listify_list_4 extends Code {

	/*
	 * 
	 * listify_list(_5310,_5312,_5314,[],_5322):-smallerthan(_5312,_5310,cut(1,_5322
	 * )).
	 * listify_list(_5362,_5364,_5366,[_5358|_5360],_5384):-smallerorequal(_5362,
	 * _5364,cut(1,arg(_5362,_5366,_5368,listify(_5368,_5358,is(_5376,_5362+1,
	 * listify_list(_5376,_5364,_5366,_5360,_5384)))))).
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
		return (Function<PrologMachine, Function>) exec_pred_listify_list_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_listify_list_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_listify_list_4::exec_pred_listify_list_4__2);
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
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_listify_list_4__2(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(reducer.s7, var4, var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(reducer.s0, new HeapChoice(mach.CUTB),
				F(reducer.s20, var1.Deref(), var3.Deref(), var6, F(reducer.s56, var6.Deref(), var4.Deref(), F(
						reducer.s53, var7, F(reducer.s2, var1.Deref(), reducer.posint1),
						F(reducer.s57, var7.Deref(), var2.Deref(), var3.Deref(), var5.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_smallerorequal_2::exec_static;
	}
}

class pred_member_2 extends Code {

	/*
	 * 
	 * member(_5458,[_5458|_5460],_5470):-call(_5470).
	 * member(_5492,[_5488|_5490],_5500):-member(_5492,_5490,_5500).
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
		if (!((areg1).Unify(F(reducer.s7, var1.Deref(), var2))))
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
		if (!((areg1).Unify(F(reducer.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_member_2::exec_static;
	}
}

class pred_append_3 extends Code {

	/*
	 * 
	 * append([],_5524,_5524,_5534):-call(_5534).
	 * append([_5554|_5556],_5564,[_5554|_5562],_5572):-append(_5556,_5564,_5562,
	 * _5572).
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(reducer.s7, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_append_3::exec_static;
	}
}

class pred_intersectv_3 extends Code {

	/*
	 * 
	 * intersectv([],_5600,[],_5610):-call(_5610).
	 * intersectv([_5630|_5632],_5634,_5636,_5644):-intersectv_2(_5634,_5630,_5632,
	 * _5636,_5644).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_intersectv_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_intersectv_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_intersectv_3::exec_pred_intersectv_3__2);
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
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_intersectv_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_intersectv_2_4::exec_static;
	}
}

class pred_intersectv_2_4 extends Code {

	/*
	 * 
	 * intersectv_2([],_5674,_5676,[],_5686):-call(_5686).
	 * intersectv_2([_5708|_5710],_5712,_5714,_5716,_5726):-compare(_5718,_5712,
	 * _5708,intersectv_3(_5718,_5712,_5714,_5708,_5710,_5716,_5726)).
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
		return (Function<PrologMachine, Function>) exec_pred_intersectv_2_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_intersectv_2_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_intersectv_2_4::exec_pred_intersectv_2_4__2);
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

	public static Function<PrologMachine, Function> exec_pred_intersectv_2_4__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6;
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var1.Deref();
		local_aregs[3] = F(reducer.s49, var6.Deref(), var3.Deref(), var4.Deref(), var1.Deref(), var2.Deref(),
				var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_intersectv_3_6 extends Code {

	/*
	 * 
	 * intersectv_3(<,_5772,_5774,_5776,_5778,_5780,_5788):-intersectv_2(_5774,_5776
	 * ,_5778,_5780,_5788).
	 * intersectv_3(=,_5826,_5830,_5832,_5834,[_5826|_5828],_5842):-intersectv(_5830
	 * ,_5834,_5828,_5842).
	 * intersectv_3(>,_5876,_5878,_5880,_5882,_5884,_5892):-intersectv_2(_5882,_5876
	 * ,_5878,_5884,_5892).
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
		return (Function<PrologMachine, Function>) exec_pred_intersectv_3_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_intersectv_3_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__2);
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
		if (!((areg0).Unify(reducer.s10)))
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
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = null;
		return (Function<PrologMachine, Function>) pred_intersectv_2_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_intersectv_3_6__2(PrologMachine mach) {
		mach.FillAlternative(pred_intersectv_3_6::exec_pred_intersectv_3_6__3);
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
		if (!((areg0).Unify(reducer.s11)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(F(reducer.s7, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = var5.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_intersectv_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_intersectv_3_6__3(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(reducer.s15)))
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
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = null;
		return (Function<PrologMachine, Function>) pred_intersectv_2_4::exec_static;
	}
}

class pred_intersectv_list_2 extends Code {

	/*
	 * 
	 * intersectv_list([],[],_5936):-call(_5936).
	 * intersectv_list([_5954|_5956],_5958,_5966):-intersectv_list(_5956,_5954,_5958
	 * ,_5966).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_intersectv_list_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_intersectv_list_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_intersectv_list_2::exec_pred_intersectv_list_2__2);
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

	public static Function<PrologMachine, Function> exec_pred_intersectv_list_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_intersectv_list_3::exec_static;
	}
}

class pred_sym_dcg_arrow_2 extends Code {

	/*
	 * 
	 * -->(intersectv_list([]),[],_6004):-call(_6004).
	 * -->(intersectv_list([_6022|_6024]),(intersectv(_6022),intersectv_list(_6024))
	 * ,_6052):-call(_6052).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_sym_dcg_arrow_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(F(reducer.s50, Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s50, F(reducer.s7, var1, var2)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s3, F(reducer.s47, var1.Deref()), F(reducer.s50, var2.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_diffv_3 extends Code {

	/*
	 * 
	 * diffv([],_6068,[],_6078):-call(_6078).
	 * diffv([_6098|_6100],_6102,_6104,_6112):-diffv_2(_6102,_6098,_6100,_6104,_6112
	 * ).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_diffv_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_diffv_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_diffv_3::exec_pred_diffv_3__2);
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
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_diffv_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_diffv_2_4::exec_static;
	}
}

class pred_diffv_2_4 extends Code {

	/*
	 * 
	 * diffv_2([],_6144,_6146,[_6144|_6146],_6156):-call(_6156).
	 * diffv_2([_6178|_6180],_6182,_6184,_6186,_6196):-compare(_6188,_6182,_6178,
	 * diffv_3(_6188,_6182,_6184,_6178,_6180,_6186,_6196)).
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
		return (Function<PrologMachine, Function>) exec_pred_diffv_2_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_diffv_2_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_diffv_2_4::exec_pred_diffv_2_4__2);
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
		if (!((areg3).Unify(F(reducer.s7, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_diffv_2_4__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6;
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var1.Deref();
		local_aregs[3] = F(reducer.s36, var6.Deref(), var3.Deref(), var4.Deref(), var1.Deref(), var2.Deref(),
				var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_diffv_3_6 extends Code {

	/*
	 * 
	 * diffv_3(<,_6244,_6248,_6250,_6252,[_6244|_6246],_6266):-diffv(_6248,[_6250|
	 * _6252],_6246,_6266).
	 * diffv_3(=,_6300,_6302,_6304,_6306,_6308,_6316):-diffv(_6302,_6306,_6308,_6316
	 * ). diffv_3(>,_6350,_6352,_6354,_6356,_6358,_6366):-diffv_2(_6356,_6350,_6352,
	 * _6358,_6366).
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
		return (Function<PrologMachine, Function>) exec_pred_diffv_3_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_diffv_3_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__2);
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
		if (!((areg0).Unify(reducer.s10)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(F(reducer.s7, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(reducer.s7, var3.Deref(), var4.Deref());
		local_aregs[2] = var5.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_diffv_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_diffv_3_6__2(PrologMachine mach) {
		mach.FillAlternative(pred_diffv_3_6::exec_pred_diffv_3_6__3);
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
		if (!((areg0).Unify(reducer.s11)))
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
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = var5.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_diffv_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_diffv_3_6__3(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(reducer.s15)))
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
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = null;
		return (Function<PrologMachine, Function>) pred_diffv_2_4::exec_static;
	}
}

class pred_unionv_3 extends Code {

	/*
	 * 
	 * unionv([],_6402,_6402,_6412):-call(_6412).
	 * unionv([_6432|_6434],_6436,_6438,_6446):-unionv_2(_6436,_6432,_6434,_6438,
	 * _6446).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_unionv_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_unionv_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_unionv_3::exec_pred_unionv_3__2);
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

	public static Function<PrologMachine, Function> exec_pred_unionv_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_unionv_2_4::exec_static;
	}
}

class pred_unionv_2_4 extends Code {

	/*
	 * 
	 * unionv_2([],_6478,_6480,[_6478|_6480],_6490):-call(_6490).
	 * unionv_2([_6512|_6514],_6516,_6518,_6520,_6530):-compare(_6522,_6516,_6512,
	 * unionv_3(_6522,_6516,_6518,_6512,_6514,_6520,_6530)).
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
		return (Function<PrologMachine, Function>) exec_pred_unionv_2_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_unionv_2_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_unionv_2_4::exec_pred_unionv_2_4__2);
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
		if (!((areg3).Unify(F(reducer.s7, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_unionv_2_4__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6;
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var1.Deref();
		local_aregs[3] = F(reducer.s95, var6.Deref(), var3.Deref(), var4.Deref(), var1.Deref(), var2.Deref(),
				var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_unionv_3_6 extends Code {

	/*
	 * 
	 * unionv_3(<,_6578,_6582,_6584,_6586,[_6578|_6580],_6594):-unionv_2(_6582,_6584
	 * ,_6586,_6580,_6594).
	 * unionv_3(=,_6632,_6636,_6638,_6640,[_6632|_6634],_6648):-unionv(_6636,_6640,
	 * _6634,_6648).
	 * unionv_3(>,_6688,_6690,_6684,_6692,[_6684|_6686],_6700):-unionv_2(_6692,_6688
	 * ,_6690,_6686,_6700).
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
		return (Function<PrologMachine, Function>) exec_pred_unionv_3_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_unionv_3_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__2);
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
		if (!((areg0).Unify(reducer.s10)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(F(reducer.s7, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = null;
		return (Function<PrologMachine, Function>) pred_unionv_2_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_unionv_3_6__2(PrologMachine mach) {
		mach.FillAlternative(pred_unionv_3_6::exec_pred_unionv_3_6__3);
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
		if (!((areg0).Unify(reducer.s11)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(F(reducer.s7, var1.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = var5.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_unionv_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_unionv_3_6__3(PrologMachine mach) {
		mach.RemoveChoice();
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
		if (!((areg0).Unify(reducer.s15)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(F(reducer.s7, var3.Deref(), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = var5.Deref();
		local_aregs[4] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = null;
		return (Function<PrologMachine, Function>) pred_unionv_2_4::exec_static;
	}
}

class pred_subsetv_2 extends Code {

	/*
	 * 
	 * subsetv([],_6736,_6746):-call(_6746).
	 * subsetv([_6764|_6766],[_6770|_6772],_6782):-compare(_6774,_6764,_6770,
	 * subsetv_2(_6774,_6764,_6766,_6772,_6782)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_subsetv_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_subsetv_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_subsetv_2::exec_pred_subsetv_2__2);
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

	public static Function<PrologMachine, Function> exec_pred_subsetv_2__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(reducer.s7, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = F(reducer.s76, var5.Deref(), var1.Deref(), var2.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_subsetv_2_4 extends Code {

	/*
	 * 
	 * subsetv_2(=,_6820,_6822,_6824,_6832):-subsetv(_6822,_6824,_6832).
	 * subsetv_2(>,_6860,_6862,_6864,_6878):-subsetv([_6860|_6862],_6864,_6878).
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
		return (Function<PrologMachine, Function>) exec_pred_subsetv_2_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_subsetv_2_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_subsetv_2_4::exec_pred_subsetv_2_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s11)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_subsetv_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_subsetv_2_4__2(PrologMachine mach) {
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
		if (!((areg0).Unify(reducer.s15)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(reducer.s7, var1.Deref(), var2.Deref());
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_subsetv_2::exec_static;
	}
}

class pred_small_subsetv_2 extends Code {

	/*
	 * 
	 * small_subsetv([],_6906,_6916):-call(_6916).
	 * small_subsetv([_6934|_6936],_6938,_6946):-inv(_6934,_6938,small_subsetv(_6936
	 * ,_6938,_6946)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_small_subsetv_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_small_subsetv_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_small_subsetv_2::exec_pred_small_subsetv_2__2);
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

	public static Function<PrologMachine, Function> exec_pred_small_subsetv_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(reducer.s70, var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_inv_2::exec_static;
	}
}

class pred_inv_2 extends Code {

	/*
	 * 
	 * inv(_6984,[_6980|_6982],_6994):-compare(_6986,_6984,_6980,inv_2(_6986,_6984,
	 * _6982,_6994)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_inv_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_inv_2__1(PrologMachine mach) {
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
		if (!((areg1).Unify(F(reducer.s7, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = F(reducer.s52, var4.Deref(), var1.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_inv_2_3 extends Code {

	/*
	 * 
	 * inv_2(=,_7030,_7032,_7042):-call(_7042).
	 * inv_2(>,_7060,_7062,_7070):-inv(_7060,_7062,_7070).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_inv_2_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_inv_2_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_inv_2_3::exec_pred_inv_2_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s11)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_inv_2_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s15)))
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
		return (Function<PrologMachine, Function>) pred_inv_2::exec_static;
	}
}

class pred_notinv_2 extends Code {

	/*
	 * 
	 * notinv(_7096,_7098,_7106):-notinv_2(_7098,_7096,_7106).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_notinv_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_notinv_2__1(PrologMachine mach) {
		mach.RemoveChoice();
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
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_notinv_2_2::exec_static;
	}
}

class pred_notinv_2_2 extends Code {

	/*
	 * 
	 * notinv_2([],_7130,_7140):-call(_7140).
	 * notinv_2([_7158|_7160],_7162,_7172):-compare(_7164,_7162,_7158,notinv_3(_7164
	 * ,_7162,_7160,_7172)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_notinv_2_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_notinv_2_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_notinv_2_2::exec_pred_notinv_2_2__2);
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

	public static Function<PrologMachine, Function> exec_pred_notinv_2_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(reducer.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var1.Deref();
		local_aregs[3] = F(reducer.s63, var4.Deref(), var3.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_notinv_3_3 extends Code {

	/*
	 * 
	 * notinv_3(<,_7208,_7210,_7220):-call(_7220).
	 * notinv_3(>,_7238,_7240,_7248):-notinv_2(_7240,_7238,_7248).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_notinv_3_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_notinv_3_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_notinv_3_3::exec_pred_notinv_3_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s10)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_notinv_3_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(reducer.s15)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_notinv_2_2::exec_static;
	}
}
