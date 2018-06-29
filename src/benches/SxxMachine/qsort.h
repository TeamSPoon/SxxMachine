#ifndef QSORT
#define QSORT

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

	class qsort {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s_call;
		static Const* const  s_partition;
		static Const* const  s_qsort;
		static Const* const  s_smallerorequal;
		static Const* const  s_top;
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
		static const Operation reg_qsort_0;
		static const Operation reg_qsort_3;
		static const Operation reg_partition_4;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_5432):-qsort(_5432).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_qsort_0 : public Code {

			/*
			
			qsort(_5808):-qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92,40,53,59,8],_5784,[],_5808).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_qsort_0__1(Prolog* mach);
		};

	public:
		class pred_qsort_3 : public Code {

			/*
			
			qsort([_5906|_5908],_5914,_5916,_6000):-partition(_5908,_5906,_5924,_5926,qsort(_5926,_5932,_5916,qsort(_5924,_5914,[_5906|_5932],_6000))).
			qsort([],_6272,_6272,_6296):-call(_6296).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_qsort_3__1(Prolog* mach);

			static Operation exec_pred_qsort_3__2(Prolog* mach);
		};

	public:
		class pred_partition_4 : public Code {

			/*
			
			partition([_6388|_6390],_6402,[_6388|_6396],_6406,_6480):-smallerorequal(_6388,_6402,cut(1,partition(_6390,_6402,_6396,_6406,_6480))).
			partition([_6698|_6700],_6712,_6714,[_6698|_6706],_6772):-partition(_6700,_6712,_6714,_6706,_6772).
			partition([],_6930,[],[],_6956):-call(_6956).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_partition_4__1(Prolog* mach);

			static Operation exec_pred_partition_4__2(Prolog* mach);

			static Operation exec_pred_partition_4__3(Prolog* mach);
		};

	};

}


#endif	//#ifndef QSORT
