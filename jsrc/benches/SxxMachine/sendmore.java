package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class sendmore /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("+");
	final static Const s2 = Data.Intern(",");
	final static Const s3 = Data.Intern("-");
	final static Const s4 = Data.Intern("->");
	final static Const s5 = Data.Intern(".");
	final static Const s6 = Data.Intern(":-");
	final static Const s7 = Data.Intern("<");
	final static Const s8 = Data.Intern("=");
	final static Const s9 = Data.Intern("=\\=");
	final static Const s_call = Data.Intern("call");
	final static Const s_digit = Data.Intern("digit");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_is = Data.Intern("is");
	final static Const s_leftdigit = Data.Intern("leftdigit");
	final static Const s_or = Data.Intern("or");
	final static Const s_sumdigit = Data.Intern("sumdigit");
	final static Const s_top = Data.Intern("top");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Int posint3 = Data.Number(3L);
	final static Int posint4 = Data.Number(4L);
	final static Int posint5 = Data.Number(5L);
	final static Int posint6 = Data.Number(6L);
	final static Int posint7 = Data.Number(7L);
	final static Int posint8 = Data.Number(8L);
	final static Int posint9 = Data.Number(9L);
	final static Int posint10 = Data.Number(10L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_sumdigit_5 = PredTable.Register("sumdigit", 5, new pred_sumdigit_5());
	final static Operation reg_digit_1 = PredTable.Register("digit", 1, new pred_digit_1());
	final static Operation reg_leftdigit_1 = PredTable.Register("leftdigit", 1, new pred_leftdigit_1());

	public static class pred_top_0 extends Code {

		/*
		
		top(_5922):-digit(_5450,digit(_5454,=\=(_5450,_5454,sumdigit(0,_5450,_5454,_5470,_5472,digit(_5476,=\=(_5476,_5470,=\=(_5476,_5454,=\=(_5476,_5450,digit(_5498,=\=(_5498,_5476,=\=(_5498,_5470,=\=(_5498,_5454,=\=(_5498,_5450,sumdigit(_5472,_5476,_5498,_5454,_5534,digit(_5538,=\=(_5538,_5498,=\=(_5538,_5476,=\=(_5538,_5470,=\=(_5538,_5454,=\=(_5538,_5450,sumdigit(_5534,_5454,_5538,_5476,_5580,leftdigit(_5584,=\=(_5584,_5538,=\=(_5584,_5498,=\=(_5584,_5476,=\=(_5584,_5470,=\=(_5584,_5454,=\=(_5584,_5450,leftdigit(_5624,=\=(_5624,_5584,=\=(_5624,_5538,=\=(_5624,_5498,=\=(_5624,_5476,=\=(_5624,_5470,=\=(_5624,_5454,=\=(_5624,_5450,sumdigit(_5580,_5584,_5624,_5538,_5624,fail(_5922)))))))))))))))))))))))))))))))))))))).
		top(_7910):-call(_7910).
		
		
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
			mach.FillAlternative(pred_top_0::exec_pred_top_0__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
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
			local_aregs[0] = var1;
			local_aregs[1] = Data.F(sendmore.s_digit, var2, Data.F(sendmore.s9, var1.Deref(), var2.Deref(), Data.F(
					sendmore.s_sumdigit, sendmore.posint0, var1.Deref(), var2.Deref(), var3, var4,
					Data.F(sendmore.s_digit, var5, Data.F(sendmore.s9, var5.Deref(), var3.Deref(), Data.F(sendmore.s9,
							var5.Deref(), var2.Deref(),
							Data.F(sendmore.s9, var5.Deref(), var1.Deref(), Data.F(sendmore.s_digit, var6, Data.F(
									sendmore.s9, var6.Deref(), var5.Deref(),
									Data.F(sendmore.s9, var6.Deref(), var3.Deref(), Data.F(sendmore.s9, var6.Deref(),
											var2.Deref(),
											Data.F(sendmore.s9, var6.Deref(), var1.Deref(), Data.F(sendmore.s_sumdigit,
													var4.Deref(), var5.Deref(), var6.Deref(), var2.Deref(), var7,
													Data.F(sendmore.s_digit, var8, Data.F(sendmore.s9, var8.Deref(),
															var6.Deref(),
															Data.F(sendmore.s9, var8.Deref(), var5.Deref(), Data.F(
																	sendmore.s9, var8.Deref(), var3.Deref(),
																	Data.F(sendmore.s9, var8.Deref(), var2.Deref(),
																			Data.F(sendmore.s9, var8.Deref(),
																					var1.Deref(),
																					Data.F(sendmore.s_sumdigit,
																							var7.Deref(), var2.Deref(),
																							var8.Deref(), var5.Deref(),
																							var9,
																							Data.F(sendmore.s_leftdigit,
																									var10,
																									Data.F(sendmore.s9,
																											var10.Deref(),
																											var8.Deref(),
																											Data.F(sendmore.s9,
																													var10.Deref(),
																													var6.Deref(),
																													Data.F(sendmore.s9,
																															var10.Deref(),
																															var5.Deref(),
																															Data.F(sendmore.s9,
																																	var10.Deref(),
																																	var3.Deref(),
																																	Data.F(sendmore.s9,
																																			var10.Deref(),
																																			var2.Deref(),
																																			Data.F(sendmore.s9,
																																					var10.Deref(),
																																					var1.Deref(),
																																					Data.F(sendmore.s_leftdigit,
																																							var11,
																																							Data.F(sendmore.s9,
																																									var11.Deref(),
																																									var10.Deref(),
																																									Data.F(sendmore.s9,
																																											var11.Deref(),
																																											var8.Deref(),
																																											Data.F(sendmore.s9,
																																													var11.Deref(),
																																													var6.Deref(),
																																													Data.F(sendmore.s9,
																																															var11.Deref(),
																																															var5.Deref(),
																																															Data.F(sendmore.s9,
																																																	var11.Deref(),
																																																	var3.Deref(),
																																																	Data.F(sendmore.s9,
																																																			var11.Deref(),
																																																			var2.Deref(),
																																																			Data.F(sendmore.s9,
																																																					var11.Deref(),
																																																					var1.Deref(),
																																																					Data.F(sendmore.s_sumdigit,
																																																							var9.Deref(),
																																																							var10.Deref(),
																																																							var11.Deref(),
																																																							var8.Deref(),
																																																							var11.Deref(),
																																																							Data.F(sendmore.s_fail,
																																																									continuation)))))))))))))))))))))))))))))))))))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_digit_1::exec_static;
		}

		public static Operation exec_pred_top_0__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}
	}

	public static class pred_sumdigit_5 extends Code {

		/*
		
		sumdigit(_7948,_7950,_7952,_7954,_7956,_8092):-is(_7972,_7948+_7950+_7952,or((_7972<10->_7954=_7972,_7956=0),(_7954 is _7972-10,_7956=1),_8092)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
			Term aregs[] = mach.RegPull(5);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_sumdigit_5__1(mach);
		}

		public static Operation exec_pred_sumdigit_5__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
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
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var6;
			local_aregs[1] = Data.F(sendmore.s1, Data.F(sendmore.s1, var1.Deref(), var2.Deref()), var3.Deref());
			local_aregs[2] = Data.F(sendmore.s_or,
					Data.F(sendmore.s4, Data.F(sendmore.s7, var6.Deref(), sendmore.posint10),
							Data.F(sendmore.s2, Data.F(sendmore.s8, var4.Deref(), var6.Deref()),
									Data.F(sendmore.s8, var5.Deref(), sendmore.posint0))),
					Data.F(sendmore.s2,
							Data.F(sendmore.s_is, var4.Deref(), Data.F(sendmore.s3, var6.Deref(), sendmore.posint10)),
							Data.F(sendmore.s8, var5.Deref(), sendmore.posint1)),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_digit_1 extends Code {

		/*
		
		digit(0,_8294):-call(_8294).
		digit(1,_8380):-call(_8380).
		digit(2,_8466):-call(_8466).
		digit(3,_8552):-call(_8552).
		digit(4,_8638):-call(_8638).
		digit(5,_8724):-call(_8724).
		digit(6,_8810):-call(_8810).
		digit(7,_8896):-call(_8896).
		digit(8,_8982):-call(_8982).
		digit(9,_9068):-call(_9068).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_digit_1__1(mach);
		}

		public static Operation exec_pred_digit_1__1(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint0)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__2(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint1)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__3(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint2)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__4(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint3)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__5(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint4)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__6(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint5)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__7(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint6)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__8(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint7)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__9(Prolog mach) {
			mach.FillAlternative(pred_digit_1::exec_pred_digit_1__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint8)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_digit_1__10(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint9)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_leftdigit_1 extends Code {

		/*
		
		leftdigit(1,_9154):-call(_9154).
		leftdigit(2,_9246):-call(_9246).
		leftdigit(3,_9338):-call(_9338).
		leftdigit(4,_9430):-call(_9430).
		leftdigit(5,_9522):-call(_9522).
		leftdigit(6,_9614):-call(_9614).
		leftdigit(7,_9706):-call(_9706).
		leftdigit(8,_9798):-call(_9798).
		leftdigit(9,_9890):-call(_9890).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_leftdigit_1__1(mach);
		}

		public static Operation exec_pred_leftdigit_1__1(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint1)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__2(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint2)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__3(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint3)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__4(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint4)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__5(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint5)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__6(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint6)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__7(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint7)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__8(Prolog mach) {
			mach.FillAlternative(pred_leftdigit_1::exec_pred_leftdigit_1__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint8)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_leftdigit_1__9(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sendmore.posint9)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
