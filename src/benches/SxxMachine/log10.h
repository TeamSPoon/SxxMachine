#ifndef LOG10
#define LOG10

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

	class log10 {
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
		static Const* const  s_log10;
		static Const* const  s_top;
		static Const* const  s_x;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static const Operation reg_top_0;
		static const Operation reg_log10_0;
		static const Operation reg_d_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5486):-log10(_5486).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_log10_0 : public Code {

			/*
			
			log10(_5602):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_5580,_5602).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_log10_0__1(Prolog* mach);
		};

	public:
		class pred_d_3 : public Code {

			/*
			
			d(_5700+_5702,_5714,_5706+_5708,_5784):-cut(1,d(_5700,_5714,_5706,d(_5702,_5714,_5708,_5784))).
			d(_5982-_5984,_5996,_5988-_5990,_6066):-cut(1,d(_5982,_5996,_5988,d(_5984,_5996,_5990,_6066))).
			d(_6264*_6266,_6290,_6270*_6266+_6264*_6278,_6360):-cut(1,d(_6264,_6290,_6270,d(_6266,_6290,_6278,_6360))).
			d(_6558/_6560,_6596,(_6564*_6560-_6558*_6572)/_6560^2,_6666):-cut(1,d(_6558,_6596,_6564,d(_6560,_6596,_6572,_6666))).
			d(_6864^_6866,_6890,_6870*_6866*_6864^_6878,_6974):-cut(1,integer(_6866,is(_6878,_6866-1,d(_6864,_6890,_6870,_6974)))).
			d(-_7194,_7204,-_7198,_7260):-cut(1,d(_7194,_7204,_7198,_7260)).
			d(exp(_7394),_7410,exp(_7394)*_7404,_7466):-cut(1,d(_7394,_7410,_7404,_7466)).
			d(log(_7600),_7612,_7604/_7600,_7668):-cut(1,d(_7600,_7612,_7604,_7668)).
			d(_7802,_7802,1,_7846):-cut(1,_7846).
			d(_7916,_7918,0,_7942):-call(_7942).
			
			
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


#endif	//#ifndef LOG10
