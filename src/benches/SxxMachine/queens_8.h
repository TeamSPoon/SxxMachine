#ifndef QUEENS_8
#define QUEENS_8

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class queens_8 {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s_call;
	static Const* const  s_fail;
	static Const* const  s_is;
	static Const* const  s_not_attack;
	static Const* const  s_queens;
	static Const* const  s_range;
	static Const* const  s_select;
	static Const* const  s_smallerthan;
	static Const* const  s_top;
	static Int* const  posint1;
	static Int* const  posint8;
	static Operation* const  reg_top_0;
	static Operation* const  reg_queens_2;
	static Operation* const  reg_queens_3;
	static Operation* const  reg_not_attack_2;
	static Operation* const  reg_not_attack_3;
	static Operation* const  reg_select_3;
	static Operation* const  reg_range_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_34226):-queens(8,_34198,fail(_34226)).
	top(_34344):-call(_34344).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	static Operation* exec_pred_top_0__2(Prolog* mach);
	};


public:
	class pred_queens_2 : public Code {

	/*
	
	queens(_34382,_34384,_34440):-range(1,_34382,_34392,queens(_34392,[],_34384,_34440)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_queens_2__1(Prolog* mach);
	};


public:
	class pred_queens_3 : public Code {

	/*
	
	queens([],_34620,_34620,_34644):-call(_34644).
	queens(_34736,_34738,_34740,_34820):-select(_34736,_34746,_34748,not_attack(_34738,_34748,queens(_34746,[_34748|_34738],_34740,_34820))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_queens_3__1(Prolog* mach);
	static Operation* exec_pred_queens_3__2(Prolog* mach);
	};


public:
	class pred_not_attack_2 : public Code {

	/*
	
	not_attack(_35062,_35064,_35106):-not_attack(_35062,_35064,1,_35106).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_not_attack_2__1(Prolog* mach);
	};


public:
	class pred_not_attack_3 : public Code {

	/*
	
	not_attack([],_35234,_35236,_35276):-cut(1,_35276).
	not_attack([_35358|_35360],_35366,_35368,_35470):- =\=(_35366,_35358+_35368,=\=(_35366,_35358-_35368,is(_35402,_35368+1,not_attack(_35360,_35366,_35402,_35470)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_not_attack_3__1(Prolog* mach);
	static Operation* exec_pred_not_attack_3__2(Prolog* mach);
	};


public:
	class pred_select_3 : public Code {

	/*
	
	select([_35760|_35762],_35762,_35760,_35792):-call(_35792).
	select([_35902|_35904],[_35902|_35910],_35918,_35966):-select(_35904,_35910,_35918,_35966).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_select_3__1(Prolog* mach);
	static Operation* exec_pred_select_3__2(Prolog* mach);
	};


public:
	class pred_range_3 : public Code {

	/*
	
	range(_36112,_36112,[_36112],_36162):-cut(1,_36162).
	range(_36256,_36264,[_36256|_36258],_36344):-smallerthan(_36256,_36264,is(_36282,_36256+1,range(_36282,_36264,_36258,_36344))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_range_3__1(Prolog* mach);
	static Operation* exec_pred_range_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef QUEENS_8
