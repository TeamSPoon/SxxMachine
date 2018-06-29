#ifndef DIVIDE10
#define DIVIDE10

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

	class divide10 {
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
		static Const* const  s_divide10;
		static Const* const  s_exp;
		static Const* const  s_integer;
		static Const* const  s_is;
		static Const* const  s_log;
		static Const* const  s_top;
		static Const* const  s_x;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static const Operation reg_top_0;
		static const Operation reg_divide10_0;
		static const Operation reg_d_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_15104):-divide10(_15104).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_divide10_0 : public Code {

			/*
			
			divide10(_15234):-d(x/x/x/x/x/x/x/x/x/x,x,_15212,_15234).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_divide10_0__1(Prolog* mach);
		};

	public:
		class pred_d_3 : public Code {

			/*
			
			d(_15332+_15334,_15346,_15338+_15340,_15416):-cut(1,d(_15332,_15346,_15338,d(_15334,_15346,_15340,_15416))).
			d(_15614-_15616,_15628,_15620-_15622,_15698):-cut(1,d(_15614,_15628,_15620,d(_15616,_15628,_15622,_15698))).
			d(_15896*_15898,_15922,_15902*_15898+_15896*_15910,_15992):-cut(1,d(_15896,_15922,_15902,d(_15898,_15922,_15910,_15992))).
			d(_16190/_16192,_16228,(_16196*_16192-_16190*_16204)/_16192^2,_16298):-cut(1,d(_16190,_16228,_16196,d(_16192,_16228,_16204,_16298))).
			d(_16496^_16498,_16522,_16502*_16498*_16496^_16510,_16606):-cut(1,integer(_16498,is(_16510,_16498-1,d(_16496,_16522,_16502,_16606)))).
			d(-_16826,_16836,-_16830,_16892):-cut(1,d(_16826,_16836,_16830,_16892)).
			d(exp(_17026),_17042,exp(_17026)*_17036,_17098):-cut(1,d(_17026,_17042,_17036,_17098)).
			d(log(_17232),_17244,_17236/_17232,_17300):-cut(1,d(_17232,_17244,_17236,_17300)).
			d(_17434,_17434,1,_17478):-cut(1,_17478).
			d(_17548,_17550,0,_17574):-call(_17574).
			
			
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


#endif	//#ifndef DIVIDE10
