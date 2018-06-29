#ifndef PERFECT
#define PERFECT

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

	class perfect {
	public:
		static Const* const  s_cut;
		static Const* const  s1;
		static Const* const  s2;
		static Const* const  s3;
		static Const* const  s4;
		static Const* const  s5;
		static Const* const  s_arithequal;
		static Const* const  s_calc;
		static Const* const  s_call;
		static Const* const  s_divisible;
		static Const* const  s_findall;
		static Const* const  s_generateList;
		static Const* const  s_is;
		static Const* const  s_isprime;
		static Const* const  s_listperf;
		static Const* const  s_mod;
		static Const* const  s_not;
		static Const* const  s_ok;
		static Const* const  s_perfect;
		static Const* const  s_power;
		static Const* const  s_smallerorequal;
		static Const* const  s_smallerthan;
		static Const* const  s_top;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint2;
		static Int* const  posint6;
		static Int* const  posint28;
		static Int* const  posint100;
		static Int* const  posint496;
		static Int* const  posint8128;
		static Int* const  posint2096128;
		static Int* const  posint33550336;
		static Int* const  posint8589869056;
		static Int* const  posint137438691328;
		static Int* const  posint35184367894528;
		static Int* const  posint144115187807420416;
		static Int* const  posint2305843008139952128;
		static Int* const  posint9444732965670570950656;
		static Int* const  posint2417851639228158837784576;
		static Int* const  posint38685626227663735544086528;
		static Int* const  posint9903520314282971830448816128;
		static Int* const  posint40564819207303336344294875201536;
		static Int* const  posint166153499473114483824745506383331328;
		static Int* const  posint2658455991569831744654692615953842176;
		static Int* const  posint10889035741470030830754200461521744560128;
		static Int* const  posint2787593149816327892690784192460327776944128;
		static Int* const  posint44601490397061246283066714178813853366747136;
		static Int* const  posint182687704666362864775460301858080473799697891328;
		static Int* const  posint46768052394588893382517909811217778170473142550528;
		static Int* const  posint191561942608236107294793378084303638130997321548169216;
		static Int* const  posint12554203470773361527671578846336104669690446551334525075456;
		static Int* const  posint3213876088517980551083924184681057554444177758164088967397376;
		static const Operation reg_top_0;
		static const Operation reg_ok_1;
		static const Operation reg_divisible_2;
		static const Operation reg_isprime_2;
		static const Operation reg_power_3;
		static const Operation reg_calc_3;
		static const Operation reg_listperf_2;
		static const Operation reg_generateList_2;
		static const Operation reg_perfect_2;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_15074):-findall(_15034,perfect(100,_15034),_15042,ok(_15042,_15074)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);
		};

	public:
		class pred_ok_1 : public Code {

			/*
			
			ok([3213876088517980551083924184681057554444177758164088967397376,12554203470773361527671578846336104669690446551334525075456,191561942608236107294793378084303638130997321548169216,46768052394588893382517909811217778170473142550528,182687704666362864775460301858080473799697891328,44601490397061246283066714178813853366747136,2787593149816327892690784192460327776944128,10889035741470030830754200461521744560128,2658455991569831744654692615953842176,166153499473114483824745506383331328,40564819207303336344294875201536,9903520314282971830448816128,38685626227663735544086528,2417851639228158837784576,9444732965670570950656,2305843008139952128,144115187807420416,35184367894528,137438691328,8589869056,33550336,2096128,8128,496,28,6],_15562):-call(_15562).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_ok_1__1(Prolog* mach);
		};

	public:
		class pred_divisible_2 : public Code {

			/*
			
			divisible(_15620,_15622,_15698):-is(_15632,_15622*_15622,smallerorequal(_15632,_15620,arithequal(0,_15620 mod _15622,_15698))).
			divisible(_15916,_15918,_15988):-smallerthan(_15918,_15916,is(_15934,_15918+1,divisible(_15916,_15934,_15988))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_divisible_2__1(Prolog* mach);

			static Operation exec_pred_divisible_2__2(Prolog* mach);
		};

	public:
		class pred_isprime_2 : public Code {

			/*
			
			isprime([_16200|_16202],_16200,_16276):-is(_16212,2,smallerthan(1,_16200,not(divisible(_16200,_16212),_16276))).
			isprime([_16484|_16486],_16492,_16532):-isprime(_16486,_16492,_16532).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_isprime_2__1(Prolog* mach);

			static Operation exec_pred_isprime_2__2(Prolog* mach);
		};

	public:
		class pred_power_3 : public Code {

			/*
			
			power(_16644,0,1,_16688):-cut(1,_16688).
			power(_16770,_16772,_16774,_16858):-is(_16784,_16772-1,power(_16770,_16784,_16794,is(_16774,_16794*_16770,_16858))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_power_3__1(Prolog* mach);

			static Operation exec_pred_power_3__2(Prolog* mach);
		};

	public:
		class pred_calc_3 : public Code {

			/*
			
			calc(2,_17100,_17102,_17206):-power(2,_17100,_17110,is(_17120,_17110-1,power(2,_17100-1,_17136,is(_17102,_17120*_17136,_17206)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_calc_3__1(Prolog* mach);
		};

	public:
		class pred_listperf_2 : public Code {

			/*
			
			listperf([_17516|_17518],_17524,_17566):-calc(2,_17516,_17524,_17566).
			listperf([_17710|_17712],_17718,_17758):-listperf(_17712,_17718,_17758).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_listperf_2__1(Prolog* mach);

			static Operation exec_pred_listperf_2__2(Prolog* mach);
		};

	public:
		class pred_generateList_2 : public Code {

			/*
			
			generateList(0,[],_17912):-call(_17912).
			generateList(_18026,[_18020|_18022],_18116):-smallerthan(0,_18026,is(_18020,_18026+1,is(_18056,_18026-1,generateList(_18056,_18022,_18116)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_generateList_2__1(Prolog* mach);

			static Operation exec_pred_generateList_2__2(Prolog* mach);
		};

	public:
		class pred_perfect_2 : public Code {

			/*
			
			perfect(_18408,_18410,_18482):-generateList(_18408,_18416,findall(_18422,isprime(_18416,_18422),_18430,listperf(_18430,_18410,_18482))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_perfect_2__1(Prolog* mach);
		};

	};

}


#endif	//#ifndef PERFECT
