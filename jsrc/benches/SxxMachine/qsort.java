package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class qsort /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern(".");
	final static Const s2 = Data.Intern(":-");
	final static Const s_call = Data.Intern("call");
	final static Const s_partition = Data.Intern("partition");
	final static Const s_qsort = Data.Intern("qsort");
	final static Const s_smallerorequal = Data.Intern("smallerorequal");
	final static Const s_top = Data.Intern("top");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Int posint4 = Data.Number(4L);
	final static Int posint6 = Data.Number(6L);
	final static Int posint7 = Data.Number(7L);
	final static Int posint8 = Data.Number(8L);
	final static Int posint10 = Data.Number(10L);
	final static Int posint11 = Data.Number(11L);
	final static Int posint17 = Data.Number(17L);
	final static Int posint18 = Data.Number(18L);
	final static Int posint21 = Data.Number(21L);
	final static Int posint27 = Data.Number(27L);
	final static Int posint28 = Data.Number(28L);
	final static Int posint29 = Data.Number(29L);
	final static Int posint31 = Data.Number(31L);
	final static Int posint32 = Data.Number(32L);
	final static Int posint33 = Data.Number(33L);
	final static Int posint37 = Data.Number(37L);
	final static Int posint39 = Data.Number(39L);
	final static Int posint40 = Data.Number(40L);
	final static Int posint46 = Data.Number(46L);
	final static Int posint47 = Data.Number(47L);
	final static Int posint51 = Data.Number(51L);
	final static Int posint53 = Data.Number(53L);
	final static Int posint55 = Data.Number(55L);
	final static Int posint59 = Data.Number(59L);
	final static Int posint61 = Data.Number(61L);
	final static Int posint63 = Data.Number(63L);
	final static Int posint65 = Data.Number(65L);
	final static Int posint66 = Data.Number(66L);
	final static Int posint74 = Data.Number(74L);
	final static Int posint75 = Data.Number(75L);
	final static Int posint81 = Data.Number(81L);
	final static Int posint82 = Data.Number(82L);
	final static Int posint83 = Data.Number(83L);
	final static Int posint85 = Data.Number(85L);
	final static Int posint90 = Data.Number(90L);
	final static Int posint92 = Data.Number(92L);
	final static Int posint94 = Data.Number(94L);
	final static Int posint95 = Data.Number(95L);
	final static Int posint99 = Data.Number(99L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_qsort_0 = PredTable.Register("qsort", 0, new pred_qsort_0());
	final static Operation reg_qsort_3 = PredTable.Register("qsort", 3, new pred_qsort_3());
	final static Operation reg_partition_4 = PredTable.Register("partition", 4, new pred_partition_4());

	public static class pred_top_0 extends Code {

		/*
		
		top(_5432):-qsort(_5432).
		
		
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
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_qsort_0::exec_static;
		}
	}

	public static class pred_qsort_0 extends Code {

		/*
		
		qsort(_5808):-qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,40,53,59,8],_5784,[],_5808).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_qsort_0__1(mach);
		}

		public static Operation exec_pred_qsort_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Data.F(qsort.s1, qsort.posint27, Data.F(qsort.s1, qsort.posint74, Data.F(qsort.s1,
					qsort.posint17, Data.F(qsort.s1, qsort.posint33, Data.F(qsort.s1, qsort.posint94, Data.F(qsort.s1,
							qsort.posint18, Data.F(qsort.s1, qsort.posint46, Data.F(qsort.s1, qsort.posint83, Data.F(
									qsort.s1, qsort.posint65,
									Data.F(qsort.s1, qsort.posint2, Data.F(qsort.s1, qsort.posint32, Data.F(qsort.s1,
											qsort.posint53,
											Data.F(qsort.s1, qsort.posint28, Data.F(qsort.s1, qsort.posint85, Data.F(
													qsort.s1, qsort.posint99,
													Data.F(qsort.s1, qsort.posint47, Data.F(qsort.s1, qsort.posint28,
															Data.F(qsort.s1, qsort.posint82, Data.F(qsort.s1,
																	qsort.posint6,
																	Data.F(qsort.s1, qsort.posint11, Data.F(qsort.s1,
																			qsort.posint55,
																			Data.F(qsort.s1, qsort.posint29, Data.F(
																					qsort.s1, qsort.posint39,
																					Data.F(qsort.s1, qsort.posint81,
																							Data.F(qsort.s1,
																									qsort.posint90,
																									Data.F(qsort.s1,
																											qsort.posint37,
																											Data.F(qsort.s1,
																													qsort.posint10,
																													Data.F(qsort.s1,
																															qsort.posint0,
																															Data.F(qsort.s1,
																																	qsort.posint66,
																																	Data.F(qsort.s1,
																																			qsort.posint51,
																																			Data.F(qsort.s1,
																																					qsort.posint7,
																																					Data.F(qsort.s1,
																																							qsort.posint21,
																																							Data.F(qsort.s1,
																																									qsort.posint85,
																																									Data.F(qsort.s1,
																																											qsort.posint27,
																																											Data.F(qsort.s1,
																																													qsort.posint31,
																																													Data.F(qsort.s1,
																																															qsort.posint63,
																																															Data.F(qsort.s1,
																																																	qsort.posint75,
																																																	Data.F(qsort.s1,
																																																			qsort.posint4,
																																																			Data.F(qsort.s1,
																																																					qsort.posint95,
																																																					Data.F(qsort.s1,
																																																							qsort.posint99,
																																																							Data.F(qsort.s1,
																																																									qsort.posint11,
																																																									Data.F(qsort.s1,
																																																											qsort.posint28,
																																																											Data.F(qsort.s1,
																																																													qsort.posint61,
																																																													Data.F(qsort.s1,
																																																															qsort.posint74,
																																																															Data.F(qsort.s1,
																																																																	qsort.posint18,
																																																																	Data.F(qsort.s1,
																																																																			qsort.posint92,
																																																																			Data.F(qsort.s1,
																																																																					qsort.posint40,
																																																																					Data.F(qsort.s1,
																																																																							qsort.posint53,
																																																																							Data.F(qsort.s1,
																																																																									qsort.posint59,
																																																																									Data.F(qsort.s1,
																																																																											qsort.posint8,
																																																																											Const.Nil))))))))))))))))))))))))))))))))))))))))))))))))));
			local_aregs[1] = var1;
			local_aregs[2] = Const.Nil;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_qsort_3::exec_static;
		}
	}

	public static class pred_qsort_3 extends Code {

		/*
		
		qsort([_5906|_5908],_5914,_5916,_6000):-partition(_5908,_5906,_5924,_5926,qsort(_5926,_5932,_5916,qsort(_5924,_5914,[_5906|_5932],_6000))).
		qsort([],_6272,_6272,_6296):-call(_6296).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_qsort_3__1(mach);
		}

		public static Operation exec_pred_qsort_3__1(Prolog mach) {
			mach.FillAlternative(pred_qsort_3::exec_pred_qsort_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
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
			if (!((areg0).Unify(Data.F(qsort.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var5;
			local_aregs[3] = var6;
			local_aregs[4] = Data.F(qsort.s_qsort, var6.Deref(), var7, var4.Deref(), Data.F(qsort.s_qsort, var5.Deref(),
					var3.Deref(), Data.F(qsort.s1, var1.Deref(), var7.Deref()), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_partition_4::exec_static;
		}

		public static Operation exec_pred_qsort_3__2(Prolog mach) {
			mach.RemoveChoice();
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
			if (!((areg2).Unify(var1.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_partition_4 extends Code {

		/*
		
		partition([_6388|_6390],_6402,[_6388|_6396],_6406,_6480):-smallerorequal(_6388,_6402,cut(1,partition(_6390,_6402,_6396,_6406,_6480))).
		partition([_6698|_6700],_6712,_6714,[_6698|_6706],_6772):-partition(_6700,_6712,_6714,_6706,_6772).
		partition([],_6930,[],[],_6956):-call(_6956).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_partition_4__1(mach);
		}

		public static Operation exec_pred_partition_4__1(Prolog mach) {
			mach.FillAlternative(pred_partition_4::exec_pred_partition_4__2);
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
			if (!((areg0).Unify(Data.F(qsort.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(qsort.s1, var1.Deref(), var4))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(
					Data.F(qsort.s_partition, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_partition_4__2(Prolog mach) {
			mach.FillAlternative(pred_partition_4::exec_pred_partition_4__3);
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
			if (!((areg0).Unify(Data.F(qsort.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(qsort.s1, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var5.Deref();
			local_aregs[4] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_partition_4::exec_static;
		}

		public static Operation exec_pred_partition_4__3(Prolog mach) {
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
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
