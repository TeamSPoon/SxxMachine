package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class times10 /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("*");
	final static Const s2 = Data.Intern("+");
	final static Const s3 = Data.Intern("-");
	final static Const s4 = Data.Intern(".");
	final static Const s5 = Data.Intern("/");
	final static Const s6 = Data.Intern(":-");
	final static Const s7 = Data.Intern("^");
	final static Const s_call = Data.Intern("call");
	final static Const s_d = Data.Intern("d");
	final static Const s_exp = Data.Intern("exp");
	final static Const s_integer = Data.Intern("integer");
	final static Const s_is = Data.Intern("is");
	final static Const s_log = Data.Intern("log");
	final static Const s_times10 = Data.Intern("times10");
	final static Const s_top = Data.Intern("top");
	final static Const s_x = Data.Intern("x");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_times10_0 = PredTable.Register("times10", 0, new pred_times10_0());
	final static Operation reg_d_3 = PredTable.Register("d", 3, new pred_d_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_10112):-times10(_10112).
		
		
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
			return (Operation) pred_times10_0::exec_static;
		}
	}

	public static class pred_times10_0 extends Code {

		/*
		
		times10(_10242):-d(x*x*x*x*x*x*x*x*x*x,x,_10220,_10242).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_times10_0__1(mach);
		}

		public static Operation exec_pred_times10_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Data
					.F(times10.s1,
							Data.F(times10.s1,
									Data.F(times10.s1,
											Data.F(times10.s1, Data.F(times10.s1, Data.F(times10.s1, Data.F(times10.s1,
													Data.F(times10.s1, Data.F(times10.s1, times10.s_x, times10.s_x),
															times10.s_x),
													times10.s_x), times10.s_x), times10.s_x), times10.s_x),
											times10.s_x),
									times10.s_x),
							times10.s_x);
			local_aregs[1] = times10.s_x;
			local_aregs[2] = var1;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_d_3::exec_static;
		}
	}

	public static class pred_d_3 extends Code {

		/*
		
		d(_10340+_10342,_10354,_10346+_10348,_10424):-cut(1,d(_10340,_10354,_10346,d(_10342,_10354,_10348,_10424))).
		d(_10622-_10624,_10636,_10628-_10630,_10706):-cut(1,d(_10622,_10636,_10628,d(_10624,_10636,_10630,_10706))).
		d(_10904*_10906,_10930,_10910*_10906+_10904*_10918,_11000):-cut(1,d(_10904,_10930,_10910,d(_10906,_10930,_10918,_11000))).
		d(_11198/_11200,_11236,(_11204*_11200-_11198*_11212)/_11200^2,_11306):-cut(1,d(_11198,_11236,_11204,d(_11200,_11236,_11212,_11306))).
		d(_11504^_11506,_11530,_11510*_11506*_11504^_11518,_11614):-cut(1,integer(_11506,is(_11518,_11506-1,d(_11504,_11530,_11510,_11614)))).
		d(-_11834,_11844,-_11838,_11900):-cut(1,d(_11834,_11844,_11838,_11900)).
		d(exp(_12034),_12050,exp(_12034)*_12044,_12106):-cut(1,d(_12034,_12050,_12044,_12106)).
		d(log(_12240),_12252,_12244/_12240,_12308):-cut(1,d(_12240,_12252,_12244,_12308)).
		d(_12442,_12442,1,_12486):-cut(1,_12486).
		d(_12556,_12558,0,_12582):-call(_12582).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_d_3__1(mach);
		}

		public static Operation exec_pred_d_3__1(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__2);
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
			if (!((areg0).Unify(Data.F(times10.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s2, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(times10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__2(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__3);
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
			if (!((areg0).Unify(Data.F(times10.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s3, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(times10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__3(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__4);
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
			if (!((areg0).Unify(Data.F(times10.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s2, Data.F(times10.s1, var4, var2.Deref()),
					Data.F(times10.s1, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(times10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__4(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__5);
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
			if (!((areg0).Unify(Data.F(times10.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s5,
					Data.F(times10.s3, Data.F(times10.s1, var4, var2.Deref()), Data.F(times10.s1, var1.Deref(), var5)),
					Data.F(times10.s7, var2.Deref(), times10.posint2)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(times10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__5(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__6);
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
			if (!((areg0).Unify(Data.F(times10.s7, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s1, Data.F(times10.s1, var4, var2.Deref()),
					Data.F(times10.s7, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_integer, var2.Deref(),
					Data.F(times10.s_is, var5.Deref(), Data.F(times10.s3, var2.Deref(), times10.posint1),
							Data.F(times10.s_d, var1.Deref(), var3.Deref(), var4.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__6(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(times10.s3, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s3, var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__7(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(times10.s_exp, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s1, Data.F(times10.s_exp, var1.Deref()), var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__8(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(times10.s_log, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(times10.s5, var3, var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(times10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__9(Prolog mach) {
			mach.FillAlternative(pred_d_3::exec_pred_d_3__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg2).Unify(times10.posint1)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_d_3__10(Prolog mach) {
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
			if (!((areg2).Unify(times10.posint0)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
