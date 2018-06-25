#ifndef FLATTEN
#define FLATTEN

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class flatten {
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
	static Int* posint0;
	static Int* posint1;
	static Int* posint65;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_21506):-eliminate_disjunctions([(a(_21428,_21430,_21432):-b(_21428);c(
	 * _21432))],_21464,_21466,[],inst_vars((_21464,_21466),_21506)).
	 * top(_21666):-true(_21666).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_eliminate_disjunctions_4 : public Code {

	/*
	 * 
	 * eliminate_disjunctions(_21716,_21718,_21720,_21722,_21792):-gather_disj(
	 * _21716,_21718,_21730,[],treat_disj(_21730,_21720,_21722,_21792)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_gather_disj_4 : public Code {

	/*
	 * 
	 * gather_disj([],[],_22004,_22004,_22028):-call(_22028).
	 * gather_disj([_22134|_22136],_22142,_22144,_22146,_22236):-extract_disj(_22134
	 * ,_22152,_22144,_22156,unify([_22152|_22162],_22142,gather_disj(_22136,_22162,
	 * _22156,_22146,_22236))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_extract_disj_4 : public Code {

	/*
	 * 
	 * extract_disj(_22526,(_22520:-_22522),_22530,_22532,_22630):-unify((_22520:-
	 * _22538),_22526,cut(1,unify(0,_22548,extract_disj(_22538,_22522,_22530,_22532,
	 * _22526,_22548,_22566,_22630)))).
	 * extract_disj(_22946,_22946,_22950,_22950,_22974):-call(_22974).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_extract_disj_7 : public Code {

	/*
	 * 
	 * extract_disj((_23086,_23088),(_23092,_23094),_23102,_23104,_23106,_23108,
	 * _23110,_23212):-extract_disj(_23086,_23092,_23102,_23120,_23106,_23108,_23126
	 * ,extract_disj(_23088,_23094,_23120,_23104,_23106,_23126,_23110,_23212)).
	 * extract_disj(_23560,_23562,_23564,_23566,_23568,_23570,_23572,_23694):-
	 * is_disj(_23560,_23578,cut(1,unify([disj(_23578,_23570,_23562,_23568)|_23566],
	 * _23564,is(_23572,_23570+1,_23694)))).
	 * extract_disj(_23964,_23964,_23968,_23968,_23972,_23974,_23974,_23998):-call(
	 * _23998).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_is_disj_2 : public Code {

	/*
	 * 
	 * is_disj((_24158->_24160;_24166),(_24158,!,_24160;_24166),_24224):-cut(1,
	 * _24224). is_disj((_24304;_24306),(_24304;_24306),_24340):-call(_24340).
	 * is_disj(not(_24436),(_24436,!,fail;true),_24482):-call(_24482).
	 * is_disj(\+_24578,(_24578,!,fail;true),_24624):-call(_24624).
	 * is_disj(_24720\=_24722,(_24720=_24722,!,fail;true),_24774):-call(_24774).
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
};

class pred_treat_disj_3 : public Code {

	/*
	 * 
	 * treat_disj([],_24872,_24872,_24896):-call(_24896).
	 * treat_disj([disj((_25012;_25014),_25020,_25022,_25024)|_25030],_25036,_25038,
	 * _25182):-find_vars((_25012;_25014),_25050,find_vars(_25024,_25056,
	 * intersect_vars(_25050,_25056,_25064,make_dummy_name(_25020,_25070,=..(_25022,
	 * [_25070|_25064],make_dummy_clauses((_25012;_25014),_25022,_25036,_25098,
	 * treat_disj(_25030,_25098,_25038,_25182))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_make_dummy_clauses_4 : public Code {

	/*
	 * 
	 * make_dummy_clauses((_25676;_25678),_25690,[_25682|_25684],_25694,_25774):-cut
	 * (1,copy((_25690:-_25676),_25682,make_dummy_clauses(_25678,_25690,_25684,
	 * _25694,_25774))).
	 * make_dummy_clauses(_26016,_26018,[_26010|_26012],_26012,_26080):-copy((_26018
	 * :-_26016),_26010,_26080).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_find_vars_2 : public Code {

	/*
	 * 
	 * find_vars(_26232,_26234,_26288):-find_vars(_26232,_26234,_26242,unify([],
	 * _26242,_26288)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_find_vars_3 : public Code {

	/*
	 * 
	 * find_vars(_26500,[_26500|_26502],_26502,_26560):-var(_26500,cut(1,_26560)).
	 * find_vars(_26708,_26710,_26710,_26762):-atomic(_26708,cut(1,_26762)).
	 * find_vars([_26910|_26912],_26918,_26920,_26988):-cut(1,find_vars(_26910,
	 * _26918,_26928,find_vars(_26912,_26928,_26920,_26988))).
	 * find_vars(_27228,_27230,_27232,_27298):-
	 * =..(_27228,[_27236|_27238],find_vars(_27238,_27230,_27232,_27298)).
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

class pred_intersect_vars_3 : public Code {

	/*
	 * 
	 * intersect_vars(_27518,_27520,_27522,_27594):-sort_vars(_27518,_27528,
	 * sort_vars(_27520,_27534,intersect_sorted_vars(_27528,_27534,_27522,_27594))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_make_dummy_name_2 : public Code {

	/*
	 * 
	 * make_dummy_name(_27870,_27872,_27950):-name('_dummy_',_27878,name(_27870,
	 * _27884,append(_27878,_27884,_27892,name(_27872,_27892,_27950)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_append_3 : public Code {

	/*
	 * 
	 * append([],_28276,_28276,_28300):-call(_28300).
	 * append([_28452|_28454],_28466,[_28452|_28460],_28516):-append(_28454,_28466,
	 * _28460,_28516).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_copy_2 : public Code {

	/*
	 * 
	 * copy(_28704,_28706,_28778):-varset(_28704,_28712,make_sym(_28712,_28718,copy2
	 * (_28704,_28706,_28718,cut(1,_28778)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_copy2_3 : public Code {

	/*
	 * 
	 * copy2(_29070,_29072,_29074,_29138):-var(_29070,cut(1,retrieve_sym(_29070,
	 * _29074,_29072,_29138))).
	 * copy2(_29380,_29382,_29384,_29480):-nonvar(_29380,cut(1,functor(_29380,_29394
	 * ,_29396,functor(_29382,_29394,_29396,copy2(_29380,_29382,_29384,1,_29396,
	 * _29480))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_copy2_5 : public Code {

	/*
	 * 
	 * copy2(_29878,_29880,_29882,_29884,_29886,_29950):-smallerthan(_29886,_29884,
	 * cut(1,_29950)).
	 * copy2(_30170,_30172,_30174,_30176,_30178,_30320):-smallerorequal(_30176,
	 * _30178,cut(1,arg(_30176,_30170,_30192,arg(_30176,_30172,_30200,copy2(_30192,
	 * _30200,_30174,is(_30218,_30176+1,copy2(_30170,_30172,_30174,_30218,_30178,
	 * _30320))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_retrieve_sym_3 : public Code {

	/*
	 * 
	 * retrieve_sym(_30886,[p(_30874,_30876)|_30882],_30876,_30942):-termequal(
	 * _30886,_30874,cut(1,_30942)).
	 * retrieve_sym(_31158,[_31152|_31154],_31162,_31210):-retrieve_sym(_31158,
	 * _31154,_31162,_31210).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_make_sym_2 : public Code {

	/*
	 * 
	 * make_sym([],[],_31446):-call(_31446).
	 * make_sym([_31614|_31616],[p(_31614,_31622)|_31628],_31674):-make_sym(_31616,
	 * _31628,_31674).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_varset_2 : public Code {

	/*
	 * 
	 * varset(_31870,_31872,_31924):-varbag(_31870,_31878,sort(_31878,_31872,_31924)
	 * ).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_varbag_2 : public Code {

	/*
	 * 
	 * varbag(_32176,_32178,_32220):-varbag(_32176,_32178,[],_32220).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_dcg_arrow_2 : public Code {

	/*
	 * 
	 * -->(varbag(_32442),({var(_32442)},!,[_32442]),_32496):-call(_32496).
	 * -->(varbag(_32682),({nonvar(_32682),!,functor(_32682,_32692,_32694)},varbag(
	 * _32682,1,_32694)),_32752):-call(_32752).
	 * -->(varbag(_32938,_32940,_32942),({_32940>_32942},!),_32986):-call(_32986).
	 * -->(varbag(_33172,_33174,_33176),({_33174=<_33176},!,{arg(_33174,_33172,
	 * _33194)},varbag(_33194),{_33212 is
	 * _33174+1},varbag(_33172,_33212,_33176)),_33284):-call(_33284).
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

class pred_inst_vars_1 : public Code {

	/*
	 * 
	 * inst_vars(_33470,_33540):-varset(_33470,_33476,unify([65],[_33480],
	 * inst_vars_list(_33476,_33480,_33540))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_inst_vars_list_2 : public Code {

	/*
	 * 
	 * inst_vars_list([],_33860,_33882):-call(_33882).
	 * inst_vars_list([_34080|_34082],_34088,_34164):-name(_34080,[_34088],is(_34110
	 * ,_34088+1,inst_vars_list(_34082,_34110,_34164))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sort_vars_2 : public Code {

	/*
	 * 
	 * sort_vars(_34490,_34492,_34534):-sort_vars(_34490,_34492,[],_34534).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sort_vars_3 : public Code {

	/*
	 * 
	 * sort_vars([],_34782,_34782,_34806):-call(_34806).
	 * sort_vars([_35030|_35032],_35038,_35040,_35124):-split_vars(_35032,_35030,
	 * _35048,_35050,sort_vars(_35048,_35038,[_35030|_35056],sort_vars(_35050,_35056
	 * ,_35040,_35124))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_intersect_sorted_vars_3 : public Code {

	/*
	 * 
	 * intersect_sorted_vars([],_35528,[],_35570):-cut(1,_35570).
	 * intersect_sorted_vars(_35778,[],[],_35804):-call(_35804).
	 * intersect_sorted_vars([_36034|_36036],[_36040|_36042],[_36034|_36048],_36122)
	 * :-termequal(_36034,_36040,cut(1,intersect_sorted_vars(_36036,_36042,_36048,
	 * _36122))).
	 * intersect_sorted_vars([_36450|_36452],[_36456|_36458],_36466,_36538):-
	 * termsmallerthan(_36450,_36456,cut(1,intersect_sorted_vars(_36452,[_36456|
	 * _36458],_36466,_36538))).
	 * intersect_sorted_vars([_36866|_36868],[_36872|_36874],_36882,_36954):-
	 * termgreaterthan(_36866,_36872,cut(1,intersect_sorted_vars([_36866|_36868],
	 * _36874,_36882,_36954))).
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
};

class pred_split_vars_4 : public Code {

	/*
	 * 
	 * split_vars([],_37284,[],[],_37310):-call(_37310).
	 * split_vars([_37560|_37562],_37574,[_37560|_37568],_37578,_37652):-
	 * termsmallerthan(_37560,_37574,cut(1,split_vars(_37562,_37574,_37568,_37578,
	 * _37652))).
	 * split_vars([_38008|_38010],_38016,_38018,_38020,_38094):-termequal(_38008,
	 * _38016,cut(1,split_vars(_38010,_38016,_38018,_38020,_38094))).
	 * split_vars([_38450|_38452],_38464,_38466,[_38450|_38458],_38542):-
	 * termgreaterthan(_38450,_38464,cut(1,split_vars(_38452,_38464,_38466,_38458,
	 * _38542))).
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


#endif	//#ifndef FLATTEN
