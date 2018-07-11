#ifndef OPS8
#define OPS8

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class ops8 {
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
	static Const* const  s_ops8;
	static Const* const  s_top;
	static Const* const  s_x;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Operation* const  reg_top_0;
	static Operation* const  reg_ops8_0;
	static Operation* const  reg_d_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_10270):-ops8(_10270).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_ops8_0 : public Code {

	/*
	
	ops8(_10388):-d((x+1)*((x^2+2)*(x^3+3)),x,_10366,_10388).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ops8_0__1(Prolog* mach);
	};


public:
	class pred_d_3 : public Code {

	/*
	
	d(_10486+_10488,_10500,_10492+_10494,_10570):-cut(1,d(_10486,_10500,_10492,d(_10488,_10500,_10494,_10570))).
	d(_10768-_10770,_10782,_10774-_10776,_10852):-cut(1,d(_10768,_10782,_10774,d(_10770,_10782,_10776,_10852))).
	d(_11050*_11052,_11076,_11056*_11052+_11050*_11064,_11146):-cut(1,d(_11050,_11076,_11056,d(_11052,_11076,_11064,_11146))).
	d(_11344/_11346,_11382,(_11350*_11346-_11344*_11358)/_11346^2,_11452):-cut(1,d(_11344,_11382,_11350,d(_11346,_11382,_11358,_11452))).
	d(_11650^_11652,_11676,_11656*_11652*_11650^_11664,_11760):-cut(1,integer(_11652,is(_11664,_11652-1,d(_11650,_11676,_11656,_11760)))).
	d(-_11980,_11990,-_11984,_12046):-cut(1,d(_11980,_11990,_11984,_12046)).
	d(exp(_12180),_12196,exp(_12180)*_12190,_12252):-cut(1,d(_12180,_12196,_12190,_12252)).
	d(log(_12386),_12398,_12390/_12386,_12454):-cut(1,d(_12386,_12398,_12390,_12454)).
	d(_12588,_12588,1,_12632):-cut(1,_12632).
	d(_12702,_12704,0,_12728):-call(_12728).
	
	
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


#endif	//#ifndef OPS8
