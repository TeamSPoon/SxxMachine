package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class log10 /*extends CodeFile*/ {
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
	final static Const s_log10 = Data.Intern("log10");
	final static Const s_top = Data.Intern("top");
	final static Const s_x = Data.Intern("x");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_log10_0 = PredTable.Register("log10", 0, new pred_log10_0());
	final static Operation reg_d_3 = PredTable.Register("d", 3, new pred_d_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_5486):-log10(_5486).
		
		
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
			return (Operation) pred_log10_0::exec_static;
		}
	}

	public static class pred_log10_0 extends Code {

		/*
		
		log10(_5602):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_5580,_5602).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_log10_0__1(mach);
		}

		public static Operation exec_pred_log10_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Data.F(log10.s_log, Data.F(log10.s_log,
					Data.F(log10.s_log, Data.F(log10.s_log, Data.F(log10.s_log, Data.F(log10.s_log, Data.F(log10.s_log,
							Data.F(log10.s_log, Data.F(log10.s_log, Data.F(log10.s_log, log10.s_x))))))))));
			local_aregs[1] = log10.s_x;
			local_aregs[2] = var1;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_d_3::exec_static;
		}
	}

	public static class pred_d_3 extends Code {

		/*
		
		d(_5700+_5702,_5714,_5706+_5708,_5784):-cut(1,d(_5700,_5714,_5706,d(_5702,_5714,_5708,_5784))).
		d(_5982-_5984,_5996,_5988-_5990,_6066):-cut(1,d(_5982,_5996,_5988,d(_5984,_5996,_5990,_6066))).
		d(_6264*_6266,_6290,_6270*_6266+_6264*_6278,_6360):-cut(1,d(_6264,_6290,_6270,d(_6266,_6290,_6278,_6360))).
		d(_6558/_6560,_6596,(_6564*_6560-_6558*_6572)/_6560^2,_6666):-cut(1,d(_6558,_6596,_6564,d(_6560,_6596,_6572,_6666))).
		d(_6864^_6866,_6890,_6870*_6866*_6864^_6878,_6974):-cut(1,integer(_6866,is(_6878,_6866-1,d(_6864,_6890,_6870,_6974)))).
		d(-_7194,_7204,-_7198,_7260):-cut(1,d(_7194,_7204,_7198,_7260)).
		d(exp(_7394),_7410,exp(_7394)*_7404,_7466):-cut(1,d(_7394,_7410,_7404,_7466)).
		d(log(_7600),_7612,_7604/_7600,_7668):-cut(1,d(_7600,_7612,_7604,_7668)).
		d(_7802,_7802,1,_7846):-cut(1,_7846).
		d(_7916,_7918,0,_7942):-call(_7942).
		
		
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
			if (!((areg0).Unify(Data.F(log10.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(log10.s2, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(log10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(log10.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(log10.s3, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(log10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(log10.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(
					Data.F(log10.s2, Data.F(log10.s1, var4, var2.Deref()), Data.F(log10.s1, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(log10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(log10.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(log10.s5,
					Data.F(log10.s3, Data.F(log10.s1, var4, var2.Deref()), Data.F(log10.s1, var1.Deref(), var5)),
					Data.F(log10.s7, var2.Deref(), log10.posint2)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(log10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(log10.s7, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(
					Data.F(log10.s1, Data.F(log10.s1, var4, var2.Deref()), Data.F(log10.s7, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_integer, var2.Deref(),
					Data.F(log10.s_is, var5.Deref(), Data.F(log10.s3, var2.Deref(), log10.posint1),
							Data.F(log10.s_d, var1.Deref(), var3.Deref(), var4.Deref(), continuation)));
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
			if (!((areg0).Unify(Data.F(log10.s3, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(log10.s3, var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg0).Unify(Data.F(log10.s_exp, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(log10.s1, Data.F(log10.s_exp, var1.Deref()), var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg0).Unify(Data.F(log10.s_log, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(log10.s5, var3, var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(log10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg2).Unify(log10.posint1)))
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
			if (!((areg2).Unify(log10.posint0)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
