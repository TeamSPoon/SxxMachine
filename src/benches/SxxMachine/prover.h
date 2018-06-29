#ifndef PROVER
#define PROVER

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

	class prover {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s4;
		static Const* const  s5;
		static Const* const  s6;
		static Const* const  s_a;
		static Const* const  s_add_conjunction;
		static Const* const  s_b;
		static Const* const  s_c;
		static Const* const  s_call;
		static Const* const  s_expand;
		static Const* const  s_extend;
		static Const* const  s_fail;
		static Const* const  s_fs;
		static Const* const  s_fx;
		static Const* const  s_implies;
		static Const* const  s_includes;
		static Const* const  s_on_load_prover;
		static Const* const  s_op;
		static Const* const  s_opposite;
		static Const* const  s_problem;
		static Const* const  s_prover;
		static Const* const  s_refute;
		static Const* const  s_refuted;
		static Const* const  s_to_be;
		static Const* const  s_top;
		static Const* const  s_unify;
		static Const* const  s_write;
		static Const* const  s_xfy;
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
		static Int* const  posint500;
		static Int* const  posint850;
		static Int* const  posint950;
		static const Operation reg_top_0;
		static const Operation reg_on_load_prover_0;
		static const Operation reg_prover_0;
		static const Operation reg_problem_3;
		static const Operation reg_implies_2;
		static const Operation reg_opposite_2;
		static const Operation reg_add_conjunction_3;
		static const Operation reg_expand_3;
		static const Operation reg_includes_2;
		static const Operation reg_extend_6;
		static const Operation reg_refute_1;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5464):-prover(_5464).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_on_load_prover_0 : public Code {

			/*
			
			on_load_prover(_5564):-write(op(950,xfy,#),_5564).
			on_load_prover(_5684):-write(op(850,xfy,&),_5684).
			on_load_prover(_5804):-write(op(500,fx,+),_5804).
			on_load_prover(_5924):-write(op(500,fx,-),_5924).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_on_load_prover_0__1(Prolog* mach);

			static Operation exec_pred_on_load_prover_0__2(Prolog* mach);

			static Operation exec_pred_on_load_prover_0__3(Prolog* mach);

			static Operation exec_pred_on_load_prover_0__4(Prolog* mach);
		};

	public:
		class pred_prover_0 : public Code {

			/*
			
			prover(_6038):-problem(_5994,_5996,_5998,implies(_5996,_5998,fail(_6038))).
			prover(_6232):-call(_6232).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_prover_0__1(Prolog* mach);

			static Operation exec_pred_prover_0__2(Prolog* mach);
		};

	public:
		class pred_problem_3 : public Code {

			/*
			
			problem(1,-a,+a,_6316):-call(_6316).
			problem(2,+a,-a& -a,_6458):-call(_6458).
			problem(3,-a,+to_be# -to_be,_6600):-call(_6600).
			problem(4,-a& -a,-a,_6742):-call(_6742).
			problem(5,-a,+b# -a,_6884):-call(_6884).
			problem(6,-a& -b,-b& -a,_7036):-call(_7036).
			problem(7,-a,-b# +b& -a,_7188):-call(_7188).
			problem(8,-a# -b# +c,-b# -a# +c,_7360):-call(_7360).
			problem(9,-a# +b,+b& -c# -a# +c,_7532):-call(_7532).
			problem(10,(-a# +c)&(-b# +c),-a& -b# +c,_7714):-call(_7714).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_problem_3__1(Prolog* mach);

			static Operation exec_pred_problem_3__2(Prolog* mach);

			static Operation exec_pred_problem_3__3(Prolog* mach);

			static Operation exec_pred_problem_3__4(Prolog* mach);

			static Operation exec_pred_problem_3__5(Prolog* mach);

			static Operation exec_pred_problem_3__6(Prolog* mach);

			static Operation exec_pred_problem_3__7(Prolog* mach);

			static Operation exec_pred_problem_3__8(Prolog* mach);

			static Operation exec_pred_problem_3__9(Prolog* mach);

			static Operation exec_pred_problem_3__10(Prolog* mach);
		};

	public:
		class pred_implies_2 : public Code {

			/*
			
			implies(_7812,_7814,_7878):-opposite(_7814,_7820,add_conjunction(_7812,_7820,fs([],[],[],[]),_7878)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_implies_2__1(Prolog* mach);
		};

	public:
		class pred_opposite_2 : public Code {

			/*
			
			opposite(_8060&_8062,_8066#_8068,_8132):-cut(1,opposite(_8060,_8066,opposite(_8062,_8068,_8132))).
			opposite(_8312#_8314,_8318&_8320,_8384):-cut(1,opposite(_8312,_8318,opposite(_8314,_8320,_8384))).
			opposite(+_8564,-_8564,_8608):-cut(1,_8608).
			opposite(-_8688,+_8688,_8720):-call(_8720).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_opposite_2__1(Prolog* mach);

			static Operation exec_pred_opposite_2__2(Prolog* mach);

			static Operation exec_pred_opposite_2__3(Prolog* mach);

			static Operation exec_pred_opposite_2__4(Prolog* mach);
		};

	public:
		class pred_add_conjunction_3 : public Code {

			/*
			
			add_conjunction(_8816,_8818,_8820,_8892):-expand(_8816,_8820,_8828,expand(_8818,_8828,_8836,refute(_8836,_8892))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_add_conjunction_3__1(Prolog* mach);
		};

	public:
		class pred_expand_3 : public Code {

			/*
			
			expand(_9144,refuted,refuted,_9188):-cut(1,_9188).
			expand(_9288&_9290,fs(_9294,_9296,_9298,_9300),refuted,_9366):-includes(_9294,_9288&_9290,cut(1,_9366)).
			expand(_9516&_9518,fs(_9522,_9524,_9526,_9528),fs(_9522,_9524,_9526,_9528),_9604):-includes(_9524,_9516&_9518,cut(1,_9604)).
			expand(_9754&_9756,fs(_9760,_9762,_9764,_9766),_9774,_9864):-cut(1,expand(_9754,fs(_9760,[_9754&_9756|_9762],_9764,_9766),_9804,expand(_9756,_9804,_9774,_9864))).
			expand(_10092#_10094,fs(_10098,_10100,_10102,_10104),_10112,_10200):-cut(1,opposite(_10092#_10094,_10124,extend(_10124,_10098,_10100,_10128,fs(_10128,_10100,_10102,_10104),_10112,_10200))).
			expand(+_10456,fs(_10460,_10462,_10464,_10466),_10474,_10544):-cut(1,extend(_10456,_10464,_10466,_10482,fs(_10460,_10462,_10482,_10466),_10474,_10544)).
			expand(-_10750,fs(_10754,_10756,_10758,_10760),_10768,_10832):-extend(_10750,_10760,_10758,_10778,fs(_10754,_10756,_10758,_10778),_10768,_10832).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_expand_3__1(Prolog* mach);

			static Operation exec_pred_expand_3__2(Prolog* mach);

			static Operation exec_pred_expand_3__3(Prolog* mach);

			static Operation exec_pred_expand_3__4(Prolog* mach);

			static Operation exec_pred_expand_3__5(Prolog* mach);

			static Operation exec_pred_expand_3__6(Prolog* mach);

			static Operation exec_pred_expand_3__7(Prolog* mach);
		};

	public:
		class pred_includes_2 : public Code {

			/*
			
			includes([_2064|_2066],_2064,_2074):-cut(1,_2074).
			includes([_2098|_2100],_2102,_2110):-includes(_2100,_2102,_2110).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_includes_2__1(Prolog* mach);

			static Operation exec_pred_includes_2__2(Prolog* mach);
		};

	public:
		class pred_extend_6 : public Code {

			/*
			
			extend(_2134,_2136,_2138,_2140,_2142,refuted,_2150):-includes(_2138,_2134,cut(1,_2150)).
			extend(_2188,_2190,_2192,_2190,_2194,_2194,_2202):-includes(_2190,_2188,cut(1,_2202)).
			extend(_2242,_2244,_2246,[_2242|_2244],_2248,_2248,_2258):-call(_2258).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_extend_6__1(Prolog* mach);

			static Operation exec_pred_extend_6__2(Prolog* mach);

			static Operation exec_pred_extend_6__3(Prolog* mach);
		};

	public:
		class pred_refute_1 : public Code {

			/*
			
			refute(refuted,_2288):-cut(1,_2288).
			refute(fs([_2310&_2312|_2318],_2324,_2326,_2328),_2352):-opposite(_2310,_2330,opposite(_2312,_2332,unify(fs(_2318,_2324,_2326,_2328),_2344,add_conjunction(_2330,_2312,_2344,add_conjunction(_2330,_2332,_2344,add_conjunction(_2310,_2332,_2344,_2352)))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_refute_1__1(Prolog* mach);

			static Operation exec_pred_refute_1__2(Prolog* mach);
		};

	};

}


#endif	//#ifndef PROVER
