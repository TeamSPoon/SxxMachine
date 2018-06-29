#ifndef FAST_MU
#define FAST_MU

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

	class fast_mu {
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
		static Const* const  s_call;
		static Const* const  s_derive;
		static Const* const  s_derive2;
		static Const* const  s_i;
		static Const* const  s_is;
		static Const* const  s_length;
		static Const* const  s_lower_bound;
		static Const* const  s_m;
		static Const* const  s_or;
		static Const* const  s_rule;
		static Const* const  s_smallerorequal;
		static Const* const  s_smallerthan;
		static Const* const  s_theorem;
		static Const* const  s_top;
		static Const* const  s_u;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint3;
		static Int* const  posint4;
		static const Operation reg_top_0;
		static const Operation reg_theorem_1;
		static const Operation reg_derive_6;
		static const Operation reg_derive2_7;
		static const Operation reg_rule_7;
		static const Operation reg_rule_11;
		static const Operation reg_lower_bound_3;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_19930):-theorem([m,u,i,i,u],_19930).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_theorem_1 : public Code {

			/*
			
			theorem(_19994,_20078):-length(_19994,_20000,is(_20010,_20000-1,derive([m,i],_19994,1,_20010,_20036,0,_20078))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_theorem_1__1(Prolog* mach);
		};

	public:
		class pred_derive_6 : public Code {

			/*
			
			derive(_20326,_20328,_20330,_20332,_20334,_20336,_20410):-derive2(_20326,_20328,_20330,_20332,1,_20334,_20336,_20410).
			derive(_20618,_20620,_20622,_20624,_20626,_20628,_20718):-is(_20638,_20628+1,derive(_20618,_20620,_20622,_20624,_20626,_20638,_20718)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_derive_6__1(Prolog* mach);

			static Operation exec_pred_derive_6__2(Prolog* mach);
		};

	public:
		class pred_derive2_7 : public Code {

			/*
			
			derive2(_20962,_20962,_20966,_20966,_20970,[],_20974,_20996):-call(_20996).
			derive2(_21162,_21164,_21166,_21168,_21170,[rule(_21150,_21152)|_21158],_21174,_21320):-lower_bound(_21166,_21168,_21182,smallerorequal(_21182,_21174,is(_21198,_21174-1,rule(_21162,_21152,_21166,_21210,_21170,_21214,_21150,derive2(_21152,_21164,_21210,_21168,_21214,_21158,_21198,_21320))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_derive2_7__1(Prolog* mach);

			static Operation exec_pred_derive2_7__2(Prolog* mach);
		};

	public:
		class pred_rule_7 : public Code {

			/*
			
			rule([m|_21834],[m|_21840],_21848,_21850,_21852,_21854,_21856,_21944):-rule(_21834,_21840,_21848,_21850,_21852,_21854,1,i,_21856,_21878,_21878,_21944).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rule_7__1(Prolog* mach);
		};

	public:
		class pred_rule_11 : public Code {

			/*
			
			rule([i],[i,u],_22250,_22252,_22254,_22256,_22258,_22260,1,_22264,_22266,_22396):-smallerorequal(_22254,_22258,is(_22256,_22258-2,is(_22252,_22250+1,_22396))).
			rule([],_22700,_22702,_22704,_22706,1,_22710,_22712,2,_22700,[],_22818):-is(_22704,_22702+_22702,_22818).
			rule([i,i,i|_23028],[u|_23028],_23042,_23044,_23046,_23048,_23050,_23052,3,_23056,_23058,_23188):-smallerorequal(_23046,_23050,is(_23048,_23050-1,is(_23044,_23042-2,_23188))).
			rule([u,u|_23498],_23498,_23506,_23508,_23510,_23512,_23514,i,4,_23520,_23522,_23652):-smallerorequal(_23510,_23514,is(_23512,_23514-2,is(_23508,_23506-2,_23652))).
			rule([_23954|_23956],[_23954|_23962],_23976,_23978,_23980,_23982,_23984,_23986,_23988,_23990,[_23954|_23968],_24122):-is(_24002,_23984+1,rule(_23956,_23962,_23976,_23978,_23980,_23982,_24002,_23954,_23988,_23990,_23968,_24122)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_rule_11__1(Prolog* mach);

			static Operation exec_pred_rule_11__2(Prolog* mach);

			static Operation exec_pred_rule_11__3(Prolog* mach);

			static Operation exec_pred_rule_11__4(Prolog* mach);

			static Operation exec_pred_rule_11__5(Prolog* mach);
		};

	public:
		class pred_lower_bound_3 : public Code {

			/*
			
			lower_bound(_24494,_24496,1,_24544):-smallerthan(_24494,_24496,_24544).
			lower_bound(_24688,_24688,2,_24714):-call(_24714).
			lower_bound(_24830,_24832,_24834,_24976):-smallerthan(_24832,_24830,is(_24850,_24830-_24832,is(_24862,_24850/\1,or((_24862=:=0->_24834 is _24850>>1),_24834 is (_24850+1)>>1+1,_24976)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_lower_bound_3__1(Prolog* mach);

			static Operation exec_pred_lower_bound_3__2(Prolog* mach);

			static Operation exec_pred_lower_bound_3__3(Prolog* mach);
		};

	};

}


#endif	//#ifndef FAST_MU
