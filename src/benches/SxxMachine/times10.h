#ifndef TIMES10
#define TIMES10

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

	class times10 {
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
		static Const* const  s_times10;
		static Const* const  s_top;
		static Const* const  s_x;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static const Operation reg_top_0;
		static const Operation reg_times10_0;
		static const Operation reg_d_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_10112):-times10(_10112).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_times10_0 : public Code {

			/*
			
			times10(_10242):-d(x*x*x*x*x*x*x*x*x*x,x,_10220,_10242).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_times10_0__1(Prolog* mach);
		};

	public:
		class pred_d_3 : public Code {

			/*
			
			d(_10340+_10342,_10354,_10346+_10348,_10424):-cut(1,d(_10340,_10354,_10346,d(_10342,_10354,_10348,_10424))).
			d(_10622-_10624,_10636,_10628-_10630,_10706):-cut(1,d(_10622,_10636,_10628,d(_10624,_10636,_10630,_10706))).
			d(_10904*_10906,_10930,_10910*_10906+_10904*_10918,_11000):-cut(1,d(_10904,_10930,_10910,d(_10906,_10930,_10918,_11000))).
			d(_11198/_11200,_11236,(_11204*_11200-_11198*_11212)/_11200^2,_11306):-cut(1,d(_11198,_11236,_11204,d(_11200,_11236,_11212,_11306))).
			d(_11504^_11506,_11530,_11510*_11506*_11504^_11518,_11614):-cut(1,integer(_11506,is(_11518,_11506-1,d(_11504,_11530,_11510,_11614)))).
			d(-_11834,_11844,-_11838,_11900):-cut(1,d(_11834,_11844,_11838,_11900)).
			d(exp(_12034),_12050,exp(_12034)*_12044,_12106):-cut(1,d(_12034,_12050,_12044,_12106)).
			d(log(_12240),_12252,_12244/_12240,_12308):-cut(1,d(_12240,_12252,_12244,_12308)).
			d(_12442,_12442,1,_12486):-cut(1,_12486).
			d(_12556,_12558,0,_12582):-call(_12582).
			
			
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


#endif	//#ifndef TIMES10
