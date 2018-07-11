#ifndef DERIVE
#define DERIVE

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class derive {
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
	static Const* const  s_log10;
	static Const* const  s_ops8;
	static Const* const  s_top;
	static Const* const  s_x;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Operation* const  reg_top_0;
	static Operation* const  reg_ops8_0;
	static Operation* const  reg_log10_0;
	static Operation* const  reg_divide10_0;
	static Operation* const  reg_d_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_10308):-ops8(log10(divide10(_10308))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_ops8_0 : public Code {

	/*
	
	ops8(_10470):-d((x+1)*((x^2+2)*(x^3+3)),x,_10448,_10470).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ops8_0__1(Prolog* mach);
	};


public:
	class pred_log10_0 : public Code {

	/*
	
	log10(_10634):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_10612,_10634).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_log10_0__1(Prolog* mach);
	};


public:
	class pred_divide10_0 : public Code {

	/*
	
	divide10(_10818):-d(x/x/x/x/x/x/x/x/x/x,x,_10796,_10818).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_divide10_0__1(Prolog* mach);
	};


public:
	class pred_d_3 : public Code {

	/*
	
	d(_10928+_10930,_10942,_10934+_10936,_11012):-cut(1,d(_10928,_10942,_10934,d(_10930,_10942,_10936,_11012))).
	d(_11222-_11224,_11236,_11228-_11230,_11306):-cut(1,d(_11222,_11236,_11228,d(_11224,_11236,_11230,_11306))).
	d(_11516*_11518,_11542,_11522*_11518+_11516*_11530,_11612):-cut(1,d(_11516,_11542,_11522,d(_11518,_11542,_11530,_11612))).
	d(_11822/_11824,_11860,(_11828*_11824-_11822*_11836)/_11824^2,_11930):-cut(1,d(_11822,_11860,_11828,d(_11824,_11860,_11836,_11930))).
	d(_12140^_12142,_12166,_12146*_12142*_12140^_12154,_12250):-cut(1,integer(_12142,is(_12154,_12142-1,d(_12140,_12166,_12146,_12250)))).
	d(-_12482,_12492,-_12486,_12548):-cut(1,d(_12482,_12492,_12486,_12548)).
	d(exp(_12694),_12710,exp(_12694)*_12704,_12766):-cut(1,d(_12694,_12710,_12704,_12766)).
	d(log(_12912),_12924,_12916/_12912,_12980):-cut(1,d(_12912,_12924,_12916,_12980)).
	d(_13126,_13126,1,_13170):-cut(1,_13170).
	d(_13252,_13254,0,_13278):-call(_13278).
	
	
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


#endif	//#ifndef DERIVE
