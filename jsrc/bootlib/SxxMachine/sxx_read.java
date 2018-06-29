package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class sxx_read /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("#");
	final static Const s2 = Data.Intern("(");
	final static Const s3 = Data.Intern(")");
	final static Const s4 = Data.Intern("*");
	final static Const s5 = Data.Intern("+");
	final static Const s6 = Data.Intern(",");
	final static Const s7 = Data.Intern("-");
	final static Const s8 = Data.Intern("->");
	final static Const s9 = Data.Intern(".");
	final static Const s10 = Data.Intern("/");
	final static Const s11 = Data.Intern("//");
	final static Const s12 = Data.Intern(":");
	final static Const s13 = Data.Intern(":-");
	final static Const s14 = Data.Intern(";");
	final static Const s15 = Data.Intern("<");
	final static Const s16 = Data.Intern("<<");
	final static Const s17 = Data.Intern("=");
	final static Const s18 = Data.Intern("=..");
	final static Const s19 = Data.Intern("=:=");
	final static Const s20 = Data.Intern("=<");
	final static Const s21 = Data.Intern("==");
	final static Const s22 = Data.Intern(">");
	final static Const s23 = Data.Intern(">=");
	final static Const s24 = Data.Intern(">>");
	final static Const s25 = Data.Intern("?-");
	final static Const s26 = Data.Intern("@<");
	final static Const s27 = Data.Intern("@=<");
	final static Const s28 = Data.Intern("@>");
	final static Const s29 = Data.Intern("@>=");
	final static Const s30 = Data.Intern("[");
	final static Const s31 = Data.Intern("]");
	final static Const s32 = Data.Intern("^");
	final static Const s__ = Data.Intern("_");
	final static Const s_ap = Data.Intern("ap");
	final static Const s_call = Data.Intern("call");
	final static Const s_collectvars = Data.Intern("collectvars");
	final static Const s_const = Data.Intern("const");
	final static Const s_end_of_clause = Data.Intern("end_of_clause");
	final static Const s_end_of_file = Data.Intern("end_of_file");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_fx = Data.Intern("fx");
	final static Const s_fy = Data.Intern("fy");
	final static Const s_getargs = Data.Intern("getargs");
	final static Const s_halt = Data.Intern("halt");
	final static Const s_infix = Data.Intern("infix");
	final static Const s_int = Data.Intern("int");
	final static Const s_is = Data.Intern("is");
	final static Const s_maketerm = Data.Intern("maketerm");
	final static Const s_mod = Data.Intern("mod");
	final static Const s_newprec = Data.Intern("newprec");
	final static Const s_nexttoken = Data.Intern("nexttoken");
	final static Const s_noteq = Data.Intern("noteq");
	final static Const s_notvmember = Data.Intern("notvmember");
	final static Const s_prefix = Data.Intern("prefix");
	final static Const s_read = Data.Intern("read");
	final static Const s_readall = Data.Intern("readall");
	final static Const s_smallerorequal = Data.Intern("smallerorequal");
	final static Const s_unify = Data.Intern("unify");
	final static Const s_univ = Data.Intern("univ");
	final static Const s_var = Data.Intern("var");
	final static Const s_vread = Data.Intern("vread");
	final static Const s_xfx = Data.Intern("xfx");
	final static Const s_xfy = Data.Intern("xfy");
	final static Const s_yfx = Data.Intern("yfx");
	final static Const s66 = Data.Intern("|");
	final static Int posint1 = Data.Number(1L);
	final static Int posint200 = Data.Number(200L);
	final static Int posint300 = Data.Number(300L);
	final static Int posint400 = Data.Number(400L);
	final static Int posint500 = Data.Number(500L);
	final static Int posint550 = Data.Number(550L);
	final static Int posint700 = Data.Number(700L);
	final static Int posint900 = Data.Number(900L);
	final static Int posint1000 = Data.Number(1000L);
	final static Int posint1050 = Data.Number(1050L);
	final static Int posint1100 = Data.Number(1100L);
	final static Int posint1200 = Data.Number(1200L);
	final static Operation reg_vread_2 = PredTable.Register("vread", 2, new pred_vread_2());
	final static Operation reg_read_1 = PredTable.Register("read", 1, new pred_read_1());
	final static Operation reg_collectvars_3 = PredTable.Register("collectvars", 3, new pred_collectvars_3());
	final static Operation reg_notvmember_2 = PredTable.Register("notvmember", 2, new pred_notvmember_2());
	final static Operation reg_readall_2 = PredTable.Register("readall", 2, new pred_readall_2());
	final static Operation reg_infix_3 = PredTable.Register("infix", 3, new pred_infix_3());
	final static Operation reg_prefix_3 = PredTable.Register("prefix", 3, new pred_prefix_3());
	final static Operation reg_maketerm_3 = PredTable.Register("maketerm", 3, new pred_maketerm_3());
	final static Operation reg_newprec_4 = PredTable.Register("newprec", 4, new pred_newprec_4());
	final static Operation reg_newprec_3 = PredTable.Register("newprec", 3, new pred_newprec_3());
	final static Operation reg_getargs_2 = PredTable.Register("getargs", 2, new pred_getargs_2());
	final static Operation reg_maketerm_2 = PredTable.Register("maketerm", 2, new pred_maketerm_2());
	final static Operation reg_ap_3 = PredTable.Register("ap", 3, new pred_ap_3());

	public static class pred_vread_2 extends Code {

		/*
		
		vread(_400,_402,_414):-nexttoken(_404,readall(_404,_406,maketerm(_406,_400,cut(1,collectvars(_406,[],_402,_414))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_vread_2__1(mach);
		}

		public static Operation exec_pred_vread_2__1(Prolog mach) {
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
			local_aregs[0] = var3;
			local_aregs[1] = Data.F(sxx_read.s_readall, var3.Deref(), var4, Data.F(sxx_read.s_maketerm, var4.Deref(),
					var1.Deref(),
					mach.HC(Data.F(sxx_read.s_collectvars, var4.Deref(), Const.Nil, var2.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_nexttoken_1::exec_static;
		}
	}

	public static class pred_read_1 extends Code {

		/*
		
		read(_468,_480):-nexttoken(_470,readall(_470,_472,maketerm(_472,_468,cut(1,_480)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_read_1__1(mach);
		}

		public static Operation exec_pred_read_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var2;
			local_aregs[1] = Data.F(sxx_read.s_readall, var2.Deref(), var3,
					Data.F(sxx_read.s_maketerm, var3.Deref(), var1.Deref(), mach.HC(continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_nexttoken_1::exec_static;
		}
	}

	public static class pred_collectvars_3 extends Code {

		/*
		
		collectvars([],_522,_522,_530):-cut(1,_530).
		collectvars([var(_556,_558,_560)|_566],_568,_570,_590):-noteq(_558,'_',notvmember(_558,_568,cut(1,collectvars(_566,[_556=_558|_568],_570,_590)))).
		collectvars([_642|_644],_646,_648,_656):-collectvars(_644,_646,_648,_656).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_collectvars_3__1(mach);
		}

		public static Operation exec_pred_collectvars_3__1(Prolog mach) {
			mach.FillAlternative(pred_collectvars_3::exec_pred_collectvars_3__2);
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

		public static Operation exec_pred_collectvars_3__2(Prolog mach) {
			mach.FillAlternative(pred_collectvars_3::exec_pred_collectvars_3__3);
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_var, var1, var2, var3), var4))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var6)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = sxx_read.s__;
			local_aregs[2] = Data.F(sxx_read.s_notvmember, var2.Deref(), var5.Deref(),
					mach.HC(Data.F(sxx_read.s_collectvars, var4.Deref(),
							Data.F(sxx_read.s9, Data.F(sxx_read.s17, var1.Deref(), var2.Deref()), var5.Deref()),
							var6.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_noteq_2::exec_static;
		}

		public static Operation exec_pred_collectvars_3__3(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_collectvars_3::exec_static;
		}
	}

	public static class pred_notvmember_2 extends Code {

		/*
		
		notvmember(_678,[],_686):-cut(1,_686).
		notvmember(_712,[_710=_712|_718],_726):-cut(1,fail(_726)).
		notvmember(_758,[_754|_756],_766):-notvmember(_758,_756,_766).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_notvmember_2__1(mach);
		}

		public static Operation exec_pred_notvmember_2__1(Prolog mach) {
			mach.FillAlternative(pred_notvmember_2::exec_pred_notvmember_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_notvmember_2__2(Prolog mach) {
			mach.FillAlternative(pred_notvmember_2::exec_pred_notvmember_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s17, var2, var1.Deref()), var3))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_fail, continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_notvmember_2__3(Prolog mach) {
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
			if (!((areg1).Unify(Data.F(sxx_read.s9, var2, var3))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_notvmember_2::exec_static;
		}
	}

	public static class pred_readall_2 extends Code {

		/*
		
		readall(end_of_file,_790,_798):-cut(1,halt(_798)).
		readall(end_of_clause,_824,_832):-cut(1,unify([],_824,_832)).
		readall(_864,[_864|_866],_876):-nexttoken(_868,readall(_868,_866,_876)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_readall_2__1(mach);
		}

		public static Operation exec_pred_readall_2__1(Prolog mach) {
			mach.FillAlternative(pred_readall_2::exec_pred_readall_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_read.s_end_of_file)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_halt, continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_readall_2__2(Prolog mach) {
			mach.FillAlternative(pred_readall_2::exec_pred_readall_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_read.s_end_of_clause)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_unify, Const.Nil, var1.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_readall_2__3(Prolog mach) {
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
			if (!((areg1).Unify(Data.F(sxx_read.s9, var1.Deref(), var2))))
				return Prolog.Fail0;
			local_aregs[0] = var3;
			local_aregs[1] = Data.F(sxx_read.s_readall, var3.Deref(), var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_nexttoken_1::exec_static;
		}
	}

	public static class pred_infix_3 extends Code {

		/*
		
		infix(1200,xfx,:-,_914):-call(_914).
		infix(1000,xfy,',',_940):-call(_940).
		infix(1100,xfy,;,_966):-call(_966).
		infix(1050,xfy,->,_992):-call(_992).
		infix(700,xfx,=,_1018):-call(_1018).
		infix(700,xfx,is,_1044):-call(_1044).
		infix(700,xfx,=..,_1070):-call(_1070).
		infix(700,xfx,==,_1096):-call(_1096).
		infix(700,xfx,@<,_1122):-call(_1122).
		infix(700,xfx,@>,_1148):-call(_1148).
		infix(700,xfx,@=<,_1174):-call(_1174).
		infix(700,xfx,@>=,_1200):-call(_1200).
		infix(700,xfx,=:=,_1226):-call(_1226).
		infix(700,xfx,<,_1252):-call(_1252).
		infix(700,xfx,=<,_1278):-call(_1278).
		infix(700,xfx,>,_1304):-call(_1304).
		infix(700,xfx,>=,_1330):-call(_1330).
		infix(550,xfy,:,_1356):-call(_1356).
		infix(500,yfx,+,_1382):-call(_1382).
		infix(500,yfx,-,_1408):-call(_1408).
		infix(500,yfx,#,_1434):-call(_1434).
		infix(400,yfx,*,_1460):-call(_1460).
		infix(400,yfx,/,_1486):-call(_1486).
		infix(400,yfx,//,_1512):-call(_1512).
		infix(400,yfx,<<,_1538):-call(_1538).
		infix(400,yfx,>>,_1564):-call(_1564).
		infix(300,xfx,mod,_1590):-call(_1590).
		infix(200,xfy,^,_1616):-call(_1616).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_infix_3__1(mach);
		}

		public static Operation exec_pred_infix_3__1(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint1200)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s13)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__2(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint1000)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfy)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s6)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__3(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint1100)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfy)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s14)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__4(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint1050)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfy)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s8)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__5(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s17)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__6(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s_is)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__7(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s18)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__8(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s21)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__9(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s26)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__10(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s28)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__11(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__12);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s27)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__12(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__13);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s29)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__13(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__14);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s19)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__14(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__15);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s15)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__15(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__16);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s20)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__16(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__17);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s22)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__17(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__18);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint700)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s23)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__18(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__19);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint550)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfy)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s12)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__19(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__20);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint500)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s5)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__20(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__21);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint500)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s7)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__21(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__22);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint500)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s1)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__22(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__23);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint400)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s4)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__23(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__24);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint400)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s10)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__24(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__25);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint400)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s11)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__25(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__26);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint400)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s16)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__26(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__27);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint400)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s24)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__27(Prolog mach) {
			mach.FillAlternative(pred_infix_3::exec_pred_infix_3__28);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint300)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s_mod)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_infix_3__28(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint200)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_xfy)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s32)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_prefix_3 extends Code {

		/*
		
		prefix(1200,fx,:-,_1642):-call(_1642).
		prefix(1200,fx,?-,_1668):-call(_1668).
		prefix(500,fx,+,_1694):-call(_1694).
		prefix(500,fx,-,_1720):-call(_1720).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_prefix_3__1(mach);
		}

		public static Operation exec_pred_prefix_3__1(Prolog mach) {
			mach.FillAlternative(pred_prefix_3::exec_pred_prefix_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint1200)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_fx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s13)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_prefix_3__2(Prolog mach) {
			mach.FillAlternative(pred_prefix_3::exec_pred_prefix_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint1200)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_fx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s25)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_prefix_3__3(Prolog mach) {
			mach.FillAlternative(pred_prefix_3::exec_pred_prefix_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint500)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_fx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s5)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_prefix_3__4(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_read.posint500)))
				return Prolog.Fail0;
			if (!((areg1).Unify(sxx_read.s_fx)))
				return Prolog.Fail0;
			if (!((areg2).Unify(sxx_read.s7)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_maketerm_3 extends Code {

		/*
		
		maketerm([var(_1740,_1742,_1744)],_1752,_1754,_1762):-unify(_1740,_1752,cut(1,_1762)).
		maketerm([int(_1796)],_1804,_1806,_1814):-cut(1,unify(_1796,_1804,_1814)).
		maketerm([const(_1848)],_1856,_1858,_1866):-cut(1,unify(_1848,_1856,_1866)).
		maketerm([const(_1900),const('(')|_1916],_1918,_1920,_1930):-getargs(_1916,_1922,univ(_1918,_1900,_1922,_1930)).
		maketerm(_1966,_1968,_1970,_2014):-ap(_1982,[const(_1974)|_1980],_1966,infix(_1984,_1986,_1974,smallerorequal(_1984,_1970,newprec(_1986,_1984,_1988,_1990,maketerm(_1982,_1992,_1988,maketerm(_1980,_1994,_1990,univ(_1968,_1974,[_1992,_1994],_2014))))))).
		maketerm([const(_2104)|_2110],_2112,_2114,_2136):-prefix(_2116,_2118,_2104,smallerorequal(_2116,_2114,newprec(_2118,_2116,_2120,maketerm(_2110,_2122,_2120,univ(_2112,_2104,[_2122],_2136))))).
		maketerm([const('[')|_2210],[_2214|_2216],_2218,_2248):-ap(_2230,[const(',')|_2228],_2210,maketerm(_2230,_2214,900,maketerm([const('[')|_2228],_2216,900,_2248))).
		maketerm([const('[')|_2304],[_2308|_2310],_2312,_2344):-ap(_2324,[const('|')|_2322],_2304,ap(_2336,[const(']')],_2322,maketerm(_2324,_2308,900,maketerm(_2336,_2310,900,_2344)))).
		maketerm([const('(')|_2410],_2412,_2414,_2434):-ap(_2426,[const(')')],_2410,cut(1,maketerm(_2426,_2412,_2434))).
		maketerm([const('[')|_2484],[_2488],_2492,_2512):-ap(_2504,[const(']')],_2484,maketerm(_2504,_2488,900,_2512)).
		maketerm([const('['),const(']')],[],_2570,_2580):-call(_2580).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_maketerm_3__1(mach);
		}

		public static Operation exec_pred_maketerm_3__1(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__2);
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_var, var1, var2, var3), Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_unify_2::exec_static;
		}

		public static Operation exec_pred_maketerm_3__2(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_int, var1), Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_unify, var1.Deref(), var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_maketerm_3__3(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, var1), Const.Nil))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_unify, var1.Deref(), var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_maketerm_3__4(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__5);
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, var1),
					Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s2), var2)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var5;
			local_aregs[2] = Data.F(sxx_read.s_univ, var3.Deref(), var1.Deref(), var5.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_getargs_2::exec_static;
		}

		public static Operation exec_pred_maketerm_3__5(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			local_aregs[0] = var4;
			local_aregs[1] = Data.F(sxx_read.s9, Data.F(sxx_read.s_const, var5), var6);
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(sxx_read.s_infix, var7, var8, var5.Deref(),
					Data.F(sxx_read.s_smallerorequal, var7.Deref(), var3.Deref(),
							Data.F(sxx_read.s_newprec, var8.Deref(), var7.Deref(), var9, var10,
									Data.F(sxx_read.s_maketerm, var4.Deref(), var11, var9.Deref(),
											Data.F(sxx_read.s_maketerm, var6.Deref(), var12, var10.Deref(),
													Data.F(sxx_read.s_univ, var2.Deref(), var5.Deref(),
															Data.F(sxx_read.s9, var11.Deref(),
																	Data.F(sxx_read.s9, var12.Deref(), Const.Nil)),
															continuation))))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}

		public static Operation exec_pred_maketerm_3__6(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__7);
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, var1), var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var5;
			local_aregs[1] = var6;
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(sxx_read.s_smallerorequal, var5.Deref(), var4.Deref(),
					Data.F(sxx_read.s_newprec, var6.Deref(), var5.Deref(), var7,
							Data.F(sxx_read.s_maketerm, var2.Deref(), var8, var7.Deref(),
									Data.F(sxx_read.s_univ, var3.Deref(), var1.Deref(),
											Data.F(sxx_read.s9, var8.Deref(), Const.Nil), continuation))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_prefix_3::exec_static;
		}

		public static Operation exec_pred_maketerm_3__7(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__8);
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s30), var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_read.s9, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var5;
			local_aregs[1] = Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s6), var6);
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(sxx_read.s_maketerm, var5.Deref(), var2.Deref(), sxx_read.posint900,
					Data.F(sxx_read.s_maketerm,
							Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s30), var6.Deref()), var3.Deref(),
							sxx_read.posint900, continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}

		public static Operation exec_pred_maketerm_3__8(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__9);
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s30), var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_read.s9, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var5;
			local_aregs[1] = Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s66), var6);
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(sxx_read.s_ap, var7,
					Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s31), Const.Nil), var6.Deref(),
					Data.F(sxx_read.s_maketerm, var5.Deref(), var2.Deref(), sxx_read.posint900,
							Data.F(sxx_read.s_maketerm, var7.Deref(), var3.Deref(), sxx_read.posint900, continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}

		public static Operation exec_pred_maketerm_3__9(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s2), var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var4;
			local_aregs[1] = Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s3), Const.Nil);
			local_aregs[2] = var1.Deref();
			local_aregs[3] = mach.HC(Data.F(sxx_read.s_maketerm, var4.Deref(), var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}

		public static Operation exec_pred_maketerm_3__10(Prolog mach) {
			mach.FillAlternative(pred_maketerm_3::exec_pred_maketerm_3__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s30), var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_read.s9, var2, Const.Nil))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var4;
			local_aregs[1] = Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s31), Const.Nil);
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(sxx_read.s_maketerm, var4.Deref(), var2.Deref(), sxx_read.posint900, continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}

		public static Operation exec_pred_maketerm_3__11(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s30),
					Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s31), Const.Nil)))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_newprec_4 extends Code {

		/*
		
		newprec(xfx,_2598,_2600,_2602,_2622):-cut(1,is(_2600,_2598-1,is(_2602,_2598-1,_2622))).
		newprec(xfy,_2664,_2666,_2668,_2682):-cut(1,is(_2666,_2664-1,unify(_2664,_2668,_2682))).
		newprec(yfx,_2724,_2726,_2728,_2742):-cut(1,is(_2728,_2724-1,unify(_2724,_2726,_2742))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_newprec_4__1(mach);
		}

		public static Operation exec_pred_newprec_4__1(Prolog mach) {
			mach.FillAlternative(pred_newprec_4::exec_pred_newprec_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_read.s_xfx)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_is, var2.Deref(), Data.F(sxx_read.s7, var1.Deref(), sxx_read.posint1),
					Data.F(sxx_read.s_is, var3.Deref(), Data.F(sxx_read.s7, var1.Deref(), sxx_read.posint1),
							continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_newprec_4__2(Prolog mach) {
			mach.FillAlternative(pred_newprec_4::exec_pred_newprec_4__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_read.s_xfy)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_is, var2.Deref(), Data.F(sxx_read.s7, var1.Deref(), sxx_read.posint1),
					Data.F(sxx_read.s_unify, var1.Deref(), var3.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_newprec_4__3(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_read.s_yfx)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_is, var3.Deref(), Data.F(sxx_read.s7, var1.Deref(), sxx_read.posint1),
					Data.F(sxx_read.s_unify, var1.Deref(), var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_newprec_3 extends Code {

		/*
		
		newprec(fx,_2784,_2786,_2800):-cut(1,is(_2786,_2784-1,_2800)).
		newprec(fy,_2832,_2832,_2842):-call(_2842).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_newprec_3__1(mach);
		}

		public static Operation exec_pred_newprec_3__1(Prolog mach) {
			mach.FillAlternative(pred_newprec_3::exec_pred_newprec_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_read.s_fx)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_read.s_is, var2.Deref(), Data.F(sxx_read.s7, var1.Deref(), sxx_read.posint1),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_newprec_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_read.s_fy)))
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

	public static class pred_getargs_2 extends Code {

		/*
		
		getargs(_2860,_2862,_2890):-ap(_2874,[const(')')],_2860,maketerm(_2874,_2876,900,unify([_2876],_2862,_2890))).
		getargs(_2934,_2936,_2964):-ap(_2948,[const(',')|_2946],_2934,maketerm(_2948,_2950,900,unify([_2950|_2956],_2936,getargs(_2946,_2956,_2964)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_getargs_2__1(mach);
		}

		public static Operation exec_pred_getargs_2__1(Prolog mach) {
			mach.FillAlternative(pred_getargs_2::exec_pred_getargs_2__2);
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
			local_aregs[0] = var3;
			local_aregs[1] = Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s3), Const.Nil);
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(sxx_read.s_maketerm, var3.Deref(), var4, sxx_read.posint900,
					Data.F(sxx_read.s_unify, Data.F(sxx_read.s9, var4.Deref(), Const.Nil), var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}

		public static Operation exec_pred_getargs_2__2(Prolog mach) {
			mach.RemoveChoice();
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			local_aregs[0] = var3;
			local_aregs[1] = Data.F(sxx_read.s9, Data.F(sxx_read.s_const, sxx_read.s6), var4);
			local_aregs[2] = var1.Deref();
			local_aregs[3] = Data.F(sxx_read.s_maketerm, var3.Deref(), var5, sxx_read.posint900,
					Data.F(sxx_read.s_unify, Data.F(sxx_read.s9, var5.Deref(), var6), var2.Deref(),
							Data.F(sxx_read.s_getargs, var4.Deref(), var6.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}
	}

	public static class pred_maketerm_2 extends Code {

		/*
		
		maketerm(_3016,_3018,_3026):-maketerm(_3016,_3018,1200,_3026).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_maketerm_2__1(mach);
		}

		public static Operation exec_pred_maketerm_2__1(Prolog mach) {
			mach.RemoveChoice();
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
			local_aregs[1] = var2.Deref();
			local_aregs[2] = sxx_read.posint1200;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_maketerm_3::exec_static;
		}
	}

	public static class pred_ap_3 extends Code {

		/*
		
		ap([],_3052,_3052,_3062):-call(_3062).
		ap([_3082|_3084],_3092,[_3082|_3090],_3100):-ap(_3084,_3092,_3090,_3100).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_ap_3__1(mach);
		}

		public static Operation exec_pred_ap_3__1(Prolog mach) {
			mach.FillAlternative(pred_ap_3::exec_pred_ap_3__2);
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

		public static Operation exec_pred_ap_3__2(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(sxx_read.s9, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(sxx_read.s9, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_ap_3::exec_static;
		}
	}

}
