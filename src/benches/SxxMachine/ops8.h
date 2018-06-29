#ifndef OPS8
#define OPS8

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
		static const Operation reg_top_0;
		static const Operation reg_ops8_0;
		static const Operation reg_d_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_10258):-ops8(_10258).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_ops8_0 : public Code {

			/*
			
			ops8(_10376):-d((x+1)*((x^2+2)*(x^3+3)),x,_10354,_10376).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_ops8_0__1(Prolog* mach);
		};

	public:
		class pred_d_3 : public Code {

			/*
			
			d(_10474+_10476,_10488,_10480+_10482,_10558):-cut(1,d(_10474,_10488,_10480,d(_10476,_10488,_10482,_10558))).
			d(_10756-_10758,_10770,_10762-_10764,_10840):-cut(1,d(_10756,_10770,_10762,d(_10758,_10770,_10764,_10840))).
			d(_11038*_11040,_11064,_11044*_11040+_11038*_11052,_11134):-cut(1,d(_11038,_11064,_11044,d(_11040,_11064,_11052,_11134))).
			d(_11332/_11334,_11370,(_11338*_11334-_11332*_11346)/_11334^2,_11440):-cut(1,d(_11332,_11370,_11338,d(_11334,_11370,_11346,_11440))).
			d(_11638^_11640,_11664,_11644*_11640*_11638^_11652,_11748):-cut(1,integer(_11640,is(_11652,_11640-1,d(_11638,_11664,_11644,_11748)))).
			d(-_11968,_11978,-_11972,_12034):-cut(1,d(_11968,_11978,_11972,_12034)).
			d(exp(_12168),_12184,exp(_12168)*_12178,_12240):-cut(1,d(_12168,_12184,_12178,_12240)).
			d(log(_12374),_12386,_12378/_12374,_12442):-cut(1,d(_12374,_12386,_12378,_12442)).
			d(_12576,_12576,1,_12620):-cut(1,_12620).
			d(_12690,_12692,0,_12716):-call(_12716).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_d_3__1(Prolog* mach);

			static Operation exec_pred_d_3__2(Prolog* mach);

			static Operation exec_pred_d_3__3(Prolog* mach);

			static Operation exec_pred_d_3__4(Prolog* mach);

			static Operation exec_pred_d_3__5(Prolog* mach);

			static Operation exec_pred_d_3__6(Prolog* mach);

			static Operation exec_pred_d_3__7(Prolog* mach);

			static Operation exec_pred_d_3__8(Prolog* mach);

			static Operation exec_pred_d_3__9(Prolog* mach);

			static Operation exec_pred_d_3__10(Prolog* mach);
		};

	};

}


#endif	//#ifndef OPS8
