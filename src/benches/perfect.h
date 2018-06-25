#ifndef PERFECT
#define PERFECT

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class perfect {
public:
	static Const* s0;
	static Const* s1;
	static Const* s2;
	static Const* s3;
	static Const* s4;
	static Const* s5;
	static Const* s6;
	static Const* s7;
	static Const* s8;
	static Const* s9;
	static Const* s10;
	static Const* s11;
	static Const* s12;
	static Const* s13;
	static Const* s14;
	static Const* s15;
	static Const* s16;
	static Const* s17;
	static Const* s18;
	static Const* s19;
	static Const* s20;
	static Const* s21;
	static Const* s22;
	static Const* s23;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint6;
	static Int* posint28;
	static Int* posint100;
	static Int* posint496;
	static Int* posint8128;
	static Int* posint2096128;
	static Int* posint33550336;
	static Int* posint8589869056;
	static Int* posint137438691328;
	static Int* posint35184367894528;
	static Int* posint144115187807420416;
	static Int* posint2305843008139952128;
	static Int* posint9444732965670570950656;
	static Int* posint2417851639228158837784576;
	static Int* posint38685626227663735544086528;
	static Int* posint9903520314282971830448816128;
	static Int* posint40564819207303336344294875201536;
	static Int* posint166153499473114483824745506383331328;
	static Int* posint2658455991569831744654692615953842176;
	static Int* posint10889035741470030830754200461521744560128;
	static Int* posint2787593149816327892690784192460327776944128;
	static Int* posint44601490397061246283066714178813853366747136;
	static Int* posint182687704666362864775460301858080473799697891328;
	static Int* posint46768052394588893382517909811217778170473142550528;
	static Int* posint191561942608236107294793378084303638130997321548169216;
	static Int* posint12554203470773361527671578846336104669690446551334525075456;
	static Int* posint3213876088517980551083924184681057554444177758164088967397376;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_13122):-findall(_13082,perfect(100,_13082),_13090,ok(_13090,_13122)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ok_1 : public Code {

	/*
	 * 
	 * ok([3213876088517980551083924184681057554444177758164088967397376,
	 * 12554203470773361527671578846336104669690446551334525075456,
	 * 191561942608236107294793378084303638130997321548169216,
	 * 46768052394588893382517909811217778170473142550528,
	 * 182687704666362864775460301858080473799697891328,
	 * 44601490397061246283066714178813853366747136,
	 * 2787593149816327892690784192460327776944128,
	 * 10889035741470030830754200461521744560128,
	 * 2658455991569831744654692615953842176,166153499473114483824745506383331328,
	 * 40564819207303336344294875201536,9903520314282971830448816128,
	 * 38685626227663735544086528,2417851639228158837784576,9444732965670570950656,
	 * 2305843008139952128,144115187807420416,35184367894528,137438691328,8589869056
	 * ,33550336,2096128,8128,496,28,6],_13610):-call(_13610).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_divisible_2 : public Code {

	/*
	 * 
	 * divisible(_13668,_13670,_13746):-is(_13680,_13670*_13670,smallerorequal(
	 * _13680,_13668,arithequal(0,_13668 mod _13670,_13746))).
	 * divisible(_13964,_13966,_14036):-smallerthan(_13966,_13964,is(_13982,_13966+1
	 * ,divisible(_13964,_13982,_14036))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_isprime_2 : public Code {

	/*
	 * 
	 * isprime([_14248|_14250],_14248,_14324):-is(_14260,2,smallerthan(1,_14248,not(
	 * divisible(_14248,_14260),_14324))).
	 * isprime([_14532|_14534],_14540,_14580):-isprime(_14534,_14540,_14580).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_power_3 : public Code {

	/*
	 * 
	 * power(_14692,0,1,_14736):-cut(1,_14736).
	 * power(_14818,_14820,_14822,_14906):-is(_14832,_14820-1,power(_14818,_14832,
	 * _14842,is(_14822,_14842*_14818,_14906))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_calc_3 : public Code {

	/*
	 * 
	 * calc(2,_15148,_15150,_15254):-power(2,_15148,_15158,is(_15168,_15158-1,power(
	 * 2,_15148-1,_15184,is(_15150,_15168*_15184,_15254)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_listperf_2 : public Code {

	/*
	 * 
	 * listperf([_15564|_15566],_15572,_15614):-calc(2,_15564,_15572,_15614).
	 * listperf([_15758|_15760],_15766,_15806):-listperf(_15760,_15766,_15806).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_generateList_2 : public Code {

	/*
	 * 
	 * generateList(0,[],_15960):-call(_15960).
	 * generateList(_16074,[_16068|_16070],_16164):-smallerthan(0,_16074,is(_16068,
	 * _16074+1,is(_16104,_16074-1,generateList(_16104,_16070,_16164)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_perfect_2 : public Code {

	/*
	 * 
	 * perfect(_16456,_16458,_16530):-generateList(_16456,_16464,findall(_16470,
	 * isprime(_16464,_16470),_16478,listperf(_16478,_16458,_16530))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef PERFECT
