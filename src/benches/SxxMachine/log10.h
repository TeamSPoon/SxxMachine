#ifndef LOG10
#define LOG10

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class log10 {
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
	static Const* const  s_log10;
	static Const* const  s_top;
	static Const* const  s_x;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Operation* const  reg_top_0;
	static Operation* const  reg_log10_0;
	static Operation* const  reg_d_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_5492):-log10(_5492).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_log10_0 : public Code {

	/*
	
	log10(_5608):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_5586,_5608).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_log10_0__1(Prolog* mach);
	};


public:
	class pred_d_3 : public Code {

	/*
	
	d(_5706+_5708,_5720,_5712+_5714,_5790):-cut(1,d(_5706,_5720,_5712,d(_5708,_5720,_5714,_5790))).
	d(_5988-_5990,_6002,_5994-_5996,_6072):-cut(1,d(_5988,_6002,_5994,d(_5990,_6002,_5996,_6072))).
	d(_6270*_6272,_6296,_6276*_6272+_6270*_6284,_6366):-cut(1,d(_6270,_6296,_6276,d(_6272,_6296,_6284,_6366))).
	d(_6564/_6566,_6602,(_6570*_6566-_6564*_6578)/_6566^2,_6672):-cut(1,d(_6564,_6602,_6570,d(_6566,_6602,_6578,_6672))).
	d(_6870^_6872,_6896,_6876*_6872*_6870^_6884,_6980):-cut(1,integer(_6872,is(_6884,_6872-1,d(_6870,_6896,_6876,_6980)))).
	d(-_7200,_7210,-_7204,_7266):-cut(1,d(_7200,_7210,_7204,_7266)).
	d(exp(_7400),_7416,exp(_7400)*_7410,_7472):-cut(1,d(_7400,_7416,_7410,_7472)).
	d(log(_7606),_7618,_7610/_7606,_7674):-cut(1,d(_7606,_7618,_7610,_7674)).
	d(_7808,_7808,1,_7852):-cut(1,_7852).
	d(_7922,_7924,0,_7948):-call(_7948).
	
	
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


#endif	//#ifndef LOG10
