#ifndef FLATTEN
#define FLATTEN

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class flatten {
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
	static Const* const  s10;
	static Const* const  s11;
	static Const* const  s12;
	static Const* const  s13;
	static Const* const  s14;
	static Const* const  s__dummy_;
	static Const* const  s_a;
	static Const* const  s_append;
	static Const* const  s_arg;
	static Const* const  s_atomic;
	static Const* const  s_b;
	static Const* const  s_c;
	static Const* const  s_call;
	static Const* const  s_copy;
	static Const* const  s_copy2;
	static Const* const  s_disj;
	static Const* const  s_eliminate_disjunctions;
	static Const* const  s_extract_disj;
	static Const* const  s_fail;
	static Const* const  s_find_vars;
	static Const* const  s_functor;
	static Const* const  s_gather_disj;
	static Const* const  s_inst_vars;
	static Const* const  s_inst_vars_list;
	static Const* const  s_intersect_sorted_vars;
	static Const* const  s_intersect_vars;
	static Const* const  s_is;
	static Const* const  s_is_disj;
	static Const* const  s_make_dummy_clauses;
	static Const* const  s_make_dummy_name;
	static Const* const  s_make_sym;
	static Const* const  s_name;
	static Const* const  s_nonvar;
	static Const* const  s_not;
	static Const* const  s_p;
	static Const* const  s_retrieve_sym;
	static Const* const  s_smallerorequal;
	static Const* const  s_smallerthan;
	static Const* const  s_sort;
	static Const* const  s_sort_vars;
	static Const* const  s_split_vars;
	static Const* const  s_termequal;
	static Const* const  s_termgreaterthan;
	static Const* const  s_termsmallerthan;
	static Const* const  s_top;
	static Const* const  s_treat_disj;
	static Const* const  s_true;
	static Const* const  s_unify;
	static Const* const  s_var;
	static Const* const  s_varbag;
	static Const* const  s_varset;
	static Const* const  s62;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint65;
	static Operation* const  reg_top_0;
	static Operation* const  reg_eliminate_disjunctions_4;
	static Operation* const  reg_gather_disj_4;
	static Operation* const  reg_extract_disj_4;
	static Operation* const  reg_extract_disj_7;
	static Operation* const  reg_is_disj_2;
	static Operation* const  reg_treat_disj_3;
	static Operation* const  reg_make_dummy_clauses_4;
	static Operation* const  reg_find_vars_2;
	static Operation* const  reg_find_vars_3;
	static Operation* const  reg_intersect_vars_3;
	static Operation* const  reg_make_dummy_name_2;
	static Operation* const  reg_append_3;
	static Operation* const  reg_copy_2;
	static Operation* const  reg_copy2_3;
	static Operation* const  reg_copy2_5;
	static Operation* const  reg_retrieve_sym_3;
	static Operation* const  reg_make_sym_2;
	static Operation* const  reg_varset_2;
	static Operation* const  reg_varbag_2;
	static Operation* const  reg_$002D$002D$003E_2;
	static Operation* const  reg_inst_vars_1;
	static Operation* const  reg_inst_vars_list_2;
	static Operation* const  reg_sort_vars_2;
	static Operation* const  reg_sort_vars_3;
	static Operation* const  reg_intersect_sorted_vars_3;
	static Operation* const  reg_split_vars_4;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_24778):-eliminate_disjunctions([(a(_24700,_24702,_24704):-b(_24700);c(_24704))],_24736,_24738,[],inst_vars((_24736,_24738),_24778)).
	top(_24938):-true(_24938).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	static Operation* exec_pred_top_0__2(Prolog* mach);
	};


public:
	class pred_eliminate_disjunctions_4 : public Code {

	/*
	
	eliminate_disjunctions(_24988,_24990,_24992,_24994,_25064):-gather_disj(_24988,_24990,_25002,[],treat_disj(_25002,_24992,_24994,_25064)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_eliminate_disjunctions_4__1(Prolog* mach);
	};


public:
	class pred_gather_disj_4 : public Code {

	/*
	
	gather_disj([],[],_25276,_25276,_25300):-call(_25300).
	gather_disj([_25406|_25408],_25414,_25416,_25418,_25508):-extract_disj(_25406,_25424,_25416,_25428,unify([_25424|_25434],_25414,gather_disj(_25408,_25434,_25428,_25418,_25508))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_gather_disj_4__1(Prolog* mach);
	static Operation* exec_pred_gather_disj_4__2(Prolog* mach);
	};


public:
	class pred_extract_disj_4 : public Code {

	/*
	
	extract_disj(_25798,(_25792:-_25794),_25802,_25804,_25902):-unify((_25792:-_25810),_25798,cut(1,unify(0,_25820,extract_disj(_25810,_25794,_25802,_25804,_25798,_25820,_25838,_25902)))).
	extract_disj(_26218,_26218,_26222,_26222,_26246):-call(_26246).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_extract_disj_4__1(Prolog* mach);
	static Operation* exec_pred_extract_disj_4__2(Prolog* mach);
	};


public:
	class pred_extract_disj_7 : public Code {

	/*
	
	extract_disj((_26358,_26360),(_26364,_26366),_26374,_26376,_26378,_26380,_26382,_26484):-extract_disj(_26358,_26364,_26374,_26392,_26378,_26380,_26398,extract_disj(_26360,_26366,_26392,_26376,_26378,_26398,_26382,_26484)).
	extract_disj(_26832,_26834,_26836,_26838,_26840,_26842,_26844,_26966):-is_disj(_26832,_26850,cut(1,unify([disj(_26850,_26842,_26834,_26840)|_26838],_26836,is(_26844,_26842+1,_26966)))).
	extract_disj(_27236,_27236,_27240,_27240,_27244,_27246,_27246,_27270):-call(_27270).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_extract_disj_7__1(Prolog* mach);
	static Operation* exec_pred_extract_disj_7__2(Prolog* mach);
	static Operation* exec_pred_extract_disj_7__3(Prolog* mach);
	};


public:
	class pred_is_disj_2 : public Code {

	/*
	
	is_disj((_27430->_27432;_27438),(_27430,!,_27432;_27438),_27496):-cut(1,_27496).
	is_disj((_27576;_27578),(_27576;_27578),_27612):-call(_27612).
	is_disj(not(_27708),(_27708,!,fail;true),_27754):-call(_27754).
	is_disj(\+_27850,(_27850,!,fail;true),_27896):-call(_27896).
	is_disj(_27992\=_27994,(_27992=_27994,!,fail;true),_28046):-call(_28046).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_is_disj_2__1(Prolog* mach);
	static Operation* exec_pred_is_disj_2__2(Prolog* mach);
	static Operation* exec_pred_is_disj_2__3(Prolog* mach);
	static Operation* exec_pred_is_disj_2__4(Prolog* mach);
	static Operation* exec_pred_is_disj_2__5(Prolog* mach);
	};


public:
	class pred_treat_disj_3 : public Code {

	/*
	
	treat_disj([],_28144,_28144,_28168):-call(_28168).
	treat_disj([disj((_28284;_28286),_28292,_28294,_28296)|_28302],_28308,_28310,_28454):-find_vars((_28284;_28286),_28322,find_vars(_28296,_28328,intersect_vars(_28322,_28328,_28336,make_dummy_name(_28292,_28342,=..(_28294,[_28342|_28336],make_dummy_clauses((_28284;_28286),_28294,_28308,_28370,treat_disj(_28302,_28370,_28310,_28454))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_treat_disj_3__1(Prolog* mach);
	static Operation* exec_pred_treat_disj_3__2(Prolog* mach);
	};


public:
	class pred_make_dummy_clauses_4 : public Code {

	/*
	
	make_dummy_clauses((_28948;_28950),_28962,[_28954|_28956],_28966,_29046):-cut(1,copy((_28962:-_28948),_28954,make_dummy_clauses(_28950,_28962,_28956,_28966,_29046))).
	make_dummy_clauses(_29288,_29290,[_29282|_29284],_29284,_29352):-copy((_29290:-_29288),_29282,_29352).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_make_dummy_clauses_4__1(Prolog* mach);
	static Operation* exec_pred_make_dummy_clauses_4__2(Prolog* mach);
	};


public:
	class pred_find_vars_2 : public Code {

	/*
	
	find_vars(_29504,_29506,_29560):-find_vars(_29504,_29506,_29514,unify([],_29514,_29560)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_find_vars_2__1(Prolog* mach);
	};


public:
	class pred_find_vars_3 : public Code {

	/*
	
	find_vars(_29772,[_29772|_29774],_29774,_29832):-var(_29772,cut(1,_29832)).
	find_vars(_29980,_29982,_29982,_30034):-atomic(_29980,cut(1,_30034)).
	find_vars([_30182|_30184],_30190,_30192,_30260):-cut(1,find_vars(_30182,_30190,_30200,find_vars(_30184,_30200,_30192,_30260))).
	find_vars(_30500,_30502,_30504,_30570):- =..(_30500,[_30508|_30510],find_vars(_30510,_30502,_30504,_30570)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_find_vars_3__1(Prolog* mach);
	static Operation* exec_pred_find_vars_3__2(Prolog* mach);
	static Operation* exec_pred_find_vars_3__3(Prolog* mach);
	static Operation* exec_pred_find_vars_3__4(Prolog* mach);
	};


public:
	class pred_intersect_vars_3 : public Code {

	/*
	
	intersect_vars(_30790,_30792,_30794,_30866):-sort_vars(_30790,_30800,sort_vars(_30792,_30806,intersect_sorted_vars(_30800,_30806,_30794,_30866))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_intersect_vars_3__1(Prolog* mach);
	};


public:
	class pred_make_dummy_name_2 : public Code {

	/*
	
	make_dummy_name(_31142,_31144,_31222):-name('_dummy_',_31150,name(_31142,_31156,append(_31150,_31156,_31164,name(_31144,_31164,_31222)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_make_dummy_name_2__1(Prolog* mach);
	};


public:
	class pred_append_3 : public Code {

	/*
	
	append([],_31548,_31548,_31572):-call(_31572).
	append([_31724|_31726],_31738,[_31724|_31732],_31788):-append(_31726,_31738,_31732,_31788).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_append_3__1(Prolog* mach);
	static Operation* exec_pred_append_3__2(Prolog* mach);
	};


public:
	class pred_copy_2 : public Code {

	/*
	
	copy(_31976,_31978,_32050):-varset(_31976,_31984,make_sym(_31984,_31990,copy2(_31976,_31978,_31990,cut(1,_32050)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_copy_2__1(Prolog* mach);
	};


public:
	class pred_copy2_3 : public Code {

	/*
	
	copy2(_32342,_32344,_32346,_32410):-var(_32342,cut(1,retrieve_sym(_32342,_32346,_32344,_32410))).
	copy2(_32652,_32654,_32656,_32752):-nonvar(_32652,cut(1,functor(_32652,_32666,_32668,functor(_32654,_32666,_32668,copy2(_32652,_32654,_32656,1,_32668,_32752))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_copy2_3__1(Prolog* mach);
	static Operation* exec_pred_copy2_3__2(Prolog* mach);
	};


public:
	class pred_copy2_5 : public Code {

	/*
	
	copy2(_33150,_33152,_33154,_33156,_33158,_33222):-smallerthan(_33158,_33156,cut(1,_33222)).
	copy2(_33442,_33444,_33446,_33448,_33450,_33592):-smallerorequal(_33448,_33450,cut(1,arg(_33448,_33442,_33464,arg(_33448,_33444,_33472,copy2(_33464,_33472,_33446,is(_33490,_33448+1,copy2(_33442,_33444,_33446,_33490,_33450,_33592))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_copy2_5__1(Prolog* mach);
	static Operation* exec_pred_copy2_5__2(Prolog* mach);
	};


public:
	class pred_retrieve_sym_3 : public Code {

	/*
	
	retrieve_sym(_34158,[p(_34146,_34148)|_34154],_34148,_34214):-termequal(_34158,_34146,cut(1,_34214)).
	retrieve_sym(_34430,[_34424|_34426],_34434,_34482):-retrieve_sym(_34430,_34426,_34434,_34482).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_retrieve_sym_3__1(Prolog* mach);
	static Operation* exec_pred_retrieve_sym_3__2(Prolog* mach);
	};


public:
	class pred_make_sym_2 : public Code {

	/*
	
	make_sym([],[],_34718):-call(_34718).
	make_sym([_34886|_34888],[p(_34886,_34894)|_34900],_34946):-make_sym(_34888,_34900,_34946).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_make_sym_2__1(Prolog* mach);
	static Operation* exec_pred_make_sym_2__2(Prolog* mach);
	};


public:
	class pred_varset_2 : public Code {

	/*
	
	varset(_35142,_35144,_35196):-varbag(_35142,_35150,sort(_35150,_35144,_35196)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_varset_2__1(Prolog* mach);
	};


public:
	class pred_varbag_2 : public Code {

	/*
	
	varbag(_35448,_35450,_35492):-varbag(_35448,_35450,[],_35492).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_varbag_2__1(Prolog* mach);
	};


public:
	class pred_$002D$002D$003E_2 : public Code {

	/*
	
	-->(varbag(_2790),({var(_2790)},!,[_2790]),_2826):-call(_2826).
	-->(varbag(_2844),({nonvar(_2844),!,functor(_2844,_2854,_2856)},varbag(_2844,1,_2856)),_2896):-call(_2896).
	-->(varbag(_2914,_2916,_2918),({_2916>_2918},!),_2944):-call(_2944).
	-->(varbag(_2962,_2964,_2966),({_2964=<_2966},!,{arg(_2964,_2962,_2984)},varbag(_2984),{_3002 is _2964+1},varbag(_2962,_3002,_2966)),_3056):-call(_3056).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__1(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__2(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__3(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__4(Prolog* mach);
	};


public:
	class pred_inst_vars_1 : public Code {

	/*
	
	inst_vars(_3072,_3094):-varset(_3072,_3074,unify([65],[_3078],inst_vars_list(_3074,_3078,_3094))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_inst_vars_1__1(Prolog* mach);
	};


public:
	class pred_inst_vars_list_2 : public Code {

	/*
	
	inst_vars_list([],_3132,_3142):-call(_3142).
	inst_vars_list([_3160|_3162],_3164,_3186):-name(_3160,[_3164],is(_3178,_3164+1,inst_vars_list(_3162,_3178,_3186))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_inst_vars_list_2__1(Prolog* mach);
	static Operation* exec_pred_inst_vars_list_2__2(Prolog* mach);
	};


public:
	class pred_sort_vars_2 : public Code {

	/*
	
	sort_vars(_3226,_3228,_3236):-sort_vars(_3226,_3228,[],_3236).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sort_vars_2__1(Prolog* mach);
	};


public:
	class pred_sort_vars_3 : public Code {

	/*
	
	sort_vars([],_3262,_3262,_3272):-call(_3272).
	sort_vars([_3292|_3294],_3296,_3298,_3316):-split_vars(_3294,_3292,_3300,_3302,sort_vars(_3300,_3296,[_3292|_3308],sort_vars(_3302,_3308,_3298,_3316))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sort_vars_3__1(Prolog* mach);
	static Operation* exec_pred_sort_vars_3__2(Prolog* mach);
	};


public:
	class pred_intersect_sorted_vars_3 : public Code {

	/*
	
	intersect_sorted_vars([],_3366,[],_3374):-cut(1,_3374).
	intersect_sorted_vars(_3398,[],[],_3408):-call(_3408).
	intersect_sorted_vars([_3428|_3430],[_3434|_3436],[_3428|_3442],_3450):-termequal(_3428,_3434,cut(1,intersect_sorted_vars(_3430,_3436,_3442,_3450))).
	intersect_sorted_vars([_3494|_3496],[_3500|_3502],_3504,_3518):-termsmallerthan(_3494,_3500,cut(1,intersect_sorted_vars(_3496,[_3500|_3502],_3504,_3518))).
	intersect_sorted_vars([_3562|_3564],[_3568|_3570],_3572,_3586):-termgreaterthan(_3562,_3568,cut(1,intersect_sorted_vars([_3562|_3564],_3570,_3572,_3586))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_intersect_sorted_vars_3__1(Prolog* mach);
	static Operation* exec_pred_intersect_sorted_vars_3__2(Prolog* mach);
	static Operation* exec_pred_intersect_sorted_vars_3__3(Prolog* mach);
	static Operation* exec_pred_intersect_sorted_vars_3__4(Prolog* mach);
	static Operation* exec_pred_intersect_sorted_vars_3__5(Prolog* mach);
	};


public:
	class pred_split_vars_4 : public Code {

	/*
	
	split_vars([],_3628,[],[],_3638):-call(_3638).
	split_vars([_3660|_3662],_3670,[_3660|_3668],_3672,_3680):-termsmallerthan(_3660,_3670,cut(1,split_vars(_3662,_3670,_3668,_3672,_3680))).
	split_vars([_3728|_3730],_3732,_3734,_3736,_3744):-termequal(_3728,_3732,cut(1,split_vars(_3730,_3732,_3734,_3736,_3744))).
	split_vars([_3792|_3794],_3802,_3804,[_3792|_3800],_3812):-termgreaterthan(_3792,_3802,cut(1,split_vars(_3794,_3802,_3804,_3800,_3812))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_split_vars_4__1(Prolog* mach);
	static Operation* exec_pred_split_vars_4__2(Prolog* mach);
	static Operation* exec_pred_split_vars_4__3(Prolog* mach);
	static Operation* exec_pred_split_vars_4__4(Prolog* mach);
	};


	};



}


#endif	//#ifndef FLATTEN
