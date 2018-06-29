#ifndef SERIALISE
#define SERIALISE

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

	class serialise {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s_arrange;
		static Const* const  s_before;
		static Const* const  s_call;
		static Const* const  s_is;
		static Const* const  s_numbered;
		static Const* const  s_pair;
		static Const* const  s_pairlists;
		static Const* const  s_serialise;
		static Const* const  s_smallerthan;
		static Const* const  s_split;
		static Const* const  s_top;
		static Const* const  s_tree;
		static Const* const  s_void;
		static Int* const  posint1;
		static const Operation reg_top_0;
		static const Operation reg_serialise_0;
		static const Operation reg_serialise_2;
		static const Operation reg_pairlists_3;
		static const Operation reg_arrange_2;
		static const Operation reg_split_4;
		static const Operation reg_before_2;
		static const Operation reg_numbered_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_10312):-serialise(_10312).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_serialise_0 : public Code {

			/*
			
			serialise(_10398):-serialise("ABLE WAS I ERE I SAW ELBA",_10376,_10398).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_serialise_0__1(Prolog* mach);
		};

	public:
		class pred_serialise_2 : public Code {

			/*
			
			serialise(_10482,_10484,_10552):-pairlists(_10482,_10484,_10492,arrange(_10492,_10498,numbered(_10498,1,_10506,_10552))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_serialise_2__1(Prolog* mach);
		};

	public:
		class pred_pairlists_3 : public Code {

			/*
			
			pairlists([_10786|_10788],[_10792|_10794],[pair(_10786,_10792)|_10806],_10862):-pairlists(_10788,_10794,_10806,_10862).
			pairlists([],[],[],_11022):-call(_11022).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_pairlists_3__1(Prolog* mach);

			static Operation exec_pred_pairlists_3__2(Prolog* mach);
		};

	public:
		class pred_arrange_2 : public Code {

			/*
			
			arrange([_11120|_11122],tree(_11126,_11120,_11130),_11204):-split(_11122,_11120,_11144,_11146,arrange(_11144,_11126,arrange(_11146,_11130,_11204))).
			arrange([],void,_11474):-call(_11474).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_arrange_2__1(Prolog* mach);

			static Operation exec_pred_arrange_2__2(Prolog* mach);
		};

	public:
		class pred_split_4 : public Code {

			/*
			
			split([_11564|_11566],_11564,_11574,_11576,_11638):-cut(1,split(_11566,_11564,_11574,_11576,_11638)).
			split([_11812|_11814],_11826,[_11812|_11820],_11830,_11904):-before(_11812,_11826,cut(1,split(_11814,_11826,_11820,_11830,_11904))).
			split([_12128|_12130],_12142,_12144,[_12128|_12136],_12220):-before(_12142,_12128,cut(1,split(_12130,_12142,_12144,_12136,_12220))).
			split([],_12446,[],[],_12472):-call(_12472).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_split_4__1(Prolog* mach);

			static Operation exec_pred_split_4__2(Prolog* mach);

			static Operation exec_pred_split_4__3(Prolog* mach);

			static Operation exec_pred_split_4__4(Prolog* mach);
		};

	public:
		class pred_before_2 : public Code {

			/*
			
			before(pair(_12596,_12598),pair(_12602,_12604),_12650):-smallerthan(_12596,_12602,_12650).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_before_2__1(Prolog* mach);
		};

	public:
		class pred_numbered_3 : public Code {

			/*
			
			numbered(tree(_12792,pair(_12786,_12788),_12796),_12802,_12804,_12884):-numbered(_12792,_12802,_12788,is(_12822,_12788+1,numbered(_12796,_12822,_12804,_12884))).
			numbered(void,_13158,_13158,_13182):-call(_13182).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_numbered_3__1(Prolog* mach);

			static Operation exec_pred_numbered_3__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef SERIALISE
