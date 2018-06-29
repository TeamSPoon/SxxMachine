package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class flatten /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern("!");
	final static Const s2 = Data.Intern("+");
	final static Const s3 = Data.Intern(",");
	final static Const s4 = Data.Intern("-->");
	final static Const s5 = Data.Intern("->");
	final static Const s6 = Data.Intern(".");
	final static Const s7 = Data.Intern(":-");
	final static Const s8 = Data.Intern(";");
	final static Const s9 = Data.Intern("=");
	final static Const s10 = Data.Intern("=..");
	final static Const s11 = Data.Intern("=<");
	final static Const s12 = Data.Intern(">");
	final static Const s13 = Data.Intern("\\+");
	final static Const s14 = Data.Intern("\\=");
	final static Const s__dummy_ = Data.Intern("_dummy_");
	final static Const s_a = Data.Intern("a");
	final static Const s_append = Data.Intern("append");
	final static Const s_arg = Data.Intern("arg");
	final static Const s_atomic = Data.Intern("atomic");
	final static Const s_b = Data.Intern("b");
	final static Const s_c = Data.Intern("c");
	final static Const s_call = Data.Intern("call");
	final static Const s_copy = Data.Intern("copy");
	final static Const s_copy2 = Data.Intern("copy2");
	final static Const s_disj = Data.Intern("disj");
	final static Const s_eliminate_disjunctions = Data.Intern("eliminate_disjunctions");
	final static Const s_extract_disj = Data.Intern("extract_disj");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_find_vars = Data.Intern("find_vars");
	final static Const s_functor = Data.Intern("functor");
	final static Const s_gather_disj = Data.Intern("gather_disj");
	final static Const s_inst_vars = Data.Intern("inst_vars");
	final static Const s_inst_vars_list = Data.Intern("inst_vars_list");
	final static Const s_intersect_sorted_vars = Data.Intern("intersect_sorted_vars");
	final static Const s_intersect_vars = Data.Intern("intersect_vars");
	final static Const s_is = Data.Intern("is");
	final static Const s_is_disj = Data.Intern("is_disj");
	final static Const s_make_dummy_clauses = Data.Intern("make_dummy_clauses");
	final static Const s_make_dummy_name = Data.Intern("make_dummy_name");
	final static Const s_make_sym = Data.Intern("make_sym");
	final static Const s_name = Data.Intern("name");
	final static Const s_nonvar = Data.Intern("nonvar");
	final static Const s_not = Data.Intern("not");
	final static Const s_p = Data.Intern("p");
	final static Const s_retrieve_sym = Data.Intern("retrieve_sym");
	final static Const s_smallerorequal = Data.Intern("smallerorequal");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_sort = Data.Intern("sort");
	final static Const s_sort_vars = Data.Intern("sort_vars");
	final static Const s_split_vars = Data.Intern("split_vars");
	final static Const s_termequal = Data.Intern("termequal");
	final static Const s_termgreaterthan = Data.Intern("termgreaterthan");
	final static Const s_termsmallerthan = Data.Intern("termsmallerthan");
	final static Const s_top = Data.Intern("top");
	final static Const s_treat_disj = Data.Intern("treat_disj");
	final static Const s_true = Data.Intern("true");
	final static Const s_unify = Data.Intern("unify");
	final static Const s_var = Data.Intern("var");
	final static Const s_varbag = Data.Intern("varbag");
	final static Const s_varset = Data.Intern("varset");
	final static Const s62 = Data.Intern("{}");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint65 = Data.Number(65L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_eliminate_disjunctions_4 = PredTable.Register("eliminate_disjunctions", 4,
			new pred_eliminate_disjunctions_4());
	final static Operation reg_gather_disj_4 = PredTable.Register("gather_disj", 4, new pred_gather_disj_4());
	final static Operation reg_extract_disj_4 = PredTable.Register("extract_disj", 4, new pred_extract_disj_4());
	final static Operation reg_extract_disj_7 = PredTable.Register("extract_disj", 7, new pred_extract_disj_7());
	final static Operation reg_is_disj_2 = PredTable.Register("is_disj", 2, new pred_is_disj_2());
	final static Operation reg_treat_disj_3 = PredTable.Register("treat_disj", 3, new pred_treat_disj_3());
	final static Operation reg_make_dummy_clauses_4 = PredTable.Register("make_dummy_clauses", 4,
			new pred_make_dummy_clauses_4());
	final static Operation reg_find_vars_2 = PredTable.Register("find_vars", 2, new pred_find_vars_2());
	final static Operation reg_find_vars_3 = PredTable.Register("find_vars", 3, new pred_find_vars_3());
	final static Operation reg_intersect_vars_3 = PredTable.Register("intersect_vars", 3, new pred_intersect_vars_3());
	final static Operation reg_make_dummy_name_2 = PredTable.Register("make_dummy_name", 2,
			new pred_make_dummy_name_2());
	final static Operation reg_append_3 = PredTable.Register("append", 3, new pred_append_3());
	final static Operation reg_copy_2 = PredTable.Register("copy", 2, new pred_copy_2());
	final static Operation reg_copy2_3 = PredTable.Register("copy2", 3, new pred_copy2_3());
	final static Operation reg_copy2_5 = PredTable.Register("copy2", 5, new pred_copy2_5());
	final static Operation reg_retrieve_sym_3 = PredTable.Register("retrieve_sym", 3, new pred_retrieve_sym_3());
	final static Operation reg_make_sym_2 = PredTable.Register("make_sym", 2, new pred_make_sym_2());
	final static Operation reg_varset_2 = PredTable.Register("varset", 2, new pred_varset_2());
	final static Operation reg_varbag_2 = PredTable.Register("varbag", 2, new pred_varbag_2());
	final static Operation reg_$002D$002D$003E_2 = PredTable.Register("-->", 2, new pred_$002D$002D$003E_2());
	final static Operation reg_inst_vars_1 = PredTable.Register("inst_vars", 1, new pred_inst_vars_1());
	final static Operation reg_inst_vars_list_2 = PredTable.Register("inst_vars_list", 2, new pred_inst_vars_list_2());
	final static Operation reg_sort_vars_2 = PredTable.Register("sort_vars", 2, new pred_sort_vars_2());
	final static Operation reg_sort_vars_3 = PredTable.Register("sort_vars", 3, new pred_sort_vars_3());
	final static Operation reg_intersect_sorted_vars_3 = PredTable.Register("intersect_sorted_vars", 3,
			new pred_intersect_sorted_vars_3());
	final static Operation reg_split_vars_4 = PredTable.Register("split_vars", 4, new pred_split_vars_4());

	public static class pred_top_0 extends Code {

		/*
		
		top(_24748):-eliminate_disjunctions([(a(_24670,_24672,_24674):-b(_24670);c(_24674))],_24706,_24708,[],inst_vars((_24706,_24708),_24748)).
		top(_24908):-true(_24908).
		
		
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
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			local_aregs[0] = Data.F(flatten.s6,
					Data.F(flatten.s7, Data.F(flatten.s_a, var1, var2, var3),
							Data.F(flatten.s8, Data.F(flatten.s_b, var1.Deref()), Data.F(flatten.s_c, var3.Deref()))),
					Const.Nil);
			local_aregs[1] = var4;
			local_aregs[2] = var5;
			local_aregs[3] = Const.Nil;
			local_aregs[4] = Data.F(flatten.s_inst_vars, Data.F(flatten.s3, var4.Deref(), var5.Deref()), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_eliminate_disjunctions_4::exec_static;
		}

		public static Operation exec_pred_top_0__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[0];
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_true_0::exec_static;
		}
	}

	public static class pred_eliminate_disjunctions_4 extends Code {

		/*
		
		eliminate_disjunctions(_24958,_24960,_24962,_24964,_25034):-gather_disj(_24958,_24960,_24972,[],treat_disj(_24972,_24962,_24964,_25034)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_eliminate_disjunctions_4__1(mach);
		}

		public static Operation exec_pred_eliminate_disjunctions_4__1(Prolog mach) {
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
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var5;
			local_aregs[3] = Const.Nil;
			local_aregs[4] = Data.F(flatten.s_treat_disj, var5.Deref(), var3.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_gather_disj_4::exec_static;
		}
	}

	public static class pred_gather_disj_4 extends Code {

		/*
		
		gather_disj([],[],_25246,_25246,_25270):-call(_25270).
		gather_disj([_25376|_25378],_25384,_25386,_25388,_25478):-extract_disj(_25376,_25394,_25386,_25398,unify([_25394|_25404],_25384,gather_disj(_25378,_25404,_25398,_25388,_25478))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_gather_disj_4__1(mach);
		}

		public static Operation exec_pred_gather_disj_4__1(Prolog mach) {
			mach.FillAlternative(pred_gather_disj_4::exec_pred_gather_disj_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var1.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_gather_disj_4__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var6;
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var7;
			local_aregs[4] = Data.F(flatten.s_unify, Data.F(flatten.s6, var6.Deref(), var8), var3.Deref(), Data
					.F(flatten.s_gather_disj, var2.Deref(), var8.Deref(), var7.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_extract_disj_4::exec_static;
		}
	}

	public static class pred_extract_disj_4 extends Code {

		/*
		
		extract_disj(_25768,(_25762:-_25764),_25772,_25774,_25872):-unify((_25762:-_25780),_25768,cut(1,unify(0,_25790,extract_disj(_25780,_25764,_25772,_25774,_25768,_25790,_25808,_25872)))).
		extract_disj(_26188,_26188,_26192,_26192,_26216):-call(_26216).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_extract_disj_4__1(mach);
		}

		public static Operation exec_pred_extract_disj_4__1(Prolog mach) {
			mach.FillAlternative(pred_extract_disj_4::exec_pred_extract_disj_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s7, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(flatten.s7, var2.Deref(), var6);
			local_aregs[1] = var1.Deref();
			local_aregs[2] = mach
					.HC(Data.F(flatten.s_unify, flatten.posint0, var7, Data.F(flatten.s_extract_disj, var6.Deref(),
							var3.Deref(), var4.Deref(), var5.Deref(), var1.Deref(), var7.Deref(), var8, continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_unify_2::exec_static;
		}

		public static Operation exec_pred_extract_disj_4__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_extract_disj_7 extends Code {

		/*
		
		extract_disj((_26328,_26330),(_26334,_26336),_26344,_26346,_26348,_26350,_26352,_26454):-extract_disj(_26328,_26334,_26344,_26362,_26348,_26350,_26368,extract_disj(_26330,_26336,_26362,_26346,_26348,_26368,_26352,_26454)).
		extract_disj(_26802,_26804,_26806,_26808,_26810,_26812,_26814,_26936):-is_disj(_26802,_26820,cut(1,unify([disj(_26820,_26812,_26804,_26810)|_26808],_26806,is(_26814,_26812+1,_26936)))).
		extract_disj(_27206,_27206,_27210,_27210,_27214,_27216,_27216,_27240):-call(_27240).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
			Term aregs[] = mach.RegPull(7);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_extract_disj_7__1(mach);
		}

		public static Operation exec_pred_extract_disj_7__1(Prolog mach) {
			mach.FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[7];
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(Data.F(flatten.s3, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s3, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var5.Deref();
			local_aregs[3] = var10;
			local_aregs[4] = var7.Deref();
			local_aregs[5] = var8.Deref();
			local_aregs[6] = var11;
			local_aregs[7] = Data.F(flatten.s_extract_disj, var2.Deref(), var4.Deref(), var10.Deref(), var6.Deref(),
					var7.Deref(), var11.Deref(), var9.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_extract_disj_7::exec_static;
		}

		public static Operation exec_pred_extract_disj_7__2(Prolog mach) {
			mach.FillAlternative(pred_extract_disj_7::exec_pred_extract_disj_7__3);
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
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var8;
			local_aregs[2] = mach.HC(Data.F(flatten.s_unify,
					Data.F(flatten.s6, Data.F(flatten.s_disj, var8.Deref(), var6.Deref(), var2.Deref(), var5.Deref()),
							var4.Deref()),
					var3.Deref(), Data.F(flatten.s_is, var7.Deref(), Data.F(flatten.s2, var6.Deref(), flatten.posint1),
							continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_disj_2::exec_static;
		}

		public static Operation exec_pred_extract_disj_7__3(Prolog mach) {
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
			if (!((areg5).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_is_disj_2 extends Code {

		/*
		
		is_disj((_1200->_1202;_1208),(_1200,!,_1202;_1208),_1234):-cut(1,_1234).
		is_disj((_1258;_1260),(_1258;_1260),_1276):-call(_1276).
		is_disj(not(_1294),(_1294,!,fail;true),_1322):-call(_1322).
		is_disj(\+_1340,(_1340,!,fail;true),_1368):-call(_1368).
		is_disj(_1386\=_1388,(_1386=_1388,!,fail;true),_1422):-call(_1422).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_is_disj_2__1(mach);
		}

		public static Operation exec_pred_is_disj_2__1(Prolog mach) {
			mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s8, Data.F(flatten.s5, var1, var2), var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s8,
					Data.F(flatten.s3, var1.Deref(), Data.F(flatten.s3, flatten.s1, var2.Deref())), var3.Deref()))))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_is_disj_2__2(Prolog mach) {
			mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s8, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s8, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_is_disj_2__3(Prolog mach) {
			mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s_not, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s8,
					Data.F(flatten.s3, var1.Deref(), Data.F(flatten.s3, flatten.s1, flatten.s_fail)), flatten.s_true))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_is_disj_2__4(Prolog mach) {
			mach.FillAlternative(pred_is_disj_2::exec_pred_is_disj_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s13, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s8,
					Data.F(flatten.s3, var1.Deref(), Data.F(flatten.s3, flatten.s1, flatten.s_fail)), flatten.s_true))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_is_disj_2__5(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s14, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s8, Data.F(flatten.s3, Data.F(flatten.s9, var1.Deref(), var2.Deref()),
					Data.F(flatten.s3, flatten.s1, flatten.s_fail)), flatten.s_true))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_treat_disj_3 extends Code {

		/*
		
		treat_disj([],_1438,_1438,_1448):-call(_1448).
		treat_disj([disj((_1468;_1470),_1476,_1478,_1480)|_1486],_1488,_1490,_1526):-find_vars((_1468;_1470),_1498,find_vars(_1480,_1500,intersect_vars(_1498,_1500,_1502,make_dummy_name(_1476,_1504,=..(_1478,[_1504|_1502],make_dummy_clauses((_1468;_1470),_1478,_1488,_1518,treat_disj(_1486,_1518,_1490,_1526))))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_treat_disj_3__1(mach);
		}

		public static Operation exec_pred_treat_disj_3__1(Prolog mach) {
			mach.FillAlternative(pred_treat_disj_3::exec_pred_treat_disj_3__2);
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

		public static Operation exec_pred_treat_disj_3__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
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
			if (!((areg0).Unify(Data.F(flatten.s6,
					Data.F(flatten.s_disj, Data.F(flatten.s8, var1, var2), var3, var4, var5), var6))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var8)))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(flatten.s8, var1.Deref(), var2.Deref());
			local_aregs[1] = var9;
			local_aregs[2] = Data.F(flatten.s_find_vars, var5.Deref(), var10, Data.F(flatten.s_intersect_vars,
					var9.Deref(), var10.Deref(), var11,
					Data.F(flatten.s_make_dummy_name, var3.Deref(), var12,
							Data.F(flatten.s10, var4.Deref(), Data.F(flatten.s6, var12.Deref(), var11.Deref()),
									Data.F(flatten.s_make_dummy_clauses, Data.F(flatten.s8, var1.Deref(), var2.Deref()),
											var4.Deref(), var7.Deref(), var13, Data.F(flatten.s_treat_disj,
													var6.Deref(), var13.Deref(), var8.Deref(), continuation))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_find_vars_2::exec_static;
		}
	}

	public static class pred_make_dummy_clauses_4 extends Code {

		/*
		
		make_dummy_clauses((_1610;_1612),_1620,[_1616|_1618],_1622,_1636):-cut(1,copy((_1620:-_1610),_1616,make_dummy_clauses(_1612,_1620,_1618,_1622,_1636))).
		make_dummy_clauses(_1688,_1690,[_1684|_1686],_1686,_1704):-copy((_1690:-_1688),_1684,_1704).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_make_dummy_clauses_4__1(mach);
		}

		public static Operation exec_pred_make_dummy_clauses_4__1(Prolog mach) {
			mach.FillAlternative(pred_make_dummy_clauses_4::exec_pred_make_dummy_clauses_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
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
			if (!((areg0).Unify(Data.F(flatten.s8, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(flatten.s6, var4, var5))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var6)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(flatten.s_copy, Data.F(flatten.s7, var3.Deref(), var1.Deref()), var4.Deref(),
					Data.F(flatten.s_make_dummy_clauses, var2.Deref(), var3.Deref(), var5.Deref(), var6.Deref(),
							continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_make_dummy_clauses_4__2(Prolog mach) {
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
			if (!((areg2).Unify(Data.F(flatten.s6, var3, var4))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(flatten.s7, var2.Deref(), var1.Deref());
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_copy_2::exec_static;
		}
	}

	public static class pred_find_vars_2 extends Code {

		/*
		
		find_vars(_1732,_1734,_1744):-find_vars(_1732,_1734,_1736,unify([],_1736,_1744)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_find_vars_2__1(mach);
		}

		public static Operation exec_pred_find_vars_2__1(Prolog mach) {
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
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var3;
			local_aregs[3] = Data.F(flatten.s_unify, Const.Nil, var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_find_vars_3::exec_static;
		}
	}

	public static class pred_find_vars_3 extends Code {

		/*
		
		find_vars(_1780,[_1780|_1782],_1782,_1790):-var(_1780,cut(1,_1790)).
		find_vars(_1820,_1822,_1822,_1830):-atomic(_1820,cut(1,_1830)).
		find_vars([_1862|_1864],_1866,_1868,_1878):-cut(1,find_vars(_1862,_1866,_1870,find_vars(_1864,_1870,_1868,_1878))).
		find_vars(_1922,_1924,_1926,_1940):- =..(_1922,[_1930|_1932],find_vars(_1932,_1924,_1926,_1940)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_find_vars_3__1(mach);
		}

		public static Operation exec_pred_find_vars_3__1(Prolog mach) {
			mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s6, var1.Deref(), var2))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_var_1::exec_static;
		}

		public static Operation exec_pred_find_vars_3__2(Prolog mach) {
			mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__3);
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
			local_aregs[1] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_atomic_1::exec_static;
		}

		public static Operation exec_pred_find_vars_3__3(Prolog mach) {
			mach.FillAlternative(pred_find_vars_3::exec_pred_find_vars_3__4);
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = Data.F(flatten.s_find_vars, var1.Deref(), var3.Deref(), var5,
					Data.F(flatten.s_find_vars, var2.Deref(), var5.Deref(), var4.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_find_vars_3__4(Prolog mach) {
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = Data.F(flatten.s6, var4, var5);
			local_aregs[2] = Data.F(flatten.s_find_vars, var5.Deref(), var2.Deref(), var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_$003D$002E$002E_2::exec_static;
		}
	}

	public static class pred_intersect_vars_3 extends Code {

		/*
		
		intersect_vars(_1976,_1978,_1980,_1992):-sort_vars(_1976,_1982,sort_vars(_1978,_1984,intersect_sorted_vars(_1982,_1984,_1980,_1992))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_intersect_vars_3__1(mach);
		}

		public static Operation exec_pred_intersect_vars_3__1(Prolog mach) {
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var4;
			local_aregs[2] = Data.F(flatten.s_sort_vars, var2.Deref(), var5,
					Data.F(flatten.s_intersect_sorted_vars, var4.Deref(), var5.Deref(), var3.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_sort_vars_2::exec_static;
		}
	}

	public static class pred_make_dummy_name_2 extends Code {

		/*
		
		make_dummy_name(_2036,_2038,_2052):-name('_dummy_',_2040,name(_2036,_2042,append(_2040,_2042,_2044,name(_2038,_2044,_2052)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_make_dummy_name_2__1(mach);
		}

		public static Operation exec_pred_make_dummy_name_2__1(Prolog mach) {
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
			local_aregs[0] = flatten.s__dummy_;
			local_aregs[1] = var3;
			local_aregs[2] = Data.F(flatten.s_name, var1.Deref(), var4, Data.F(flatten.s_append, var3.Deref(),
					var4.Deref(), var5, Data.F(flatten.s_name, var2.Deref(), var5.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_name_2::exec_static;
		}
	}

	public static class pred_append_3 extends Code {

		/*
		
		append([],_2102,_2102,_2112):-call(_2112).
		append([_2132|_2134],_2142,[_2132|_2140],_2150):-append(_2134,_2142,_2140,_2150).
		
		
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(flatten.s6, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_append_3::exec_static;
		}
	}

	public static class pred_copy_2 extends Code {

		/*
		
		copy(_2178,_2180,_2192):-varset(_2178,_2182,make_sym(_2182,_2184,copy2(_2178,_2180,_2184,cut(1,_2192)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_copy_2__1(mach);
		}

		public static Operation exec_pred_copy_2__1(Prolog mach) {
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
			local_aregs[2] = Data.F(flatten.s_make_sym, var3.Deref(), var4,
					Data.F(flatten.s_copy2, var1.Deref(), var2.Deref(), var4.Deref(), mach.HC(continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_varset_2::exec_static;
		}
	}

	public static class pred_copy2_3 extends Code {

		/*
		
		copy2(_2240,_2242,_2244,_2252):-var(_2240,cut(1,retrieve_sym(_2240,_2244,_2242,_2252))).
		copy2(_2292,_2294,_2296,_2308):-nonvar(_2292,cut(1,functor(_2292,_2298,_2300,functor(_2294,_2298,_2300,copy2(_2292,_2294,_2296,1,_2300,_2308))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_copy2_3__1(mach);
		}

		public static Operation exec_pred_copy2_3__1(Prolog mach) {
			mach.FillAlternative(pred_copy2_3::exec_pred_copy2_3__2);
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
			local_aregs[1] = mach
					.HC(Data.F(flatten.s_retrieve_sym, var1.Deref(), var3.Deref(), var2.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_var_1::exec_static;
		}

		public static Operation exec_pred_copy2_3__2(Prolog mach) {
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = mach.HC(Data.F(flatten.s_functor, var1.Deref(), var4, var5,
					Data.F(flatten.s_functor, var2.Deref(), var4.Deref(), var5.Deref(), Data.F(flatten.s_copy2,
							var1.Deref(), var2.Deref(), var3.Deref(), flatten.posint1, var5.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_nonvar_1::exec_static;
		}
	}

	public static class pred_copy2_5 extends Code {

		/*
		
		copy2(_2372,_2374,_2376,_2378,_2380,_2388):-smallerthan(_2380,_2378,cut(1,_2388)).
		copy2(_2424,_2426,_2428,_2430,_2432,_2452):-smallerorequal(_2430,_2432,cut(1,arg(_2430,_2424,_2434,arg(_2430,_2426,_2436,copy2(_2434,_2436,_2428,is(_2444,_2430+1,copy2(_2424,_2426,_2428,_2444,_2432,_2452))))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
			Term aregs[] = mach.RegPull(5);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_copy2_5__1(mach);
		}

		public static Operation exec_pred_copy2_5__1(Prolog mach) {
			mach.FillAlternative(pred_copy2_5::exec_pred_copy2_5__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
			Term areg4 = local_aregs[4].Deref();
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
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var5.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_copy2_5__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
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
			local_aregs[0] = var4.Deref();
			local_aregs[1] = var5.Deref();
			local_aregs[2] = mach.HC(Data.F(flatten.s_arg, var4.Deref(), var1.Deref(), var6,
					Data.F(flatten.s_arg, var4.Deref(), var2.Deref(), var7,
							Data.F(flatten.s_copy2, var6.Deref(), var7.Deref(), var3.Deref(),
									Data.F(flatten.s_is, var8, Data.F(flatten.s2, var4.Deref(), flatten.posint1),
											Data.F(flatten.s_copy2, var1.Deref(), var2.Deref(), var3.Deref(),
													var8.Deref(), var5.Deref(), continuation))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}
	}

	public static class pred_retrieve_sym_3 extends Code {

		/*
		
		retrieve_sym(_2552,[p(_2542,_2544)|_2550],_2544,_2560):-termequal(_2552,_2542,cut(1,_2560)).
		retrieve_sym(_2598,[_2594|_2596],_2600,_2608):-retrieve_sym(_2598,_2596,_2600,_2608).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_retrieve_sym_3__1(mach);
		}

		public static Operation exec_pred_retrieve_sym_3__1(Prolog mach) {
			mach.FillAlternative(pred_retrieve_sym_3::exec_pred_retrieve_sym_3__2);
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
			if (!((areg1).Unify(Data.F(flatten.s6, Data.F(flatten.s_p, var2, var3), var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_termequal_2::exec_static;
		}

		public static Operation exec_pred_retrieve_sym_3__2(Prolog mach) {
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
			if (!((areg1).Unify(Data.F(flatten.s6, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_retrieve_sym_3::exec_static;
		}
	}

	public static class pred_make_sym_2 extends Code {

		/*
		
		make_sym([],[],_2644):-call(_2644).
		make_sym([_2662|_2664],[p(_2662,_2670)|_2676],_2684):-make_sym(_2664,_2676,_2684).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_make_sym_2__1(mach);
		}

		public static Operation exec_pred_make_sym_2__1(Prolog mach) {
			mach.FillAlternative(pred_make_sym_2::exec_pred_make_sym_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_make_sym_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s6, Data.F(flatten.s_p, var1.Deref(), var3), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_make_sym_2::exec_static;
		}
	}

	public static class pred_varset_2 extends Code {

		/*
		
		varset(_2708,_2710,_2720):-varbag(_2708,_2712,sort(_2712,_2710,_2720)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_varset_2__1(mach);
		}

		public static Operation exec_pred_varset_2__1(Prolog mach) {
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
			local_aregs[2] = Data.F(flatten.s_sort, var3.Deref(), var2.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_varbag_2::exec_static;
		}
	}

	public static class pred_varbag_2 extends Code {

		/*
		
		varbag(_2752,_2754,_2762):-varbag(_2752,_2754,[],_2762).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_varbag_2__1(mach);
		}

		public static Operation exec_pred_varbag_2__1(Prolog mach) {
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
			local_aregs[2] = Const.Nil;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_varbag_3::exec_static;
		}
	}

	public static class pred_$002D$002D$003E_2 extends Code {

		/*
		
		-->(varbag(_2790),({var(_2790)},!,[_2790]),_2826):-call(_2826).
		-->(varbag(_2844),({nonvar(_2844),!,functor(_2844,_2854,_2856)},varbag(_2844,1,_2856)),_2896):-call(_2896).
		-->(varbag(_2914,_2916,_2918),({_2916>_2918},!),_2944):-call(_2944).
		-->(varbag(_2962,_2964,_2966),({_2964=<_2966},!,{arg(_2964,_2962,_2984)},varbag(_2984),{_3002 is _2964+1},varbag(_2962,_3002,_2966)),_3056):-call(_3056).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_$002D$002D$003E_2__1(mach);
		}

		public static Operation exec_pred_$002D$002D$003E_2__1(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s_varbag, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s3, Data.F(flatten.s62, Data.F(flatten.s_var, var1.Deref())),
					Data.F(flatten.s3, flatten.s1, Data.F(flatten.s6, var1.Deref(), Const.Nil))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__2(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s_varbag, var1))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s3, Data.F(flatten.s62,
					Data.F(flatten.s3, Data.F(flatten.s_nonvar, var1.Deref()),
							Data.F(flatten.s3, flatten.s1, Data.F(flatten.s_functor, var1.Deref(), var2, var3)))),
					Data.F(flatten.s_varbag, var1.Deref(), flatten.posint1, var3.Deref())))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__3(Prolog mach) {
			mach.FillAlternative(pred_$002D$002D$003E_2::exec_pred_$002D$002D$003E_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s_varbag, var1, var2, var3))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s3, Data.F(flatten.s62, Data.F(flatten.s12, var2.Deref(), var3.Deref())),
					flatten.s1))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_$002D$002D$003E_2__4(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(flatten.s_varbag, var1, var2, var3))))
				return Prolog.Fail0;
			if (!((areg1)
					.Unify(Data.F(flatten.s3, Data.F(flatten.s62, Data.F(flatten.s11, var2.Deref(), var3.Deref())),
							Data.F(flatten.s3, flatten.s1, Data.F(flatten.s3,
									Data.F(flatten.s62, Data.F(flatten.s_arg, var2.Deref(), var1.Deref(), var4)),
									Data.F(flatten.s3, Data.F(flatten.s_varbag, var4.Deref()),
											Data.F(flatten.s3,
													Data.F(flatten.s62,
															Data.F(flatten.s_is, var5,
																	Data.F(flatten.s2, var2.Deref(), flatten.posint1))),
													Data.F(flatten.s_varbag, var1.Deref(), var5.Deref(),
															var3.Deref())))))))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_inst_vars_1 extends Code {

		/*
		
		inst_vars(_3072,_3094):-varset(_3072,_3074,unify([65],[_3078],inst_vars_list(_3074,_3078,_3094))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_inst_vars_1__1(mach);
		}

		public static Operation exec_pred_inst_vars_1__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2;
			local_aregs[2] = Data.F(flatten.s_unify, Data.F(flatten.s6, flatten.posint65, Const.Nil),
					Data.F(flatten.s6, var3, Const.Nil),
					Data.F(flatten.s_inst_vars_list, var2.Deref(), var3.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_varset_2::exec_static;
		}
	}

	public static class pred_inst_vars_list_2 extends Code {

		/*
		
		inst_vars_list([],_3132,_3142):-call(_3142).
		inst_vars_list([_3160|_3162],_3164,_3186):-name(_3160,[_3164],is(_3178,_3164+1,inst_vars_list(_3162,_3178,_3186))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_inst_vars_list_2__1(mach);
		}

		public static Operation exec_pred_inst_vars_list_2__1(Prolog mach) {
			mach.FillAlternative(pred_inst_vars_list_2::exec_pred_inst_vars_list_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_inst_vars_list_2__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = Data.F(flatten.s6, var3.Deref(), Const.Nil);
			local_aregs[2] = Data.F(flatten.s_is, var4, Data.F(flatten.s2, var3.Deref(), flatten.posint1),
					Data.F(flatten.s_inst_vars_list, var2.Deref(), var4.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_name_2::exec_static;
		}
	}

	public static class pred_sort_vars_2 extends Code {

		/*
		
		sort_vars(_3226,_3228,_3236):-sort_vars(_3226,_3228,[],_3236).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_sort_vars_2__1(mach);
		}

		public static Operation exec_pred_sort_vars_2__1(Prolog mach) {
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
			local_aregs[2] = Const.Nil;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_sort_vars_3::exec_static;
		}
	}

	public static class pred_sort_vars_3 extends Code {

		/*
		
		sort_vars([],_3262,_3262,_3272):-call(_3272).
		sort_vars([_3292|_3294],_3296,_3298,_3316):-split_vars(_3294,_3292,_3300,_3302,sort_vars(_3300,_3296,[_3292|_3308],sort_vars(_3302,_3308,_3298,_3316))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_sort_vars_3__1(mach);
		}

		public static Operation exec_pred_sort_vars_3__1(Prolog mach) {
			mach.FillAlternative(pred_sort_vars_3::exec_pred_sort_vars_3__2);
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

		public static Operation exec_pred_sort_vars_3__2(Prolog mach) {
			mach.RemoveChoice();
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var5;
			local_aregs[3] = var6;
			local_aregs[4] = Data.F(flatten.s_sort_vars, var5.Deref(), var3.Deref(),
					Data.F(flatten.s6, var1.Deref(), var7),
					Data.F(flatten.s_sort_vars, var6.Deref(), var7.Deref(), var4.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_split_vars_4::exec_static;
		}
	}

	public static class pred_intersect_sorted_vars_3 extends Code {

		/*
		
		intersect_sorted_vars([],_3366,[],_3374):-cut(1,_3374).
		intersect_sorted_vars(_3398,[],[],_3408):-call(_3408).
		intersect_sorted_vars([_3428|_3430],[_3434|_3436],[_3428|_3442],_3450):-termequal(_3428,_3434,cut(1,intersect_sorted_vars(_3430,_3436,_3442,_3450))).
		intersect_sorted_vars([_3494|_3496],[_3500|_3502],_3504,_3518):-termsmallerthan(_3494,_3500,cut(1,intersect_sorted_vars(_3496,[_3500|_3502],_3504,_3518))).
		intersect_sorted_vars([_3562|_3564],[_3568|_3570],_3572,_3586):-termgreaterthan(_3562,_3568,cut(1,intersect_sorted_vars([_3562|_3564],_3570,_3572,_3586))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_intersect_sorted_vars_3__1(mach);
		}

		public static Operation exec_pred_intersect_sorted_vars_3__1(Prolog mach) {
			mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__2);
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

		public static Operation exec_pred_intersect_sorted_vars_3__2(Prolog mach) {
			mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__3);
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
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_intersect_sorted_vars_3__3(Prolog mach) {
			mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__4);
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s6, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(flatten.s6, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(
					Data.F(flatten.s_intersect_sorted_vars, var2.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_termequal_2::exec_static;
		}

		public static Operation exec_pred_intersect_sorted_vars_3__4(Prolog mach) {
			mach.FillAlternative(pred_intersect_sorted_vars_3::exec_pred_intersect_sorted_vars_3__5);
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s6, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(Data.F(flatten.s_intersect_sorted_vars, var2.Deref(),
					Data.F(flatten.s6, var3.Deref(), var4.Deref()), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_termsmallerthan_2::exec_static;
		}

		public static Operation exec_pred_intersect_sorted_vars_3__5(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(flatten.s6, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(Data.F(flatten.s_intersect_sorted_vars,
					Data.F(flatten.s6, var1.Deref(), var2.Deref()), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_termgreaterthan_2::exec_static;
		}
	}

	public static class pred_split_vars_4 extends Code {

		/*
		
		split_vars([],_3628,[],[],_3638):-call(_3638).
		split_vars([_3660|_3662],_3670,[_3660|_3668],_3672,_3680):-termsmallerthan(_3660,_3670,cut(1,split_vars(_3662,_3670,_3668,_3672,_3680))).
		split_vars([_3728|_3730],_3732,_3734,_3736,_3744):-termequal(_3728,_3732,cut(1,split_vars(_3730,_3732,_3734,_3736,_3744))).
		split_vars([_3792|_3794],_3802,_3804,[_3792|_3800],_3812):-termgreaterthan(_3792,_3802,cut(1,split_vars(_3794,_3802,_3804,_3800,_3812))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_split_vars_4__1(mach);
		}

		public static Operation exec_pred_split_vars_4__1(Prolog mach) {
			mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__2);
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

		public static Operation exec_pred_split_vars_4__2(Prolog mach) {
			mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__3);
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(flatten.s6, var1.Deref(), var4))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(
					Data.F(flatten.s_split_vars, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_termsmallerthan_2::exec_static;
		}

		public static Operation exec_pred_split_vars_4__3(Prolog mach) {
			mach.FillAlternative(pred_split_vars_4::exec_pred_split_vars_4__4);
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(
					Data.F(flatten.s_split_vars, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_termequal_2::exec_static;
		}

		public static Operation exec_pred_split_vars_4__4(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(flatten.s6, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(flatten.s6, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(
					Data.F(flatten.s_split_vars, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_termgreaterthan_2::exec_static;
		}
	}

}
