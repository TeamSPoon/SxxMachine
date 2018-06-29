#ifndef BROWSE
#define BROWSE

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

	class browse {
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
		static Const* const  s_a;
		static Const* const  s_arg;
		static Const* const  s_atom;
		static Const* const  s_b;
		static Const* const  s_call;
		static Const* const  s_dummy;
		static Const* const  s_fail;
		static Const* const  s_fill;
		static Const* const  s_functor;
		static Const* const  s_get_pats;
		static Const* const  s_init;
		static Const* const  s_investigate;
		static Const* const  s_is;
		static Const* const  s_length;
		static Const* const  s_match;
		static Const* const  s_mod;
		static Const* const  s_nonvar;
		static Const* const  s_or;
		static Const* const  s_p_investigate;
		static Const* const  s_p_match;
		static Const* const  s_pattern;
		static Const* const  s_property;
		static Const* const  s_randomize;
		static Const* const  s_split;
		static Const* const  s_star;
		static Const* const  s_top;
		static Const* const  s_true;
		static Const* const  s_unify;
		static Const* const  s_var;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint4;
		static Int* const  posint10;
		static Int* const  posint17;
		static Int* const  posint21;
		static Int* const  posint100;
		static Int* const  posint251;
		static const Operation reg_top_0;
		static const Operation reg_init_5;
		static const Operation reg_init_6;
		static const Operation reg_fill_3;
		static const Operation reg_randomize_3;
		static const Operation reg_split_4;
		static const Operation reg_investigate_2;
		static const Operation reg_get_pats_3;
		static const Operation reg_get_pats_4;
		static const Operation reg_property_3;
		static const Operation reg_p_investigate_2;
		static const Operation reg_p_match_2;
		static const Operation reg_match_2;
		static const Operation reg_$0024concat_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_6094):-init(100,10,4,[[a,a,a,b,b,b,b,a,a,a,a,a,b,b,a,a,a],[a,a,b,b,b,b,a,a,[a,a],[b,b]],[a,a,a,b,[b,a],b,a,b,a]],_5814,randomize(_5814,_5820,21,cut(1,investigate(_5820,[[star(_5826),_5836,star(_5842),_5836,a,star(_5826),a,star(_5842),star(_5826)],[star(_5826),star(_5842),star(_5842),star(_5826),[star(_5826)],[star(_5842)]],[_5984,_5990,star(_5996),[b,a],star(_6024),_6034,_6040]],_6094)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_init_5 : public Code {

			/*
			
			init(_6334,_6336,_6338,_6340,_6342,_6408):-init(_6334,_6336,_6336,_6338,_6340,_6342,_6408).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_init_5__1(Prolog* mach);
		};

	public:
		class pred_init_6 : public Code {

			/*
			
			init(0,_6590,_6592,_6594,_6596,_6598,_6656):-cut(1,_6656).
			init(_6756,_6758,_6760,_6762,_6764,[_6750|_6752],_6968):-fill(_6758,[],_6774,get_pats(_6762,_6764,_6782,is(_6792,_6760-_6758,fill(_6792,[pattern(_6782)|_6774],_6750,is(_6822,_6756-1,or((_6758=:=0->_6834 is _6760),_6834 is _6758-1,init(_6822,_6834,_6760,_6762,_6764,_6752,_6968))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_init_6__1(Prolog* mach);

			static Operation exec_pred_init_6__2(Prolog* mach);
		};

	public:
		class pred_fill_3 : public Code {

			/*
			
			fill(0,_7512,_7512,_7554):-cut(1,_7554).
			fill(_7640,_7642,[dummy([])|_7636],_7710):-is(_7654,_7640-1,fill(_7654,_7642,_7636,_7710)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_fill_3__1(Prolog* mach);

			static Operation exec_pred_fill_3__2(Prolog* mach);
		};

	public:
		class pred_randomize_3 : public Code {

			/*
			
			randomize([],[],_7898,_7938):-cut(1,_7938).
			randomize(_8026,[_8020|_8022],_8030,_8148):-length(_8026,_8036,is(_8052,_8030*17 mod 251,is(_8064,_8052 mod _8036,split(_8064,_8026,_8020,_8076,randomize(_8076,_8022,_8052,_8148))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_randomize_3__1(Prolog* mach);

			static Operation exec_pred_randomize_3__2(Prolog* mach);
		};

	public:
		class pred_split_4 : public Code {

			/*
			
			split(0,[_8516|_8518],_8516,_8518,_8574):-cut(1,_8574).
			split(_8682,[_8670|_8672],_8686,[_8670|_8678],_8762):-is(_8698,_8682-1,split(_8698,_8672,_8686,_8678,_8762)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_split_4__1(Prolog* mach);

			static Operation exec_pred_split_4__2(Prolog* mach);
		};

	public:
		class pred_investigate_2 : public Code {

			/*
			
			investigate([],_8982,_9016):-cut(1,_9016).
			investigate([_9102|_9104],_9110,_9176):-property(_9102,pattern,_9118,p_investigate(_9118,_9110,investigate(_9104,_9110,_9176))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_investigate_2__1(Prolog* mach);

			static Operation exec_pred_investigate_2__2(Prolog* mach);
		};

	public:
		class pred_get_pats_3 : public Code {

			/*
			
			get_pats(_9420,_9422,_9424,_9474):-get_pats(_9420,_9422,_9424,_9422,_9474).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_get_pats_3__1(Prolog* mach);
		};

	public:
		class pred_get_pats_4 : public Code {

			/*
			
			get_pats(0,_1912,[],_1914,_1922):-cut(1,_1922).
			get_pats(_1960,[_1950|_1952],[_1950|_1958],_1962,_1978):-is(_1970,_1960-1,get_pats(_1970,_1952,_1958,_1962,_1978)).
			get_pats(_2018,[],_2020,_2022,_2030):-get_pats(_2018,_2022,_2020,_2022,_2030).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_get_pats_4__1(Prolog* mach);

			static Operation exec_pred_get_pats_4__2(Prolog* mach);

			static Operation exec_pred_get_pats_4__3(Prolog* mach);
		};

	public:
		class pred_property_3 : public Code {

			/*
			
			property([],_2062,_2064,_2072):-fail(_2072).
			property([_2096|_2098],_2100,_2102,_2112):-functor(_2096,_2100,_2104,cut(1,arg(1,_2096,_2102,_2112))).
			property([_2158|_2160],_2162,_2164,_2172):-property(_2160,_2162,_2164,_2172).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_property_3__1(Prolog* mach);

			static Operation exec_pred_property_3__2(Prolog* mach);

			static Operation exec_pred_property_3__3(Prolog* mach);
		};

	public:
		class pred_p_investigate_2 : public Code {

			/*
			
			p_investigate([],_2200,_2210):-call(_2210).
			p_investigate([_2228|_2230],_2232,_2240):-p_match(_2232,_2228,p_investigate(_2230,_2232,_2240)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_p_investigate_2__1(Prolog* mach);

			static Operation exec_pred_p_investigate_2__2(Prolog* mach);
		};

	public:
		class pred_p_match_2 : public Code {

			/*
			
			p_match([],_2272,_2282):-call(_2282).
			p_match([_2300|_2302],_2304,_2324):-or((match(_2304,_2300),fail),true,p_match(_2302,_2304,_2324)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_p_match_2__1(Prolog* mach);

			static Operation exec_pred_p_match_2__2(Prolog* mach);
		};

	public:
		class pred_match_2 : public Code {

			/*
			
			match([],[],_2362):-cut(1,_2362).
			match([_2386|_2388],[_2392|_2394],_2402):-var(_2392,cut(1,unify(_2392,_2386,match(_2388,_2394,_2402)))).
			match(_2452,[_2448|_2450],_2466):-nonvar(_2448,unify(star(_2456),_2448,cut(1,'$concat'(_2456,_2458,_2452,match(_2458,_2450,_2466))))).
			match([_2522|_2524],[_2528|_2530],_2560):-or((atom(_2522)->_2522=_2528),match(_2522,_2528),match(_2524,_2530,_2560)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_match_2__1(Prolog* mach);

			static Operation exec_pred_match_2__2(Prolog* mach);

			static Operation exec_pred_match_2__3(Prolog* mach);

			static Operation exec_pred_match_2__4(Prolog* mach);
		};

	public:
		class pred_$0024concat_3 : public Code {

			/*
			
			'$concat'([],_2592,_2592,_2602):-call(_2602).
			'$concat'([_2622|_2624],_2632,[_2622|_2630],_2640):-'$concat'(_2624,_2632,_2630,_2640).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_$0024concat_3__1(Prolog* mach);

			static Operation exec_pred_$0024concat_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef BROWSE
