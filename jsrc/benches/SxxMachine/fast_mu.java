package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class fast_mu /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("+");
	final static Const s2 = Data.Intern("-");
	final static Const s3 = Data.Intern("->");
	final static Const s4 = Data.Intern(".");
	final static Const s5 = Data.Intern("/\\");
	final static Const s6 = Data.Intern(":-");
	final static Const s7 = Data.Intern("=:=");
	final static Const s8 = Data.Intern(">>");
	final static Const s_call = Data.Intern("call");
	final static Const s_derive = Data.Intern("derive");
	final static Const s_derive2 = Data.Intern("derive2");
	final static Const s_i = Data.Intern("i");
	final static Const s_is = Data.Intern("is");
	final static Const s_length = Data.Intern("length");
	final static Const s_lower_bound = Data.Intern("lower_bound");
	final static Const s_m = Data.Intern("m");
	final static Const s_or = Data.Intern("or");
	final static Const s_rule = Data.Intern("rule");
	final static Const s_smallerorequal = Data.Intern("smallerorequal");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_theorem = Data.Intern("theorem");
	final static Const s_top = Data.Intern("top");
	final static Const s_u = Data.Intern("u");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Int posint3 = Data.Number(3L);
	final static Int posint4 = Data.Number(4L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_theorem_1 = PredTable.Register("theorem", 1, new pred_theorem_1());
	final static Operation reg_derive_6 = PredTable.Register("derive", 6, new pred_derive_6());
	final static Operation reg_derive2_7 = PredTable.Register("derive2", 7, new pred_derive2_7());
	final static Operation reg_rule_7 = PredTable.Register("rule", 7, new pred_rule_7());
	final static Operation reg_rule_11 = PredTable.Register("rule", 11, new pred_rule_11());
	final static Operation reg_lower_bound_3 = PredTable.Register("lower_bound", 3, new pred_lower_bound_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_19930):-theorem([m,u,i,i,u],_19930).
		
		
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
			local_aregs[0] = Data.F(fast_mu.s4, fast_mu.s_m, Data.F(fast_mu.s4, fast_mu.s_u, Data.F(fast_mu.s4,
					fast_mu.s_i, Data.F(fast_mu.s4, fast_mu.s_i, Data.F(fast_mu.s4, fast_mu.s_u, Const.Nil)))));
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_theorem_1::exec_static;
		}
	}

	public static class pred_theorem_1 extends Code {

		/*
		
		theorem(_19994,_20078):-length(_19994,_20000,is(_20010,_20000-1,derive([m,i],_19994,1,_20010,_20036,0,_20078))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_theorem_1__1(mach);
		}

		public static Operation exec_pred_theorem_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2;
			local_aregs[2] = Data.F(fast_mu.s_is, var3, Data.F(fast_mu.s2, var2.Deref(), fast_mu.posint1),
					Data.F(fast_mu.s_derive,
							Data.F(fast_mu.s4, fast_mu.s_m, Data.F(fast_mu.s4, fast_mu.s_i, Const.Nil)), var1.Deref(),
							fast_mu.posint1, var3.Deref(), var4, fast_mu.posint0, continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_length_2::exec_static;
		}
	}

	public static class pred_derive_6 extends Code {

		/*
		
		derive(_20326,_20328,_20330,_20332,_20334,_20336,_20410):-derive2(_20326,_20328,_20330,_20332,1,_20334,_20336,_20410).
		derive(_20618,_20620,_20622,_20624,_20626,_20628,_20718):-is(_20638,_20628+1,derive(_20618,_20620,_20622,_20624,_20626,_20638,_20718)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
			Term aregs[] = mach.RegPull(6);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_derive_6__1(mach);
		}

		public static Operation exec_pred_derive_6__1(Prolog mach) {
			mach.FillAlternative(pred_derive_6::exec_pred_derive_6__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
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
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4.Deref();
			local_aregs[4] = fast_mu.posint1;
			local_aregs[5] = var5.Deref();
			local_aregs[6] = var6.Deref();
			local_aregs[7] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_derive2_7::exec_static;
		}

		public static Operation exec_pred_derive_6__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			local_aregs[0] = var7;
			local_aregs[1] = Data.F(fast_mu.s1, var6.Deref(), fast_mu.posint1);
			local_aregs[2] = Data.F(fast_mu.s_derive, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref(),
					var5.Deref(), var7.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_derive2_7 extends Code {

		/*
		
		derive2(_20962,_20962,_20966,_20966,_20970,[],_20974,_20996):-call(_20996).
		derive2(_21162,_21164,_21166,_21168,_21170,[rule(_21150,_21152)|_21158],_21174,_21320):-lower_bound(_21166,_21168,_21182,smallerorequal(_21182,_21174,is(_21198,_21174-1,rule(_21162,_21152,_21166,_21210,_21170,_21214,_21150,derive2(_21152,_21164,_21210,_21168,_21214,_21158,_21198,_21320))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
			Term aregs[] = mach.RegPull(7);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_derive2_7__1(mach);
		}

		public static Operation exec_pred_derive2_7__1(Prolog mach) {
			mach.FillAlternative(pred_derive2_7::exec_pred_derive2_7__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[7];
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var2.Deref())))
				return Prolog.Fail0;
			if (!((areg4).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg5).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_derive2_7__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[7];
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(Data.F(fast_mu.s4, Data.F(fast_mu.s_rule, var6, var7), var8))))
				return Prolog.Fail0;
			if (!((areg6).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = var10;
			local_aregs[3] = Data.F(fast_mu.s_smallerorequal, var10.Deref(), var9.Deref(),
					Data.F(fast_mu.s_is, var11, Data.F(fast_mu.s2, var9.Deref(), fast_mu.posint1),
							Data.F(fast_mu.s_rule, var1.Deref(), var7.Deref(), var3.Deref(), var12, var5.Deref(), var13,
									var6.Deref(), Data.F(fast_mu.s_derive2, var7.Deref(), var2.Deref(), var12.Deref(),
											var4.Deref(), var13.Deref(), var8.Deref(), var11.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
			return (Operation) pred_lower_bound_3::exec_static;
		}
	}

	public static class pred_rule_7 extends Code {

		/*
		
		rule([m|_21834],[m|_21840],_21848,_21850,_21852,_21854,_21856,_21944):-rule(_21834,_21840,_21848,_21850,_21852,_21854,1,i,_21856,_21878,_21878,_21944).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
			Term aregs[] = mach.RegPull(7);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_rule_7__1(mach);
		}

		public static Operation exec_pred_rule_7__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[7];
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
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
			if (!((areg0).Unify(Data.F(fast_mu.s4, fast_mu.s_m, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(fast_mu.s4, fast_mu.s_m, var2))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4.Deref();
			local_aregs[4] = var5.Deref();
			local_aregs[5] = var6.Deref();
			local_aregs[6] = fast_mu.posint1;
			local_aregs[7] = fast_mu.s_i;
			local_aregs[8] = var7.Deref();
			local_aregs[9] = var8;
			local_aregs[10] = var8.Deref();
			local_aregs[11] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_rule_11::exec_static;
		}
	}

	public static class pred_rule_11 extends Code {

		/*
		
		rule([i],[i,u],_22250,_22252,_22254,_22256,_22258,_22260,1,_22264,_22266,_22396):-smallerorequal(_22254,_22258,is(_22256,_22258-2,is(_22252,_22250+1,_22396))).
		rule([],_22700,_22702,_22704,_22706,1,_22710,_22712,2,_22700,[],_22818):-is(_22704,_22702+_22702,_22818).
		rule([i,i,i|_23028],[u|_23028],_23042,_23044,_23046,_23048,_23050,_23052,3,_23056,_23058,_23188):-smallerorequal(_23046,_23050,is(_23048,_23050-1,is(_23044,_23042-2,_23188))).
		rule([u,u|_23498],_23498,_23506,_23508,_23510,_23512,_23514,i,4,_23520,_23522,_23652):-smallerorequal(_23510,_23514,is(_23512,_23514-2,is(_23508,_23506-2,_23652))).
		rule([_23954|_23956],[_23954|_23962],_23976,_23978,_23980,_23982,_23984,_23986,_23988,_23990,[_23954|_23968],_24122):-is(_24002,_23984+1,rule(_23956,_23962,_23976,_23978,_23980,_23982,_24002,_23954,_23988,_23990,_23968,_24122)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11]} ;*/
			Term aregs[] = mach.RegPull(11);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_rule_11__1(mach);
		}

		public static Operation exec_pred_rule_11__1(Prolog mach) {
			mach.FillAlternative(pred_rule_11::exec_pred_rule_11__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[11];
			Term areg10 = local_aregs[10].Deref();
			Term areg9 = local_aregs[9].Deref();
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
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
			if (!((areg0).Unify(Data.F(fast_mu.s4, fast_mu.s_i, Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(fast_mu.s4, fast_mu.s_i, Data.F(fast_mu.s4, fast_mu.s_u, Const.Nil)))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg8).Unify(fast_mu.posint1)))
				return Prolog.Fail0;
			if (!((areg9).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg10).Unify(var8)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var5.Deref();
			local_aregs[2] = Data.F(fast_mu.s_is, var4.Deref(), Data.F(fast_mu.s2, var5.Deref(), fast_mu.posint2), Data
					.F(fast_mu.s_is, var2.Deref(), Data.F(fast_mu.s1, var1.Deref(), fast_mu.posint1), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_rule_11__2(Prolog mach) {
			mach.FillAlternative(pred_rule_11::exec_pred_rule_11__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[11];
			Term areg10 = local_aregs[10].Deref();
			Term areg9 = local_aregs[9].Deref();
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
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
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg5).Unify(fast_mu.posint1)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg8).Unify(fast_mu.posint2)))
				return Prolog.Fail0;
			if (!((areg9).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = Data.F(fast_mu.s1, var2.Deref(), var2.Deref());
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}

		public static Operation exec_pred_rule_11__3(Prolog mach) {
			mach.FillAlternative(pred_rule_11::exec_pred_rule_11__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[11];
			Term areg10 = local_aregs[10].Deref();
			Term areg9 = local_aregs[9].Deref();
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
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
			if (!((areg0).Unify(Data.F(fast_mu.s4, fast_mu.s_i,
					Data.F(fast_mu.s4, fast_mu.s_i, Data.F(fast_mu.s4, fast_mu.s_i, var1))))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(fast_mu.s4, fast_mu.s_u, var1.Deref()))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(fast_mu.posint3)))
				return Prolog.Fail0;
			if (!((areg9).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg10).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var4.Deref();
			local_aregs[1] = var6.Deref();
			local_aregs[2] = Data.F(fast_mu.s_is, var5.Deref(), Data.F(fast_mu.s2, var6.Deref(), fast_mu.posint1), Data
					.F(fast_mu.s_is, var3.Deref(), Data.F(fast_mu.s2, var2.Deref(), fast_mu.posint2), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_rule_11__4(Prolog mach) {
			mach.FillAlternative(pred_rule_11::exec_pred_rule_11__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[11];
			Term areg10 = local_aregs[10].Deref();
			Term areg9 = local_aregs[9].Deref();
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
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
			if (!((areg0).Unify(Data.F(fast_mu.s4, fast_mu.s_u, Data.F(fast_mu.s4, fast_mu.s_u, var1)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg7).Unify(fast_mu.s_i)))
				return Prolog.Fail0;
			if (!((areg8).Unify(fast_mu.posint4)))
				return Prolog.Fail0;
			if (!((areg9).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg10).Unify(var8)))
				return Prolog.Fail0;
			local_aregs[0] = var4.Deref();
			local_aregs[1] = var6.Deref();
			local_aregs[2] = Data.F(fast_mu.s_is, var5.Deref(), Data.F(fast_mu.s2, var6.Deref(), fast_mu.posint2), Data
					.F(fast_mu.s_is, var3.Deref(), Data.F(fast_mu.s2, var2.Deref(), fast_mu.posint2), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_rule_11__5(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[11];
			Term areg10 = local_aregs[10].Deref();
			Term areg9 = local_aregs[9].Deref();
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(Data.F(fast_mu.s4, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(fast_mu.s4, var1.Deref(), var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var9)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var10)))
				return Prolog.Fail0;
			if (!((areg9).Unify(var11)))
				return Prolog.Fail0;
			if (!((areg10).Unify(Data.F(fast_mu.s4, var1.Deref(), var12))))
				return Prolog.Fail0;
			local_aregs[0] = var13;
			local_aregs[1] = Data.F(fast_mu.s1, var8.Deref(), fast_mu.posint1);
			local_aregs[2] = Data.F(fast_mu.s_rule, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(),
					var6.Deref(), var7.Deref(), var13.Deref(), var1.Deref(), var10.Deref(), var11.Deref(),
					var12.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_lower_bound_3 extends Code {

		/*
		
		lower_bound(_24494,_24496,1,_24544):-smallerthan(_24494,_24496,_24544).
		lower_bound(_24688,_24688,2,_24714):-call(_24714).
		lower_bound(_24830,_24832,_24834,_24976):-smallerthan(_24832,_24830,is(_24850,_24830-_24832,is(_24862,_24850/\1,or((_24862=:=0->_24834 is _24850>>1),_24834 is (_24850+1)>>1+1,_24976)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_lower_bound_3__1(mach);
		}

		public static Operation exec_pred_lower_bound_3__1(Prolog mach) {
			mach.FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__2);
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
			if (!((areg2).Unify(fast_mu.posint1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_lower_bound_3__2(Prolog mach) {
			mach.FillAlternative(pred_lower_bound_3::exec_pred_lower_bound_3__3);
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
			if (!((areg2).Unify(fast_mu.posint2)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_lower_bound_3__3(Prolog mach) {
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
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = Data.F(fast_mu.s_is, var4, Data.F(fast_mu.s2, var1.Deref(), var2.Deref()),
					Data.F(fast_mu.s_is, var5, Data.F(fast_mu.s5, var4.Deref(), fast_mu.posint1),
							Data.F(fast_mu.s_or,
									Data.F(fast_mu.s3, Data.F(fast_mu.s7, var5.Deref(), fast_mu.posint0),
											Data.F(fast_mu.s_is, var3.Deref(),
													Data.F(fast_mu.s8, var4.Deref(), fast_mu.posint1))),
									Data.F(fast_mu.s_is, var3.Deref(),
											Data.F(fast_mu.s1, Data.F(fast_mu.s8,
													Data.F(fast_mu.s1, var4.Deref(), fast_mu.posint1), fast_mu.posint1),
													fast_mu.posint1)),
									continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

}
