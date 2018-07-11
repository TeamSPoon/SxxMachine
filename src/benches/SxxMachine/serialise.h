#ifndef SERIALISE
#define SERIALISE

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class serialise {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s_arrange;
	static Const* const  s_before;
	static Const* const  s_call;
	static Const* const  s_is;
	static Const* const  s_numbered;
	static Const* const  s_pair;
	static Const* const  s_pairlists;
	static Const* const  s_serialise;
	static Const* const  s_smallerthan;
	static Const* const  s_split;
	static Const* const  s_top;
	static Const* const  s_tree;
	static Const* const  s_void;
	static Int* const  posint1;
	static Operation* const  reg_top_0;
	static Operation* const  reg_serialise_0;
	static Operation* const  reg_serialise_2;
	static Operation* const  reg_pairlists_3;
	static Operation* const  reg_arrange_2;
	static Operation* const  reg_split_4;
	static Operation* const  reg_before_2;
	static Operation* const  reg_numbered_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_10324):-serialise(_10324).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_serialise_0 : public Code {

	/*
	
	serialise(_10410):-serialise("ABLE WAS I ERE I SAW ELBA",_10388,_10410).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_serialise_0__1(Prolog* mach);
	};


public:
	class pred_serialise_2 : public Code {

	/*
	
	serialise(_10494,_10496,_10564):-pairlists(_10494,_10496,_10504,arrange(_10504,_10510,numbered(_10510,1,_10518,_10564))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_serialise_2__1(Prolog* mach);
	};


public:
	class pred_pairlists_3 : public Code {

	/*
	
	pairlists([_10798|_10800],[_10804|_10806],[pair(_10798,_10804)|_10818],_10874):-pairlists(_10800,_10806,_10818,_10874).
	pairlists([],[],[],_11034):-call(_11034).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pairlists_3__1(Prolog* mach);
	static Operation* exec_pred_pairlists_3__2(Prolog* mach);
	};


public:
	class pred_arrange_2 : public Code {

	/*
	
	arrange([_11132|_11134],tree(_11138,_11132,_11142),_11216):-split(_11134,_11132,_11156,_11158,arrange(_11156,_11138,arrange(_11158,_11142,_11216))).
	arrange([],void,_11486):-call(_11486).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_arrange_2__1(Prolog* mach);
	static Operation* exec_pred_arrange_2__2(Prolog* mach);
	};


public:
	class pred_split_4 : public Code {

	/*
	
	split([_11576|_11578],_11576,_11586,_11588,_11650):-cut(1,split(_11578,_11576,_11586,_11588,_11650)).
	split([_11824|_11826],_11838,[_11824|_11832],_11842,_11916):-before(_11824,_11838,cut(1,split(_11826,_11838,_11832,_11842,_11916))).
	split([_12140|_12142],_12154,_12156,[_12140|_12148],_12232):-before(_12154,_12140,cut(1,split(_12142,_12154,_12156,_12148,_12232))).
	split([],_12458,[],[],_12484):-call(_12484).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_split_4__1(Prolog* mach);
	static Operation* exec_pred_split_4__2(Prolog* mach);
	static Operation* exec_pred_split_4__3(Prolog* mach);
	static Operation* exec_pred_split_4__4(Prolog* mach);
	};


public:
	class pred_before_2 : public Code {

	/*
	
	before(pair(_12608,_12610),pair(_12614,_12616),_12662):-smallerthan(_12608,_12614,_12662).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_before_2__1(Prolog* mach);
	};


public:
	class pred_numbered_3 : public Code {

	/*
	
	numbered(tree(_12804,pair(_12798,_12800),_12808),_12814,_12816,_12896):-numbered(_12804,_12814,_12800,is(_12834,_12800+1,numbered(_12808,_12834,_12816,_12896))).
	numbered(void,_13170,_13170,_13194):-call(_13194).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_numbered_3__1(Prolog* mach);
	static Operation* exec_pred_numbered_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef SERIALISE
