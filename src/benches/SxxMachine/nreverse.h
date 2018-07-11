#ifndef NREVERSE
#define NREVERSE

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class nreverse {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s_call;
	static Const* const  s_concatenate;
	static Const* const  s_nreverse;
	static Const* const  s_top;
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
	static Operation* const  reg_top_0;
	static Operation* const  reg_nreverse_0;
	static Operation* const  reg_nreverse_2;
	static Operation* const  reg_concatenate_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_5546):-nreverse(_5546).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_nreverse_0 : public Code {

	/*
	
	nreverse(_5800):-nreverse([1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30],_5778,_5800).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_nreverse_0__1(Prolog* mach);
	};


public:
	class pred_nreverse_2 : public Code {

	/*
	
	nreverse([_5884|_5886],_5892,_5952):-nreverse(_5886,_5898,concatenate(_5898,[_5884],_5892,_5952)).
	nreverse([],[],_6146):-call(_6146).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_nreverse_2__1(Prolog* mach);
	static Operation* exec_pred_nreverse_2__2(Prolog* mach);
	};


public:
	class pred_concatenate_3 : public Code {

	/*
	
	concatenate([_6224|_6226],_6238,[_6224|_6232],_6288):-concatenate(_6226,_6238,_6232,_6288).
	concatenate([],_6424,_6424,_6448):-call(_6448).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_concatenate_3__1(Prolog* mach);
	static Operation* exec_pred_concatenate_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef NREVERSE
