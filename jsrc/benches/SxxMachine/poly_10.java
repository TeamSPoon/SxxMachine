package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class poly_10 /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("*");
	final static Const s2 = Data.Intern("+");
	final static Const s3 = Data.Intern("-");
	final static Const s4 = Data.Intern(".");
	final static Const s5 = Data.Intern(":-");
	final static Const s6 = Data.Intern("<<");
	final static Const s7 = Data.Intern(">>");
	final static Const s_add_to_order_zero_term = Data.Intern("add_to_order_zero_term");
	final static Const s_call = Data.Intern("call");
	final static Const s_is = Data.Intern("is");
	final static Const s_less_than = Data.Intern("less_than");
	final static Const s_mul_through = Data.Intern("mul_through");
	final static Const s_on_load_poly_10 = Data.Intern("on_load_poly_10");
	final static Const s_op = Data.Intern("op");
	final static Const s_poly = Data.Intern("poly");
	final static Const s_poly_10 = Data.Intern("poly_10");
	final static Const s_poly_add = Data.Intern("poly_add");
	final static Const s_poly_exp = Data.Intern("poly_exp");
	final static Const s_poly_mul = Data.Intern("poly_mul");
	final static Const s_single_term_mul = Data.Intern("single_term_mul");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_term = Data.Intern("term");
	final static Const s_term_add = Data.Intern("term_add");
	final static Const s_term_mul = Data.Intern("term_mul");
	final static Const s_test_poly = Data.Intern("test_poly");
	final static Const s_top = Data.Intern("top");
	final static Const s_write = Data.Intern("write");
	final static Const s_x = Data.Intern("x");
	final static Const s_xfx = Data.Intern("xfx");
	final static Const s_y = Data.Intern("y");
	final static Const s_z = Data.Intern("z");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint10 = Data.Number(10L);
	final static Int posint700 = Data.Number(700L);
	final static Operation reg_on_load_poly_10_0 = PredTable.Register("on_load_poly_10", 0,
			new pred_on_load_poly_10_0());
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_poly_10_0 = PredTable.Register("poly_10", 0, new pred_poly_10_0());
	final static Operation reg_test_poly_1 = PredTable.Register("test_poly", 1, new pred_test_poly_1());
	final static Operation reg_less_than_2 = PredTable.Register("less_than", 2, new pred_less_than_2());
	final static Operation reg_poly_add_3 = PredTable.Register("poly_add", 3, new pred_poly_add_3());
	final static Operation reg_term_add_3 = PredTable.Register("term_add", 3, new pred_term_add_3());
	final static Operation reg_add_to_order_zero_term_3 = PredTable.Register("add_to_order_zero_term", 3,
			new pred_add_to_order_zero_term_3());
	final static Operation reg_poly_exp_3 = PredTable.Register("poly_exp", 3, new pred_poly_exp_3());
	final static Operation reg_poly_mul_3 = PredTable.Register("poly_mul", 3, new pred_poly_mul_3());
	final static Operation reg_term_mul_3 = PredTable.Register("term_mul", 3, new pred_term_mul_3());
	final static Operation reg_single_term_mul_3 = PredTable.Register("single_term_mul", 3,
			new pred_single_term_mul_3());
	final static Operation reg_mul_through_3 = PredTable.Register("mul_through", 3, new pred_mul_through_3());

	public static class pred_on_load_poly_10_0 extends Code {

		/*
		
		on_load_poly_10(_19874):-write(op(700,xfx,less_than),_19874).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_on_load_poly_10_0__1(mach);
		}

		public static Operation exec_pred_on_load_poly_10_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = Data.F(poly_10.s_op, poly_10.posint700, poly_10.s_xfx, poly_10.s_less_than);
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_write_1::exec_static;
		}
	}

	public static class pred_top_0 extends Code {

		/*
		
		top(_19956):-poly_10(_19956).
		
		
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
			return (Operation) pred_poly_10_0::exec_static;
		}
	}

	public static class pred_poly_10_0 extends Code {

		/*
		
		poly_10(_20048):-test_poly(_20012,poly_exp(10,_20012,_20020,_20048)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_poly_10_0__1(mach);
		}

		public static Operation exec_pred_poly_10_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			local_aregs[0] = var1;
			local_aregs[1] = Data.F(poly_10.s_poly_exp, poly_10.posint10, var1.Deref(), var2, continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_test_poly_1::exec_static;
		}
	}

	public static class pred_test_poly_1 extends Code {

		/*
		
		test_poly(_20188,_20304):-poly_add(poly(x,[term(0,1),term(1,1)]),poly(y,[term(1,1)]),_20244,poly_add(poly(z,[term(1,1)]),_20244,_20188,_20304)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_test_poly_1__1(mach);
		}

		public static Operation exec_pred_test_poly_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(poly_10.s_poly, poly_10.s_x,
					Data.F(poly_10.s4, Data.F(poly_10.s_term, poly_10.posint0, poly_10.posint1),
							Data.F(poly_10.s4, Data.F(poly_10.s_term, poly_10.posint1, poly_10.posint1), Const.Nil)));
			local_aregs[1] = Data.F(poly_10.s_poly, poly_10.s_y,
					Data.F(poly_10.s4, Data.F(poly_10.s_term, poly_10.posint1, poly_10.posint1), Const.Nil));
			local_aregs[2] = var2;
			local_aregs[3] = Data.F(poly_10.s_poly_add,
					Data.F(poly_10.s_poly, poly_10.s_z,
							Data.F(poly_10.s4, Data.F(poly_10.s_term, poly_10.posint1, poly_10.posint1), Const.Nil)),
					var2.Deref(), var1.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_poly_add_3::exec_static;
		}
	}

	public static class pred_less_than_2 extends Code {

		/*
		
		less_than(x,y,_20510):-call(_20510).
		less_than(y,z,_20624):-call(_20624).
		less_than(x,z,_20738):-call(_20738).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_less_than_2__1(mach);
		}

		public static Operation exec_pred_less_than_2__1(Prolog mach) {
			mach.FillAlternative(pred_less_than_2::exec_pred_less_than_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(poly_10.s_x)))
				return Prolog.Fail0;
			if (!((areg1).Unify(poly_10.s_y)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_less_than_2__2(Prolog mach) {
			mach.FillAlternative(pred_less_than_2::exec_pred_less_than_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(poly_10.s_y)))
				return Prolog.Fail0;
			if (!((areg1).Unify(poly_10.s_z)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_less_than_2__3(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(poly_10.s_x)))
				return Prolog.Fail0;
			if (!((areg1).Unify(poly_10.s_z)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_poly_add_3 extends Code {

		/*
		
		poly_add(poly(_20828,_20830),poly(_20828,_20836),poly(_20828,_20842),_20904):-cut(1,term_add(_20830,_20836,_20842,_20904)).
		poly_add(poly(_21056,_21058),poly(_21062,_21064),poly(_21056,_21070),_21150):-less_than(_21056,_21062,cut(1,add_to_order_zero_term(_21058,poly(_21062,_21064),_21070,_21150))).
		poly_add(_21364,poly(_21352,_21354),poly(_21352,_21360),_21422):-cut(1,add_to_order_zero_term(_21354,_21364,_21360,_21422)).
		poly_add(poly(_21574,_21576),_21588,poly(_21574,_21582),_21644):-cut(1,add_to_order_zero_term(_21576,_21588,_21582,_21644)).
		poly_add(_21796,_21798,_21800,_21852):-is(_21800,_21796+_21798,_21852).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_poly_add_3__1(mach);
		}

		public static Operation exec_pred_poly_add_3__1(Prolog mach) {
			mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(poly_10.s_poly, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s_poly, var1.Deref(), var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var1.Deref(), var4))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_term_add, var2.Deref(), var3.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_poly_add_3__2(Prolog mach) {
			mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__3);
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
			if (!((areg0).Unify(Data.F(poly_10.s_poly, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s_poly, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(Data.F(poly_10.s_add_to_order_zero_term, var2.Deref(),
					Data.F(poly_10.s_poly, var3.Deref(), var4.Deref()), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_less_than_2::exec_static;
		}

		public static Operation exec_pred_poly_add_3__3(Prolog mach) {
			mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s_poly, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var2.Deref(), var4))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_add_to_order_zero_term, var3.Deref(), var1.Deref(), var4.Deref(),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_poly_add_3__4(Prolog mach) {
			mach.FillAlternative(pred_poly_add_3::exec_pred_poly_add_3__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(poly_10.s_poly, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var1.Deref(), var4))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_add_to_order_zero_term, var2.Deref(), var3.Deref(), var4.Deref(),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_poly_add_3__5(Prolog mach) {
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
			local_aregs[1] = Data.F(poly_10.s2, var1.Deref(), var2.Deref());
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_term_add_3 extends Code {

		/*
		
		term_add([],_21986,_21986,_22028):-cut(1,_22028).
		term_add(_22122,[],_22122,_22166):-cut(1,_22166).
		term_add([term(_22260,_22262)|_22268],[term(_22260,_22274)|_22280],[term(_22260,_22286)|_22292],_22368):-cut(1,poly_add(_22262,_22274,_22286,term_add(_22268,_22280,_22292,_22368))).
		term_add([term(_22590,_22592)|_22598],[term(_22602,_22604)|_22610],[term(_22590,_22592)|_22622],_22708):-smallerthan(_22590,_22602,cut(1,term_add(_22598,[term(_22602,_22604)|_22610],_22622,_22708))).
		term_add(_22946,[term(_22922,_22924)|_22930],[term(_22922,_22924)|_22942],_22998):-term_add(_22946,_22930,_22942,_22998).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_term_add_3__1(mach);
		}

		public static Operation exec_pred_term_add_3__1(Prolog mach) {
			mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__2);
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
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_term_add_3__2(Prolog mach) {
			mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var1.Deref())))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_term_add_3__3(Prolog mach) {
			mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__4);
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
			if (!((areg0).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1, var2), var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1.Deref(), var4), var5))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1.Deref(), var6), var7))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_poly_add, var2.Deref(), var4.Deref(), var6.Deref(),
					Data.F(poly_10.s_term_add, var3.Deref(), var5.Deref(), var7.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_term_add_3__4(Prolog mach) {
			mach.FillAlternative(pred_term_add_3::exec_pred_term_add_3__5);
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
			if (!((areg0).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1, var2), var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var4, var5), var6))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1.Deref(), var2.Deref()), var7))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = mach.HC(Data.F(poly_10.s_term_add, var3.Deref(),
					Data.F(poly_10.s4, Data.F(poly_10.s_term, var4.Deref(), var5.Deref()), var6.Deref()), var7.Deref(),
					continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_term_add_3__5(Prolog mach) {
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var2, var3), var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var2.Deref(), var3.Deref()), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = var5.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_term_add_3::exec_static;
		}
	}

	public static class pred_add_to_order_zero_term_3 extends Code {

		/*
		
		add_to_order_zero_term([term(0,_23152)|_23158],_23176,[term(0,_23164)|_23158],_23232):-cut(1,poly_add(_23152,_23176,_23164,_23232)).
		add_to_order_zero_term(_23404,_23398,[term(0,_23398)|_23404],_23434):-call(_23434).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_add_to_order_zero_term_3__1(mach);
		}

		public static Operation exec_pred_add_to_order_zero_term_3__1(Prolog mach) {
			mach.FillAlternative(pred_add_to_order_zero_term_3::exec_pred_add_to_order_zero_term_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, poly_10.posint0, var1), var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, poly_10.posint0, var4), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_poly_add, var1.Deref(), var3.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_add_to_order_zero_term_3__2(Prolog mach) {
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
			if (!((areg2)
					.Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, poly_10.posint0, var2.Deref()), var1.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_poly_exp_3 extends Code {

		/*
		
		poly_exp(0,_1490,1,_1498):-cut(1,_1498).
		poly_exp(_1522,_1524,_1526,_1550):-is(_1534,_1522>>1,is(_1522,_1534<<1,cut(1,poly_exp(_1534,_1524,_1542,poly_mul(_1542,_1542,_1526,_1550))))).
		poly_exp(_1610,_1612,_1614,_1632):-is(_1622,_1610-1,poly_exp(_1622,_1612,_1624,poly_mul(_1612,_1624,_1614,_1632))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_poly_exp_3__1(mach);
		}

		public static Operation exec_pred_poly_exp_3__1(Prolog mach) {
			mach.FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(poly_10.posint0)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(poly_10.posint1)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_poly_exp_3__2(Prolog mach) {
			mach.FillAlternative(pred_poly_exp_3::exec_pred_poly_exp_3__3);
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var4;
			local_aregs[1] = Data.F(poly_10.s7, var1.Deref(), poly_10.posint1);
			local_aregs[2] = Data.F(poly_10.s_is, var1.Deref(), Data.F(poly_10.s6, var4.Deref(), poly_10.posint1),
					mach.HC(Data.F(poly_10.s_poly_exp, var4.Deref(), var2.Deref(), var5,
							Data.F(poly_10.s_poly_mul, var5.Deref(), var5.Deref(), var3.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}

		public static Operation exec_pred_poly_exp_3__3(Prolog mach) {
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var4;
			local_aregs[1] = Data.F(poly_10.s3, var1.Deref(), poly_10.posint1);
			local_aregs[2] = Data.F(poly_10.s_poly_exp, var4.Deref(), var2.Deref(), var5,
					Data.F(poly_10.s_poly_mul, var2.Deref(), var5.Deref(), var3.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_poly_mul_3 extends Code {

		/*
		
		poly_mul(poly(_1680,_1682),poly(_1680,_1688),poly(_1680,_1694),_1702):-cut(1,term_mul(_1682,_1688,_1694,_1702)).
		poly_mul(poly(_1738,_1740),poly(_1744,_1746),poly(_1738,_1752),_1766):-less_than(_1738,_1744,cut(1,mul_through(_1740,poly(_1744,_1746),_1752,_1766))).
		poly_mul(_1820,poly(_1810,_1812),poly(_1810,_1818),_1828):-cut(1,mul_through(_1812,_1820,_1818,_1828)).
		poly_mul(poly(_1864,_1866),_1874,poly(_1864,_1872),_1882):-cut(1,mul_through(_1866,_1874,_1872,_1882)).
		poly_mul(_1916,_1918,_1920,_1934):-is(_1920,_1916*_1918,_1934).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_poly_mul_3__1(mach);
		}

		public static Operation exec_pred_poly_mul_3__1(Prolog mach) {
			mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(poly_10.s_poly, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s_poly, var1.Deref(), var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var1.Deref(), var4))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_term_mul, var2.Deref(), var3.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_poly_mul_3__2(Prolog mach) {
			mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__3);
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
			if (!((areg0).Unify(Data.F(poly_10.s_poly, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s_poly, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(Data.F(poly_10.s_mul_through, var2.Deref(),
					Data.F(poly_10.s_poly, var3.Deref(), var4.Deref()), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_less_than_2::exec_static;
		}

		public static Operation exec_pred_poly_mul_3__3(Prolog mach) {
			mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s_poly, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var2.Deref(), var4))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_mul_through, var3.Deref(), var1.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_poly_mul_3__4(Prolog mach) {
			mach.FillAlternative(pred_poly_mul_3::exec_pred_poly_mul_3__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(poly_10.s_poly, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s_poly, var1.Deref(), var4))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(poly_10.s_mul_through, var2.Deref(), var3.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_poly_mul_3__5(Prolog mach) {
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
			local_aregs[1] = Data.F(poly_10.s1, var1.Deref(), var2.Deref());
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_term_mul_3 extends Code {

		/*
		
		term_mul([],_1960,[],_1968):-cut(1,_1968).
		term_mul(_1992,[],[],_2000):-cut(1,_2000).
		term_mul([_2026|_2028],_2030,_2032,_2044):-single_term_mul(_2030,_2026,_2034,term_mul(_2028,_2030,_2036,term_add(_2034,_2036,_2032,_2044))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_term_mul_3__1(mach);
		}

		public static Operation exec_pred_term_mul_3__1(Prolog mach) {
			mach.FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__2);
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
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_term_mul_3__2(Prolog mach) {
			mach.FillAlternative(pred_term_mul_3::exec_pred_term_mul_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_term_mul_3__3(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(poly_10.s4, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var5;
			local_aregs[3] = Data.F(poly_10.s_term_mul, var2.Deref(), var3.Deref(), var6,
					Data.F(poly_10.s_term_add, var5.Deref(), var6.Deref(), var4.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_single_term_mul_3::exec_static;
		}
	}

	public static class pred_single_term_mul_3 extends Code {

		/*
		
		single_term_mul([],_2092,[],_2100):-cut(1,_2100).
		single_term_mul([term(_2126,_2128)|_2134],term(_2138,_2140),[term(_2144,_2146)|_2152],_2172):-is(_2144,_2126+_2138,poly_mul(_2128,_2140,_2146,single_term_mul(_2134,term(_2138,_2140),_2152,_2172))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_single_term_mul_3__1(mach);
		}

		public static Operation exec_pred_single_term_mul_3__1(Prolog mach) {
			mach.FillAlternative(pred_single_term_mul_3::exec_pred_single_term_mul_3__2);
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
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_single_term_mul_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
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
			if (!((areg0).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1, var2), var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(poly_10.s_term, var4, var5))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var6, var7), var8))))
				return Prolog.Fail0;
			local_aregs[0] = var6.Deref();
			local_aregs[1] = Data.F(poly_10.s2, var1.Deref(), var4.Deref());
			local_aregs[2] = Data.F(poly_10.s_poly_mul, var2.Deref(), var5.Deref(), var7.Deref(),
					Data.F(poly_10.s_single_term_mul, var3.Deref(), Data.F(poly_10.s_term, var4.Deref(), var5.Deref()),
							var8.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_mul_through_3 extends Code {

		/*
		
		mul_through([],_2218,[],_2226):-cut(1,_2226).
		mul_through([term(_2252,_2254)|_2260],_2274,[term(_2252,_2266)|_2272],_2282):-poly_mul(_2254,_2274,_2266,mul_through(_2260,_2274,_2272,_2282)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_mul_through_3__1(mach);
		}

		public static Operation exec_pred_mul_through_3__1(Prolog mach) {
			mach.FillAlternative(pred_mul_through_3::exec_pred_mul_through_3__2);
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
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_mul_through_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1, var2), var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(poly_10.s4, Data.F(poly_10.s_term, var1.Deref(), var5), var6))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = var5.Deref();
			local_aregs[3] = Data.F(poly_10.s_mul_through, var3.Deref(), var4.Deref(), var6.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_poly_mul_3::exec_static;
		}
	}

}
