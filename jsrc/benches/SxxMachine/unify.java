package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class unify /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("!");
	final static Const s2 = Data.Intern("+");
	final static Const s3 = Data.Intern(",");
	final static Const s4 = Data.Intern("-");
	final static Const s5 = Data.Intern("-->");
	final static Const s6 = Data.Intern(".");
	final static Const s7 = Data.Intern("/");
	final static Const s8 = Data.Intern(":-");
	final static Const s9 = Data.Intern("<");
	final static Const s10 = Data.Intern("=");
	final static Const s11 = Data.Intern("=<");
	final static Const s12 = Data.Intern(">");
	final static Const s13 = Data.Intern("\\+");
	final static Const s14 = Data.Intern("^");
	final static Const s_add = Data.Intern("add");
	final static Const s_arg = Data.Intern("arg");
	final static Const s_atomic = Data.Intern("atomic");
	final static Const s_block = Data.Intern("block");
	final static Const s_block_args = Data.Intern("block_args");
	final static Const s_call = Data.Intern("call");
	final static Const s_compare = Data.Intern("compare");
	final static Const s_cons = Data.Intern("cons");
	final static Const s_deref = Data.Intern("deref");
	final static Const s_equal = Data.Intern("equal");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_functor = Data.Intern("functor");
	final static Const s_h = Data.Intern("h");
	final static Const s_in_2 = Data.Intern("in_2");
	final static Const s_incl = Data.Intern("incl");
	final static Const s_incl_2 = Data.Intern("incl_2");
	final static Const s_incl_3 = Data.Intern("incl_3");
	final static Const s_init = Data.Intern("init");
	final static Const s_init_var = Data.Intern("init_var");
	final static Const s_is = Data.Intern("is");
	final static Const s_jump = Data.Intern("jump");
	final static Const s_label = Data.Intern("label");
	final static Const s_last = Data.Intern("last");
	final static Const s_main = Data.Intern("main");
	final static Const s_make_slots = Data.Intern("make_slots");
	final static Const s_make_word = Data.Intern("make_word");
	final static Const s_move = Data.Intern("move");
	final static Const s_my_compound = Data.Intern("my_compound");
	final static Const s_myin = Data.Intern("myin");
	final static Const s_nonlast = Data.Intern("nonlast");
	final static Const s_nonvar = Data.Intern("nonvar");
	final static Const s_not = Data.Intern("not");
	final static Const s_size = Data.Intern("size");
	final static Const s_size_args = Data.Intern("size_args");
	final static Const s_structure = Data.Intern("structure");
	final static Const s_switch = Data.Intern("switch");
	final static Const s_tatm = Data.Intern("tatm");
	final static Const s_termtag = Data.Intern("termtag");
	final static Const s_tlst = Data.Intern("tlst");
	final static Const s_top = Data.Intern("top");
	final static Const s_trail = Data.Intern("trail");
	final static Const s_tstr = Data.Intern("tstr");
	final static Const s_tvar = Data.Intern("tvar");
	final static Const s_u = Data.Intern("u");
	final static Const s_unify = Data.Intern("unify");
	final static Const s_unify_arg = Data.Intern("unify_arg");
	final static Const s_unify_args = Data.Intern("unify_args");
	final static Const s_unify_block = Data.Intern("unify_block");
	final static Const s_unify_readmode = Data.Intern("unify_readmode");
	final static Const s_unify_var = Data.Intern("unify_var");
	final static Const s_unify_writemode = Data.Intern("unify_writemode");
	final static Const s_uninit = Data.Intern("uninit");
	final static Const s_var = Data.Intern("var");
	final static Const s69 = Data.Intern("{}");
	final static Int negint1 = Data.Number(-1L);
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_main_1 = PredTable.Register("main", 1, new pred_main_1());
	final static Operation reg_u_4 = PredTable.Register("u", 4, new pred_u_4());
	final static Operation reg_$002D$002D$003E_2 = PredTable.Register("-->", 2, new pred_$002D$002D$003E_2());
	final static Operation reg_make_word_3 = PredTable.Register("make_word", 3, new pred_make_word_3());
	final static Operation reg_add_3 = PredTable.Register("add", 3, new pred_add_3());
	final static Operation reg_myin_2 = PredTable.Register("myin", 2, new pred_myin_2());
	final static Operation reg_in_2_3 = PredTable.Register("in_2", 3, new pred_in_2_3());
	final static Operation reg_incl_3 = PredTable.Register("incl", 3, new pred_incl_3());
	final static Operation reg_incl_2_3 = PredTable.Register("incl_2", 3, new pred_incl_2_3());
	final static Operation reg_incl_3_5 = PredTable.Register("incl_3", 5, new pred_incl_3_5());
	final static Operation reg_my_compound_1 = PredTable.Register("my_compound", 1, new pred_my_compound_1());
	final static Operation reg_cons_1 = PredTable.Register("cons", 1, new pred_cons_1());
	final static Operation reg_structure_1 = PredTable.Register("structure", 1, new pred_structure_1());
	final static Operation reg_termtag_2 = PredTable.Register("termtag", 2, new pred_termtag_2());

	public static class pred_top_0 extends Code {

		/*
		
		top(_14858):-main(_14836,_14858).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_top_0__1(mach);
		}

		public static Operation exec_pred_top_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = var1;
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_main_1::exec_static;
		}
	}

	public static class pred_main_1 extends Code {

		/*
		
		main(_14922,_14992):-u(_14938,[1,_14932],[_14938],_14950,size(_14950,0,_14922,_14992)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_main_1__1(mach);
		}

		public static Operation exec_pred_main_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var2;
			local_aregs[1] = Data.F(unify.s6, unify.posint1, Data.F(unify.s6, var3, Const.Nil));
			local_aregs[2] = Data.F(unify.s6, var2.Deref(), Const.Nil);
			local_aregs[3] = var4;
			local_aregs[4] = Data.F(unify.s_size, var4.Deref(), unify.posint0, var1.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_u_4::exec_static;
		}
	}

	public static class pred_u_4 extends Code {

		/*
		
		u(_15176,_15178,_15180,_15182,_15242):-unify(_15176,_15178,_15180,_15192,_15182,[],_15242).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_u_4__1(mach);
		}

		public static Operation exec_pred_u_4__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var5;
			local_aregs[4] = var4.Deref();
			local_aregs[5] = Const.Nil;
			local_aregs[6] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_unify_6::exec_static;
		}
	}

	public static class pred_$002D$002D$003E_2 extends Code {

		/*
		
		-->(unify(_15420,_15422,_15424,_15426),({\+myin(_15420,_15424)},!,uninit(_15420,_15422,_15424,_15426)),_15490):-call(_15490).
		-->(unify(_15574,_15576,_15578,_15580),({myin(_15574,_15578)},!,init(_15574,_15576,_15578,_15580,nonlast,_15604)),_15644):-call(_15644).
		-->(uninit(_15728,_15730,_15732,_15734),({my_compound(_15730)},!,[move(_15746^h,_15728)],{termtag(_15730,_15746)},unify_block(nonlast,_15730,_15778,_15732,_15782,_15784),{incl(_15728,_15782,_15734)}),_15854):-call(_15854).
		-->(uninit(_15938,_15940,_15942,_15944),({atomic(_15940)},!,[move(tatm^_15940,_15938)],{incl(_15938,_15942,_15944)}),_16028):-call(_16028).
		-->(uninit(_16112,_16114,_16116,_16118),({var(_16114)},!,unify_var(_16112,_16114,_16116,_16118)),_16176):-call(_16176).
		-->(init(_16260,_16262,_16264,_16266,_16268,_16270),({nonvar(_16262)},!,{termtag(_16262,_16284)},[deref(_16260),switch(_16284,_16260,[trail(_16260)|_16308],_16318,fail)],{unify_writemode(_16260,_16262,_16264,_16268,_16270,_16308,[])},{unify_readmode(_16260,_16262,_16264,_16266,_16270,_16318,[])}),_16424):-call(_16424).
		-->(init(_16508,_16510,_16512,_16514,_16516,_16518),({var(_16510)},!,unify_var(_16508,_16510,_16512,_16514)),_16576):-call(_16576).
		-->(unify_var(_16660,_16662,_16664,_16664),({myin(_16660,_16664),myin(_16662,_16664)},!,[unify(_16660,_16662,fail)]),_16742):-call(_16742).
		-->(unify_var(_16826,_16828,_16830,_16832),({myin(_16826,_16830),\+myin(_16828,_16830)},!,[move(_16826,_16828)],{incl(_16828,_16830,_16832)}),_16928):-call(_16928).
		-->(unify_var(_17012,_17014,_17016,_17018),({\+myin(_17012,_17016),myin(_17014,_17016)},!,[move(_17014,_17012)],{incl(_17012,_17016,_17018)}),_17114):-call(_17114).
		-->(unify_var(_17198,_17200,_17202,_17204),({\+myin(_17198,_17202),\+myin(_17200,_17202)},!,[move(tvar^h,_17198),move(tvar^h,_17200),add(1,h),move(_17200,[h-1])],{incl(_17198,_17202,_17314),incl(_17200,_17314,_17204)}),_17378):-call(_17378).
		-->(unify_readmode(_17462,_17464,_17466,_17468,_17470),({structure(_17464)},!,[equal([_17462],tatm^(_17488/_17490),fail)],{functor(_17464,_17488,_17490)},unify_args(1,_17490,_17464,_17466,_17468,0,_17462,_17470)),_17592):-call(_17592).
		-->(unify_readmode(_17676,_17678,_17680,_17682,_17684),({cons(_17678)},!,unify_args(1,2,_17678,_17680,_17682,-1,_17676,_17684)),_17750):-call(_17750).
		-->(unify_readmode(_17834,_17836,_17838,_17838,_17842),({atomic(_17836)},!,[equal(_17834,tatm^_17836,fail)]),_17910):-call(_17910).
		-->(unify_args(_17994,_17996,_17998,_18000,_18000,_18004,_18006,_18008),({_17994>_17996},!),_18052):-call(_18052).
		-->(unify_args(_18142,_18144,_18146,_18148,_18150,_18152,_18154,[_18136|_18138]),({_18142=_18144},!,unify_arg(_18142,_18146,_18148,_18150,_18152,_18154,last,_18138)),_18224):-call(_18224).
		-->(unify_args(_18308,_18310,_18312,_18314,_18316,_18318,_18320,_18322),({_18308<_18310},!,unify_arg(_18308,_18312,_18314,_18342,_18318,_18320,nonlast,_18350),{_18360 is _18308+1},unify_args(_18360,_18310,_18312,_18342,_18316,_18318,_18320,_18322)),_18436):-call(_18436).
		-->(unify_arg(_18520,_18522,_18524,_18526,_18528,_18530,_18532,_18534),([move([_18530+_18540],_18552)],{_18540 is _18520+_18528,incl(_18552,_18524,_18578),arg(_18520,_18522,_18586)},init(_18552,_18586,_18578,_18526,_18532,_18534)),_18656):-call(_18656).
		-->(unify_writemode(_18740,_18742,_18744,_18746,_18748),({my_compound(_18742)},!,[move(_18760^h,[_18740])],{termtag(_18742,_18760)},unify_block(_18746,_18742,_18798,_18744,_18802,_18748)),_18856):-call(_18856).
		-->(unify_writemode(_18940,_18942,_18944,_18946,_18948),({atomic(_18942)},!,[move(tatm^_18942,[_18940])]),_19020):-call(_19020).
		-->(unify_block(last,_19112,_19114,_19116,_19116,[_19104|_19106]),(!,[add(_19114,h),jump(_19104)],{size(_19112,0,_19114)}),_19194):-call(_19194).
		-->(unify_block(nonlast,_19286,_19288,_19290,_19292,[_19278|_19280]),(!,[add(_19288,h)],{size(_19286,0,_19288),_19322 is -_19288},block(_19286,_19322,0,_19290,_19292,_19280)),_19394):-call(_19394).
		-->(block(_19478,_19480,_19482,_19484,_19486,_19488),({structure(_19478)},!,[move(tatm^(_19500/_19502),[h+_19480])],{functor(_19478,_19500,_19502),_19556 is _19480+_19502+1,_19568 is _19480+1},make_slots(1,_19502,_19478,_19568,_19598,_19484,_19602),block_args(1,_19502,_19478,_19556,_19482,_19598,_19602,_19486,_19488)),_19680):-call(_19680).
		-->(block(_19764,_19766,_19768,_19770,_19772,_19774),({cons(_19764)},!,{_19792 is _19766+2},make_slots(1,2,_19764,_19766,_19810,_19770,_19814),block_args(1,2,_19764,_19792,_19768,_19810,_19814,_19772,_19774)),_19886):-call(_19886).
		-->(block(_19970,_19972,_19972,_19976,_19976,[]),({atomic(_19970)},!),_20022):-call(_20022).
		-->(block(_20106,_20108,_20108,_20112,_20112,[]),({var(_20106)},!),_20158):-call(_20158).
		-->(block_args(_20242,_20244,_20246,_20248,_20248,[],_20254,_20254,[]),({_20242>_20244},!),_20302):-call(_20302).
		-->(block_args(_20398,_20400,_20402,_20386,_20406,[_20386],_20410,_20412,[_20392|_20394]),({_20398=_20400},!,[label(_20392)],{arg(_20398,_20402,_20442)},block(_20442,_20386,_20406,_20410,_20412,_20394)),_20512):-call(_20512).
		-->(block_args(_20602,_20604,_20606,_20596,_20610,[_20596|_20598],_20614,_20616,_20618),({_20602<_20604},!,{arg(_20602,_20606,_20636)},block(_20636,_20596,_20648,_20614,_20652,_20654),{_20664 is _20602+1},block_args(_20664,_20604,_20606,_20648,_20610,_20598,_20652,_20616,_20618)),_20748):-call(_20748).
		-->(make_slots(_20832,_20834,_20836,_20838,[],_20842,_20842),({_20832>_20834},!),_20888):-call(_20888).
		-->(make_slots(_20978,_20980,_20982,_20984,[_20972|_20974],_20988,_20990),({_20978=<_20980},!,{arg(_20978,_20982,_21008)},init_var(_21008,_20984,_20988),{incl(_21008,_20988,_21028),make_word(_21008,_20972,_21036)},[move(_21036,[h+_20984])],{_21080 is _20984+1,_21092 is _20978+1},make_slots(_21092,_20980,_20982,_21080,_20974,_21028,_20990)),_21190):-call(_21190).
		-->(init_var(_21274,_21276,_21278),({var(_21274),\+myin(_21274,_21278)},!,[move(tvar^(h+_21276),_21274)]),_21366):-call(_21366).
		-->(init_var(_21450,_21452,_21454),({var(_21450),myin(_21450,_21454)},!),_21508):-call(_21508).
		-->(init_var(_21592,_21594,_21596),({nonvar(_21592)},!),_21638):-call(_21638).
		-->(size(_22318),({structure(_22318)},!,{functor(_22318,_22332,_22334)},add(1),add(_22334),size_args(1,_22334,_22318)),_22412):-call(_22412).
		-->(size(_22496),({cons(_22496)},!,add(2),size_args(1,2,_22496)),_22562):-call(_22562).
		-->(size(_22646),({atomic(_22646)},!),_22688):-call(_22688).
		-->(size(_22772),({var(_22772)},!),_22814):-call(_22814).
		-->(size_args(_22898,_22900,_22902),({_22898>_22900},!),_22946):-call(_22946).
		-->(size_args(_23030,_23032,_23034),({_23030=<_23032},!,{arg(_23030,_23034,_23052)},size(_23052),{_23070 is _23030+1},size_args(_23070,_23032,_23034)),_23142):-call(_23142).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_$002D$002D$003E_2__1(mach);
		}

		public static Operation exec_pred_$002D$002D$003E_2__1(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3,
					Data.F(unify.s69, Data.F(unify.s13, Data.F(unify.s_myin, var1.Deref(), var3.Deref()))),
					Data.F(unify.s3, unify.s1,
							Data.F(unify.s_uninit, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref()))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__2(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_myin, var1.Deref(), var3.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s_init, var1.Deref(), var2.Deref(), var3.Deref(),
							var4.Deref(), unify.s_nonlast, var5))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__3(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_uninit, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_my_compound, var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s6, Data.F(unify.s_move, Data.F(unify.s14, var5, unify.s_h), var1.Deref()),
									Const.Nil),
							Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_termtag, var2.Deref(), var5.Deref())),
									Data.F(unify.s3,
											Data.F(unify.s_unify_block, unify.s_nonlast, var2.Deref(), var6,
													var3.Deref(), var7, var8),
											Data.F(unify.s69, Data.F(unify.s_incl, var1.Deref(), var7.Deref(),
													var4.Deref()))))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__4(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_uninit, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1)
					.Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_atomic, var2.Deref())),
							Data.F(unify.s3, unify.s1,
									Data.F(unify.s3, Data.F(unify.s6,
											Data.F(unify.s_move, Data.F(unify.s14, unify.s_tatm, var2.Deref()),
													var1.Deref()),
											Const.Nil),
											Data.F(unify.s69, Data.F(unify.s_incl, var1.Deref(), var3.Deref(),
													var4.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__5(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_uninit, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_var, var2.Deref())), Data.F(unify.s3,
					unify.s1, Data.F(unify.s_unify_var, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref()))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__6(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_init, var1, var2, var3, var4, var5, var6))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_nonvar, var2.Deref())),
					Data.F(unify.s3, unify.s1,
							Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_termtag, var2.Deref(), var7)),
									Data.F(unify.s3,
											Data.F(unify.s6, Data.F(unify.s_deref, var1.Deref()), Data.F(unify.s6,
													Data.F(unify.s_switch, var7.Deref(), var1.Deref(),
															Data.F(unify.s6, Data.F(unify.s_trail, var1.Deref()), var8),
															var9, unify.s_fail),
													Const.Nil)),
											Data.F(unify.s3,
													Data.F(unify.s69, Data.F(unify.s_unify_writemode, var1.Deref(),
															var2.Deref(), var3.Deref(), var5.Deref(), var6.Deref(),
															var8.Deref(), Const.Nil)),
													Data.F(unify.s69,
															Data.F(unify.s_unify_readmode, var1.Deref(), var2.Deref(),
																	var3.Deref(), var4.Deref(), var6.Deref(),
																	var9.Deref(), Const.Nil))))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__7(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_init, var1, var2, var3, var4, var5, var6))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_var, var2.Deref())), Data.F(unify.s3,
					unify.s1, Data.F(unify.s_unify_var, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref()))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__8(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_var, var1, var2, var3, var3.Deref()))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3,
					Data.F(unify.s69,
							Data.F(unify.s3, Data.F(unify.s_myin, var1.Deref(), var3.Deref()),
									Data.F(unify.s_myin, var2.Deref(), var3.Deref()))),
					Data.F(unify.s3, unify.s1, Data.F(unify.s6,
							Data.F(unify.s_unify, var1.Deref(), var2.Deref(), unify.s_fail), Const.Nil))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__9(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_var, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3,
					Data.F(unify.s69,
							Data.F(unify.s3, Data.F(unify.s_myin, var1.Deref(), var3.Deref()),
									Data.F(unify.s13, Data.F(unify.s_myin, var2.Deref(), var3.Deref())))),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s6, Data.F(unify.s_move, var1.Deref(), var2.Deref()), Const.Nil),
							Data.F(unify.s69, Data.F(unify.s_incl, var2.Deref(), var3.Deref(), var4.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__10(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_var, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3,
					Data.F(unify.s69,
							Data.F(unify.s3, Data.F(unify.s13, Data.F(unify.s_myin, var1.Deref(), var3.Deref())),
									Data.F(unify.s_myin, var2.Deref(), var3.Deref()))),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s6, Data.F(unify.s_move, var2.Deref(), var1.Deref()), Const.Nil),
							Data.F(unify.s69, Data.F(unify.s_incl, var1.Deref(), var3.Deref(), var4.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__11(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__12);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_var, var1, var2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3,
					Data.F(unify.s69,
							Data.F(unify.s3, Data.F(unify.s13, Data.F(unify.s_myin, var1.Deref(), var3.Deref())),
									Data.F(unify.s13, Data.F(unify.s_myin, var2.Deref(), var3.Deref())))),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3, Data.F(unify.s6,
							Data.F(unify.s_move, Data.F(unify.s14, unify.s_tvar, unify.s_h), var1.Deref()),
							Data.F(unify.s6,
									Data.F(unify.s_move, Data.F(unify.s14, unify.s_tvar, unify.s_h), var2.Deref()),
									Data.F(unify.s6, Data.F(unify.s_add, unify.posint1, unify.s_h),
											Data.F(unify.s6,
													Data.F(unify.s_move, var2.Deref(),
															Data.F(unify.s6, Data.F(unify.s4, unify.s_h, unify.posint1),
																	Const.Nil)),
													Const.Nil)))),
							Data.F(unify.s69, Data.F(unify.s3, Data.F(unify.s_incl, var1.Deref(), var3.Deref(), var5),
									Data.F(unify.s_incl, var2.Deref(), var5.Deref(), var4.Deref())))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__12(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__13);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_readmode, var1, var2, var3, var4, var5))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_structure, var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s6,
									Data.F(unify.s_equal, Data.F(unify.s6, var1.Deref(), Const.Nil),
											Data.F(unify.s14, unify.s_tatm, Data.F(unify.s7, var6, var7)),
											unify.s_fail),
									Const.Nil),
							Data.F(unify.s3,
									Data.F(unify.s69,
											Data.F(unify.s_functor, var2.Deref(), var6.Deref(), var7.Deref())),
									Data.F(unify.s_unify_args, unify.posint1, var7.Deref(), var2.Deref(), var3.Deref(),
											var4.Deref(), unify.posint0, var1.Deref(), var5.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__13(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__14);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_readmode, var1, var2, var3, var4, var5))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_cons, var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s_unify_args, unify.posint1, unify.posint2, var2.Deref(),
							var3.Deref(), var4.Deref(), unify.negint1, var1.Deref(), var5.Deref()))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__14(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__15);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_readmode, var1, var2, var3, var3.Deref(), var4))))
				return Prolog.Fail0;
			if (!((areg1)
					.Unify(Data
							.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_atomic, var2.Deref())),
									Data.F(unify.s3, unify.s1,
											Data.F(unify.s6, Data.F(unify.s_equal, var1.Deref(),
													Data.F(unify.s14, unify.s_tatm, var2.Deref()), unify.s_fail),
													Const.Nil))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__15(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__16);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_args, var1, var2, var3, var4, var4.Deref(), var5, var6, var7))))
				return Prolog.Fail0;
			if (!((areg1).Unify(
					Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__16(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__17);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_args, var1, var2, var3, var4, var5, var6, var7,
					Data.F(unify.s6, var8, var9)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s10, var1.Deref(), var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s_unify_arg, var1.Deref(), var3.Deref(), var4.Deref(),
							var5.Deref(), var6.Deref(), var7.Deref(), unify.s_last, var9.Deref()))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__17(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__18);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var11 = Data.V(mach);
			Var var10 = Data.V(mach);
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_args, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s9, var1.Deref(), var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s_unify_arg, var1.Deref(), var3.Deref(), var4.Deref(), var9, var6.Deref(),
									var7.Deref(), unify.s_nonlast, var10),
							Data.F(unify.s3,
									Data.F(unify.s69,
											Data.F(unify.s_is, var11, Data.F(unify.s2, var1.Deref(), unify.posint1))),
									Data.F(unify.s_unify_args, var11.Deref(), var2.Deref(), var3.Deref(), var9.Deref(),
											var5.Deref(), var6.Deref(), var7.Deref(), var8.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__18(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__19);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var12 = Data.V(mach);
			Var var11 = Data.V(mach);
			Var var10 = Data.V(mach);
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_arg, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3,
					Data.F(unify.s6,
							Data.F(unify.s_move, Data.F(unify.s6, Data.F(unify.s2, var6.Deref(), var9), Const.Nil),
									var10),
							Const.Nil),
					Data.F(unify.s3,
							Data.F(unify.s69, Data.F(unify.s3,
									Data.F(unify.s_is, var9.Deref(), Data.F(unify.s2, var1.Deref(), var5.Deref())),
									Data.F(unify.s3, Data.F(unify.s_incl, var10.Deref(), var3.Deref(), var11),
											Data.F(unify.s_arg, var1.Deref(), var2.Deref(), var12)))),
							Data.F(unify.s_init, var10.Deref(), var12.Deref(), var11.Deref(), var4.Deref(),
									var7.Deref(), var8.Deref()))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__19(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__20);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_writemode, var1, var2, var3, var4, var5))))
				return Prolog.Fail0;
			if (!((areg1)
					.Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_my_compound, var2.Deref())),
							Data.F(unify.s3, unify.s1,
									Data.F(unify.s3, Data.F(unify.s6,
											Data.F(unify.s_move, Data.F(unify.s14, var6, unify.s_h),
													Data.F(unify.s6, var1.Deref(), Const.Nil)),
											Const.Nil),
											Data.F(unify.s3,
													Data.F(unify.s69,
															Data.F(unify.s_termtag, var2.Deref(), var6.Deref())),
													Data.F(unify.s_unify_block, var4.Deref(), var2.Deref(), var7,
															var3.Deref(), var8, var5.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__20(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__21);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_writemode, var1, var2, var3, var4, var5))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_atomic, var2.Deref())),
					Data.F(unify.s3, unify.s1,
							Data.F(unify.s6, Data.F(unify.s_move, Data.F(unify.s14, unify.s_tatm, var2.Deref()),
									Data.F(unify.s6, var1.Deref(), Const.Nil)), Const.Nil))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__21(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__22);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_block, unify.s_last, var1, var2, var3, var3.Deref(),
					Data.F(unify.s6, var4, var5)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, unify.s1,
					Data.F(unify.s3,
							Data.F(unify.s6, Data.F(unify.s_add, var2.Deref(), unify.s_h),
									Data.F(unify.s6, Data.F(unify.s_jump, var4.Deref()), Const.Nil)),
							Data.F(unify.s69, Data.F(unify.s_size, var1.Deref(), unify.posint0, var2.Deref())))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__22(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__23);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_unify_block, unify.s_nonlast, var1, var2, var3, var4,
					Data.F(unify.s6, var5, var6)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, unify.s1,
					Data.F(unify.s3, Data.F(unify.s6, Data.F(unify.s_add, var2.Deref(), unify.s_h), Const.Nil),
							Data.F(unify.s3, Data.F(unify.s69,
									Data.F(unify.s3, Data.F(unify.s_size, var1.Deref(), unify.posint0, var2.Deref()),
											Data.F(unify.s_is, var7, Data.F(unify.s4, var2.Deref())))),
									Data.F(unify.s_block, var1.Deref(), var7.Deref(), unify.posint0, var3.Deref(),
											var4.Deref(), var6.Deref())))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__23(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__24);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var12 = Data.V(mach);
			Var var11 = Data.V(mach);
			Var var10 = Data.V(mach);
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_block, var1, var2, var3, var4, var5, var6))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_structure, var1.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3, Data.F(unify.s6,
							Data.F(unify.s_move, Data.F(unify.s14, unify.s_tatm, Data.F(unify.s7, var7, var8)),
									Data.F(unify.s6, Data.F(unify.s2, unify.s_h, var2.Deref()), Const.Nil)),
							Const.Nil),
							Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s3,
									Data.F(unify.s_functor, var1.Deref(), var7.Deref(), var8.Deref()),
									Data.F(unify.s3, Data.F(unify.s_is, var9,
											Data.F(unify.s2, Data.F(unify.s2, var2.Deref(), var8.Deref()),
													unify.posint1)),
											Data.F(unify.s_is, var10, Data.F(unify.s2, var2.Deref(), unify.posint1))))),
									Data.F(unify.s3,
											Data.F(unify.s_make_slots, unify.posint1, var8.Deref(), var1.Deref(),
													var10.Deref(), var11, var4.Deref(), var12),
											Data.F(unify.s_block_args, unify.posint1, var8.Deref(), var1.Deref(),
													var9.Deref(), var3.Deref(), var11.Deref(), var12.Deref(),
													var5.Deref(), var6.Deref())))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__24(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__25);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_block, var1, var2, var3, var4, var5, var6))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_cons, var1.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s69, Data.F(unify.s_is, var7, Data.F(unify.s2, var2.Deref(), unify.posint2))),
							Data.F(unify.s3,
									Data.F(unify.s_make_slots, unify.posint1, unify.posint2, var1.Deref(), var2.Deref(),
											var8, var4.Deref(), var9),
									Data.F(unify.s_block_args, unify.posint1, unify.posint2, var1.Deref(), var7.Deref(),
											var3.Deref(), var8.Deref(), var9.Deref(), var5.Deref(), var6.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__25(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__26);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_block, var1, var2, var2.Deref(), var3, var3.Deref(), Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_atomic, var1.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__26(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__27);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_block, var1, var2, var2.Deref(), var3, var3.Deref(), Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_var, var1.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__27(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__28);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_block_args, var1, var2, var3, var4, var4.Deref(), Const.Nil, var5,
					var5.Deref(), Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(
					Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__28(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__29);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var10 = Data.V(mach);
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_block_args, var1, var2, var3, var4, var5,
					Data.F(unify.s6, var4.Deref(), Const.Nil), var6, var7, Data.F(unify.s6, var8, var9)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s10, var1.Deref(), var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s6, Data.F(unify.s_label, var8.Deref()), Const.Nil),
							Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_arg, var1.Deref(), var3.Deref(), var10)),
									Data.F(unify.s_block, var10.Deref(), var4.Deref(), var5.Deref(), var6.Deref(),
											var7.Deref(), var9.Deref()))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__29(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__30);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var14 = Data.V(mach);
			Var var13 = Data.V(mach);
			Var var12 = Data.V(mach);
			Var var11 = Data.V(mach);
			Var var10 = Data.V(mach);
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_block_args, var1, var2, var3, var4, var5,
					Data.F(unify.s6, var4.Deref(), var6), var7, var8, var9))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s9, var1.Deref(), var2.Deref())),
					Data.F(unify.s3, unify.s1,
							Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_arg, var1.Deref(), var3.Deref(), var10)),
									Data.F(unify.s3,
											Data.F(unify.s_block, var10.Deref(), var4.Deref(), var11, var7.Deref(),
													var12, var13),
											Data.F(unify.s3,
													Data.F(unify.s69,
															Data.F(unify.s_is, var14,
																	Data.F(unify.s2, var1.Deref(), unify.posint1))),
													Data.F(unify.s_block_args, var14.Deref(), var2.Deref(),
															var3.Deref(), var11.Deref(), var5.Deref(), var6.Deref(),
															var12.Deref(), var8.Deref(), var9.Deref())))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__30(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__31);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_make_slots, var1, var2, var3, var4, Const.Nil, var5, var5.Deref()))))
				return Prolog.Fail0;
			if (!((areg1).Unify(
					Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__31(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__32);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var13 = Data.V(mach);
			Var var12 = Data.V(mach);
			Var var11 = Data.V(mach);
			Var var10 = Data.V(mach);
			Var var9 = Data.V(mach);
			Var var8 = Data.V(mach);
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(
					Data.F(unify.s_make_slots, var1, var2, var3, var4, Data.F(unify.s6, var5, var6), var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s11, var1.Deref(), var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s69, Data.F(unify.s_arg, var1.Deref(), var3.Deref(), var9)),
							Data.F(unify.s3, Data.F(unify.s_init_var, var9.Deref(), var4.Deref(), var7.Deref()), Data.F(
									unify.s3,
									Data.F(unify.s69, Data
											.F(unify.s3, Data.F(unify.s_incl, var9.Deref(), var7.Deref(), var10),
													Data.F(unify.s_make_word, var9.Deref(), var5.Deref(), var11))),
									Data.F(unify.s3,
											Data.F(unify.s6, Data.F(unify.s_move, var11.Deref(), Data.F(unify.s6,
													Data.F(unify.s2, unify.s_h, var4.Deref()), Const.Nil)), Const.Nil),
											Data.F(unify.s3,
													Data.F(unify.s69, Data.F(unify.s3,
															Data.F(unify.s_is, var12,
																	Data.F(unify.s2, var4.Deref(), unify.posint1)),
															Data.F(unify.s_is, var13,
																	Data.F(unify.s2, var1.Deref(), unify.posint1)))),
													Data.F(unify.s_make_slots, var13.Deref(), var2.Deref(),
															var3.Deref(), var12.Deref(), var6.Deref(), var10.Deref(),
															var8.Deref())))))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__32(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__33);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_init_var, var1, var2, var3))))
				return Prolog.Fail0;
			if (!((areg1)
					.Unify(Data
							.F(unify.s3,
									Data.F(unify.s69, Data.F(unify.s3, Data.F(unify.s_var, var1.Deref()),
											Data.F(unify.s13, Data.F(unify.s_myin, var1.Deref(), var3.Deref())))),
									Data.F(unify.s3, unify.s1,
											Data.F(unify.s6, Data.F(unify.s_move,
													Data.F(unify.s14, unify.s_tvar,
															Data.F(unify.s2, unify.s_h, var2.Deref())),
													var1.Deref()), Const.Nil))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__33(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__34);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_init_var, var1, var2, var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s3, Data.F(unify.s_var, var1.Deref()),
					Data.F(unify.s_myin, var1.Deref(), var3.Deref()))), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__34(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__35);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_init_var, var1, var2, var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_nonvar, var1.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__35(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__36);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_size, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_structure, var1.Deref())),
					Data.F(unify.s3, unify.s1,
							Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_functor, var1.Deref(), var2, var3)),
									Data.F(unify.s3, Data.F(unify.s_add, unify.posint1), Data.F(unify.s3,
											Data.F(unify.s_add, var3.Deref()),
											Data.F(unify.s_size_args, unify.posint1, var3.Deref(), var1.Deref())))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__36(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__37);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_size, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_cons, var1.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3, Data.F(unify.s_add, unify.posint2),
							Data.F(unify.s_size_args, unify.posint1, unify.posint2, var1.Deref())))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__37(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__38);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_size, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_atomic, var1.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__38(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__39);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_size, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s_var, var1.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__39(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__40);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_size_args, var1, var2, var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(
					Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s12, var1.Deref(), var2.Deref())), unify.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__40(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s_size_args, var1, var2, var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s3, Data.F(unify.s69, Data.F(unify.s11, var1.Deref(), var2.Deref())),
					Data.F(unify.s3, unify.s1, Data.F(unify.s3,
							Data.F(unify.s69, Data.F(unify.s_arg, var1.Deref(), var3.Deref(), var4)),
							Data.F(unify.s3, Data.F(unify.s_size, var4.Deref()), Data.F(unify.s3,
									Data.F(unify.s69,
											Data.F(unify.s_is, var5, Data.F(unify.s2, var1.Deref(), unify.posint1))),
									Data.F(unify.s_size_args, var5.Deref(), var2.Deref(), var3.Deref())))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_make_word_3 extends Code {

		/*
		
		make_word(_4040,_4032,_4036^(h+_4032),_4048):-my_compound(_4040,cut(1,termtag(_4040,_4036,_4048))).
		make_word(_4086,_4088,_4086,_4096):-var(_4086,cut(1,_4096)).
		make_word(_4130,_4132,tatm^_4130,_4140):-atomic(_4130,cut(1,_4140)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_make_word_3__1(mach);
		}

		public static Operation exec_pred_make_word_3__1(Prolog mach) {
			mach.FillAlternative(pred_make_word_3::exec_pred_make_word_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(unify.s14, var3, Data.F(unify.s2, unify.s_h, var2.Deref())))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(unify.s_termtag, var1.Deref(), var3.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_my_compound_1::exec_static;
		}

		public static Operation exec_pred_make_word_3__2(Prolog mach) {
			mach.FillAlternative(pred_make_word_3::exec_pred_make_word_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var1.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_var_1::exec_static;
		}

		public static Operation exec_pred_make_word_3__3(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(unify.s14, unify.s_tatm, var1.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_atomic_1::exec_static;
		}
	}

	public static class pred_add_3 extends Code {

		/*
		
		add(_4574,_4576,_4578,_4592):-is(_4578,_4576+_4574,_4592).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_add_3__1(mach);
		}

		public static Operation exec_pred_add_3__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = Data.F(unify.s2, var2.Deref(), var1.Deref());
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_myin_2 extends Code {

		/*
		
		myin(_4624,[_4620|_4622],_4634):-compare(_4626,_4624,_4620,in_2(_4626,_4624,_4622,_4634)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_myin_2__1(mach);
		}

		public static Operation exec_pred_myin_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(unify.s6, var2, var3))))
				return Prolog.Fail0;
			local_aregs[0] = var4;
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = Data.F(unify.s_in_2, var4.Deref(), var1.Deref(), var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_compare_3::exec_static;
		}
	}

	public static class pred_in_2_3 extends Code {

		/*
		
		in_2(=,_4670,_4672,_4682):-call(_4682).
		in_2(>,_4700,_4702,_4710):-myin(_4700,_4702,_4710).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_in_2_3__1(mach);
		}

		public static Operation exec_pred_in_2_3__1(Prolog mach) {
			mach.FillAlternative(pred_in_2_3::exec_pred_in_2_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(unify.s10)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_in_2_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(unify.s12)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_myin_2::exec_static;
		}
	}

	public static class pred_incl_3 extends Code {

		/*
		
		incl(_4736,_4738,_4740,_4748):-incl_2(_4738,_4736,_4740,_4748).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_incl_3__1(mach);
		}

		public static Operation exec_pred_incl_3__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_incl_2_3::exec_static;
		}
	}

	public static class pred_incl_2_3 extends Code {

		/*
		
		incl_2([],_4778,[_4778],_4790):-call(_4790).
		incl_2([_4810|_4812],_4814,_4816,_4826):-compare(_4818,_4814,_4810,incl_3(_4818,_4814,_4810,_4812,_4816,_4826)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_incl_2_3__1(mach);
		}

		public static Operation exec_pred_incl_2_3__1(Prolog mach) {
			mach.FillAlternative(pred_incl_2_3::exec_pred_incl_2_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(unify.s6, var1.Deref(), Const.Nil))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_incl_2_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(unify.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var5;
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(unify.s_incl_3, var5.Deref(), var3.Deref(), var1.Deref(), var2.Deref(),
					var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_compare_3::exec_static;
		}
	}

	public static class pred_incl_3_5 extends Code {

		/*
		
		incl_3(<,_4870,_4876,_4878,[_4870,_4876|_4878],_4888):-call(_4888).
		incl_3(=,_4916,_4912,_4914,[_4912|_4914],_4926):-call(_4926).
		incl_3(>,_4954,_4950,_4956,[_4950|_4952],_4964):-incl_2(_4956,_4954,_4952,_4964).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
			Term aregs[] = mach.RegPull(5);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_incl_3_5__1(mach);
		}

		public static Operation exec_pred_incl_3_5__1(Prolog mach) {
			mach.FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(unify.s9)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(Data.F(unify.s6, var1.Deref(), Data.F(unify.s6, var2.Deref(), var3.Deref())))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_incl_3_5__2(Prolog mach) {
			mach.FillAlternative(pred_incl_3_5::exec_pred_incl_3_5__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(unify.s10)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(Data.F(unify.s6, var2.Deref(), var3.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_incl_3_5__3(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(unify.s12)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(Data.F(unify.s6, var2.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[5] = local_aregs[4] = null;
			return (Operation) pred_incl_2_3::exec_static;
		}
	}

	public static class pred_my_compound_1 extends Code {

		/*
		
		my_compound(_4996,_5008):-nonvar(_4996,not(atomic(_4996),_5008)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_my_compound_1__1(mach);
		}

		public static Operation exec_pred_my_compound_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = Data.F(unify.s_not, Data.F(unify.s_atomic, var1.Deref()), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_nonvar_1::exec_static;
		}
	}

	public static class pred_cons_1 extends Code {

		/*
		
		cons(_5034,_5048):-nonvar(_5034,unify([_5038|_5040],_5034,_5048)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_cons_1__1(mach);
		}

		public static Operation exec_pred_cons_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = Data.F(unify.s_unify, Data.F(unify.s6, var2, var3), var1.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_nonvar_1::exec_static;
		}
	}

	public static class pred_structure_1 extends Code {

		/*
		
		structure(_5076,_5096):-my_compound(_5076,not(_5076=[_5080|_5082],_5096)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_structure_1__1(mach);
		}

		public static Operation exec_pred_structure_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = Data.F(unify.s_not, Data.F(unify.s10, var1.Deref(), Data.F(unify.s6, var2, var3)),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_my_compound_1::exec_static;
		}
	}

	public static class pred_termtag_2 extends Code {

		/*
		
		termtag(_5122,tstr,_5130):-structure(_5122,_5130).
		termtag(_5152,tlst,_5160):-cons(_5152,_5160).
		termtag(_5182,tatm,_5190):-atomic(_5182,_5190).
		termtag(_5212,tvar,_5220):-var(_5212,_5220).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_termtag_2__1(mach);
		}

		public static Operation exec_pred_termtag_2__1(Prolog mach) {
			mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(unify.s_tstr)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_structure_1::exec_static;
		}

		public static Operation exec_pred_termtag_2__2(Prolog mach) {
			mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(unify.s_tlst)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_cons_1::exec_static;
		}

		public static Operation exec_pred_termtag_2__3(Prolog mach) {
			mach.FillAlternative(pred_termtag_2::exec_pred_termtag_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(unify.s_tatm)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_atomic_1::exec_static;
		}

		public static Operation exec_pred_termtag_2__4(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(unify.s_tvar)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_var_1::exec_static;
		}
	}

}
