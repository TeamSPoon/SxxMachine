package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class serialise /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("+");
	final static Const s2 = Data.Intern(".");
	final static Const s3 = Data.Intern(":-");
	final static Const s_arrange = Data.Intern("arrange");
	final static Const s_before = Data.Intern("before");
	final static Const s_call = Data.Intern("call");
	final static Const s_is = Data.Intern("is");
	final static Const s_numbered = Data.Intern("numbered");
	final static Const s_pair = Data.Intern("pair");
	final static Const s_pairlists = Data.Intern("pairlists");
	final static Const s_serialise = Data.Intern("serialise");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_split = Data.Intern("split");
	final static Const s_top = Data.Intern("top");
	final static Const s_tree = Data.Intern("tree");
	final static Const s_void = Data.Intern("void");
	final static Int posint1 = Data.Number(1L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_serialise_0 = PredTable.Register("serialise", 0, new pred_serialise_0());
	final static Operation reg_serialise_2 = PredTable.Register("serialise", 2, new pred_serialise_2());
	final static Operation reg_pairlists_3 = PredTable.Register("pairlists", 3, new pred_pairlists_3());
	final static Operation reg_arrange_2 = PredTable.Register("arrange", 2, new pred_arrange_2());
	final static Operation reg_split_4 = PredTable.Register("split", 4, new pred_split_4());
	final static Operation reg_before_2 = PredTable.Register("before", 2, new pred_before_2());
	final static Operation reg_numbered_3 = PredTable.Register("numbered", 3, new pred_numbered_3());

	public static class pred_top_0 extends Code {

		/*
		
		top(_10312):-serialise(_10312).
		
		
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
			return (Operation) pred_serialise_0::exec_static;
		}
	}

	public static class pred_serialise_0 extends Code {

		/*
		
		serialise(_10398):-serialise("ABLE WAS I ERE I SAW ELBA",_10376,_10398).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_serialise_0__1(mach);
		}

		public static Operation exec_pred_serialise_0__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = Const.Intern("ABLE WAS I ERE I SAW ELBA");
			local_aregs[1] = var1;
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_serialise_2::exec_static;
		}
	}

	public static class pred_serialise_2 extends Code {

		/*
		
		serialise(_10482,_10484,_10552):-pairlists(_10482,_10484,_10492,arrange(_10492,_10498,numbered(_10498,1,_10506,_10552))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_serialise_2__1(mach);
		}

		public static Operation exec_pred_serialise_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var3;
			local_aregs[3] = Data.F(serialise.s_arrange, var3.Deref(), var4,
					Data.F(serialise.s_numbered, var4.Deref(), serialise.posint1, var5, continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_pairlists_3::exec_static;
		}
	}

	public static class pred_pairlists_3 extends Code {

		/*
		
		pairlists([_10786|_10788],[_10792|_10794],[pair(_10786,_10792)|_10806],_10862):-pairlists(_10788,_10794,_10806,_10862).
		pairlists([],[],[],_11022):-call(_11022).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_pairlists_3__1(mach);
		}

		public static Operation exec_pred_pairlists_3__1(Prolog mach) {
			mach.FillAlternative(pred_pairlists_3::exec_pred_pairlists_3__2);
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
			if (!((areg0).Unify(Data.F(serialise.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(serialise.s2, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(serialise.s2, Data.F(serialise.s_pair, var1.Deref(), var3.Deref()), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = var5.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_pairlists_3::exec_static;
		}

		public static Operation exec_pred_pairlists_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_arrange_2 extends Code {

		/*
		
		arrange([_11120|_11122],tree(_11126,_11120,_11130),_11204):-split(_11122,_11120,_11144,_11146,arrange(_11144,_11126,arrange(_11146,_11130,_11204))).
		arrange([],void,_11474):-call(_11474).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_arrange_2__1(mach);
		}

		public static Operation exec_pred_arrange_2__1(Prolog mach) {
			mach.FillAlternative(pred_arrange_2::exec_pred_arrange_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(serialise.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(serialise.s_tree, var3, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var5;
			local_aregs[3] = var6;
			local_aregs[4] = Data.F(serialise.s_arrange, var5.Deref(), var3.Deref(),
					Data.F(serialise.s_arrange, var6.Deref(), var4.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_split_4::exec_static;
		}

		public static Operation exec_pred_arrange_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(serialise.s_void)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_split_4 extends Code {

		/*
		
		split([_11564|_11566],_11564,_11574,_11576,_11638):-cut(1,split(_11566,_11564,_11574,_11576,_11638)).
		split([_11812|_11814],_11826,[_11812|_11820],_11830,_11904):-before(_11812,_11826,cut(1,split(_11814,_11826,_11820,_11830,_11904))).
		split([_12128|_12130],_12142,_12144,[_12128|_12136],_12220):-before(_12142,_12128,cut(1,split(_12130,_12142,_12144,_12136,_12220))).
		split([],_12446,[],[],_12472):-call(_12472).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_split_4__1(mach);
		}

		public static Operation exec_pred_split_4__1(Prolog mach) {
			mach.FillAlternative(pred_split_4::exec_pred_split_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(serialise.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(serialise.s_split, var2.Deref(), var1.Deref(), var3.Deref(), var4.Deref(),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_split_4__2(Prolog mach) {
			mach.FillAlternative(pred_split_4::exec_pred_split_4__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(serialise.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(serialise.s2, var1.Deref(), var4))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(
					Data.F(serialise.s_split, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_before_2::exec_static;
		}

		public static Operation exec_pred_split_4__3(Prolog mach) {
			mach.FillAlternative(pred_split_4::exec_pred_split_4__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(serialise.s2, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(serialise.s2, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = mach.HC(
					Data.F(serialise.s_split, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_before_2::exec_static;
		}

		public static Operation exec_pred_split_4__4(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
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
			if (!((areg3).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_before_2 extends Code {

		/*
		
		before(pair(_12596,_12598),pair(_12602,_12604),_12650):-smallerthan(_12596,_12602,_12650).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_before_2__1(mach);
		}

		public static Operation exec_pred_before_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(serialise.s_pair, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(serialise.s_pair, var3, var4))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

	public static class pred_numbered_3 extends Code {

		/*
		
		numbered(tree(_12792,pair(_12786,_12788),_12796),_12802,_12804,_12884):-numbered(_12792,_12802,_12788,is(_12822,_12788+1,numbered(_12796,_12822,_12804,_12884))).
		numbered(void,_13158,_13158,_13182):-call(_13182).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_numbered_3__1(mach);
		}

		public static Operation exec_pred_numbered_3__1(Prolog mach) {
			mach.FillAlternative(pred_numbered_3::exec_pred_numbered_3__2);
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
			if (!((areg0).Unify(Data.F(serialise.s_tree, var1, Data.F(serialise.s_pair, var2, var3), var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var6)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var5.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = Data.F(serialise.s_is, var7, Data.F(serialise.s1, var3.Deref(), serialise.posint1),
					Data.F(serialise.s_numbered, var4.Deref(), var7.Deref(), var6.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_numbered_3::exec_static;
		}

		public static Operation exec_pred_numbered_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(serialise.s_void)))
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
	}

}
