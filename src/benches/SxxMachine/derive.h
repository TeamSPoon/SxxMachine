#ifndef DERIVE
#define DERIVE

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

	class derive {
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
		static Const* const  s_log10;
		static Const* const  s_ops8;
		static Const* const  s_top;
		static Const* const  s_x;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint3;
		static const Operation reg_top_0;
		static const Operation reg_ops8_0;
		static const Operation reg_log10_0;
		static const Operation reg_divide10_0;
		static const Operation reg_d_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_10296):-ops8(log10(divide10(_10296))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_ops8_0 : public Code {

			/*
			
			ops8(_10458):-d((x+1)*((x^2+2)*(x^3+3)),x,_10436,_10458).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_ops8_0__1(Prolog* mach);
		};

	public:
		class pred_log10_0 : public Code {

			/*
			
			log10(_10622):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_10600,_10622).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_log10_0__1(Prolog* mach);
		};

	public:
		class pred_divide10_0 : public Code {

			/*
			
			divide10(_10806):-d(x/x/x/x/x/x/x/x/x/x,x,_10784,_10806).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_divide10_0__1(Prolog* mach);
		};

	public:
		class pred_d_3 : public Code {

			/*
			
			d(_10916+_10918,_10930,_10922+_10924,_11000):-cut(1,d(_10916,_10930,_10922,d(_10918,_10930,_10924,_11000))).
			d(_11210-_11212,_11224,_11216-_11218,_11294):-cut(1,d(_11210,_11224,_11216,d(_11212,_11224,_11218,_11294))).
			d(_11504*_11506,_11530,_11510*_11506+_11504*_11518,_11600):-cut(1,d(_11504,_11530,_11510,d(_11506,_11530,_11518,_11600))).
			d(_11810/_11812,_11848,(_11816*_11812-_11810*_11824)/_11812^2,_11918):-cut(1,d(_11810,_11848,_11816,d(_11812,_11848,_11824,_11918))).
			d(_12128^_12130,_12154,_12134*_12130*_12128^_12142,_12238):-cut(1,integer(_12130,is(_12142,_12130-1,d(_12128,_12154,_12134,_12238)))).
			d(-_12470,_12480,-_12474,_12536):-cut(1,d(_12470,_12480,_12474,_12536)).
			d(exp(_12682),_12698,exp(_12682)*_12692,_12754):-cut(1,d(_12682,_12698,_12692,_12754)).
			d(log(_12900),_12912,_12904/_12900,_12968):-cut(1,d(_12900,_12912,_12904,_12968)).
			d(_13114,_13114,1,_13158):-cut(1,_13158).
			d(_13240,_13242,0,_13266):-call(_13266).
			
			
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


#endif	//#ifndef DERIVE
