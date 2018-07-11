#ifndef DIVIDE10
#define DIVIDE10

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class divide10 {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s6;
	static Const* const  s7;
	static Const* const  s_call;
	static Const* const  s_d;
	static Const* const  s_divide10;
	static Const* const  s_exp;
	static Const* const  s_integer;
	static Const* const  s_is;
	static Const* const  s_log;
	static Const* const  s_top;
	static Const* const  s_x;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Operation* const  reg_top_0;
	static Operation* const  reg_divide10_0;
	static Operation* const  reg_d_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_15122):-divide10(_15122).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_divide10_0 : public Code {

	/*
	
	divide10(_15252):-d(x/x/x/x/x/x/x/x/x/x,x,_15230,_15252).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_divide10_0__1(Prolog* mach);
	};


public:
	class pred_d_3 : public Code {

	/*
	
	d(_15350+_15352,_15364,_15356+_15358,_15434):-cut(1,d(_15350,_15364,_15356,d(_15352,_15364,_15358,_15434))).
	d(_15632-_15634,_15646,_15638-_15640,_15716):-cut(1,d(_15632,_15646,_15638,d(_15634,_15646,_15640,_15716))).
	d(_15914*_15916,_15940,_15920*_15916+_15914*_15928,_16010):-cut(1,d(_15914,_15940,_15920,d(_15916,_15940,_15928,_16010))).
	d(_16208/_16210,_16246,(_16214*_16210-_16208*_16222)/_16210^2,_16316):-cut(1,d(_16208,_16246,_16214,d(_16210,_16246,_16222,_16316))).
	d(_16514^_16516,_16540,_16520*_16516*_16514^_16528,_16624):-cut(1,integer(_16516,is(_16528,_16516-1,d(_16514,_16540,_16520,_16624)))).
	d(-_16844,_16854,-_16848,_16910):-cut(1,d(_16844,_16854,_16848,_16910)).
	d(exp(_17044),_17060,exp(_17044)*_17054,_17116):-cut(1,d(_17044,_17060,_17054,_17116)).
	d(log(_17250),_17262,_17254/_17250,_17318):-cut(1,d(_17250,_17262,_17254,_17318)).
	d(_17452,_17452,1,_17496):-cut(1,_17496).
	d(_17566,_17568,0,_17592):-call(_17592).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_d_3__1(Prolog* mach);
	static Operation* exec_pred_d_3__2(Prolog* mach);
	static Operation* exec_pred_d_3__3(Prolog* mach);
	static Operation* exec_pred_d_3__4(Prolog* mach);
	static Operation* exec_pred_d_3__5(Prolog* mach);
	static Operation* exec_pred_d_3__6(Prolog* mach);
	static Operation* exec_pred_d_3__7(Prolog* mach);
	static Operation* exec_pred_d_3__8(Prolog* mach);
	static Operation* exec_pred_d_3__9(Prolog* mach);
	static Operation* exec_pred_d_3__10(Prolog* mach);
	};


	};



}


#endif	//#ifndef DIVIDE10
