#ifndef BUILTINS
#define BUILTINS

#include "Code.h"
#include "Prolog.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdexcept>
#include "exceptionhelper.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }
namespace SxxMachine { class Code; }
namespace SxxMachine { class Term; }
namespace SxxMachine { class Var; }

namespace SxxMachine {
	// some builtins written in Java for Prolog


	// Bart Demoen, Paul Tarau Aug 1996 Moncton
	// there is a mapping from special names (like <) to tokens
	// with only letters - the compiler must be aware of that mapping

	// smallerthan implements </2
	class Builtins {

	public:
		class Borked : public Code {

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);

		};

	public:
		class pred_unify_3 : public Borked {
		};

	public:
		class pred_$003D$002E$002E_2 : public Borked {
		};

	public:
		class pred_length_2 : public Borked {
		};

	public:
		class pred_unify_6 : public Borked {
		};

	public:
		class pred_$002D$002D$003E_2 : public Borked {
		};

	public:
		class pred_isglobal_2 : public Borked {
		};

	public:
		class pred_$003C$003D_2 : public Borked {
		};

	public:
		class pred_$003D$003C_2 : public Borked {
		};

	public:
		class pred_get_performance_stats_2 : public Borked {
		};

	public:
		class pred_between_3 : public Borked {
		};

	public:
		class pred_$003D$005C$003D_2 : public Borked {
		};

	public:
		class pred_style_check_1 : public Borked {
		};

	public:
		class pred_module_colon_2 : public Borked {
		};

	public:
		class pred_nb_setval_2 : public Borked {
		};

	public:
		class pred_name_2 : public Borked {
		};

	public:
		class pred_number_1 : public Borked {
		};

	public:
		class pred_recorded_3 : public Borked {
		};

	public:
		class pred_filter_vars_4 : public Borked {
		};

	public:
		class pred_intersectv_list_3 : public Borked {
		};

	public:
		class pred_nonvar_1 : public Borked {

		};

	public:
		class pred_varbag_3 : public Borked {

		};

	public:
		class pred_filter_dups_3 : public Borked {

		};

	public:
		class pred_setup_call_cleanup_3 : public Borked {
		};

	public:
		class pred_fail_0 : public Code {
		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_true_0 : public Code {
		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_smallerthan_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

		// smallerorequal implements =</2

	public:
		class pred_smallerorequal_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

		// arithequal implements =:=/2

	public:
		class pred_arithequal_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

		// arithdifferent implements =\= /2

	public:
		class pred_arithdifferent_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

		// is implements is/2

	public:
		class pred_is_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

		// unify implements =/2

	public:
		class pred_unify_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

		// univ implements the left direction of =../2

	public:
		class pred_univ_3 : public Code {
		protected:
			int Arity() override;

			// Areg[0] is a free variable
			// Areg[1] is a Const
			// Areg[2] is a list of PrologObjects

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_write_1 : public Code {
		public:
			static Code* const  entry_code;

		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_nl_0 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_functor_3 : public Code {
		protected:
			int Arity() override;

		public:
			static bool DoFunctor3(Prolog* mach, Term* arg1, Term* arg2, Term* arg3);

			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_arg_3 : public Code {
		protected:
			int Arity() override;

		public:
			static bool DoArg3(Prolog* mach, Term* arg1, Term* arg2, Term* arg3);

			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_nexttoken_1 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_cputime_1 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class findall_list : public PrologObject {
		public:
			Var* uptonowbegin,* uptonowend;
			long long time = 0;

			virtual ~findall_list() {
				delete uptonowbegin;
				delete uptonowend;
			}

			findall_list(Prolog* mach);

			Term* Deref() override;

			bool Unify(Term* that, Prolog* mach) override;

			std::string toString() override;

		};

	public:
		class pred_initfindall_1 : public Code {
		public:
			static Code* entry_code;

		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_addfindall_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_retrievefindall_2 : public Code {
		public:
			static Code* entry_code;

		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_var_equal_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_trail_1 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_choice_1 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_type_of_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_assume_1 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_allassumed_1 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_get0_1 : public Code {
		public:
			static Code* const  entry_code;

		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);

		private:
			static int readOneChar(InputStream* currentinput) throw(IOException);
		};

	public:
		class pred_halt_0 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_setarg_3 : public Code {
		protected:
			int Arity() override;

		public:
			static bool DoSetArg3(Prolog* mach, Term* arg1, Term* arg2, Term* arg3);

			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_compare_3 : public Code {
		public:
			static pred_compare_3* entry_code;

		protected:
			int Arity() override;

			// Real < Const < Fun < Var

		public:
			static int Compare(Term* t, Term* s);

			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_freeze_internal_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_execcontinuation_0 : public Code {
		public:
			static Code* entry_code;

		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	public:
		class pred_frozen_2 : public Code {
		protected:
			int Arity() override;

		public:
			Operation* Exec(Prolog* mach) override;

			static Operation* exec_static(Prolog* mach);
		};

	};

}


#endif	//#ifndef BUILTINS
