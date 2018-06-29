package SxxMachine;

import SxxMachine.*;
import SxxMachine.Builtins.*;
import SxxMachine.Metaterm.*;
import SxxMachine.sxx_meta.pred_or_2;
import SxxMachine.sxx_meta.*;
import SxxMachine.sxx_system.*;
import SxxMachine.sxx_read.*;
import SxxMachine.sxx_library.*;

public class nand /*extends CodeFile*/ {
	final static Const s_cut = Data.Intern("cut");
	final static Const s1 = Data.Intern(" inputs:   ");
	final static Const s2 = Data.Intern("+");
	final static Const s3 = Data.Intern(",");
	final static Const s4 = Data.Intern("->");
	final static Const s5 = Data.Intern(".");
	final static Const s6 = Data.Intern(":-");
	final static Const s7 = Data.Intern(";");
	final static Const s8 = Data.Intern("=");
	final static Const s9 = Data.Intern(">=");
	final static Const s_access = Data.Intern("access");
	final static Const s_add_necessary_functions = Data.Intern("add_necessary_functions");
	final static Const s_best_vector = Data.Intern("best_vector");
	final static Const s_bound = Data.Intern("bound");
	final static Const s_call = Data.Intern("call");
	final static Const s_conceivable_inputs = Data.Intern("conceivable_inputs");
	final static Const s_cov = Data.Intern("cov");
	final static Const s_cover_type1 = Data.Intern("cover_type1");
	final static Const s_cover_type2 = Data.Intern("cover_type2");
	final static Const s_cover_vector = Data.Intern("cover_vector");
	final static Const s_dummy = Data.Intern("dummy");
	final static Const s_erase = Data.Intern("erase");
	final static Const s_exclude_if_vector_in_false_set = Data.Intern("exclude_if_vector_in_false_set");
	final static Const s_exf = Data.Intern("exf");
	final static Const s_exmcf = Data.Intern("exmcf");
	final static Const s_exp = Data.Intern("exp");
	final static Const s_fail = Data.Intern("fail");
	final static Const s_false_set = Data.Intern("false_set");
	final static Const s_fcn = Data.Intern("fcn");
	final static Const s_function = Data.Intern("function");
	final static Const s_function_number = Data.Intern("function_number");
	final static Const s_function_type = Data.Intern("function_type");
	final static Const s33 = Data.Intern("gate #");
	final static Const s_immediate_predecessors = Data.Intern("immediate_predecessors");
	final static Const s_immediate_successors = Data.Intern("immediate_successors");
	final static Const s_init_state = Data.Intern("init_state");
	final static Const s_is = Data.Intern("is");
	final static Const s_main = Data.Intern("main");
	final static Const s_max_type = Data.Intern("max_type");
	final static Const s_mcf = Data.Intern("mcf");
	final static Const s_new_function_CIs = Data.Intern("new_function_CIs");
	final static Const s_nf = Data.Intern("nf");
	final static Const s_nl = Data.Intern("nl");
	final static Const s_not = Data.Intern("not");
	final static Const s_or = Data.Intern("or");
	final static Const s_predecessors = Data.Intern("predecessors");
	final static Const s_recorda = Data.Intern("recorda");
	final static Const s_recorded = Data.Intern("recorded");
	final static Const s_search = Data.Intern("search");
	final static Const s_select_vector = Data.Intern("select_vector");
	final static Const s_set = Data.Intern("set");
	final static Const s_set_difference = Data.Intern("set_difference");
	final static Const s_set_intersection = Data.Intern("set_intersection");
	final static Const s_set_member = Data.Intern("set_member");
	final static Const s_set_subset = Data.Intern("set_subset");
	final static Const s_set_union = Data.Intern("set_union");
	final static Const s_smallerorequal = Data.Intern("smallerorequal");
	final static Const s_smallerthan = Data.Intern("smallerthan");
	final static Const s_successors = Data.Intern("successors");
	final static Const s_test_bounds = Data.Intern("test_bounds");
	final static Const s_top = Data.Intern("top");
	final static Const s_true = Data.Intern("true");
	final static Const s_true_set = Data.Intern("true_set");
	final static Const s_type_order = Data.Intern("type_order");
	final static Const s_unify = Data.Intern("unify");
	final static Const s_update_bounds = Data.Intern("update_bounds");
	final static Const s_update_circuit = Data.Intern("update_circuit");
	final static Const s_var = Data.Intern("var");
	final static Const s_vector_cover_type = Data.Intern("vector_cover_type");
	final static Const s_vector_types = Data.Intern("vector_types");
	final static Const s_write = Data.Intern("write");
	final static Const s_write_gates = Data.Intern("write_gates");
	final static Int posint0 = Data.Number(0L);
	final static Int posint1 = Data.Number(1L);
	final static Int posint2 = Data.Number(2L);
	final static Int posint3 = Data.Number(3L);
	final static Int posint4 = Data.Number(4L);
	final static Int posint5 = Data.Number(5L);
	final static Int posint6 = Data.Number(6L);
	final static Int posint7 = Data.Number(7L);
	final static Int posint8 = Data.Number(8L);
	final static Int posint9 = Data.Number(9L);
	final static Int posint10 = Data.Number(10L);
	final static Int posint11 = Data.Number(11L);
	final static Int posint12 = Data.Number(12L);
	final static Int posint13 = Data.Number(13L);
	final static Int posint14 = Data.Number(14L);
	final static Int posint15 = Data.Number(15L);
	final static Int posint16 = Data.Number(16L);
	final static Int posint17 = Data.Number(17L);
	final static Int posint18 = Data.Number(18L);
	final static Int posint19 = Data.Number(19L);
	final static Int posint20 = Data.Number(20L);
	final static Int posint21 = Data.Number(21L);
	final static Int posint22 = Data.Number(22L);
	final static Int posint23 = Data.Number(23L);
	final static Int posint24 = Data.Number(24L);
	final static Int posint25 = Data.Number(25L);
	final static Int posint26 = Data.Number(26L);
	final static Int posint27 = Data.Number(27L);
	final static Int posint28 = Data.Number(28L);
	final static Int posint29 = Data.Number(29L);
	final static Int posint30 = Data.Number(30L);
	final static Int posint31 = Data.Number(31L);
	final static Int posint100 = Data.Number(100L);
	final static Int posint999 = Data.Number(999L);
	final static Operation reg_top_0 = PredTable.Register("top", 0, new pred_top_0());
	final static Operation reg_main_1 = PredTable.Register("main", 1, new pred_main_1());
	final static Operation reg_init_state_4 = PredTable.Register("init_state", 4, new pred_init_state_4());
	final static Operation reg_search_3 = PredTable.Register("search", 3, new pred_search_3());
	final static Operation reg_select_vector_5 = PredTable.Register("select_vector", 5, new pred_select_vector_5());
	final static Operation reg_select_vector_12 = PredTable.Register("select_vector", 12, new pred_select_vector_12());
	final static Operation reg_select_vector_13 = PredTable.Register("select_vector", 13, new pred_select_vector_13());
	final static Operation reg_vector_cover_type_6 = PredTable.Register("vector_cover_type", 6,
			new pred_vector_cover_type_6());
	final static Operation reg_cover_type1_7 = PredTable.Register("cover_type1", 7, new pred_cover_type1_7());
	final static Operation reg_cover_type2_9 = PredTable.Register("cover_type2", 9, new pred_cover_type2_9());
	final static Operation reg_best_vector_12 = PredTable.Register("best_vector", 12, new pred_best_vector_12());
	final static Operation reg_max_type_3 = PredTable.Register("max_type", 3, new pred_max_type_3());
	final static Operation reg_type_order_2 = PredTable.Register("type_order", 2, new pred_type_order_2());
	final static Operation reg_cover_vector_7 = PredTable.Register("cover_vector", 7, new pred_cover_vector_7());
	final static Operation reg_vector_types_1 = PredTable.Register("vector_types", 1, new pred_vector_types_1());
	final static Operation reg_cover_vector_10 = PredTable.Register("cover_vector", 10, new pred_cover_vector_10());
	final static Operation reg_update_circuit_6 = PredTable.Register("update_circuit", 6, new pred_update_circuit_6());
	final static Operation reg_exclude_if_vector_in_false_set_4 = PredTable.Register("exclude_if_vector_in_false_set",
			4, new pred_exclude_if_vector_in_false_set_4());
	final static Operation reg_add_necessary_functions_5 = PredTable.Register("add_necessary_functions", 5,
			new pred_add_necessary_functions_5());
	final static Operation reg_add_necessary_functions_6 = PredTable.Register("add_necessary_functions", 6,
			new pred_add_necessary_functions_6());
	final static Operation reg_new_function_CIs_5 = PredTable.Register("new_function_CIs", 5,
			new pred_new_function_CIs_5());
	final static Operation reg_new_function_CIs_7 = PredTable.Register("new_function_CIs", 7,
			new pred_new_function_CIs_7());
	final static Operation reg_function_type_6 = PredTable.Register("function_type", 6, new pred_function_type_6());
	final static Operation reg_test_bounds_3 = PredTable.Register("test_bounds", 3, new pred_test_bounds_3());
	final static Operation reg_update_bounds_3 = PredTable.Register("update_bounds", 3, new pred_update_bounds_3());
	final static Operation reg_set_2 = PredTable.Register("set", 2, new pred_set_2());
	final static Operation reg_access_2 = PredTable.Register("access", 2, new pred_access_2());
	final static Operation reg_write_gates_1 = PredTable.Register("write_gates", 1, new pred_write_gates_1());
	final static Operation reg_function_3 = PredTable.Register("function", 3, new pred_function_3());
	final static Operation reg_function_number_2 = PredTable.Register("function_number", 2,
			new pred_function_number_2());
	final static Operation reg_true_set_2 = PredTable.Register("true_set", 2, new pred_true_set_2());
	final static Operation reg_false_set_2 = PredTable.Register("false_set", 2, new pred_false_set_2());
	final static Operation reg_conceivable_inputs_2 = PredTable.Register("conceivable_inputs", 2,
			new pred_conceivable_inputs_2());
	final static Operation reg_immediate_predecessors_2 = PredTable.Register("immediate_predecessors", 2,
			new pred_immediate_predecessors_2());
	final static Operation reg_immediate_successors_2 = PredTable.Register("immediate_successors", 2,
			new pred_immediate_successors_2());
	final static Operation reg_predecessors_2 = PredTable.Register("predecessors", 2, new pred_predecessors_2());
	final static Operation reg_successors_2 = PredTable.Register("successors", 2, new pred_successors_2());
	final static Operation reg_set_union_3 = PredTable.Register("set_union", 3, new pred_set_union_3());
	final static Operation reg_set_intersection_3 = PredTable.Register("set_intersection", 3,
			new pred_set_intersection_3());
	final static Operation reg_set_difference_3 = PredTable.Register("set_difference", 3, new pred_set_difference_3());
	final static Operation reg_set_subset_2 = PredTable.Register("set_subset", 2, new pred_set_subset_2());
	final static Operation reg_set_member_2 = PredTable.Register("set_member", 2, new pred_set_member_2());

	public static class pred_top_0 extends Code {

		/*
		
		top(_554):-main(0,_554).
		
		
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
			local_aregs[0] = nand.posint0;
			local_aregs[1] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_main_1::exec_static;
		}
	}

	public static class pred_main_1 extends Code {

		/*
		
		main(_572,_590):-init_state(_572,_574,_576,_578,add_necessary_functions(_574,_576,_578,_580,_582,test_bounds(_574,_580,_582,search(_574,_580,_582,_590)))).
		main(_650,_660):-call(_660).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_main_1__1(mach);
		}

		public static Operation exec_pred_main_1__1(Prolog mach) {
			mach.FillAlternative(pred_main_1::exec_pred_main_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2;
			local_aregs[2] = var3;
			local_aregs[3] = var4;
			local_aregs[4] = Data.F(nand.s_add_necessary_functions, var2.Deref(), var3.Deref(), var4.Deref(), var5,
					var6, Data.F(nand.s_test_bounds, var2.Deref(), var5.Deref(), var6.Deref(),
							Data.F(nand.s_search, var2.Deref(), var5.Deref(), var6.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_init_state_4::exec_static;
		}

		public static Operation exec_pred_main_1__2(Prolog mach) {
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

	public static class pred_init_state_4 extends Code {

		/*
		
		init_state(0,2,3,[function(2,[1,2],[0,3],[],[],[],[],[]),function(1,[2,3],[0,1],[],[],[],[],[]),function(0,[1,3],[0,2],[],[],[],[],[])],_828):-update_bounds(_818,100,_820,_828).
		init_state(1,3,4,[function(3,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_1156):-update_bounds(_1146,100,_1148,_1156).
		init_state(2,3,4,[function(3,[1,2,4,6,7],[0,3,5],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_1484):-update_bounds(_1474,100,_1476,_1484).
		init_state(3,3,4,[function(3,[1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_1812):-update_bounds(_1802,100,_1804,_1812).
		init_state(4,3,5,[function(4,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(3,[1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_2212):-update_bounds(_2202,100,_2204,_2212).
		init_state(5,5,8,[function(7,[1,3,4,6,9,11,12,14,16,18,21,23,24,26,29,31],[0,2,5,7,8,10,13,15,17,19,20,22,25,27,28,30],[],[],[],[],[]),function(6,[2,3,5,6,8,9,12,15,17,18,20,21,24,27,30,31],[0,1,4,7,10,11,13,14,16,19,22,23,25,26,28,29],[],[],[],[],[]),function(5,[7,10,11,13,14,15,19,22,23,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,8,9,12,16,17,18,20,21,24],[],[],[],[],[]),function(4,[16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15],[],[],[],[],[]),function(3,[8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,7,16,17,18,19,20,21,22,23],[],[],[],[],[]),function(2,[4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31],[0,1,2,3,8,9,10,11,16,17,18,19,24,25,26,27],[],[],[],[],[]),function(1,[2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31],[0,1,4,5,8,9,12,13,16,17,20,21,24,25,28,29],[],[],[],[],[]),function(0,[1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31],[0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30],[],[],[],[],[])],_3980):-update_bounds(_3970,21,_3972,_3980).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_init_state_4__1(mach);
		}

		public static Operation exec_pred_init_state_4__1(Prolog mach) {
			mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(nand.posint0)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.posint2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(nand.posint3)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(nand.s5,
					Data.F(nand.s_function, nand.posint2,
							Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint2, Const.Nil)),
							Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint3, Const.Nil)), Const.Nil,
							Const.Nil, Const.Nil, Const.Nil, Const.Nil),
					Data.F(nand.s5,
							Data.F(nand.s_function, nand.posint1,
									Data.F(nand.s5, nand.posint2, Data.F(nand.s5, nand.posint3, Const.Nil)),
									Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint1, Const.Nil)), Const.Nil,
									Const.Nil, Const.Nil, Const.Nil, Const.Nil),
							Data.F(nand.s5,
									Data.F(nand.s_function, nand.posint0,
											Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint3, Const.Nil)),
											Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint2, Const.Nil)),
											Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
									Const.Nil))))))
				return Prolog.Fail0;
			local_aregs[0] = var1;
			local_aregs[1] = nand.posint100;
			local_aregs[2] = var2;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = null;
			return (Operation) pred_update_bounds_3::exec_static;
		}

		public static Operation exec_pred_init_state_4__2(Prolog mach) {
			mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(nand.posint1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.posint3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(nand.posint4)))
				return Prolog.Fail0;
			if (!((areg3)
					.Unify(Data.F(nand.s5,
							Data.F(nand.s_function, nand.posint3, Data.F(nand.s5, nand.posint3,
									Data.F(nand.s5, nand.posint5,
											Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint1,
													Data.F(nand.s5, nand.posint2,
															Data.F(nand.s5, nand.posint4, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
							Data.F(nand.s5, Data.F(nand.s_function, nand.posint2, Data.F(nand.s5, nand.posint4,
									Data.F(nand.s5, nand.posint5,
											Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint1,
													Data.F(nand.s5, nand.posint2,
															Data.F(nand.s5, nand.posint3, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
									Data.F(nand.s5,
											Data.F(nand.s_function, nand.posint1,
													Data.F(nand.s5, nand.posint2, Data.F(nand.s5, nand.posint3,
															Data.F(nand.s5, nand.posint6,
																	Data.F(nand.s5, nand.posint7, Const.Nil)))),
													Data.F(nand.s5, nand.posint0,
															Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint4,
																	Data.F(nand.s5, nand.posint5, Const.Nil)))),
													Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
											Data.F(nand.s5,
													Data.F(nand.s_function, nand.posint0,
															Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint3,
																	Data.F(nand.s5, nand.posint5,
																			Data.F(nand.s5, nand.posint7, Const.Nil)))),
															Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint2,
																	Data.F(nand.s5, nand.posint4,
																			Data.F(nand.s5, nand.posint6, Const.Nil)))),
															Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
													Const.Nil)))))))
				return Prolog.Fail0;
			local_aregs[0] = var1;
			local_aregs[1] = nand.posint100;
			local_aregs[2] = var2;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = null;
			return (Operation) pred_update_bounds_3::exec_static;
		}

		public static Operation exec_pred_init_state_4__3(Prolog mach) {
			mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(nand.posint2)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.posint3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(nand.posint4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(nand.s5,
					Data.F(nand.s_function, nand.posint3,
							Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint2,
									Data.F(nand.s5, nand.posint4,
											Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7, Const.Nil))))),
							Data.F(nand.s5, nand.posint0,
									Data.F(nand.s5, nand.posint3, Data.F(nand.s5, nand.posint5, Const.Nil))),
							Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
					Data.F(nand.s5,
							Data.F(nand.s_function, nand.posint2, Data.F(nand.s5, nand.posint4,
									Data.F(nand.s5, nand.posint5,
											Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint1,
													Data.F(nand.s5, nand.posint2,
															Data.F(nand.s5, nand.posint3, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
							Data.F(nand.s5, Data.F(nand.s_function, nand.posint1, Data.F(nand.s5, nand.posint2,
									Data.F(nand.s5, nand.posint3,
											Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint1,
													Data.F(nand.s5, nand.posint4,
															Data.F(nand.s5, nand.posint5, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
									Data.F(nand.s5,
											Data.F(nand.s_function, nand.posint0,
													Data.F(nand.s5, nand.posint1,
															Data.F(nand.s5, nand.posint3,
																	Data.F(nand.s5, nand.posint5,
																			Data.F(nand.s5, nand.posint7, Const.Nil)))),
													Data.F(nand.s5, nand.posint0,
															Data.F(nand.s5, nand.posint2,
																	Data.F(nand.s5, nand.posint4,
																			Data.F(nand.s5, nand.posint6, Const.Nil)))),
													Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
											Const.Nil)))))))
				return Prolog.Fail0;
			local_aregs[0] = var1;
			local_aregs[1] = nand.posint100;
			local_aregs[2] = var2;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = null;
			return (Operation) pred_update_bounds_3::exec_static;
		}

		public static Operation exec_pred_init_state_4__4(Prolog mach) {
			mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(nand.posint3)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.posint3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(nand.posint4)))
				return Prolog.Fail0;
			if (!((areg3)
					.Unify(Data.F(nand.s5,
							Data.F(nand.s_function, nand.posint3, Data.F(nand.s5, nand.posint1,
									Data.F(nand.s5, nand.posint2,
											Data.F(nand.s5, nand.posint4, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint3,
													Data.F(nand.s5, nand.posint5,
															Data.F(nand.s5, nand.posint6, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
							Data.F(nand.s5, Data.F(nand.s_function, nand.posint2, Data.F(nand.s5, nand.posint4,
									Data.F(nand.s5, nand.posint5,
											Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint1,
													Data.F(nand.s5, nand.posint2,
															Data.F(nand.s5, nand.posint3, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
									Data.F(nand.s5,
											Data.F(nand.s_function, nand.posint1,
													Data.F(nand.s5, nand.posint2, Data.F(nand.s5, nand.posint3,
															Data.F(nand.s5, nand.posint6,
																	Data.F(nand.s5, nand.posint7, Const.Nil)))),
													Data.F(nand.s5, nand.posint0,
															Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint4,
																	Data.F(nand.s5, nand.posint5, Const.Nil)))),
													Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
											Data.F(nand.s5,
													Data.F(nand.s_function, nand.posint0,
															Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint3,
																	Data.F(nand.s5, nand.posint5,
																			Data.F(nand.s5, nand.posint7, Const.Nil)))),
															Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint2,
																	Data.F(nand.s5, nand.posint4,
																			Data.F(nand.s5, nand.posint6, Const.Nil)))),
															Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
													Const.Nil)))))))
				return Prolog.Fail0;
			local_aregs[0] = var1;
			local_aregs[1] = nand.posint100;
			local_aregs[2] = var2;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = null;
			return (Operation) pred_update_bounds_3::exec_static;
		}

		public static Operation exec_pred_init_state_4__5(Prolog mach) {
			mach.FillAlternative(pred_init_state_4::exec_pred_init_state_4__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(nand.posint4)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.posint3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(nand.posint5)))
				return Prolog.Fail0;
			if (!((areg3)
					.Unify(Data.F(nand.s5,
							Data.F(nand.s_function, nand.posint4, Data.F(nand.s5, nand.posint3,
									Data.F(nand.s5, nand.posint5,
											Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint1,
													Data.F(nand.s5, nand.posint2,
															Data.F(nand.s5, nand.posint4, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
							Data.F(nand.s5, Data.F(nand.s_function, nand.posint3, Data.F(nand.s5, nand.posint1,
									Data.F(nand.s5, nand.posint2,
											Data.F(nand.s5, nand.posint4, Data.F(nand.s5, nand.posint7, Const.Nil)))),
									Data.F(nand.s5, nand.posint0,
											Data.F(nand.s5, nand.posint3,
													Data.F(nand.s5, nand.posint5,
															Data.F(nand.s5, nand.posint6, Const.Nil)))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
									Data.F(nand.s5,
											Data.F(nand.s_function, nand.posint2,
													Data.F(nand.s5, nand.posint4, Data.F(nand.s5, nand.posint5,
															Data.F(nand.s5, nand.posint6,
																	Data.F(nand.s5, nand.posint7, Const.Nil)))),
													Data.F(nand.s5, nand.posint0,
															Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint2,
																	Data.F(nand.s5, nand.posint3, Const.Nil)))),
													Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
											Data.F(nand.s5,
													Data.F(nand.s_function, nand.posint1,
															Data.F(nand.s5, nand.posint2, Data.F(
																	nand.s5, nand.posint3,
																	Data.F(nand.s5, nand.posint6,
																			Data.F(nand.s5, nand.posint7, Const.Nil)))),
															Data.F(nand.s5, nand.posint0,
																	Data.F(nand.s5, nand.posint1,
																			Data.F(nand.s5, nand.posint4,
																					Data.F(nand.s5, nand.posint5,
																							Const.Nil)))),
															Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
													Data.F(nand.s5, Data.F(nand.s_function, nand.posint0,
															Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint3,
																	Data.F(nand.s5, nand.posint5,
																			Data.F(nand.s5, nand.posint7, Const.Nil)))),
															Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint2,
																	Data.F(nand.s5, nand.posint4,
																			Data.F(nand.s5, nand.posint6, Const.Nil)))),
															Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
															Const.Nil))))))))
				return Prolog.Fail0;
			local_aregs[0] = var1;
			local_aregs[1] = nand.posint100;
			local_aregs[2] = var2;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = null;
			return (Operation) pred_update_bounds_3::exec_static;
		}

		public static Operation exec_pred_init_state_4__6(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(nand.posint5)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.posint5)))
				return Prolog.Fail0;
			if (!((areg2).Unify(nand.posint8)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(nand.s5, Data.F(nand.s_function, nand.posint7,
					Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint3, Data.F(nand.s5, nand.posint4,
							Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint9, Data.F(nand.s5, nand.posint11,
									Data.F(nand.s5, nand.posint12, Data.F(nand.s5, nand.posint14,
											Data.F(nand.s5, nand.posint16, Data.F(nand.s5, nand.posint18,
													Data.F(nand.s5, nand.posint21, Data.F(nand.s5, nand.posint23,
															Data.F(nand.s5, nand.posint24,
																	Data.F(nand.s5, nand.posint26,
																			Data.F(nand.s5, nand.posint29,
																					Data.F(nand.s5, nand.posint31,
																							Const.Nil)))))))))))))))),
					Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint2, Data.F(nand.s5, nand.posint5,
							Data.F(nand.s5, nand.posint7, Data.F(nand.s5, nand.posint8, Data.F(nand.s5, nand.posint10,
									Data.F(nand.s5, nand.posint13, Data.F(nand.s5, nand.posint15,
											Data.F(nand.s5, nand.posint17, Data.F(nand.s5, nand.posint19,
													Data.F(nand.s5, nand.posint20, Data.F(nand.s5, nand.posint22,
															Data.F(nand.s5, nand.posint25,
																	Data.F(nand.s5, nand.posint27,
																			Data.F(nand.s5, nand.posint28,
																					Data.F(nand.s5, nand.posint30,
																							Const.Nil)))))))))))))))),
					Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
					Data.F(nand.s5, Data.F(nand.s_function, nand.posint6, Data.F(nand.s5, nand.posint2, Data.F(nand.s5,
							nand.posint3,
							Data.F(nand.s5, nand.posint5, Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint8,
									Data.F(nand.s5, nand.posint9, Data.F(nand.s5, nand.posint12, Data.F(nand.s5,
											nand.posint15,
											Data.F(nand.s5, nand.posint17, Data.F(nand.s5, nand.posint18,
													Data.F(nand.s5, nand.posint20, Data.F(nand.s5, nand.posint21,
															Data.F(nand.s5, nand.posint24,
																	Data.F(nand.s5, nand.posint27,
																			Data.F(nand.s5, nand.posint30,
																					Data.F(nand.s5, nand.posint31,
																							Const.Nil)))))))))))))))),
							Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint1, Data.F(nand.s5, nand.posint4,
									Data.F(nand.s5, nand.posint7, Data.F(nand.s5, nand.posint10, Data.F(nand.s5,
											nand.posint11,
											Data.F(nand.s5, nand.posint13, Data.F(nand.s5, nand.posint14, Data.F(
													nand.s5, nand.posint16,
													Data.F(nand.s5, nand.posint19, Data.F(nand.s5, nand.posint22,
															Data.F(nand.s5, nand.posint23, Data.F(nand.s5,
																	nand.posint25,
																	Data.F(nand.s5, nand.posint26,
																			Data.F(nand.s5, nand.posint28,
																					Data.F(nand.s5, nand.posint29,
																							Const.Nil)))))))))))))))),
							Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
							Data.F(nand.s5, Data.F(nand.s_function, nand.posint5, Data.F(nand.s5, nand.posint7, Data.F(
									nand.s5, nand.posint10,
									Data.F(nand.s5, nand.posint11, Data.F(nand.s5, nand.posint13, Data.F(nand.s5,
											nand.posint14,
											Data.F(nand.s5, nand.posint15, Data.F(nand.s5, nand.posint19, Data.F(
													nand.s5, nand.posint22,
													Data.F(nand.s5, nand.posint23, Data.F(nand.s5, nand.posint25,
															Data.F(nand.s5, nand.posint26, Data.F(nand.s5,
																	nand.posint27,
																	Data.F(nand.s5, nand.posint28, Data.F(nand.s5,
																			nand.posint29,
																			Data.F(nand.s5, nand.posint30,
																					Data.F(nand.s5, nand.posint31,
																							Const.Nil)))))))))))))))),
									Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint1, Data.F(nand.s5,
											nand.posint2,
											Data.F(nand.s5, nand.posint3, Data.F(nand.s5, nand.posint4, Data.F(nand.s5,
													nand.posint5,
													Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint8, Data.F(
															nand.s5, nand.posint9,
															Data.F(nand.s5, nand.posint12, Data.F(nand.s5,
																	nand.posint16,
																	Data.F(nand.s5, nand.posint17, Data.F(nand.s5,
																			nand.posint18,
																			Data.F(nand.s5, nand.posint20, Data.F(
																					nand.s5, nand.posint21,
																					Data.F(nand.s5, nand.posint24,
																							Const.Nil)))))))))))))))),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
									Data.F(nand.s5, Data.F(nand.s_function, nand.posint4, Data.F(nand.s5, nand.posint16,
											Data.F(nand.s5, nand.posint17, Data.F(nand.s5, nand.posint18, Data.F(
													nand.s5, nand.posint19,
													Data.F(nand.s5, nand.posint20, Data.F(nand.s5, nand.posint21,
															Data.F(nand.s5, nand.posint22, Data.F(nand.s5,
																	nand.posint23,
																	Data.F(nand.s5, nand.posint24, Data.F(nand.s5,
																			nand.posint25,
																			Data.F(nand.s5, nand.posint26, Data.F(
																					nand.s5, nand.posint27,
																					Data.F(nand.s5, nand.posint28,
																							Data.F(nand.s5,
																									nand.posint29,
																									Data.F(nand.s5,
																											nand.posint30,
																											Data.F(nand.s5,
																													nand.posint31,
																													Const.Nil)))))))))))))))),
											Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint1, Data.F(nand.s5,
													nand.posint2,
													Data.F(nand.s5, nand.posint3, Data.F(nand.s5, nand.posint4, Data.F(
															nand.s5, nand.posint5,
															Data.F(nand.s5, nand.posint6, Data.F(nand.s5, nand.posint7,
																	Data.F(nand.s5, nand.posint8, Data.F(nand.s5,
																			nand.posint9,
																			Data.F(nand.s5, nand.posint10, Data.F(
																					nand.s5, nand.posint11,
																					Data.F(nand.s5, nand.posint12,
																							Data.F(nand.s5,
																									nand.posint13,
																									Data.F(nand.s5,
																											nand.posint14,
																											Data.F(nand.s5,
																													nand.posint15,
																													Const.Nil)))))))))))))))),
											Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
											Data.F(nand.s5, Data.F(nand.s_function, nand.posint3, Data.F(nand.s5,
													nand.posint8,
													Data.F(nand.s5, nand.posint9, Data.F(nand.s5, nand.posint10, Data.F(
															nand.s5, nand.posint11,
															Data.F(nand.s5, nand.posint12, Data.F(nand.s5,
																	nand.posint13,
																	Data.F(nand.s5, nand.posint14, Data.F(nand.s5,
																			nand.posint15,
																			Data.F(nand.s5, nand.posint24, Data.F(
																					nand.s5, nand.posint25,
																					Data.F(nand.s5, nand.posint26,
																							Data.F(nand.s5,
																									nand.posint27,
																									Data.F(nand.s5,
																											nand.posint28,
																											Data.F(nand.s5,
																													nand.posint29,
																													Data.F(nand.s5,
																															nand.posint30,
																															Data.F(nand.s5,
																																	nand.posint31,
																																	Const.Nil)))))))))))))))),
													Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint1, Data.F(
															nand.s5, nand.posint2,
															Data.F(nand.s5, nand.posint3, Data.F(nand.s5, nand.posint4,
																	Data.F(nand.s5, nand.posint5, Data.F(nand.s5,
																			nand.posint6,
																			Data.F(nand.s5, nand.posint7, Data.F(
																					nand.s5, nand.posint16,
																					Data.F(nand.s5, nand.posint17,
																							Data.F(nand.s5,
																									nand.posint18,
																									Data.F(nand.s5,
																											nand.posint19,
																											Data.F(nand.s5,
																													nand.posint20,
																													Data.F(nand.s5,
																															nand.posint21,
																															Data.F(nand.s5,
																																	nand.posint22,
																																	Data.F(nand.s5,
																																			nand.posint23,
																																			Const.Nil)))))))))))))))),
													Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
													Data.F(nand.s5, Data.F(nand.s_function, nand.posint2, Data.F(
															nand.s5, nand.posint4,
															Data.F(nand.s5, nand.posint5, Data.F(nand.s5, nand.posint6,
																	Data.F(nand.s5, nand.posint7, Data.F(nand.s5,
																			nand.posint12,
																			Data.F(nand.s5, nand.posint13, Data.F(
																					nand.s5, nand.posint14,
																					Data.F(nand.s5, nand.posint15,
																							Data.F(nand.s5,
																									nand.posint20,
																									Data.F(nand.s5,
																											nand.posint21,
																											Data.F(nand.s5,
																													nand.posint22,
																													Data.F(nand.s5,
																															nand.posint23,
																															Data.F(nand.s5,
																																	nand.posint28,
																																	Data.F(nand.s5,
																																			nand.posint29,
																																			Data.F(nand.s5,
																																					nand.posint30,
																																					Data.F(nand.s5,
																																							nand.posint31,
																																							Const.Nil)))))))))))))))),
															Data.F(nand.s5, nand.posint0, Data.F(nand.s5, nand.posint1,
																	Data.F(nand.s5, nand.posint2, Data.F(nand.s5,
																			nand.posint3,
																			Data.F(nand.s5, nand.posint8, Data.F(
																					nand.s5, nand.posint9,
																					Data.F(nand.s5, nand.posint10,
																							Data.F(nand.s5,
																									nand.posint11,
																									Data.F(nand.s5,
																											nand.posint16,
																											Data.F(nand.s5,
																													nand.posint17,
																													Data.F(nand.s5,
																															nand.posint18,
																															Data.F(nand.s5,
																																	nand.posint19,
																																	Data.F(nand.s5,
																																			nand.posint24,
																																			Data.F(nand.s5,
																																					nand.posint25,
																																					Data.F(nand.s5,
																																							nand.posint26,
																																							Data.F(nand.s5,
																																									nand.posint27,
																																									Const.Nil)))))))))))))))),
															Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
															Data.F(nand.s5, Data.F(nand.s_function, nand.posint1,
																	Data.F(nand.s5, nand.posint2, Data.F(nand.s5,
																			nand.posint3,
																			Data.F(nand.s5, nand.posint6, Data.F(
																					nand.s5, nand.posint7,
																					Data.F(nand.s5, nand.posint10,
																							Data.F(nand.s5,
																									nand.posint11,
																									Data.F(nand.s5,
																											nand.posint14,
																											Data.F(nand.s5,
																													nand.posint15,
																													Data.F(nand.s5,
																															nand.posint18,
																															Data.F(nand.s5,
																																	nand.posint19,
																																	Data.F(nand.s5,
																																			nand.posint22,
																																			Data.F(nand.s5,
																																					nand.posint23,
																																					Data.F(nand.s5,
																																							nand.posint26,
																																							Data.F(nand.s5,
																																									nand.posint27,
																																									Data.F(nand.s5,
																																											nand.posint30,
																																											Data.F(nand.s5,
																																													nand.posint31,
																																													Const.Nil)))))))))))))))),
																	Data.F(nand.s5, nand.posint0, Data.F(nand.s5,
																			nand.posint1,
																			Data.F(nand.s5, nand.posint4, Data.F(
																					nand.s5, nand.posint5,
																					Data.F(nand.s5, nand.posint8,
																							Data.F(nand.s5,
																									nand.posint9,
																									Data.F(nand.s5,
																											nand.posint12,
																											Data.F(nand.s5,
																													nand.posint13,
																													Data.F(nand.s5,
																															nand.posint16,
																															Data.F(nand.s5,
																																	nand.posint17,
																																	Data.F(nand.s5,
																																			nand.posint20,
																																			Data.F(nand.s5,
																																					nand.posint21,
																																					Data.F(nand.s5,
																																							nand.posint24,
																																							Data.F(nand.s5,
																																									nand.posint25,
																																									Data.F(nand.s5,
																																											nand.posint28,
																																											Data.F(nand.s5,
																																													nand.posint29,
																																													Const.Nil)))))))))))))))),
																	Const.Nil, Const.Nil, Const.Nil, Const.Nil,
																	Const.Nil),
																	Data.F(nand.s5, Data.F(nand.s_function,
																			nand.posint0,
																			Data.F(nand.s5, nand.posint1, Data.F(
																					nand.s5, nand.posint3,
																					Data.F(nand.s5, nand.posint5,
																							Data.F(nand.s5,
																									nand.posint7,
																									Data.F(nand.s5,
																											nand.posint9,
																											Data.F(nand.s5,
																													nand.posint11,
																													Data.F(nand.s5,
																															nand.posint13,
																															Data.F(nand.s5,
																																	nand.posint15,
																																	Data.F(nand.s5,
																																			nand.posint17,
																																			Data.F(nand.s5,
																																					nand.posint19,
																																					Data.F(nand.s5,
																																							nand.posint21,
																																							Data.F(nand.s5,
																																									nand.posint23,
																																									Data.F(nand.s5,
																																											nand.posint25,
																																											Data.F(nand.s5,
																																													nand.posint27,
																																													Data.F(nand.s5,
																																															nand.posint29,
																																															Data.F(nand.s5,
																																																	nand.posint31,
																																																	Const.Nil)))))))))))))))),
																			Data.F(nand.s5, nand.posint0, Data.F(
																					nand.s5, nand.posint2,
																					Data.F(nand.s5, nand.posint4,
																							Data.F(nand.s5,
																									nand.posint6,
																									Data.F(nand.s5,
																											nand.posint8,
																											Data.F(nand.s5,
																													nand.posint10,
																													Data.F(nand.s5,
																															nand.posint12,
																															Data.F(nand.s5,
																																	nand.posint14,
																																	Data.F(nand.s5,
																																			nand.posint16,
																																			Data.F(nand.s5,
																																					nand.posint18,
																																					Data.F(nand.s5,
																																							nand.posint20,
																																							Data.F(nand.s5,
																																									nand.posint22,
																																									Data.F(nand.s5,
																																											nand.posint24,
																																											Data.F(nand.s5,
																																													nand.posint26,
																																													Data.F(nand.s5,
																																															nand.posint28,
																																															Data.F(nand.s5,
																																																	nand.posint30,
																																																	Const.Nil)))))))))))))))),
																			Const.Nil, Const.Nil, Const.Nil, Const.Nil,
																			Const.Nil), Const.Nil)))))))))))
				return Prolog.Fail0;
			local_aregs[0] = var1;
			local_aregs[1] = nand.posint21;
			local_aregs[2] = var2;
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = null;
			return (Operation) pred_update_bounds_3::exec_static;
		}
	}

	public static class pred_search_3 extends Code {

		/*
		
		search(_4010,_4012,_4014,_4034):-select_vector(_4010,_4012,_4014,_4016,_4018,cut(1,cover_vector(_4010,_4012,_4014,_4016,_4018,_4020,_4022,add_necessary_functions(_4010,_4020,_4022,_4024,_4026,test_bounds(_4010,_4024,_4026,search(_4010,_4024,_4026,_4034)))))).
		search(_4124,_4126,_4128,_4136):-update_bounds(_4124,_4126,_4128,fail(_4136)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_search_3__1(mach);
		}

		public static Operation exec_pred_search_3__1(Prolog mach) {
			mach.FillAlternative(pred_search_3::exec_pred_search_3__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
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
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var3)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4;
			local_aregs[4] = var5;
			local_aregs[5] = mach.HC(Data.F(nand.s_cover_vector, var1.Deref(), var2.Deref(), var3.Deref(), var4.Deref(),
					var5.Deref(), var6, var7,
					Data.F(nand.s_add_necessary_functions, var1.Deref(), var6.Deref(), var7.Deref(), var8, var9,
							Data.F(nand.s_test_bounds, var1.Deref(), var8.Deref(), var9.Deref(),
									Data.F(nand.s_search, var1.Deref(), var8.Deref(), var9.Deref(), continuation)))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_select_vector_5::exec_static;
		}

		public static Operation exec_pred_search_3__2(Prolog mach) {
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
			local_aregs[3] = Data.F(nand.s_fail, continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_update_bounds_3::exec_static;
		}
	}

	public static class pred_select_vector_5 extends Code {

		/*
		
		select_vector(_4168,_4170,_4172,_4174,_4176,_4200):-select_vector(_4172,_4168,_4170,_4172,dummy,0,nf,999,_4174,_4176,_4178,_4180,cut(1,not(_4178=cov,not(_4178=nf,_4200)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
			Term aregs[] = mach.RegPull(5);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_select_vector_5__1(mach);
		}

		public static Operation exec_pred_select_vector_5__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
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
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = var3.Deref();
			local_aregs[4] = nand.s_dummy;
			local_aregs[5] = nand.posint0;
			local_aregs[6] = nand.s_nf;
			local_aregs[7] = nand.posint999;
			local_aregs[8] = var4.Deref();
			local_aregs[9] = var5.Deref();
			local_aregs[10] = var6;
			local_aregs[11] = var7;
			local_aregs[12] = mach.HC(Data.F(nand.s_not, Data.F(nand.s8, var6.Deref(), nand.s_cov),
					Data.F(nand.s_not, Data.F(nand.s8, var6.Deref(), nand.s_nf), continuation)));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_select_vector_12::exec_static;
		}
	}

	public static class pred_select_vector_12 extends Code {

		/*
		
		select_vector([_4270|_4272],_4274,_4276,_4278,_4280,_4282,_4284,_4286,_4280,_4282,_4284,_4286,_4296):-function_number(_4270,_4288,smallerthan(_4288,_4274,_4296)).
		select_vector([_4350|_4352],_4354,_4356,_4358,_4360,_4362,_4364,_4366,_4368,_4370,_4372,_4374,_4394):-function_number(_4350,_4376,smallerorequal(_4354,_4376,true_set(_4350,_4378,select_vector(_4378,_4350,_4354,_4356,_4358,_4360,_4362,_4364,_4366,_4380,_4382,_4384,_4386,select_vector(_4352,_4354,_4356,_4358,_4380,_4382,_4384,_4386,_4368,_4370,_4372,_4374,_4394))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
			Term aregs[] = mach.RegPull(12);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_select_vector_12__1(mach);
		}

		public static Operation exec_pred_select_vector_12__1(Prolog mach) {
			mach.FillAlternative(pred_select_vector_12::exec_pred_select_vector_12__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			if (!((areg8).Unify(var6.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var8.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var9.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var10;
			local_aregs[2] = Data.F(nand.s_smallerthan, var10.Deref(), var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_function_number_2::exec_static;
		}

		public static Operation exec_pred_select_vector_12__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			if (!((areg10).Unify(var12)))
				return Prolog.Fail0;
			if (!((areg11).Unify(var13)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var14;
			local_aregs[2] = Data.F(nand.s_smallerorequal, var3.Deref(), var14.Deref(), Data.F(nand.s_true_set,
					var1.Deref(), var15,
					Data.F(nand.s_select_vector, var15.Deref(), var1.Deref(), var3.Deref(), var4.Deref(), var5.Deref(),
							var6.Deref(), var7.Deref(), var8.Deref(), var9.Deref(), var16, var17, var18, var19,
							Data.F(nand.s_select_vector, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(),
									var16.Deref(), var17.Deref(), var18.Deref(), var19.Deref(), var10.Deref(),
									var11.Deref(), var12.Deref(), var13.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_function_number_2::exec_static;
		}
	}

	public static class pred_select_vector_13 extends Code {

		/*
		
		select_vector([],_4512,_4514,_4516,_4518,_4520,_4522,_4524,_4526,_4520,_4522,_4524,_4526,_4536):-call(_4536).
		select_vector([_4576|_4578],_4580,_4582,_4584,_4586,_4588,_4590,_4592,_4594,_4596,_4598,_4600,_4602,_4622):-vector_cover_type(_4582,_4586,_4580,_4576,_4604,_4606,best_vector(_4588,_4590,_4592,_4594,_4580,_4576,_4604,_4606,_4608,_4610,_4612,_4614,select_vector(_4578,_4580,_4582,_4584,_4586,_4608,_4610,_4612,_4614,_4596,_4598,_4600,_4602,_4622))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12],mach.Areg[13]} ;*/
			Term aregs[] = mach.RegPull(13);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_select_vector_13__1(mach);
		}

		public static Operation exec_pred_select_vector_13__1(Prolog mach) {
			mach.FillAlternative(pred_select_vector_13::exec_pred_select_vector_13__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[13];
			Term areg12 = local_aregs[12].Deref();
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg5).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg9).Unify(var5.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var6.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg12).Unify(var8.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_select_vector_13__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[13];
			Term areg12 = local_aregs[12].Deref();
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			if (!((areg10).Unify(var12)))
				return Prolog.Fail0;
			if (!((areg11).Unify(var13)))
				return Prolog.Fail0;
			if (!((areg12).Unify(var14)))
				return Prolog.Fail0;
			local_aregs[0] = var4.Deref();
			local_aregs[1] = var6.Deref();
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var1.Deref();
			local_aregs[4] = var15;
			local_aregs[5] = var16;
			local_aregs[6] = Data.F(nand.s_best_vector, var7.Deref(), var8.Deref(), var9.Deref(), var10.Deref(),
					var3.Deref(), var1.Deref(), var15.Deref(), var16.Deref(), var17, var18, var19, var20,
					Data.F(nand.s_select_vector, var2.Deref(), var3.Deref(), var4.Deref(), var5.Deref(), var6.Deref(),
							var17.Deref(), var18.Deref(), var19.Deref(), var20.Deref(), var11.Deref(), var12.Deref(),
							var13.Deref(), var14.Deref(), continuation));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[13] = local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = null;
			return (Operation) pred_vector_cover_type_6::exec_static;
		}
	}

	public static class pred_vector_cover_type_6 extends Code {

		/*
		
		vector_cover_type(_4734,_4736,_4738,_4740,_4742,_4744,_4762):-immediate_predecessors(_4738,_4746,conceivable_inputs(_4738,_4748,false_set(_4738,_4750,cover_type1(_4746,_4736,_4740,nf,0,_4752,_4754,cover_type2(_4748,_4736,_4734,_4750,_4740,_4752,_4754,_4742,_4744,_4762))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
			Term aregs[] = mach.RegPull(6);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_vector_cover_type_6__1(mach);
		}

		public static Operation exec_pred_vector_cover_type_6__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
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
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var7;
			local_aregs[2] = Data.F(nand.s_conceivable_inputs, var3.Deref(), var8,
					Data.F(nand.s_false_set, var3.Deref(), var9,
							Data.F(nand.s_cover_type1, var7.Deref(), var2.Deref(), var4.Deref(), nand.s_nf,
									nand.posint0, var10, var11,
									Data.F(nand.s_cover_type2, var8.Deref(), var2.Deref(), var1.Deref(), var9.Deref(),
											var4.Deref(), var10.Deref(), var11.Deref(), var5.Deref(), var6.Deref(),
											continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_immediate_predecessors_2::exec_static;
		}
	}

	public static class pred_cover_type1_7 extends Code {

		/*
		
		cover_type1([],_4850,_4852,_4854,_4856,_4854,_4856,_4866):-call(_4866).
		cover_type1([_4894|_4896],_4898,_4900,_4902,_4904,_4906,_4908,_4964):-function(_4894,_4898,_4910,true_set(_4910,_4912,not(set_member(_4900,_4912),cut(1,false_set(_4910,_4920,or((set_member(_4900,_4920)->max_type(_4902,cov,_4934)),max_type(_4902,exp,_4934),is(_4956,_4904+1,cover_type1(_4896,_4898,_4900,_4934,_4956,_4906,_4908,_4964)))))))).
		cover_type1([_5064|_5066],_5068,_5070,_5072,_5074,_5076,_5078,_5086):-cover_type1(_5066,_5068,_5070,_5072,_5074,_5076,_5078,_5086).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
			Term aregs[] = mach.RegPull(7);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_cover_type1_7__1(mach);
		}

		public static Operation exec_pred_cover_type1_7__1(Prolog mach) {
			mach.FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__2);
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
			if (!((areg5).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg6).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_cover_type1_7__2(Prolog mach) {
			mach.FillAlternative(pred_cover_type1_7::exec_pred_cover_type1_7__3);
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var9;
			local_aregs[3] = Data
					.F(nand.s_true_set, var9.Deref(), var10,
							Data.F(nand.s_not, Data.F(nand.s_set_member, var4.Deref(), var10.Deref()),
									mach.HC(Data.F(nand.s_false_set, var9.Deref(), var11, Data.F(nand.s_or,
											Data.F(nand.s4, Data.F(nand.s_set_member, var4.Deref(), var11.Deref()),
													Data.F(nand.s_max_type, var5.Deref(), nand.s_cov, var12)),
											Data.F(nand.s_max_type, var5.Deref(), nand.s_exp, var12.Deref()),
											Data.F(nand.s_is, var13, Data.F(nand.s2, var6.Deref(), nand.posint1),
													Data.F(nand.s_cover_type1, var2.Deref(), var3.Deref(), var4.Deref(),
															var12.Deref(), var13.Deref(), var7.Deref(), var8.Deref(),
															continuation)))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
			return (Operation) pred_function_3::exec_static;
		}

		public static Operation exec_pred_cover_type1_7__3(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var5.Deref();
			local_aregs[4] = var6.Deref();
			local_aregs[5] = var7.Deref();
			local_aregs[6] = var8.Deref();
			local_aregs[7] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_type1_7::exec_static;
		}
	}

	public static class pred_cover_type2_9 extends Code {

		/*
		
		cover_type2([],_5130,_5132,_5134,_5136,_5138,_5140,_5138,_5140,_5150):-call(_5150).
		cover_type2([_5182|_5184],_5186,_5188,_5190,_5192,_5194,_5196,_5198,_5200,_5222):-smallerthan(_5182,_5188,function(_5182,_5186,_5202,false_set(_5202,_5204,set_member(_5192,_5204,cut(1,max_type(_5194,var,_5206,is(_5214,_5196+1,cover_type2(_5184,_5186,_5188,_5190,_5192,_5206,_5214,_5198,_5200,_5222)))))))).
		cover_type2([_5334|_5336],_5338,_5340,_5342,_5344,_5346,_5348,_5350,_5352,_5460):-smallerorequal(_5340,_5334,function(_5334,_5338,_5354,true_set(_5354,_5356,not(set_member(_5344,_5356),cut(1,false_set(_5354,_5364,or((set_member(_5344,_5364)->(set_subset(_5342,_5356)->max_type(_5346,fcn,_5384);max_type(_5346,mcf,_5384))),(set_subset(_5342,_5356)->max_type(_5346,exf,_5384);max_type(_5346,exmcf,_5384)),is(_5452,_5348+1,cover_type2(_5336,_5338,_5340,_5342,_5344,_5384,_5452,_5350,_5352,_5460))))))))).
		cover_type2([_5576|_5578],_5580,_5582,_5584,_5586,_5588,_5590,_5592,_5594,_5602):-cover_type2(_5578,_5580,_5582,_5584,_5586,_5588,_5590,_5592,_5594,_5602).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;*/
			Term aregs[] = mach.RegPull(9);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_cover_type2_9__1(mach);
		}

		public static Operation exec_pred_cover_type2_9__1(Prolog mach) {
			mach.FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[9];
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
			if (!((areg5).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var5.Deref())))
				return Prolog.Fail0;
			if (!((areg8).Unify(var6.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_cover_type2_9__2(Prolog mach) {
			mach.FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[9];
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var4.Deref();
			local_aregs[2] = Data.F(nand.s_function, var1.Deref(), var3.Deref(), var11,
					Data.F(nand.s_false_set, var11.Deref(), var12,
							Data.F(nand.s_set_member, var6.Deref(), var12.Deref(),
									mach.HC(Data.F(nand.s_max_type, var7.Deref(), nand.s_var, var13,
											Data.F(nand.s_is, var14, Data.F(nand.s2, var8.Deref(), nand.posint1),
													Data.F(nand.s_cover_type2, var2.Deref(), var3.Deref(), var4.Deref(),
															var5.Deref(), var6.Deref(), var13.Deref(), var14.Deref(),
															var9.Deref(), var10.Deref(), continuation)))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_cover_type2_9__3(Prolog mach) {
			mach.FillAlternative(pred_cover_type2_9::exec_pred_cover_type2_9__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[9];
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			local_aregs[0] = var4.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = Data.F(nand.s_function, var1.Deref(), var3.Deref(), var11, Data.F(nand.s_true_set,
					var11.Deref(), var12,
					Data.F(nand.s_not, Data.F(nand.s_set_member, var6.Deref(), var12.Deref()), mach.HC(Data.F(
							nand.s_false_set, var11.Deref(), var13,
							Data.F(nand.s_or, Data.F(nand.s4, Data.F(nand.s_set_member, var6.Deref(), var13.Deref()),
									Data.F(nand.s7,
											Data.F(nand.s4, Data.F(nand.s_set_subset, var5.Deref(), var12.Deref()),
													Data.F(nand.s_max_type, var7.Deref(), nand.s_fcn, var14)),
											Data.F(nand.s_max_type, var7.Deref(), nand.s_mcf, var14.Deref()))),
									Data.F(nand.s7,
											Data.F(nand.s4, Data.F(nand.s_set_subset, var5.Deref(), var12.Deref()),
													Data.F(nand.s_max_type, var7.Deref(), nand.s_exf, var14.Deref())),
											Data.F(nand.s_max_type, var7.Deref(), nand.s_exmcf, var14.Deref())),
									Data.F(nand.s_is, var15, Data.F(nand.s2, var8.Deref(), nand.posint1),
											Data.F(nand.s_cover_type2, var2.Deref(), var3.Deref(), var4.Deref(),
													var5.Deref(), var6.Deref(), var14.Deref(), var15.Deref(),
													var9.Deref(), var10.Deref(), continuation))))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_cover_type2_9__4(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[9];
			Term areg8 = local_aregs[8].Deref();
			Term areg7 = local_aregs[7].Deref();
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
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
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var5.Deref();
			local_aregs[4] = var6.Deref();
			local_aregs[5] = var7.Deref();
			local_aregs[6] = var8.Deref();
			local_aregs[7] = var9.Deref();
			local_aregs[8] = var10.Deref();
			local_aregs[9] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_type2_9::exec_static;
		}
	}

	public static class pred_best_vector_12 extends Code {

		/*
		
		best_vector(dummy,_5654,_5656,_5658,_5660,_5662,_5664,_5666,_5660,_5662,_5664,_5666,_5674):-cut(1,_5674).
		best_vector(_5716,_5718,_5720,_5722,dummy,_5724,_5726,_5728,_5716,_5718,_5720,_5722,_5736):-cut(1,_5736).
		best_vector(_5778,_5780,_5782,_5784,_5786,_5788,_5782,_5790,_5778,_5780,_5782,_5784,_5800):-function_number(_5778,_5792,function_number(_5786,_5792,smallerthan(_5784,_5790,cut(1,_5800)))).
		best_vector(_5866,_5868,_5870,_5872,_5874,_5876,_5870,_5878,_5874,_5876,_5870,_5878,_5888):-function_number(_5866,_5880,function_number(_5874,_5880,smallerorequal(_5878,_5872,cut(1,_5888)))).
		best_vector(_5954,_5956,_5958,_5960,_5962,_5964,_5958,_5966,_5954,_5956,_5958,_5960,_5990):-or(_5958=exp,_5958=var,function_number(_5954,_5980,function_number(_5962,_5982,smallerthan(_5982,_5980,cut(1,_5990))))).
		best_vector(_6064,_6066,_6068,_6070,_6072,_6074,_6068,_6076,_6072,_6074,_6068,_6076,_6100):-or(_6068=exp,_6068=var,function_number(_6064,_6090,function_number(_6072,_6092,smallerthan(_6090,_6092,cut(1,_6100))))).
		best_vector(_6174,_6176,_6178,_6180,_6182,_6184,_6178,_6186,_6174,_6176,_6178,_6180,_6216):-not((_6178=exp;_6178=var),function_number(_6174,_6206,function_number(_6182,_6208,smallerthan(_6206,_6208,cut(1,_6216))))).
		best_vector(_6288,_6290,_6292,_6294,_6296,_6298,_6292,_6300,_6296,_6298,_6292,_6300,_6330):-not((_6292=exp;_6292=var),function_number(_6288,_6320,function_number(_6296,_6322,smallerthan(_6322,_6320,cut(1,_6330))))).
		best_vector(_6402,_6404,_6406,_6408,_6410,_6412,_6414,_6416,_6402,_6404,_6406,_6408,_6424):-type_order(_6414,_6406,cut(1,_6424)).
		best_vector(_6474,_6476,_6478,_6480,_6482,_6484,_6486,_6488,_6482,_6484,_6486,_6488,_6496):-type_order(_6478,_6486,cut(1,_6496)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10],mach.Areg[11],mach.Areg[12]} ;*/
			Term aregs[] = mach.RegPull(12);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_best_vector_12__1(mach);
		}

		public static Operation exec_pred_best_vector_12__1(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			Var var7 = Data.V(mach);
			Var var6 = Data.V(mach);
			Var var5 = Data.V(mach);
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(nand.s_dummy)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
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
			if (!((areg8).Unify(var4.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var5.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var6.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var7.Deref())))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_best_vector_12__2(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg4).Unify(nand.s_dummy)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var2.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var4.Deref())))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_best_vector_12__3(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg6).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var2.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var8;
			local_aregs[2] = Data.F(nand.s_function_number, var5.Deref(), var8.Deref(),
					Data.F(nand.s_smallerthan, var4.Deref(), var7.Deref(), mach.HC(continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_function_number_2::exec_static;
		}

		public static Operation exec_pred_best_vector_12__4(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg6).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var5.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var6.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var7.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var8;
			local_aregs[2] = Data.F(nand.s_function_number, var5.Deref(), var8.Deref(),
					Data.F(nand.s_smallerorequal, var7.Deref(), var4.Deref(), mach.HC(continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_function_number_2::exec_static;
		}

		public static Operation exec_pred_best_vector_12__5(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg6).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var2.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(nand.s8, var3.Deref(), nand.s_exp);
			local_aregs[1] = Data.F(nand.s8, var3.Deref(), nand.s_var);
			local_aregs[2] = Data.F(nand.s_function_number, var1.Deref(), var8, Data.F(nand.s_function_number,
					var5.Deref(), var9, Data.F(nand.s_smallerthan, var9.Deref(), var8.Deref(), mach.HC(continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_or_2::exec_static;
		}

		public static Operation exec_pred_best_vector_12__6(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg6).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var5.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var6.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var7.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(nand.s8, var3.Deref(), nand.s_exp);
			local_aregs[1] = Data.F(nand.s8, var3.Deref(), nand.s_var);
			local_aregs[2] = Data.F(nand.s_function_number, var1.Deref(), var8, Data.F(nand.s_function_number,
					var5.Deref(), var9, Data.F(nand.s_smallerthan, var8.Deref(), var9.Deref(), mach.HC(continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_or_2::exec_static;
		}

		public static Operation exec_pred_best_vector_12__7(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg6).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var2.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(nand.s7, Data.F(nand.s8, var3.Deref(), nand.s_exp),
					Data.F(nand.s8, var3.Deref(), nand.s_var));
			local_aregs[1] = Data.F(nand.s_function_number, var1.Deref(), var8, Data.F(nand.s_function_number,
					var5.Deref(), var9, Data.F(nand.s_smallerthan, var8.Deref(), var9.Deref(), mach.HC(continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_not_1::exec_static;
		}

		public static Operation exec_pred_best_vector_12__8(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg6).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg7).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var5.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var6.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var7.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(nand.s7, Data.F(nand.s8, var3.Deref(), nand.s_exp),
					Data.F(nand.s8, var3.Deref(), nand.s_var));
			local_aregs[1] = Data.F(nand.s_function_number, var1.Deref(), var8, Data.F(nand.s_function_number,
					var5.Deref(), var9, Data.F(nand.s_smallerthan, var9.Deref(), var8.Deref(), mach.HC(continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_not_1::exec_static;
		}

		public static Operation exec_pred_best_vector_12__9(Prolog mach) {
			mach.FillAlternative(pred_best_vector_12::exec_pred_best_vector_12__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var2.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var3.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var7.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_type_order_2::exec_static;
		}

		public static Operation exec_pred_best_vector_12__10(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[12];
			Term areg11 = local_aregs[11].Deref();
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
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var5.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var6.Deref())))
				return Prolog.Fail0;
			if (!((areg10).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg11).Unify(var8.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var7.Deref();
			local_aregs[2] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[12] = local_aregs[11] = local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_type_order_2::exec_static;
		}
	}

	public static class pred_max_type_3 extends Code {

		/*
		
		max_type(_6546,_6548,_6546,_6556):-type_order(_6546,_6548,cut(1,_6556)).
		max_type(_6588,_6590,_6590,_6604):-not(type_order(_6588,_6590),cut(1,_6604)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_max_type_3__1(mach);
		}

		public static Operation exec_pred_max_type_3__1(Prolog mach) {
			mach.FillAlternative(pred_max_type_3::exec_pred_max_type_3__2);
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_type_order_2::exec_static;
		}

		public static Operation exec_pred_max_type_3__2(Prolog mach) {
			mach.RemoveChoice();
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
			local_aregs[0] = Data.F(nand.s_type_order, var1.Deref(), var2.Deref());
			local_aregs[1] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = null;
			return (Operation) pred_not_1::exec_static;
		}
	}

	public static class pred_type_order_2 extends Code {

		/*
		
		type_order(cov,exp,_6642):-call(_6642).
		type_order(cov,var,_6666):-call(_6666).
		type_order(cov,fcn,_6690):-call(_6690).
		type_order(cov,mcf,_6714):-call(_6714).
		type_order(cov,exf,_6738):-call(_6738).
		type_order(cov,exmcf,_6762):-call(_6762).
		type_order(cov,nf,_6786):-call(_6786).
		type_order(exp,var,_6810):-call(_6810).
		type_order(exp,fcn,_6834):-call(_6834).
		type_order(exp,mcf,_6858):-call(_6858).
		type_order(exp,exf,_6882):-call(_6882).
		type_order(exp,exmcf,_6906):-call(_6906).
		type_order(exp,nf,_6930):-call(_6930).
		type_order(var,fcn,_6954):-call(_6954).
		type_order(var,mcf,_6978):-call(_6978).
		type_order(var,exf,_7002):-call(_7002).
		type_order(var,exmcf,_7026):-call(_7026).
		type_order(var,nf,_7050):-call(_7050).
		type_order(fcn,mcf,_7074):-call(_7074).
		type_order(fcn,exf,_7098):-call(_7098).
		type_order(fcn,exmcf,_7122):-call(_7122).
		type_order(fcn,nf,_7146):-call(_7146).
		type_order(mcf,exf,_7170):-call(_7170).
		type_order(mcf,exmcf,_7194):-call(_7194).
		type_order(mcf,nf,_7218):-call(_7218).
		type_order(exf,exmcf,_7242):-call(_7242).
		type_order(exf,nf,_7266):-call(_7266).
		type_order(exmcf,nf,_7290):-call(_7290).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_type_order_2__1(mach);
		}

		public static Operation exec_pred_type_order_2__1(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_cov)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exp)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__2(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_cov)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_var)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__3(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_cov)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__4(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_cov)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__5(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_cov)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__6(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_cov)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__7(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_cov)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__8(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_var)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__9(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__10(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__11(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__12);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__12(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__13);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__13(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__14);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__14(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__15);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__15(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__16);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__16(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__17);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__17(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__18);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__18(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__19);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__19(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__20);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__20(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__21);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__21(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__22);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__22(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__23);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__23(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__24);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__24(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__25);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__25(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__26);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__26(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__27);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__27(Prolog mach) {
			mach.FillAlternative(pred_type_order_2::exec_pred_type_order_2__28);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_type_order_2__28(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_cover_vector_7 extends Code {

		/*
		
		cover_vector(_7306,_7308,_7310,_7312,_7314,_7316,_7318,_7332):-immediate_predecessors(_7312,_7320,conceivable_inputs(_7312,_7322,vector_types(_7324,cover_vector(_7324,_7320,_7322,_7312,_7314,_7306,_7308,_7310,_7316,_7318,_7332)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
			Term aregs[] = mach.RegPull(7);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_cover_vector_7__1(mach);
		}

		public static Operation exec_pred_cover_vector_7__1(Prolog mach) {
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
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			local_aregs[0] = var4.Deref();
			local_aregs[1] = var8;
			local_aregs[2] = Data.F(nand.s_conceivable_inputs, var4.Deref(), var9,
					Data.F(nand.s_vector_types, var10,
							Data.F(nand.s_cover_vector, var10.Deref(), var8.Deref(), var9.Deref(), var4.Deref(),
									var5.Deref(), var1.Deref(), var2.Deref(), var3.Deref(), var6.Deref(), var7.Deref(),
									continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_immediate_predecessors_2::exec_static;
		}
	}

	public static class pred_vector_types_1 extends Code {

		/*
		
		vector_types(var,_7412):-call(_7412).
		vector_types(exp,_7434):-call(_7434).
		vector_types(fcn,_7456):-call(_7456).
		vector_types(mcf,_7478):-call(_7478).
		vector_types(exf,_7500):-call(_7500).
		vector_types(exmcf,_7522):-call(_7522).
		vector_types(nf,_7544):-call(_7544).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_vector_types_1__1(mach);
		}

		public static Operation exec_pred_vector_types_1__1(Prolog mach) {
			mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_vector_types_1__2(Prolog mach) {
			mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_vector_types_1__3(Prolog mach) {
			mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_vector_types_1__4(Prolog mach) {
			mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_vector_types_1__5(Prolog mach) {
			mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_vector_types_1__6(Prolog mach) {
			mach.FillAlternative(pred_vector_types_1::exec_pred_vector_types_1__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_vector_types_1__7(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			if (!((areg0).Unify(nand.s_nf)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_cover_vector_10 extends Code {

		/*
		
		cover_vector(exp,[_7560|_7562],_7564,_7566,_7568,_7570,_7572,_7574,_7572,_7576,_7594):-function(_7560,_7574,_7578,true_set(_7578,_7580,not(set_member(_7568,_7580),update_circuit(_7574,_7578,_7566,_7568,_7574,_7576,_7594)))).
		cover_vector(exp,[_7668|_7670],_7672,_7674,_7676,_7678,_7680,_7682,_7680,_7684,_7694):-cover_vector(exp,_7670,_7686,_7674,_7676,_7678,_7680,_7682,_7680,_7684,_7694).
		cover_vector(var,_7756,[_7752|_7754],_7758,_7760,_7762,_7764,_7766,_7764,_7768,_7780):-smallerthan(_7752,_7762,function(_7752,_7766,_7770,false_set(_7770,_7772,set_member(_7760,_7772,update_circuit(_7766,_7770,_7758,_7760,_7766,_7768,_7780))))).
		cover_vector(var,_7868,[_7864|_7866],_7870,_7872,_7874,_7876,_7878,_7876,_7880,_7890):-cover_vector(var,_7882,_7866,_7870,_7872,_7874,_7876,_7878,_7876,_7880,_7890).
		cover_vector(fcn,_7952,[_7948|_7950],_7954,_7956,_7958,_7960,_7962,_7960,_7964,_7980):-smallerorequal(_7958,_7948,function(_7948,_7962,_7966,false_set(_7966,_7968,set_member(_7956,_7968,true_set(_7966,_7970,false_set(_7954,_7972,set_subset(_7972,_7970,update_circuit(_7962,_7966,_7954,_7956,_7962,_7964,_7980)))))))).
		cover_vector(fcn,_8092,[_8088|_8090],_8094,_8096,_8098,_8100,_8102,_8100,_8104,_8114):-cover_vector(fcn,_8106,_8090,_8094,_8096,_8098,_8100,_8102,_8100,_8104,_8114).
		cover_vector(mcf,_8176,[_8172|_8174],_8178,_8180,_8182,_8184,_8186,_8184,_8188,_8210):-smallerorequal(_8182,_8172,function(_8172,_8186,_8190,false_set(_8190,_8192,set_member(_8180,_8192,true_set(_8190,_8194,false_set(_8178,_8196,not(set_subset(_8196,_8194),update_circuit(_8186,_8190,_8178,_8180,_8186,_8188,_8210)))))))).
		cover_vector(mcf,_8320,[_8316|_8318],_8322,_8324,_8326,_8328,_8330,_8328,_8332,_8342):-cover_vector(mcf,_8334,_8318,_8322,_8324,_8326,_8328,_8330,_8328,_8332,_8342).
		cover_vector(exf,_8404,[_8400|_8402],_8406,_8408,_8410,_8412,_8414,_8412,_8416,_8444):-smallerorequal(_8410,_8400,function(_8400,_8414,_8418,false_set(_8418,_8420,not(set_member(_8408,_8420),true_set(_8418,_8428,not(set_member(_8408,_8428),false_set(_8406,_8436,set_subset(_8436,_8428,update_circuit(_8414,_8418,_8406,_8408,_8414,_8416,_8444))))))))).
		cover_vector(exf,_8560,[_8556|_8558],_8562,_8564,_8566,_8568,_8570,_8568,_8572,_8582):-cover_vector(exf,_8574,_8558,_8562,_8564,_8566,_8568,_8570,_8568,_8572,_8582).
		cover_vector(exmcf,_8644,[_8640|_8642],_8646,_8648,_8650,_8652,_8654,_8652,_8656,_8690):-smallerorequal(_8650,_8640,function(_8640,_8654,_8658,false_set(_8658,_8660,not(set_member(_8648,_8660),true_set(_8658,_8668,not(set_member(_8648,_8668),false_set(_8646,_8676,not(set_subset(_8676,_8668),update_circuit(_8654,_8658,_8646,_8648,_8654,_8656,_8690))))))))).
		cover_vector(exmcf,_8804,[_8800|_8802],_8806,_8808,_8810,_8812,_8814,_8812,_8816,_8826):-cover_vector(exmcf,_8818,_8802,_8806,_8808,_8810,_8812,_8814,_8812,_8816,_8826).
		cover_vector(nf,_8882,_8884,_8886,_8888,_8890,_8892,_8894,_8896,_8898,_8942):-is(_8896,_8892+1,false_set(_8886,_8906,new_function_CIs(_8894,function(_8892,_8906,[_8888],[],[],[],[],[]),_8890,_8932,_8934,update_circuit(_8932,_8934,_8886,_8888,_8932,_8898,_8942)))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9],mach.Areg[10]} ;*/
			Term aregs[] = mach.RegPull(10);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_cover_vector_10__1(mach);
		}

		public static Operation exec_pred_cover_vector_10__1(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1, var2))))
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
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var8.Deref();
			local_aregs[2] = var10;
			local_aregs[3] = Data.F(nand.s_true_set, var10.Deref(), var11,
					Data.F(nand.s_not, Data.F(nand.s_set_member, var5.Deref(), var11.Deref()),
							Data.F(nand.s_update_circuit, var8.Deref(), var10.Deref(), var4.Deref(), var5.Deref(),
									var8.Deref(), var9.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
			return (Operation) pred_function_3::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__2(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_exp)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1, var2))))
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
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = nand.s_exp;
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var10;
			local_aregs[3] = var4.Deref();
			local_aregs[4] = var5.Deref();
			local_aregs[5] = var6.Deref();
			local_aregs[6] = var7.Deref();
			local_aregs[7] = var8.Deref();
			local_aregs[8] = var7.Deref();
			local_aregs[9] = var9.Deref();
			local_aregs[10] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_vector_10::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__3(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var6.Deref();
			local_aregs[2] = Data.F(nand.s_function, var2.Deref(), var8.Deref(), var10,
					Data.F(nand.s_false_set, var10.Deref(), var11,
							Data.F(nand.s_set_member, var5.Deref(), var11.Deref(),
									Data.F(nand.s_update_circuit, var8.Deref(), var10.Deref(), var4.Deref(),
											var5.Deref(), var8.Deref(), var9.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__4(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_var)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = nand.s_var;
			local_aregs[1] = var10;
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4.Deref();
			local_aregs[4] = var5.Deref();
			local_aregs[5] = var6.Deref();
			local_aregs[6] = var7.Deref();
			local_aregs[7] = var8.Deref();
			local_aregs[8] = var7.Deref();
			local_aregs[9] = var9.Deref();
			local_aregs[10] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_vector_10::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__5(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__6);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var6.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = Data.F(nand.s_function, var2.Deref(), var8.Deref(), var10,
					Data.F(nand.s_false_set, var10.Deref(), var11,
							Data.F(nand.s_set_member, var5.Deref(), var11.Deref(),
									Data.F(nand.s_true_set, var10.Deref(), var12,
											Data.F(nand.s_false_set, var4.Deref(), var13,
													Data.F(nand.s_set_subset, var13.Deref(), var12.Deref(),
															Data.F(nand.s_update_circuit, var8.Deref(), var10.Deref(),
																	var4.Deref(), var5.Deref(), var8.Deref(),
																	var9.Deref(), continuation)))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__6(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__7);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_fcn)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = nand.s_fcn;
			local_aregs[1] = var10;
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4.Deref();
			local_aregs[4] = var5.Deref();
			local_aregs[5] = var6.Deref();
			local_aregs[6] = var7.Deref();
			local_aregs[7] = var8.Deref();
			local_aregs[8] = var7.Deref();
			local_aregs[9] = var9.Deref();
			local_aregs[10] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_vector_10::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__7(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__8);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var6.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = Data.F(nand.s_function, var2.Deref(), var8.Deref(), var10, Data.F(nand.s_false_set,
					var10.Deref(), var11,
					Data.F(nand.s_set_member, var5.Deref(), var11.Deref(),
							Data.F(nand.s_true_set, var10.Deref(), var12,
									Data.F(nand.s_false_set, var4.Deref(), var13,
											Data.F(nand.s_not, Data.F(nand.s_set_subset, var13.Deref(), var12.Deref()),
													Data.F(nand.s_update_circuit, var8.Deref(), var10.Deref(),
															var4.Deref(), var5.Deref(), var8.Deref(), var9.Deref(),
															continuation)))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__8(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__9);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_mcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = nand.s_mcf;
			local_aregs[1] = var10;
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4.Deref();
			local_aregs[4] = var5.Deref();
			local_aregs[5] = var6.Deref();
			local_aregs[6] = var7.Deref();
			local_aregs[7] = var8.Deref();
			local_aregs[8] = var7.Deref();
			local_aregs[9] = var9.Deref();
			local_aregs[10] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_vector_10::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__9(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__10);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_exf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var6.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = Data.F(nand.s_function, var2.Deref(), var8.Deref(), var10, Data.F(nand.s_false_set,
					var10.Deref(), var11,
					Data.F(nand.s_not, Data.F(nand.s_set_member, var5.Deref(), var11.Deref()),
							Data.F(nand.s_true_set, var10.Deref(), var12,
									Data.F(nand.s_not, Data.F(nand.s_set_member, var5.Deref(), var12.Deref()),
											Data.F(nand.s_false_set, var4.Deref(), var13,
													Data.F(nand.s_set_subset, var13.Deref(), var12.Deref(),
															Data.F(nand.s_update_circuit, var8.Deref(), var10.Deref(),
																	var4.Deref(), var5.Deref(), var8.Deref(),
																	var9.Deref(), continuation))))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__10(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__11);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_exf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = nand.s_exf;
			local_aregs[1] = var10;
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4.Deref();
			local_aregs[4] = var5.Deref();
			local_aregs[5] = var6.Deref();
			local_aregs[6] = var7.Deref();
			local_aregs[7] = var8.Deref();
			local_aregs[8] = var7.Deref();
			local_aregs[9] = var9.Deref();
			local_aregs[10] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_vector_10::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__11(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__12);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var6.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = Data.F(nand.s_function, var2.Deref(), var8.Deref(), var10, Data.F(nand.s_false_set,
					var10.Deref(), var11,
					Data.F(nand.s_not, Data.F(nand.s_set_member, var5.Deref(), var11.Deref()), Data.F(nand.s_true_set,
							var10.Deref(), var12,
							Data.F(nand.s_not, Data.F(nand.s_set_member, var5.Deref(), var12.Deref()),
									Data.F(nand.s_false_set, var4.Deref(), var13,
											Data.F(nand.s_not, Data.F(nand.s_set_subset, var13.Deref(), var12.Deref()),
													Data.F(nand.s_update_circuit, var8.Deref(), var10.Deref(),
															var4.Deref(), var5.Deref(), var8.Deref(), var9.Deref(),
															continuation))))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_smallerorequal_2::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__12(Prolog mach) {
			mach.FillAlternative(pred_cover_vector_10::exec_pred_cover_vector_10__13);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_exmcf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg3).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg5).Unify(var6)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg7).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg8).Unify(var7.Deref())))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = nand.s_exmcf;
			local_aregs[1] = var10;
			local_aregs[2] = var3.Deref();
			local_aregs[3] = var4.Deref();
			local_aregs[4] = var5.Deref();
			local_aregs[5] = var6.Deref();
			local_aregs[6] = var7.Deref();
			local_aregs[7] = var8.Deref();
			local_aregs[8] = var7.Deref();
			local_aregs[9] = var9.Deref();
			local_aregs[10] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_cover_vector_10::exec_static;
		}

		public static Operation exec_pred_cover_vector_10__13(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[10];
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
			if (!((areg0).Unify(nand.s_nf)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
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
			if (!((areg8).Unify(var8)))
				return Prolog.Fail0;
			if (!((areg9).Unify(var9)))
				return Prolog.Fail0;
			local_aregs[0] = var8.Deref();
			local_aregs[1] = Data.F(nand.s2, var6.Deref(), nand.posint1);
			local_aregs[2] = Data.F(nand.s_false_set, var3.Deref(), var10, Data.F(nand.s_new_function_CIs, var7.Deref(),
					Data.F(nand.s_function, var6.Deref(), var10.Deref(), Data.F(nand.s5, var4.Deref(), Const.Nil),
							Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
					var5.Deref(), var11, var12, Data.F(nand.s_update_circuit, var11.Deref(), var12.Deref(),
							var3.Deref(), var4.Deref(), var11.Deref(), var9.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[10] = local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_update_circuit_6 extends Code {

		/*
		
		update_circuit([],_9020,_9022,_9024,_9026,[],_9036):-call(_9036).
		update_circuit([function(_9062,_9064,_9066,_9068,_9070,_9072,_9074,_9076)|_9082],_9108,_9110,_9112,_9114,[function(_9062,_9088,_9090,_9092,_9094,_9096,_9098,_9100)|_9106],_9560):-unify(function(_9118,_9120,_9122,_9124,_9126,_9128,_9130,_9132),_9108,unify(function(_9136,_9138,_9140,_9142,_9144,_9146,_9148,_9150),_9110,set_union([_9118],_9130,_9158,set_union([_9136],_9150,_9166,or((_9062=_9136->set_union(_9064,_9122,_9180)),_9180=_9064,or((_9062=_9118->set_union(_9180,_9140,_9206)),_9206=_9180,or(((set_member(_9062,_9126);set_member(_9062,_9128))->set_union(_9206,[_9112],_9088)),_9088=_9206,or((_9062=_9118->set_union(_9066,[_9112],_9090)),_9090=_9066,or(((set_member(_9062,_9130);_9062=_9118)->set_difference(_9068,_9166,_9320)),_9320=_9068,or((set_member(_9118,_9068),set_member(_9112,_9066)->set_difference(_9320,[_9118],_9364)),_9364=_9320,or((_9062=_9118->exclude_if_vector_in_false_set(_9364,_9114,_9112,_9392)),_9392=_9364,or((_9062=_9136->set_difference(_9392,[_9118],_9092)),_9092=_9392,or((_9062=_9136->set_union(_9070,[_9118],_9094)),_9094=_9070,or((_9062=_9118->set_union(_9072,[_9136],_9096)),_9096=_9072,or((set_member(_9062,_9166)->set_union(_9074,_9158,_9098)),_9098=_9074,or((set_member(_9062,_9158)->set_union(_9076,_9166,_9100)),_9100=_9076,update_circuit(_9082,_9108,_9110,_9112,_9114,_9106,_9560))))))))))))))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
			Term aregs[] = mach.RegPull(6);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_update_circuit_6__1(mach);
		}

		public static Operation exec_pred_update_circuit_6__1(Prolog mach) {
			mach.FillAlternative(pred_update_circuit_6::exec_pred_update_circuit_6__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
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
			if (!((areg5).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_update_circuit_6__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(
					Data.F(nand.s5, Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8), var9))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var10)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var11)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var12)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var13)))
				return Prolog.Fail0;
			if (!((areg5).Unify(Data.F(nand.s5,
					Data.F(nand.s_function, var1.Deref(), var14, var15, var16, var17, var18, var19, var20), var21))))
				return Prolog.Fail0;
			local_aregs[0] = Data.F(nand.s_function, var22, var23, var24, var25, var26, var27, var28, var29);
			local_aregs[1] = var10.Deref();
			local_aregs[2] = Data.F(nand.s_unify,
					Data.F(nand.s_function, var30, var31, var32, var33, var34, var35, var36, var37), var11.Deref(),
					Data.F(nand.s_set_union, Data.F(nand.s5, var22.Deref(), Const.Nil), var28.Deref(), var38, Data.F(
							nand.s_set_union, Data.F(nand.s5, var30.Deref(), Const.Nil), var37.Deref(), var39,
							Data.F(nand.s_or,
									Data.F(nand.s4, Data.F(nand.s8, var1.Deref(), var30.Deref()),
											Data.F(nand.s_set_union, var2.Deref(), var24.Deref(), var40)),
									Data.F(nand.s8, var40.Deref(), var2.Deref()),
									Data.F(nand.s_or,
											Data.F(nand.s4, Data.F(nand.s8, var1.Deref(), var22.Deref()),
													Data.F(nand.s_set_union, var40.Deref(), var32.Deref(), var41)),
											Data.F(nand.s8, var41.Deref(), var40.Deref()),
											Data.F(nand.s_or,
													Data.F(nand.s4, Data.F(nand.s7,
															Data.F(nand.s_set_member, var1.Deref(), var26.Deref()),
															Data.F(nand.s_set_member, var1.Deref(), var27.Deref())),
															Data.F(nand.s_set_union, var41.Deref(),
																	Data.F(nand.s5, var12.Deref(), Const.Nil),
																	var14.Deref())),
													Data.F(nand.s8, var14.Deref(), var41.Deref()),
													Data.F(nand.s_or,
															Data.F(nand.s4,
																	Data.F(nand.s8, var1.Deref(), var22.Deref()),
																	Data.F(nand.s_set_union, var3.Deref(),
																			Data.F(nand.s5, var12.Deref(), Const.Nil),
																			var15.Deref())),
															Data.F(nand.s8, var15.Deref(), var3.Deref()),
															Data.F(nand.s_or, Data.F(nand.s4, Data.F(nand.s7,
																	Data.F(nand.s_set_member, var1.Deref(),
																			var28.Deref()),
																	Data.F(nand.s8, var1.Deref(), var22.Deref())),
																	Data.F(nand.s_set_difference, var4.Deref(),
																			var39.Deref(), var42)),
																	Data.F(nand.s8, var42.Deref(), var4.Deref()),
																	Data.F(nand.s_or, Data.F(nand.s4, Data.F(nand.s3,
																			Data.F(nand.s_set_member, var22.Deref(),
																					var4.Deref()),
																			Data.F(nand.s_set_member, var12.Deref(),
																					var3.Deref())),
																			Data.F(nand.s_set_difference, var42.Deref(),
																					Data.F(nand.s5, var22.Deref(),
																							Const.Nil),
																					var43)),
																			Data.F(nand.s8, var43.Deref(),
																					var42.Deref()),
																			Data.F(nand.s_or, Data.F(nand.s4,
																					Data.F(nand.s8, var1.Deref(),
																							var22.Deref()),
																					Data.F(nand.s_exclude_if_vector_in_false_set,
																							var43.Deref(),
																							var13.Deref(),
																							var12.Deref(), var44)),
																					Data.F(nand.s8, var44.Deref(),
																							var43.Deref()),
																					Data.F(nand.s_or, Data.F(nand.s4,
																							Data.F(nand.s8, var1
																									.Deref(),
																									var30.Deref()),
																							Data.F(nand.s_set_difference,
																									var44.Deref(),
																									Data.F(nand.s5,
																											var22.Deref(),
																											Const.Nil),
																									var16.Deref())),
																							Data.F(nand.s8,
																									var16.Deref(),
																									var44.Deref()),
																							Data.F(nand.s_or, Data.F(
																									nand.s4,
																									Data.F(nand.s8, var1
																											.Deref(),
																											var30.Deref()),
																									Data.F(nand.s_set_union,
																											var5.Deref(),
																											Data.F(nand.s5,
																													var22.Deref(),
																													Const.Nil),
																											var17.Deref())),
																									Data.F(nand.s8,
																											var17.Deref(),
																											var5.Deref()),
																									Data.F(nand.s_or,
																											Data.F(nand.s4,
																													Data.F(nand.s8,
																															var1.Deref(),
																															var22.Deref()),
																													Data.F(nand.s_set_union,
																															var6.Deref(),
																															Data.F(nand.s5,
																																	var30.Deref(),
																																	Const.Nil),
																															var18.Deref())),
																											Data.F(nand.s8,
																													var18.Deref(),
																													var6.Deref()),
																											Data.F(nand.s_or,
																													Data.F(nand.s4,
																															Data.F(nand.s_set_member,
																																	var1.Deref(),
																																	var39.Deref()),
																															Data.F(nand.s_set_union,
																																	var7.Deref(),
																																	var38.Deref(),
																																	var19.Deref())),
																													Data.F(nand.s8,
																															var19.Deref(),
																															var7.Deref()),
																													Data.F(nand.s_or,
																															Data.F(nand.s4,
																																	Data.F(nand.s_set_member,
																																			var1.Deref(),
																																			var38.Deref()),
																																	Data.F(nand.s_set_union,
																																			var8.Deref(),
																																			var39.Deref(),
																																			var20.Deref())),
																															Data.F(nand.s8,
																																	var20.Deref(),
																																	var8.Deref()),
																															Data.F(nand.s_update_circuit,
																																	var9.Deref(),
																																	var10.Deref(),
																																	var11.Deref(),
																																	var12.Deref(),
																																	var13.Deref(),
																																	var21.Deref(),
																																	continuation))))))))))))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_unify_2::exec_static;
		}
	}

	public static class pred_exclude_if_vector_in_false_set_4 extends Code {

		/*
		
		exclude_if_vector_in_false_set([],_9732,_9734,[],_9744):-call(_9744).
		exclude_if_vector_in_false_set([_9766|_9768],_9770,_9772,_9774,_9786):-function(_9766,_9770,_9776,false_set(_9776,_9778,set_member(_9772,_9778,cut(1,exclude_if_vector_in_false_set(_9768,_9770,_9772,_9774,_9786))))).
		exclude_if_vector_in_false_set([_9852|_9854],_9862,_9864,[_9852|_9860],_9872):-exclude_if_vector_in_false_set(_9854,_9862,_9864,_9860,_9872).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;*/
			Term aregs[] = mach.RegPull(4);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_exclude_if_vector_in_false_set_4__1(mach);
		}

		public static Operation exec_pred_exclude_if_vector_in_false_set_4__1(Prolog mach) {
			mach.FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_exclude_if_vector_in_false_set_4__2(Prolog mach) {
			mach.FillAlternative(pred_exclude_if_vector_in_false_set_4::exec_pred_exclude_if_vector_in_false_set_4__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[4];
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var6;
			local_aregs[3] = Data.F(nand.s_false_set, var6.Deref(), var7,
					Data.F(nand.s_set_member, var4.Deref(), var7.Deref(),
							mach.HC(Data.F(nand.s_exclude_if_vector_in_false_set, var2.Deref(), var3.Deref(),
									var4.Deref(), var5.Deref(), continuation))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[4] = null;
			return (Operation) pred_function_3::exec_static;
		}

		public static Operation exec_pred_exclude_if_vector_in_false_set_4__3(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(nand.s5, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var5.Deref();
			local_aregs[4] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_exclude_if_vector_in_false_set_4::exec_static;
		}
	}

	public static class pred_add_necessary_functions_5 extends Code {

		/*
		
		add_necessary_functions(_9904,_9906,_9908,_9910,_9912,_9920):-add_necessary_functions(_9904,_9904,_9906,_9908,_9910,_9912,_9920).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
			Term aregs[] = mach.RegPull(5);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_add_necessary_functions_5__1(mach);
		}

		public static Operation exec_pred_add_necessary_functions_5__1(Prolog mach) {
			mach.RemoveChoice();
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
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = var2.Deref();
			local_aregs[3] = var3.Deref();
			local_aregs[4] = var4.Deref();
			local_aregs[5] = var5.Deref();
			local_aregs[6] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_add_necessary_functions_6::exec_static;
		}
	}

	public static class pred_add_necessary_functions_6 extends Code {

		/*
		
		add_necessary_functions(_9958,_9960,_9958,_9962,_9958,_9962,_9970):-cut(1,_9970).
		add_necessary_functions(_10000,_10002,_10004,_10006,_10008,_10010,_10072):-function(_10000,_10006,_10012,function_type(_10002,_10004,_10006,_10012,nf,_10014,cut(1,false_set(_10012,_10016,new_function_CIs(_10006,function(_10004,_10016,[_10014],[],[],[],[],[]),_10002,_10042,_10044,function(_10000,_10042,_10046,update_circuit(_10042,_10044,_10046,_10014,_10042,_10048,is(_10056,_10004+1,is(_10064,_10000+1,add_necessary_functions(_10064,_10002,_10056,_10048,_10008,_10010,_10072)))))))))).
		add_necessary_functions(_10208,_10210,_10212,_10214,_10216,_10218,_10234):-is(_10226,_10208+1,add_necessary_functions(_10226,_10210,_10212,_10214,_10216,_10218,_10234)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
			Term aregs[] = mach.RegPull(6);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_add_necessary_functions_6__1(mach);
		}

		public static Operation exec_pred_add_necessary_functions_6__1(Prolog mach) {
			mach.FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
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
			if (!((areg2).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(var1.Deref())))
				return Prolog.Fail0;
			if (!((areg5).Unify(var3.Deref())))
				return Prolog.Fail0;
			mach.DoCut(mach.CUTB);
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_add_necessary_functions_6__2(Prolog mach) {
			mach.FillAlternative(pred_add_necessary_functions_6::exec_pred_add_necessary_functions_6__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			local_aregs[1] = var4.Deref();
			local_aregs[2] = var7;
			local_aregs[3] = Data.F(nand.s_function_type, var2.Deref(), var3.Deref(), var4.Deref(), var7.Deref(),
					nand.s_nf, var8,
					mach.HC(Data.F(nand.s_false_set, var7.Deref(), var9, Data.F(nand.s_new_function_CIs, var4.Deref(),
							Data.F(nand.s_function, var3.Deref(), var9.Deref(),
									Data.F(nand.s5, var8.Deref(),
											Const.Nil),
									Const.Nil, Const.Nil, Const.Nil, Const.Nil, Const.Nil),
							var2.Deref(), var10, var11,
							Data.F(nand.s_function, var1.Deref(), var10.Deref(), var12, Data.F(nand.s_update_circuit,
									var10.Deref(), var11.Deref(), var12.Deref(), var8.Deref(), var10.Deref(), var13,
									Data.F(nand.s_is, var14, Data.F(nand.s2, var3.Deref(), nand.posint1),
											Data.F(nand.s_is, var15, Data.F(nand.s2, var1.Deref(), nand.posint1),
													Data.F(nand.s_add_necessary_functions, var15.Deref(), var2.Deref(),
															var14.Deref(), var13.Deref(), var5.Deref(), var6.Deref(),
															continuation)))))))));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
			return (Operation) pred_function_3::exec_static;
		}

		public static Operation exec_pred_add_necessary_functions_6__3(Prolog mach) {
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
			local_aregs[1] = Data.F(nand.s2, var1.Deref(), nand.posint1);
			local_aregs[2] = Data.F(nand.s_add_necessary_functions, var7.Deref(), var2.Deref(), var3.Deref(),
					var4.Deref(), var5.Deref(), var6.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_is_2::exec_static;
		}
	}

	public static class pred_new_function_CIs_5 extends Code {

		/*
		
		new_function_CIs(_10306,function(_10284,_10286,_10288,_10290,_10292,_10294,_10296,_10298),_10308,[_10302|_10304],_10302,_10336):-new_function_CIs(_10306,_10284,_10288,_10308,_10304,[],_10310,unify(function(_10284,_10286,_10288,_10310,_10292,_10294,_10296,_10298),_10302,_10336)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5]} ;*/
			Term aregs[] = mach.RegPull(5);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_new_function_CIs_5__1(mach);
		}

		public static Operation exec_pred_new_function_CIs_5__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[5];
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
			if (!((areg1).Unify(Data.F(nand.s_function, var2, var3, var4, var5, var6, var7, var8, var9))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var10)))
				return Prolog.Fail0;
			if (!((areg3).Unify(Data.F(nand.s5, var11, var12))))
				return Prolog.Fail0;
			if (!((areg4).Unify(var11.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var2.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var10.Deref();
			local_aregs[4] = var12.Deref();
			local_aregs[5] = Const.Nil;
			local_aregs[6] = var13;
			local_aregs[7] = Data
					.F(nand.s_unify,
							Data.F(nand.s_function, var2.Deref(), var3.Deref(), var4.Deref(), var13.Deref(),
									var6.Deref(), var7.Deref(), var8.Deref(), var9.Deref()),
							var11.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_new_function_CIs_7::exec_static;
		}
	}

	public static class pred_new_function_CIs_7 extends Code {

		/*
		
		new_function_CIs([],_10384,_10386,_10388,[],_10390,_10390,_10400):-call(_10400).
		new_function_CIs([function(_10428,_10430,_10432,_10434,_10436,_10438,_10440,_10442)|_10448],_10474,_10476,_10478,[function(_10428,_10430,_10432,_10458,_10436,_10438,_10440,_10442)|_10472],_10480,_10482,_10528):-set_intersection(_10476,_10432,[],cut(1,or((_10428>=_10478->set_union(_10434,[_10474],_10458)),_10458=_10434,new_function_CIs(_10448,_10474,_10476,_10478,_10472,[_10428|_10480],_10482,_10528)))).
		new_function_CIs([_10598|_10600],_10608,_10610,_10612,[_10598|_10606],_10614,_10616,_10624):-new_function_CIs(_10600,_10608,_10610,_10612,_10606,_10614,_10616,_10624).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6],mach.Areg[7]} ;*/
			Term aregs[] = mach.RegPull(7);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_new_function_CIs_7__1(mach);
		}

		public static Operation exec_pred_new_function_CIs_7__1(Prolog mach) {
			mach.FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__2);
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
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg4).Unify(Const.Nil)))
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

		public static Operation exec_pred_new_function_CIs_7__2(Prolog mach) {
			mach.FillAlternative(pred_new_function_CIs_7::exec_pred_new_function_CIs_7__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[7];
			Term areg6 = local_aregs[6].Deref();
			Term areg5 = local_aregs[5].Deref();
			Term areg4 = local_aregs[4].Deref();
			Term areg3 = local_aregs[3].Deref();
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
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
			if (!((areg0).Unify(
					Data.F(nand.s5, Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8), var9))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var10)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var11)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var12)))
				return Prolog.Fail0;
			if (!((areg4).Unify(Data.F(nand.s5, Data.F(nand.s_function, var1.Deref(), var2.Deref(), var3.Deref(), var13,
					var5.Deref(), var6.Deref(), var7.Deref(), var8.Deref()), var14))))
				return Prolog.Fail0;
			if (!((areg5).Unify(var15)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var16)))
				return Prolog.Fail0;
			local_aregs[0] = var11.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = Const.Nil;
			local_aregs[3] = mach.HC(Data.F(nand.s_or,
					Data.F(nand.s4, Data.F(nand.s9, var1.Deref(), var12.Deref()),
							Data.F(nand.s_set_union, var4.Deref(), Data.F(nand.s5, var10.Deref(), Const.Nil),
									var13.Deref())),
					Data.F(nand.s8, var13.Deref(), var4.Deref()),
					Data.F(nand.s_new_function_CIs, var9.Deref(), var10.Deref(), var11.Deref(), var12.Deref(),
							var14.Deref(), Data.F(nand.s5, var1.Deref(), var15.Deref()), var16.Deref(), continuation)));
			mach.CUTB = mach.CurrentChoice;
			local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = null;
			return (Operation) pred_set_intersection_3::exec_static;
		}

		public static Operation exec_pred_new_function_CIs_7__3(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3)))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			if (!((areg3).Unify(var5)))
				return Prolog.Fail0;
			if (!((areg4).Unify(Data.F(nand.s5, var1.Deref(), var6))))
				return Prolog.Fail0;
			if (!((areg5).Unify(var7)))
				return Prolog.Fail0;
			if (!((areg6).Unify(var8)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = var5.Deref();
			local_aregs[4] = var6.Deref();
			local_aregs[5] = var7.Deref();
			local_aregs[6] = var8.Deref();
			local_aregs[7] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_new_function_CIs_7::exec_static;
		}
	}

	public static class pred_function_type_6 extends Code {

		/*
		
		function_type(_10668,_10670,_10672,_10674,_10676,_10678,_10692):-true_set(_10674,_10680,select_vector(_10680,_10674,_10668,_10670,_10672,dummy,0,nf,999,_10682,_10678,_10676,_10684,_10692)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5],mach.Areg[6]} ;*/
			Term aregs[] = mach.RegPull(6);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_function_type_6__1(mach);
		}

		public static Operation exec_pred_function_type_6__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[6];
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
			local_aregs[0] = var4.Deref();
			local_aregs[1] = var7;
			local_aregs[2] = Data.F(nand.s_select_vector, var7.Deref(), var4.Deref(), var1.Deref(), var2.Deref(),
					var3.Deref(), nand.s_dummy, nand.posint0, nand.s_nf, nand.posint999, var8, var6.Deref(),
					var5.Deref(), var9, continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
			return (Operation) pred_true_set_2::exec_static;
		}
	}

	public static class pred_test_bounds_3 extends Code {

		/*
		
		test_bounds(_10754,_10756,_10758,_10768):-access(bound,_10760,smallerthan(_10756,_10760,_10768)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_test_bounds_3__1(mach);
		}

		public static Operation exec_pred_test_bounds_3__1(Prolog mach) {
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
			local_aregs[0] = nand.s_bound;
			local_aregs[1] = var4;
			local_aregs[2] = Data.F(nand.s_smallerthan, var2.Deref(), var4.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_access_2::exec_static;
		}
	}

	public static class pred_update_bounds_3 extends Code {

		/*
		
		update_bounds(_10802,_10804,_10806,_10814):-set(bound,_10804,_10814).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_update_bounds_3__1(mach);
		}

		public static Operation exec_pred_update_bounds_3__1(Prolog mach) {
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
			local_aregs[0] = nand.s_bound;
			local_aregs[1] = var2.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_set_2::exec_static;
		}
	}

	public static class pred_set_2 extends Code {

		/*
		
		set(_10840,_10842,_10870):-or((recorded(_10840,_10848,_10850)->erase(_10850)),true,recorda(_10840,_10842,_10862,_10870)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_set_2__1(mach);
		}

		public static Operation exec_pred_set_2__1(Prolog mach) {
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
			local_aregs[0] = Data.F(nand.s4, Data.F(nand.s_recorded, var1.Deref(), var3, var4),
					Data.F(nand.s_erase, var4.Deref()));
			local_aregs[1] = nand.s_true;
			local_aregs[2] = Data.F(nand.s_recorda, var1.Deref(), var2.Deref(), var5, continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_or_2::exec_static;
		}
	}

	public static class pred_access_2 extends Code {

		/*
		
		access(_10904,_10906,_10916):-recorded(_10904,_10906,_10908,_10916).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_access_2__1(mach);
		}

		public static Operation exec_pred_access_2__1(Prolog mach) {
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
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_recorded_3::exec_static;
		}
	}

	public static class pred_write_gates_1 extends Code {

		/*
		
		write_gates([],_10950):-call(_10950).
		write_gates([_10966|_10968],_10980):-function_number(_10966,_10970,write('gate #',write(_10970,write(' inputs:   ',immediate_predecessors(_10966,_10972,write(_10972,nl(write_gates(_10968,_10980)))))))).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ;*/
			Term aregs[] = mach.RegPull(1);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_write_gates_1__1(mach);
		}

		public static Operation exec_pred_write_gates_1__1(Prolog mach) {
			mach.FillAlternative(pred_write_gates_1::exec_pred_write_gates_1__2);
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

		public static Operation exec_pred_write_gates_1__2(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[1];
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3;
			local_aregs[2] = Data.F(nand.s_write, nand.s33,
					Data.F(nand.s_write, var3.Deref(), Data.F(nand.s_write, nand.s1,
							Data.F(nand.s_immediate_predecessors, var1.Deref(), var4, Data.F(nand.s_write, var4.Deref(),
									Data.F(nand.s_nl, Data.F(nand.s_write_gates, var2.Deref(), continuation)))))));
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_function_number_2::exec_static;
		}
	}

	public static class pred_function_3 extends Code {

		/*
		
		function(_11050,[_11046|_11048],_11046,_11058):-function_number(_11046,_11050,cut(1,_11058)).
		function(_11096,[_11092|_11094],_11098,_11106):-function(_11096,_11094,_11098,_11106).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_function_3__1(mach);
		}

		public static Operation exec_pred_function_3__1(Prolog mach) {
			mach.FillAlternative(pred_function_3::exec_pred_function_3__2);
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
			if (!((areg1).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var2.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = mach.HC(continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_function_number_2::exec_static;
		}

		public static Operation exec_pred_function_3__2(Prolog mach) {
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
			if (!((areg1).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_function_3::exec_static;
		}
	}

	public static class pred_function_number_2 extends Code {

		/*
		
		function_number(function(_11136,_11138,_11140,_11142,_11144,_11146,_11148,_11150),_11136,_11160):-call(_11160).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_function_number_2__1(mach);
		}

		public static Operation exec_pred_function_number_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var1.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_true_set_2 extends Code {

		/*
		
		true_set(function(_11178,_11180,_11182,_11184,_11186,_11188,_11190,_11192),_11180,_11202):-call(_11202).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_true_set_2__1(mach);
		}

		public static Operation exec_pred_true_set_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var2.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_false_set_2 extends Code {

		/*
		
		false_set(function(_11220,_11222,_11224,_11226,_11228,_11230,_11232,_11234),_11224,_11244):-call(_11244).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_false_set_2__1(mach);
		}

		public static Operation exec_pred_false_set_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var3.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_conceivable_inputs_2 extends Code {

		/*
		
		conceivable_inputs(function(_11262,_11264,_11266,_11268,_11270,_11272,_11274,_11276),_11268,_11286):-call(_11286).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_conceivable_inputs_2__1(mach);
		}

		public static Operation exec_pred_conceivable_inputs_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var4.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_immediate_predecessors_2 extends Code {

		/*
		
		immediate_predecessors(function(_11304,_11306,_11308,_11310,_11312,_11314,_11316,_11318),_11312,_11328):-call(_11328).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_immediate_predecessors_2__1(mach);
		}

		public static Operation exec_pred_immediate_predecessors_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var5.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_immediate_successors_2 extends Code {

		/*
		
		immediate_successors(function(_11346,_11348,_11350,_11352,_11354,_11356,_11358,_11360),_11356,_11370):-call(_11370).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_immediate_successors_2__1(mach);
		}

		public static Operation exec_pred_immediate_successors_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var6.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_predecessors_2 extends Code {

		/*
		
		predecessors(function(_11388,_11390,_11392,_11394,_11396,_11398,_11400,_11402),_11400,_11412):-call(_11412).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_predecessors_2__1(mach);
		}

		public static Operation exec_pred_predecessors_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var7.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_successors_2 extends Code {

		/*
		
		successors(function(_11430,_11432,_11434,_11436,_11438,_11440,_11442,_11444),_11444,_11454):-call(_11454).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_successors_2__1(mach);
		}

		public static Operation exec_pred_successors_2__1(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
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
			if (!((areg0).Unify(Data.F(nand.s_function, var1, var2, var3, var4, var5, var6, var7, var8))))
				return Prolog.Fail0;
			if (!((areg1).Unify(var8.Deref())))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}
	}

	public static class pred_set_union_3 extends Code {

		/*
		
		set_union([],[],[],_11478):-call(_11478).
		set_union([],[_11498|_11500],[_11498|_11500],_11516):-call(_11516).
		set_union([_11536|_11538],[],[_11536|_11538],_11554):-call(_11554).
		set_union([_11574|_11576],[_11574|_11582],[_11574|_11588],_11596):-set_union(_11576,_11582,_11588,_11596).
		set_union([_11626|_11628],[_11632|_11634],[_11626|_11640],_11654):-smallerthan(_11626,_11632,set_union(_11628,[_11632|_11634],_11640,_11654)).
		set_union([_11692|_11694],[_11698|_11700],[_11698|_11706],_11720):-smallerthan(_11698,_11692,set_union([_11692|_11694],_11700,_11706,_11720)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_set_union_3__1(mach);
		}

		public static Operation exec_pred_set_union_3__1(Prolog mach) {
			mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__2);
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

		public static Operation exec_pred_set_union_3__2(Prolog mach) {
			mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_set_union_3__3(Prolog mach) {
			mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_set_union_3__4(Prolog mach) {
			mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1.Deref(), var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_set_union_3::exec_static;
		}

		public static Operation exec_pred_set_union_3__5(Prolog mach) {
			mach.FillAlternative(pred_set_union_3::exec_pred_set_union_3__6);
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = Data.F(nand.s_set_union, var2.Deref(), Data.F(nand.s5, var3.Deref(), var4.Deref()),
					var5.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_set_union_3__6(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var3.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = Data.F(nand.s_set_union, Data.F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(),
					var5.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

	public static class pred_set_intersection_3 extends Code {

		/*
		
		set_intersection([],[],[],_11764):-call(_11764).
		set_intersection([],[_11784|_11786],[],_11796):-call(_11796).
		set_intersection([_11816|_11818],[],[],_11828):-call(_11828).
		set_intersection([_11848|_11850],[_11848|_11856],[_11848|_11862],_11870):-set_intersection(_11850,_11856,_11862,_11870).
		set_intersection([_11900|_11902],[_11906|_11908],_11910,_11924):-smallerthan(_11900,_11906,set_intersection(_11902,[_11906|_11908],_11910,_11924)).
		set_intersection([_11962|_11964],[_11968|_11970],_11972,_11986):-smallerthan(_11968,_11962,set_intersection([_11962|_11964],_11970,_11972,_11986)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_set_intersection_3__1(mach);
		}

		public static Operation exec_pred_set_intersection_3__1(Prolog mach) {
			mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__2);
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

		public static Operation exec_pred_set_intersection_3__2(Prolog mach) {
			mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_set_intersection_3__3(Prolog mach) {
			mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
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

		public static Operation exec_pred_set_intersection_3__4(Prolog mach) {
			mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1.Deref(), var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var1.Deref(), var4))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_set_intersection_3::exec_static;
		}

		public static Operation exec_pred_set_intersection_3__5(Prolog mach) {
			mach.FillAlternative(pred_set_intersection_3::exec_pred_set_intersection_3__6);
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = Data.F(nand.s_set_intersection, var2.Deref(), Data.F(nand.s5, var3.Deref(), var4.Deref()),
					var5.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_set_intersection_3__6(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = Data.F(nand.s_set_intersection, Data.F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(),
					var5.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

	public static class pred_set_difference_3 extends Code {

		/*
		
		set_difference([],[],[],_12030):-call(_12030).
		set_difference([],[_12050|_12052],[],_12062):-call(_12062).
		set_difference([_12082|_12084],[],[_12082|_12084],_12100):-call(_12100).
		set_difference([_12120|_12122],[_12120|_12128],_12130,_12138):-set_difference(_12122,_12128,_12130,_12138).
		set_difference([_12168|_12170],[_12174|_12176],[_12168|_12182],_12196):-smallerthan(_12168,_12174,set_difference(_12170,[_12174|_12176],_12182,_12196)).
		set_difference([_12234|_12236],[_12240|_12242],_12244,_12258):-smallerthan(_12240,_12234,set_difference([_12234|_12236],_12242,_12244,_12258)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ;*/
			Term aregs[] = mach.RegPull(3);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_set_difference_3__1(mach);
		}

		public static Operation exec_pred_set_difference_3__1(Prolog mach) {
			mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__2);
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

		public static Operation exec_pred_set_difference_3__2(Prolog mach) {
			mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Const.Nil)))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_set_difference_3__3(Prolog mach) {
			mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__4);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Const.Nil)))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var1.Deref(), var2.Deref()))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_set_difference_3__4(Prolog mach) {
			mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__5);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[3];
			Term areg2 = local_aregs[2].Deref();
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1.Deref(), var3))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var4)))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = var4.Deref();
			local_aregs[3] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_set_difference_3::exec_static;
		}

		public static Operation exec_pred_set_difference_3__5(Prolog mach) {
			mach.FillAlternative(pred_set_difference_3::exec_pred_set_difference_3__6);
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(Data.F(nand.s5, var1.Deref(), var5))))
				return Prolog.Fail0;
			local_aregs[0] = var1.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = Data.F(nand.s_set_difference, var2.Deref(), Data.F(nand.s5, var3.Deref(), var4.Deref()),
					var5.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}

		public static Operation exec_pred_set_difference_3__6(Prolog mach) {
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
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var3, var4))))
				return Prolog.Fail0;
			if (!((areg2).Unify(var5)))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = Data.F(nand.s_set_difference, Data.F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(),
					var5.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			local_aregs[3] = null;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

	public static class pred_set_subset_2 extends Code {

		/*
		
		set_subset([],_12294,_12304):-call(_12304).
		set_subset([_12322|_12324],[_12322|_12330],_12338):-set_subset(_12324,_12330,_12338).
		set_subset([_12364|_12366],[_12370|_12372],_12386):-smallerthan(_12370,_12364,set_subset([_12364|_12366],_12372,_12386)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_set_subset_2__1(mach);
		}

		public static Operation exec_pred_set_subset_2__1(Prolog mach) {
			mach.FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__2);
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

		public static Operation exec_pred_set_subset_2__2(Prolog mach) {
			mach.FillAlternative(pred_set_subset_2::exec_pred_set_subset_2__3);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1.Deref(), var3))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var3.Deref();
			local_aregs[2] = continuation;
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_set_subset_2::exec_static;
		}

		public static Operation exec_pred_set_subset_2__3(Prolog mach) {
			mach.RemoveChoice();
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var4 = Data.V(mach);
			Var var3 = Data.V(mach);
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(Data.F(nand.s5, var1, var2))))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var3, var4))))
				return Prolog.Fail0;
			local_aregs[0] = var3.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = Data.F(nand.s_set_subset, Data.F(nand.s5, var1.Deref(), var2.Deref()), var4.Deref(),
					continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

	public static class pred_set_member_2 extends Code {

		/*
		
		set_member(_12420,[_12420|_12422],_12432):-call(_12432).
		set_member(_12454,[_12450|_12452],_12462):-smallerthan(_12450,_12454,set_member(_12454,_12452,_12462)).
		
		
		*/

		public Operation Exec(Prolog mach) {
			return exec_static(mach);
		}

		public static Operation exec_static(Prolog mach) {
			/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ;*/
			Term aregs[] = mach.RegPull(2);
			mach.CreateChoicePoint(aregs);
			return (Operation) exec_pred_set_member_2__1(mach);
		}

		public static Operation exec_pred_set_member_2__1(Prolog mach) {
			mach.FillAlternative(pred_set_member_2::exec_pred_set_member_2__2);
			Term local_aregs[] = mach.Areg;
			Term continuation = local_aregs[2];
			Term areg1 = local_aregs[1].Deref();
			Term areg0 = local_aregs[0].Deref();
			Var var2 = Data.V(mach);
			Var var1 = Data.V(mach);
			if (!((areg0).Unify(var1)))
				return Prolog.Fail0;
			if (!((areg1).Unify(Data.F(nand.s5, var1.Deref(), var2))))
				return Prolog.Fail0;
			local_aregs[0] = continuation;
			mach.CUTB = mach.CurrentChoice;
			local_aregs[2] = local_aregs[1] = null;
			return Prolog.Call1;
		}

		public static Operation exec_pred_set_member_2__2(Prolog mach) {
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
			if (!((areg1).Unify(Data.F(nand.s5, var2, var3))))
				return Prolog.Fail0;
			local_aregs[0] = var2.Deref();
			local_aregs[1] = var1.Deref();
			local_aregs[2] = Data.F(nand.s_set_member, var1.Deref(), var3.Deref(), continuation);
			mach.CUTB = mach.CurrentChoice;
			return (Operation) pred_smallerthan_2::exec_static;
		}
	}

}
