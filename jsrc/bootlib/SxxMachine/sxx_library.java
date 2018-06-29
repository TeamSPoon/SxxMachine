package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class sxx_library /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern(" = ");
	final static Const s2 = Data.Intern(",");
	final static Const s3 = Data.Intern("-");
	final static Const s4 = Data.Intern("->");
	final static Const s5 = Data.Intern(".");
	final static Const s6 = Data.Intern(":-");
	final static Const s7 = Data.Intern(";");
	final static Const s8 = Data.Intern("<");
	final static Const s9 = Data.Intern("=");
	final static Const s10 = Data.Intern("=:=");
	final static Const s11 = Data.Intern("=<");
	final static Const s12 = Data.Intern("==");
	final static Const s13 = Data.Intern(">");
	final static Const s14 = Data.Intern(">=");
	final static Const s15 = Data.Intern("?- ");
	final static Const s16 = Data.Intern("@<");
	final static Const s17 = Data.Intern("@=<");
	final static Const s18 = Data.Intern("@>");
	final static Const s19 = Data.Intern("@>=");
	final static Const s_Yes = Data.Intern("Yes");
	final static Const s_addfindall = Data.Intern("addfindall");
	final static Const s_allassumed = Data.Intern("allassumed");
	final static Const s_append = Data.Intern("append");
	final static Const s_arithequal = Data.Intern("arithequal");
	final static Const s_assume = Data.Intern("assume");
	final static Const s_assumed = Data.Intern("assumed");
	final static Const s_assumeduring = Data.Intern("assumeduring");
	final static Const s_atom = Data.Intern("atom");
	final static Const s_atomic = Data.Intern("atomic");
	final static Const s_atomic2 = Data.Intern("atomic2");
	final static Const s_call = Data.Intern("call");
	final static Const s_compare = Data.Intern("compare");
	final static Const s_copy_term = Data.Intern("copy_term");
	final static Const s_cputime = Data.Intern("cputime");
	final static Const s_exec = Data.Intern("exec");
	final static Const s_execcontinuation = Data.Intern("execcontinuation");
	final static Const s_execdisj = Data.Intern("execdisj");
	final static Const s_execpendinggoals = Data.Intern("execpendinggoals");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_findall = Data.Intern("findall");
	final static Const s_findall2 = Data.Intern("findall2");
	final static Const s_freeze = Data.Intern("freeze");
	final static Const s_freeze_internal = Data.Intern("freeze_internal");
	final static Const s_get0 = Data.Intern("get0");
	final static Const s_initfindall = Data.Intern("initfindall");
	final static Const s_integer = Data.Intern("integer");
	final static Const s_is = Data.Intern("is");
	final static Const s_loop = Data.Intern("loop");
	final static Const s_m1 = Data.Intern("m1");
	final static Const s_max = Data.Intern("max");
	final static Const s52 = Data.Intern("more? ");
	final static Const s_nl = Data.Intern("nl");
	final static Const s_not = Data.Intern("not");
	final static Const s_noteq = Data.Intern("noteq");
	final static Const s_notmore = Data.Intern("notmore");
	final static Const s_nrev = Data.Intern("nrev");
	final static Const s_or = Data.Intern("or");
	final static Const s_retrievefindall = Data.Intern("retrievefindall");
	final static Const s_runtime = Data.Intern("runtime");
	final static Const s_smallerorequal = Data.Intern("smallerorequal");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_smeq = Data.Intern("smeq");
	final static Const s_smgr = Data.Intern("smgr");
	final static Const s_sort = Data.Intern("sort");
	final static Const s_specialgoal = Data.Intern("specialgoal");
	final static Const s_split = Data.Intern("split");
	final static Const s_statistics = Data.Intern("statistics");
	final static Const s_termequal = Data.Intern("termequal");
	final static Const s_termgreaterequal = Data.Intern("termgreaterequal");
	final static Const s_termgreaterthan = Data.Intern("termgreaterthan");
	final static Const s_termsmallerequal = Data.Intern("termsmallerequal");
	final static Const s_termsmallerthan = Data.Intern("termsmallerthan");
	final static Const s_time = Data.Intern("time");
	final static Const s_top = Data.Intern("top");
	final static Const s_toplevel = Data.Intern("toplevel");
	final static Const s_true = Data.Intern("true");
	final static Const s_type_of = Data.Intern("type_of");
	final static Const s_unify = Data.Intern("unify");
	final static Const s_untilend = Data.Intern("untilend");
	final static Const s_var = Data.Intern("var");
	final static Const s_vread = Data.Intern("vread");
	final static Const s_write = Data.Intern("write");
	final static Const s_writevars = Data.Intern("writevars");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint10 = Data.Number(10L);
	final static Operation reg_toplevel_0 = PredTable.Register("toplevel", 0, new pred_toplevel_0());
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_notmore_0 = PredTable.Register("notmore", 0, new pred_notmore_0());
	final static Operation reg_noteq_2 = PredTable.Register("noteq", 2, new pred_noteq_2());
	final static Operation reg_untilend_1 = PredTable.Register("untilend", 1, new pred_untilend_1());
	final static Operation reg_writevars_1 = PredTable.Register("writevars", 1, new pred_writevars_1());
	final static Operation reg_nrev_2 = PredTable.Register("nrev", 2, new pred_nrev_2());
	final static Operation reg_append_3 = PredTable.Register("append", 3, new pred_append_3());
	final static Operation reg_max_3 = PredTable.Register("max", 3, new pred_max_3());
	final static Operation reg_sort_2 = PredTable.Register("sort", 2, new pred_sort_2());
	final static Operation reg_split_4 = PredTable.Register("split", 4, new pred_split_4());
	final static Operation reg_time_1 = PredTable.Register("time", 1, new pred_time_1());
	final static Operation reg_exec_1 = PredTable.Register("exec", 1, new pred_exec_1());
	final static Operation reg_execdisj_2 = PredTable.Register("execdisj", 2, new pred_execdisj_2());
	final static Operation reg_loop_1 = PredTable.Register("loop", 1, new pred_loop_1());
	final static Operation reg_or_2 = PredTable.Register("or", 2, new pred_or_2());
	final static Operation reg_findall_3 = PredTable.Register("findall", 3, new pred_findall_3());
	final static Operation reg_findall2_4 = PredTable.Register("findall2", 4, new pred_findall2_4());
	final static Operation reg_copy_term_2 = PredTable.Register("copy_term", 2, new pred_copy_term_2());
	final static Operation reg_var_1 = PredTable.Register("var", 1, new pred_var_1());
	final static Operation reg_atomic_1 = PredTable.Register("atomic", 1, new pred_atomic_1());
	final static Operation reg_atomic2_1 = PredTable.Register("atomic2", 1, new pred_atomic2_1());
	final static Operation reg_atom_1 = PredTable.Register("atom", 1, new pred_atom_1());
	final static Operation reg_integer_1 = PredTable.Register("integer", 1, new pred_integer_1());
	final static Operation reg_assumeduring_2 = PredTable.Register("assumeduring", 2, new pred_assumeduring_2());
	final static Operation reg_assumed_1 = PredTable.Register("assumed", 1, new pred_assumed_1());
	final static Operation reg_m1_2 = PredTable.Register("m1", 2, new pred_m1_2());
	final static Operation reg_statistics_2 = PredTable.Register("statistics", 2, new pred_statistics_2());
	final static Operation reg_specialgoal_2 = PredTable.Register("specialgoal", 2, new pred_specialgoal_2());
	final static Operation reg_termsmallerthan_2 = PredTable.Register("termsmallerthan", 2,
			new pred_termsmallerthan_2());
	final static Operation reg_termgreaterthan_2 = PredTable.Register("termgreaterthan", 2,
			new pred_termgreaterthan_2());
	final static Operation reg_termsmallerequal_2 = PredTable.Register("termsmallerequal", 2,
			new pred_termsmallerequal_2());
	final static Operation reg_smeq_1 = PredTable.Register("smeq", 1, new pred_smeq_1());
	final static Operation reg_termgreaterequal_2 = PredTable.Register("termgreaterequal", 2,
			new pred_termgreaterequal_2());
	final static Operation reg_smgr_1 = PredTable.Register("smgr", 1, new pred_smgr_1());
	final static Operation reg_termequal_2 = PredTable.Register("termequal", 2, new pred_termequal_2());
	final static Operation reg_not_1 = PredTable.Register("not", 1, new pred_not_1());
	final static Operation reg_freeze_2 = PredTable.Register("freeze", 2, new pred_freeze_2());
	final static Operation reg_execpendinggoals_1 = PredTable.Register("execpendinggoals", 1,
			new pred_execpendinggoals_1());

	public static class pred_toplevel_0 extends Code {

		/*
		
		toplevel(_400):-top(fail(_400)).
		toplevel(_426):-toplevel(_426).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_toplevel_0__1(mach);
		}

		public static Operation exec_pred_toplevel_0__1(Prolog mach) {
			mach.FillAlternative(pred_toplevel_0::exec_pred_toplevel_0__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = Data.F(sxx_library.s_fail, continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_top_0::exec_static;
		}

		public static Operation exec_pred_toplevel_0__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_toplevel_0::exec_static;
		}
	}

	public static class pred_top_0 extends Code {

		/*
		
		top(_452):-write('?- ',vread(_442,_444,exec(_442,writevars(_444,write('Yes',nl(notmore(cut(1,fail(_452))))))))).
		top(_520):-top(_520).
		
		
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
			mach.FillAlternative(pred_top_0::exec_pred_top_0__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			local_aregs[0] = sxx_library.s15;
			local_aregs[1] = Data.F(sxx_library.s_vread, var1, var2, Data.F(sxx_library.s_exec, var1.Deref(),
					Data.F(sxx_library.s_writevars, var2.Deref(), Data.F(sxx_library.s_write, sxx_library.s_Yes, Data.F(
							sxx_library.s_nl,
							Data.F(sxx_library.s_notmore, mach.HC(Data.F(sxx_library.s_fail, continuation))))))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_write_1::exec_static;
		}

		public static Operation exec_pred_top_0__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_top_0::exec_static;
		}
	}

	public static class pred_notmore_0 extends Code {

		/*
		
		notmore(_544):-write('more? ',get0(_536,noteq(_536,10,cut(1,untilend(_536,fail(_544)))))).
		notmore(_600):-call(_600).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0]} ;*/
			Term aregs[] = mach.RegPull(0);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_notmore_0__1(mach);
		}

		public static Operation exec_pred_notmore_0__1(Prolog mach) {
			mach.FillAlternative(pred_notmore_0::exec_pred_notmore_0__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			Var var1 = Data.V(mach);
			local_aregs[0] = sxx_library.s52;
			local_aregs[1] = Data.F(sxx_library.s_get0, var1, Data.F(sxx_library.s_noteq, var1.Deref(),
					sxx_library.posint10,
					mach.HC(Data.F(sxx_library.s_untilend, var1.Deref(), Data.F(sxx_library.s_fail, continuation)))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_write_1::exec_static;
		}

		public static Operation exec_pred_notmore_0__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}
	}

	public static class pred_noteq_2 extends Code {

		/*
		
		noteq(_612,_612,_620):-cut(1,fail(_620)).
		noteq(_646,_648,_658):-call(_658).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_noteq_2__1(mach);
		}

		public static Operation exec_pred_noteq_2__1(Prolog mach) {
			mach.FillAlternative(pred_noteq_2::exec_pred_noteq_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1.Deref())))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_library.s_fail, continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_noteq_2__2(Prolog mach) {
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
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_untilend_1 extends Code {

		/*
		
		untilend(10,_680):-cut(1,_680).
		untilend(_700,_710):-get0(_702,untilend(_702,_710)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_untilend_1__1(mach);
		}

		public static Operation exec_pred_untilend_1__1(Prolog mach) {
			mach.FillAlternative(pred_untilend_1::exec_pred_untilend_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.posint10)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_untilend_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var2;
			local_aregs[1] = Data.F(sxx_library.s_untilend, var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_get0_1::exec_static;
		}
	}

	public static class pred_writevars_1 extends Code {

		/*
		
		writevars([],_744):-call(_744).
		writevars([_760=_762|_768],_776):-write(_762,write(' = ',write(_760,nl(fail(_776))))).
		writevars([_818|_820],_828):-writevars(_820,_828).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_writevars_1__1(mach);
		}

		public static Operation exec_pred_writevars_1__1(Prolog mach) {
			mach.FillAlternative(pred_writevars_1::exec_pred_writevars_1__2);
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

		public static Operation exec_pred_writevars_1__2(Prolog mach) {
			mach.FillAlternative(pred_writevars_1::exec_pred_writevars_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s5, Data.F(sxx_library.s9, var1, var2), var3))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = Data.F(sxx_library.s_write, sxx_library.s1, Data.F(sxx_library.s_write, var1.Deref(),
					Data.F(sxx_library.s_nl, Data.F(sxx_library.s_fail, continuation))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_write_1::exec_static;
		}

		public static Operation exec_pred_writevars_1__3(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s5, var1, var2))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_writevars_1::exec_static;
		}
	}

	public static class pred_nrev_2 extends Code {

		/*
		
		nrev([],[],_854):-cut(1,_854).
		nrev([_878|_880],_882,_898):-nrev(_880,_884,append(_884,[_878],_882,_898)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_nrev_2__1(mach);
		}

		public static Operation exec_pred_nrev_2__1(Prolog mach) {
			mach.FillAlternative(pred_nrev_2::exec_pred_nrev_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_nrev_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var4;
			local_aregs[2] = Data.F(sxx_library.s_append, var4.Deref(), Data.F(sxx_library.s5, var1.Deref(), Const.Nil),
					var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_nrev_2::exec_static;
		}
	}

	public static class pred_append_3 extends Code {

		/*
		
		append([],_932,_932,_942):-call(_942).
		append([_962|_964],_972,[_962|_970],_980):-append(_964,_972,_970,_980).
		
		
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
			if (!((areg0).Unify(Data.F(sxx_library.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(sxx_library.s5, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_append_3::exec_static;
		}
	}

	public static class pred_max_3 extends Code {

		/*
		
		max(_1008,_1010,_1010,_1018):-smallerthan(_1008,_1010,_1018).
		max(_1044,_1046,_1044,_1054):-smallerthan(_1046,_1044,_1054).
		max(_1080,_1080,_1080,_1090):-call(_1090).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_max_3__1(mach);
		}

		public static Operation exec_pred_max_3__1(Prolog mach) {
			mach.FillAlternative(pred_max_3::exec_pred_max_3__2);
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
			if (!((areg2).Unify(var2.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_max_3__2(Prolog mach) {
			mach.FillAlternative(pred_max_3::exec_pred_max_3__3);
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
			if (!((areg2).Unify(var1.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_max_3__3(Prolog mach) {
			mach.RemoveChoice();
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
			if (!((areg2).Unify(var1.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_sort_2 extends Code {

		/*
		
		sort([],[],_1114):-cut(1,_1114).
		sort([_1138|_1140],_1142,_1164):-split(_1138,_1140,_1144,_1146,sort(_1144,_1148,sort(_1146,_1150,append(_1148,[_1138|_1150],_1142,_1164)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_sort_2__1(mach);
		}

		public static Operation exec_pred_sort_2__1(Prolog mach) {
			mach.FillAlternative(pred_sort_2::exec_pred_sort_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_sort_2__2(Prolog mach) {
			mach.RemoveChoice();
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
			if (!((areg0).Unify(Data.F(sxx_library.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var4;
			local_aregs[3] = var5;
			local_aregs[4] = Data.F(sxx_library.s_sort, var4.Deref(), var6,
					Data.F(sxx_library.s_sort, var5.Deref(), var7, Data.F(sxx_library.s_append, var6.Deref(),
							Data.F(sxx_library.s5, var1.Deref(), var7.Deref()), var3.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_split_4::exec_static;
		}
	}

	public static class pred_split_4 extends Code {

		/*
		
		split(_1218,[],[],[],_1226):-cut(1,_1226).
		split(_1264,[_1254|_1256],[_1254|_1262],_1266,_1274):-smallerthan(_1254,_1264,cut(1,split(_1264,_1256,_1262,_1266,_1274))).
		split(_1332,[_1322|_1324],_1334,[_1322|_1330],_1342):-split(_1332,_1324,_1334,_1330,_1342).
		
		
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
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Const.Nil)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(sxx_library.s5, var2.Deref(), var4))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = mach.HC(
					Data.F(sxx_library.s_split, var1.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_split_4__3(Prolog mach) {
			mach.RemoveChoice();
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(sxx_library.s5, var2.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var5.Deref();
			local_aregs[4] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_split_4::exec_static;
		}
	}

	public static class pred_time_1 extends Code {

		/*
		
		time(_1374,_1394):-cputime(_1376,exec(_1374,cputime(_1378,is(_1386,_1378-_1376,write(_1386,nl(_1394)))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_time_1__1(mach);
		}

		public static Operation exec_pred_time_1__1(Prolog mach) {
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
			local_aregs[0] = var2;
			local_aregs[1] = Data.F(sxx_library.s_exec, var1.Deref(),
					Data.F(sxx_library.s_cputime, var3, Data.F(sxx_library.s_is, var4,
							Data.F(sxx_library.s3, var3.Deref(), var2.Deref()),
							Data.F(sxx_library.s_write, var4.Deref(), Data.F(sxx_library.s_nl, continuation)))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cputime_1::exec_static;
		}
	}

	public static class pred_exec_1 extends Code {

		/*
		
		exec(_1444,_1452):-var(_1444,cut(1,fail(_1452))).
		exec((_1484,_1486),_1494):-cut(1,exec(_1484,exec(_1486,_1494))).
		exec((_1528->_1530),_1544):-cut(1,execdisj((_1528->_1530),true,_1544)).
		exec((_1574;_1576),_1584):-cut(1,execdisj(_1574,_1576,_1584)).
		exec(_1612,_1622):-specialgoal(_1612,_1614,cut(1,exec(_1614,_1622))).
		exec(_1656,_1664):-call(_1656,_1664).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_exec_1__1(mach);
		}

		public static Operation exec_pred_exec_1__1(Prolog mach) {
			mach.FillAlternative(pred_exec_1::exec_pred_exec_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(sxx_library.s_fail, continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_var_1::exec_static;
		}

		public static Operation exec_pred_exec_1__2(Prolog mach) {
			mach.FillAlternative(pred_exec_1::exec_pred_exec_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s2, var1, var2))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_library.s_exec, var1.Deref(),
					Data.F(sxx_library.s_exec, var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_exec_1__3(Prolog mach) {
			mach.FillAlternative(pred_exec_1::exec_pred_exec_1__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s4, var1, var2))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_library.s_execdisj, Data.F(sxx_library.s4, var1.Deref(), var2.Deref()),
					sxx_library.s_true, continuation);
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_exec_1__4(Prolog mach) {
			mach.FillAlternative(pred_exec_1::exec_pred_exec_1__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s7, var1, var2))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_library.s_execdisj, var1.Deref(), var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_exec_1__5(Prolog mach) {
			mach.FillAlternative(pred_exec_1::exec_pred_exec_1__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2;
			local_aregs[2] = mach.HC(Data.F(sxx_library.s_exec, var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_specialgoal_2::exec_static;
		}

		public static Operation exec_pred_exec_1__6(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call2;
		}
	}

	public static class pred_execdisj_2 extends Code {

		/*
		
		execdisj((_1686->_1688),_1690,_1698):-exec(_1686,cut(1,exec(_1688,_1698))).
		execdisj((_1734->_1736),_1738,_1746):-cut(1,exec(_1738,_1746)).
		execdisj(_1774,_1776,_1784):-exec(_1774,_1784).
		execdisj(_1806,_1808,_1816):-exec(_1808,_1816).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_execdisj_2__1(mach);
		}

		public static Operation exec_pred_execdisj_2__1(Prolog mach) {
			mach.FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s4, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(sxx_library.s_exec, var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_exec_1::exec_static;
		}

		public static Operation exec_pred_execdisj_2__2(Prolog mach) {
			mach.FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s4, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(sxx_library.s_exec, var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_execdisj_2__3(Prolog mach) {
			mach.FillAlternative(pred_execdisj_2::exec_pred_execdisj_2__4);
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
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_exec_1::exec_static;
		}

		public static Operation exec_pred_execdisj_2__4(Prolog mach) {
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
			local_aregs[0] = var2.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_exec_1::exec_static;
		}
	}

	public static class pred_loop_1 extends Code {

		/*
		
		loop(0,_1844):-cut(1,_1844).
		loop(_1864,_1880):-is(_1872,_1864-1,loop(_1872,_1880)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_loop_1__1(mach);
		}

		public static Operation exec_pred_loop_1__1(Prolog mach) {
			mach.FillAlternative(pred_loop_1::exec_pred_loop_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.posint0)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_loop_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var2;
			local_aregs[1] = Data.F(sxx_library.s3, var1.Deref(), sxx_library.posint1);
			local_aregs[2] = Data.F(sxx_library.s_loop, var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_or_2 extends Code {

		/*
		
		or(_1908,_1910,_1918):-exec(_1908,_1918).
		or(_1940,_1942,_1950):-exec(_1942,_1950).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_or_2__1(mach);
		}

		public static Operation exec_pred_or_2__1(Prolog mach) {
			mach.FillAlternative(pred_or_2::exec_pred_or_2__2);
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
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_exec_1::exec_static;
		}

		public static Operation exec_pred_or_2__2(Prolog mach) {
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
			local_aregs[0] = var2.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_exec_1::exec_static;
		}
	}

	public static class pred_findall_3 extends Code {

		/*
		
		findall(_1972,_1974,_1976,_1986):-initfindall(_1978,findall2(_1972,_1974,_1976,_1978,_1986)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_findall_3__1(mach);
		}

		public static Operation exec_pred_findall_3__1(Prolog mach) {
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
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var4;
			local_aregs[1] = Data.F(sxx_library.s_findall2, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref(),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_initfindall_1::exec_static;
		}
	}

	public static class pred_findall2_4 extends Code {

		/*
		
		findall2(_2022,_2024,_2026,_2028,_2036):-exec(_2024,addfindall(_2022,_2028,fail(_2036))).
		findall2(_2074,_2076,_2078,_2080,_2088):-retrievefindall(_2078,_2080,_2088).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_findall2_4__1(mach);
		}

		public static Operation exec_pred_findall2_4__1(Prolog mach) {
			mach.FillAlternative(pred_findall2_4::exec_pred_findall2_4__2);
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = Data.F(sxx_library.s_addfindall, var1.Deref(), var4.Deref(),
					Data.F(sxx_library.s_fail, continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_exec_1::exec_static;
		}

		public static Operation exec_pred_findall2_4__2(Prolog mach) {
			mach.RemoveChoice();
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_retrievefindall_2::exec_static;
		}
	}

	public static class pred_copy_term_2 extends Code {

		/*
		
		copy_term(_2116,_2118,_2138):-findall(_2122,_2122=_2116,[_2118],_2138).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_copy_term_2__1(mach);
		}

		public static Operation exec_pred_copy_term_2__1(Prolog mach) {
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
			local_aregs[0] = var3;
			local_aregs[1] = Data.F(sxx_library.s9, var3.Deref(), var1.Deref());
			local_aregs[2] = Data.F(sxx_library.s5, var2.Deref(), Const.Nil);
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_findall_3::exec_static;
		}
	}

	public static class pred_var_1 extends Code {

		/*
		
		var(_2164,_2172):-type_of(_2164,var,_2172).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_var_1__1(mach);
		}

		public static Operation exec_pred_var_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = sxx_library.s_var;
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_type_of_2::exec_static;
		}
	}

	public static class pred_atomic_1 extends Code {

		/*
		
		atomic(_2194,_2204):-type_of(_2194,_2196,atomic2(_2196,_2204)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_atomic_1__1(mach);
		}

		public static Operation exec_pred_atomic_1__1(Prolog mach) {
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
			local_aregs[2] = Data.F(sxx_library.s_atomic2, var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_type_of_2::exec_static;
		}
	}

	public static class pred_atomic2_1 extends Code {

		/*
		
		atomic2(atom,_2238):-cut(1,_2238).
		atomic2(integer,_2266):-call(_2266).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_atomic2_1__1(mach);
		}

		public static Operation exec_pred_atomic2_1__1(Prolog mach) {
			mach.FillAlternative(pred_atomic2_1::exec_pred_atomic2_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.s_atom)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_atomic2_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.s_integer)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_atom_1 extends Code {

		/*
		
		atom(_2280,_2288):-type_of(_2280,atom,_2288).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_atom_1__1(mach);
		}

		public static Operation exec_pred_atom_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = sxx_library.s_atom;
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_type_of_2::exec_static;
		}
	}

	public static class pred_integer_1 extends Code {

		/*
		
		integer(_2310,_2318):-type_of(_2310,integer,_2318).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_integer_1__1(mach);
		}

		public static Operation exec_pred_integer_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = sxx_library.s_integer;
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_type_of_2::exec_static;
		}
	}

	public static class pred_assumeduring_2 extends Code {

		/*
		
		assumeduring(_2340,_2342,_2356):-assume(_2342-_2348,exec(_2340,unify(1,_2348,_2356))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_assumeduring_2__1(mach);
		}

		public static Operation exec_pred_assumeduring_2__1(Prolog mach) {
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
			local_aregs[0] = Data.F(sxx_library.s3, var2.Deref(), var3);
			local_aregs[1] = Data.F(sxx_library.s_exec, var1.Deref(),
					Data.F(sxx_library.s_unify, sxx_library.posint1, var3.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_assume_1::exec_static;
		}
	}

	public static class pred_assumed_1 extends Code {

		/*
		
		assumed(_2392,_2402):-allassumed(_2394,m1(_2392,_2394,_2402)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_assumed_1__1(mach);
		}

		public static Operation exec_pred_assumed_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var2;
			local_aregs[1] = Data.F(sxx_library.s_m1, var1.Deref(), var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_allassumed_1::exec_static;
		}
	}

	public static class pred_m1_2 extends Code {

		/*
		
		m1(_2432,[_2432-_2434|_2440],_2448):-var(_2434,_2448).
		m1(_2476,[_2472|_2474],_2484):-m1(_2476,_2474,_2484).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_m1_2__1(mach);
		}

		public static Operation exec_pred_m1_2__1(Prolog mach) {
			mach.FillAlternative(pred_m1_2::exec_pred_m1_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s5, Data.F(sxx_library.s3, var1.Deref(), var2), var3))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_var_1::exec_static;
		}

		public static Operation exec_pred_m1_2__2(Prolog mach) {
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
			if (!((areg1).Unify(Data.F(sxx_library.s5, var2, var3))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_m1_2::exec_static;
		}
	}

	public static class pred_statistics_2 extends Code {

		/*
		
		statistics(runtime,[_2510,_2516],_2526):-cputime(_2510,_2526).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_statistics_2__1(mach);
		}

		public static Operation exec_pred_statistics_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(sxx_library.s_runtime)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s5, var1, Data.F(sxx_library.s5, var2, Const.Nil)))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_cputime_1::exec_static;
		}
	}

	public static class pred_specialgoal_2 extends Code {

		/*
		
		specialgoal(_2550<_2552,smallerthan(_2550,_2552),_2566):-cut(1,_2566).
		specialgoal(_2590=<_2592,smallerorequal(_2590,_2592),_2606):-cut(1,_2606).
		specialgoal(_2630>_2632,smallerthan(_2632,_2630),_2646):-cut(1,_2646).
		specialgoal(_2670>=_2672,smallerorequal(_2672,_2670),_2686):-cut(1,_2686).
		specialgoal(_2710=:=_2712,arithequal(_2712,_2710),_2726):-cut(1,_2726).
		specialgoal(_2750=_2752,unify(_2752,_2750),_2766):-cut(1,_2766).
		specialgoal((_2790;_2792),or(_2790,_2792),_2806):-cut(1,_2806).
		specialgoal(_2830@<_2832,termsmallerthan(_2830,_2832),_2846):-cut(1,_2846).
		specialgoal(_2870@>_2872,termgreaterthan(_2870,_2872),_2886):-cut(1,_2886).
		specialgoal(_2910@=<_2912,termsmallerequal(_2910,_2912),_2926):-cut(1,_2926).
		specialgoal(_2950@>=_2952,termgreaterequal(_2950,_2952),_2966):-cut(1,_2966).
		specialgoal(_2990==_2992,termequal(_2990,_2992),_3006):-cut(1,_3006).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_specialgoal_2__1(mach);
		}

		public static Operation exec_pred_specialgoal_2__1(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s8, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_smallerthan, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__2(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s11, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_smallerorequal, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__3(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s13, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_smallerthan, var2.Deref(), var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__4(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s14, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_smallerorequal, var2.Deref(), var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__5(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s10, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_arithequal, var2.Deref(), var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__6(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s9, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_unify, var2.Deref(), var1.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__7(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s7, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_or, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__8(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s16, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_termsmallerthan, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__9(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s18, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_termgreaterthan, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__10(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s17, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_termsmallerequal, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__11(Prolog mach) {
			mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__12);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s19, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_termgreaterequal, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_specialgoal_2__12(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s12, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(sxx_library.s_termequal, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_termsmallerthan_2 extends Code {

		/*
		
		termsmallerthan(_3028,_3030,_3038):-compare(<,_3028,_3030,_3038).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_termsmallerthan_2__1(mach);
		}

		public static Operation exec_pred_termsmallerthan_2__1(Prolog mach) {
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
			local_aregs[0] = sxx_library.s8;
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_compare_3::exec_static;
		}
	}

	public static class pred_termgreaterthan_2 extends Code {

		/*
		
		termgreaterthan(_3064,_3066,_3074):-compare(>,_3064,_3066,_3074).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_termgreaterthan_2__1(mach);
		}

		public static Operation exec_pred_termgreaterthan_2__1(Prolog mach) {
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
			local_aregs[0] = sxx_library.s13;
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_compare_3::exec_static;
		}
	}

	public static class pred_termsmallerequal_2 extends Code {

		/*
		
		termsmallerequal(_3100,_3102,_3112):-compare(_3104,_3100,_3102,smeq(_3104,_3112)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_termsmallerequal_2__1(mach);
		}

		public static Operation exec_pred_termsmallerequal_2__1(Prolog mach) {
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
			local_aregs[0] = var3;
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = Data.F(sxx_library.s_smeq, var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_compare_3::exec_static;
		}
	}

	public static class pred_smeq_1 extends Code {

		/*
		
		smeq(<,_3150):-cut(1,_3150).
		smeq(=,_3178):-call(_3178).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_smeq_1__1(mach);
		}

		public static Operation exec_pred_smeq_1__1(Prolog mach) {
			mach.FillAlternative(pred_smeq_1::exec_pred_smeq_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.s8)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_smeq_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.s9)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_termgreaterequal_2 extends Code {

		/*
		
		termgreaterequal(_3192,_3194,_3204):-compare(_3196,_3192,_3194,smgr(_3196,_3204)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_termgreaterequal_2__1(mach);
		}

		public static Operation exec_pred_termgreaterequal_2__1(Prolog mach) {
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
			local_aregs[0] = var3;
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = Data.F(sxx_library.s_smgr, var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_compare_3::exec_static;
		}
	}

	public static class pred_smgr_1 extends Code {

		/*
		
		smgr(>,_3242):-cut(1,_3242).
		smgr(=,_3270):-call(_3270).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_smgr_1__1(mach);
		}

		public static Operation exec_pred_smgr_1__1(Prolog mach) {
			mach.FillAlternative(pred_smgr_1::exec_pred_smgr_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.s13)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return Prolog.Call1;
		}

		public static Operation exec_pred_smgr_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(sxx_library.s9)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_termequal_2 extends Code {

		/*
		
		termequal(_3284,_3286,_3294):-compare(=,_3284,_3286,_3294).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_termequal_2__1(mach);
		}

		public static Operation exec_pred_termequal_2__1(Prolog mach) {
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
			local_aregs[0] = sxx_library.s9;
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_compare_3::exec_static;
		}
	}

	public static class pred_not_1 extends Code {

		/*
		
		not(_3320,_3328):-exec(_3320,cut(1,fail(_3328))).
		not(_3358,_3368):-call(_3368).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_not_1__1(mach);
		}

		public static Operation exec_pred_not_1__1(Prolog mach) {
			mach.FillAlternative(pred_not_1::exec_pred_not_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(sxx_library.s_fail, continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_exec_1::exec_static;
		}

		public static Operation exec_pred_not_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_freeze_2 extends Code {

		/*
		
		freeze(_3382,_3384,_3392):-var(_3382,cut(1,freeze_internal(_3382,_3384,_3392))).
		freeze(_3428,_3430,_3438):-exec(_3430,_3438).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_freeze_2__1(mach);
		}

		public static Operation exec_pred_freeze_2__1(Prolog mach) {
			mach.FillAlternative(pred_freeze_2::exec_pred_freeze_2__2);
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
			local_aregs[1] = mach.HC(Data.F(sxx_library.s_freeze_internal, var1.Deref(), var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_var_1::exec_static;
		}

		public static Operation exec_pred_freeze_2__2(Prolog mach) {
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
			local_aregs[0] = var2.Deref();
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_exec_1::exec_static;
		}
	}

	public static class pred_execpendinggoals_1 extends Code {

		/*
		
		execpendinggoals([],_3466):-execcontinuation(_3466).
		execpendinggoals([_3486|_3488],_3496):-exec(_3486,execpendinggoals(_3488,_3496)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_execpendinggoals_1__1(mach);
		}

		public static Operation exec_pred_execpendinggoals_1__1(Prolog mach) {
			mach.FillAlternative(pred_execpendinggoals_1::exec_pred_execpendinggoals_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return (Operation) pred_execcontinuation_0::exec_static;
		}

		public static Operation exec_pred_execpendinggoals_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(sxx_library.s5, var1, var2))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = Data.F(sxx_library.s_execpendinggoals, var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_exec_1::exec_static;
		}
	}

}
