package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class meta_qsort /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("!");
	final static Const s2 = Data.Intern(",");
	final static Const s3 = Data.Intern("->");
	final static Const s4 = Data.Intern(".");
	final static Const s5 = Data.Intern(":-");
	final static Const s6 = Data.Intern(";");
	final static Const s7 = Data.Intern("=");
	final static Const s8 = Data.Intern("=<");
	final static Const s9 = Data.Intern("\\+");
	final static Const s_call = Data.Intern("call");
	final static Const s_define = Data.Intern("define");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_interpret = Data.Intern("interpret");
	final static Const s_interpret_built_in = Data.Intern("interpret_built_in");
	final static Const s_interpret_disjunction = Data.Intern("interpret_disjunction");
	final static Const s_is_built_in = Data.Intern("is_built_in");
	final static Const s_meta_qsort = Data.Intern("meta_qsort");
	final static Const s_nonvar = Data.Intern("nonvar");
	final static Const s_number = Data.Intern("number");
	final static Const s_or = Data.Intern("or");
	final static Const s_partition = Data.Intern("partition");
	final static Const s_qsort = Data.Intern("qsort");
	final static Const s_smallerorequal = Data.Intern("smallerorequal");
	final static Const s_top = Data.Intern("top");
	final static Const s_true = Data.Intern("true");
	final static Const s_var = Data.Intern("var");
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
	final static Operation reg_meta_qsort_0 = PredTable.Register("meta_qsort", 0, new pred_meta_qsort_0());
	final static Operation reg_interpret_1 = PredTable.Register("interpret", 1, new pred_interpret_1());
	final static Operation reg_interpret_2 = PredTable.Register("interpret", 2, new pred_interpret_2());
	final static Operation reg_interpret_disjunction_3 = PredTable.Register("interpret_disjunction", 3,
			new pred_interpret_disjunction_3());
	final static Operation reg_is_built_in_1 = PredTable.Register("is_built_in", 1, new pred_is_built_in_1());
	final static Operation reg_interpret_built_in_1 = PredTable.Register("interpret_built_in", 1,
			new pred_interpret_built_in_1());
	final static Operation reg_define_2 = PredTable.Register("define", 2, new pred_define_2());

	public static class pred_top_0 extends Code {

		/*
		
		top(_10356):-meta_qsort(_10356).
		
		
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
			return (Operation) pred_meta_qsort_0::exec_static;
		}
	}

	public static class pred_meta_qsort_0 extends Code {

		/*
		
		meta_qsort(_10428):-interpret(qsort,_10428).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_meta_qsort_0__1(mach);
		}

		public static Operation exec_pred_meta_qsort_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = meta_qsort.s_qsort;
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_interpret_1::exec_static;
		}
	}

	public static class pred_interpret_1 extends Code {

		/*
		
		interpret(_10498,_10564):-interpret(_10498,_10504,or((nonvar(_10504),!,interpret(_10504)),true,_10564)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_interpret_1__1(mach);
		}

		public static Operation exec_pred_interpret_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2;
			local_aregs[2] = Data.F(meta_qsort.s_or,
					Data.F(meta_qsort.s2, Data.F(meta_qsort.s_nonvar, var2.Deref()),
							Data.F(meta_qsort.s2, meta_qsort.s1, Data.F(meta_qsort.s_interpret, var2.Deref()))),
					meta_qsort.s_true, continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_interpret_2::exec_static;
		}
	}

	public static class pred_interpret_2 extends Code {

		/*
		
		interpret(_10718,_10720,_10770):-var(_10718,cut(1,fail(_10770))).
		interpret((_10896,_10898),_10904,_10990):-cut(1,interpret(_10896,_10910,or((nonvar(_10910)->_10904=(_10910,_10898)),interpret(_10898,_10904),_10990))).
		interpret((_11164;_11166),_11172,_11220):-cut(1,interpret_disjunction(_11164,_11166,_11172,_11220)).
		interpret((_11352->_11354),_11360,_11414):-cut(1,interpret_disjunction((_11352->_11354),fail,_11360,_11414)).
		interpret(\+_11546,_11552,_11606):-cut(1,interpret_disjunction((_11546->fail),true,_11552,_11606)).
		interpret(!,true,_11774):-cut(1,_11774).
		interpret(_11842,_11844,_11894):-number(_11842,cut(1,fail(_11894))).
		interpret(_12020,_12022,_12076):-is_built_in(_12020,cut(1,interpret_built_in(_12020,_12076))).
		interpret(_12216,_12218,_12268):-define(_12216,_12224,interpret(_12224,_12268)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_interpret_2__1(mach);
		}

		public static Operation exec_pred_interpret_2__1(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(meta_qsort.s_fail, continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_var_1::exec_static;
		}

		public static Operation exec_pred_interpret_2__2(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(meta_qsort.s_interpret, var1.Deref(), var4, Data.F(meta_qsort.s_or,
					Data.F(meta_qsort.s3, Data.F(meta_qsort.s_nonvar, var4.Deref()),
							Data.F(meta_qsort.s7, var3.Deref(), Data.F(meta_qsort.s2, var4.Deref(), var2.Deref()))),
					Data.F(meta_qsort.s_interpret, var2.Deref(), var3.Deref()), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_interpret_2__3(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(meta_qsort.s_interpret_disjunction, var1.Deref(), var2.Deref(), var3.Deref(),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_interpret_2__4(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(meta_qsort.s_interpret_disjunction,
					Data.F(meta_qsort.s3, var1.Deref(), var2.Deref()), meta_qsort.s_fail, var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_interpret_2__5(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s9, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(meta_qsort.s_interpret_disjunction,
					Data.F(meta_qsort.s3, var1.Deref(), meta_qsort.s_fail), meta_qsort.s_true, var2.Deref(),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_interpret_2__6(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(meta_qsort.s1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(meta_qsort.s_true)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_interpret_2__7(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(meta_qsort.s_fail, continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_number_1::exec_static;
		}

		public static Operation exec_pred_interpret_2__8(Prolog mach) {
			mach.FillAlternative(pred_interpret_2::exec_pred_interpret_2__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(meta_qsort.s_interpret_built_in, var1.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_is_built_in_1::exec_static;
		}

		public static Operation exec_pred_interpret_2__9(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3;
			local_aregs[2] = Data.F(meta_qsort.s_interpret, var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_define_2::exec_static;
		}
	}

	public static class pred_interpret_disjunction_3 extends Code {

		/*
		
		interpret_disjunction((_12416->_12418),_12424,_12426,_12518):-interpret(_12416,_12432,cut(1,or((nonvar(_12432)->_12426=(_12432->_12418)),interpret(_12418,_12426),_12518))).
		interpret_disjunction((_12706->_12708),_12714,_12716,_12768):-cut(1,interpret(_12714,_12716,_12768)).
		interpret_disjunction(_12900,_12902,_12904,_12950):-interpret(_12900,_12904,_12950).
		interpret_disjunction(_13076,_13078,_13080,_13126):-interpret(_13078,_13080,_13126).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_interpret_disjunction_3__1(mach);
		}

		public static Operation exec_pred_interpret_disjunction_3__1(Prolog mach) {
			mach.FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__2);
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
			if (!((areg0).Unify(Data.F(meta_qsort.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var5;
			local_aregs[2] = mach.HC(Data.F(meta_qsort.s_or,
					Data.F(meta_qsort.s3, Data.F(meta_qsort.s_nonvar, var5.Deref()),
							Data.F(meta_qsort.s7, var4.Deref(), Data.F(meta_qsort.s3, var5.Deref(), var2.Deref()))),
					Data.F(meta_qsort.s_interpret, var2.Deref(), var4.Deref()), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_interpret_2::exec_static;
		}

		public static Operation exec_pred_interpret_disjunction_3__2(Prolog mach) {
			mach.FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(meta_qsort.s_interpret, var3.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_interpret_disjunction_3__3(Prolog mach) {
			mach.FillAlternative(pred_interpret_disjunction_3::exec_pred_interpret_disjunction_3__4);
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
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_interpret_2::exec_static;
		}

		public static Operation exec_pred_interpret_disjunction_3__4(Prolog mach) {
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
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_interpret_2::exec_static;
		}
	}

	public static class pred_is_built_in_1 extends Code {

		/*
		
		is_built_in(true,_13274):-call(_13274).
		is_built_in(_13356=<_13358,_13384):-call(_13384).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_is_built_in_1__1(mach);
		}

		public static Operation exec_pred_is_built_in_1__1(Prolog mach) {
			mach.FillAlternative(pred_is_built_in_1::exec_pred_is_built_in_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(meta_qsort.s_true)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_is_built_in_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s8, var1, var2))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_interpret_built_in_1 extends Code {

		/*
		
		interpret_built_in(true,_13488):-call(_13488).
		interpret_built_in(_13576=<_13578,_13616):-smallerorequal(_13576,_13578,_13616).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_interpret_built_in_1__1(mach);
		}

		public static Operation exec_pred_interpret_built_in_1__1(Prolog mach) {
			mach.FillAlternative(pred_interpret_built_in_1::exec_pred_interpret_built_in_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(meta_qsort.s_true)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_interpret_built_in_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s8, var1, var2))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_smallerorequal_2::exec_static;
		}
	}

	public static class pred_define_2 extends Code {

		/*
		
		define(qsort,qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,40,53,59,8],_14046,[]),_14076):-call(_14076).
		define(qsort([_14184|_14186],_14192,_14194),(partition(_14186,_14184,_14202,_14204),qsort(_14204,_14210,_14194),qsort(_14202,_14192,[_14184|_14210])),_14266):-call(_14266).
		define(qsort([],_14376,_14376),true,_14406):-call(_14406).
		define(partition([_14514|_14516],_14528,[_14514|_14522],_14532),(_14514=<_14528,!,partition(_14516,_14528,_14522,_14532)),_14588):-call(_14588).
		define(partition([_14696|_14698],_14710,_14712,[_14696|_14704]),partition(_14698,_14710,_14712,_14704),_14752):-call(_14752).
		define(partition([],_14862,[],[]),true,_14894):-call(_14894).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_define_2__1(mach);
		}

		public static Operation exec_pred_define_2__1(Prolog mach) {
			mach.FillAlternative(pred_define_2::exec_pred_define_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(meta_qsort.s_qsort)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(meta_qsort.s_qsort, Data.F(meta_qsort.s4, meta_qsort.posint27, Data.F(
					meta_qsort.s4, meta_qsort.posint74,
					Data.F(meta_qsort.s4, meta_qsort.posint17, Data.F(meta_qsort.s4, meta_qsort.posint33, Data.F(
							meta_qsort.s4, meta_qsort.posint94, Data.F(meta_qsort.s4, meta_qsort.posint18, Data.F(
									meta_qsort.s4, meta_qsort.posint46,
									Data.F(meta_qsort.s4, meta_qsort.posint83, Data.F(meta_qsort.s4,
											meta_qsort.posint65, Data.F(meta_qsort.s4, meta_qsort.posint2, Data.F(
													meta_qsort.s4, meta_qsort.posint32,
													Data.F(meta_qsort.s4, meta_qsort.posint53, Data.F(meta_qsort.s4,
															meta_qsort.posint28,
															Data.F(meta_qsort.s4, meta_qsort.posint85, Data.F(
																	meta_qsort.s4, meta_qsort.posint99,
																	Data.F(meta_qsort.s4, meta_qsort.posint47, Data.F(
																			meta_qsort.s4, meta_qsort.posint28,
																			Data.F(meta_qsort.s4, meta_qsort.posint82,
																					Data.F(meta_qsort.s4,
																							meta_qsort.posint6,
																							Data.F(meta_qsort.s4,
																									meta_qsort.posint11,
																									Data.F(meta_qsort.s4,
																											meta_qsort.posint55,
																											Data.F(meta_qsort.s4,
																													meta_qsort.posint29,
																													Data.F(meta_qsort.s4,
																															meta_qsort.posint39,
																															Data.F(meta_qsort.s4,
																																	meta_qsort.posint81,
																																	Data.F(meta_qsort.s4,
																																			meta_qsort.posint90,
																																			Data.F(meta_qsort.s4,
																																					meta_qsort.posint37,
																																					Data.F(meta_qsort.s4,
																																							meta_qsort.posint10,
																																							Data.F(meta_qsort.s4,
																																									meta_qsort.posint0,
																																									Data.F(meta_qsort.s4,
																																											meta_qsort.posint66,
																																											Data.F(meta_qsort.s4,
																																													meta_qsort.posint51,
																																													Data.F(meta_qsort.s4,
																																															meta_qsort.posint7,
																																															Data.F(meta_qsort.s4,
																																																	meta_qsort.posint21,
																																																	Data.F(meta_qsort.s4,
																																																			meta_qsort.posint85,
																																																			Data.F(meta_qsort.s4,
																																																					meta_qsort.posint27,
																																																					Data.F(meta_qsort.s4,
																																																							meta_qsort.posint31,
																																																							Data.F(meta_qsort.s4,
																																																									meta_qsort.posint63,
																																																									Data.F(meta_qsort.s4,
																																																											meta_qsort.posint75,
																																																											Data.F(meta_qsort.s4,
																																																													meta_qsort.posint4,
																																																													Data.F(meta_qsort.s4,
																																																															meta_qsort.posint95,
																																																															Data.F(meta_qsort.s4,
																																																																	meta_qsort.posint99,
																																																																	Data.F(meta_qsort.s4,
																																																																			meta_qsort.posint11,
																																																																			Data.F(meta_qsort.s4,
																																																																					meta_qsort.posint28,
																																																																					Data.F(meta_qsort.s4,
																																																																							meta_qsort.posint61,
																																																																							Data.F(meta_qsort.s4,
																																																																									meta_qsort.posint74,
																																																																									Data.F(meta_qsort.s4,
																																																																											meta_qsort.posint18,
																																																																											Data.F(meta_qsort.s4,
																																																																													meta_qsort.posint92,
																																																																													Data.F(meta_qsort.s4,
																																																																															meta_qsort.posint40,
																																																																															Data.F(meta_qsort.s4,
																																																																																	meta_qsort.posint53,
																																																																																	Data.F(meta_qsort.s4,
																																																																																			meta_qsort.posint59,
																																																																																			Data.F(meta_qsort.s4,
																																																																																					meta_qsort.posint8,
																																																																																					Const.Nil)))))))))))))))))))))))))))))))))))))))))))))))))),
					var1, Const.Nil))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_define_2__2(Prolog mach) {
			mach.FillAlternative(pred_define_2::exec_pred_define_2__3);
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
			if (!((areg0).Unify(Data.F(meta_qsort.s_qsort, Data.F(meta_qsort.s4, var1, var2), var3, var4))))
				return Prolog.Fail0;
			if (!((areg1)
					.Unify(Data.F(meta_qsort.s2, Data.F(meta_qsort.s_partition, var2.Deref(), var1.Deref(), var5, var6),
							Data.F(meta_qsort.s2, Data.F(meta_qsort.s_qsort, var6.Deref(), var7, var4.Deref()),
									Data.F(meta_qsort.s_qsort, var5.Deref(), var3.Deref(),
											Data.F(meta_qsort.s4, var1.Deref(), var7.Deref())))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_define_2__3(Prolog mach) {
			mach.FillAlternative(pred_define_2::exec_pred_define_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s_qsort, Const.Nil, var1, var1.Deref()))))
				return Prolog.Fail0;
			if (!((areg1).Unify(meta_qsort.s_true)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_define_2__4(Prolog mach) {
			mach.FillAlternative(pred_define_2::exec_pred_define_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s_partition, Data.F(meta_qsort.s4, var1, var2), var3,
					Data.F(meta_qsort.s4, var1.Deref(), var4), var5))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(meta_qsort.s2, Data.F(meta_qsort.s8, var1.Deref(), var3.Deref()),
					Data.F(meta_qsort.s2, meta_qsort.s1,
							Data.F(meta_qsort.s_partition, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref()))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_define_2__5(Prolog mach) {
			mach.FillAlternative(pred_define_2::exec_pred_define_2__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s_partition, Data.F(meta_qsort.s4, var1, var2), var3, var4,
					Data.F(meta_qsort.s4, var1.Deref(), var5)))))
				return Prolog.Fail0;
			if (!((areg1)
					.Unify(Data.F(meta_qsort.s_partition, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_define_2__6(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(meta_qsort.s_partition, Const.Nil, var1, Const.Nil, Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(meta_qsort.s_true)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
