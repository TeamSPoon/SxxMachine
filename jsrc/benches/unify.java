import java.util.function.Function;

class unify /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("!");
	static Const s2 = Const.Intern("+");
	static Const s3 = Const.Intern(",");
	static Const s4 = Const.Intern("-");
	static Const s5 = Const.Intern("-->");
	static Const s6 = Const.Intern(".");
	static Const s7 = Const.Intern("/");
	static Const s8 = Const.Intern(":-");
	static Const s9 = Const.Intern("<");
	static Const s10 = Const.Intern("=");
	static Const s11 = Const.Intern("=<");
	static Const s12 = Const.Intern(">");
	static Const s13 = Const.Intern("\\+");
	static Const s14 = Const.Intern("^");
	static Const s15 = Const.Intern("add");
	static Const s16 = Const.Intern("arg");
	static Const s17 = Const.Intern("atomic");
	static Const s18 = Const.Intern("block");
	static Const s19 = Const.Intern("block_args");
	static Const s20 = Const.Intern("call");
	static Const s21 = Const.Intern("compare");
	static Const s22 = Const.Intern("cons");
	static Const s23 = Const.Intern("cut");
	static Const s24 = Const.Intern("deref");
	static Const s25 = Const.Intern("equal");
	static Const s26 = Const.Intern("fail");
	static Const s27 = Const.Intern("functor");
	static Const s28 = Const.Intern("h");
	static Const s29 = Const.Intern("in_2");
	static Const s30 = Const.Intern("incl");
	static Const s31 = Const.Intern("incl_2");
	static Const s32 = Const.Intern("incl_3");
	static Const s33 = Const.Intern("init");
	static Const s34 = Const.Intern("init_var");
	static Const s35 = Const.Intern("is");
	static Const s36 = Const.Intern("jump");
	static Const s37 = Const.Intern("label");
	static Const s38 = Const.Intern("last");
	static Const s39 = Const.Intern("main");
	static Const s40 = Const.Intern("make_slots");
	static Const s41 = Const.Intern("make_word");
	static Const s42 = Const.Intern("move");
	static Const s43 = Const.Intern("my_compound");
	static Const s44 = Const.Intern("myin");
	static Const s45 = Const.Intern("nonlast");
	static Const s46 = Const.Intern("nonvar");
	static Const s47 = Const.Intern("not");
	static Const s48 = Const.Intern("size");
	static Const s49 = Const.Intern("size_args");
	static Const s50 = Const.Intern("structure");
	static Const s51 = Const.Intern("switch");
	static Const s52 = Const.Intern("tatm");
	static Const s53 = Const.Intern("termtag");
	static Const s54 = Const.Intern("tlst");
	static Const s55 = Const.Intern("top");
	static Const s56 = Const.Intern("trail");
	static Const s57 = Const.Intern("tstr");
	static Const s58 = Const.Intern("tvar");
	static Const s59 = Const.Intern("u");
	static Const s60 = Const.Intern("unify");
	static Const s61 = Const.Intern("unify_arg");
	static Const s62 = Const.Intern("unify_args");
	static Const s63 = Const.Intern("unify_block");
	static Const s64 = Const.Intern("unify_readmode");
	static Const s65 = Const.Intern("unify_var");
	static Const s66 = Const.Intern("unify_writemode");
	static Const s67 = Const.Intern("uninit");
	static Const s68 = Const.Intern("var");
	static Const s69 = Const.Intern("{}");
	static Int negint1 = Term.Number(-1);
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
}

class pred_top_0 extends Code {

	/*
	 * 
	 * top(_12912):-main(_12890,_12912).
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
		Var var1 = V(mach);
		local_aregs[0] = var1;
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_main_1::exec_static;
	}
}

class pred_main_1 extends Code {

	/*
	 * 
	 * main(_12976,_13046):-u(_12992,[1,_12986],[_12992],_13004,size(_13004,0,_12976
	 * ,_13046)).
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
		local_aregs[0] = var2;
		local_aregs[1] = F(unify.s6, unify.posint1, F(unify.s6, var3, Const.Nil));
		local_aregs[2] = F(unify.s6, var2.Deref(), Const.Nil);
		local_aregs[3] = var4;
		local_aregs[4] = F(unify.s48, var4.Deref(), unify.posint0, var1.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_u_4::exec_static;
	}
}

class pred_u_4 extends Code {

	/*
	 * 
	 * u(_13230,_13232,_13234,_13236,_13296):-unify(_13230,_13232,_13234,_13246,
	 * _13236,[],_13296).
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
		return (Function<PrologMachine, Function>) exec_pred_u_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_u_4__1(PrologMachine mach) {
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
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var5;
		local_aregs[4] = var4.Deref();
		local_aregs[5] = Const.Nil;
		local_aregs[6] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_unify_6::exec_static;
	}
}

class pred_sym_dcg_arrow_2 extends Code {

	/*
	 * 
	 * -->(unify(_13474,_13476,_13478,_13480),({\+myin(_13474,_13478)},!,uninit(
	 * _13474,_13476,_13478,_13480)),_13544):-call(_13544).
	 * -->(unify(_13628,_13630,_13632,_13634),({myin(_13628,_13632)},!,init(_13628,
	 * _13630,_13632,_13634,nonlast,_13658)),_13698):-call(_13698).
	 * -->(uninit(_13782,_13784,_13786,_13788),({my_compound(_13784)},!,[move(_13800
	 * ^h,_13782)],{termtag(_13784,_13800)},unify_block(nonlast,_13784,_13832,_13786
	 * ,_13836,_13838),{incl(_13782,_13836,_13788)}),_13908):-call(_13908).
	 * -->(uninit(_13992,_13994,_13996,_13998),({atomic(_13994)},!,[move(tatm^_13994
	 * ,_13992)],{incl(_13992,_13996,_13998)}),_14082):-call(_14082).
	 * -->(uninit(_14166,_14168,_14170,_14172),({var(_14168)},!,unify_var(_14166,
	 * _14168,_14170,_14172)),_14230):-call(_14230).
	 * -->(init(_14314,_14316,_14318,_14320,_14322,_14324),({nonvar(_14316)},!,{
	 * termtag(_14316,_14338)},[deref(_14314),switch(_14338,_14314,[trail(_14314)|
	 * _14362],_14372,fail)],{unify_writemode(_14314,_14316,_14318,_14322,_14324,
	 * _14362,[])},{unify_readmode(_14314,_14316,_14318,_14320,_14324,_14372,[])}),
	 * _14478):-call(_14478).
	 * -->(init(_14562,_14564,_14566,_14568,_14570,_14572),({var(_14564)},!,
	 * unify_var(_14562,_14564,_14566,_14568)),_14630):-call(_14630).
	 * -->(unify_var(_14714,_14716,_14718,_14718),({myin(_14714,_14718),myin(_14716,
	 * _14718)},!,[unify(_14714,_14716,fail)]),_14796):-call(_14796).
	 * -->(unify_var(_14880,_14882,_14884,_14886),({myin(_14880,_14884),\+myin(
	 * _14882,_14884)},!,[move(_14880,_14882)],{incl(_14882,_14884,_14886)}),_14982)
	 * :-call(_14982).
	 * -->(unify_var(_15066,_15068,_15070,_15072),({\+myin(_15066,_15070),myin(
	 * _15068,_15070)},!,[move(_15068,_15066)],{incl(_15066,_15070,_15072)}),_15168)
	 * :-call(_15168).
	 * -->(unify_var(_15252,_15254,_15256,_15258),({\+myin(_15252,_15256),\+myin(
	 * _15254,_15256)},!,[move(tvar^h,_15252),move(tvar^h,_15254),add(1,h),move(
	 * _15254,[h-1])],{incl(_15252,_15256,_15368),incl(_15254,_15368,_15258)}),
	 * _15432):-call(_15432).
	 * -->(unify_readmode(_15516,_15518,_15520,_15522,_15524),({structure(_15518)},!
	 * ,[equal([_15516],tatm^(_15542/_15544),fail)],{functor(_15518,_15542,_15544)},
	 * unify_args(1,_15544,_15518,_15520,_15522,0,_15516,_15524)),_15646):-call(
	 * _15646).
	 * -->(unify_readmode(_15730,_15732,_15734,_15736,_15738),({cons(_15732)},!,
	 * unify_args(1,2,_15732,_15734,_15736,-1,_15730,_15738)),_15804):-call(_15804).
	 * -->(unify_readmode(_15888,_15890,_15892,_15892,_15896),({atomic(_15890)},!,[
	 * equal(_15888,tatm^_15890,fail)]),_15964):-call(_15964).
	 * -->(unify_args(_16048,_16050,_16052,_16054,_16054,_16058,_16060,_16062),({
	 * _16048>_16050},!),_16106):-call(_16106).
	 * -->(unify_args(_16196,_16198,_16200,_16202,_16204,_16206,_16208,[_16190|
	 * _16192]),({_16196=_16198},!,unify_arg(_16196,_16200,_16202,_16204,_16206,
	 * _16208,last,_16192)),_16278):-call(_16278).
	 * -->(unify_args(_16362,_16364,_16366,_16368,_16370,_16372,_16374,_16376),({
	 * _16362<_16364},!,unify_arg(_16362,_16366,_16368,_16396,_16372,_16374,nonlast,
	 * _16404),{_16414 is
	 * _16362+1},unify_args(_16414,_16364,_16366,_16396,_16370,_16372,_16374,_16376)
	 * ),_16490):-call(_16490).
	 * -->(unify_arg(_16574,_16576,_16578,_16580,_16582,_16584,_16586,_16588),([move
	 * ([_16584+_16594],_16606)],{_16594 is
	 * _16574+_16582,incl(_16606,_16578,_16632),arg(_16574,_16576,_16640)},init(
	 * _16606,_16640,_16632,_16580,_16586,_16588)),_16710):-call(_16710).
	 * -->(unify_writemode(_16794,_16796,_16798,_16800,_16802),({my_compound(_16796)
	 * },!,[move(_16814^h,[_16794])],{termtag(_16796,_16814)},unify_block(_16800,
	 * _16796,_16852,_16798,_16856,_16802)),_16910):-call(_16910).
	 * -->(unify_writemode(_16994,_16996,_16998,_17000,_17002),({atomic(_16996)},!,[
	 * move(tatm^_16996,[_16994])]),_17074):-call(_17074).
	 * -->(unify_block(last,_17166,_17168,_17170,_17170,[_17158|_17160]),(!,[add(
	 * _17168,h),jump(_17158)],{size(_17166,0,_17168)}),_17248):-call(_17248).
	 * -->(unify_block(nonlast,_17340,_17342,_17344,_17346,[_17332|_17334]),(!,[add(
	 * _17342,h)],{size(_17340,0,_17342),_17376 is
	 * -_17342},block(_17340,_17376,0,_17344,_17346,_17334)),_17448):-call(_17448).
	 * -->(block(_17532,_17534,_17536,_17538,_17540,_17542),({structure(_17532)},!,[
	 * move(tatm^(_17554/_17556),[h+_17534])],{functor(_17532,_17554,_17556),_17610
	 * is _17534+_17556+1,_17622 is
	 * _17534+1},make_slots(1,_17556,_17532,_17622,_17652,_17538,_17656),block_args(
	 * 1,_17556,_17532,_17610,_17536,_17652,_17656,_17540,_17542)),_17734):-call(
	 * _17734).
	 * -->(block(_17818,_17820,_17822,_17824,_17826,_17828),({cons(_17818)},!,{
	 * _17846 is
	 * _17820+2},make_slots(1,2,_17818,_17820,_17864,_17824,_17868),block_args(1,2,
	 * _17818,_17846,_17822,_17864,_17868,_17826,_17828)),_17940):-call(_17940).
	 * -->(block(_18024,_18026,_18026,_18030,_18030,[]),({atomic(_18024)},!),_18076)
	 * :-call(_18076).
	 * -->(block(_18160,_18162,_18162,_18166,_18166,[]),({var(_18160)},!),_18212):-
	 * call(_18212).
	 * -->(block_args(_18296,_18298,_18300,_18302,_18302,[],_18308,_18308,[]),({
	 * _18296>_18298},!),_18356):-call(_18356).
	 * -->(block_args(_18452,_18454,_18456,_18440,_18460,[_18440],_18464,_18466,[
	 * _18446|_18448]),({_18452=_18454},!,[label(_18446)],{arg(_18452,_18456,_18496)
	 * },block(_18496,_18440,_18460,_18464,_18466,_18448)),_18566):-call(_18566).
	 * -->(block_args(_18656,_18658,_18660,_18650,_18664,[_18650|_18652],_18668,
	 * _18670,_18672),({_18656<_18658},!,{arg(_18656,_18660,_18690)},block(_18690,
	 * _18650,_18702,_18668,_18706,_18708),{_18718 is
	 * _18656+1},block_args(_18718,_18658,_18660,_18702,_18664,_18652,_18706,_18670,
	 * _18672)),_18802):-call(_18802).
	 * -->(make_slots(_18886,_18888,_18890,_18892,[],_18896,_18896),({_18886>_18888}
	 * ,!),_18942):-call(_18942).
	 * -->(make_slots(_19032,_19034,_19036,_19038,[_19026|_19028],_19042,_19044),({
	 * _19032=<_19034},!,{arg(_19032,_19036,_19062)},init_var(_19062,_19038,_19042),
	 * {incl(_19062,_19042,_19082),make_word(_19062,_19026,_19090)},[move(_19090,[h+
	 * _19038])],{_19134 is _19038+1,_19146 is
	 * _19032+1},make_slots(_19146,_19034,_19036,_19134,_19028,_19082,_19044)),
	 * _19244):-call(_19244).
	 * -->(init_var(_19328,_19330,_19332),({var(_19328),\+myin(_19328,_19332)},!,[
	 * move(tvar^(h+_19330),_19328)]),_19420):-call(_19420).
	 * -->(init_var(_19504,_19506,_19508),({var(_19504),myin(_19504,_19508)},!),
	 * _19562):-call(_19562).
	 * -->(init_var(_19646,_19648,_19650),({nonvar(_19646)},!),_19692):-call(_19692)
	 * .
	 * -->(size(_20372),({structure(_20372)},!,{functor(_20372,_20386,_20388)},add(1
	 * ),add(_20388),size_args(1,_20388,_20372)),_20466):-call(_20466).
	 * -->(size(_20550),({cons(_20550)},!,add(2),size_args(1,2,_20550)),_20616):-
	 * call(_20616). -->(size(_20700),({atomic(_20700)},!),_20742):-call(_20742).
	 * -->(size(_20826),({var(_20826)},!),_20868):-call(_20868).
	 * -->(size_args(_20952,_20954,_20956),({_20952>_20954},!),_21000):-call(_21000)
	 * . -->(size_args(_21084,_21086,_21088),({_21084=<_21086},!,{arg(_21084,_21088,
	 * _21106)},size(_21106),{_21124 is
	 * _21084+1},size_args(_21124,_21086,_21088)),_21196):-call(_21196).
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
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s60, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s13, F(unify.s44, var1.Deref(), var3.Deref()))),
				F(unify.s3, unify.s1, F(unify.s67, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s60, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s44, var1.Deref(), var3.Deref())), F(unify.s3, unify.s1,
				F(unify.s33, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref(), unify.s45, var5))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__4);
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
		if (!((areg0).Unify(F(unify.s67, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s43, var2.Deref())),
				F(unify.s3, unify.s1,
						F(unify.s3, F(unify.s6, F(unify.s42, F(unify.s14, var5, unify.s28), var1.Deref()), Const.Nil),
								F(unify.s3, F(unify.s69, F(unify.s53, var2.Deref(), var5.Deref())), F(unify.s3,
										F(unify.s63, unify.s45, var2.Deref(), var6, var3.Deref(), var7, var8),
										F(unify.s69, F(unify.s30, var1.Deref(), var7.Deref(), var4.Deref()))))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s67, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s17, var2.Deref())), F(unify.s3, unify.s1,
				F(unify.s3, F(unify.s6, F(unify.s42, F(unify.s14, unify.s52, var2.Deref()), var1.Deref()), Const.Nil),
						F(unify.s69, F(unify.s30, var1.Deref(), var3.Deref(), var4.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s67, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s68, var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s65, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s33, var1, var2, var3, var4, var5, var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s46, var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s3, F(unify.s69, F(unify.s53, var2.Deref(), var7)),
						F(unify.s3, F(unify.s6, F(unify.s24, var1.Deref()), F(unify.s6,
								F(unify.s51, var7.Deref(), var1.Deref(), F(unify.s6, F(unify.s56, var1.Deref()), var8),
										var9, unify.s26),
								Const.Nil)),
								F(unify.s3,
										F(unify.s69,
												F(unify.s66, var1.Deref(), var2.Deref(), var3.Deref(), var5.Deref(),
														var6.Deref(), var8.Deref(), Const.Nil)),
										F(unify.s69, F(unify.s64, var1.Deref(), var2.Deref(), var3.Deref(),
												var4.Deref(), var6.Deref(), var9.Deref(), Const.Nil))))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__7(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__8);
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
		if (!((areg0).Unify(F(unify.s33, var1, var2, var3, var4, var5, var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s68, var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s65, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__8(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s65, var1, var2, var3, var3.Deref()))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3,
				F(unify.s69,
						F(unify.s3, F(unify.s44, var1.Deref(), var3.Deref()),
								F(unify.s44, var2.Deref(), var3.Deref()))),
				F(unify.s3, unify.s1, F(unify.s6, F(unify.s60, var1.Deref(), var2.Deref(), unify.s26), Const.Nil))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__9(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s65, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3,
				F(unify.s69,
						F(unify.s3, F(unify.s44, var1.Deref(), var3.Deref()),
								F(unify.s13, F(unify.s44, var2.Deref(), var3.Deref())))),
				F(unify.s3, unify.s1, F(unify.s3, F(unify.s6, F(unify.s42, var1.Deref(), var2.Deref()), Const.Nil),
						F(unify.s69, F(unify.s30, var2.Deref(), var3.Deref(), var4.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__10(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s65, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3,
				F(unify.s69,
						F(unify.s3, F(unify.s13, F(unify.s44, var1.Deref(), var3.Deref())),
								F(unify.s44, var2.Deref(), var3.Deref()))),
				F(unify.s3, unify.s1, F(unify.s3, F(unify.s6, F(unify.s42, var2.Deref(), var1.Deref()), Const.Nil),
						F(unify.s69, F(unify.s30, var1.Deref(), var3.Deref(), var4.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__11(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s65, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3,
				F(unify.s69,
						F(unify.s3, F(unify.s13, F(unify.s44, var1.Deref(), var3.Deref())),
								F(unify.s13, F(unify.s44, var2.Deref(), var3.Deref())))),
				F(unify.s3, unify.s1, F(unify.s3, F(unify.s6,
						F(unify.s42, F(unify.s14, unify.s58, unify.s28), var1.Deref()),
						F(unify.s6, F(unify.s42, F(unify.s14, unify.s58, unify.s28), var2.Deref()),
								F(unify.s6, F(unify.s15, unify.posint1, unify.s28),
										F(unify.s6,
												F(unify.s42, var2.Deref(),
														F(unify.s6, F(unify.s4, unify.s28, unify.posint1), Const.Nil)),
												Const.Nil)))),
						F(unify.s69, F(unify.s3, F(unify.s30, var1.Deref(), var3.Deref(), var5),
								F(unify.s30, var2.Deref(), var5.Deref(), var4.Deref())))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__12(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__13);
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
		if (!((areg0).Unify(F(unify.s64, var1, var2, var3, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1)
				.Unify(F(unify.s3, F(unify.s69, F(unify.s50, var2.Deref())),
						F(unify.s3, unify.s1, F(unify.s3,
								F(unify.s6,
										F(unify.s25, F(unify.s6, var1.Deref(), Const.Nil),
												F(unify.s14, unify.s52, F(unify.s7, var6, var7)), unify.s26),
										Const.Nil),
								F(unify.s3, F(unify.s69, F(unify.s27, var2.Deref(), var6.Deref(), var7.Deref())),
										F(unify.s62, unify.posint1, var7.Deref(), var2.Deref(), var3.Deref(),
												var4.Deref(), unify.posint0, var1.Deref(), var5.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__13(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s64, var1, var2, var3, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s22, var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s62, unify.posint1, unify.posint2, var2.Deref(), var3.Deref(),
						var4.Deref(), unify.negint1, var1.Deref(), var5.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__14(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s64, var1, var2, var3, var3.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s17, var2.Deref())), F(unify.s3, unify.s1, F(unify.s6,
				F(unify.s25, var1.Deref(), F(unify.s14, unify.s52, var2.Deref()), unify.s26), Const.Nil))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__15(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__16);
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
		if (!((areg0).Unify(F(unify.s62, var1, var2, var3, var4, var4.Deref(), var5, var6, var7))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__16(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s62, var1, var2, var3, var4, var5, var6, var7, F(unify.s6, var8, var9)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s10, var1.Deref(), var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s61, var1.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref(),
						var7.Deref(), unify.s38, var9.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__17(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s62, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1)
				.Unify(F(unify.s3, F(unify.s69, F(unify.s9, var1.Deref(), var2.Deref())),
						F(unify.s3, unify.s1, F(unify.s3,
								F(unify.s61, var1.Deref(), var3.Deref(), var4.Deref(), var9, var6.Deref(), var7.Deref(),
										unify.s45, var10),
								F(unify.s3, F(unify.s69, F(unify.s35, var11, F(unify.s2, var1.Deref(), unify.posint1))),
										F(unify.s62, var11.Deref(), var2.Deref(), var3.Deref(), var9.Deref(),
												var5.Deref(), var6.Deref(), var7.Deref(), var8.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__18(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s61, var1, var2, var3, var4, var5, var6, var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3,
				F(unify.s6, F(unify.s42, F(unify.s6, F(unify.s2, var6.Deref(), var9), Const.Nil), var10), Const.Nil),
				F(unify.s3,
						F(unify.s69,
								F(unify.s3, F(unify.s35, var9.Deref(), F(unify.s2, var1.Deref(), var5.Deref())),
										F(unify.s3, F(unify.s30, var10.Deref(), var3.Deref(), var11),
												F(unify.s16, var1.Deref(), var2.Deref(), var12)))),
						F(unify.s33, var10.Deref(), var12.Deref(), var11.Deref(), var4.Deref(), var7.Deref(),
								var8.Deref()))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__19(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__20);
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
		if (!((areg0).Unify(F(unify.s66, var1, var2, var3, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s43, var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s3,
						F(unify.s6, F(unify.s42, F(unify.s14, var6, unify.s28), F(unify.s6, var1.Deref(), Const.Nil)),
								Const.Nil),
						F(unify.s3, F(unify.s69, F(unify.s53, var2.Deref(), var6.Deref())),
								F(unify.s63, var4.Deref(), var2.Deref(), var7, var3.Deref(), var8, var5.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__20(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s66, var1, var2, var3, var4, var5))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s17, var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s6,
						F(unify.s42, F(unify.s14, unify.s52, var2.Deref()), F(unify.s6, var1.Deref(), Const.Nil)),
						Const.Nil))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__21(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s63, unify.s38, var1, var2, var3, var3.Deref(), F(unify.s6, var4, var5)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, unify.s1,
				F(unify.s3,
						F(unify.s6, F(unify.s15, var2.Deref(), unify.s28),
								F(unify.s6, F(unify.s36, var4.Deref()), Const.Nil)),
						F(unify.s69, F(unify.s48, var1.Deref(), unify.posint0, var2.Deref())))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__22(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__23);
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
		if (!((areg0).Unify(F(unify.s63, unify.s45, var1, var2, var3, var4, F(unify.s6, var5, var6)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, unify.s1,
				F(unify.s3, F(unify.s6, F(unify.s15, var2.Deref(), unify.s28), Const.Nil),
						F(unify.s3,
								F(unify.s69,
										F(unify.s3, F(unify.s48, var1.Deref(), unify.posint0, var2.Deref()),
												F(unify.s35, var7, F(unify.s4, var2.Deref())))),
								F(unify.s18, var1.Deref(), var7.Deref(), unify.posint0, var3.Deref(), var4.Deref(),
										var6.Deref())))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__23(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s18, var1, var2, var3, var4, var5, var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s50, var1.Deref())), F(unify.s3, unify.s1, F(unify.s3,
				F(unify.s6,
						F(unify.s42, F(unify.s14, unify.s52, F(unify.s7, var7, var8)),
								F(unify.s6, F(unify.s2, unify.s28, var2.Deref()), Const.Nil)),
						Const.Nil),
				F(unify.s3, F(unify.s69,
						F(unify.s3, F(unify.s27, var1.Deref(), var7.Deref(), var8.Deref()), F(unify.s3,
								F(unify.s35, var9, F(unify.s2, F(unify.s2, var2.Deref(), var8.Deref()), unify.posint1)),
								F(unify.s35, var10, F(unify.s2, var2.Deref(), unify.posint1))))),
						F(unify.s3,
								F(unify.s40, unify.posint1, var8.Deref(), var1.Deref(), var10.Deref(), var11,
										var4.Deref(), var12),
								F(unify.s19, unify.posint1, var8.Deref(), var1.Deref(), var9.Deref(), var3.Deref(),
										var11.Deref(), var12.Deref(), var5.Deref(), var6.Deref())))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__24(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__25);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s18, var1, var2, var3, var4, var5, var6))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s22, var1.Deref())), F(unify.s3, unify.s1,
				F(unify.s3, F(unify.s69, F(unify.s35, var7, F(unify.s2, var2.Deref(), unify.posint2))),
						F(unify.s3,
								F(unify.s40, unify.posint1, unify.posint2, var1.Deref(), var2.Deref(), var8,
										var4.Deref(), var9),
								F(unify.s19, unify.posint1, unify.posint2, var1.Deref(), var7.Deref(), var3.Deref(),
										var8.Deref(), var9.Deref(), var5.Deref(), var6.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__25(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s18, var1, var2, var2.Deref(), var3, var3.Deref(), Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s17, var1.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__26(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__27);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s18, var1, var2, var2.Deref(), var3, var3.Deref(), Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s68, var1.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__27(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0)
				.Unify(F(unify.s19, var1, var2, var3, var4, var4.Deref(), Const.Nil, var5, var5.Deref(), Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__28(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__29);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s19, var1, var2, var3, var4, var5, F(unify.s6, var4.Deref(), Const.Nil), var6, var7,
				F(unify.s6, var8, var9)))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s10, var1.Deref(), var2.Deref())),
				F(unify.s3, unify.s1,
						F(unify.s3, F(unify.s6, F(unify.s37, var8.Deref()), Const.Nil),
								F(unify.s3, F(unify.s69, F(unify.s16, var1.Deref(), var3.Deref(), var10)),
										F(unify.s18, var10.Deref(), var4.Deref(), var5.Deref(), var6.Deref(),
												var7.Deref(), var9.Deref()))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__29(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__30);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
				.Unify(F(unify.s19, var1, var2, var3, var4, var5, F(unify.s6, var4.Deref(), var6), var7, var8, var9))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s9, var1.Deref(), var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s3, F(unify.s69, F(unify.s16, var1.Deref(), var3.Deref(), var10)),
						F(unify.s3, F(unify.s18, var10.Deref(), var4.Deref(), var11, var7.Deref(), var12, var13),
								F(unify.s3, F(unify.s69, F(unify.s35, var14, F(unify.s2, var1.Deref(), unify.posint1))),
										F(unify.s19, var14.Deref(), var2.Deref(), var3.Deref(), var11.Deref(),
												var5.Deref(), var6.Deref(), var12.Deref(), var8.Deref(),
												var9.Deref())))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__30(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__31);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s40, var1, var2, var3, var4, Const.Nil, var5, var5.Deref()))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__31(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__32);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
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
		if (!((areg0).Unify(F(unify.s40, var1, var2, var3, var4, F(unify.s6, var5, var6), var7, var8))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s11, var1.Deref(), var2.Deref())), F(unify.s3, unify.s1, F(
				unify.s3, F(unify.s69, F(unify.s16, var1.Deref(), var3.Deref(), var9)),
				F(unify.s3, F(unify.s34, var9.Deref(), var4.Deref(), var7.Deref()), F(unify.s3,
						F(unify.s69,
								F(unify.s3, F(unify.s30, var9.Deref(), var7.Deref(), var10),
										F(unify.s41, var9.Deref(), var5.Deref(), var11))),
						F(unify.s3, F(unify.s6,
								F(unify.s42, var11.Deref(),
										F(unify.s6, F(unify.s2, unify.s28, var4.Deref()), Const.Nil)),
								Const.Nil),
								F(unify.s3, F(unify.s69,
										F(unify.s3, F(unify.s35, var12, F(unify.s2, var4.Deref(), unify.posint1)),
												F(unify.s35, var13, F(unify.s2, var1.Deref(), unify.posint1)))),
										F(unify.s40, var13.Deref(), var2.Deref(), var3.Deref(), var12.Deref(),
												var6.Deref(), var10.Deref(), var8.Deref())))))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__32(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__33);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s34, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3,
				F(unify.s69,
						F(unify.s3, F(unify.s68, var1.Deref()),
								F(unify.s13, F(unify.s44, var1.Deref(), var3.Deref())))),
				F(unify.s3, unify.s1, F(unify.s6,
						F(unify.s42, F(unify.s14, unify.s58, F(unify.s2, unify.s28, var2.Deref())), var1.Deref()),
						Const.Nil))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__33(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__34);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s34, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3,
				F(unify.s69, F(unify.s3, F(unify.s68, var1.Deref()), F(unify.s44, var1.Deref(), var3.Deref()))),
				unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__34(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__35);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s34, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s46, var1.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__35(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__36);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s48, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s50, var1.Deref())),
				F(unify.s3, unify.s1,
						F(unify.s3, F(unify.s69, F(unify.s27, var1.Deref(), var2, var3)),
								F(unify.s3, F(unify.s15, unify.posint1), F(unify.s3, F(unify.s15, var3.Deref()),
										F(unify.s49, unify.posint1, var3.Deref(), var1.Deref())))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__36(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__37);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s48, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s22, var1.Deref())), F(unify.s3, unify.s1,
				F(unify.s3, F(unify.s15, unify.posint2), F(unify.s49, unify.posint1, unify.posint2, var1.Deref())))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__37(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__38);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s48, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s17, var1.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__38(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__39);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s48, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s68, var1.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__39(PrologMachine mach) {
		mach.FillAlternative(pred_sym_dcg_arrow_2::exec_pred_sym_dcg_arrow_2__40);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(unify.s49, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_sym_dcg_arrow_2__40(PrologMachine mach) {
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
		if (!((areg0).Unify(F(unify.s49, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(unify.s3, F(unify.s69, F(unify.s11, var1.Deref(), var2.Deref())),
				F(unify.s3, unify.s1, F(unify.s3, F(unify.s69, F(unify.s16, var1.Deref(), var3.Deref(), var4)),
						F(unify.s3, F(unify.s48, var4.Deref()),
								F(unify.s3, F(unify.s69, F(unify.s35, var5, F(unify.s2, var1.Deref(), unify.posint1))),
										F(unify.s49, var5.Deref(), var2.Deref(), var3.Deref())))))))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_make_word_3 extends Code {

	/*
	 * 
	 * make_word(_4028,_4020,_4024^(h+_4020),_4036):-my_compound(_4028,cut(1,termtag
	 * (_4028,_4024,_4036))).
	 * make_word(_4074,_4076,_4074,_4084):-var(_4074,cut(1,_4084)).
	 * make_word(_4118,_4120,tatm^_4118,_4128):-atomic(_4118,cut(1,_4128)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_make_word_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_make_word_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_make_word_3::exec_pred_make_word_3__2);
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
		if (!((areg2).Unify(F(unify.s14, var3, F(unify.s2, unify.s28, var2.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(unify.s0, new HeapChoice(mach.CUTB), F(unify.s53, var1.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_my_compound_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_make_word_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_make_word_3::exec_pred_make_word_3__3);
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
		local_aregs[1] = F(unify.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_make_word_3__3(PrologMachine mach) {
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
		if (!((areg2).Unify(F(unify.s14, unify.s52, var1.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(unify.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}
}

class pred_add_3 extends Code {

	/*
	 * 
	 * add(_4562,_4564,_4566,_4580):-is(_4566,_4564+_4562,_4580).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_add_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_add_3__1(PrologMachine mach) {
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
		local_aregs[0] = var3.Deref();
		local_aregs[1] = F(unify.s2, var2.Deref(), var1.Deref());
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_myin_2 extends Code {

	/*
	 * 
	 * myin(_4612,[_4608|_4610],_4622):-compare(_4614,_4612,_4608,in_2(_4614,_4612,
	 * _4610,_4622)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_myin_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_myin_2__1(PrologMachine mach) {
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
		if (!((areg1).Unify(F(unify.s6, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = F(unify.s29, var4.Deref(), var1.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_in_2_3 extends Code {

	/*
	 * 
	 * in_2(=,_4658,_4660,_4670):-call(_4670).
	 * in_2(>,_4688,_4690,_4698):-myin(_4688,_4690,_4698).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_in_2_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_in_2_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_in_2_3::exec_pred_in_2_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(unify.s10)))
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

	public static Function<PrologMachine, Function> exec_pred_in_2_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(unify.s12)))
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
		return (Function<PrologMachine, Function>) pred_myin_2::exec_static;
	}
}

class pred_incl_3 extends Code {

	/*
	 * 
	 * incl(_4724,_4726,_4728,_4736):-incl_2(_4726,_4724,_4728,_4736).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_incl_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_incl_3__1(PrologMachine mach) {
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
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_incl_2_3::exec_static;
	}
}

class pred_incl_2_3 extends Code {

	/*
	 * 
	 * incl_2([],_4766,[_4766],_4778):-call(_4778).
	 * incl_2([_4798|_4800],_4802,_4804,_4814):-compare(_4806,_4802,_4798,incl_3(
	 * _4806,_4802,_4798,_4800,_4804,_4814)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_incl_2_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_incl_2_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_incl_2_3::exec_pred_incl_2_3__2);
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
		if (!((areg2).Unify(F(unify.s6, var1.Deref(), Const.Nil))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_incl_2_3__2(PrologMachine mach) {
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
		if (!((areg0).Unify(F(unify.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var1.Deref();
		local_aregs[3] = F(unify.s32, var5.Deref(), var3.Deref(), var1.Deref(), var2.Deref(), var4.Deref(),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_compare_3::exec_static;
	}
}

class pred_incl_3_5 extends Code {

	/*
	 * 
	 * incl_3(<,_4858,_4864,_4866,[_4858,_4864|_4866],_4876):-call(_4876).
	 * incl_3(=,_4904,_4900,_4902,[_4900|_4902],_4914):-call(_4914).
	 * incl_3(>,_4942,_4938,_4944,[_4938|_4940],_4952):-incl_2(_4944,_4942,_4940,
	 * _4952).
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
		return (Function<PrologMachine, Function>) exec_pred_incl_3_5__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_incl_3_5__1(PrologMachine mach) {
		mach.FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(unify.s9)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(F(unify.s6, var1.Deref(), F(unify.s6, var2.Deref(), var3.Deref())))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_incl_3_5__2(PrologMachine mach) {
		mach.FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(unify.s10)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(F(unify.s6, var2.Deref(), var3.Deref()))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_incl_3_5__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[5];
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(unify.s12)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(F(unify.s6, var2.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[5] = local_aregs[4] = null;
		return (Function<PrologMachine, Function>) pred_incl_2_3::exec_static;
	}
}

class pred_my_compound_1 extends Code {

	/*
	 * 
	 * my_compound(_4984,_4996):-nonvar(_4984,not(atomic(_4984),_4996)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_my_compound_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_my_compound_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(unify.s47, F(unify.s17, var1.Deref()), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nonvar_1::exec_static;
	}
}

class pred_cons_1 extends Code {

	/*
	 * 
	 * cons(_5022,_5036):-nonvar(_5022,unify([_5026|_5028],_5022,_5036)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_cons_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_cons_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(unify.s60, F(unify.s6, var2, var3), var1.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nonvar_1::exec_static;
	}
}

class pred_structure_1 extends Code {

	/*
	 * 
	 * structure(_5064,_5084):-my_compound(_5064,not(_5064=[_5068|_5070],_5084)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_structure_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_structure_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(unify.s47, F(unify.s10, var1.Deref(), F(unify.s6, var2, var3)), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_my_compound_1::exec_static;
	}
}

class pred_termtag_2 extends Code {

	/*
	 * 
	 * termtag(_5110,tstr,_5118):-structure(_5110,_5118).
	 * termtag(_5140,tlst,_5148):-cons(_5140,_5148).
	 * termtag(_5170,tatm,_5178):-atomic(_5170,_5178).
	 * termtag(_5200,tvar,_5208):-var(_5200,_5208).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_termtag_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_termtag_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(unify.s57)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_structure_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_termtag_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(unify.s54)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_cons_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_termtag_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(unify.s52)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_termtag_2__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(unify.s58)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}
}
