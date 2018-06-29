package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class sxx_meta /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("*->");
	final static Const s2 = Data.Intern(",");
	final static Const s3 = Data.Intern(".");
	final static Const s4 = Data.Intern(":-");
	final static Const s5 = Data.Intern(";");
	final static Const s6 = Data.Intern("=");
	final static Const s7 = Data.Intern("\\+");
	final static Const s_call = Data.Intern("call");
	final static Const s_dotwo = Data.Intern("dotwo");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_forall = Data.Intern("forall");
	final static Const s_nb_setarg = Data.Intern("nb_setarg");
	final static Const s_not = Data.Intern("not");
	final static Const s_one_of_or_else = Data.Intern("one_of_or_else");
	final static Const s_or = Data.Intern("or");
	final static Const s_redo_each_call = Data.Intern("redo_each_call");
	final static Const s_setup_call_cleanup = Data.Intern("setup_call_cleanup");
	final static Const s_true = Data.Intern("true");
	final static Const s_undo = Data.Intern("undo");
	final static Const s_unify = Data.Intern("unify");
	final static Int posint1 = Data.Number(1L);
	final static Operation reg_forall_2 = PredTable.Register("forall", 2, new pred_forall_2());
	final static Operation reg_undo_1 = PredTable.Register("undo", 1, new pred_undo_1());
	final static Operation reg_redo_each_call_3 = PredTable.Register("redo_each_call", 3, new pred_redo_each_call_3());
	final static Operation reg_or_2 = PredTable.Register("or", 2, new pred_or_2());
	final static Operation reg_one_of_or_else_3 = PredTable.Register("one_of_or_else", 3, new pred_one_of_or_else_3());

	public static class pred_forall_2 extends Code {

		/*
		
		forall(_6042,_6044,_6108):-not(\+ (call(_6042),\+ \+call(_6052)),_6108).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_forall_2__1(mach);
		}

		public static Operation exec_pred_forall_2__1(Prolog mach) {
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
			local_aregs[0] = Data.F(sxx_meta.s7, Data.F(sxx_meta.s2, Data.F(sxx_meta.s_call, var1.Deref()),
					Data.F(sxx_meta.s7, Data.F(sxx_meta.s7, Data.F(sxx_meta.s_call, var3)))));
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return (Operation) pred_not_1::exec_static;
		}
	}

	public static class pred_undo_1 extends Code {

		/*
		
		undo(_6192,_6220):-call(_6192,_6220).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_undo_1__1(mach);
		}

		public static Operation exec_pred_undo_1__1(Prolog mach) {
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

	public static class pred_redo_each_call_3 extends Code {

		/*
		
		redo_each_call(_6302,_6304,_6306,_6354):-setup_call_cleanup(_6302,_6304,_6306,_6354).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_redo_each_call_3__1(mach);
		}

		public static Operation exec_pred_redo_each_call_3__1(Prolog mach) {
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_setup_call_cleanup_3::exec_static;
		}
	}

	public static class pred_or_2 extends Code {

		/*
		
		or((_6482*->_6484),_6490,_6586):-unify(dotwo(true),_6498,or((call(_6482),nb_setarg(1,_6498,fail)),(_6498=dotwo(true);_6534),_6586)).
		
		
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
			if (!((areg0).Unify(Data.F(sxx_meta.s1, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(sxx_meta.s_dotwo, sxx_meta.s_true);
			local_aregs[1] = var4;
			local_aregs[2] = Data.F(sxx_meta.s_or,
					Data.F(sxx_meta.s2, Data.F(sxx_meta.s_call, var1.Deref()),
							Data.F(sxx_meta.s_nb_setarg, sxx_meta.posint1, var4.Deref(), sxx_meta.s_fail)),
					Data.F(sxx_meta.s5, Data.F(sxx_meta.s6, var4.Deref(), Data.F(sxx_meta.s_dotwo, sxx_meta.s_true)),
							var5),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_unify_2::exec_static;
		}
	}

	public static class pred_one_of_or_else_3 extends Code {

		/*
		
		one_of_or_else(_612,_614,_616,_632):-or((_620*->_622),_624,_632).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_one_of_or_else_3__1(mach);
		}

		public static Operation exec_pred_one_of_or_else_3__1(Prolog mach) {
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
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(sxx_meta.s1, var4, var5);
			local_aregs[1] = var6;
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_or_2::exec_static;
		}
	}

}
