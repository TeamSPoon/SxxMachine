package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class ops8 /*extends CodeFile*/ {
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
	final static Const s_ops8 = Data.Intern("ops8");
	final static Const s_top = Data.Intern("top");
	final static Const s_x = Data.Intern("x");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Int posint3 = Data.Number(3L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_ops8_0 = PredTable.Register("ops8", 0, new pred_ops8_0());
	final static Operation reg_d_3 = PredTable.Register("d", 3, new pred_d_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_10258):-ops8(_10258).
		
		
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
			return (Operation) pred_ops8_0::exec_static;
		}
	}

	public static class pred_ops8_0 extends Code {

		/*
		
		ops8(_10376):-d((x+1)*((x^2+2)*(x^3+3)),x,_10354,_10376).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_ops8_0__1(mach);
		}

		public static Operation exec_pred_ops8_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Data.F(ops8.s1, Data.F(ops8.s2, ops8.s_x, ops8.posint1),
					Data.F(ops8.s1, Data.F(ops8.s2, Data.F(ops8.s7, ops8.s_x, ops8.posint2), ops8.posint2),
							Data.F(ops8.s2, Data.F(ops8.s7, ops8.s_x, ops8.posint3), ops8.posint3)));
			local_aregs[1] = ops8.s_x;
			local_aregs[2] = var1;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_d_3::exec_static;
		}
	}

	public static class pred_d_3 extends Code {

		/*
		
		d(_10474+_10476,_10488,_10480+_10482,_10558):-cut(1,d(_10474,_10488,_10480,d(_10476,_10488,_10482,_10558))).
		d(_10756-_10758,_10770,_10762-_10764,_10840):-cut(1,d(_10756,_10770,_10762,d(_10758,_10770,_10764,_10840))).
		d(_11038*_11040,_11064,_11044*_11040+_11038*_11052,_11134):-cut(1,d(_11038,_11064,_11044,d(_11040,_11064,_11052,_11134))).
		d(_11332/_11334,_11370,(_11338*_11334-_11332*_11346)/_11334^2,_11440):-cut(1,d(_11332,_11370,_11338,d(_11334,_11370,_11346,_11440))).
		d(_11638^_11640,_11664,_11644*_11640*_11638^_11652,_11748):-cut(1,integer(_11640,is(_11652,_11640-1,d(_11638,_11664,_11644,_11748)))).
		d(-_11968,_11978,-_11972,_12034):-cut(1,d(_11968,_11978,_11972,_12034)).
		d(exp(_12168),_12184,exp(_12168)*_12178,_12240):-cut(1,d(_12168,_12184,_12178,_12240)).
		d(log(_12374),_12386,_12378/_12374,_12442):-cut(1,d(_12374,_12386,_12378,_12442)).
		d(_12576,_12576,1,_12620):-cut(1,_12620).
		d(_12690,_12692,0,_12716):-call(_12716).
		
		
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
			if (!((areg0).Unify(Data.F(ops8.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(ops8.s2, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(ops8.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(ops8.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(ops8.s3, var4, var5))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(ops8.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(ops8.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2)
					.Unify(Data.F(ops8.s2, Data.F(ops8.s1, var4, var2.Deref()), Data.F(ops8.s1, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(ops8.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(ops8.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(ops8.s5,
					Data.F(ops8.s3, Data.F(ops8.s1, var4, var2.Deref()), Data.F(ops8.s1, var1.Deref(), var5)),
					Data.F(ops8.s7, var2.Deref(), ops8.posint2)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_d, var1.Deref(), var3.Deref(), var4.Deref(),
					Data.F(ops8.s_d, var2.Deref(), var3.Deref(), var5.Deref(), continuation));
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
			if (!((areg0).Unify(Data.F(ops8.s7, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2)
					.Unify(Data.F(ops8.s1, Data.F(ops8.s1, var4, var2.Deref()), Data.F(ops8.s7, var1.Deref(), var5)))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_integer, var2.Deref(),
					Data.F(ops8.s_is, var5.Deref(), Data.F(ops8.s3, var2.Deref(), ops8.posint1),
							Data.F(ops8.s_d, var1.Deref(), var3.Deref(), var4.Deref(), continuation)));
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
			if (!((areg0).Unify(Data.F(ops8.s3, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(ops8.s3, var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg0).Unify(Data.F(ops8.s_exp, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(ops8.s1, Data.F(ops8.s_exp, var1.Deref()), var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg0).Unify(Data.F(ops8.s_log, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(ops8.s5, var3, var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(ops8.s_d, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
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
			if (!((areg2).Unify(ops8.posint1)))
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
			if (!((areg2).Unify(ops8.posint0)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
