#ifndef DERIVE
#define DERIVE

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class derive {
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
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
};

class pred_top_0 : public Code {

	/*
	 * 
	 * top(_8990):-ops8(log10(divide10(_8990))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ops8_0 : public Code {

	/*
	 * 
	 * ops8(_9152):-d((x+1)*((x^2+2)*(x^3+3)),x,_9130,_9152).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_log10_0 : public Code {

	/*
	 * 
	 * log10(_9316):-d(log(log(log(log(log(log(log(log(log(log(x)))))))))),x,_9294,
	 * _9316).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_divide10_0 : public Code {

	/*
	 * 
	 * divide10(_9500):-d(x/x/x/x/x/x/x/x/x/x,x,_9478,_9500).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_d_3 : public Code {

	/*
	 * 
	 * d(_9610+_9612,_9624,_9616+_9618,_9694):-cut(1,d(_9610,_9624,_9616,d(_9612,
	 * _9624,_9618,_9694))).
	 * d(_9904-_9906,_9918,_9910-_9912,_9988):-cut(1,d(_9904,_9918,_9910,d(_9906,
	 * _9918,_9912,_9988))).
	 * d(_10198*_10200,_10224,_10204*_10200+_10198*_10212,_10294):-cut(1,d(_10198,
	 * _10224,_10204,d(_10200,_10224,_10212,_10294))).
	 * d(_10504/_10506,_10542,(_10510*_10506-_10504*_10518)/_10506^2,_10612):-cut(1,
	 * d(_10504,_10542,_10510,d(_10506,_10542,_10518,_10612))).
	 * d(_10822^_10824,_10848,_10828*_10824*_10822^_10836,_10932):-cut(1,integer(
	 * _10824,is(_10836,_10824-1,d(_10822,_10848,_10828,_10932)))).
	 * d(-_11164,_11174,-_11168,_11230):-cut(1,d(_11164,_11174,_11168,_11230)).
	 * d(exp(_11376),_11392,exp(_11376)*_11386,_11448):-cut(1,d(_11376,_11392,_11386
	 * ,_11448)).
	 * d(log(_11594),_11606,_11598/_11594,_11662):-cut(1,d(_11594,_11606,_11598,
	 * _11662)). d(_11808,_11808,1,_11852):-cut(1,_11852).
	 * d(_11934,_11936,0,_11960):-call(_11960).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef DERIVE
