#ifndef SXX_META
#define SXX_META

#include "../../machine/SxxMachine/Operation.h"
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
		static const Operation reg_forall_2;
		static const Operation reg_undo_1;
		static const Operation reg_redo_each_call_3;
		static const Operation reg_or_2;
		static const Operation reg_one_of_or_else_3;

	public:
		class pred_forall_2 : public Code {

			/*
			
			forall(_6042,_6044,_6108):-not(\+ (call(_6042),\+ \+call(_6052)),_6108).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_forall_2__1(Prolog* mach);
		};

	public:
		class pred_undo_1 : public Code {

			/*
			
			undo(_6192,_6220):-call(_6192,_6220).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_undo_1__1(Prolog* mach);
		};

	public:
		class pred_redo_each_call_3 : public Code {

			/*
			
			redo_each_call(_6302,_6304,_6306,_6354):-setup_call_cleanup(_6302,_6304,_6306,_6354).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_redo_each_call_3__1(Prolog* mach);
		};

	public:
		class pred_or_2 : public Code {

			/*
			
			or((_6482*->_6484),_6490,_6586):-unify(dotwo(true),_6498,or((call(_6482),nb_setarg(1,_6498,fail)),(_6498=dotwo(true);_6534),_6586)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_or_2__1(Prolog* mach);
		};

	public:
		class pred_one_of_or_else_3 : public Code {

			/*
			
			one_of_or_else(_612,_614,_616,_632):-or((_620*->_622),_624,_632).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_one_of_or_else_3__1(Prolog* mach);
		};

	};

}


#endif	//#ifndef SXX_META
