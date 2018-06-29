package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class query /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("*");
	final static Const s2 = Data.Intern(".");
	final static Const s3 = Data.Intern("//");
	final static Const s4 = Data.Intern(":-");
	final static Const s_area = Data.Intern("area");
	final static Const s_argentina = Data.Intern("argentina");
	final static Const s_bangladesh = Data.Intern("bangladesh");
	final static Const s_brazil = Data.Intern("brazil");
	final static Const s_call = Data.Intern("call");
	final static Const s_china = Data.Intern("china");
	final static Const s_density = Data.Intern("density");
	final static Const s_egypt = Data.Intern("egypt");
	final static Const s_ethiopia = Data.Intern("ethiopia");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_france = Data.Intern("france");
	final static Const s_india = Data.Intern("india");
	final static Const s_indonesia = Data.Intern("indonesia");
	final static Const s_iran = Data.Intern("iran");
	final static Const s_is = Data.Intern("is");
	final static Const s_italy = Data.Intern("italy");
	final static Const s_japan = Data.Intern("japan");
	final static Const s_mexico = Data.Intern("mexico");
	final static Const s_nigeria = Data.Intern("nigeria");
	final static Const s_pakistan = Data.Intern("pakistan");
	final static Const s_philippines = Data.Intern("philippines");
	final static Const s_poland = Data.Intern("poland");
	final static Const s_pop = Data.Intern("pop");
	final static Const s_query = Data.Intern("query");
	final static Const s_s_korea = Data.Intern("s_korea");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_spain = Data.Intern("spain");
	final static Const s_thailand = Data.Intern("thailand");
	final static Const s_top = Data.Intern("top");
	final static Const s_turkey = Data.Intern("turkey");
	final static Const s_uk = Data.Intern("uk");
	final static Const s_usa = Data.Intern("usa");
	final static Const s_ussr = Data.Intern("ussr");
	final static Const s_w_germany = Data.Intern("w_germany");
	final static Int posint20 = Data.Number(20L);
	final static Int posint21 = Data.Number(21L);
	final static Int posint37 = Data.Number(37L);
	final static Int posint55 = Data.Number(55L);
	final static Int posint86 = Data.Number(86L);
	final static Int posint90 = Data.Number(90L);
	final static Int posint96 = Data.Number(96L);
	final static Int posint100 = Data.Number(100L);
	final static Int posint116 = Data.Number(116L);
	final static Int posint121 = Data.Number(121L);
	final static Int posint148 = Data.Number(148L);
	final static Int posint190 = Data.Number(190L);
	final static Int posint200 = Data.Number(200L);
	final static Int posint213 = Data.Number(213L);
	final static Int posint251 = Data.Number(251L);
	final static Int posint272 = Data.Number(272L);
	final static Int posint296 = Data.Number(296L);
	final static Int posint311 = Data.Number(311L);
	final static Int posint320 = Data.Number(320L);
	final static Int posint335 = Data.Number(335L);
	final static Int posint337 = Data.Number(337L);
	final static Int posint350 = Data.Number(350L);
	final static Int posint352 = Data.Number(352L);
	final static Int posint364 = Data.Number(364L);
	final static Int posint373 = Data.Number(373L);
	final static Int posint383 = Data.Number(383L);
	final static Int posint386 = Data.Number(386L);
	final static Int posint410 = Data.Number(410L);
	final static Int posint415 = Data.Number(415L);
	final static Int posint525 = Data.Number(525L);
	final static Int posint554 = Data.Number(554L);
	final static Int posint559 = Data.Number(559L);
	final static Int posint570 = Data.Number(570L);
	final static Int posint581 = Data.Number(581L);
	final static Int posint613 = Data.Number(613L);
	final static Int posint620 = Data.Number(620L);
	final static Int posint628 = Data.Number(628L);
	final static Int posint682 = Data.Number(682L);
	final static Int posint750 = Data.Number(750L);
	final static Int posint764 = Data.Number(764L);
	final static Int posint1042 = Data.Number(1042L);
	final static Int posint1080 = Data.Number(1080L);
	final static Int posint1097 = Data.Number(1097L);
	final static Int posint1139 = Data.Number(1139L);
	final static Int posint1276 = Data.Number(1276L);
	final static Int posint2119 = Data.Number(2119L);
	final static Int posint2521 = Data.Number(2521L);
	final static Int posint3288 = Data.Number(3288L);
	final static Int posint3380 = Data.Number(3380L);
	final static Int posint3609 = Data.Number(3609L);
	final static Int posint5863 = Data.Number(5863L);
	final static Int posint8250 = Data.Number(8250L);
	final static Int posint8708 = Data.Number(8708L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_query_0 = PredTable.Register("query", 0, new pred_query_0());
	final static Operation reg_query_1 = PredTable.Register("query", 1, new pred_query_1());
	final static Operation reg_density_2 = PredTable.Register("density", 2, new pred_density_2());
	final static Operation reg_pop_2 = PredTable.Register("pop", 2, new pred_pop_2());
	final static Operation reg_area_2 = PredTable.Register("area", 2, new pred_area_2());

	public static class pred_top_0 extends Code {

		/*
		
		top(_14994):-query(_14994).
		
		
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
			return (Operation) pred_query_0::exec_static;
		}
	}

	public static class pred_query_0 extends Code {

		/*
		
		query(_15072):-query(_15044,fail(_15072)).
		query(_15182):-call(_15182).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_query_0__1(mach);
		}

		public static Operation exec_pred_query_0__1(Prolog mach) {
			mach.FillAlternative(pred_query_0::exec_pred_query_0__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = var1;
			local_aregs[1] = Data.F(query.s_fail, continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_query_1::exec_static;
		}

		public static Operation exec_pred_query_0__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}
	}

	public static class pred_query_1 extends Code {

		/*
		
		query([_15226,_15232,_15238,_15244],_15356):-density(_15226,_15232,density(_15238,_15244,smallerthan(_15244,_15232,is(_15278,20*_15232,is(_15290,21*_15244,smallerthan(_15278,_15290,_15356)))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_query_1__1(mach);
		}

		public static Operation exec_pred_query_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(query.s2, var1,
					Data.F(query.s2, var2, Data.F(query.s2, var3, Data.F(query.s2, var4, Const.Nil)))))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = Data.F(query.s_density, var3.Deref(), var4.Deref(),
					Data.F(query.s_smallerthan, var4.Deref(), var2.Deref(),
							Data.F(query.s_is, var5, Data.F(query.s1, query.posint20, var2.Deref()),
									Data.F(query.s_is, var6, Data.F(query.s1, query.posint21, var4.Deref()),
											Data.F(query.s_smallerthan, var5.Deref(), var6.Deref(), continuation)))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_density_2::exec_static;
		}
	}

	public static class pred_density_2 extends Code {

		/*
		
		density(_15716,_15718,_15794):-pop(_15716,_15724,area(_15716,_15730,is(_15718,_15724*100//_15730,_15794))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_density_2__1(mach);
		}

		public static Operation exec_pred_density_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3;
			local_aregs[2] = Data.F(query.s_area, var1.Deref(), var4, Data.F(query.s_is, var2.Deref(),
					Data.F(query.s3, Data.F(query.s1, var3.Deref(), query.posint100), var4.Deref()), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_pop_2::exec_static;
		}
	}

	public static class pred_pop_2 extends Code {

		/*
		
		pop(china,8250,_16030):-call(_16030).
		pop(india,5863,_16144):-call(_16144).
		pop(ussr,2521,_16258):-call(_16258).
		pop(usa,2119,_16372):-call(_16372).
		pop(indonesia,1276,_16486):-call(_16486).
		pop(japan,1097,_16600):-call(_16600).
		pop(brazil,1042,_16714):-call(_16714).
		pop(bangladesh,750,_16828):-call(_16828).
		pop(pakistan,682,_16942):-call(_16942).
		pop(w_germany,620,_17056):-call(_17056).
		pop(nigeria,613,_17170):-call(_17170).
		pop(mexico,581,_17284):-call(_17284).
		pop(uk,559,_17398):-call(_17398).
		pop(italy,554,_17512):-call(_17512).
		pop(france,525,_17626):-call(_17626).
		pop(philippines,415,_17740):-call(_17740).
		pop(thailand,410,_17854):-call(_17854).
		pop(turkey,383,_17968):-call(_17968).
		pop(egypt,364,_18082):-call(_18082).
		pop(spain,352,_18196):-call(_18196).
		pop(poland,337,_18310):-call(_18310).
		pop(s_korea,335,_18424):-call(_18424).
		pop(iran,320,_18538):-call(_18538).
		pop(ethiopia,272,_18652):-call(_18652).
		pop(argentina,251,_18766):-call(_18766).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_pop_2__1(mach);
		}

		public static Operation exec_pred_pop_2__1(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_china)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint8250)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__2(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_india)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint5863)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__3(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_ussr)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint2521)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__4(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_usa)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint2119)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__5(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_indonesia)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint1276)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__6(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_japan)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint1097)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__7(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_brazil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint1042)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__8(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_bangladesh)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint750)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__9(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_pakistan)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint682)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__10(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_w_germany)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint620)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__11(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__12);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_nigeria)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint613)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__12(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__13);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_mexico)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint581)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__13(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__14);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_uk)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint559)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__14(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__15);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_italy)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint554)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__15(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__16);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_france)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint525)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__16(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__17);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_philippines)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint415)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__17(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__18);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_thailand)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint410)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__18(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__19);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_turkey)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint383)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__19(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__20);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_egypt)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint364)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__20(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__21);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_spain)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint352)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__21(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__22);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_poland)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint337)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__22(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__23);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_s_korea)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint335)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__23(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__24);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_iran)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint320)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__24(Prolog mach) {
			mach.FillAlternative(pred_pop_2::exec_pred_pop_2__25);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_ethiopia)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint272)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_pop_2__25(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_argentina)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint251)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_area_2 extends Code {

		/*
		
		area(china,3380,_18880):-call(_18880).
		area(india,1139,_19000):-call(_19000).
		area(ussr,8708,_19120):-call(_19120).
		area(usa,3609,_19240):-call(_19240).
		area(indonesia,570,_19360):-call(_19360).
		area(japan,148,_19480):-call(_19480).
		area(brazil,3288,_19600):-call(_19600).
		area(bangladesh,55,_19720):-call(_19720).
		area(pakistan,311,_19840):-call(_19840).
		area(w_germany,96,_19960):-call(_19960).
		area(nigeria,373,_20080):-call(_20080).
		area(mexico,764,_20200):-call(_20200).
		area(uk,86,_20320):-call(_20320).
		area(italy,116,_20440):-call(_20440).
		area(france,213,_20560):-call(_20560).
		area(philippines,90,_20680):-call(_20680).
		area(thailand,200,_20800):-call(_20800).
		area(turkey,296,_20920):-call(_20920).
		area(egypt,386,_21040):-call(_21040).
		area(spain,190,_21160):-call(_21160).
		area(poland,121,_21280):-call(_21280).
		area(s_korea,37,_21400):-call(_21400).
		area(iran,628,_21520):-call(_21520).
		area(ethiopia,350,_21640):-call(_21640).
		area(argentina,1080,_21760):-call(_21760).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_area_2__1(mach);
		}

		public static Operation exec_pred_area_2__1(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_china)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint3380)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__2(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_india)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint1139)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__3(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_ussr)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint8708)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__4(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_usa)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint3609)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__5(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_indonesia)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint570)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__6(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_japan)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint148)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__7(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_brazil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint3288)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__8(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_bangladesh)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint55)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__9(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_pakistan)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint311)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__10(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_w_germany)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint96)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__11(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__12);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_nigeria)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint373)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__12(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__13);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_mexico)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint764)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__13(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__14);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_uk)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint86)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__14(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__15);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_italy)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint116)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__15(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__16);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_france)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint213)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__16(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__17);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_philippines)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint90)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__17(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__18);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_thailand)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint200)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__18(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__19);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_turkey)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint296)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__19(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__20);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_egypt)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint386)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__20(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__21);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_spain)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint190)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__21(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__22);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_poland)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint121)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__22(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__23);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_s_korea)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint37)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__23(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__24);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_iran)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint628)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__24(Prolog mach) {
			mach.FillAlternative(pred_area_2::exec_pred_area_2__25);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_ethiopia)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint350)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_area_2__25(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(query.s_argentina)))
				return Prolog.Fail0;
			if (!((areg1).Unify(query.posint1080)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
