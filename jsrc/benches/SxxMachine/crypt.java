package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class crypt /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("*");
	final static Const s2 = Data.Intern("+");
	final static Const s3 = Data.Intern(".");
	final static Const s4 = Data.Intern("//");
	final static Const s5 = Data.Intern(":-");
	final static Const s_call = Data.Intern("call");
	final static Const s_even = Data.Intern("even");
	final static Const s_is = Data.Intern("is");
	final static Const s_lefteven = Data.Intern("lefteven");
	final static Const s_mod = Data.Intern("mod");
	final static Const s_mult = Data.Intern("mult");
	final static Const s_odd = Data.Intern("odd");
	final static Const s_sum = Data.Intern("sum");
	final static Const s_top = Data.Intern("top");
	final static Const s_zero = Data.Intern("zero");
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
	final static Operation reg_sum_3 = PredTable.Register("sum", 3, new pred_sum_3());
	final static Operation reg_sum_4 = PredTable.Register("sum", 4, new pred_sum_4());
	final static Operation reg_mult_3 = PredTable.Register("mult", 3, new pred_mult_3());
	final static Operation reg_mult_4 = PredTable.Register("mult", 4, new pred_mult_4());
	final static Operation reg_zero_1 = PredTable.Register("zero", 1, new pred_zero_1());
	final static Operation reg_odd_1 = PredTable.Register("odd", 1, new pred_odd_1());
	final static Operation reg_even_1 = PredTable.Register("even", 1, new pred_even_1());
	final static Operation reg_lefteven_1 = PredTable.Register("lefteven", 1, new pred_lefteven_1());

	public static class pred_top_0 extends Code {

		/*
		
		top(_5892):-odd(_5498,even(_5502,even(_5506,even(_5510,mult([_5506,_5502,_5498],_5510,[_5532,_5538,_5544,_5550|_5552],lefteven(_5550,odd(_5544,even(_5538,even(_5532,zero(_5552,lefteven(_5584,mult([_5506,_5502,_5498],_5584,[_5606,_5612,_5618|_5620],lefteven(_5618,odd(_5612,even(_5606,zero(_5620,sum([_5532,_5538,_5544,_5550],[0,_5606,_5612,_5618],[_5696,_5702,_5708,_5714|_5716],odd(_5714,odd(_5708,even(_5702,even(_5696,zero(_5716,_5892)))))))))))))))))))))).
		
		
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
			Var var19 = Data.V(mach);
			Var var18 = Data.V(mach);
			Var var17 = Data.V(mach);
			Var var16 = Data.V(mach);
			Var var15 = Data.V(mach);
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
			local_aregs[0] = var1;
			local_aregs[1] = Data.F(crypt.s_even, var2,
					Data.F(crypt.s_even, var3,
							Data.F(crypt.s_even, var4,
									Data.F(crypt.s_mult,
											Data.F(crypt.s3, var3.Deref(), Data.F(
													crypt.s3, var2.Deref(), Data.F(crypt.s3, var1.Deref(), Const.Nil))),
											var4.Deref(),
											Data.F(crypt.s3, var5,
													Data.F(crypt.s3, var6,
															Data.F(crypt.s3, var7, Data.F(crypt.s3, var8, var9)))),
											Data.F(crypt.s_lefteven, var8.Deref(), Data.F(crypt.s_odd, var7.Deref(),
													Data.F(crypt.s_even, var6.Deref(), Data.F(crypt.s_even,
															var5.Deref(),
															Data.F(crypt.s_zero, var9.Deref(), Data.F(
																	crypt.s_lefteven, var10,
																	Data.F(crypt.s_mult, Data.F(crypt.s3, var3.Deref(),
																			Data.F(crypt.s3, var2.Deref(),
																					Data.F(crypt.s3, var1.Deref(),
																							Const.Nil))),
																			var10.Deref(),
																			Data.F(crypt.s3, var11,
																					Data.F(crypt.s3, var12,
																							Data.F(crypt.s3, var13,
																									var14))),
																			Data.F(crypt.s_lefteven, var13.Deref(),
																					Data.F(crypt.s_odd, var12.Deref(),
																							Data.F(crypt.s_even,
																									var11.Deref(),
																									Data.F(crypt.s_zero,
																											var14.Deref(),
																											Data.F(crypt.s_sum,
																													Data.F(crypt.s3,
																															var5.Deref(),
																															Data.F(crypt.s3,
																																	var6.Deref(),
																																	Data.F(crypt.s3,
																																			var7.Deref(),
																																			Data.F(crypt.s3,
																																					var8.Deref(),
																																					Const.Nil)))),
																													Data.F(crypt.s3,
																															crypt.posint0,
																															Data.F(crypt.s3,
																																	var11.Deref(),
																																	Data.F(crypt.s3,
																																			var12.Deref(),
																																			Data.F(crypt.s3,
																																					var13.Deref(),
																																					Const.Nil)))),
																													Data.F(crypt.s3,
																															var15,
																															Data.F(crypt.s3,
																																	var16,
																																	Data.F(crypt.s3,
																																			var17,
																																			Data.F(crypt.s3,
																																					var18,
																																					var19)))),
																													Data.F(crypt.s_odd,
																															var18.Deref(),
																															Data.F(crypt.s_odd,
																																	var17.Deref(),
																																	Data.F(crypt.s_even,
																																			var16.Deref(),
																																			Data.F(crypt.s_even,
																																					var15.Deref(),
																																					Data.F(crypt.s_zero,
																																							var19.Deref(),
																																							continuation)))))))))))))))))))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_odd_1::exec_static;
		}
	}

	public static class pred_sum_3 extends Code {

		/*
		
		sum(_6796,_6798,_6800,_6850):-sum(_6796,_6798,0,_6800,_6850).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_sum_3__1(mach);
		}

		public static Operation exec_pred_sum_3__1(Prolog mach) {
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = crypt.posint0;
			local_aregs[3] = var3.Deref();
			local_aregs[4] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_sum_4::exec_static;
		}
	}

	public static class pred_sum_4 extends Code {

		/*
		
		sum([_6986|_6988],[_6992|_6994],_7008,[_6998|_7000],_7132):-cut(1,is(_7026,_6986+_6992+_7008,is(_6998,_7026 mod 10,is(_7050,_7026//10,sum(_6988,_6994,_7050,_7000,_7132))))).
		sum([],_7440,0,_7440,_7490):-cut(1,_7490).
		sum(_7568,[],0,_7568,_7620):-cut(1,_7620).
		sum([],[_7698|_7700],_7714,[_7704|_7706],_7832):-cut(1,is(_7726,_7698+_7714,is(_7738,_7726//10,is(_7704,_7726 mod 10,sum([],_7700,_7738,_7706,_7832))))).
		sum([_8138|_8140],[],_8154,[_8144|_8146],_8272):-cut(1,is(_8166,_8138+_8154,is(_8178,_8166//10,is(_8144,_8166 mod 10,sum([],_8140,_8178,_8146,_8272))))).
		sum([],[],_8578,[_8578],_8612):-call(_8612).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_sum_4__1(mach);
		}

		public static Operation exec_pred_sum_4__1(Prolog mach) {
			mach.FillAlternative(pred_sum_4::exec_pred_sum_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
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
			if (!((areg0).Unify(Data.F(crypt.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(crypt.s3, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(crypt.s3, var6, var7))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(crypt.s_is, var8,
					Data.F(crypt.s2, Data.F(crypt.s2, var1.Deref(), var3.Deref()), var5.Deref()),
					Data.F(crypt.s_is, var6.Deref(), Data.F(crypt.s_mod, var8.Deref(), crypt.posint10),
							Data.F(crypt.s_is, var9, Data.F(crypt.s4, var8.Deref(), crypt.posint10), Data.F(crypt.s_sum,
									var2.Deref(), var4.Deref(), var9.Deref(), var7.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_sum_4__2(Prolog mach) {
			mach.FillAlternative(pred_sum_4::exec_pred_sum_4__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(crypt.posint0)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var1.Deref())))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_sum_4__3(Prolog mach) {
			mach.FillAlternative(pred_sum_4::exec_pred_sum_4__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(crypt.posint0)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var1.Deref())))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_sum_4__4(Prolog mach) {
			mach.FillAlternative(pred_sum_4::exec_pred_sum_4__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(crypt.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(crypt.s3, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(crypt.s_is, var6, Data.F(crypt.s2, var1.Deref(), var3.Deref()),
					Data.F(crypt.s_is, var7, Data.F(crypt.s4, var6.Deref(), crypt.posint10), Data.F(
							crypt.s_is, var4.Deref(), Data.F(crypt.s_mod, var6.Deref(), crypt.posint10),
							Data.F(crypt.s_sum, Const.Nil, var2.Deref(), var7.Deref(), var5.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_sum_4__5(Prolog mach) {
			mach.FillAlternative(pred_sum_4::exec_pred_sum_4__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(crypt.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(crypt.s3, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(crypt.s_is, var6, Data.F(crypt.s2, var1.Deref(), var3.Deref()),
					Data.F(crypt.s_is, var7, Data.F(crypt.s4, var6.Deref(), crypt.posint10), Data.F(
							crypt.s_is, var4.Deref(), Data.F(crypt.s_mod, var6.Deref(), crypt.posint10),
							Data.F(crypt.s_sum, Const.Nil, var2.Deref(), var7.Deref(), var5.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_sum_4__6(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(crypt.s3, var1.Deref(), Const.Nil))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_mult_3 extends Code {

		/*
		
		mult(_8718,_8720,_8722,_8772):-mult(_8718,_8720,0,_8722,_8772).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_mult_3__1(mach);
		}

		public static Operation exec_pred_mult_3__1(Prolog mach) {
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = crypt.posint0;
			local_aregs[3] = var3.Deref();
			local_aregs[4] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_mult_4::exec_static;
		}
	}

	public static class pred_mult_4 extends Code {

		/*
		
		mult([_8920|_8922],_8934,_8936,[_8926|_8928],_9054):-is(_8954,_8920*_8934+_8936,is(_8926,_8954 mod 10,is(_8978,_8954//10,mult(_8922,_8934,_8978,_8928,_9054)))).
		mult([],_9380,_9382,[_9366,_9372],_9460):-is(_9366,_9382 mod 10,is(_9372,_9382//10,_9460)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_mult_4__1(mach);
		}

		public static Operation exec_pred_mult_4__1(Prolog mach) {
			mach.FillAlternative(pred_mult_4::exec_pred_mult_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
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
			if (!((areg0).Unify(Data.F(crypt.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(crypt.s3, var5, var6))))
				return Prolog.Fail0;
			local_aregs[0] = var7;
			local_aregs[1] = Data.F(crypt.s2, Data.F(crypt.s1, var1.Deref(), var3.Deref()), var4.Deref());
			local_aregs[2] = Data.F(crypt.s_is, var5.Deref(), Data.F(crypt.s_mod, var7.Deref(), crypt.posint10), Data.F(
					crypt.s_is, var8, Data.F(crypt.s4, var7.Deref(), crypt.posint10),
					Data.F(crypt.s_mult, var2.Deref(), var3.Deref(), var8.Deref(), var6.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}

		public static Operation exec_pred_mult_4__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(crypt.s3, var3, Data.F(crypt.s3, var4, Const.Nil)))))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = Data.F(crypt.s_mod, var2.Deref(), crypt.posint10);
			local_aregs[2] = Data.F(crypt.s_is, var4.Deref(), Data.F(crypt.s4, var2.Deref(), crypt.posint10),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_zero_1 extends Code {

		/*
		
		zero([],_9666):-call(_9666).
		zero([0|_9750],_9786):-zero(_9750,_9786).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_zero_1__1(mach);
		}

		public static Operation exec_pred_zero_1__1(Prolog mach) {
			mach.FillAlternative(pred_zero_1::exec_pred_zero_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_zero_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(crypt.s3, crypt.posint0, var1))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_zero_1::exec_static;
		}
	}

	public static class pred_odd_1 extends Code {

		/*
		
		odd(1,_9910):-call(_9910).
		odd(3,_10020):-call(_10020).
		odd(5,_10130):-call(_10130).
		odd(7,_10240):-call(_10240).
		odd(9,_10350):-call(_10350).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_odd_1__1(mach);
		}

		public static Operation exec_pred_odd_1__1(Prolog mach) {
			mach.FillAlternative(pred_odd_1::exec_pred_odd_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint1)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_odd_1__2(Prolog mach) {
			mach.FillAlternative(pred_odd_1::exec_pred_odd_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint3)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_odd_1__3(Prolog mach) {
			mach.FillAlternative(pred_odd_1::exec_pred_odd_1__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint5)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_odd_1__4(Prolog mach) {
			mach.FillAlternative(pred_odd_1::exec_pred_odd_1__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint7)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_odd_1__5(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint9)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_even_1 extends Code {

		/*
		
		even(0,_10460):-call(_10460).
		even(2,_10576):-call(_10576).
		even(4,_10692):-call(_10692).
		even(6,_10808):-call(_10808).
		even(8,_10924):-call(_10924).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_even_1__1(mach);
		}

		public static Operation exec_pred_even_1__1(Prolog mach) {
			mach.FillAlternative(pred_even_1::exec_pred_even_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint0)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_even_1__2(Prolog mach) {
			mach.FillAlternative(pred_even_1::exec_pred_even_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint2)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_even_1__3(Prolog mach) {
			mach.FillAlternative(pred_even_1::exec_pred_even_1__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint4)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_even_1__4(Prolog mach) {
			mach.FillAlternative(pred_even_1::exec_pred_even_1__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint6)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_even_1__5(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint8)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_lefteven_1 extends Code {

		/*
		
		lefteven(2,_11040):-call(_11040).
		lefteven(4,_11162):-call(_11162).
		lefteven(6,_11284):-call(_11284).
		lefteven(8,_11406):-call(_11406).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_lefteven_1__1(mach);
		}

		public static Operation exec_pred_lefteven_1__1(Prolog mach) {
			mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint2)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_lefteven_1__2(Prolog mach) {
			mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint4)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_lefteven_1__3(Prolog mach) {
			mach.FillAlternative(pred_lefteven_1::exec_pred_lefteven_1__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint6)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_lefteven_1__4(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(crypt.posint8)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
