package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class zebra /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern(".");
	final static Const s2 = Data.Intern(":-");
	final static Const s_blue = Data.Intern("blue");
	final static Const s_call = Data.Intern("call");
	final static Const s_chesterfields = Data.Intern("chesterfields");
	final static Const s_coffee = Data.Intern("coffee");
	final static Const s_dog = Data.Intern("dog");
	final static Const s_english = Data.Intern("english");
	final static Const s_fox = Data.Intern("fox");
	final static Const s_green = Data.Intern("green");
	final static Const s_horse = Data.Intern("horse");
	final static Const s_house = Data.Intern("house");
	final static Const s_houses = Data.Intern("houses");
	final static Const s_ivory = Data.Intern("ivory");
	final static Const s_japanese = Data.Intern("japanese");
	final static Const s_kools = Data.Intern("kools");
	final static Const s_lucky_strikes = Data.Intern("lucky_strikes");
	final static Const s_member = Data.Intern("member");
	final static Const s_milk = Data.Intern("milk");
	final static Const s_next_to = Data.Intern("next_to");
	final static Const s_nl = Data.Intern("nl");
	final static Const s_norwegian = Data.Intern("norwegian");
	final static Const s_orange_juice = Data.Intern("orange_juice");
	final static Const s_parliaments = Data.Intern("parliaments");
	final static Const s_print_houses = Data.Intern("print_houses");
	final static Const s_red = Data.Intern("red");
	final static Const s_right_of = Data.Intern("right_of");
	final static Const s_snails = Data.Intern("snails");
	final static Const s_spanish = Data.Intern("spanish");
	final static Const s_tea = Data.Intern("tea");
	final static Const s_top = Data.Intern("top");
	final static Const s_ukrainian = Data.Intern("ukrainian");
	final static Const s_unify = Data.Intern("unify");
	final static Const s_water = Data.Intern("water");
	final static Const s_winstons = Data.Intern("winstons");
	final static Const s_write = Data.Intern("write");
	final static Const s_yellow = Data.Intern("yellow");
	final static Const s_zebra = Data.Intern("zebra");
	final static Int posint1 = Data.Number(1L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_houses_1 = PredTable.Register("houses", 1, new pred_houses_1());
	final static Operation reg_right_of_3 = PredTable.Register("right_of", 3, new pred_right_of_3());
	final static Operation reg_next_to_3 = PredTable.Register("next_to", 3, new pred_next_to_3());
	final static Operation reg_member_2 = PredTable.Register("member", 2, new pred_member_2());
	final static Operation reg_print_houses_1 = PredTable.Register("print_houses", 1, new pred_print_houses_1());

	public static class pred_top_0 extends Code {

		/*
		
		top(_5834):-houses(_5336,member(house(red,english,_5344,_5346,_5348),_5336,member(house(_5358,spanish,dog,_5364,_5366),_5336,member(house(green,_5378,_5380,coffee,_5384),_5336,member(house(_5394,ukrainian,_5398,tea,_5402),_5336,right_of(house(green,_5414,_5416,_5418,_5420),house(ivory,_5426,_5428,_5430,_5432),_5336,member(house(_5444,_5446,snails,_5450,winstons),_5336,member(house(yellow,_5464,_5466,_5468,kools),_5336,unify([_5480,_5486,house(_5492,_5494,_5496,milk,_5500),_5510,_5516],_5336,unify([house(_5528,norwegian,_5532,_5534,_5536)|_5542],_5336,next_to(house(_5552,_5554,_5556,_5558,chesterfields),house(_5564,_5566,fox,_5570,_5572),_5336,next_to(house(_5584,_5586,_5588,_5590,kools),house(_5596,_5598,horse,_5602,_5604),_5336,member(house(_5616,_5618,_5620,orange_juice,lucky_strikes),_5336,member(house(_5634,japanese,_5638,_5640,parliaments),_5336,next_to(house(_5652,norwegian,_5656,_5658,_5660),house(blue,_5666,_5668,_5670,_5672),_5336,member(house(_5684,_5686,zebra,_5690,_5692),_5336,member(house(_5702,_5704,_5706,water,_5710),_5336,_5834))))))))))))))))).
		
		
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
			Var var78 = Data.V(mach);
			Var var77 = Data.V(mach);
			Var var76 = Data.V(mach);
			Var var75 = Data.V(mach);
			Var var74 = Data.V(mach);
			Var var73 = Data.V(mach);
			Var var72 = Data.V(mach);
			Var var71 = Data.V(mach);
			Var var70 = Data.V(mach);
			Var var69 = Data.V(mach);
			Var var68 = Data.V(mach);
			Var var67 = Data.V(mach);
			Var var66 = Data.V(mach);
			Var var65 = Data.V(mach);
			Var var64 = Data.V(mach);
			Var var63 = Data.V(mach);
			Var var62 = Data.V(mach);
			Var var61 = Data.V(mach);
			Var var60 = Data.V(mach);
			Var var59 = Data.V(mach);
			Var var58 = Data.V(mach);
			Var var57 = Data.V(mach);
			Var var56 = Data.V(mach);
			Var var55 = Data.V(mach);
			Var var54 = Data.V(mach);
			Var var53 = Data.V(mach);
			Var var52 = Data.V(mach);
			Var var51 = Data.V(mach);
			Var var50 = Data.V(mach);
			Var var49 = Data.V(mach);
			Var var48 = Data.V(mach);
			Var var47 = Data.V(mach);
			Var var46 = Data.V(mach);
			Var var45 = Data.V(mach);
			Var var44 = Data.V(mach);
			Var var43 = Data.V(mach);
			Var var42 = Data.V(mach);
			Var var41 = Data.V(mach);
			Var var40 = Data.V(mach);
			Var var39 = Data.V(mach);
			Var var38 = Data.V(mach);
			Var var37 = Data.V(mach);
			Var var36 = Data.V(mach);
			Var var35 = Data.V(mach);
			Var var34 = Data.V(mach);
			Var var33 = Data.V(mach);
			Var var32 = Data.V(mach);
			Var var31 = Data.V(mach);
			Var var30 = Data.V(mach);
			Var var29 = Data.V(mach);
			Var var28 = Data.V(mach);
			Var var27 = Data.V(mach);
			Var var26 = Data.V(mach);
			Var var25 = Data.V(mach);
			Var var24 = Data.V(mach);
			Var var23 = Data.V(mach);
			Var var22 = Data.V(mach);
			Var var21 = Data.V(mach);
			Var var20 = Data.V(mach);
			Var var19 = Data.V(mach);
			Var var18 = Data.V(mach);
			Var var17 = Data.V(mach);
			Var var16 = Data.V(mach);
			Var var15 = Data.V(mach);
			Var var14 = Data.V(mach);
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
			local_aregs[0] = var1;
			local_aregs[1] = Data.F(zebra.s_member,
					Data.F(zebra.s_house, zebra.s_red, zebra.s_english, var2, var3, var4), var1.Deref(),
					Data.F(zebra.s_member, Data.F(zebra.s_house, var5, zebra.s_spanish, zebra.s_dog, var6, var7),
							var1.Deref(),
							Data.F(zebra.s_member,
									Data.F(zebra.s_house, zebra.s_green, var8, var9, zebra.s_coffee, var10),
									var1.Deref(),
									Data.F(zebra.s_member,
											Data.F(zebra.s_house, var11, zebra.s_ukrainian, var12, zebra.s_tea, var13),
											var1.Deref(),
											Data.F(zebra.s_right_of,
													Data.F(zebra.s_house, zebra.s_green, var14, var15, var16, var17),
													Data.F(zebra.s_house, zebra.s_ivory, var18, var19, var20, var21),
													var1.Deref(), Data.F(
															zebra.s_member, Data.F(zebra.s_house, var22, var23,
																	zebra.s_snails, var24, zebra.s_winstons),
															var1.Deref(), Data.F(zebra.s_member, Data.F(zebra.s_house,
																	zebra.s_yellow, var25, var26, var27, zebra.s_kools),
																	var1.Deref(),
																	Data.F(zebra.s_unify, Data.F(zebra.s1, var28,
																			Data.F(zebra.s1, var29, Data.F(zebra.s1,
																					Data.F(zebra.s_house, var30, var31,
																							var32, zebra.s_milk, var33),
																					Data.F(zebra.s1, var34,
																							Data.F(zebra.s1, var35,
																									Const.Nil))))),
																			var1.Deref(),
																			Data.F(zebra.s_unify, Data.F(zebra.s1,
																					Data.F(zebra.s_house, var36,
																							zebra.s_norwegian, var37,
																							var38, var39),
																					var40), var1.Deref(),
																					Data.F(zebra.s_next_to, Data.F(
																							zebra.s_house, var41, var42,
																							var43, var44,
																							zebra.s_chesterfields),
																							Data.F(zebra.s_house, var45,
																									var46, zebra.s_fox,
																									var47, var48),
																							var1.Deref(),
																							Data.F(zebra.s_next_to, Data
																									.F(zebra.s_house,
																											var49,
																											var50,
																											var51,
																											var52,
																											zebra.s_kools),
																									Data.F(zebra.s_house,
																											var53,
																											var54,
																											zebra.s_horse,
																											var55,
																											var56),
																									var1.Deref(),
																									Data.F(zebra.s_member,
																											Data.F(zebra.s_house,
																													var57,
																													var58,
																													var59,
																													zebra.s_orange_juice,
																													zebra.s_lucky_strikes),
																											var1.Deref(),
																											Data.F(zebra.s_member,
																													Data.F(zebra.s_house,
																															var60,
																															zebra.s_japanese,
																															var61,
																															var62,
																															zebra.s_parliaments),
																													var1.Deref(),
																													Data.F(zebra.s_next_to,
																															Data.F(zebra.s_house,
																																	var63,
																																	zebra.s_norwegian,
																																	var64,
																																	var65,
																																	var66),
																															Data.F(zebra.s_house,
																																	zebra.s_blue,
																																	var67,
																																	var68,
																																	var69,
																																	var70),
																															var1.Deref(),
																															Data.F(zebra.s_member,
																																	Data.F(zebra.s_house,
																																			var71,
																																			var72,
																																			zebra.s_zebra,
																																			var73,
																																			var74),
																																	var1.Deref(),
																																	Data.F(zebra.s_member,
																																			Data.F(zebra.s_house,
																																					var75,
																																					var76,
																																					var77,
																																					zebra.s_water,
																																					var78),
																																			var1.Deref(),
																																			continuation))))))))))))))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_houses_1::exec_static;
		}
	}

	public static class pred_houses_1 extends Code {

		/*
		
		houses([house(_6766,_6768,_6770,_6772,_6774),house(_6784,_6786,_6788,_6790,_6792),house(_6802,_6804,_6806,_6808,_6810),house(_6820,_6822,_6824,_6826,_6828),house(_6838,_6840,_6842,_6844,_6846)],_6878):-call(_6878).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_houses_1__1(mach);
		}

		public static Operation exec_pred_houses_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var25 = Data.V(mach);
			Var var24 = Data.V(mach);
			Var var23 = Data.V(mach);
			Var var22 = Data.V(mach);
			Var var21 = Data.V(mach);
			Var var20 = Data.V(mach);
			Var var19 = Data.V(mach);
			Var var18 = Data.V(mach);
			Var var17 = Data.V(mach);
			Var var16 = Data.V(mach);
			Var var15 = Data.V(mach);
			Var var14 = Data.V(mach);
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
			if (!((areg0).Unify(Data.F(zebra.s1, Data.F(zebra.s_house, var1, var2, var3, var4, var5), Data.F(zebra.s1,
					Data.F(zebra.s_house, var6, var7, var8, var9, var10),
					Data.F(zebra.s1, Data.F(zebra.s_house, var11, var12, var13, var14, var15), Data.F(zebra.s1,
							Data.F(zebra.s_house, var16, var17, var18, var19, var20),
							Data.F(zebra.s1, Data.F(zebra.s_house, var21, var22, var23, var24, var25), Const.Nil))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_right_of_3 extends Code {

		/*
		
		right_of(_6942,_6936,[_6936,_6942|_6944],_6974):-call(_6974).
		right_of(_7072,_7074,[_7066|_7068],_7124):-right_of(_7072,_7074,_7068,_7124).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_right_of_3__1(mach);
		}

		public static Operation exec_pred_right_of_3__1(Prolog mach) {
			mach.FillAlternative(pred_right_of_3::exec_pred_right_of_3__2);
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
			if (!((areg2).Unify(Data.F(zebra.s1, var2.Deref(), Data.F(zebra.s1, var1.Deref(), var3)))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_right_of_3__2(Prolog mach) {
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(zebra.s1, var3, var4))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_right_of_3::exec_static;
		}
	}

	public static class pred_next_to_3 extends Code {

		/*
		
		next_to(_7252,_7258,[_7252,_7258|_7260],_7290):-call(_7290).
		next_to(_7394,_7388,[_7388,_7394|_7396],_7426):-call(_7426).
		next_to(_7530,_7532,[_7524|_7526],_7582):-next_to(_7530,_7532,_7526,_7582).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_next_to_3__1(mach);
		}

		public static Operation exec_pred_next_to_3__1(Prolog mach) {
			mach.FillAlternative(pred_next_to_3::exec_pred_next_to_3__2);
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
			if (!((areg2).Unify(Data.F(zebra.s1, var1.Deref(), Data.F(zebra.s1, var2.Deref(), var3)))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_next_to_3__2(Prolog mach) {
			mach.FillAlternative(pred_next_to_3::exec_pred_next_to_3__3);
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
			if (!((areg2).Unify(Data.F(zebra.s1, var2.Deref(), Data.F(zebra.s1, var1.Deref(), var3)))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_next_to_3__3(Prolog mach) {
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(zebra.s1, var3, var4))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_next_to_3::exec_static;
		}
	}

	public static class pred_member_2 extends Code {

		/*
		
		member(_7716,[_7716|_7718],_7746):-call(_7746).
		member(_7842,[_7836|_7838],_7884):-member(_7842,_7838,_7884).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_member_2__1(mach);
		}

		public static Operation exec_pred_member_2__1(Prolog mach) {
			mach.FillAlternative(pred_member_2::exec_pred_member_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(zebra.s1, var1.Deref(), var2))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_member_2__2(Prolog mach) {
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
			if (!((areg1).Unify(Data.F(zebra.s1, var2, var3))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_member_2::exec_static;
		}
	}

	public static class pred_print_houses_1 extends Code {

		/*
		
		print_houses([_8002|_8004],_8062):-cut(1,write(_8002,nl(print_houses(_8004,_8062)))).
		print_houses([],_8250):-call(_8250).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_print_houses_1__1(mach);
		}

		public static Operation exec_pred_print_houses_1__1(Prolog mach) {
			mach.FillAlternative(pred_print_houses_1::exec_pred_print_houses_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(zebra.s1, var1, var2))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(zebra.s_write, var1.Deref(),
					Data.F(zebra.s_nl, Data.F(zebra.s_print_houses, var2.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_print_houses_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

}
