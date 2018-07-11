#ifndef CRYPT
#define CRYPT

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class crypt {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s_call;
	static Const* const  s_even;
	static Const* const  s_is;
	static Const* const  s_lefteven;
	static Const* const  s_mod;
	static Const* const  s_mult;
	static Const* const  s_odd;
	static Const* const  s_sum;
	static Const* const  s_top;
	static Const* const  s_zero;
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
	static Operation* const  reg_sum_3;
	static Operation* const  reg_sum_4;
	static Operation* const  reg_mult_3;
	static Operation* const  reg_mult_4;
	static Operation* const  reg_zero_1;
	static Operation* const  reg_odd_1;
	static Operation* const  reg_even_1;
	static Operation* const  reg_lefteven_1;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_5898):-odd(_5504,even(_5508,even(_5512,even(_5516,mult([_5512,_5508,_5504],_5516,[_5538,_5544,_5550,_5556|_5558],lefteven(_5556,odd(_5550,even(_5544,even(_5538,zero(_5558,lefteven(_5590,mult([_5512,_5508,_5504],_5590,[_5612,_5618,_5624|_5626],lefteven(_5624,odd(_5618,even(_5612,zero(_5626,sum([_5538,_5544,_5550,_5556],[0,_5612,_5618,_5624],[_5702,_5708,_5714,_5720|_5722],odd(_5720,odd(_5714,even(_5708,even(_5702,zero(_5722,_5898)))))))))))))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_sum_3 : public Code {

	/*
	
	sum(_6802,_6804,_6806,_6856):-sum(_6802,_6804,0,_6806,_6856).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sum_3__1(Prolog* mach);
	};


public:
	class pred_sum_4 : public Code {

	/*
	
	sum([_6992|_6994],[_6998|_7000],_7014,[_7004|_7006],_7138):-cut(1,is(_7032,_6992+_6998+_7014,is(_7004,_7032 mod 10,is(_7056,_7032//10,sum(_6994,_7000,_7056,_7006,_7138))))).
	sum([],_7446,0,_7446,_7496):-cut(1,_7496).
	sum(_7574,[],0,_7574,_7626):-cut(1,_7626).
	sum([],[_7704|_7706],_7720,[_7710|_7712],_7838):-cut(1,is(_7732,_7704+_7720,is(_7744,_7732//10,is(_7710,_7732 mod 10,sum([],_7706,_7744,_7712,_7838))))).
	sum([_8144|_8146],[],_8160,[_8150|_8152],_8278):-cut(1,is(_8172,_8144+_8160,is(_8184,_8172//10,is(_8150,_8172 mod 10,sum([],_8146,_8184,_8152,_8278))))).
	sum([],[],_8584,[_8584],_8618):-call(_8618).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sum_4__1(Prolog* mach);
	static Operation* exec_pred_sum_4__2(Prolog* mach);
	static Operation* exec_pred_sum_4__3(Prolog* mach);
	static Operation* exec_pred_sum_4__4(Prolog* mach);
	static Operation* exec_pred_sum_4__5(Prolog* mach);
	static Operation* exec_pred_sum_4__6(Prolog* mach);
	};


public:
	class pred_mult_3 : public Code {

	/*
	
	mult(_8724,_8726,_8728,_8778):-mult(_8724,_8726,0,_8728,_8778).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_mult_3__1(Prolog* mach);
	};


public:
	class pred_mult_4 : public Code {

	/*
	
	mult([_8926|_8928],_8940,_8942,[_8932|_8934],_9060):-is(_8960,_8926*_8940+_8942,is(_8932,_8960 mod 10,is(_8984,_8960//10,mult(_8928,_8940,_8984,_8934,_9060)))).
	mult([],_9386,_9388,[_9372,_9378],_9466):-is(_9372,_9388 mod 10,is(_9378,_9388//10,_9466)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_mult_4__1(Prolog* mach);
	static Operation* exec_pred_mult_4__2(Prolog* mach);
	};


public:
	class pred_zero_1 : public Code {

	/*
	
	zero([],_9672):-call(_9672).
	zero([0|_9756],_9792):-zero(_9756,_9792).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_zero_1__1(Prolog* mach);
	static Operation* exec_pred_zero_1__2(Prolog* mach);
	};


public:
	class pred_odd_1 : public Code {

	/*
	
	odd(1,_9916):-call(_9916).
	odd(3,_10026):-call(_10026).
	odd(5,_10136):-call(_10136).
	odd(7,_10246):-call(_10246).
	odd(9,_10356):-call(_10356).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_odd_1__1(Prolog* mach);
	static Operation* exec_pred_odd_1__2(Prolog* mach);
	static Operation* exec_pred_odd_1__3(Prolog* mach);
	static Operation* exec_pred_odd_1__4(Prolog* mach);
	static Operation* exec_pred_odd_1__5(Prolog* mach);
	};


public:
	class pred_even_1 : public Code {

	/*
	
	even(0,_10466):-call(_10466).
	even(2,_10582):-call(_10582).
	even(4,_10698):-call(_10698).
	even(6,_10814):-call(_10814).
	even(8,_10930):-call(_10930).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_even_1__1(Prolog* mach);
	static Operation* exec_pred_even_1__2(Prolog* mach);
	static Operation* exec_pred_even_1__3(Prolog* mach);
	static Operation* exec_pred_even_1__4(Prolog* mach);
	static Operation* exec_pred_even_1__5(Prolog* mach);
	};


public:
	class pred_lefteven_1 : public Code {

	/*
	
	lefteven(2,_11046):-call(_11046).
	lefteven(4,_11168):-call(_11168).
	lefteven(6,_11290):-call(_11290).
	lefteven(8,_11412):-call(_11412).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_lefteven_1__1(Prolog* mach);
	static Operation* exec_pred_lefteven_1__2(Prolog* mach);
	static Operation* exec_pred_lefteven_1__3(Prolog* mach);
	static Operation* exec_pred_lefteven_1__4(Prolog* mach);
	};


	};



}


#endif	//#ifndef CRYPT
