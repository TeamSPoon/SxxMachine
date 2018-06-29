#ifndef CRYPT
#define CRYPT

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

	class crypt {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s4;
		static Const* const  s5;
		static Const* const  s_call;
		static Const* const  s_even;
		static Const* const  s_is;
		static Const* const  s_lefteven;
		static Const* const  s_mod;
		static Const* const  s_mult;
		static Const* const  s_odd;
		static Const* const  s_sum;
		static Const* const  s_top;
		static Const* const  s_zero;
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
		static const Operation reg_sum_3;
		static const Operation reg_sum_4;
		static const Operation reg_mult_3;
		static const Operation reg_mult_4;
		static const Operation reg_zero_1;
		static const Operation reg_odd_1;
		static const Operation reg_even_1;
		static const Operation reg_lefteven_1;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5892):-odd(_5498,even(_5502,even(_5506,even(_5510,mult([_5506,_5502,_5498],_5510,[_5532,_5538,_5544,_5550|_5552],lefteven(_5550,odd(_5544,even(_5538,even(_5532,zero(_5552,lefteven(_5584,mult([_5506,_5502,_5498],_5584,[_5606,_5612,_5618|_5620],lefteven(_5618,odd(_5612,even(_5606,zero(_5620,sum([_5532,_5538,_5544,_5550],[0,_5606,_5612,_5618],[_5696,_5702,_5708,_5714|_5716],odd(_5714,odd(_5708,even(_5702,even(_5696,zero(_5716,_5892)))))))))))))))))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_sum_3 : public Code {

			/*
			
			sum(_6796,_6798,_6800,_6850):-sum(_6796,_6798,0,_6800,_6850).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_sum_3__1(Prolog* mach);
		};

	public:
		class pred_sum_4 : public Code {

			/*
			
			sum([_6986|_6988],[_6992|_6994],_7008,[_6998|_7000],_7132):-cut(1,is(_7026,_6986+_6992+_7008,is(_6998,_7026 mod 10,is(_7050,_7026//10,sum(_6988,_6994,_7050,_7000,_7132))))).
			sum([],_7440,0,_7440,_7490):-cut(1,_7490).
			sum(_7568,[],0,_7568,_7620):-cut(1,_7620).
			sum([],[_7698|_7700],_7714,[_7704|_7706],_7832):-cut(1,is(_7726,_7698+_7714,is(_7738,_7726//10,is(_7704,_7726 mod 10,sum([],_7700,_7738,_7706,_7832))))).
			sum([_8138|_8140],[],_8154,[_8144|_8146],_8272):-cut(1,is(_8166,_8138+_8154,is(_8178,_8166//10,is(_8144,_8166 mod 10,sum([],_8140,_8178,_8146,_8272))))).
			sum([],[],_8578,[_8578],_8612):-call(_8612).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_sum_4__1(Prolog* mach);

			static Operation exec_pred_sum_4__2(Prolog* mach);

			static Operation exec_pred_sum_4__3(Prolog* mach);

			static Operation exec_pred_sum_4__4(Prolog* mach);

			static Operation exec_pred_sum_4__5(Prolog* mach);

			static Operation exec_pred_sum_4__6(Prolog* mach);
		};

	public:
		class pred_mult_3 : public Code {

			/*
			
			mult(_8718,_8720,_8722,_8772):-mult(_8718,_8720,0,_8722,_8772).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_mult_3__1(Prolog* mach);
		};

	public:
		class pred_mult_4 : public Code {

			/*
			
			mult([_8920|_8922],_8934,_8936,[_8926|_8928],_9054):-is(_8954,_8920*_8934+_8936,is(_8926,_8954 mod 10,is(_8978,_8954//10,mult(_8922,_8934,_8978,_8928,_9054)))).
			mult([],_9380,_9382,[_9366,_9372],_9460):-is(_9366,_9382 mod 10,is(_9372,_9382//10,_9460)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_mult_4__1(Prolog* mach);

			static Operation exec_pred_mult_4__2(Prolog* mach);
		};

	public:
		class pred_zero_1 : public Code {

			/*
			
			zero([],_9666):-call(_9666).
			zero([0|_9750],_9786):-zero(_9750,_9786).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_zero_1__1(Prolog* mach);

			static Operation exec_pred_zero_1__2(Prolog* mach);
		};

	public:
		class pred_odd_1 : public Code {

			/*
			
			odd(1,_9910):-call(_9910).
			odd(3,_10020):-call(_10020).
			odd(5,_10130):-call(_10130).
			odd(7,_10240):-call(_10240).
			odd(9,_10350):-call(_10350).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_odd_1__1(Prolog* mach);

			static Operation exec_pred_odd_1__2(Prolog* mach);

			static Operation exec_pred_odd_1__3(Prolog* mach);

			static Operation exec_pred_odd_1__4(Prolog* mach);

			static Operation exec_pred_odd_1__5(Prolog* mach);
		};

	public:
		class pred_even_1 : public Code {

			/*
			
			even(0,_10460):-call(_10460).
			even(2,_10576):-call(_10576).
			even(4,_10692):-call(_10692).
			even(6,_10808):-call(_10808).
			even(8,_10924):-call(_10924).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_even_1__1(Prolog* mach);

			static Operation exec_pred_even_1__2(Prolog* mach);

			static Operation exec_pred_even_1__3(Prolog* mach);

			static Operation exec_pred_even_1__4(Prolog* mach);

			static Operation exec_pred_even_1__5(Prolog* mach);
		};

	public:
		class pred_lefteven_1 : public Code {

			/*
			
			lefteven(2,_11040):-call(_11040).
			lefteven(4,_11162):-call(_11162).
			lefteven(6,_11284):-call(_11284).
			lefteven(8,_11406):-call(_11406).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_lefteven_1__1(Prolog* mach);

			static Operation exec_pred_lefteven_1__2(Prolog* mach);

			static Operation exec_pred_lefteven_1__3(Prolog* mach);

			static Operation exec_pred_lefteven_1__4(Prolog* mach);
		};

	};

}


#endif	//#ifndef CRYPT
