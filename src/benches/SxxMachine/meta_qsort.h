#ifndef META_QSORT
#define META_QSORT

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

	class meta_qsort {
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
		static Const* const  s_define;
		static Const* const  s_fail;
		static Const* const  s_interpret;
		static Const* const  s_interpret_built_in;
		static Const* const  s_interpret_disjunction;
		static Const* const  s_is_built_in;
		static Const* const  s_meta_qsort;
		static Const* const  s_nonvar;
		static Const* const  s_number;
		static Const* const  s_or;
		static Const* const  s_partition;
		static Const* const  s_qsort;
		static Const* const  s_smallerorequal;
		static Const* const  s_top;
		static Const* const  s_true;
		static Const* const  s_var;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint4;
		static Int* const  posint6;
		static Int* const  posint7;
		static Int* const  posint8;
		static Int* const  posint10;
		static Int* const  posint11;
		static Int* const  posint17;
		static Int* const  posint18;
		static Int* const  posint21;
		static Int* const  posint27;
		static Int* const  posint28;
		static Int* const  posint29;
		static Int* const  posint31;
		static Int* const  posint32;
		static Int* const  posint33;
		static Int* const  posint37;
		static Int* const  posint39;
		static Int* const  posint40;
		static Int* const  posint46;
		static Int* const  posint47;
		static Int* const  posint51;
		static Int* const  posint53;
		static Int* const  posint55;
		static Int* const  posint59;
		static Int* const  posint61;
		static Int* const  posint63;
		static Int* const  posint65;
		static Int* const  posint66;
		static Int* const  posint74;
		static Int* const  posint75;
		static Int* const  posint81;
		static Int* const  posint82;
		static Int* const  posint83;
		static Int* const  posint85;
		static Int* const  posint90;
		static Int* const  posint92;
		static Int* const  posint94;
		static Int* const  posint95;
		static Int* const  posint99;
		static const Operation reg_top_0;
		static const Operation reg_meta_qsort_0;
		static const Operation reg_interpret_1;
		static const Operation reg_interpret_2;
		static const Operation reg_interpret_disjunction_3;
		static const Operation reg_is_built_in_1;
		static const Operation reg_interpret_built_in_1;
		static const Operation reg_define_2;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_10356):-meta_qsort(_10356).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_meta_qsort_0 : public Code {

			/*
			
			meta_qsort(_10428):-interpret(qsort,_10428).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_meta_qsort_0__1(Prolog* mach);
		};

	public:
		class pred_interpret_1 : public Code {

			/*
			
			interpret(_10498,_10564):-interpret(_10498,_10504,or((nonvar(_10504),!,interpret(_10504)),true,_10564)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_interpret_1__1(Prolog* mach);
		};

	public:
		class pred_interpret_2 : public Code {

			/*
			
			interpret(_10718,_10720,_10770):-var(_10718,cut(1,fail(_10770))).
			interpret((_10896,_10898),_10904,_10990):-cut(1,interpret(_10896,_10910,or((nonvar(_10910)->_10904=(_10910,_10898)),interpret(_10898,_10904),_10990))).
			interpret((_11164;_11166),_11172,_11220):-cut(1,interpret_disjunction(_11164,_11166,_11172,_11220)).
			interpret((_11352->_11354),_11360,_11414):-cut(1,interpret_disjunction((_11352->_11354),fail,_11360,_11414)).
			interpret(\+_11546,_11552,_11606):-cut(1,interpret_disjunction((_11546->fail),true,_11552,_11606)).
			interpret(!,true,_11774):-cut(1,_11774).
			interpret(_11842,_11844,_11894):-number(_11842,cut(1,fail(_11894))).
			interpret(_12020,_12022,_12076):-is_built_in(_12020,cut(1,interpret_built_in(_12020,_12076))).
			interpret(_12216,_12218,_12268):-define(_12216,_12224,interpret(_12224,_12268)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_interpret_2__1(Prolog* mach);

			static Operation exec_pred_interpret_2__2(Prolog* mach);

			static Operation exec_pred_interpret_2__3(Prolog* mach);

			static Operation exec_pred_interpret_2__4(Prolog* mach);

			static Operation exec_pred_interpret_2__5(Prolog* mach);

			static Operation exec_pred_interpret_2__6(Prolog* mach);

			static Operation exec_pred_interpret_2__7(Prolog* mach);

			static Operation exec_pred_interpret_2__8(Prolog* mach);

			static Operation exec_pred_interpret_2__9(Prolog* mach);
		};

	public:
		class pred_interpret_disjunction_3 : public Code {

			/*
			
			interpret_disjunction((_12416->_12418),_12424,_12426,_12518):-interpret(_12416,_12432,cut(1,or((nonvar(_12432)->_12426=(_12432->_12418)),interpret(_12418,_12426),_12518))).
			interpret_disjunction((_12706->_12708),_12714,_12716,_12768):-cut(1,interpret(_12714,_12716,_12768)).
			interpret_disjunction(_12900,_12902,_12904,_12950):-interpret(_12900,_12904,_12950).
			interpret_disjunction(_13076,_13078,_13080,_13126):-interpret(_13078,_13080,_13126).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_interpret_disjunction_3__1(Prolog* mach);

			static Operation exec_pred_interpret_disjunction_3__2(Prolog* mach);

			static Operation exec_pred_interpret_disjunction_3__3(Prolog* mach);

			static Operation exec_pred_interpret_disjunction_3__4(Prolog* mach);
		};

	public:
		class pred_is_built_in_1 : public Code {

			/*
			
			is_built_in(true,_13274):-call(_13274).
			is_built_in(_13356=<_13358,_13384):-call(_13384).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_is_built_in_1__1(Prolog* mach);

			static Operation exec_pred_is_built_in_1__2(Prolog* mach);
		};

	public:
		class pred_interpret_built_in_1 : public Code {

			/*
			
			interpret_built_in(true,_13488):-call(_13488).
			interpret_built_in(_13576=<_13578,_13616):-smallerorequal(_13576,_13578,_13616).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_interpret_built_in_1__1(Prolog* mach);

			static Operation exec_pred_interpret_built_in_1__2(Prolog* mach);
		};

	public:
		class pred_define_2 : public Code {

			/*
			
			define(qsort,qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,40,53,59,8],_14046,[]),_14076):-call(_14076).
			define(qsort([_14184|_14186],_14192,_14194),(partition(_14186,_14184,_14202,_14204),qsort(_14204,_14210,_14194),qsort(_14202,_14192,[_14184|_14210])),_14266):-call(_14266).
			define(qsort([],_14376,_14376),true,_14406):-call(_14406).
			define(partition([_14514|_14516],_14528,[_14514|_14522],_14532),(_14514=<_14528,!,partition(_14516,_14528,_14522,_14532)),_14588):-call(_14588).
			define(partition([_14696|_14698],_14710,_14712,[_14696|_14704]),partition(_14698,_14710,_14712,_14704),_14752):-call(_14752).
			define(partition([],_14862,[],[]),true,_14894):-call(_14894).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_define_2__1(Prolog* mach);

			static Operation exec_pred_define_2__2(Prolog* mach);

			static Operation exec_pred_define_2__3(Prolog* mach);

			static Operation exec_pred_define_2__4(Prolog* mach);

			static Operation exec_pred_define_2__5(Prolog* mach);

			static Operation exec_pred_define_2__6(Prolog* mach);
		};

	};

}


#endif	//#ifndef META_QSORT
