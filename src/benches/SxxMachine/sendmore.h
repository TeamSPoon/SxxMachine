#ifndef SENDMORE
#define SENDMORE

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class sendmore {
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
	static Const* const  s9;
	static Const* const  s_call;
	static Const* const  s_digit;
	static Const* const  s_fail;
	static Const* const  s_is;
	static Const* const  s_leftdigit;
	static Const* const  s_or;
	static Const* const  s_sumdigit;
	static Const* const  s_top;
	static Int* const  posint0;
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
	static Operation* const  reg_top_0;
	static Operation* const  reg_sumdigit_5;
	static Operation* const  reg_digit_1;
	static Operation* const  reg_leftdigit_1;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_5928):-digit(_5456,digit(_5460,=\=(_5456,_5460,sumdigit(0,_5456,_5460,_5476,_5478,digit(_5482,=\=(_5482,_5476,=\=(_5482,_5460,=\=(_5482,_5456,digit(_5504,=\=(_5504,_5482,=\=(_5504,_5476,=\=(_5504,_5460,=\=(_5504,_5456,sumdigit(_5478,_5482,_5504,_5460,_5540,digit(_5544,=\=(_5544,_5504,=\=(_5544,_5482,=\=(_5544,_5476,=\=(_5544,_5460,=\=(_5544,_5456,sumdigit(_5540,_5460,_5544,_5482,_5586,leftdigit(_5590,=\=(_5590,_5544,=\=(_5590,_5504,=\=(_5590,_5482,=\=(_5590,_5476,=\=(_5590,_5460,=\=(_5590,_5456,leftdigit(_5630,=\=(_5630,_5590,=\=(_5630,_5544,=\=(_5630,_5504,=\=(_5630,_5482,=\=(_5630,_5476,=\=(_5630,_5460,=\=(_5630,_5456,sumdigit(_5586,_5590,_5630,_5544,_5630,fail(_5928)))))))))))))))))))))))))))))))))))))).
	top(_7916):-call(_7916).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	static Operation* exec_pred_top_0__2(Prolog* mach);
	};


public:
	class pred_sumdigit_5 : public Code {

	/*
	
	sumdigit(_7954,_7956,_7958,_7960,_7962,_8098):-is(_7978,_7954+_7956+_7958,or((_7978<10->_7960=_7978,_7962=0),(_7960 is _7978-10,_7962=1),_8098)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sumdigit_5__1(Prolog* mach);
	};


public:
	class pred_digit_1 : public Code {

	/*
	
	digit(0,_8300):-call(_8300).
	digit(1,_8386):-call(_8386).
	digit(2,_8472):-call(_8472).
	digit(3,_8558):-call(_8558).
	digit(4,_8644):-call(_8644).
	digit(5,_8730):-call(_8730).
	digit(6,_8816):-call(_8816).
	digit(7,_8902):-call(_8902).
	digit(8,_8988):-call(_8988).
	digit(9,_9074):-call(_9074).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_digit_1__1(Prolog* mach);
	static Operation* exec_pred_digit_1__2(Prolog* mach);
	static Operation* exec_pred_digit_1__3(Prolog* mach);
	static Operation* exec_pred_digit_1__4(Prolog* mach);
	static Operation* exec_pred_digit_1__5(Prolog* mach);
	static Operation* exec_pred_digit_1__6(Prolog* mach);
	static Operation* exec_pred_digit_1__7(Prolog* mach);
	static Operation* exec_pred_digit_1__8(Prolog* mach);
	static Operation* exec_pred_digit_1__9(Prolog* mach);
	static Operation* exec_pred_digit_1__10(Prolog* mach);
	};


public:
	class pred_leftdigit_1 : public Code {

	/*
	
	leftdigit(1,_9160):-call(_9160).
	leftdigit(2,_9252):-call(_9252).
	leftdigit(3,_9344):-call(_9344).
	leftdigit(4,_9436):-call(_9436).
	leftdigit(5,_9528):-call(_9528).
	leftdigit(6,_9620):-call(_9620).
	leftdigit(7,_9712):-call(_9712).
	leftdigit(8,_9804):-call(_9804).
	leftdigit(9,_9896):-call(_9896).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__1(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__2(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__3(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__4(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__5(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__6(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__7(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__8(Prolog* mach);
	static Operation* exec_pred_leftdigit_1__9(Prolog* mach);
	};


	};



}


#endif	//#ifndef SENDMORE
