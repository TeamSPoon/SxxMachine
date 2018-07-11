#ifndef PERFECT
#define PERFECT

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
	static Operation* const  reg_top_0;
	static Operation* const  reg_ok_1;
	static Operation* const  reg_divisible_2;
	static Operation* const  reg_isprime_2;
	static Operation* const  reg_power_3;
	static Operation* const  reg_calc_3;
	static Operation* const  reg_listperf_2;
	static Operation* const  reg_generateList_2;
	static Operation* const  reg_perfect_2;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_15092):-findall(_15052,perfect(100,_15052),_15060,ok(_15060,_15092)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_ok_1 : public Code {

	/*
	
	ok([3213876088517980551083924184681057554444177758164088967397376,12554203470773361527671578846336104669690446551334525075456,191561942608236107294793378084303638130997321548169216,46768052394588893382517909811217778170473142550528,182687704666362864775460301858080473799697891328,44601490397061246283066714178813853366747136,2787593149816327892690784192460327776944128,10889035741470030830754200461521744560128,2658455991569831744654692615953842176,166153499473114483824745506383331328,40564819207303336344294875201536,9903520314282971830448816128,38685626227663735544086528,2417851639228158837784576,9444732965670570950656,2305843008139952128,144115187807420416,35184367894528,137438691328,8589869056,33550336,2096128,8128,496,28,6],_15580):-call(_15580).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ok_1__1(Prolog* mach);
	};


public:
	class pred_divisible_2 : public Code {

	/*
	
	divisible(_15638,_15640,_15716):-is(_15650,_15640*_15640,smallerorequal(_15650,_15638,arithequal(0,_15638 mod _15640,_15716))).
	divisible(_15934,_15936,_16006):-smallerthan(_15936,_15934,is(_15952,_15936+1,divisible(_15934,_15952,_16006))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_divisible_2__1(Prolog* mach);
	static Operation* exec_pred_divisible_2__2(Prolog* mach);
	};


public:
	class pred_isprime_2 : public Code {

	/*
	
	isprime([_16218|_16220],_16218,_16294):-is(_16230,2,smallerthan(1,_16218,not(divisible(_16218,_16230),_16294))).
	isprime([_16502|_16504],_16510,_16550):-isprime(_16504,_16510,_16550).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_isprime_2__1(Prolog* mach);
	static Operation* exec_pred_isprime_2__2(Prolog* mach);
	};


public:
	class pred_power_3 : public Code {

	/*
	
	power(_16662,0,1,_16706):-cut(1,_16706).
	power(_16788,_16790,_16792,_16876):-is(_16802,_16790-1,power(_16788,_16802,_16812,is(_16792,_16812*_16788,_16876))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_power_3__1(Prolog* mach);
	static Operation* exec_pred_power_3__2(Prolog* mach);
	};


public:
	class pred_calc_3 : public Code {

	/*
	
	calc(2,_17118,_17120,_17224):-power(2,_17118,_17128,is(_17138,_17128-1,power(2,_17118-1,_17154,is(_17120,_17138*_17154,_17224)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_calc_3__1(Prolog* mach);
	};


public:
	class pred_listperf_2 : public Code {

	/*
	
	listperf([_17534|_17536],_17542,_17584):-calc(2,_17534,_17542,_17584).
	listperf([_17728|_17730],_17736,_17776):-listperf(_17730,_17736,_17776).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_listperf_2__1(Prolog* mach);
	static Operation* exec_pred_listperf_2__2(Prolog* mach);
	};


public:
	class pred_generateList_2 : public Code {

	/*
	
	generateList(0,[],_17930):-call(_17930).
	generateList(_18044,[_18038|_18040],_18134):-smallerthan(0,_18044,is(_18038,_18044+1,is(_18074,_18044-1,generateList(_18074,_18040,_18134)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_generateList_2__1(Prolog* mach);
	static Operation* exec_pred_generateList_2__2(Prolog* mach);
	};


public:
	class pred_perfect_2 : public Code {

	/*
	
	perfect(_18426,_18428,_18500):-generateList(_18426,_18434,findall(_18440,isprime(_18434,_18440),_18448,listperf(_18448,_18428,_18500))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_perfect_2__1(Prolog* mach);
	};


	};



}


#endif	//#ifndef PERFECT
