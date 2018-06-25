#ifndef RUN
#define RUN

#include "../machine/Code.h"
#include <vector>
#include <functional>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
class Const;
class Int;
class PrologMachine;

class run {
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
	static Const* s24;
	static Const* s25;
	static Const* s26;
	static Const* s27;
	static Const* s28;
	static Const* s29;
	static Const* s30;
	static Const* s31;
	static Const* s32;
	static Const* s33;
	static Const* s34;
	static Const* s35;
	static Const* s36;
	static Const* s37;
	static Const* s38;
	static Const* s39;
	static Const* s40;
	static Const* s41;
	static Const* s42;
	static Const* s43;
	static Const* s44;
	static Const* s45;
	static Const* s46;
	static Const* s47;
	static Const* s48;
	static Const* s49;
	static Const* s50;
	static Const* s51;
	static Const* s52;
	static Const* s53;
	static Const* s54;
	static Const* s55;
	static Const* s56;
	static Const* s57;
	static Const* s58;
	static Const* s59;
	static Const* s60;
	static Const* s61;
	static Const* s62;
	static Const* s63;
	static Const* s64;
	static Const* s65;
	static Const* s66;
	static Const* s67;
	static Const* s68;
	static Const* s69;
	static Const* s70;
	static Const* s71;
	static Const* s72;
	static Const* s73;
	static Const* s74;
	static Const* s75;
	static Const* s76;
	static Const* s77;
	static Const* s78;
	static Const* s79;
	static Const* s80;
	static Const* s81;
	static Const* s82;
	static Const* s83;
	static Const* s84;
	static Const* s85;
	static Const* s86;
	static Const* s87;
	static Const* s88;
	static Const* s89;
	static Const* s90;
	static Const* s91;
	static Const* s92;
	static Const* s93;
	static Const* s94;
	static Const* s95;
	static Const* s96;
	static Const* s97;
	static Const* s98;
	static Const* s99;
	static Const* s100;
	static Const* s101;
	static Const* s102;
	static Const* s103;
	static Const* s104;
	static Const* s105;
	static Const* s106;
	static Int* posint0;
	static Int* posint1;
	static Int* posint2;
	static Int* posint3;
	static Int* posint7;
	static Int* posint8;
	static Int* posint35;
	static Int* posint44;
	static Int* posint46;
	static Int* posint63;
	static Int* posint100;
	static Int* posint105;
	static Int* posint164;
	static Int* posint166;
	static Int* posint320;
	static Int* posint868;
	static Int* posint966;
	static Int* posint1219;
	static Int* posint4819;
	static Int* posint6400;
	static Int* posint6827;
	static Int* posint8275;
	static Int* posint8445;
	static Int* posint11378;
};

class pred_on_load_run_0 : public Code {

	/*
	 * 
	 * on_load_run(_4732):-write(style_check(-singleton),_4732).
	 * on_load_run(_5762):-write((file_search_path(bench,_5676)->true;
	 * prolog_load_context(directory,'/opt/logicmoo_workspace/taupl/SxxMachine/
	 * prolog/bench'),assert(user:file_search_path(bench,'/opt/logicmoo_workspace/
	 * taupl/SxxMachine/prolog/bench'))),_5762).
	 * on_load_run(_6992):-write(if(statistics(gctime,_6950)),_6992).
	 * on_load_run(_14844):-write((dynamic rni/0),_14844).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_run_1 : public Code {

	/*
	 * 
	 * run(_4796,_4830):-run(current_output,_4796,_4830).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_run_2 : public Code {

	/*
	 * 
	 * run(_4922,_4924,_5142):-compile_programs(format(_4922,'~p~t~18| ~t~w~25|
	 * ~t~w~32|~n',['Program','Time','GC'],format(_4922,'~`=t~32|~n',[],unify(total(
	 * 0,0,0),_4970,forall(program(_4976,_4978,_4924),run_program(_4976,_4978,_4922,
	 * _4970),unify(total(_5000,_5002,_5004),_4970,is(_5020,_5002/_5000,is(_5032,
	 * _5004/_5000,format(_4922,'~t~w~18| ~t~3f~25|
	 * ~t~3f~32|~n',[average,_5020,_5032],_5142))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_compile_programs_0 : public Code {

	/*
	 * 
	 * compile_programs(_5906):-style_check(-singleton,forall(program(_5834,_5836),
	 * load_files(_5834:bench(_5834),[silent(true),if(changed)]),_5906)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_run_program_4 : public Code {

	/*
	 * 
	 * run_program(_6038,_6040,_6042,_6044,_6180):-ntimes(_6038,_6040,_6052,_6054,
	 * cut(1,add(1,_6044,1,add(2,_6044,_6052,add(3,_6044,_6054,format(_6042,'~p~t~
	 * 18| ~t~3f~25| ~t~3f~32|~n',[_6038,_6052,_6054],_6180)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_add_3 : public Code {

	/*
	 * 
	 * add(_6604,_6606,_6608,_6688):-arg(_6604,_6606,_6616,is(_6626,_6616+_6608,
	 * nb_setarg(_6604,_6606,_6626,_6688))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ntimes_4 : public Code {

	/*
	 * 
	 * ntimes(_7056,_7058,_7060,_7062,_7220):-get_performance_stats(_7066,_7068,
	 * ntimes(_7056,_7058,get_performance_stats(_7078,_7080,ntimes_dummy(_7058,
	 * get_performance_stats(_7088,_7090,is(_7060,_7080-_7068-(_7090-_7080),is(_7062
	 * ,_7078-_7066-(_7088-_7078),_7220))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ntimes_2 : public Code {

	/*
	 * 
	 * ntimes(_7652,_7654,_7700):-arithequal(0,_7654,cut(1,_7700)).
	 * ntimes(_7848,_7850,_7924):-not_not_top(_7848,cut(1,is(_7864,_7850-1,ntimes(
	 * _7848,_7864,_7924)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_ntimes_dummy_1 : public Code {

	/*
	 * 
	 * ntimes_dummy(_8152,_8192):-arithequal(0,_8152,cut(1,_8192)).
	 * ntimes_dummy(_8338,_8400):-not_not_dummy(cut(1,is(_8348,_8338-1,ntimes_dummy(
	 * _8348,_8400)))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_not_not_top_1 : public Code {

	/*
	 * 
	 * not_not_top(_8598,_8642):-not_top(_8598,cut(1,fail(_8642))).
	 * not_not_top(_8796,_8818):-call(_8818).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_not_top_1 : public Code {

	/*
	 * 
	 * not_top(_8924,_8970):- :(_8924,top,cut(1,fail(_8970))).
	 * not_top(_9144,_9166):-call(_9166).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_not_not_dummy_0 : public Code {

	/*
	 * 
	 * not_not_dummy(_9308):-not_dummy(cut(1,fail(_9308))).
	 * not_not_dummy(_9470):-call(_9470).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_not_dummy_0 : public Code {

	/*
	 * 
	 * not_dummy(_9604):-dummy(cut(1,fail(_9604))). not_dummy(_9772):-call(_9772).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_dummy_0 : public Code {

	/*
	 * 
	 * dummy(_9900):-call(_9900).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_tune_counts_0 : public Code {

	/*
	 * 
	 * tune_counts(_10076):-forall(program(_10016,_10018),(tune_count(_10016,_10024)
	 * ,format('~q.~n',[program(_10016,_10024)])),_10076).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_tune_count_2 : public Code {

	/*
	 * 
	 * tune_count(_10238,_10240,_10368):-between(1,100,_10248,is(_10258,1<<_10248,
	 * ntimes(_10238,_10258,_10268,_10270,smallerthan(0.5,_10268,cut(1,is(_10240,
	 * round(_10258*(1/_10268)),_10368)))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_program_3 : public Code {

	/*
	 * 
	 * program(_10806,_10808,_10810,_10884):-program(_10806,_10816,is(_10808,max(1,
	 * round(_10816*_10810)),_10884)).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_program_2 : public Code {

	/*
	 * 
	 * program(boyer,8,_11156):-call(_11156).
	 * program(browse,7,_11348):-call(_11348).
	 * program(chat_parser,46,_11540):-call(_11540).
	 * program(crypt,868,_11732):-call(_11732).
	 * program(fast_mu,4819,_11924):-call(_11924).
	 * program(flatten,8275,_12116):-call(_12116).
	 * program(meta_qsort,966,_12308):-call(_12308).
	 * program(mu,6827,_12500):-call(_12500).
	 * program(nreverse,11378,_12692):-call(_12692).
	 * program(poly_10,105,_12884):-call(_12884).
	 * program(prover,6400,_13076):-call(_13076).
	 * program(qsort,8445,_13268):-call(_13268).
	 * program(queens_8,63,_13460):-call(_13460).
	 * program(query,1219,_13652):-call(_13652).
	 * program(reducer,164,_13844):-call(_13844).
	 * program(sendmore,44,_14036):-call(_14036).
	 * program(simple_analyzer,320,_14228):-call(_14228).
	 * program(tak,35,_14420):-call(_14420).
	 * program(zebra,166,_14612):-call(_14612).
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

class pred_run_interleaved_1 : public Code {

	/*
	 * 
	 * run_interleaved(_14908,_15046):-compile_programs(findall(_14912-_14914,
	 * program(_14914,_14912,_14908),_14930,phrase(seq_interleaved(_14930),_14940,
	 * seq_clause(_14940,_14946,retractall(rni,assert((rni:-_14946),_14962,
	 * garbage_collect(time(rni,erase(_14962,_15046))))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_sym_dcg_arrow_2 : public Code {

	/*
	 * 
	 * -->(seq_interleaved([]),!,_15584):-call(_15584).
	 * -->(seq_interleaved(_15764),(seq_interleaved(_15764,_15770),seq_interleaved(
	 * _15770)),_15808):-call(_15808).
	 * -->(seq_interleaved([],[]),[],_16018):-call(_16018).
	 * -->(seq_interleaved([1-_16200|_16206],_16212),(!,[_16200],seq_interleaved(
	 * _16206,_16212)),_16264):-call(_16264).
	 * -->(seq_interleaved([_16444-_16446|_16452],[_16456-_16446|_16464]),([_16446],
	 * {_16456 is _16444-1},seq_interleaved(_16452,_16464)),_16538):-call(_16538).
	 * -->(seq_non_interleaved([]),[],_17858):-call(_17858).
	 * -->(seq_non_interleaved([0-_18040|_18046]),(!,seq_non_interleaved(_18046)),
	 * _18088):-call(_18088).
	 * -->(seq_non_interleaved([_18268-_18270|_18276]),([_18270],{_18296 is
	 * _18268-1},seq_non_interleaved([_18296-_18270|_18276])),_18358):-call(_18358).
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
};

class pred_seq_clause_2 : public Code {

	/*
	 * 
	 * seq_clause([],true,_16742):-call(_16742). seq_clause([_16928|_16930],(\+
	 * \+_16928:top,_16950),_16996):-seq_clause(_16930,_16950,_16996).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};

class pred_run_non_interleaved_1 : public Code {

	/*
	 * 
	 * run_non_interleaved(_17210,_17338):-compile_programs(findall(_17214-_17216,
	 * program(_17216,_17214,_17210),_17232,phrase(seq_non_interleaved(_17232),
	 * _17242,seq_clause(_17242,_17248,assert((rni:-_17248),_17260,garbage_collect(
	 * time(rni,erase(_17260,_17338)))))))).
	 * 
	 * 
	 */

public:
	static* std::function<Function*(PrologMachine*);

	static* std::function<Function*(PrologMachine*);
};


#endif	//#ifndef RUN
