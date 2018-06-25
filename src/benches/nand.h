#ifndef NAND
#define NAND

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class nand {
public:
	static Const* s0;
	static Const* s1;
	static Const* s2;
	static Const* s3;
	static Const* s4;
	static Const* s5;
	static Const* s6;
	static Const* s7;
	static Const* s8;
	static Const* s9;
	static Const* s10;
	static Const* s11;
	static Const* s12;
	static Const* s13;
	static Const* s14;
	static Const* s15;
	static Const* s16;
	static Const* s17;
	static Const* s18;
	static Const* s19;
	static Const* s20;
	static Const* s21;
	static Const* s22;
	static Const* s23;
	static Const* s24;
	static Const* s25;
	static Const* s26;
	static Const* s27;
	static Const* s28;
	static Const* s29;
	static Const* s30;
	static Const* s31;
	static Const* s32;
	static Const* s33;
	static Const* s34;
	static Const* s35;
	static Const* s36;
	static Const* s37;
	static Const* s38;
	static Const* s39;
	static Const* s40;
	static Const* s41;
	static Const* s42;
	static Const* s43;
	static Const* s44;
	static Const* s45;
	static Const* s46;
	static Const* s47;
	static Const* s48;
	static Const* s49;
	static Const* s50;
	static Const* s51;
	static Const* s52;
	static Const* s53;
	static Const* s54;
	static Const* s55;
	static Const* s56;
	static Const* s57;
	static Const* s58;
	static Const* s59;
	static Const* s60;
	static Const* s61;
	static Const* s62;
	static Const* s63;
	static Const* s64;
	static Const* s65;
	static Const* s66;
	static Const* s67;
	static Const* s68;
	static Const* s69;
	static Const* s70;
	static Const* s71;
	static Const* s72;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint4;
	static Int* posint5;
	static Int* posint6;
	static Int* posint7;
	static Int* posint8;
	static Int* posint9;
	static Int* posint10;
	static Int* posint11;
	static Int* posint12;
	static Int* posint13;
	static Int* posint14;
	static Int* posint15;
	static Int* posint16;
	static Int* posint17;
	static Int* posint18;
	static Int* posint19;
	static Int* posint20;
	static Int* posint21;
	static Int* posint22;
	static Int* posint23;
	static Int* posint24;
	static Int* posint25;
	static Int* posint26;
	static Int* posint27;
	static Int* posint28;
	static Int* posint29;
	static Int* posint30;
	static Int* posint31;
	static Int* posint100;
	static Int* posint999;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_37856):-main(0,_37856).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_main_1 : public Code {

	/*
	 * 
	 * main(_37920,_38004):-init_state(_37920,_37926,_37928,_37930,
	 * add_necessary_functions(_37926,_37928,_37930,_37940,_37942,test_bounds(_37926
	 * ,_37940,_37942,search(_37926,_37940,_37942,_38004)))).
	 * main(_38344,_38366):-call(_38366).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_init_state_4 : public Code {

	/*
	 * 
	 * init_state(0,2,3,[function(2,[1,2],[0,3],[],[],[],[],[]),function(1,[2,3],[0,
	 * 1],[],[],[],[],[]),function(0,[1,3],[0,2],[],[],[],[],[])],_38628):-
	 * update_bounds(_38578,100,_38582,_38628).
	 * init_state(1,3,4,[function(3,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(2,[
	 * 4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[]
	 * ,[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_39112):-update_bounds(
	 * _39062,100,_39066,_39112).
	 * init_state(2,3,4,[function(3,[1,2,4,6,7],[0,3,5],[],[],[],[],[]),function(2,[
	 * 4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[]
	 * ,[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_39596):-update_bounds(
	 * _39546,100,_39550,_39596).
	 * init_state(3,3,4,[function(3,[1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[
	 * 4,5,6,7],[0,1,2,3],[],[],[],[],[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[]
	 * ,[]),function(0,[1,3,5,7],[0,2,4,6],[],[],[],[],[])],_40080):-update_bounds(
	 * _40030,100,_40034,_40080).
	 * init_state(4,3,5,[function(4,[3,5,6,7],[0,1,2,4],[],[],[],[],[]),function(3,[
	 * 1,2,4,7],[0,3,5,6],[],[],[],[],[]),function(2,[4,5,6,7],[0,1,2,3],[],[],[],[]
	 * ,[]),function(1,[2,3,6,7],[0,1,4,5],[],[],[],[],[]),function(0,[1,3,5,7],[0,2
	 * ,4,6],[],[],[],[],[])],_40636):-update_bounds(_40586,100,_40590,_40636).
	 * init_state(5,5,8,[function(7,[1,3,4,6,9,11,12,14,16,18,21,23,24,26,29,31],[0,
	 * 2,5,7,8,10,13,15,17,19,20,22,25,27,28,30],[],[],[],[],[]),function(6,[2,3,5,6
	 * ,8,9,12,15,17,18,20,21,24,27,30,31],[0,1,4,7,10,11,13,14,16,19,22,23,25,26,28
	 * ,29],[],[],[],[],[]),function(5,[7,10,11,13,14,15,19,22,23,25,26,27,28,29,30,
	 * 31],[0,1,2,3,4,5,6,8,9,12,16,17,18,20,21,24],[],[],[],[],[]),function(4,[16,
	 * 17,18,19,20,21,22,23,24,25,26,27,28,29,30,31],[0,1,2,3,4,5,6,7,8,9,10,11,12,
	 * 13,14,15],[],[],[],[],[]),function(3,[8,9,10,11,12,13,14,15,24,25,26,27,28,29
	 * ,30,31],[0,1,2,3,4,5,6,7,16,17,18,19,20,21,22,23],[],[],[],[],[]),function(2,
	 * [4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31],[0,1,2,3,8,9,10,11,16,17,18,19,
	 * 24,25,26,27],[],[],[],[],[]),function(1,[2,3,6,7,10,11,14,15,18,19,22,23,26,
	 * 27,30,31],[0,1,4,5,8,9,12,13,16,17,20,21,24,25,28,29],[],[],[],[],[]),
	 * function(0,[1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31],[0,2,4,6,8,10,12,14,
	 * 16,18,20,22,24,26,28,30],[],[],[],[],[])],_42560):-update_bounds(_42510,21,
	 * _42514,_42560).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_search_3 : public Code {

	/*
	 * 
	 * search(_3998,_4000,_4002,_4022):-select_vector(_3998,_4000,_4002,_4004,_4006,
	 * cut(1,cover_vector(_3998,_4000,_4002,_4004,_4006,_4008,_4010,
	 * add_necessary_functions(_3998,_4008,_4010,_4012,_4014,test_bounds(_3998,_4012
	 * ,_4014,search(_3998,_4012,_4014,_4022)))))).
	 * search(_4112,_4114,_4116,_4124):-update_bounds(_4112,_4114,_4116,fail(_4124))
	 * .
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_select_vector_5 : public Code {

	/*
	 * 
	 * select_vector(_4156,_4158,_4160,_4162,_4164,_4188):-select_vector(_4160,_4156
	 * ,_4158,_4160,dummy,0,nf,999,_4162,_4164,_4166,_4168,cut(1,not(_4166=cov,not(
	 * _4166=nf,_4188)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_select_vector_12 : public Code {

	/*
	 * 
	 * select_vector([_4258|_4260],_4262,_4264,_4266,_4268,_4270,_4272,_4274,_4268,
	 * _4270,_4272,_4274,_4284):-function_number(_4258,_4276,smallerthan(_4276,_4262
	 * ,_4284)).
	 * select_vector([_4338|_4340],_4342,_4344,_4346,_4348,_4350,_4352,_4354,_4356,
	 * _4358,_4360,_4362,_4382):-function_number(_4338,_4364,smallerorequal(_4342,
	 * _4364,true_set(_4338,_4366,select_vector(_4366,_4338,_4342,_4344,_4346,_4348,
	 * _4350,_4352,_4354,_4368,_4370,_4372,_4374,select_vector(_4340,_4342,_4344,
	 * _4346,_4368,_4370,_4372,_4374,_4356,_4358,_4360,_4362,_4382))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_select_vector_13 : public Code {

	/*
	 * 
	 * select_vector([],_4500,_4502,_4504,_4506,_4508,_4510,_4512,_4514,_4508,_4510,
	 * _4512,_4514,_4524):-call(_4524).
	 * select_vector([_4564|_4566],_4568,_4570,_4572,_4574,_4576,_4578,_4580,_4582,
	 * _4584,_4586,_4588,_4590,_4610):-vector_cover_type(_4570,_4574,_4568,_4564,
	 * _4592,_4594,best_vector(_4576,_4578,_4580,_4582,_4568,_4564,_4592,_4594,_4596
	 * ,_4598,_4600,_4602,select_vector(_4566,_4568,_4570,_4572,_4574,_4596,_4598,
	 * _4600,_4602,_4584,_4586,_4588,_4590,_4610))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_vector_cover_type_6 : public Code {

	/*
	 * 
	 * vector_cover_type(_4722,_4724,_4726,_4728,_4730,_4732,_4750):-
	 * immediate_predecessors(_4726,_4734,conceivable_inputs(_4726,_4736,false_set(
	 * _4726,_4738,cover_type1(_4734,_4724,_4728,nf,0,_4740,_4742,cover_type2(_4736,
	 * _4724,_4722,_4738,_4728,_4740,_4742,_4730,_4732,_4750))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_cover_type1_7 : public Code {

	/*
	 * 
	 * cover_type1([],_4838,_4840,_4842,_4844,_4842,_4844,_4854):-call(_4854).
	 * cover_type1([_4882|_4884],_4886,_4888,_4890,_4892,_4894,_4896,_4952):-
	 * function(_4882,_4886,_4898,true_set(_4898,_4900,not(set_member(_4888,_4900),
	 * cut(1,false_set(_4898,_4908,or((set_member(_4888,_4908)->max_type(_4890,cov,
	 * _4922)),max_type(_4890,exp,_4922),is(_4944,_4892+1,cover_type1(_4884,_4886,
	 * _4888,_4922,_4944,_4894,_4896,_4952)))))))).
	 * cover_type1([_5052|_5054],_5056,_5058,_5060,_5062,_5064,_5066,_5074):-
	 * cover_type1(_5054,_5056,_5058,_5060,_5062,_5064,_5066,_5074).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_cover_type2_9 : public Code {

	/*
	 * 
	 * cover_type2([],_5118,_5120,_5122,_5124,_5126,_5128,_5126,_5128,_5138):-call(
	 * _5138).
	 * cover_type2([_5170|_5172],_5174,_5176,_5178,_5180,_5182,_5184,_5186,_5188,
	 * _5210):-smallerthan(_5170,_5176,function(_5170,_5174,_5190,false_set(_5190,
	 * _5192,set_member(_5180,_5192,cut(1,max_type(_5182,var,_5194,is(_5202,_5184+1,
	 * cover_type2(_5172,_5174,_5176,_5178,_5180,_5194,_5202,_5186,_5188,_5210))))))
	 * )).
	 * cover_type2([_5322|_5324],_5326,_5328,_5330,_5332,_5334,_5336,_5338,_5340,
	 * _5448):-smallerorequal(_5328,_5322,function(_5322,_5326,_5342,true_set(_5342,
	 * _5344,not(set_member(_5332,_5344),cut(1,false_set(_5342,_5352,or((set_member(
	 * _5332,_5352)->(set_subset(_5330,_5344)->max_type(_5334,fcn,_5372);max_type(
	 * _5334,mcf,_5372))),(set_subset(_5330,_5344)->max_type(_5334,exf,_5372);
	 * max_type(_5334,exmcf,_5372)),is(_5440,_5336+1,cover_type2(_5324,_5326,_5328,
	 * _5330,_5332,_5372,_5440,_5338,_5340,_5448))))))))).
	 * cover_type2([_5564|_5566],_5568,_5570,_5572,_5574,_5576,_5578,_5580,_5582,
	 * _5590):-cover_type2(_5566,_5568,_5570,_5572,_5574,_5576,_5578,_5580,_5582,
	 * _5590).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_best_vector_12 : public Code {

	/*
	 * 
	 * best_vector(dummy,_5642,_5644,_5646,_5648,_5650,_5652,_5654,_5648,_5650,_5652
	 * ,_5654,_5662):-cut(1,_5662).
	 * best_vector(_5704,_5706,_5708,_5710,dummy,_5712,_5714,_5716,_5704,_5706,_5708
	 * ,_5710,_5724):-cut(1,_5724).
	 * best_vector(_5766,_5768,_5770,_5772,_5774,_5776,_5770,_5778,_5766,_5768,_5770
	 * ,_5772,_5788):-function_number(_5766,_5780,function_number(_5774,_5780,
	 * smallerthan(_5772,_5778,cut(1,_5788)))).
	 * best_vector(_5854,_5856,_5858,_5860,_5862,_5864,_5858,_5866,_5862,_5864,_5858
	 * ,_5866,_5876):-function_number(_5854,_5868,function_number(_5862,_5868,
	 * smallerorequal(_5866,_5860,cut(1,_5876)))).
	 * best_vector(_5942,_5944,_5946,_5948,_5950,_5952,_5946,_5954,_5942,_5944,_5946
	 * ,_5948,_5978):-or(_5946=exp,_5946=var,function_number(_5942,_5968,
	 * function_number(_5950,_5970,smallerthan(_5970,_5968,cut(1,_5978))))).
	 * best_vector(_6052,_6054,_6056,_6058,_6060,_6062,_6056,_6064,_6060,_6062,_6056
	 * ,_6064,_6088):-or(_6056=exp,_6056=var,function_number(_6052,_6078,
	 * function_number(_6060,_6080,smallerthan(_6078,_6080,cut(1,_6088))))).
	 * best_vector(_6162,_6164,_6166,_6168,_6170,_6172,_6166,_6174,_6162,_6164,_6166
	 * ,_6168,_6204):-not((_6166=exp;_6166=var),function_number(_6162,_6194,
	 * function_number(_6170,_6196,smallerthan(_6194,_6196,cut(1,_6204))))).
	 * best_vector(_6276,_6278,_6280,_6282,_6284,_6286,_6280,_6288,_6284,_6286,_6280
	 * ,_6288,_6318):-not((_6280=exp;_6280=var),function_number(_6276,_6308,
	 * function_number(_6284,_6310,smallerthan(_6310,_6308,cut(1,_6318))))).
	 * best_vector(_6390,_6392,_6394,_6396,_6398,_6400,_6402,_6404,_6390,_6392,_6394
	 * ,_6396,_6412):-type_order(_6402,_6394,cut(1,_6412)).
	 * best_vector(_6462,_6464,_6466,_6468,_6470,_6472,_6474,_6476,_6470,_6472,_6474
	 * ,_6476,_6484):-type_order(_6466,_6474,cut(1,_6484)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_max_type_3 : public Code {

	/*
	 * 
	 * max_type(_6534,_6536,_6534,_6544):-type_order(_6534,_6536,cut(1,_6544)).
	 * max_type(_6576,_6578,_6578,_6592):-not(type_order(_6576,_6578),cut(1,_6592)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_type_order_2 : public Code {

	/*
	 * 
	 * type_order(cov,exp,_6630):-call(_6630).
	 * type_order(cov,var,_6654):-call(_6654).
	 * type_order(cov,fcn,_6678):-call(_6678).
	 * type_order(cov,mcf,_6702):-call(_6702).
	 * type_order(cov,exf,_6726):-call(_6726).
	 * type_order(cov,exmcf,_6750):-call(_6750).
	 * type_order(cov,nf,_6774):-call(_6774).
	 * type_order(exp,var,_6798):-call(_6798).
	 * type_order(exp,fcn,_6822):-call(_6822).
	 * type_order(exp,mcf,_6846):-call(_6846).
	 * type_order(exp,exf,_6870):-call(_6870).
	 * type_order(exp,exmcf,_6894):-call(_6894).
	 * type_order(exp,nf,_6918):-call(_6918).
	 * type_order(var,fcn,_6942):-call(_6942).
	 * type_order(var,mcf,_6966):-call(_6966).
	 * type_order(var,exf,_6990):-call(_6990).
	 * type_order(var,exmcf,_7014):-call(_7014).
	 * type_order(var,nf,_7038):-call(_7038).
	 * type_order(fcn,mcf,_7062):-call(_7062).
	 * type_order(fcn,exf,_7086):-call(_7086).
	 * type_order(fcn,exmcf,_7110):-call(_7110).
	 * type_order(fcn,nf,_7134):-call(_7134).
	 * type_order(mcf,exf,_7158):-call(_7158).
	 * type_order(mcf,exmcf,_7182):-call(_7182).
	 * type_order(mcf,nf,_7206):-call(_7206).
	 * type_order(exf,exmcf,_7230):-call(_7230).
	 * type_order(exf,nf,_7254):-call(_7254).
	 * type_order(exmcf,nf,_7278):-call(_7278).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_cover_vector_7 : public Code {

	/*
	 * 
	 * cover_vector(_7294,_7296,_7298,_7300,_7302,_7304,_7306,_7320):-
	 * immediate_predecessors(_7300,_7308,conceivable_inputs(_7300,_7310,
	 * vector_types(_7312,cover_vector(_7312,_7308,_7310,_7300,_7302,_7294,_7296,
	 * _7298,_7304,_7306,_7320)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_vector_types_1 : public Code {

	/*
	 * 
	 * vector_types(var,_7400):-call(_7400). vector_types(exp,_7422):-call(_7422).
	 * vector_types(fcn,_7444):-call(_7444). vector_types(mcf,_7466):-call(_7466).
	 * vector_types(exf,_7488):-call(_7488). vector_types(exmcf,_7510):-call(_7510).
	 * vector_types(nf,_7532):-call(_7532).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_cover_vector_10 : public Code {

	/*
	 * 
	 * cover_vector(exp,[_7548|_7550],_7552,_7554,_7556,_7558,_7560,_7562,_7560,
	 * _7564,_7582):-function(_7548,_7562,_7566,true_set(_7566,_7568,not(set_member(
	 * _7556,_7568),update_circuit(_7562,_7566,_7554,_7556,_7562,_7564,_7582)))).
	 * cover_vector(exp,[_7656|_7658],_7660,_7662,_7664,_7666,_7668,_7670,_7668,
	 * _7672,_7682):-cover_vector(exp,_7658,_7674,_7662,_7664,_7666,_7668,_7670,
	 * _7668,_7672,_7682).
	 * cover_vector(var,_7744,[_7740|_7742],_7746,_7748,_7750,_7752,_7754,_7752,
	 * _7756,_7768):-smallerthan(_7740,_7750,function(_7740,_7754,_7758,false_set(
	 * _7758,_7760,set_member(_7748,_7760,update_circuit(_7754,_7758,_7746,_7748,
	 * _7754,_7756,_7768))))).
	 * cover_vector(var,_7856,[_7852|_7854],_7858,_7860,_7862,_7864,_7866,_7864,
	 * _7868,_7878):-cover_vector(var,_7870,_7854,_7858,_7860,_7862,_7864,_7866,
	 * _7864,_7868,_7878).
	 * cover_vector(fcn,_7940,[_7936|_7938],_7942,_7944,_7946,_7948,_7950,_7948,
	 * _7952,_7968):-smallerorequal(_7946,_7936,function(_7936,_7950,_7954,false_set
	 * (_7954,_7956,set_member(_7944,_7956,true_set(_7954,_7958,false_set(_7942,
	 * _7960,set_subset(_7960,_7958,update_circuit(_7950,_7954,_7942,_7944,_7950,
	 * _7952,_7968)))))))).
	 * cover_vector(fcn,_8080,[_8076|_8078],_8082,_8084,_8086,_8088,_8090,_8088,
	 * _8092,_8102):-cover_vector(fcn,_8094,_8078,_8082,_8084,_8086,_8088,_8090,
	 * _8088,_8092,_8102).
	 * cover_vector(mcf,_8164,[_8160|_8162],_8166,_8168,_8170,_8172,_8174,_8172,
	 * _8176,_8198):-smallerorequal(_8170,_8160,function(_8160,_8174,_8178,false_set
	 * (_8178,_8180,set_member(_8168,_8180,true_set(_8178,_8182,false_set(_8166,
	 * _8184,not(set_subset(_8184,_8182),update_circuit(_8174,_8178,_8166,_8168,
	 * _8174,_8176,_8198)))))))).
	 * cover_vector(mcf,_8308,[_8304|_8306],_8310,_8312,_8314,_8316,_8318,_8316,
	 * _8320,_8330):-cover_vector(mcf,_8322,_8306,_8310,_8312,_8314,_8316,_8318,
	 * _8316,_8320,_8330).
	 * cover_vector(exf,_8392,[_8388|_8390],_8394,_8396,_8398,_8400,_8402,_8400,
	 * _8404,_8432):-smallerorequal(_8398,_8388,function(_8388,_8402,_8406,false_set
	 * (_8406,_8408,not(set_member(_8396,_8408),true_set(_8406,_8416,not(set_member(
	 * _8396,_8416),false_set(_8394,_8424,set_subset(_8424,_8416,update_circuit(
	 * _8402,_8406,_8394,_8396,_8402,_8404,_8432))))))))).
	 * cover_vector(exf,_8548,[_8544|_8546],_8550,_8552,_8554,_8556,_8558,_8556,
	 * _8560,_8570):-cover_vector(exf,_8562,_8546,_8550,_8552,_8554,_8556,_8558,
	 * _8556,_8560,_8570).
	 * cover_vector(exmcf,_8632,[_8628|_8630],_8634,_8636,_8638,_8640,_8642,_8640,
	 * _8644,_8678):-smallerorequal(_8638,_8628,function(_8628,_8642,_8646,false_set
	 * (_8646,_8648,not(set_member(_8636,_8648),true_set(_8646,_8656,not(set_member(
	 * _8636,_8656),false_set(_8634,_8664,not(set_subset(_8664,_8656),update_circuit
	 * (_8642,_8646,_8634,_8636,_8642,_8644,_8678))))))))).
	 * cover_vector(exmcf,_8792,[_8788|_8790],_8794,_8796,_8798,_8800,_8802,_8800,
	 * _8804,_8814):-cover_vector(exmcf,_8806,_8790,_8794,_8796,_8798,_8800,_8802,
	 * _8800,_8804,_8814).
	 * cover_vector(nf,_8870,_8872,_8874,_8876,_8878,_8880,_8882,_8884,_8886,_8930):
	 * -is(_8884,_8880+1,false_set(_8874,_8894,new_function_CIs(_8882,function(_8880
	 * ,_8894,[_8876],[],[],[],[],[]),_8878,_8920,_8922,update_circuit(_8920,_8922,
	 * _8874,_8876,_8920,_8886,_8930)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_update_circuit_6 : public Code {

	/*
	 * 
	 * update_circuit([],_9008,_9010,_9012,_9014,[],_9024):-call(_9024).
	 * update_circuit([function(_9050,_9052,_9054,_9056,_9058,_9060,_9062,_9064)|
	 * _9070],_9096,_9098,_9100,_9102,[function(_9050,_9076,_9078,_9080,_9082,_9084,
	 * _9086,_9088)|_9094],_9548):-unify(function(_9106,_9108,_9110,_9112,_9114,
	 * _9116,_9118,_9120),_9096,unify(function(_9124,_9126,_9128,_9130,_9132,_9134,
	 * _9136,_9138),_9098,set_union([_9106],_9118,_9146,set_union([_9124],_9138,
	 * _9154,or((_9050=_9124->set_union(_9052,_9110,_9168)),_9168=_9052,or((_9050=
	 * _9106->set_union(_9168,_9128,_9194)),_9194=_9168,or(((set_member(_9050,_9114)
	 * ;set_member(_9050,_9116))->set_union(_9194,[_9100],_9076)),_9076=_9194,or((
	 * _9050=_9106->set_union(_9054,[_9100],_9078)),_9078=_9054,or(((set_member(
	 * _9050,_9118);_9050=_9106)->set_difference(_9056,_9154,_9308)),_9308=_9056,or(
	 * (set_member(_9106,_9056),set_member(_9100,_9054)->set_difference(_9308,[_9106
	 * ],_9352)),_9352=_9308,or((_9050=_9106->exclude_if_vector_in_false_set(_9352,
	 * _9102,_9100,_9380)),_9380=_9352,or((_9050=_9124->set_difference(_9380,[_9106]
	 * ,_9080)),_9080=_9380,or((_9050=_9124->set_union(_9058,[_9106],_9082)),_9082=
	 * _9058,or((_9050=_9106->set_union(_9060,[_9124],_9084)),_9084=_9060,or((
	 * set_member(_9050,_9154)->set_union(_9062,_9146,_9086)),_9086=_9062,or((
	 * set_member(_9050,_9146)->set_union(_9064,_9154,_9088)),_9088=_9064,
	 * update_circuit(_9070,_9096,_9098,_9100,_9102,_9094,_9548))))))))))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_exclude_if_vector_in_false_set_4 : public Code {

	/*
	 * 
	 * exclude_if_vector_in_false_set([],_9720,_9722,[],_9732):-call(_9732).
	 * exclude_if_vector_in_false_set([_9754|_9756],_9758,_9760,_9762,_9774):-
	 * function(_9754,_9758,_9764,false_set(_9764,_9766,set_member(_9760,_9766,cut(1
	 * ,exclude_if_vector_in_false_set(_9756,_9758,_9760,_9762,_9774))))).
	 * exclude_if_vector_in_false_set([_9840|_9842],_9850,_9852,[_9840|_9848],_9860)
	 * :-exclude_if_vector_in_false_set(_9842,_9850,_9852,_9848,_9860).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_add_necessary_functions_5 : public Code {

	/*
	 * 
	 * add_necessary_functions(_9892,_9894,_9896,_9898,_9900,_9908):-
	 * add_necessary_functions(_9892,_9892,_9894,_9896,_9898,_9900,_9908).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_add_necessary_functions_6 : public Code {

	/*
	 * 
	 * add_necessary_functions(_9946,_9948,_9946,_9950,_9946,_9950,_9958):-cut(1,
	 * _9958).
	 * add_necessary_functions(_9988,_9990,_9992,_9994,_9996,_9998,_10060):-function
	 * (_9988,_9994,_10000,function_type(_9990,_9992,_9994,_10000,nf,_10002,cut(1,
	 * false_set(_10000,_10004,new_function_CIs(_9994,function(_9992,_10004,[_10002]
	 * ,[],[],[],[],[]),_9990,_10030,_10032,function(_9988,_10030,_10034,
	 * update_circuit(_10030,_10032,_10034,_10002,_10030,_10036,is(_10044,_9992+1,is
	 * (_10052,_9988+1,add_necessary_functions(_10052,_9990,_10044,_10036,_9996,
	 * _9998,_10060)))))))))).
	 * add_necessary_functions(_10196,_10198,_10200,_10202,_10204,_10206,_10222):-is
	 * (_10214,_10196+1,add_necessary_functions(_10214,_10198,_10200,_10202,_10204,
	 * _10206,_10222)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_new_function_CIs_5 : public Code {

	/*
	 * 
	 * new_function_CIs(_10294,function(_10272,_10274,_10276,_10278,_10280,_10282,
	 * _10284,_10286),_10296,[_10290|_10292],_10290,_10324):-new_function_CIs(_10294
	 * ,_10272,_10276,_10296,_10292,[],_10298,unify(function(_10272,_10274,_10276,
	 * _10298,_10280,_10282,_10284,_10286),_10290,_10324)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_new_function_CIs_7 : public Code {

	/*
	 * 
	 * new_function_CIs([],_10372,_10374,_10376,[],_10378,_10378,_10388):-call(
	 * _10388).
	 * new_function_CIs([function(_10416,_10418,_10420,_10422,_10424,_10426,_10428,
	 * _10430)|_10436],_10462,_10464,_10466,[function(_10416,_10418,_10420,_10446,
	 * _10424,_10426,_10428,_10430)|_10460],_10468,_10470,_10516):-set_intersection(
	 * _10464,_10420,[],cut(1,or((_10416>=_10466->set_union(_10422,[_10462],_10446))
	 * ,_10446=_10422,new_function_CIs(_10436,_10462,_10464,_10466,_10460,[_10416|
	 * _10468],_10470,_10516)))).
	 * new_function_CIs([_10586|_10588],_10596,_10598,_10600,[_10586|_10594],_10602,
	 * _10604,_10612):-new_function_CIs(_10588,_10596,_10598,_10600,_10594,_10602,
	 * _10604,_10612).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_function_type_6 : public Code {

	/*
	 * 
	 * function_type(_10656,_10658,_10660,_10662,_10664,_10666,_10680):-true_set(
	 * _10662,_10668,select_vector(_10668,_10662,_10656,_10658,_10660,dummy,0,nf,999
	 * ,_10670,_10666,_10664,_10672,_10680)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_test_bounds_3 : public Code {

	/*
	 * 
	 * test_bounds(_10742,_10744,_10746,_10756):-access(bound,_10748,smallerthan(
	 * _10744,_10748,_10756)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_update_bounds_3 : public Code {

	/*
	 * 
	 * update_bounds(_10790,_10792,_10794,_10802):-set(bound,_10792,_10802).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_set_2 : public Code {

	/*
	 * 
	 * set(_10828,_10830,_10858):-or((recorded(_10828,_10836,_10838)->erase(_10838))
	 * ,true,recorda(_10828,_10830,_10850,_10858)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_access_2 : public Code {

	/*
	 * 
	 * access(_10892,_10894,_10904):-recorded(_10892,_10894,_10896,_10904).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_write_gates_1 : public Code {

	/*
	 * 
	 * write_gates([],_10938):-call(_10938).
	 * write_gates([_10954|_10956],_10968):-function_number(_10954,_10958,write('
	 * gate #',write(_10958,write(' inputs:
	 * ',immediate_predecessors(_10954,_10960,write(_10960,nl(write_gates(_10956,
	 * _10968)))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_function_3 : public Code {

	/*
	 * 
	 * function(_11038,[_11034|_11036],_11034,_11046):-function_number(_11034,_11038
	 * ,cut(1,_11046)).
	 * function(_11084,[_11080|_11082],_11086,_11094):-function(_11084,_11082,_11086
	 * ,_11094).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_function_number_2 : public Code {

	/*
	 * 
	 * function_number(function(_11124,_11126,_11128,_11130,_11132,_11134,_11136,
	 * _11138),_11124,_11148):-call(_11148).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_true_set_2 : public Code {

	/*
	 * 
	 * true_set(function(_11166,_11168,_11170,_11172,_11174,_11176,_11178,_11180),
	 * _11168,_11190):-call(_11190).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_false_set_2 : public Code {

	/*
	 * 
	 * false_set(function(_11208,_11210,_11212,_11214,_11216,_11218,_11220,_11222),
	 * _11212,_11232):-call(_11232).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_conceivable_inputs_2 : public Code {

	/*
	 * 
	 * conceivable_inputs(function(_11250,_11252,_11254,_11256,_11258,_11260,_11262,
	 * _11264),_11256,_11274):-call(_11274).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_immediate_predecessors_2 : public Code {

	/*
	 * 
	 * immediate_predecessors(function(_11292,_11294,_11296,_11298,_11300,_11302,
	 * _11304,_11306),_11300,_11316):-call(_11316).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_immediate_successors_2 : public Code {

	/*
	 * 
	 * immediate_successors(function(_11334,_11336,_11338,_11340,_11342,_11344,
	 * _11346,_11348),_11344,_11358):-call(_11358).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_predecessors_2 : public Code {

	/*
	 * 
	 * predecessors(function(_11376,_11378,_11380,_11382,_11384,_11386,_11388,_11390
	 * ),_11388,_11400):-call(_11400).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_successors_2 : public Code {

	/*
	 * 
	 * successors(function(_11418,_11420,_11422,_11424,_11426,_11428,_11430,_11432),
	 * _11432,_11442):-call(_11442).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_set_union_3 : public Code {

	/*
	 * 
	 * set_union([],[],[],_11466):-call(_11466).
	 * set_union([],[_11486|_11488],[_11486|_11488],_11504):-call(_11504).
	 * set_union([_11524|_11526],[],[_11524|_11526],_11542):-call(_11542).
	 * set_union([_11562|_11564],[_11562|_11570],[_11562|_11576],_11584):-set_union(
	 * _11564,_11570,_11576,_11584).
	 * set_union([_11614|_11616],[_11620|_11622],[_11614|_11628],_11642):-
	 * smallerthan(_11614,_11620,set_union(_11616,[_11620|_11622],_11628,_11642)).
	 * set_union([_11680|_11682],[_11686|_11688],[_11686|_11694],_11708):-
	 * smallerthan(_11686,_11680,set_union([_11680|_11682],_11688,_11694,_11708)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_set_intersection_3 : public Code {

	/*
	 * 
	 * set_intersection([],[],[],_11752):-call(_11752).
	 * set_intersection([],[_11772|_11774],[],_11784):-call(_11784).
	 * set_intersection([_11804|_11806],[],[],_11816):-call(_11816).
	 * set_intersection([_11836|_11838],[_11836|_11844],[_11836|_11850],_11858):-
	 * set_intersection(_11838,_11844,_11850,_11858).
	 * set_intersection([_11888|_11890],[_11894|_11896],_11898,_11912):-smallerthan(
	 * _11888,_11894,set_intersection(_11890,[_11894|_11896],_11898,_11912)).
	 * set_intersection([_11950|_11952],[_11956|_11958],_11960,_11974):-smallerthan(
	 * _11956,_11950,set_intersection([_11950|_11952],_11958,_11960,_11974)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_set_difference_3 : public Code {

	/*
	 * 
	 * set_difference([],[],[],_12018):-call(_12018).
	 * set_difference([],[_12038|_12040],[],_12050):-call(_12050).
	 * set_difference([_12070|_12072],[],[_12070|_12072],_12088):-call(_12088).
	 * set_difference([_12108|_12110],[_12108|_12116],_12118,_12126):-set_difference
	 * (_12110,_12116,_12118,_12126).
	 * set_difference([_12156|_12158],[_12162|_12164],[_12156|_12170],_12184):-
	 * smallerthan(_12156,_12162,set_difference(_12158,[_12162|_12164],_12170,_12184
	 * )).
	 * set_difference([_12222|_12224],[_12228|_12230],_12232,_12246):-smallerthan(
	 * _12228,_12222,set_difference([_12222|_12224],_12230,_12232,_12246)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_set_subset_2 : public Code {

	/*
	 * 
	 * set_subset([],_12282,_12292):-call(_12292).
	 * set_subset([_12310|_12312],[_12310|_12318],_12326):-set_subset(_12312,_12318,
	 * _12326).
	 * set_subset([_12352|_12354],[_12358|_12360],_12374):-smallerthan(_12358,_12352
	 * ,set_subset([_12352|_12354],_12360,_12374)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_set_member_2 : public Code {

	/*
	 * 
	 * set_member(_12408,[_12408|_12410],_12420):-call(_12420).
	 * set_member(_12442,[_12438|_12440],_12450):-smallerthan(_12438,_12442,
	 * set_member(_12442,_12440,_12450)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef NAND
