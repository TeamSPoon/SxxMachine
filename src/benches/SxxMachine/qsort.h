#ifndef QSORT
#define QSORT

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class qsort {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s_call;
	static Const* const  s_partition;
	static Const* const  s_qsort;
	static Const* const  s_smallerorequal;
	static Const* const  s_top;
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
	static Operation* const  reg_qsort_0;
	static Operation* const  reg_qsort_3;
	static Operation* const  reg_partition_4;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_29388):-qsort(_29388).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_qsort_0 : public Code {

	/*
	
	qsort(_29764):-qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,40,53,59,8],_29740,[],_29764).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_qsort_0__1(Prolog* mach);
	};


public:
	class pred_qsort_3 : public Code {

	/*
	
	qsort([_29862|_29864],_29870,_29872,_29956):-partition(_29864,_29862,_29880,_29882,qsort(_29882,_29888,_29872,qsort(_29880,_29870,[_29862|_29888],_29956))).
	qsort([],_30228,_30228,_30252):-call(_30252).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_qsort_3__1(Prolog* mach);
	static Operation* exec_pred_qsort_3__2(Prolog* mach);
	};


public:
	class pred_partition_4 : public Code {

	/*
	
	partition([_30344|_30346],_30358,[_30344|_30352],_30362,_30436):-smallerorequal(_30344,_30358,cut(1,partition(_30346,_30358,_30352,_30362,_30436))).
	partition([_30654|_30656],_30668,_30670,[_30654|_30662],_30728):-partition(_30656,_30668,_30670,_30662,_30728).
	partition([],_30886,[],[],_30912):-call(_30912).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_partition_4__1(Prolog* mach);
	static Operation* exec_pred_partition_4__2(Prolog* mach);
	static Operation* exec_pred_partition_4__3(Prolog* mach);
	};


	};



}


#endif	//#ifndef QSORT
