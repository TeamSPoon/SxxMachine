#ifndef FAST_MU
#define FAST_MU

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class fast_mu {
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
	static Const* const  s_call;
	static Const* const  s_derive;
	static Const* const  s_derive2;
	static Const* const  s_i;
	static Const* const  s_is;
	static Const* const  s_length;
	static Const* const  s_lower_bound;
	static Const* const  s_m;
	static Const* const  s_or;
	static Const* const  s_rule;
	static Const* const  s_smallerorequal;
	static Const* const  s_smallerthan;
	static Const* const  s_theorem;
	static Const* const  s_top;
	static Const* const  s_u;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Int* const  posint4;
	static Operation* const  reg_top_0;
	static Operation* const  reg_theorem_1;
	static Operation* const  reg_derive_6;
	static Operation* const  reg_derive2_7;
	static Operation* const  reg_rule_7;
	static Operation* const  reg_rule_11;
	static Operation* const  reg_lower_bound_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_19954):-theorem([m,u,i,i,u],_19954).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_theorem_1 : public Code {

	/*
	
	theorem(_20018,_20102):-length(_20018,_20024,is(_20034,_20024-1,derive([m,i],_20018,1,_20034,_20060,0,_20102))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_theorem_1__1(Prolog* mach);
	};


public:
	class pred_derive_6 : public Code {

	/*
	
	derive(_20350,_20352,_20354,_20356,_20358,_20360,_20434):-derive2(_20350,_20352,_20354,_20356,1,_20358,_20360,_20434).
	derive(_20642,_20644,_20646,_20648,_20650,_20652,_20742):-is(_20662,_20652+1,derive(_20642,_20644,_20646,_20648,_20650,_20662,_20742)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_derive_6__1(Prolog* mach);
	static Operation* exec_pred_derive_6__2(Prolog* mach);
	};


public:
	class pred_derive2_7 : public Code {

	/*
	
	derive2(_20986,_20986,_20990,_20990,_20994,[],_20998,_21020):-call(_21020).
	derive2(_21186,_21188,_21190,_21192,_21194,[rule(_21174,_21176)|_21182],_21198,_21344):-lower_bound(_21190,_21192,_21206,smallerorequal(_21206,_21198,is(_21222,_21198-1,rule(_21186,_21176,_21190,_21234,_21194,_21238,_21174,derive2(_21176,_21188,_21234,_21192,_21238,_21182,_21222,_21344))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_derive2_7__1(Prolog* mach);
	static Operation* exec_pred_derive2_7__2(Prolog* mach);
	};


public:
	class pred_rule_7 : public Code {

	/*
	
	rule([m|_21858],[m|_21864],_21872,_21874,_21876,_21878,_21880,_21968):-rule(_21858,_21864,_21872,_21874,_21876,_21878,1,i,_21880,_21902,_21902,_21968).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rule_7__1(Prolog* mach);
	};


public:
	class pred_rule_11 : public Code {

	/*
	
	rule([i],[i,u],_22274,_22276,_22278,_22280,_22282,_22284,1,_22288,_22290,_22420):-smallerorequal(_22278,_22282,is(_22280,_22282-2,is(_22276,_22274+1,_22420))).
	rule([],_22724,_22726,_22728,_22730,1,_22734,_22736,2,_22724,[],_22842):-is(_22728,_22726+_22726,_22842).
	rule([i,i,i|_23052],[u|_23052],_23066,_23068,_23070,_23072,_23074,_23076,3,_23080,_23082,_23212):-smallerorequal(_23070,_23074,is(_23072,_23074-1,is(_23068,_23066-2,_23212))).
	rule([u,u|_23522],_23522,_23530,_23532,_23534,_23536,_23538,i,4,_23544,_23546,_23676):-smallerorequal(_23534,_23538,is(_23536,_23538-2,is(_23532,_23530-2,_23676))).
	rule([_23978|_23980],[_23978|_23986],_24000,_24002,_24004,_24006,_24008,_24010,_24012,_24014,[_23978|_23992],_24146):-is(_24026,_24008+1,rule(_23980,_23986,_24000,_24002,_24004,_24006,_24026,_23978,_24012,_24014,_23992,_24146)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rule_11__1(Prolog* mach);
	static Operation* exec_pred_rule_11__2(Prolog* mach);
	static Operation* exec_pred_rule_11__3(Prolog* mach);
	static Operation* exec_pred_rule_11__4(Prolog* mach);
	static Operation* exec_pred_rule_11__5(Prolog* mach);
	};


public:
	class pred_lower_bound_3 : public Code {

	/*
	
	lower_bound(_24518,_24520,1,_24568):-smallerthan(_24518,_24520,_24568).
	lower_bound(_24712,_24712,2,_24738):-call(_24738).
	lower_bound(_24854,_24856,_24858,_25000):-smallerthan(_24856,_24854,is(_24874,_24854-_24856,is(_24886,_24874/\1,or((_24886=:=0->_24858 is _24874>>1),_24858 is (_24874+1)>>1+1,_25000)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lower_bound_3__1(Prolog* mach);
	static Operation* exec_pred_lower_bound_3__2(Prolog* mach);
	static Operation* exec_pred_lower_bound_3__3(Prolog* mach);
	};


	};



}


#endif	//#ifndef FAST_MU
