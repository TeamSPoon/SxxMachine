#ifndef RUN
#define RUN

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class run {
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
	static Const* const  s10;
	static Const* const  s11;
	static Const* const  s12;
	static Const* const  s13;
	static Const* const  s14;
	static Const* const  s_GC;
	static Const* const  s_Program;
	static Const* const  s_Time;
	static Const* const  s18;
	static Const* const  s_add;
	static Const* const  s_arg;
	static Const* const  s_arithequal;
	static Const* const  s_assert;
	static Const* const  s_average;
	static Const* const  s_bench;
	static Const* const  s_between;
	static Const* const  s_boyer;
	static Const* const  s_browse;
	static Const* const  s_call;
	static Const* const  s_changed;
	static Const* const  s_chat_parser;
	static Const* const  s_compile_programs;
	static Const* const  s_crypt;
	static Const* const  s_current_output;
	static Const* const  s_directory;
	static Const* const  s_dummy;
	static Const* const  s_dynamic;
	static Const* const  s_erase;
	static Const* const  s_fail;
	static Const* const  s_fast_mu;
	static Const* const  s_file_search_path;
	static Const* const  s_findall;
	static Const* const  s_flatten;
	static Const* const  s_forall;
	static Const* const  s_format;
	static Const* const  s_garbage_collect;
	static Const* const  s_gctime;
	static Const* const  s_get_performance_stats;
	static Const* const  s_if;
	static Const* const  s_is;
	static Const* const  s_load_files;
	static Const* const  s_max;
	static Const* const  s_meta_qsort;
	static Const* const  s_mu;
	static Const* const  s_nb_setarg;
	static Const* const  s_not_dummy;
	static Const* const  s_not_not_dummy;
	static Const* const  s_not_not_top;
	static Const* const  s_not_top;
	static Const* const  s_nreverse;
	static Const* const  s_ntimes;
	static Const* const  s_ntimes_dummy;
	static Const* const  s_on_load_run;
	static Const* const  s_phrase;
	static Const* const  s_poly_10;
	static Const* const  s_program;
	static Const* const  s_prolog_load_context;
	static Const* const  s_prover;
	static Const* const  s_qsort;
	static Const* const  s_queens_8;
	static Const* const  s_query;
	static Const* const  s_reducer;
	static Const* const  s_retractall;
	static Const* const  s_rni;
	static Const* const  s_round;
	static Const* const  s_run;
	static Const* const  s_run_interleaved;
	static Const* const  s_run_non_interleaved;
	static Const* const  s_run_program;
	static Const* const  s_sendmore;
	static Const* const  s_seq_clause;
	static Const* const  s_seq_interleaved;
	static Const* const  s_seq_non_interleaved;
	static Const* const  s_silent;
	static Const* const  s_simple_analyzer;
	static Const* const  s_singleton;
	static Const* const  s_smallerthan;
	static Const* const  s_statistics;
	static Const* const  s_style_check;
	static Const* const  s_tak;
	static Const* const  s_time;
	static Const* const  s_top;
	static Const* const  s_total;
	static Const* const  s_true;
	static Const* const  s_tune_count;
	static Const* const  s_tune_counts;
	static Const* const  s_unify;
	static Const* const  s_user;
	static Const* const  s_write;
	static Const* const  s_zebra;
	static Const* const  s101;
	static Const* const  s102;
	static Const* const  s103;
	static Const* const  s104;
	static Const* const  s105;
	static Const* const  s106;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Int* const  posint7;
	static Int* const  posint8;
	static Int* const  posint35;
	static Int* const  posint44;
	static Int* const  posint46;
	static Int* const  posint63;
	static Int* const  posint100;
	static Int* const  posint105;
	static Int* const  posint164;
	static Int* const  posint166;
	static Int* const  posint320;
	static Int* const  posint868;
	static Int* const  posint966;
	static Int* const  posint1219;
	static Int* const  posint4819;
	static Int* const  posint6400;
	static Int* const  posint6827;
	static Int* const  posint8275;
	static Int* const  posint8445;
	static Int* const  posint11378;
	static Operation* const  reg_on_load_run_0;
	static Operation* const  reg_run_1;
	static Operation* const  reg_run_2;
	static Operation* const  reg_compile_programs_0;
	static Operation* const  reg_run_program_4;
	static Operation* const  reg_add_3;
	static Operation* const  reg_ntimes_4;
	static Operation* const  reg_ntimes_2;
	static Operation* const  reg_ntimes_dummy_1;
	static Operation* const  reg_not_not_top_1;
	static Operation* const  reg_not_top_1;
	static Operation* const  reg_not_not_dummy_0;
	static Operation* const  reg_not_dummy_0;
	static Operation* const  reg_dummy_0;
	static Operation* const  reg_tune_counts_0;
	static Operation* const  reg_tune_count_2;
	static Operation* const  reg_program_3;
	static Operation* const  reg_program_2;
	static Operation* const  reg_run_interleaved_1;
	static Operation* const  reg_$002D$002D$003E_2;
	static Operation* const  reg_seq_clause_2;
	static Operation* const  reg_run_non_interleaved_1;
public:
	class pred_on_load_run_0 : public Code {

	/*
	
	on_load_run(_5394):-write(style_check(-singleton),_5394).
	on_load_run(_6424):-write((file_search_path(bench,_6338)->true;prolog_load_context(directory,'/opt/logicmoo_workspace/taupl/test123/SxxMachine/prolog/bench'),assert(user:file_search_path(bench,'/opt/logicmoo_workspace/taupl/test123/SxxMachine/prolog/bench'))),_6424).
	on_load_run(_7654):-write(if(statistics(gctime,_7612)),_7654).
	on_load_run(_15506):-write((dynamic rni/0),_15506).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_on_load_run_0__1(Prolog* mach);
	static Operation* exec_pred_on_load_run_0__2(Prolog* mach);
	static Operation* exec_pred_on_load_run_0__3(Prolog* mach);
	static Operation* exec_pred_on_load_run_0__4(Prolog* mach);
	};


public:
	class pred_run_1 : public Code {

	/*
	
	run(_5458,_5492):-run(current_output,_5458,_5492).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_run_1__1(Prolog* mach);
	};


public:
	class pred_run_2 : public Code {

	/*
	
	run(_5584,_5586,_5804):-compile_programs(format(_5584,'~p~t~18| ~t~w~25| ~t~w~32|~n',['Program','Time','GC'],format(_5584,'~`=t~32|~n',[],unify(total(0,0,0),_5632,forall(program(_5638,_5640,_5586),run_program(_5638,_5640,_5584,_5632),unify(total(_5662,_5664,_5666),_5632,is(_5682,_5664/_5662,is(_5694,_5666/_5662,format(_5584,'~t~w~18| ~t~3f~25| ~t~3f~32|~n',[average,_5682,_5694],_5804))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_run_2__1(Prolog* mach);
	};


public:
	class pred_compile_programs_0 : public Code {

	/*
	
	compile_programs(_6568):-style_check(-singleton,forall(program(_6496,_6498),load_files(_6496:bench(_6496),[silent(true),if(changed)]),_6568)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_compile_programs_0__1(Prolog* mach);
	};


public:
	class pred_run_program_4 : public Code {

	/*
	
	run_program(_6700,_6702,_6704,_6706,_6842):-ntimes(_6700,_6702,_6714,_6716,cut(1,add(1,_6706,1,add(2,_6706,_6714,add(3,_6706,_6716,format(_6704,'~p~t~18| ~t~3f~25| ~t~3f~32|~n',[_6700,_6714,_6716],_6842)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_run_program_4__1(Prolog* mach);
	};


public:
	class pred_add_3 : public Code {

	/*
	
	add(_7266,_7268,_7270,_7350):-arg(_7266,_7268,_7278,is(_7288,_7278+_7270,nb_setarg(_7266,_7268,_7288,_7350))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_add_3__1(Prolog* mach);
	};


public:
	class pred_ntimes_4 : public Code {

	/*
	
	ntimes(_7718,_7720,_7722,_7724,_7882):-get_performance_stats(_7728,_7730,ntimes(_7718,_7720,get_performance_stats(_7740,_7742,ntimes_dummy(_7720,get_performance_stats(_7750,_7752,is(_7722,_7742-_7730-(_7752-_7742),is(_7724,_7740-_7728-(_7750-_7740),_7882))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ntimes_4__1(Prolog* mach);
	};


public:
	class pred_ntimes_2 : public Code {

	/*
	
	ntimes(_8314,_8316,_8362):-arithequal(0,_8316,cut(1,_8362)).
	ntimes(_8510,_8512,_8586):-not_not_top(_8510,cut(1,is(_8526,_8512-1,ntimes(_8510,_8526,_8586)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ntimes_2__1(Prolog* mach);
	static Operation* exec_pred_ntimes_2__2(Prolog* mach);
	};


public:
	class pred_ntimes_dummy_1 : public Code {

	/*
	
	ntimes_dummy(_8814,_8854):-arithequal(0,_8814,cut(1,_8854)).
	ntimes_dummy(_9000,_9062):-not_not_dummy(cut(1,is(_9010,_9000-1,ntimes_dummy(_9010,_9062)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ntimes_dummy_1__1(Prolog* mach);
	static Operation* exec_pred_ntimes_dummy_1__2(Prolog* mach);
	};


public:
	class pred_not_not_top_1 : public Code {

	/*
	
	not_not_top(_9260,_9304):-not_top(_9260,cut(1,fail(_9304))).
	not_not_top(_9458,_9480):-call(_9480).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_not_not_top_1__1(Prolog* mach);
	static Operation* exec_pred_not_not_top_1__2(Prolog* mach);
	};


public:
	class pred_not_top_1 : public Code {

	/*
	
	not_top(_9586,_9632):- :(_9586,top,cut(1,fail(_9632))).
	not_top(_9806,_9828):-call(_9828).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_not_top_1__1(Prolog* mach);
	static Operation* exec_pred_not_top_1__2(Prolog* mach);
	};


public:
	class pred_not_not_dummy_0 : public Code {

	/*
	
	not_not_dummy(_9970):-not_dummy(cut(1,fail(_9970))).
	not_not_dummy(_10132):-call(_10132).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_not_not_dummy_0__1(Prolog* mach);
	static Operation* exec_pred_not_not_dummy_0__2(Prolog* mach);
	};


public:
	class pred_not_dummy_0 : public Code {

	/*
	
	not_dummy(_10266):-dummy(cut(1,fail(_10266))).
	not_dummy(_10434):-call(_10434).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_not_dummy_0__1(Prolog* mach);
	static Operation* exec_pred_not_dummy_0__2(Prolog* mach);
	};


public:
	class pred_dummy_0 : public Code {

	/*
	
	dummy(_10562):-call(_10562).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_dummy_0__1(Prolog* mach);
	};


public:
	class pred_tune_counts_0 : public Code {

	/*
	
	tune_counts(_10738):-forall(program(_10678,_10680),(tune_count(_10678,_10686),format('~q.~n',[program(_10678,_10686)])),_10738).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_tune_counts_0__1(Prolog* mach);
	};


public:
	class pred_tune_count_2 : public Code {

	/*
	
	tune_count(_10900,_10902,_11030):-between(1,100,_10910,is(_10920,1<<_10910,ntimes(_10900,_10920,_10930,_10932,smallerthan(0.5,_10930,cut(1,is(_10902,round(_10920*(1/_10930)),_11030)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_tune_count_2__1(Prolog* mach);
	};


public:
	class pred_program_3 : public Code {

	/*
	
	program(_11468,_11470,_11472,_11546):-program(_11468,_11478,is(_11470,max(1,round(_11478*_11472)),_11546)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_program_3__1(Prolog* mach);
	};


public:
	class pred_program_2 : public Code {

	/*
	
	program(boyer,8,_11818):-call(_11818).
	program(browse,7,_12010):-call(_12010).
	program(chat_parser,46,_12202):-call(_12202).
	program(crypt,868,_12394):-call(_12394).
	program(fast_mu,4819,_12586):-call(_12586).
	program(flatten,8275,_12778):-call(_12778).
	program(meta_qsort,966,_12970):-call(_12970).
	program(mu,6827,_13162):-call(_13162).
	program(nreverse,11378,_13354):-call(_13354).
	program(poly_10,105,_13546):-call(_13546).
	program(prover,6400,_13738):-call(_13738).
	program(qsort,8445,_13930):-call(_13930).
	program(queens_8,63,_14122):-call(_14122).
	program(query,1219,_14314):-call(_14314).
	program(reducer,164,_14506):-call(_14506).
	program(sendmore,44,_14698):-call(_14698).
	program(simple_analyzer,320,_14890):-call(_14890).
	program(tak,35,_15082):-call(_15082).
	program(zebra,166,_15274):-call(_15274).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_program_2__1(Prolog* mach);
	static Operation* exec_pred_program_2__2(Prolog* mach);
	static Operation* exec_pred_program_2__3(Prolog* mach);
	static Operation* exec_pred_program_2__4(Prolog* mach);
	static Operation* exec_pred_program_2__5(Prolog* mach);
	static Operation* exec_pred_program_2__6(Prolog* mach);
	static Operation* exec_pred_program_2__7(Prolog* mach);
	static Operation* exec_pred_program_2__8(Prolog* mach);
	static Operation* exec_pred_program_2__9(Prolog* mach);
	static Operation* exec_pred_program_2__10(Prolog* mach);
	static Operation* exec_pred_program_2__11(Prolog* mach);
	static Operation* exec_pred_program_2__12(Prolog* mach);
	static Operation* exec_pred_program_2__13(Prolog* mach);
	static Operation* exec_pred_program_2__14(Prolog* mach);
	static Operation* exec_pred_program_2__15(Prolog* mach);
	static Operation* exec_pred_program_2__16(Prolog* mach);
	static Operation* exec_pred_program_2__17(Prolog* mach);
	static Operation* exec_pred_program_2__18(Prolog* mach);
	static Operation* exec_pred_program_2__19(Prolog* mach);
	};


public:
	class pred_run_interleaved_1 : public Code {

	/*
	
	run_interleaved(_15570,_15708):-compile_programs(findall(_15574-_15576,program(_15576,_15574,_15570),_15592,phrase(seq_interleaved(_15592),_15602,seq_clause(_15602,_15608,retractall(rni,assert((rni:-_15608),_15624,garbage_collect(time(rni,erase(_15624,_15708))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_run_interleaved_1__1(Prolog* mach);
	};


public:
	class pred_$002D$002D$003E_2 : public Code {

	/*
	
	-->(seq_interleaved([]),!,_16246):-call(_16246).
	-->(seq_interleaved(_16426),(seq_interleaved(_16426,_16432),seq_interleaved(_16432)),_16470):-call(_16470).
	-->(seq_interleaved([],[]),[],_16680):-call(_16680).
	-->(seq_interleaved([1-_16862|_16868],_16874),(!,[_16862],seq_interleaved(_16868,_16874)),_16926):-call(_16926).
	-->(seq_interleaved([_17106-_17108|_17114],[_17118-_17108|_17126]),([_17108],{_17118 is _17106-1},seq_interleaved(_17114,_17126)),_17200):-call(_17200).
	-->(seq_non_interleaved([]),[],_18520):-call(_18520).
	-->(seq_non_interleaved([0-_18702|_18708]),(!,seq_non_interleaved(_18708)),_18750):-call(_18750).
	-->(seq_non_interleaved([_18930-_18932|_18938]),([_18932],{_18958 is _18930-1},seq_non_interleaved([_18958-_18932|_18938])),_19020):-call(_19020).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__1(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__2(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__3(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__4(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__5(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__6(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__7(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__8(Prolog* mach);
	};


public:
	class pred_seq_clause_2 : public Code {

	/*
	
	seq_clause([],true,_2788):-call(_2788).
	seq_clause([_2806|_2808],(\+ \+_2806:top,_2828),_2836):-seq_clause(_2808,_2828,_2836).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_seq_clause_2__1(Prolog* mach);
	static Operation* exec_pred_seq_clause_2__2(Prolog* mach);
	};


public:
	class pred_run_non_interleaved_1 : public Code {

	/*
	
	run_non_interleaved(_2860,_2900):-compile_programs(findall(_2864-_2866,program(_2866,_2864,_2860),_2876,phrase(seq_non_interleaved(_2876),_2882,seq_clause(_2882,_2884,assert((rni:-_2884),_2892,garbage_collect(time(rni,erase(_2892,_2900)))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_run_non_interleaved_1__1(Prolog* mach);
	};


	};



}


#endif	//#ifndef RUN
