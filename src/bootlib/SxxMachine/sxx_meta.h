#ifndef SXX_META
#define SXX_META

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;

	class sxx_meta {
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
	static Const* const  s_dotwo;
	static Const* const  s_fail;
	static Const* const  s_forall;
	static Const* const  s_nb_setarg;
	static Const* const  s_not;
	static Const* const  s_one_of_or_else;
	static Const* const  s_or;
	static Const* const  s_redo_each_call;
	static Const* const  s_setup_call_cleanup;
	static Const* const  s_true;
	static Const* const  s_undo;
	static Const* const  s_unify;
	static Int* const  posint1;
	static Operation* const  reg_forall_2;
	static Operation* const  reg_undo_1;
	static Operation* const  reg_redo_each_call_3;
	static Operation* const  reg_or_2;
	static Operation* const  reg_one_of_or_else_3;
public:
	class pred_forall_2 : public Code {

	/*
	
	forall(_6048,_6050,_6114):-not(\+ (call(_6048),\+ \+call(_6058)),_6114).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_forall_2__1(Prolog* mach);
	};


public:
	class pred_undo_1 : public Code {

	/*
	
	undo(_6198,_6226):-call(_6198,_6226).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_undo_1__1(Prolog* mach);
	};


public:
	class pred_redo_each_call_3 : public Code {

	/*
	
	redo_each_call(_6308,_6310,_6312,_6360):-setup_call_cleanup(_6308,_6310,_6312,_6360).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_redo_each_call_3__1(Prolog* mach);
	};


public:
	class pred_or_2 : public Code {

	/*
	
	or((_6488*->_6490),_6496,_6592):-unify(dotwo(true),_6504,or((call(_6488),nb_setarg(1,_6504,fail)),(_6504=dotwo(true);_6540),_6592)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_or_2__1(Prolog* mach);
	};


public:
	class pred_one_of_or_else_3 : public Code {

	/*
	
	one_of_or_else(_612,_614,_616,_632):-or((_620*->_622),_624,_632).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_one_of_or_else_3__1(Prolog* mach);
	};


	};



}


#endif	//#ifndef SXX_META
