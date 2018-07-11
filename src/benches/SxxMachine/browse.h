#ifndef BROWSE
#define BROWSE

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class browse {
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
	static Const* const  s_a;
	static Const* const  s_arg;
	static Const* const  s_atom;
	static Const* const  s_b;
	static Const* const  s_call;
	static Const* const  s_dummy;
	static Const* const  s_fail;
	static Const* const  s_fill;
	static Const* const  s_functor;
	static Const* const  s_get_pats;
	static Const* const  s_init;
	static Const* const  s_investigate;
	static Const* const  s_is;
	static Const* const  s_length;
	static Const* const  s_match;
	static Const* const  s_mod;
	static Const* const  s_nonvar;
	static Const* const  s_or;
	static Const* const  s_p_investigate;
	static Const* const  s_p_match;
	static Const* const  s_pattern;
	static Const* const  s_property;
	static Const* const  s_randomize;
	static Const* const  s_split;
	static Const* const  s_star;
	static Const* const  s_top;
	static Const* const  s_true;
	static Const* const  s_unify;
	static Const* const  s_var;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint4;
	static Int* const  posint10;
	static Int* const  posint17;
	static Int* const  posint21;
	static Int* const  posint100;
	static Int* const  posint251;
	static Operation* const  reg_top_0;
	static Operation* const  reg_init_5;
	static Operation* const  reg_init_6;
	static Operation* const  reg_fill_3;
	static Operation* const  reg_randomize_3;
	static Operation* const  reg_split_4;
	static Operation* const  reg_investigate_2;
	static Operation* const  reg_get_pats_3;
	static Operation* const  reg_get_pats_4;
	static Operation* const  reg_property_3;
	static Operation* const  reg_p_investigate_2;
	static Operation* const  reg_p_match_2;
	static Operation* const  reg_match_2;
	static Operation* const  reg_$0024concat_3;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_6100):-init(100,10,4,[[a,a,a,b,b,b,b,a,a,a,a,a,b,b,a,a,a],[a,a,b,b,b,b,a,a,[a,a],[b,b]],[a,a,a,b,[b,a],b,a,b,a]],_5820,randomize(_5820,_5826,21,cut(1,investigate(_5826,[[star(_5832),_5842,star(_5848),_5842,a,star(_5832),a,star(_5848),star(_5832)],[star(_5832),star(_5848),star(_5848),star(_5832),[star(_5832)],[star(_5848)]],[_5990,_5996,star(_6002),[b,a],star(_6030),_6040,_6046]],_6100)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_init_5 : public Code {

	/*
	
	init(_6340,_6342,_6344,_6346,_6348,_6414):-init(_6340,_6342,_6342,_6344,_6346,_6348,_6414).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_init_5__1(Prolog* mach);
	};


public:
	class pred_init_6 : public Code {

	/*
	
	init(0,_6596,_6598,_6600,_6602,_6604,_6662):-cut(1,_6662).
	init(_6762,_6764,_6766,_6768,_6770,[_6756|_6758],_6974):-fill(_6764,[],_6780,get_pats(_6768,_6770,_6788,is(_6798,_6766-_6764,fill(_6798,[pattern(_6788)|_6780],_6756,is(_6828,_6762-1,or((_6764=:=0->_6840 is _6766),_6840 is _6764-1,init(_6828,_6840,_6766,_6768,_6770,_6758,_6974))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_init_6__1(Prolog* mach);
	static Operation* exec_pred_init_6__2(Prolog* mach);
	};


public:
	class pred_fill_3 : public Code {

	/*
	
	fill(0,_7518,_7518,_7560):-cut(1,_7560).
	fill(_7646,_7648,[dummy([])|_7642],_7716):-is(_7660,_7646-1,fill(_7660,_7648,_7642,_7716)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_fill_3__1(Prolog* mach);
	static Operation* exec_pred_fill_3__2(Prolog* mach);
	};


public:
	class pred_randomize_3 : public Code {

	/*
	
	randomize([],[],_7904,_7944):-cut(1,_7944).
	randomize(_8032,[_8026|_8028],_8036,_8154):-length(_8032,_8042,is(_8058,_8036*17 mod 251,is(_8070,_8058 mod _8042,split(_8070,_8032,_8026,_8082,randomize(_8082,_8028,_8058,_8154))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_randomize_3__1(Prolog* mach);
	static Operation* exec_pred_randomize_3__2(Prolog* mach);
	};


public:
	class pred_split_4 : public Code {

	/*
	
	split(0,[_8522|_8524],_8522,_8524,_8580):-cut(1,_8580).
	split(_8688,[_8676|_8678],_8692,[_8676|_8684],_8768):-is(_8704,_8688-1,split(_8704,_8678,_8692,_8684,_8768)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_split_4__1(Prolog* mach);
	static Operation* exec_pred_split_4__2(Prolog* mach);
	};


public:
	class pred_investigate_2 : public Code {

	/*
	
	investigate([],_8988,_9022):-cut(1,_9022).
	investigate([_9108|_9110],_9116,_9182):-property(_9108,pattern,_9124,p_investigate(_9124,_9116,investigate(_9110,_9116,_9182))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_investigate_2__1(Prolog* mach);
	static Operation* exec_pred_investigate_2__2(Prolog* mach);
	};


public:
	class pred_get_pats_3 : public Code {

	/*
	
	get_pats(_9426,_9428,_9430,_9480):-get_pats(_9426,_9428,_9430,_9428,_9480).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_pats_3__1(Prolog* mach);
	};


public:
	class pred_get_pats_4 : public Code {

	/*
	
	get_pats(0,_9654,[],_9658,_9704):-cut(1,_9704).
	get_pats(_9830,[_9818|_9820],[_9818|_9826],_9836,_9910):-is(_9846,_9830-1,get_pats(_9846,_9820,_9826,_9836,_9910)).
	get_pats(_10146,[],_10150,_10152,_10208):-get_pats(_10146,_10152,_10150,_10152,_10208).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_pats_4__1(Prolog* mach);
	static Operation* exec_pred_get_pats_4__2(Prolog* mach);
	static Operation* exec_pred_get_pats_4__3(Prolog* mach);
	};


public:
	class pred_property_3 : public Code {

	/*
	
	property([],_10396,_10398,_10438):-fail(_10438).
	property([_10566|_10568],_10574,_10576,_10644):-functor(_10566,_10574,_10584,cut(1,arg(1,_10566,_10576,_10644))).
	property([_10884|_10886],_10892,_10894,_10942):-property(_10886,_10892,_10894,_10942).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_property_3__1(Prolog* mach);
	static Operation* exec_pred_property_3__2(Prolog* mach);
	static Operation* exec_pred_property_3__3(Prolog* mach);
	};


public:
	class pred_p_investigate_2 : public Code {

	/*
	
	p_investigate([],_11114,_11136):-call(_11136).
	p_investigate([_11262|_11264],_11270,_11322):-p_match(_11270,_11262,p_investigate(_11264,_11270,_11322)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_p_investigate_2__1(Prolog* mach);
	static Operation* exec_pred_p_investigate_2__2(Prolog* mach);
	};


public:
	class pred_p_match_2 : public Code {

	/*
	
	p_match([],_11528,_11550):-call(_11550).
	p_match([_11682|_11684],_11690,_11754):-or((match(_11690,_11682),fail),true,p_match(_11684,_11690,_11754)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_p_match_2__1(Prolog* mach);
	static Operation* exec_pred_p_match_2__2(Prolog* mach);
	};


public:
	class pred_match_2 : public Code {

	/*
	
	match([],[],_12006):-cut(1,_12006).
	match([_12128|_12130],[_12134|_12136],_12210):-var(_12134,cut(1,unify(_12134,_12128,match(_12130,_12136,_12210)))).
	match(_12480,[_12474|_12476],_12568):-nonvar(_12474,unify(star(_12490),_12474,cut(1,'$concat'(_12490,_12502,_12480,match(_12502,_12476,_12568))))).
	match([_12896|_12898],[_12902|_12904],_12984):-or((atom(_12896)->_12896=_12902),match(_12896,_12902),match(_12898,_12904,_12984)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_match_2__1(Prolog* mach);
	static Operation* exec_pred_match_2__2(Prolog* mach);
	static Operation* exec_pred_match_2__3(Prolog* mach);
	static Operation* exec_pred_match_2__4(Prolog* mach);
	};


public:
	class pred_$0024concat_3 : public Code {

	/*
	
	'$concat'([],_13208,_13208,_13232):-call(_13232).
	'$concat'([_13390|_13392],_13404,[_13390|_13398],_13454):-'$concat'(_13392,_13404,_13398,_13454).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024concat_3__1(Prolog* mach);
	static Operation* exec_pred_$0024concat_3__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef BROWSE
