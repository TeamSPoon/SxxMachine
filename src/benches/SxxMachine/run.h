#ifndef RUN
#define RUN

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
		static const Operation reg_on_load_run_0;
		static const Operation reg_run_1;
		static const Operation reg_run_2;
		static const Operation reg_compile_programs_0;
		static const Operation reg_run_program_4;
		static const Operation reg_add_3;
		static const Operation reg_ntimes_4;
		static const Operation reg_ntimes_2;
		static const Operation reg_ntimes_dummy_1;
		static const Operation reg_not_not_top_1;
		static const Operation reg_not_top_1;
		static const Operation reg_not_not_dummy_0;
		static const Operation reg_not_dummy_0;
		static const Operation reg_dummy_0;
		static const Operation reg_tune_counts_0;
		static const Operation reg_tune_count_2;
		static const Operation reg_program_3;
		static const Operation reg_program_2;
		static const Operation reg_run_interleaved_1;
		static const Operation reg_$002D$002D$003E_2;
		static const Operation reg_seq_clause_2;
		static const Operation reg_run_non_interleaved_1;

	public:
		class pred_on_load_run_0 : public Code {

			/*
			
			on_load_run(_5388):-write(style_check(-singleton),_5388).
			on_load_run(_6418):-write((file_search_path(bench,_6332)->true;prolog_load_context(directory,'/opt/logicmoo_workspace/taupl/SxxMachine/prolog/bench'),assert(user:file_search_path(bench,'/opt/logicmoo_workspace/taupl/SxxMachine/prolog/bench'))),_6418).
			on_load_run(_7648):-write(if(statistics(gctime,_7606)),_7648).
			on_load_run(_15500):-write((dynamic rni/0),_15500).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_on_load_run_0__1(Prolog* mach);

			static Operation exec_pred_on_load_run_0__2(Prolog* mach);

			static Operation exec_pred_on_load_run_0__3(Prolog* mach);

			static Operation exec_pred_on_load_run_0__4(Prolog* mach);
		};

	public:
		class pred_run_1 : public Code {

			/*
			
			run(_5452,_5486):-run(current_output,_5452,_5486).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_run_1__1(Prolog* mach);
		};

	public:
		class pred_run_2 : public Code {

			/*
			
			run(_5578,_5580,_5798):-compile_programs(format(_5578,'~p~t~18| ~t~w~25| ~t~w~32|~n',['Program','Time','GC'],format(_5578,'~`=t~32|~n',[],unify(total(0,0,0),_5626,forall(program(_5632,_5634,_5580),run_program(_5632,_5634,_5578,_5626),unify(total(_5656,_5658,_5660),_5626,is(_5676,_5658/_5656,is(_5688,_5660/_5656,format(_5578,'~t~w~18| ~t~3f~25| ~t~3f~32|~n',[average,_5676,_5688],_5798))))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_run_2__1(Prolog* mach);
		};

	public:
		class pred_compile_programs_0 : public Code {

			/*
			
			compile_programs(_6562):-style_check(-singleton,forall(program(_6490,_6492),load_files(_6490:bench(_6490),[silent(true),if(changed)]),_6562)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_compile_programs_0__1(Prolog* mach);
		};

	public:
		class pred_run_program_4 : public Code {

			/*
			
			run_program(_880,_882,_884,_886,_916):-ntimes(_880,_882,_888,_890,cut(1,add(1,_886,1,add(2,_886,_888,add(3,_886,_890,format(_884,'~p~t~18| ~t~3f~25| ~t~3f~32|~n',[_880,_888,_890],_916)))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_run_program_4__1(Prolog* mach);
		};

	public:
		class pred_add_3 : public Code {

			/*
			
			add(_994,_996,_998,_1016):-arg(_994,_996,_1000,is(_1008,_1000+_998,nb_setarg(_994,_996,_1008,_1016))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_add_3__1(Prolog* mach);
		};

	public:
		class pred_ntimes_4 : public Code {

			/*
			
			ntimes(_1096,_1098,_1100,_1102,_1158):-get_performance_stats(_1104,_1106,ntimes(_1096,_1098,get_performance_stats(_1108,_1110,ntimes_dummy(_1098,get_performance_stats(_1112,_1114,is(_1100,_1110-_1106-(_1114-_1110),is(_1102,_1108-_1104-(_1112-_1108),_1158))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_ntimes_4__1(Prolog* mach);
		};

	public:
		class pred_ntimes_2 : public Code {

			/*
			
			ntimes(_1232,_1234,_1242):-arithequal(0,_1234,cut(1,_1242)).
			ntimes(_1272,_1274,_1290):-not_not_top(_1272,cut(1,is(_1282,_1274-1,ntimes(_1272,_1282,_1290)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_ntimes_2__1(Prolog* mach);

			static Operation exec_pred_ntimes_2__2(Prolog* mach);
		};

	public:
		class pred_ntimes_dummy_1 : public Code {

			/*
			
			ntimes_dummy(_1334,_1342):-arithequal(0,_1334,cut(1,_1342)).
			ntimes_dummy(_1370,_1386):-not_not_dummy(cut(1,is(_1378,_1370-1,ntimes_dummy(_1378,_1386)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_ntimes_dummy_1__1(Prolog* mach);

			static Operation exec_pred_ntimes_dummy_1__2(Prolog* mach);
		};

	public:
		class pred_not_not_top_1 : public Code {

			/*
			
			not_not_top(_1424,_1432):-not_top(_1424,cut(1,fail(_1432))).
			not_not_top(_1462,_1472):-call(_1472).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_not_not_top_1__1(Prolog* mach);

			static Operation exec_pred_not_not_top_1__2(Prolog* mach);
		};

	public:
		class pred_not_top_1 : public Code {

			/*
			
			not_top(_1486,_1494):- :(_1486,top,cut(1,fail(_1494))).
			not_top(_1526,_1536):-call(_1536).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_not_top_1__1(Prolog* mach);

			static Operation exec_pred_not_top_1__2(Prolog* mach);
		};

	public:
		class pred_not_not_dummy_0 : public Code {

			/*
			
			not_not_dummy(_1556):-not_dummy(cut(1,fail(_1556))).
			not_not_dummy(_1590):-call(_1590).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_not_not_dummy_0__1(Prolog* mach);

			static Operation exec_pred_not_not_dummy_0__2(Prolog* mach);
		};

	public:
		class pred_not_dummy_0 : public Code {

			/*
			
			not_dummy(_1608):-dummy(cut(1,fail(_1608))).
			not_dummy(_1642):-call(_1642).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_not_dummy_0__1(Prolog* mach);

			static Operation exec_pred_not_dummy_0__2(Prolog* mach);
		};

	public:
		class pred_dummy_0 : public Code {

			/*
			
			dummy(_1662):-call(_1662).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_dummy_0__1(Prolog* mach);
		};

	public:
		class pred_tune_counts_0 : public Code {

			/*
			
			tune_counts(_1716):-forall(program(_1676,_1678),(tune_count(_1676,_1684),format('~q.~n',[program(_1676,_1684)])),_1716).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_tune_counts_0__1(Prolog* mach);
		};

	public:
		class pred_tune_count_2 : public Code {

			/*
			
			tune_count(_1736,_1738,_1782):-between(1,100,_1740,is(_1748,1<<_1740,ntimes(_1736,_1748,_1750,_1752,smallerthan(0.5,_1750,cut(1,is(_1738,round(_1748*(1/_1750)),_1782)))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_tune_count_2__1(Prolog* mach);
		};

	public:
		class pred_program_3 : public Code {

			/*
			
			program(_1850,_1852,_1854,_1880):-program(_1850,_1856,is(_1852,max(1,round(_1856*_1854)),_1880)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_program_3__1(Prolog* mach);
		};

	public:
		class pred_program_2 : public Code {

			/*
			
			program(boyer,8,_1922):-call(_1922).
			program(browse,7,_1946):-call(_1946).
			program(chat_parser,46,_1970):-call(_1970).
			program(crypt,868,_1994):-call(_1994).
			program(fast_mu,4819,_2018):-call(_2018).
			program(flatten,8275,_2042):-call(_2042).
			program(meta_qsort,966,_2066):-call(_2066).
			program(mu,6827,_2090):-call(_2090).
			program(nreverse,11378,_2114):-call(_2114).
			program(poly_10,105,_2138):-call(_2138).
			program(prover,6400,_2162):-call(_2162).
			program(qsort,8445,_2186):-call(_2186).
			program(queens_8,63,_2210):-call(_2210).
			program(query,1219,_2234):-call(_2234).
			program(reducer,164,_2258):-call(_2258).
			program(sendmore,44,_2282):-call(_2282).
			program(simple_analyzer,320,_2306):-call(_2306).
			program(tak,35,_2330):-call(_2330).
			program(zebra,166,_2354):-call(_2354).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_program_2__1(Prolog* mach);

			static Operation exec_pred_program_2__2(Prolog* mach);

			static Operation exec_pred_program_2__3(Prolog* mach);

			static Operation exec_pred_program_2__4(Prolog* mach);

			static Operation exec_pred_program_2__5(Prolog* mach);

			static Operation exec_pred_program_2__6(Prolog* mach);

			static Operation exec_pred_program_2__7(Prolog* mach);

			static Operation exec_pred_program_2__8(Prolog* mach);

			static Operation exec_pred_program_2__9(Prolog* mach);

			static Operation exec_pred_program_2__10(Prolog* mach);

			static Operation exec_pred_program_2__11(Prolog* mach);

			static Operation exec_pred_program_2__12(Prolog* mach);

			static Operation exec_pred_program_2__13(Prolog* mach);

			static Operation exec_pred_program_2__14(Prolog* mach);

			static Operation exec_pred_program_2__15(Prolog* mach);

			static Operation exec_pred_program_2__16(Prolog* mach);

			static Operation exec_pred_program_2__17(Prolog* mach);

			static Operation exec_pred_program_2__18(Prolog* mach);

			static Operation exec_pred_program_2__19(Prolog* mach);
		};

	public:
		class pred_run_interleaved_1 : public Code {

			/*
			
			run_interleaved(_2404,_2444):-compile_programs(findall(_2408-_2410,program(_2410,_2408,_2404),_2420,phrase(seq_interleaved(_2420),_2426,seq_clause(_2426,_2428,retractall(rni,assert((rni:-_2428),_2436,garbage_collect(time(rni,erase(_2436,_2444))))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_run_interleaved_1__1(Prolog* mach);
		};

	public:
		class pred_$002D$002D$003E_2 : public Code {

			/*
			
			-->(seq_interleaved([]),!,_2530):-call(_2530).
			-->(seq_interleaved(_2548),(seq_interleaved(_2548,_2554),seq_interleaved(_2554)),_2574):-call(_2574).
			-->(seq_interleaved([],[]),[],_2604):-call(_2604).
			-->(seq_interleaved([1-_2624|_2630],_2636),(!,[_2624],seq_interleaved(_2630,_2636)),_2670):-call(_2670).
			-->(seq_interleaved([_2688-_2690|_2696],[_2700-_2690|_2708]),([_2690],{_2700 is _2688-1},seq_interleaved(_2696,_2708)),_2764):-call(_2764).
			-->(seq_non_interleaved([]),[],_2992):-call(_2992).
			-->(seq_non_interleaved([0-_3012|_3018]),(!,seq_non_interleaved(_3018)),_3042):-call(_3042).
			-->(seq_non_interleaved([_3060-_3062|_3068]),([_3062],{_3088 is _3060-1},seq_non_interleaved([_3088-_3062|_3068])),_3132):-call(_3132).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__1(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__2(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__3(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__4(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__5(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__6(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__7(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__8(Prolog* mach);
		};

	public:
		class pred_seq_clause_2 : public Code {

			/*
			
			seq_clause([],true,_2788):-call(_2788).
			seq_clause([_2806|_2808],(\+ \+_2806:top,_2828),_2836):-seq_clause(_2808,_2828,_2836).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_seq_clause_2__1(Prolog* mach);

			static Operation exec_pred_seq_clause_2__2(Prolog* mach);
		};

	public:
		class pred_run_non_interleaved_1 : public Code {

			/*
			
			run_non_interleaved(_2860,_2900):-compile_programs(findall(_2864-_2866,program(_2866,_2864,_2860),_2876,phrase(seq_non_interleaved(_2876),_2882,seq_clause(_2882,_2884,assert((rni:-_2884),_2892,garbage_collect(time(rni,erase(_2892,_2900)))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_run_non_interleaved_1__1(Prolog* mach);
		};

	};

}


#endif	//#ifndef RUN
