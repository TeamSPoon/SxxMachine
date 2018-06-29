package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class divide10 /*extends CodeFile*/ {
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
	final static Const s_divide10 = Data.Intern("divide10");
	final static Const s_exp = Data.Intern("exp");
	final static Const s_integer = Data.Intern("integer");
	final static Const s_is = Data.Intern("is");
	final static Const s_log = Data.Intern("log");
	final static Const s_top = Data.Intern("top");
	final static Const s_x = Data.Intern("x");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_divide10_0 = PredTable.Register("divide10", 0, new pred_divide10_0());
	final static Operation reg_d_3 = PredTable.Register("d", 3, new pred_d_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_15104):-divide10(_15104).
		
		
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
			return (Operation) pred_divide10_0::exec_static;
		}
	}

	public static class pred_divide10_0 extends Code {

		/*
		
		divide10(_15234):-d(x/x/x/x/x/x/x/x/x/x,x,_15212,_15234).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_divide10_0__1(mach);
		}

		public static Operation exec_pred_divide10_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Data
					.F(divide10.s5,
							Data.F(divide10.s5,
									Data.F(divide10.s5, Data.F(divide10.s5,
											Data.F(divide10.s5, Data.F(divide10.s5, Data.F(divide10.s5,
													Data.F(divide10.s5, Data.F(divide10.s5, divide10.s_x, divide10.s_x),
															divide10.s_x),
													divide10.s_x), divide10.s_x), divide10.s_x),
											divide10.s_x), divide10.s_x),
									divide10.s_x),
							divide10.s_x);
			local_aregs[1] = divide10.s_x;
			local_aregs[2] = var1;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_d_3::exec_static;
		}
	}

	public static class pred_d_3 extends Code {

		/*
		
		d(_15332+_15334,_15346,_15338+_15340,_15416):-cut(1,d(_15332,_15346,_15338,d(_15334,_15346,_15340,_15416))).
		d(_15614-_15616,_15628,_15620-_15622,_15698):-cut(1,d(_15614,_15628,_15620,d(_15616,_15628,_15622,_15698))).
		d(_15896*_15898,_15922,_15902*_15898+_15896*_15910,_15992):-cut(1,d(_15896,_15922,_15902,d(_15898,_15922,_15910,_15992))).
		d(_16190/_16192,_16228,(_16196*_16192-_16190*_16204)/_16192^2,_16298):-cut(1,d(_16190,_16228,_16196,d(_16192,_16228,_16204,_16298))).
		d(_16496^_16498,_16522,_16502*_16498*_16496^_16510,_16606):-cut(1,integer(_16498,is(_16510,_16498-1,d(_16496,_16522,_16502,_16606)))).
		d(-_16826,_16836,-_16830,_16892):-cut(1,d(_16826,_16836,_16830,_16892)).
		d(exp(_17026),_17042,exp(_17026)*_17036,_17098):-cut(1,d(_17026,_17042,_17036,_17098)).
		d(log(_17232),_17244,_17236/_17232,_17300):-cut(1,d(_17232,_17244,_17236,_17300)).
		d(_17434,_17434,1,_17478):-cut(1,_17478).
		d(_17548,_17550,0,_17574):-call(_17574).
		
		
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
			if (!((areg0).Unify(Data.F(divide10.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s2, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(divide10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(divide10.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s3, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(divide10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(divide10.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s2, Data.F(divide10.s1, var4, var2.Deref()),
					Data.F(divide10.s1, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(divide10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(divide10.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s5,
					Data.F(divide10.s3, Data.F(divide10.s1, var4, var2.Deref()),
							Data.F(divide10.s1, var1.Deref(), var5)),
					Data.F(divide10.s7, var2.Deref(), divide10.posint2)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(divide10.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(divide10.s7, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s1, Data.F(divide10.s1, var4, var2.Deref()),
					Data.F(divide10.s7, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_integer, var2.Deref(),
					Data.F(divide10.s_is, var5.Deref(), Data.F(divide10.s3, var2.Deref(), divide10.posint1),
							Data.F(divide10.s_d, var1.Deref(), var3.Deref(), var4.Deref(), continuation)));
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
			if (!((areg0).Unify(Data.F(divide10.s3, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s3, var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg0).Unify(Data.F(divide10.s_exp, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s1, Data.F(divide10.s_exp, var1.Deref()), var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg0).Unify(Data.F(divide10.s_log, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(divide10.s5, var3, var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(divide10.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg2).Unify(divide10.posint1)))
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
			if (!((areg2).Unify(divide10.posint0)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
