#ifndef TAK
#define TAK

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

	class tak {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s_is;
		static Const* const  s_smallerorequal;
		static Const* const  s_smallerthan;
		static Const* const  s_tak;
		static Const* const  s_top;
		static Const* const  s_unify;
		static Int* const  posint1;
		static Int* const  posint6;
		static Int* const  posint12;
		static Int* const  posint18;
		static const Operation reg_top_0;
		static const Operation reg_tak_0;
		static const Operation reg_tak_4;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5320):-tak(_5320).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_tak_0 : public Code {

			/*
			
			tak(_5398):-tak(18,12,6,_5376,_5398).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_tak_0__1(Prolog* mach);
		};

	public:
		class pred_tak_4 : public Code {

			/*
			
			tak(_5510,_5512,_5514,_5516,_5580):-smallerorequal(_5510,_5512,unify(_5516,_5514,_5580)).
			tak(_5764,_5766,_5768,_5770,_5940):-smallerthan(_5766,_5764,is(_5786,_5764-1,tak(_5786,_5766,_5768,_5798,is(_5808,_5766-1,tak(_5808,_5768,_5764,_5820,is(_5830,_5768-1,tak(_5830,_5764,_5766,_5842,tak(_5798,_5820,_5842,_5770,_5940)))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_tak_4__1(Prolog* mach);

			static Operation exec_pred_tak_4__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef TAK
