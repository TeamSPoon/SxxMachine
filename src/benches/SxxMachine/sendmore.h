#ifndef SENDMORE
#define SENDMORE

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

	class sendmore {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s4;
		static Const* const  s5;
		static Const* const  s6;
		static Const* const  s7;
		static Const* const  s8;
		static Const* const  s9;
		static Const* const  s_call;
		static Const* const  s_digit;
		static Const* const  s_fail;
		static Const* const  s_is;
		static Const* const  s_leftdigit;
		static Const* const  s_or;
		static Const* const  s_sumdigit;
		static Const* const  s_top;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint3;
		static Int* const  posint4;
		static Int* const  posint5;
		static Int* const  posint6;
		static Int* const  posint7;
		static Int* const  posint8;
		static Int* const  posint9;
		static Int* const  posint10;
		static const Operation reg_top_0;
		static const Operation reg_sumdigit_5;
		static const Operation reg_digit_1;
		static const Operation reg_leftdigit_1;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5922):-digit(_5450,digit(_5454,=\=(_5450,_5454,sumdigit(0,_5450,_5454,_5470,_5472,digit(_5476,=\=(_5476,_5470,=\=(_5476,_5454,=\=(_5476,_5450,digit(_5498,=\=(_5498,_5476,=\=(_5498,_5470,=\=(_5498,_5454,=\=(_5498,_5450,sumdigit(_5472,_5476,_5498,_5454,_5534,digit(_5538,=\=(_5538,_5498,=\=(_5538,_5476,=\=(_5538,_5470,=\=(_5538,_5454,=\=(_5538,_5450,sumdigit(_5534,_5454,_5538,_5476,_5580,leftdigit(_5584,=\=(_5584,_5538,=\=(_5584,_5498,=\=(_5584,_5476,=\=(_5584,_5470,=\=(_5584,_5454,=\=(_5584,_5450,leftdigit(_5624,=\=(_5624,_5584,=\=(_5624,_5538,=\=(_5624,_5498,=\=(_5624,_5476,=\=(_5624,_5470,=\=(_5624,_5454,=\=(_5624,_5450,sumdigit(_5580,_5584,_5624,_5538,_5624,fail(_5922)))))))))))))))))))))))))))))))))))))).
			top(_7910):-call(_7910).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);

			static Operation exec_pred_top_0__2(Prolog* mach);
		};

	public:
		class pred_sumdigit_5 : public Code {

			/*
			
			sumdigit(_7948,_7950,_7952,_7954,_7956,_8092):-is(_7972,_7948+_7950+_7952,or((_7972<10->_7954=_7972,_7956=0),(_7954 is _7972-10,_7956=1),_8092)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_sumdigit_5__1(Prolog* mach);
		};

	public:
		class pred_digit_1 : public Code {

			/*
			
			digit(0,_8294):-call(_8294).
			digit(1,_8380):-call(_8380).
			digit(2,_8466):-call(_8466).
			digit(3,_8552):-call(_8552).
			digit(4,_8638):-call(_8638).
			digit(5,_8724):-call(_8724).
			digit(6,_8810):-call(_8810).
			digit(7,_8896):-call(_8896).
			digit(8,_8982):-call(_8982).
			digit(9,_9068):-call(_9068).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_digit_1__1(Prolog* mach);

			static Operation exec_pred_digit_1__2(Prolog* mach);

			static Operation exec_pred_digit_1__3(Prolog* mach);

			static Operation exec_pred_digit_1__4(Prolog* mach);

			static Operation exec_pred_digit_1__5(Prolog* mach);

			static Operation exec_pred_digit_1__6(Prolog* mach);

			static Operation exec_pred_digit_1__7(Prolog* mach);

			static Operation exec_pred_digit_1__8(Prolog* mach);

			static Operation exec_pred_digit_1__9(Prolog* mach);

			static Operation exec_pred_digit_1__10(Prolog* mach);
		};

	public:
		class pred_leftdigit_1 : public Code {

			/*
			
			leftdigit(1,_9154):-call(_9154).
			leftdigit(2,_9246):-call(_9246).
			leftdigit(3,_9338):-call(_9338).
			leftdigit(4,_9430):-call(_9430).
			leftdigit(5,_9522):-call(_9522).
			leftdigit(6,_9614):-call(_9614).
			leftdigit(7,_9706):-call(_9706).
			leftdigit(8,_9798):-call(_9798).
			leftdigit(9,_9890):-call(_9890).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_leftdigit_1__1(Prolog* mach);

			static Operation exec_pred_leftdigit_1__2(Prolog* mach);

			static Operation exec_pred_leftdigit_1__3(Prolog* mach);

			static Operation exec_pred_leftdigit_1__4(Prolog* mach);

			static Operation exec_pred_leftdigit_1__5(Prolog* mach);

			static Operation exec_pred_leftdigit_1__6(Prolog* mach);

			static Operation exec_pred_leftdigit_1__7(Prolog* mach);

			static Operation exec_pred_leftdigit_1__8(Prolog* mach);

			static Operation exec_pred_leftdigit_1__9(Prolog* mach);
		};

	};

}


#endif	//#ifndef SENDMORE
