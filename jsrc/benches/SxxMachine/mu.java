package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class mu /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("-");
	final static Const s2 = Data.Intern(".");
	final static Const s3 = Data.Intern(":-");
	final static Const s_a = Data.Intern("a");
	final static Const s_append = Data.Intern("append");
	final static Const s_call = Data.Intern("call");
	final static Const s_i = Data.Intern("i");
	final static Const s_is = Data.Intern("is");
	final static Const s_m = Data.Intern("m");
	final static Const s_mu = Data.Intern("mu");
	final static Const s_rule = Data.Intern("rule");
	final static Const s_rule1 = Data.Intern("rule1");
	final static Const s_rule2 = Data.Intern("rule2");
	final static Const s_rule3 = Data.Intern("rule3");
	final static Const s_rule4 = Data.Intern("rule4");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_theorem = Data.Intern("theorem");
	final static Const s_top = Data.Intern("top");
	final static Const s_u = Data.Intern("u");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Int posint3 = Data.Number(3L);
	final static Int posint4 = Data.Number(4L);
	final static Int posint5 = Data.Number(5L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_mu_0 = PredTable.Register("mu", 0, new pred_mu_0());
	final static Operation reg_theorem_3 = PredTable.Register("theorem", 3, new pred_theorem_3());
	final static Operation reg_rule_3 = PredTable.Register("rule", 3, new pred_rule_3());
	final static Operation reg_rule1_2 = PredTable.Register("rule1", 2, new pred_rule1_2());
	final static Operation reg_rule2_2 = PredTable.Register("rule2", 2, new pred_rule2_2());
	final static Operation reg_rule3_2 = PredTable.Register("rule3", 2, new pred_rule3_2());
	final static Operation reg_rule4_2 = PredTable.Register("rule4", 2, new pred_rule4_2());
	final static Operation reg_append_3 = PredTable.Register("append", 3, new pred_append_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_5398):-mu(_5398).
		
		
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
			return (Operation) pred_mu_0::exec_static;
		}
	}

	public static class pred_mu_0 extends Code {

		/*
		
		mu(_5510):-theorem([m,u,i,i,u],5,_5482,cut(1,_5510)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_mu_0__1(mach);
		}

		public static Operation exec_pred_mu_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Data.F(mu.s2, mu.s_m, Data.F(mu.s2, mu.s_u,
					Data.F(mu.s2, mu.s_i, Data.F(mu.s2, mu.s_i, Data.F(mu.s2, mu.s_u, Const.Nil)))));
			local_aregs[1] = mu.posint5;
			local_aregs[2] = var1;
			local_aregs[3] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_theorem_3::exec_static;
		}
	}

	public static class pred_theorem_3 extends Code {

		/*
		
		theorem([m,i],_5652,[[a,m,i]],_5676):-call(_5676).
		theorem(_5770,_5782,[[_5768|_5770]|_5776],_5876):-smallerthan(0,_5782,is(_5800,_5782-1,theorem(_5806,_5800,_5776,rule(_5768,_5806,_5770,_5876)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_theorem_3__1(mach);
		}

		public static Operation exec_pred_theorem_3__1(Prolog mach) {
			mach.FillAlternative(pred_theorem_3::exec_pred_theorem_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, mu.s_m, Data.F(mu.s2, mu.s_i, Const.Nil)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(mu.s2,
					Data.F(mu.s2, mu.s_a, Data.F(mu.s2, mu.s_m, Data.F(mu.s2, mu.s_i, Const.Nil))), Const.Nil))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_theorem_3__2(Prolog mach) {
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(mu.s2, Data.F(mu.s2, var3, var1.Deref()), var4))))
				return Prolog.Fail0;
			local_aregs[0] = mu.posint0;
			local_aregs[1] = var2.Deref();
			local_aregs[2] = Data.F(mu.s_is, var5, Data.F(mu.s1, var2.Deref(), mu.posint1),
					Data.F(mu.s_theorem, var6, var5.Deref(), var4.Deref(),
							Data.F(mu.s_rule, var3.Deref(), var6.Deref(), var1.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

	public static class pred_rule_3 extends Code {

		/*
		
		rule(1,_6176,_6178,_6224):-rule1(_6176,_6178,_6224).
		rule(2,_6346,_6348,_6394):-rule2(_6346,_6348,_6394).
		rule(3,_6516,_6518,_6564):-rule3(_6516,_6518,_6564).
		rule(4,_6686,_6688,_6734):-rule4(_6686,_6688,_6734).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_rule_3__1(mach);
		}

		public static Operation exec_pred_rule_3__1(Prolog mach) {
			mach.FillAlternative(pred_rule_3::exec_pred_rule_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(mu.posint1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_rule1_2::exec_static;
		}

		public static Operation exec_pred_rule_3__2(Prolog mach) {
			mach.FillAlternative(pred_rule_3::exec_pred_rule_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(mu.posint2)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_rule2_2::exec_static;
		}

		public static Operation exec_pred_rule_3__3(Prolog mach) {
			mach.FillAlternative(pred_rule_3::exec_pred_rule_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(mu.posint3)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_rule3_2::exec_static;
		}

		public static Operation exec_pred_rule_3__4(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(mu.posint4)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_rule4_2::exec_static;
		}
	}

	public static class pred_rule1_2 extends Code {

		/*
		
		rule1([i],[i,u],_6896):-call(_6896).
		rule1([_6986|_6988],[_6986|_6994],_7040):-rule1(_6988,_6994,_7040).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_rule1_2__1(mach);
		}

		public static Operation exec_pred_rule1_2__1(Prolog mach) {
			mach.FillAlternative(pred_rule1_2::exec_pred_rule1_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Data.F(mu.s2, mu.s_i, Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(mu.s2, mu.s_i, Data.F(mu.s2, mu.s_u, Const.Nil)))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_rule1_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(mu.s2, var1.Deref(), var3))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_rule1_2::exec_static;
		}
	}

	public static class pred_rule2_2 extends Code {

		/*
		
		rule2([m|_7160],[m|_7166],_7214):-append(_7160,_7160,_7166,_7214).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_rule2_2__1(mach);
		}

		public static Operation exec_pred_rule2_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, mu.s_m, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(mu.s2, mu.s_m, var2))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_append_3::exec_static;
		}
	}

	public static class pred_rule3_2 extends Code {

		/*
		
		rule3([i,i,i|_7366],[u|_7366],_7400):-call(_7400).
		rule3([_7502|_7504],[_7502|_7510],_7556):-rule3(_7504,_7510,_7556).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_rule3_2__1(mach);
		}

		public static Operation exec_pred_rule3_2__1(Prolog mach) {
			mach.FillAlternative(pred_rule3_2::exec_pred_rule3_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, mu.s_i, Data.F(mu.s2, mu.s_i, Data.F(mu.s2, mu.s_i, var1))))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(mu.s2, mu.s_u, var1.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_rule3_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(mu.s2, var1.Deref(), var3))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_rule3_2::exec_static;
		}
	}

	public static class pred_rule4_2 extends Code {

		/*
		
		rule4([u,u|_7694],_7694,_7722):-call(_7722).
		rule4([_7830|_7832],[_7830|_7838],_7884):-rule4(_7832,_7838,_7884).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_rule4_2__1(mach);
		}

		public static Operation exec_pred_rule4_2__1(Prolog mach) {
			mach.FillAlternative(pred_rule4_2::exec_pred_rule4_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, mu.s_u, Data.F(mu.s2, mu.s_u, var1)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_rule4_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(mu.s2, var1.Deref(), var3))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_rule4_2::exec_static;
		}
	}

	public static class pred_append_3 extends Code {

		/*
		
		append([],_8022,_8022,_8046):-call(_8046).
		append([_8174|_8176],_8188,[_8174|_8182],_8238):-append(_8176,_8188,_8182,_8238).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_append_3__1(mach);
		}

		public static Operation exec_pred_append_3__1(Prolog mach) {
			mach.FillAlternative(pred_append_3::exec_pred_append_3__2);
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

		public static Operation exec_pred_append_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(mu.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(mu.s2, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_append_3::exec_static;
		}
	}

}
