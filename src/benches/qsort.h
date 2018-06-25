#ifndef QSORT
#define QSORT

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class qsort {
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
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint4;
	static Int* posint6;
	static Int* posint7;
	static Int* posint8;
	static Int* posint10;
	static Int* posint11;
	static Int* posint17;
	static Int* posint18;
	static Int* posint21;
	static Int* posint27;
	static Int* posint28;
	static Int* posint29;
	static Int* posint31;
	static Int* posint32;
	static Int* posint33;
	static Int* posint37;
	static Int* posint39;
	static Int* posint40;
	static Int* posint46;
	static Int* posint47;
	static Int* posint51;
	static Int* posint53;
	static Int* posint55;
	static Int* posint59;
	static Int* posint61;
	static Int* posint63;
	static Int* posint65;
	static Int* posint66;
	static Int* posint74;
	static Int* posint75;
	static Int* posint81;
	static Int* posint82;
	static Int* posint83;
	static Int* posint85;
	static Int* posint90;
	static Int* posint92;
	static Int* posint94;
	static Int* posint95;
	static Int* posint99;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_25462):-qsort(_25462).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_qsort_0 : public Code {

	/*
	 * 
	 * qsort(_25838):-qsort([27,74,17,33,94,18,46,83,65,2,32,53,28,85,99,47,28,82,6,
	 * 11,55,29,39,81,90,37,10,0,66,51,7,21,85,27,31,63,75,4,95,99,11,28,61,74,18,92
	 * ,40,53,59,8],_25814,[],_25838).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_qsort_3 : public Code {

	/*
	 * 
	 * qsort([_25936|_25938],_25944,_25946,_26030):-partition(_25938,_25936,_25954,
	 * _25956,qsort(_25956,_25962,_25946,qsort(_25954,_25944,[_25936|_25962],_26030)
	 * )). qsort([],_26302,_26302,_26326):-call(_26326).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_partition_4 : public Code {

	/*
	 * 
	 * partition([_26418|_26420],_26432,[_26418|_26426],_26436,_26510):-
	 * smallerorequal(_26418,_26432,cut(1,partition(_26420,_26432,_26426,_26436,
	 * _26510))).
	 * partition([_26728|_26730],_26742,_26744,[_26728|_26736],_26802):-partition(
	 * _26730,_26742,_26744,_26736,_26802).
	 * partition([],_26960,[],[],_26986):-call(_26986).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef QSORT
