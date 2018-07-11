#ifndef META_QSORT
#define META_QSORT

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class meta_qsort {
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
	static Const* const  s_call;
	static Const* const  s_define;
	static Const* const  s_fail;
	static Const* const  s_interpret;
	static Const* const  s_interpret_built_in;
	static Const* const  s_interpret_disjunction;
	static Const* const  s_is_built_in;
	static Const* const  s_meta_qsort;
	static Const* const  s_nonvar;
	static Const* const  s_number;
	static Const* const  s_or;
	static Const* const  s_partition;
	static Const* const  s_qsort;
	static Const* const  s_smallerorequal;
	static Const* const  s_top;
	static Const* const  s_true;
	static Const* const  s_var;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint4;
	static Int* const  posint6;
	static Int* const  posint7;
	static Int* const  posint8;
	static Int* const  posint10;
	static Int* const  posint11;
	static Int* const  posint17;
	static Int* const  posint18;
	static Int* const  posint21;
	static Int* const  posint27;
	static Int* const  posint28;
	static Int* const  posint29;
	static Int* const  posint31;
	static Int* const  posint32;
	static Int* const  posint33;
	static Int* const  posint37;
	static Int* const  posint39;
	static Int* const  posint40;
	static Int* const  posint46;
	static Int* const  posint47;
	static Int* const  posint51;
	static Int* const  posint53;
	static Int* const  posint55;
	static Int* const  posint59;
	static Int* const  posint61;
	static Int* const  posint63;
	static Int* const  posint65;
	static Int* const  posint66;
	static Int* const  posint74;
	static Int* const  posint75;
	static Int* const  posint81;
	static Int* const  posint82;
	static Int* const  posint83;
	static Int* const  posint85;
	static Int* const  posint90;
	static Int* const  posint92;
	static Int* const  posint94;
	static Int* const  posint95;
	static Int* const  posint99;
	static Operation* const  reg_top_0;
	static Operation* const  reg_meta_qsort_0;
	static Operation* const  reg_interpret_1;
	static Operation* const  reg_interpret_2;
	static Operation* const  reg_interpret_disjunction_3;
	static Operation* const  reg_is_built_in_1;
	static Operation* const  reg_interpret_built_in_1;
	static Operation* const  reg_define_2;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_10368):-meta_qsort(_10368).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_meta_qsort_0 : public Code {

	/*
	
	meta_qsort(_10440):-interpret(qsort,_10440).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_meta_qsort_0__1(Prolog* mach);
	};


public:
	class pred_interpret_1 : public Code {

	/*
	
	interpret(_10510,_10576):-interpret(_10510,_10516,or((nonvar(_10516),!,interpret(_10516)),true,_10576)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_interpret_1__1(Prolog* mach);
	};


public:
	class pred_interpret_2 : public Code {

	/*
	
	interpret(_10730,_10732,_10782):-var(_10730,cut(1,fail(_10782))).
	interpret((_10908,_10910),_10916,_11002):-cut(1,interpret(_10908,_10922,or((nonvar(_10922)->_10916=(_10922,_10910)),interpret(_10910,_10916),_11002))).
	interpret((_11176;_11178),_11184,_11232):-cut(1,interpret_disjunction(_11176,_11178,_11184,_11232)).
	interpret((_11364->_11366),_11372,_11426):-cut(1,interpret_disjunction((_11364->_11366),fail,_11372,_11426)).
	interpret(\+_11558,_11564,_11618):-cut(1,interpret_disjunction((_11558->fail),true,_11564,_11618)).
	interpret(!,true,_11786):-cut(1,_11786).
	interpret(_11854,_11856,_11906):-number(_11854,cut(1,fail(_11906))).
	interpret(_12032,_12034,_12088):-is_built_in(_12032,cut(1,interpret_built_in(_12032,_12088))).
	interpret(_12228,_12230,_12280):-define(_12228,_12236,interpret(_12236,_12280)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_interpret_2__1(Prolog* mach);
	static Operation* exec_pred_interpret_2__2(Prolog* mach);
	static Operation* exec_pred_interpret_2__3(Prolog* mach);
	static Operation* exec_pred_interpret_2__4(Prolog* mach);
	static Operation* exec_pred_interpret_2__5(Prolog* mach);
	static Operation* exec_pred_interpret_2__6(Prolog* mach);
	static Operation* exec_pred_interpret_2__7(Prolog* mach);
	static Operation* exec_pred_interpret_2__8(Prolog* mach);
	static Operation* exec_pred_interpret_2__9(Prolog* mach);
	};


public:
	class pred_interpret_disjunction_3 : public Code {

	/*
	
	interpret_disjunction((_12428->_12430),_12436,_12438,_12530):-interpret(_12428,_12444,cut(1,or((nonvar(_12444)->_12438=(_12444->_12430)),interpret(_12430,_12438),_12530))).
	interpret_disjunction((_12718->_12720),_12726,_12728,_12780):-cut(1,interpret(_12726,_12728,_12780)).
	interpret_disjunction(_12912,_12914,_12916,_12962):-interpret(_12912,_12916,_12962).
	interpret_disjunction(_13088,_13090,_13092,_13138):-interpret(_13090,_13092,_13138).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_interpret_disjunction_3__1(Prolog* mach);
	static Operation* exec_pred_interpret_disjunction_3__2(Prolog* mach);
	static Operation* exec_pred_interpret_disjunction_3__3(Prolog* mach);
	static Operation* exec_pred_interpret_disjunction_3__4(Prolog* mach);
	};


public:
	class pred_is_built_in_1 : public Code {

	/*
	
	is_built_in(true,_13286):-call(_13286).
	is_built_in(_13368=<_13370,_13396):-call(_13396).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_is_built_in_1__1(Prolog* mach);
	static Operation* exec_pred_is_built_in_1__2(Prolog* mach);
	};


public:
	class pred_interpret_built_in_1 : public Code {

	/*
	
	interpret_built_in(true,_13500):-call(_13500).
	interpret_built_in(_13588=<_13590,_13628):-smallerorequal(_13588,_13590,_13628).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_interpret_built_in_1__1(Prolog* mach);
	static Operation* exec_pred_interpret_built_in_1__2(Prolog* mach);
	};


public:
	class pred_define_2 : public Code {

	/*
	
	define(qsort,qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,40,53,59,8],_14058,[]),_14088):-call(_14088).
	define(qsort([_14196|_14198],_14204,_14206),(partition(_14198,_14196,_14214,_14216),qsort(_14216,_14222,_14206),qsort(_14214,_14204,[_14196|_14222])),_14278):-call(_14278).
	define(qsort([],_14388,_14388),true,_14418):-call(_14418).
	define(partition([_14526|_14528],_14540,[_14526|_14534],_14544),(_14526=<_14540,!,partition(_14528,_14540,_14534,_14544)),_14600):-call(_14600).
	define(partition([_14708|_14710],_14722,_14724,[_14708|_14716]),partition(_14710,_14722,_14724,_14716),_14764):-call(_14764).
	define(partition([],_14874,[],[]),true,_14906):-call(_14906).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_define_2__1(Prolog* mach);
	static Operation* exec_pred_define_2__2(Prolog* mach);
	static Operation* exec_pred_define_2__3(Prolog* mach);
	static Operation* exec_pred_define_2__4(Prolog* mach);
	static Operation* exec_pred_define_2__5(Prolog* mach);
	static Operation* exec_pred_define_2__6(Prolog* mach);
	};


	};



}


#endif	//#ifndef META_QSORT
