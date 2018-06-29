#ifndef NAND
#define NAND

#include "../../machine/SxxMachine/Operation.h"
#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {

	using namespace SxxMachine;

	class nand {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s4;
		static Const* const  s5;
		static Const* const  s6;
		static Const* const  s7;
		static Const* const  s8;
		static Const* const  s9;
		static Const* const  s_access;
		static Const* const  s_add_necessary_functions;
		static Const* const  s_best_vector;
		static Const* const  s_bound;
		static Const* const  s_call;
		static Const* const  s_conceivable_inputs;
		static Const* const  s_cov;
		static Const* const  s_cover_type1;
		static Const* const  s_cover_type2;
		static Const* const  s_cover_vector;
		static Const* const  s_dummy;
		static Const* const  s_erase;
		static Const* const  s_exclude_if_vector_in_false_set;
		static Const* const  s_exf;
		static Const* const  s_exmcf;
		static Const* const  s_exp;
		static Const* const  s_fail;
		static Const* const  s_false_set;
		static Const* const  s_fcn;
		static Const* const  s_function;
		static Const* const  s_function_number;
		static Const* const  s_function_type;
		static Const* const  s33;
		static Const* const  s_immediate_predecessors;
		static Const* const  s_immediate_successors;
		static Const* const  s_init_state;
		static Const* const  s_is;
		static Const* const  s_main;
		static Const* const  s_max_type;
		static Const* const  s_mcf;
		static Const* const  s_new_function_CIs;
		static Const* const  s_nf;
		static Const* const  s_nl;
		static Const* const  s_not;
		static Const* const  s_or;
		static Const* const  s_predecessors;
		static Const* const  s_recorda;
		static Const* const  s_recorded;
		static Const* const  s_search;
		static Const* const  s_select_vector;
		static Const* const  s_set;
		static Const* const  s_set_difference;
		static Const* const  s_set_intersection;
		static Const* const  s_set_member;
		static Const* const  s_set_subset;
		static Const* const  s_set_union;
		static Const* const  s_smallerorequal;
		static Const* const  s_smallerthan;
		static Const* const  s_successors;
		static Const* const  s_test_bounds;
		static Const* const  s_top;
		static Const* const  s_true;
		static Const* const  s_true_set;
		static Const* const  s_type_order;
		static Const* const  s_unify;
		static Const* const  s_update_bounds;
		static Const* const  s_update_circuit;
		static Const* const  s_var;
		static Const* const  s_vector_cover_type;
		static Const* const  s_vector_types;
		static Const* const  s_write;
		static Const* const  s_write_gates;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint3;
		static Int* const  posint4;
		static Int* const  posint5;
		static Int* const  posint6;
		static Int* const  posint7;
		static Int* const  posint8;
		static Int* const  posint9;
		static Int* const  posint10;
		static Int* const  posint11;
		static Int* const  posint12;
		static Int* const  posint13;
		static Int* const  posint14;
		static Int* const  posint15;
		static Int* const  posint16;
		static Int* const  posint17;
		static Int* const  posint18;
		static Int* const  posint19;
		static Int* const  posint20;
		static Int* const  posint21;
		static Int* const  posint22;
		static Int* const  posint23;
		static Int* const  posint24;
		static Int* const  posint25;
		static Int* const  posint26;
		static Int* const  posint27;
		static Int* const  posint28;
		static Int* const  posint29;
		static Int* const  posint30;
		static Int* const  posint31;
		static Int* const  posint100;
		static Int* const  posint999;
		static const Operation reg_top_0;
		static const Operation reg_main_1;
		static const Operation reg_init_state_4;
		static const Operation reg_search_3;
		static const Operation reg_select_vector_5;
		static const Operation reg_select_vector_12;
		static const Operation reg_select_vector_13;
		static const Operation reg_vector_cover_type_6;
		static const Operation reg_cover_type1_7;
		static const Operation reg_cover_type2_9;
		static const Operation reg_best_vector_12;
		static const Operation reg_max_type_3;
		static const Operation reg_type_order_2;
		static const Operation reg_cover_vector_7;
		static const Operation reg_vector_types_1;
		static const Operation reg_cover_vector_10;
		static const Operation reg_update_circuit_6;
		static const Operation reg_exclude_if_vector_in_false_set_4;
		static const Operation reg_add_necessary_functions_5;
		static const Operation reg_add_necessary_functions_6;
		static const Operation reg_new_function_CIs_5;
		static const Operation reg_new_function_CIs_7;
		static const Operation reg_function_type_6;
		static const Operation reg_test_bounds_3;
		static const Operation reg_update_bounds_3;
		static const Operation reg_set_2;
		static const Operation reg_access_2;
		static const Operation reg_write_gates_1;
		static const Operation reg_function_3;
		static const Operation reg_function_number_2;
		static const Operation reg_true_set_2;
		static const Operation reg_false_set_2;
		static const Operation reg_conceivable_inputs_2;
		static const Operation reg_immediate_predecessors_2;
		static const Operation reg_immediate_successors_2;
		static const Operation reg_predecessors_2;
		static const Operation reg_successors_2;
		static const Operation reg_set_union_3;
		static const Operation reg_set_intersection_3;
		static const Operation reg_set_difference_3;
		static const Operation reg_set_subset_2;
		static const Operation reg_set_member_2;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_554):-main(0,_554).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_main_1 : public Code {

			/*
			
			main(_572,_590):-init_state(_572,_574,_576,_578,add_necessary_functions(_574,_576,_578,_580,_582,test_bounds(_574,_580,_582,search(_574,_580,_582,_590)))).
			main(_650,_660):-call(_660).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_main_1__1(Prolog* mach);

			static Operation exec_pred_main_1__2(Prolog* mach);
		};

	public:
		class pred_init_state_4 : public Code {

			/*
			
			init_state(0,2,3,[function(2,[1,2],[0,3],[],[],[],[],[]),function(1,[2,3],[0,1],[],[],[],[],[]),function(0,[1,3],[0,2],[],[],[],[],[])],_828):-update_bounds(_818,100,_820,_828).
			init_state(1,3,4,[function(3,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_1156):-update_bounds(_1146,100,_1148,_1156).
			init_state(2,3,4,[function(3,[1,2,4,6,7],[0,3,5],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_1484):-update_bounds(_1474,100,_1476,_1484).
			init_state(3,3,4,[function(3,[1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_1812):-update_bounds(_1802,100,_1804,_1812).
			init_state(4,3,5,[function(4,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(3,[1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_2212):-update_bounds(_2202,100,_2204,_2212).
			init_state(5,5,8,[function(7,[1,3,4,6,9,11,12,14,16,18,21,23,24,26,29,31],[0,2,5,7,8,10,13,15,17,19,20,22,25,27,28,30],[],[],[],[],[]),function(6,[2,3,5,6,8,9,12,15,17,18,20,21,24,27,30,31],[0,1,4,7,10,11,13,14,16,19,22,23,25,26,28,29],[],[],[],[],[]),function(5,[7,10,11,13,14,15,19,22,23,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,8,9,12,16,17,18,20,21,24],[],[],[],[],[]),function(4,[16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15],[],[],[],[],[]),function(3,[8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,7,16,17,18,19,20,21,22,23],[],[],[],[],[]),function(2,[4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31],[0,1,2,3,8,9,10,11,16,17,18,19,24,25,26,27],[],[],[],[],[]),function(1,[2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31],[0,1,4,5,8,9,12,13,16,17,20,21,24,25,28,29],[],[],[],[],[]),function(0,[1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31],[0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30],[],[],[],[],[])],_3980):-update_bounds(_3970,21,_3972,_3980).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_init_state_4__1(Prolog* mach);

			static Operation exec_pred_init_state_4__2(Prolog* mach);

			static Operation exec_pred_init_state_4__3(Prolog* mach);

			static Operation exec_pred_init_state_4__4(Prolog* mach);

			static Operation exec_pred_init_state_4__5(Prolog* mach);

			static Operation exec_pred_init_state_4__6(Prolog* mach);
		};

	public:
		class pred_search_3 : public Code {

			/*
			
			search(_4010,_4012,_4014,_4034):-select_vector(_4010,_4012,_4014,_4016,_4018,cut(1,cover_vector(_4010,_4012,_4014,_4016,_4018,_4020,_4022,add_necessary_functions(_4010,_4020,_4022,_4024,_4026,test_bounds(_4010,_4024,_4026,search(_4010,_4024,_4026,_4034)))))).
			search(_4124,_4126,_4128,_4136):-update_bounds(_4124,_4126,_4128,fail(_4136)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_search_3__1(Prolog* mach);

			static Operation exec_pred_search_3__2(Prolog* mach);
		};

	public:
		class pred_select_vector_5 : public Code {

			/*
			
			select_vector(_4168,_4170,_4172,_4174,_4176,_4200):-select_vector(_4172,_4168,_4170,_4172,dummy,0,nf,999,_4174,_4176,_4178,_4180,cut(1,not(_4178=cov,not(_4178=nf,_4200)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_select_vector_5__1(Prolog* mach);
		};

	public:
		class pred_select_vector_12 : public Code {

			/*
			
			select_vector([_4270|_4272],_4274,_4276,_4278,_4280,_4282,_4284,_4286,_4280,_4282,_4284,_4286,_4296):-function_number(_4270,_4288,smallerthan(_4288,_4274,_4296)).
			select_vector([_4350|_4352],_4354,_4356,_4358,_4360,_4362,_4364,_4366,_4368,_4370,_4372,_4374,_4394):-function_number(_4350,_4376,smallerorequal(_4354,_4376,true_set(_4350,_4378,select_vector(_4378,_4350,_4354,_4356,_4358,_4360,_4362,_4364,_4366,_4380,_4382,_4384,_4386,select_vector(_4352,_4354,_4356,_4358,_4380,_4382,_4384,_4386,_4368,_4370,_4372,_4374,_4394))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_select_vector_12__1(Prolog* mach);

			static Operation exec_pred_select_vector_12__2(Prolog* mach);
		};

	public:
		class pred_select_vector_13 : public Code {

			/*
			
			select_vector([],_4512,_4514,_4516,_4518,_4520,_4522,_4524,_4526,_4520,_4522,_4524,_4526,_4536):-call(_4536).
			select_vector([_4576|_4578],_4580,_4582,_4584,_4586,_4588,_4590,_4592,_4594,_4596,_4598,_4600,_4602,_4622):-vector_cover_type(_4582,_4586,_4580,_4576,_4604,_4606,best_vector(_4588,_4590,_4592,_4594,_4580,_4576,_4604,_4606,_4608,_4610,_4612,_4614,select_vector(_4578,_4580,_4582,_4584,_4586,_4608,_4610,_4612,_4614,_4596,_4598,_4600,_4602,_4622))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_select_vector_13__1(Prolog* mach);

			static Operation exec_pred_select_vector_13__2(Prolog* mach);
		};

	public:
		class pred_vector_cover_type_6 : public Code {

			/*
			
			vector_cover_type(_4734,_4736,_4738,_4740,_4742,_4744,_4762):-immediate_predecessors(_4738,_4746,conceivable_inputs(_4738,_4748,false_set(_4738,_4750,cover_type1(_4746,_4736,_4740,nf,0,_4752,_4754,cover_type2(_4748,_4736,_4734,_4750,_4740,_4752,_4754,_4742,_4744,_4762))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_vector_cover_type_6__1(Prolog* mach);
		};

	public:
		class pred_cover_type1_7 : public Code {

			/*
			
			cover_type1([],_4850,_4852,_4854,_4856,_4854,_4856,_4866):-call(_4866).
			cover_type1([_4894|_4896],_4898,_4900,_4902,_4904,_4906,_4908,_4964):-function(_4894,_4898,_4910,true_set(_4910,_4912,not(set_member(_4900,_4912),cut(1,false_set(_4910,_4920,or((set_member(_4900,_4920)->max_type(_4902,cov,_4934)),max_type(_4902,exp,_4934),is(_4956,_4904+1,cover_type1(_4896,_4898,_4900,_4934,_4956,_4906,_4908,_4964)))))))).
			cover_type1([_5064|_5066],_5068,_5070,_5072,_5074,_5076,_5078,_5086):-cover_type1(_5066,_5068,_5070,_5072,_5074,_5076,_5078,_5086).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_cover_type1_7__1(Prolog* mach);

			static Operation exec_pred_cover_type1_7__2(Prolog* mach);

			static Operation exec_pred_cover_type1_7__3(Prolog* mach);
		};

	public:
		class pred_cover_type2_9 : public Code {

			/*
			
			cover_type2([],_5130,_5132,_5134,_5136,_5138,_5140,_5138,_5140,_5150):-call(_5150).
			cover_type2([_5182|_5184],_5186,_5188,_5190,_5192,_5194,_5196,_5198,_5200,_5222):-smallerthan(_5182,_5188,function(_5182,_5186,_5202,false_set(_5202,_5204,set_member(_5192,_5204,cut(1,max_type(_5194,var,_5206,is(_5214,_5196+1,cover_type2(_5184,_5186,_5188,_5190,_5192,_5206,_5214,_5198,_5200,_5222)))))))).
			cover_type2([_5334|_5336],_5338,_5340,_5342,_5344,_5346,_5348,_5350,_5352,_5460):-smallerorequal(_5340,_5334,function(_5334,_5338,_5354,true_set(_5354,_5356,not(set_member(_5344,_5356),cut(1,false_set(_5354,_5364,or((set_member(_5344,_5364)->(set_subset(_5342,_5356)->max_type(_5346,fcn,_5384);max_type(_5346,mcf,_5384))),(set_subset(_5342,_5356)->max_type(_5346,exf,_5384);max_type(_5346,exmcf,_5384)),is(_5452,_5348+1,cover_type2(_5336,_5338,_5340,_5342,_5344,_5384,_5452,_5350,_5352,_5460))))))))).
			cover_type2([_5576|_5578],_5580,_5582,_5584,_5586,_5588,_5590,_5592,_5594,_5602):-cover_type2(_5578,_5580,_5582,_5584,_5586,_5588,_5590,_5592,_5594,_5602).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_cover_type2_9__1(Prolog* mach);

			static Operation exec_pred_cover_type2_9__2(Prolog* mach);

			static Operation exec_pred_cover_type2_9__3(Prolog* mach);

			static Operation exec_pred_cover_type2_9__4(Prolog* mach);
		};

	public:
		class pred_best_vector_12 : public Code {

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

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_best_vector_12__1(Prolog* mach);

			static Operation exec_pred_best_vector_12__2(Prolog* mach);

			static Operation exec_pred_best_vector_12__3(Prolog* mach);

			static Operation exec_pred_best_vector_12__4(Prolog* mach);

			static Operation exec_pred_best_vector_12__5(Prolog* mach);

			static Operation exec_pred_best_vector_12__6(Prolog* mach);

			static Operation exec_pred_best_vector_12__7(Prolog* mach);

			static Operation exec_pred_best_vector_12__8(Prolog* mach);

			static Operation exec_pred_best_vector_12__9(Prolog* mach);

			static Operation exec_pred_best_vector_12__10(Prolog* mach);
		};

	public:
		class pred_max_type_3 : public Code {

			/*
			
			max_type(_6546,_6548,_6546,_6556):-type_order(_6546,_6548,cut(1,_6556)).
			max_type(_6588,_6590,_6590,_6604):-not(type_order(_6588,_6590),cut(1,_6604)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_max_type_3__1(Prolog* mach);

			static Operation exec_pred_max_type_3__2(Prolog* mach);
		};

	public:
		class pred_type_order_2 : public Code {

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

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_type_order_2__1(Prolog* mach);

			static Operation exec_pred_type_order_2__2(Prolog* mach);

			static Operation exec_pred_type_order_2__3(Prolog* mach);

			static Operation exec_pred_type_order_2__4(Prolog* mach);

			static Operation exec_pred_type_order_2__5(Prolog* mach);

			static Operation exec_pred_type_order_2__6(Prolog* mach);

			static Operation exec_pred_type_order_2__7(Prolog* mach);

			static Operation exec_pred_type_order_2__8(Prolog* mach);

			static Operation exec_pred_type_order_2__9(Prolog* mach);

			static Operation exec_pred_type_order_2__10(Prolog* mach);

			static Operation exec_pred_type_order_2__11(Prolog* mach);

			static Operation exec_pred_type_order_2__12(Prolog* mach);

			static Operation exec_pred_type_order_2__13(Prolog* mach);

			static Operation exec_pred_type_order_2__14(Prolog* mach);

			static Operation exec_pred_type_order_2__15(Prolog* mach);

			static Operation exec_pred_type_order_2__16(Prolog* mach);

			static Operation exec_pred_type_order_2__17(Prolog* mach);

			static Operation exec_pred_type_order_2__18(Prolog* mach);

			static Operation exec_pred_type_order_2__19(Prolog* mach);

			static Operation exec_pred_type_order_2__20(Prolog* mach);

			static Operation exec_pred_type_order_2__21(Prolog* mach);

			static Operation exec_pred_type_order_2__22(Prolog* mach);

			static Operation exec_pred_type_order_2__23(Prolog* mach);

			static Operation exec_pred_type_order_2__24(Prolog* mach);

			static Operation exec_pred_type_order_2__25(Prolog* mach);

			static Operation exec_pred_type_order_2__26(Prolog* mach);

			static Operation exec_pred_type_order_2__27(Prolog* mach);

			static Operation exec_pred_type_order_2__28(Prolog* mach);
		};

	public:
		class pred_cover_vector_7 : public Code {

			/*
			
			cover_vector(_7306,_7308,_7310,_7312,_7314,_7316,_7318,_7332):-immediate_predecessors(_7312,_7320,conceivable_inputs(_7312,_7322,vector_types(_7324,cover_vector(_7324,_7320,_7322,_7312,_7314,_7306,_7308,_7310,_7316,_7318,_7332)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_cover_vector_7__1(Prolog* mach);
		};

	public:
		class pred_vector_types_1 : public Code {

			/*
			
			vector_types(var,_7412):-call(_7412).
			vector_types(exp,_7434):-call(_7434).
			vector_types(fcn,_7456):-call(_7456).
			vector_types(mcf,_7478):-call(_7478).
			vector_types(exf,_7500):-call(_7500).
			vector_types(exmcf,_7522):-call(_7522).
			vector_types(nf,_7544):-call(_7544).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_vector_types_1__1(Prolog* mach);

			static Operation exec_pred_vector_types_1__2(Prolog* mach);

			static Operation exec_pred_vector_types_1__3(Prolog* mach);

			static Operation exec_pred_vector_types_1__4(Prolog* mach);

			static Operation exec_pred_vector_types_1__5(Prolog* mach);

			static Operation exec_pred_vector_types_1__6(Prolog* mach);

			static Operation exec_pred_vector_types_1__7(Prolog* mach);
		};

	public:
		class pred_cover_vector_10 : public Code {

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

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_cover_vector_10__1(Prolog* mach);

			static Operation exec_pred_cover_vector_10__2(Prolog* mach);

			static Operation exec_pred_cover_vector_10__3(Prolog* mach);

			static Operation exec_pred_cover_vector_10__4(Prolog* mach);

			static Operation exec_pred_cover_vector_10__5(Prolog* mach);

			static Operation exec_pred_cover_vector_10__6(Prolog* mach);

			static Operation exec_pred_cover_vector_10__7(Prolog* mach);

			static Operation exec_pred_cover_vector_10__8(Prolog* mach);

			static Operation exec_pred_cover_vector_10__9(Prolog* mach);

			static Operation exec_pred_cover_vector_10__10(Prolog* mach);

			static Operation exec_pred_cover_vector_10__11(Prolog* mach);

			static Operation exec_pred_cover_vector_10__12(Prolog* mach);

			static Operation exec_pred_cover_vector_10__13(Prolog* mach);
		};

	public:
		class pred_update_circuit_6 : public Code {

			/*
			
			update_circuit([],_9020,_9022,_9024,_9026,[],_9036):-call(_9036).
			update_circuit([function(_9062,_9064,_9066,_9068,_9070,_9072,_9074,_9076)|_9082],_9108,_9110,_9112,_9114,[function(_9062,_9088,_9090,_9092,_9094,_9096,_9098,_9100)|_9106],_9560):-unify(function(_9118,_9120,_9122,_9124,_9126,_9128,_9130,_9132),_9108,unify(function(_9136,_9138,_9140,_9142,_9144,_9146,_9148,_9150),_9110,set_union([_9118],_9130,_9158,set_union([_9136],_9150,_9166,or((_9062=_9136->set_union(_9064,_9122,_9180)),_9180=_9064,or((_9062=_9118->set_union(_9180,_9140,_9206)),_9206=_9180,or(((set_member(_9062,_9126);set_member(_9062,_9128))->set_union(_9206,[_9112],_9088)),_9088=_9206,or((_9062=_9118->set_union(_9066,[_9112],_9090)),_9090=_9066,or(((set_member(_9062,_9130);_9062=_9118)->set_difference(_9068,_9166,_9320)),_9320=_9068,or((set_member(_9118,_9068),set_member(_9112,_9066)->set_difference(_9320,[_9118],_9364)),_9364=_9320,or((_9062=_9118->exclude_if_vector_in_false_set(_9364,_9114,_9112,_9392)),_9392=_9364,or((_9062=_9136->set_difference(_9392,[_9118],_9092)),_9092=_9392,or((_9062=_9136->set_union(_9070,[_9118],_9094)),_9094=_9070,or((_9062=_9118->set_union(_9072,[_9136],_9096)),_9096=_9072,or((set_member(_9062,_9166)->set_union(_9074,_9158,_9098)),_9098=_9074,or((set_member(_9062,_9158)->set_union(_9076,_9166,_9100)),_9100=_9076,update_circuit(_9082,_9108,_9110,_9112,_9114,_9106,_9560))))))))))))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_update_circuit_6__1(Prolog* mach);

			static Operation exec_pred_update_circuit_6__2(Prolog* mach);
		};

	public:
		class pred_exclude_if_vector_in_false_set_4 : public Code {

			/*
			
			exclude_if_vector_in_false_set([],_9732,_9734,[],_9744):-call(_9744).
			exclude_if_vector_in_false_set([_9766|_9768],_9770,_9772,_9774,_9786):-function(_9766,_9770,_9776,false_set(_9776,_9778,set_member(_9772,_9778,cut(1,exclude_if_vector_in_false_set(_9768,_9770,_9772,_9774,_9786))))).
			exclude_if_vector_in_false_set([_9852|_9854],_9862,_9864,[_9852|_9860],_9872):-exclude_if_vector_in_false_set(_9854,_9862,_9864,_9860,_9872).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_exclude_if_vector_in_false_set_4__1(Prolog* mach);

			static Operation exec_pred_exclude_if_vector_in_false_set_4__2(Prolog* mach);

			static Operation exec_pred_exclude_if_vector_in_false_set_4__3(Prolog* mach);
		};

	public:
		class pred_add_necessary_functions_5 : public Code {

			/*
			
			add_necessary_functions(_9904,_9906,_9908,_9910,_9912,_9920):-add_necessary_functions(_9904,_9904,_9906,_9908,_9910,_9912,_9920).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_add_necessary_functions_5__1(Prolog* mach);
		};

	public:
		class pred_add_necessary_functions_6 : public Code {

			/*
			
			add_necessary_functions(_9958,_9960,_9958,_9962,_9958,_9962,_9970):-cut(1,_9970).
			add_necessary_functions(_10000,_10002,_10004,_10006,_10008,_10010,_10072):-function(_10000,_10006,_10012,function_type(_10002,_10004,_10006,_10012,nf,_10014,cut(1,false_set(_10012,_10016,new_function_CIs(_10006,function(_10004,_10016,[_10014],[],[],[],[],[]),_10002,_10042,_10044,function(_10000,_10042,_10046,update_circuit(_10042,_10044,_10046,_10014,_10042,_10048,is(_10056,_10004+1,is(_10064,_10000+1,add_necessary_functions(_10064,_10002,_10056,_10048,_10008,_10010,_10072)))))))))).
			add_necessary_functions(_10208,_10210,_10212,_10214,_10216,_10218,_10234):-is(_10226,_10208+1,add_necessary_functions(_10226,_10210,_10212,_10214,_10216,_10218,_10234)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_add_necessary_functions_6__1(Prolog* mach);

			static Operation exec_pred_add_necessary_functions_6__2(Prolog* mach);

			static Operation exec_pred_add_necessary_functions_6__3(Prolog* mach);
		};

	public:
		class pred_new_function_CIs_5 : public Code {

			/*
			
			new_function_CIs(_10306,function(_10284,_10286,_10288,_10290,_10292,_10294,_10296,_10298),_10308,[_10302|_10304],_10302,_10336):-new_function_CIs(_10306,_10284,_10288,_10308,_10304,[],_10310,unify(function(_10284,_10286,_10288,_10310,_10292,_10294,_10296,_10298),_10302,_10336)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_new_function_CIs_5__1(Prolog* mach);
		};

	public:
		class pred_new_function_CIs_7 : public Code {

			/*
			
			new_function_CIs([],_10384,_10386,_10388,[],_10390,_10390,_10400):-call(_10400).
			new_function_CIs([function(_10428,_10430,_10432,_10434,_10436,_10438,_10440,_10442)|_10448],_10474,_10476,_10478,[function(_10428,_10430,_10432,_10458,_10436,_10438,_10440,_10442)|_10472],_10480,_10482,_10528):-set_intersection(_10476,_10432,[],cut(1,or((_10428>=_10478->set_union(_10434,[_10474],_10458)),_10458=_10434,new_function_CIs(_10448,_10474,_10476,_10478,_10472,[_10428|_10480],_10482,_10528)))).
			new_function_CIs([_10598|_10600],_10608,_10610,_10612,[_10598|_10606],_10614,_10616,_10624):-new_function_CIs(_10600,_10608,_10610,_10612,_10606,_10614,_10616,_10624).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_new_function_CIs_7__1(Prolog* mach);

			static Operation exec_pred_new_function_CIs_7__2(Prolog* mach);

			static Operation exec_pred_new_function_CIs_7__3(Prolog* mach);
		};

	public:
		class pred_function_type_6 : public Code {

			/*
			
			function_type(_10668,_10670,_10672,_10674,_10676,_10678,_10692):-true_set(_10674,_10680,select_vector(_10680,_10674,_10668,_10670,_10672,dummy,0,nf,999,_10682,_10678,_10676,_10684,_10692)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_function_type_6__1(Prolog* mach);
		};

	public:
		class pred_test_bounds_3 : public Code {

			/*
			
			test_bounds(_10754,_10756,_10758,_10768):-access(bound,_10760,smallerthan(_10756,_10760,_10768)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_test_bounds_3__1(Prolog* mach);
		};

	public:
		class pred_update_bounds_3 : public Code {

			/*
			
			update_bounds(_10802,_10804,_10806,_10814):-set(bound,_10804,_10814).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_update_bounds_3__1(Prolog* mach);
		};

	public:
		class pred_set_2 : public Code {

			/*
			
			set(_10840,_10842,_10870):-or((recorded(_10840,_10848,_10850)->erase(_10850)),true,recorda(_10840,_10842,_10862,_10870)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_set_2__1(Prolog* mach);
		};

	public:
		class pred_access_2 : public Code {

			/*
			
			access(_10904,_10906,_10916):-recorded(_10904,_10906,_10908,_10916).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_access_2__1(Prolog* mach);
		};

	public:
		class pred_write_gates_1 : public Code {

			/*
			
			write_gates([],_10950):-call(_10950).
			write_gates([_10966|_10968],_10980):-function_number(_10966,_10970,write('gate #',write(_10970,write(' inputs:   ',immediate_predecessors(_10966,_10972,write(_10972,nl(write_gates(_10968,_10980)))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_write_gates_1__1(Prolog* mach);

			static Operation exec_pred_write_gates_1__2(Prolog* mach);
		};

	public:
		class pred_function_3 : public Code {

			/*
			
			function(_11050,[_11046|_11048],_11046,_11058):-function_number(_11046,_11050,cut(1,_11058)).
			function(_11096,[_11092|_11094],_11098,_11106):-function(_11096,_11094,_11098,_11106).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_function_3__1(Prolog* mach);

			static Operation exec_pred_function_3__2(Prolog* mach);
		};

	public:
		class pred_function_number_2 : public Code {

			/*
			
			function_number(function(_11136,_11138,_11140,_11142,_11144,_11146,_11148,_11150),_11136,_11160):-call(_11160).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_function_number_2__1(Prolog* mach);
		};

	public:
		class pred_true_set_2 : public Code {

			/*
			
			true_set(function(_11178,_11180,_11182,_11184,_11186,_11188,_11190,_11192),_11180,_11202):-call(_11202).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_true_set_2__1(Prolog* mach);
		};

	public:
		class pred_false_set_2 : public Code {

			/*
			
			false_set(function(_11220,_11222,_11224,_11226,_11228,_11230,_11232,_11234),_11224,_11244):-call(_11244).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_false_set_2__1(Prolog* mach);
		};

	public:
		class pred_conceivable_inputs_2 : public Code {

			/*
			
			conceivable_inputs(function(_11262,_11264,_11266,_11268,_11270,_11272,_11274,_11276),_11268,_11286):-call(_11286).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_conceivable_inputs_2__1(Prolog* mach);
		};

	public:
		class pred_immediate_predecessors_2 : public Code {

			/*
			
			immediate_predecessors(function(_11304,_11306,_11308,_11310,_11312,_11314,_11316,_11318),_11312,_11328):-call(_11328).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_immediate_predecessors_2__1(Prolog* mach);
		};

	public:
		class pred_immediate_successors_2 : public Code {

			/*
			
			immediate_successors(function(_11346,_11348,_11350,_11352,_11354,_11356,_11358,_11360),_11356,_11370):-call(_11370).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_immediate_successors_2__1(Prolog* mach);
		};

	public:
		class pred_predecessors_2 : public Code {

			/*
			
			predecessors(function(_11388,_11390,_11392,_11394,_11396,_11398,_11400,_11402),_11400,_11412):-call(_11412).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_predecessors_2__1(Prolog* mach);
		};

	public:
		class pred_successors_2 : public Code {

			/*
			
			successors(function(_11430,_11432,_11434,_11436,_11438,_11440,_11442,_11444),_11444,_11454):-call(_11454).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_successors_2__1(Prolog* mach);
		};

	public:
		class pred_set_union_3 : public Code {

			/*
			
			set_union([],[],[],_11478):-call(_11478).
			set_union([],[_11498|_11500],[_11498|_11500],_11516):-call(_11516).
			set_union([_11536|_11538],[],[_11536|_11538],_11554):-call(_11554).
			set_union([_11574|_11576],[_11574|_11582],[_11574|_11588],_11596):-set_union(_11576,_11582,_11588,_11596).
			set_union([_11626|_11628],[_11632|_11634],[_11626|_11640],_11654):-smallerthan(_11626,_11632,set_union(_11628,[_11632|_11634],_11640,_11654)).
			set_union([_11692|_11694],[_11698|_11700],[_11698|_11706],_11720):-smallerthan(_11698,_11692,set_union([_11692|_11694],_11700,_11706,_11720)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_set_union_3__1(Prolog* mach);

			static Operation exec_pred_set_union_3__2(Prolog* mach);

			static Operation exec_pred_set_union_3__3(Prolog* mach);

			static Operation exec_pred_set_union_3__4(Prolog* mach);

			static Operation exec_pred_set_union_3__5(Prolog* mach);

			static Operation exec_pred_set_union_3__6(Prolog* mach);
		};

	public:
		class pred_set_intersection_3 : public Code {

			/*
			
			set_intersection([],[],[],_11764):-call(_11764).
			set_intersection([],[_11784|_11786],[],_11796):-call(_11796).
			set_intersection([_11816|_11818],[],[],_11828):-call(_11828).
			set_intersection([_11848|_11850],[_11848|_11856],[_11848|_11862],_11870):-set_intersection(_11850,_11856,_11862,_11870).
			set_intersection([_11900|_11902],[_11906|_11908],_11910,_11924):-smallerthan(_11900,_11906,set_intersection(_11902,[_11906|_11908],_11910,_11924)).
			set_intersection([_11962|_11964],[_11968|_11970],_11972,_11986):-smallerthan(_11968,_11962,set_intersection([_11962|_11964],_11970,_11972,_11986)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_set_intersection_3__1(Prolog* mach);

			static Operation exec_pred_set_intersection_3__2(Prolog* mach);

			static Operation exec_pred_set_intersection_3__3(Prolog* mach);

			static Operation exec_pred_set_intersection_3__4(Prolog* mach);

			static Operation exec_pred_set_intersection_3__5(Prolog* mach);

			static Operation exec_pred_set_intersection_3__6(Prolog* mach);
		};

	public:
		class pred_set_difference_3 : public Code {

			/*
			
			set_difference([],[],[],_12030):-call(_12030).
			set_difference([],[_12050|_12052],[],_12062):-call(_12062).
			set_difference([_12082|_12084],[],[_12082|_12084],_12100):-call(_12100).
			set_difference([_12120|_12122],[_12120|_12128],_12130,_12138):-set_difference(_12122,_12128,_12130,_12138).
			set_difference([_12168|_12170],[_12174|_12176],[_12168|_12182],_12196):-smallerthan(_12168,_12174,set_difference(_12170,[_12174|_12176],_12182,_12196)).
			set_difference([_12234|_12236],[_12240|_12242],_12244,_12258):-smallerthan(_12240,_12234,set_difference([_12234|_12236],_12242,_12244,_12258)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_set_difference_3__1(Prolog* mach);

			static Operation exec_pred_set_difference_3__2(Prolog* mach);

			static Operation exec_pred_set_difference_3__3(Prolog* mach);

			static Operation exec_pred_set_difference_3__4(Prolog* mach);

			static Operation exec_pred_set_difference_3__5(Prolog* mach);

			static Operation exec_pred_set_difference_3__6(Prolog* mach);
		};

	public:
		class pred_set_subset_2 : public Code {

			/*
			
			set_subset([],_12294,_12304):-call(_12304).
			set_subset([_12322|_12324],[_12322|_12330],_12338):-set_subset(_12324,_12330,_12338).
			set_subset([_12364|_12366],[_12370|_12372],_12386):-smallerthan(_12370,_12364,set_subset([_12364|_12366],_12372,_12386)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_set_subset_2__1(Prolog* mach);

			static Operation exec_pred_set_subset_2__2(Prolog* mach);

			static Operation exec_pred_set_subset_2__3(Prolog* mach);
		};

	public:
		class pred_set_member_2 : public Code {

			/*
			
			set_member(_12420,[_12420|_12422],_12432):-call(_12432).
			set_member(_12454,[_12450|_12452],_12462):-smallerthan(_12450,_12454,set_member(_12454,_12452,_12462)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_set_member_2__1(Prolog* mach);

			static Operation exec_pred_set_member_2__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef NAND
