#ifndef QUEENS_8
#define QUEENS_8

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
		static const Operation reg_top_0;
		static const Operation reg_queens_2;
		static const Operation reg_queens_3;
		static const Operation reg_not_attack_2;
		static const Operation reg_not_attack_3;
		static const Operation reg_select_3;
		static const Operation reg_range_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_10264):-queens(8,_10236,fail(_10264)).
			top(_10382):-call(_10382).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);

			static Operation exec_pred_top_0__2(Prolog* mach);
		};

	public:
		class pred_queens_2 : public Code {

			/*
			
			queens(_10420,_10422,_10478):-range(1,_10420,_10430,queens(_10430,[],_10422,_10478)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_queens_2__1(Prolog* mach);
		};

	public:
		class pred_queens_3 : public Code {

			/*
			
			queens([],_10658,_10658,_10682):-call(_10682).
			queens(_10774,_10776,_10778,_10858):-select(_10774,_10784,_10786,not_attack(_10776,_10786,queens(_10784,[_10786|_10776],_10778,_10858))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_queens_3__1(Prolog* mach);

			static Operation exec_pred_queens_3__2(Prolog* mach);
		};

	public:
		class pred_not_attack_2 : public Code {

			/*
			
			not_attack(_11100,_11102,_11144):-not_attack(_11100,_11102,1,_11144).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_not_attack_2__1(Prolog* mach);
		};

	public:
		class pred_not_attack_3 : public Code {

			/*
			
			not_attack([],_11272,_11274,_11314):-cut(1,_11314).
			not_attack([_11396|_11398],_11404,_11406,_11508):- =\=(_11404,_11396+_11406,=\=(_11404,_11396-_11406,is(_11440,_11406+1,not_attack(_11398,_11404,_11440,_11508)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_not_attack_3__1(Prolog* mach);

			static Operation exec_pred_not_attack_3__2(Prolog* mach);
		};

	public:
		class pred_select_3 : public Code {

			/*
			
			select([_11798|_11800],_11800,_11798,_11830):-call(_11830).
			select([_11940|_11942],[_11940|_11948],_11956,_12004):-select(_11942,_11948,_11956,_12004).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_select_3__1(Prolog* mach);

			static Operation exec_pred_select_3__2(Prolog* mach);
		};

	public:
		class pred_range_3 : public Code {

			/*
			
			range(_12150,_12150,[_12150],_12200):-cut(1,_12200).
			range(_12294,_12302,[_12294|_12296],_12382):-smallerthan(_12294,_12302,is(_12320,_12294+1,range(_12320,_12302,_12296,_12382))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_range_3__1(Prolog* mach);

			static Operation exec_pred_range_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef QUEENS_8
