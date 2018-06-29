#ifndef ZEBRA
#define ZEBRA

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

	class zebra {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s_blue;
		static Const* const  s_call;
		static Const* const  s_chesterfields;
		static Const* const  s_coffee;
		static Const* const  s_dog;
		static Const* const  s_english;
		static Const* const  s_fox;
		static Const* const  s_green;
		static Const* const  s_horse;
		static Const* const  s_house;
		static Const* const  s_houses;
		static Const* const  s_ivory;
		static Const* const  s_japanese;
		static Const* const  s_kools;
		static Const* const  s_lucky_strikes;
		static Const* const  s_member;
		static Const* const  s_milk;
		static Const* const  s_next_to;
		static Const* const  s_nl;
		static Const* const  s_norwegian;
		static Const* const  s_orange_juice;
		static Const* const  s_parliaments;
		static Const* const  s_print_houses;
		static Const* const  s_red;
		static Const* const  s_right_of;
		static Const* const  s_snails;
		static Const* const  s_spanish;
		static Const* const  s_tea;
		static Const* const  s_top;
		static Const* const  s_ukrainian;
		static Const* const  s_unify;
		static Const* const  s_water;
		static Const* const  s_winstons;
		static Const* const  s_write;
		static Const* const  s_yellow;
		static Const* const  s_zebra;
		static Int* const  posint1;
		static const Operation reg_top_0;
		static const Operation reg_houses_1;
		static const Operation reg_right_of_3;
		static const Operation reg_next_to_3;
		static const Operation reg_member_2;
		static const Operation reg_print_houses_1;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5834):-houses(_5336,member(house(red,english,_5344,_5346,_5348),_5336,member(house(_5358,spanish,dog,_5364,_5366),_5336,member(house(green,_5378,_5380,coffee,_5384),_5336,member(house(_5394,ukrainian,_5398,tea,_5402),_5336,right_of(house(green,_5414,_5416,_5418,_5420),house(ivory,_5426,_5428,_5430,_5432),_5336,member(house(_5444,_5446,snails,_5450,winstons),_5336,member(house(yellow,_5464,_5466,_5468,kools),_5336,unify([_5480,_5486,house(_5492,_5494,_5496,milk,_5500),_5510,_5516],_5336,unify([house(_5528,norwegian,_5532,_5534,_5536)|_5542],_5336,next_to(house(_5552,_5554,_5556,_5558,chesterfields),house(_5564,_5566,fox,_5570,_5572),_5336,next_to(house(_5584,_5586,_5588,_5590,kools),house(_5596,_5598,horse,_5602,_5604),_5336,member(house(_5616,_5618,_5620,orange_juice,lucky_strikes),_5336,member(house(_5634,japanese,_5638,_5640,parliaments),_5336,next_to(house(_5652,norwegian,_5656,_5658,_5660),house(blue,_5666,_5668,_5670,_5672),_5336,member(house(_5684,_5686,zebra,_5690,_5692),_5336,member(house(_5702,_5704,_5706,water,_5710),_5336,_5834))))))))))))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_houses_1 : public Code {

			/*
			
			houses([house(_6766,_6768,_6770,_6772,_6774),house(_6784,_6786,_6788,_6790,_6792),house(_6802,_6804,_6806,_6808,_6810),house(_6820,_6822,_6824,_6826,_6828),house(_6838,_6840,_6842,_6844,_6846)],_6878):-call(_6878).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_houses_1__1(Prolog* mach);
		};

	public:
		class pred_right_of_3 : public Code {

			/*
			
			right_of(_6942,_6936,[_6936,_6942|_6944],_6974):-call(_6974).
			right_of(_7072,_7074,[_7066|_7068],_7124):-right_of(_7072,_7074,_7068,_7124).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_right_of_3__1(Prolog* mach);

			static Operation exec_pred_right_of_3__2(Prolog* mach);
		};

	public:
		class pred_next_to_3 : public Code {

			/*
			
			next_to(_7252,_7258,[_7252,_7258|_7260],_7290):-call(_7290).
			next_to(_7394,_7388,[_7388,_7394|_7396],_7426):-call(_7426).
			next_to(_7530,_7532,[_7524|_7526],_7582):-next_to(_7530,_7532,_7526,_7582).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_next_to_3__1(Prolog* mach);

			static Operation exec_pred_next_to_3__2(Prolog* mach);

			static Operation exec_pred_next_to_3__3(Prolog* mach);
		};

	public:
		class pred_member_2 : public Code {

			/*
			
			member(_7716,[_7716|_7718],_7746):-call(_7746).
			member(_7842,[_7836|_7838],_7884):-member(_7842,_7838,_7884).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_member_2__1(Prolog* mach);

			static Operation exec_pred_member_2__2(Prolog* mach);
		};

	public:
		class pred_print_houses_1 : public Code {

			/*
			
			print_houses([_8002|_8004],_8062):-cut(1,write(_8002,nl(print_houses(_8004,_8062)))).
			print_houses([],_8250):-call(_8250).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_print_houses_1__1(Prolog* mach);

			static Operation exec_pred_print_houses_1__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef ZEBRA
