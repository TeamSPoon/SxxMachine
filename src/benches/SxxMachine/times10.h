#ifndef TIMES10
#define TIMES10

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class times10 {
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
	static Const* const  s_exp;
	static Const* const  s_integer;
	static Const* const  s_is;
	static Const* const  s_log;
	static Const* const  s_times10;
	static Const* const  s_top;
	static Const* const  s_x;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Operation* const  reg_top_0;
	static Operation* const  reg_times10_0;
	static Operation* const  reg_d_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_10124):-times10(_10124).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_times10_0 : public Code {

	/*
	
	times10(_10254):-d(x*x*x*x*x*x*x*x*x*x,x,_10232,_10254).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_times10_0__1(Prolog* mach);
	};


public:
	class pred_d_3 : public Code {

	/*
	
	d(_10352+_10354,_10366,_10358+_10360,_10436):-cut(1,d(_10352,_10366,_10358,d(_10354,_10366,_10360,_10436))).
	d(_10634-_10636,_10648,_10640-_10642,_10718):-cut(1,d(_10634,_10648,_10640,d(_10636,_10648,_10642,_10718))).
	d(_10916*_10918,_10942,_10922*_10918+_10916*_10930,_11012):-cut(1,d(_10916,_10942,_10922,d(_10918,_10942,_10930,_11012))).
	d(_11210/_11212,_11248,(_11216*_11212-_11210*_11224)/_11212^2,_11318):-cut(1,d(_11210,_11248,_11216,d(_11212,_11248,_11224,_11318))).
	d(_11516^_11518,_11542,_11522*_11518*_11516^_11530,_11626):-cut(1,integer(_11518,is(_11530,_11518-1,d(_11516,_11542,_11522,_11626)))).
	d(-_11846,_11856,-_11850,_11912):-cut(1,d(_11846,_11856,_11850,_11912)).
	d(exp(_12046),_12062,exp(_12046)*_12056,_12118):-cut(1,d(_12046,_12062,_12056,_12118)).
	d(log(_12252),_12264,_12256/_12252,_12320):-cut(1,d(_12252,_12264,_12256,_12320)).
	d(_12454,_12454,1,_12498):-cut(1,_12498).
	d(_12568,_12570,0,_12594):-call(_12594).
	
	
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


#endif	//#ifndef TIMES10
