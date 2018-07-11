#ifndef PROVER
#define PROVER

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class prover {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s6;
	static Const* const  s_a;
	static Const* const  s_add_conjunction;
	static Const* const  s_b;
	static Const* const  s_c;
	static Const* const  s_call;
	static Const* const  s_expand;
	static Const* const  s_extend;
	static Const* const  s_fail;
	static Const* const  s_fs;
	static Const* const  s_fx;
	static Const* const  s_implies;
	static Const* const  s_includes;
	static Const* const  s_on_load_prover;
	static Const* const  s_op;
	static Const* const  s_opposite;
	static Const* const  s_problem;
	static Const* const  s_prover;
	static Const* const  s_refute;
	static Const* const  s_refuted;
	static Const* const  s_to_be;
	static Const* const  s_top;
	static Const* const  s_unify;
	static Const* const  s_write;
	static Const* const  s_xfy;
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
	static Int* const  posint500;
	static Int* const  posint850;
	static Int* const  posint950;
	static Operation* const  reg_top_0;
	static Operation* const  reg_on_load_prover_0;
	static Operation* const  reg_prover_0;
	static Operation* const  reg_problem_3;
	static Operation* const  reg_implies_2;
	static Operation* const  reg_opposite_2;
	static Operation* const  reg_add_conjunction_3;
	static Operation* const  reg_expand_3;
	static Operation* const  reg_includes_2;
	static Operation* const  reg_extend_6;
	static Operation* const  reg_refute_1;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_24640):-prover(_24640).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_on_load_prover_0 : public Code {

	/*
	
	on_load_prover(_24740):-write(op(950,xfy,#),_24740).
	on_load_prover(_24860):-write(op(850,xfy,&),_24860).
	on_load_prover(_24980):-write(op(500,fx,+),_24980).
	on_load_prover(_25100):-write(op(500,fx,-),_25100).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_on_load_prover_0__1(Prolog* mach);
	static Operation* exec_pred_on_load_prover_0__2(Prolog* mach);
	static Operation* exec_pred_on_load_prover_0__3(Prolog* mach);
	static Operation* exec_pred_on_load_prover_0__4(Prolog* mach);
	};


public:
	class pred_prover_0 : public Code {

	/*
	
	prover(_25214):-problem(_25170,_25172,_25174,implies(_25172,_25174,fail(_25214))).
	prover(_25408):-call(_25408).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_prover_0__1(Prolog* mach);
	static Operation* exec_pred_prover_0__2(Prolog* mach);
	};


public:
	class pred_problem_3 : public Code {

	/*
	
	problem(1,-a,+a,_25492):-call(_25492).
	problem(2,+a,-a& -a,_25634):-call(_25634).
	problem(3,-a,+to_be# -to_be,_25776):-call(_25776).
	problem(4,-a& -a,-a,_25918):-call(_25918).
	problem(5,-a,+b# -a,_26060):-call(_26060).
	problem(6,-a& -b,-b& -a,_26212):-call(_26212).
	problem(7,-a,-b# +b& -a,_26364):-call(_26364).
	problem(8,-a# -b# +c,-b# -a# +c,_26536):-call(_26536).
	problem(9,-a# +b,+b& -c# -a# +c,_26708):-call(_26708).
	problem(10,(-a# +c)&(-b# +c),-a& -b# +c,_26890):-call(_26890).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_problem_3__1(Prolog* mach);
	static Operation* exec_pred_problem_3__2(Prolog* mach);
	static Operation* exec_pred_problem_3__3(Prolog* mach);
	static Operation* exec_pred_problem_3__4(Prolog* mach);
	static Operation* exec_pred_problem_3__5(Prolog* mach);
	static Operation* exec_pred_problem_3__6(Prolog* mach);
	static Operation* exec_pred_problem_3__7(Prolog* mach);
	static Operation* exec_pred_problem_3__8(Prolog* mach);
	static Operation* exec_pred_problem_3__9(Prolog* mach);
	static Operation* exec_pred_problem_3__10(Prolog* mach);
	};


public:
	class pred_implies_2 : public Code {

	/*
	
	implies(_26988,_26990,_27054):-opposite(_26990,_26996,add_conjunction(_26988,_26996,fs([],[],[],[]),_27054)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_implies_2__1(Prolog* mach);
	};


public:
	class pred_opposite_2 : public Code {

	/*
	
	opposite(_27236&_27238,_27242#_27244,_27308):-cut(1,opposite(_27236,_27242,opposite(_27238,_27244,_27308))).
	opposite(_27488#_27490,_27494&_27496,_27560):-cut(1,opposite(_27488,_27494,opposite(_27490,_27496,_27560))).
	opposite(+_27740,-_27740,_27784):-cut(1,_27784).
	opposite(-_27864,+_27864,_27896):-call(_27896).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_opposite_2__1(Prolog* mach);
	static Operation* exec_pred_opposite_2__2(Prolog* mach);
	static Operation* exec_pred_opposite_2__3(Prolog* mach);
	static Operation* exec_pred_opposite_2__4(Prolog* mach);
	};


public:
	class pred_add_conjunction_3 : public Code {

	/*
	
	add_conjunction(_27992,_27994,_27996,_28068):-expand(_27992,_27996,_28004,expand(_27994,_28004,_28012,refute(_28012,_28068))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_add_conjunction_3__1(Prolog* mach);
	};


public:
	class pred_expand_3 : public Code {

	/*
	
	expand(_28320,refuted,refuted,_28364):-cut(1,_28364).
	expand(_28464&_28466,fs(_28470,_28472,_28474,_28476),refuted,_28542):-includes(_28470,_28464&_28466,cut(1,_28542)).
	expand(_28692&_28694,fs(_28698,_28700,_28702,_28704),fs(_28698,_28700,_28702,_28704),_28780):-includes(_28700,_28692&_28694,cut(1,_28780)).
	expand(_28930&_28932,fs(_28936,_28938,_28940,_28942),_28950,_29040):-cut(1,expand(_28930,fs(_28936,[_28930&_28932|_28938],_28940,_28942),_28980,expand(_28932,_28980,_28950,_29040))).
	expand(_29268#_29270,fs(_29274,_29276,_29278,_29280),_29288,_29376):-cut(1,opposite(_29268#_29270,_29300,extend(_29300,_29274,_29276,_29304,fs(_29304,_29276,_29278,_29280),_29288,_29376))).
	expand(+_29632,fs(_29636,_29638,_29640,_29642),_29650,_29720):-cut(1,extend(_29632,_29640,_29642,_29658,fs(_29636,_29638,_29658,_29642),_29650,_29720)).
	expand(-_29926,fs(_29930,_29932,_29934,_29936),_29944,_30008):-extend(_29926,_29936,_29934,_29954,fs(_29930,_29932,_29934,_29954),_29944,_30008).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_expand_3__1(Prolog* mach);
	static Operation* exec_pred_expand_3__2(Prolog* mach);
	static Operation* exec_pred_expand_3__3(Prolog* mach);
	static Operation* exec_pred_expand_3__4(Prolog* mach);
	static Operation* exec_pred_expand_3__5(Prolog* mach);
	static Operation* exec_pred_expand_3__6(Prolog* mach);
	static Operation* exec_pred_expand_3__7(Prolog* mach);
	};


public:
	class pred_includes_2 : public Code {

	/*
	
	includes([_30208|_30210],_30208,_30250):-cut(1,_30250).
	includes([_30348|_30350],_30356,_30396):-includes(_30350,_30356,_30396).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_includes_2__1(Prolog* mach);
	static Operation* exec_pred_includes_2__2(Prolog* mach);
	};


public:
	class pred_extend_6 : public Code {

	/*
	
	extend(_30538,_30540,_30542,_30544,_30546,refuted,_30618):-includes(_30542,_30538,cut(1,_30618)).
	extend(_30804,_30806,_30808,_30806,_30812,_30812,_30884):-includes(_30806,_30804,cut(1,_30884)).
	extend(_31070,_31072,_31080,[_31070|_31072],_31084,_31084,_31108):-call(_31108).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_extend_6__1(Prolog* mach);
	static Operation* exec_pred_extend_6__2(Prolog* mach);
	static Operation* exec_pred_extend_6__3(Prolog* mach);
	};


public:
	class pred_refute_1 : public Code {

	/*
	
	refute(refuted,_31312):-cut(1,_31312).
	refute(fs([_31414&_31416|_31422],_31428,_31430,_31432),_31546):-opposite(_31414,_31442,opposite(_31416,_31448,unify(fs(_31422,_31428,_31430,_31432),_31462,add_conjunction(_31442,_31416,_31462,add_conjunction(_31442,_31448,_31462,add_conjunction(_31414,_31448,_31462,_31546)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_refute_1__1(Prolog* mach);
	static Operation* exec_pred_refute_1__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef PROVER
