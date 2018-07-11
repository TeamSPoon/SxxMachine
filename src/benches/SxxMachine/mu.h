#ifndef MU
#define MU

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class mu {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s_a;
	static Const* const  s_append;
	static Const* const  s_call;
	static Const* const  s_i;
	static Const* const  s_is;
	static Const* const  s_m;
	static Const* const  s_mu;
	static Const* const  s_rule;
	static Const* const  s_rule1;
	static Const* const  s_rule2;
	static Const* const  s_rule3;
	static Const* const  s_rule4;
	static Const* const  s_smallerthan;
	static Const* const  s_theorem;
	static Const* const  s_top;
	static Const* const  s_u;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Int* const  posint4;
	static Int* const  posint5;
	static Operation* const  reg_top_0;
	static Operation* const  reg_mu_0;
	static Operation* const  reg_theorem_3;
	static Operation* const  reg_rule_3;
	static Operation* const  reg_rule1_2;
	static Operation* const  reg_rule2_2;
	static Operation* const  reg_rule3_2;
	static Operation* const  reg_rule4_2;
	static Operation* const  reg_append_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_15040):-mu(_15040).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_mu_0 : public Code {

	/*
	
	mu(_15152):-theorem([m,u,i,i,u],5,_15124,cut(1,_15152)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_mu_0__1(Prolog* mach);
	};


public:
	class pred_theorem_3 : public Code {

	/*
	
	theorem([m,i],_15294,[[a,m,i]],_15318):-call(_15318).
	theorem(_15412,_15424,[[_15410|_15412]|_15418],_15518):-smallerthan(0,_15424,is(_15442,_15424-1,theorem(_15448,_15442,_15418,rule(_15410,_15448,_15412,_15518)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_theorem_3__1(Prolog* mach);
	static Operation* exec_pred_theorem_3__2(Prolog* mach);
	};


public:
	class pred_rule_3 : public Code {

	/*
	
	rule(1,_15818,_15820,_15866):-rule1(_15818,_15820,_15866).
	rule(2,_15988,_15990,_16036):-rule2(_15988,_15990,_16036).
	rule(3,_16158,_16160,_16206):-rule3(_16158,_16160,_16206).
	rule(4,_16328,_16330,_16376):-rule4(_16328,_16330,_16376).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rule_3__1(Prolog* mach);
	static Operation* exec_pred_rule_3__2(Prolog* mach);
	static Operation* exec_pred_rule_3__3(Prolog* mach);
	static Operation* exec_pred_rule_3__4(Prolog* mach);
	};


public:
	class pred_rule1_2 : public Code {

	/*
	
	rule1([i],[i,u],_16538):-call(_16538).
	rule1([_16628|_16630],[_16628|_16636],_16682):-rule1(_16630,_16636,_16682).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rule1_2__1(Prolog* mach);
	static Operation* exec_pred_rule1_2__2(Prolog* mach);
	};


public:
	class pred_rule2_2 : public Code {

	/*
	
	rule2([m|_16802],[m|_16808],_16856):-append(_16802,_16802,_16808,_16856).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rule2_2__1(Prolog* mach);
	};


public:
	class pred_rule3_2 : public Code {

	/*
	
	rule3([i,i,i|_17008],[u|_17008],_17042):-call(_17042).
	rule3([_17144|_17146],[_17144|_17152],_17198):-rule3(_17146,_17152,_17198).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rule3_2__1(Prolog* mach);
	static Operation* exec_pred_rule3_2__2(Prolog* mach);
	};


public:
	class pred_rule4_2 : public Code {

	/*
	
	rule4([u,u|_17336],_17336,_17364):-call(_17364).
	rule4([_17472|_17474],[_17472|_17480],_17526):-rule4(_17474,_17480,_17526).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rule4_2__1(Prolog* mach);
	static Operation* exec_pred_rule4_2__2(Prolog* mach);
	};


public:
	class pred_append_3 : public Code {

	/*
	
	append([],_17664,_17664,_17688):-call(_17688).
	append([_17816|_17818],_17830,[_17816|_17824],_17880):-append(_17818,_17830,_17824,_17880).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_append_3__1(Prolog* mach);
	static Operation* exec_pred_append_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef MU
