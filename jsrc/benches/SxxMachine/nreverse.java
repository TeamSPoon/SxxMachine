package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class nreverse /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern(".");
	final static Const s2 = Data.Intern(":-");
	final static Const s_call = Data.Intern("call");
	final static Const s_concatenate = Data.Intern("concatenate");
	final static Const s_nreverse = Data.Intern("nreverse");
	final static Const s_top = Data.Intern("top");
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
	final static Int posint11 = Data.Number(11L);
	final static Int posint12 = Data.Number(12L);
	final static Int posint13 = Data.Number(13L);
	final static Int posint14 = Data.Number(14L);
	final static Int posint15 = Data.Number(15L);
	final static Int posint16 = Data.Number(16L);
	final static Int posint17 = Data.Number(17L);
	final static Int posint18 = Data.Number(18L);
	final static Int posint19 = Data.Number(19L);
	final static Int posint20 = Data.Number(20L);
	final static Int posint21 = Data.Number(21L);
	final static Int posint22 = Data.Number(22L);
	final static Int posint23 = Data.Number(23L);
	final static Int posint24 = Data.Number(24L);
	final static Int posint25 = Data.Number(25L);
	final static Int posint26 = Data.Number(26L);
	final static Int posint27 = Data.Number(27L);
	final static Int posint28 = Data.Number(28L);
	final static Int posint29 = Data.Number(29L);
	final static Int posint30 = Data.Number(30L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_nreverse_0 = PredTable.Register("nreverse", 0, new pred_nreverse_0());
	final static Operation reg_nreverse_2 = PredTable.Register("nreverse", 2, new pred_nreverse_2());
	final static Operation reg_concatenate_3 = PredTable.Register("concatenate", 3, new pred_concatenate_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_5540):-nreverse(_5540).
		
		
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
			return (Operation) pred_nreverse_0::exec_static;
		}
	}

	public static class pred_nreverse_0 extends Code {

		/*
		
		nreverse(_5794):-nreverse([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30],_5772,_5794).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_nreverse_0__1(mach);
		}

		public static Operation exec_pred_nreverse_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Data.F(nreverse.s1, nreverse.posint1, Data.F(nreverse.s1, nreverse.posint2, Data.F(
					nreverse.s1, nreverse.posint3,
					Data.F(nreverse.s1, nreverse.posint4, Data.F(nreverse.s1, nreverse.posint5, Data.F(nreverse.s1,
							nreverse.posint6,
							Data.F(nreverse.s1, nreverse.posint7, Data.F(nreverse.s1, nreverse.posint8, Data.F(
									nreverse.s1, nreverse.posint9,
									Data.F(nreverse.s1, nreverse.posint10, Data.F(nreverse.s1, nreverse.posint11,
											Data.F(nreverse.s1, nreverse.posint12, Data.F(nreverse.s1,
													nreverse.posint13,
													Data.F(nreverse.s1, nreverse.posint14, Data.F(nreverse.s1,
															nreverse.posint15,
															Data.F(nreverse.s1, nreverse.posint16, Data.F(nreverse.s1,
																	nreverse.posint17,
																	Data.F(nreverse.s1, nreverse.posint18, Data.F(
																			nreverse.s1, nreverse.posint19,
																			Data.F(nreverse.s1, nreverse.posint20,
																					Data.F(nreverse.s1,
																							nreverse.posint21,
																							Data.F(nreverse.s1,
																									nreverse.posint22,
																									Data.F(nreverse.s1,
																											nreverse.posint23,
																											Data.F(nreverse.s1,
																													nreverse.posint24,
																													Data.F(nreverse.s1,
																															nreverse.posint25,
																															Data.F(nreverse.s1,
																																	nreverse.posint26,
																																	Data.F(nreverse.s1,
																																			nreverse.posint27,
																																			Data.F(nreverse.s1,
																																					nreverse.posint28,
																																					Data.F(nreverse.s1,
																																							nreverse.posint29,
																																							Data.F(nreverse.s1,
																																									nreverse.posint30,
																																									Const.Nil))))))))))))))))))))))))))))));
			local_aregs[1] = var1;
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_nreverse_2::exec_static;
		}
	}

	public static class pred_nreverse_2 extends Code {

		/*
		
		nreverse([_5878|_5880],_5886,_5946):-nreverse(_5880,_5892,concatenate(_5892,[_5878],_5886,_5946)).
		nreverse([],[],_6140):-call(_6140).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_nreverse_2__1(mach);
		}

		public static Operation exec_pred_nreverse_2__1(Prolog mach) {
			mach.FillAlternative(pred_nreverse_2::exec_pred_nreverse_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nreverse.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var4;
			local_aregs[2] = Data.F(nreverse.s_concatenate, var4.Deref(), Data.F(nreverse.s1, var1.Deref(), Const.Nil),
					var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_nreverse_2::exec_static;
		}

		public static Operation exec_pred_nreverse_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_concatenate_3 extends Code {

		/*
		
		concatenate([_6218|_6220],_6232,[_6218|_6226],_6282):-concatenate(_6220,_6232,_6226,_6282).
		concatenate([],_6418,_6418,_6442):-call(_6442).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_concatenate_3__1(mach);
		}

		public static Operation exec_pred_concatenate_3__1(Prolog mach) {
			mach.FillAlternative(pred_concatenate_3::exec_pred_concatenate_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nreverse.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nreverse.s1, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_concatenate_3::exec_static;
		}

		public static Operation exec_pred_concatenate_3__2(Prolog mach) {
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

}
