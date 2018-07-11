#ifndef TAK
#define TAK

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class tak {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s_is;
	static Const* const  s_smallerorequal;
	static Const* const  s_smallerthan;
	static Const* const  s_tak;
	static Const* const  s_top;
	static Const* const  s_unify;
	static Int* const  posint1;
	static Int* const  posint6;
	static Int* const  posint12;
	static Int* const  posint18;
	static Operation* const  reg_top_0;
	static Operation* const  reg_tak_0;
	static Operation* const  reg_tak_4;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_5326):-tak(_5326).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_tak_0 : public Code {

	/*
	
	tak(_5404):-tak(18,12,6,_5382,_5404).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_tak_0__1(Prolog* mach);
	};


public:
	class pred_tak_4 : public Code {

	/*
	
	tak(_5516,_5518,_5520,_5522,_5586):-smallerorequal(_5516,_5518,unify(_5522,_5520,_5586)).
	tak(_5770,_5772,_5774,_5776,_5946):-smallerthan(_5772,_5770,is(_5792,_5770-1,tak(_5792,_5772,_5774,_5804,is(_5814,_5772-1,tak(_5814,_5774,_5770,_5826,is(_5836,_5774-1,tak(_5836,_5770,_5772,_5848,tak(_5804,_5826,_5848,_5776,_5946)))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_tak_4__1(Prolog* mach);
	static Operation* exec_pred_tak_4__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef TAK
