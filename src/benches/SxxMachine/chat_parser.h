#ifndef CHAT_PARSER
#define CHAT_PARSER

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;

	class chat_parser {
public:
	static Const* const  s_cut;
	static Const* const  s1;
	static Const* const  s2;
	static Const* const  s3;
	static Const* const  s4;
	static Const* const  s5;
	static Const* const  s6;
	static Const* const  s7;
	static Const* const  s_a;
	static Const* const  s_active;
	static Const* const  s_adj;
	static Const* const  s_adj_phrase;
	static Const* const  s_adjs;
	static Const* const  s_adv;
	static Const* const  s_adv_phrase;
	static Const* const  s_adverb;
	static Const* const  s_advs;
	static Const* const  s_afghanistan;
	static Const* const  s_african;
	static Const* const  s_ag_number;
	static Const* const  s_all;
	static Const* const  s_am;
	static Const* const  s_american;
	static Const* const  s_an;
	static Const* const  s_an_s;
	static Const* const  s_and;
	static Const* const  s_anot;
	static Const* const  s_any;
	static Const* const  s_anybody;
	static Const* const  s_anyone;
	static Const* const  s_anything;
	static Const* const  s_are;
	static Const* const  s_area;
	static Const* const  s_areas;
	static Const* const  s_arg;
	static Const* const  s_as;
	static Const* const  s_asian;
	static Const* const  s_at;
	static Const* const  s_australasia;
	static Const* const  s_aux;
	static Const* const  s_average;
	static Const* const  s_averages;
	static Const* const  s_baltic;
	static Const* const  s_be;
	static Const* const  s_been;
	static Const* const  s_being;
	static Const* const  s_big;
	static Const* const  s_bigger;
	static Const* const  s_biggest;
	static Const* const  s_black_sea;
	static Const* const  s_border;
	static Const* const  s_bordered;
	static Const* const  s_bordering;
	static Const* const  s_borders;
	static Const* const  s_by;
	static Const* const  s_call;
	static Const* const  s_capital;
	static Const* const  s_capitals;
	static Const* const  s_chat_parser;
	static Const* const  s_china;
	static Const* const  s_cities;
	static Const* const  s_city;
	static Const* const  s_close;
	static Const* const  s_common;
	static Const* const  s_comp;
	static Const* const  s_comp_adv;
	static Const* const  s_comp_phrase;
	static Const* const  s_compl;
	static Const* const  s_compl_case;
	static Const* const  s_conj;
	static Const* const  s_contain;
	static Const* const  s_contained;
	static Const* const  s_containing;
	static Const* const  s_contains;
	static Const* const  s_context_pron;
	static Const* const  s_continent;
	static Const* const  s_continents;
	static Const* const  s_countries;
	static Const* const  s_country;
	static Const* const  s_danube;
	static Const* const  s_decl;
	static Const* const  s_declarative;
	static Const* const  s_def;
	static Const* const  s_degree;
	static Const* const  s_degrees;
	static Const* const  s_det;
	static Const* const  s_determinate_say;
	static Const* const  s_determiner;
	static Const* const  s_did;
	static Const* const  s_dir;
	static Const* const  s_ditrans;
	static Const* const  s_do;
	static Const* const  s_does;
	static Const* const  s_doing;
	static Const* const  s_done;
	static Const* const  s_drain;
	static Const* const  s_drained;
	static Const* const  s_draining;
	static Const* const  s_drains;
	static Const* const  s_each;
	static Const* const  s_east;
	static Const* const  s_eastof;
	static Const* const  s_eight;
	static Const* const  s_empty;
	static Const* const  s_end;
	static Const* const  s_equator;
	static Const* const  s_european;
	static Const* const  s_every;
	static Const* const  s_everybody;
	static Const* const  s_everyone;
	static Const* const  s_everything;
	static Const* const  s_exceed;
	static Const* const  s_exceeded;
	static Const* const  s_exceeding;
	static Const* const  s_exceeds;
	static Const* const  s116;
	static Const* const  s_fail;
	static Const* const  s_fem;
	static Const* const  s_fin;
	static Const* const  s_five;
	static Const* const  s_flow;
	static Const* const  s_flowed;
	static Const* const  s_flowing;
	static Const* const  s_flows;
	static Const* const  s_four;
	static Const* const  s_from;
	static Const* const  s_fronted_verb;
	static Const* const  s_gap;
	static Const* const  s_gen_case;
	static Const* const  s_gen_marker;
	static Const* const  s_generic;
	static Const* const  s_go;
	static Const* const  s_great;
	static Const* const  s_greater;
	static Const* const  s_had;
	static Const* const  s_has;
	static Const* const  s_have;
	static Const* const  s_having;
	static Const* const  s_he;
	static Const* const  s_her;
	static Const* const  s_him;
	static Const* const  s_his;
	static Const* const  s_how;
	static Const* const  s_i;
	static Const* const  s_imp;
	static Const* const  s_imperative;
	static Const* const  s_imperative_verb;
	static Const* const  s_in;
	static Const* const  s_ind;
	static Const* const  s_indef;
	static Const* const  s_inf;
	static Const* const  s_int_art;
	static Const* const  s_int_det;
	static Const* const  s_int_pron;
	static Const* const  s_into;
	static Const* const  s_intrans;
	static Const* const  s_is;
	static Const* const  s_is_adv;
	static Const* const  s_is_pp;
	static Const* const  s_is_pred;
	static Const* const  s_is_trace;
	static Const* const  s_it;
	static Const* const  s_its;
	static Const* const  s_ksqmile;
	static Const* const  s_ksqmiles;
	static Const* const  s_large;
	static Const* const  s_larger;
	static Const* const  s_largest;
	static Const* const  s_latitude;
	static Const* const  s_latitudes;
	static Const* const  s_least;
	static Const* const  s_less;
	static Const* const  s_list;
	static Const* const  s_loc_pred;
	static Const* const  s_london;
	static Const* const  s_longitude;
	static Const* const  s_longitudes;
	static Const* const  s_main;
	static Const* const  s_many;
	static Const* const  s_masc;
	static Const* const  s_maximum;
	static Const* const  s_me;
	static Const* const  s_million;
	static Const* const  s_milliseconds;
	static Const* const  s_minimum;
	static Const* const  s_minus;
	static Const* const  s_more;
	static Const* const  s_most;
	static Const* const  s_my;
	static Const* const  s_my_string;
	static Const* const  s_myopen;
	static Const* const  s_myplus;
	static Const* const  s_name;
	static Const* const  s_nb;
	static Const* const  s_neg;
	static Const* const  s_neg_adv;
	static Const* const  s_neut;
	static Const* const  s_new;
	static Const* const  s_newer;
	static Const* const  s_newest;
	static Const* const  s_nil;
	static Const* const  s_nine;
	static Const* const  s_no;
	static Const* const  s_no_args;
	static Const* const  s_nobody;
	static Const* const  s_nogap;
	static Const* const  s_nonterminal;
	static Const* const  s_north;
	static Const* const  s_northof;
	static Const* const  s_not;
	static Const* const  s_nothing;
	static Const* const  s_noun;
	static Const* const  s_noun_form;
	static Const* const  s_noun_plu;
	static Const* const  s_noun_sin;
	static Const* const  s_np;
	static Const* const  s_np_all;
	static Const* const  s_np_compls;
	static Const* const  s_np_head;
	static Const* const  s_np_head0;
	static Const* const  s_np_mod;
	static Const* const  s_np_mods;
	static Const* const  s_np_no_trace;
	static Const* const  s_number;
	static Const* const  s_numbers;
	static Const* const  s_obj;
	static Const* const  s_object;
	static Const* const  s_ocean;
	static Const* const  s_oceans;
	static Const* const  s_of;
	static Const* const  s_old;
	static Const* const  s_older;
	static Const* const  s_oldest;
	static Const* const  s_on;
	static Const* const  s_one;
	static Const* const  s_opt_comma;
	static Const* const  s_opt_the;
	static Const* const  s_or;
	static Const* const  s_our;
	static Const* const  s_part;
	static Const* const  s_participle;
	static Const* const  s_passive;
	static Const* const  s_past;
	static Const* const  s_people;
	static Const* const  s_percentage;
	static Const* const  s_perf;
	static Const* const  s_pers_pron;
	static Const* const  s_person;
	static Const* const  s_persons;
	static Const* const  s_place;
	static Const* const  s_places;
	static Const* const  s_plu;
	static Const* const  s_population;
	static Const* const  s_populations;
	static Const* const  s_populous;
	static Const* const  s_pos;
	static Const* const  s_poss;
	static Const* const  s_poss_pron;
	static Const* const  s_possessive;
	static Const* const  s_pp;
	static Const* const  s_pre_adj;
	static Const* const  s_pred_conj;
	static Const* const  s_pred_rest;
	static Const* const  s_predicate;
	static Const* const  s_prep;
	static Const* const  s_prep_case;
	static Const* const  s_pres;
	static Const* const  s_prog;
	static Const* const  s_pronoun;
	static Const* const  s_proper;
	static Const* const  s_proportion;
	static Const* const  s_q;
	static Const* const  s_quant;
	static Const* const  s_quant_phrase;
	static Const* const  s_quantifier_pron;
	static Const* const  s_question;
	static Const* const  s_reduced_rel;
	static Const* const  s_reduced_rel_conj;
	static Const* const  s_reduced_rel_rest;
	static Const* const  s_reduced_relative;
	static Const* const  s_reduced_wh;
	static Const* const  s_region;
	static Const* const  s_regions;
	static Const* const  s_regular_past;
	static Const* const  s_regular_pres;
	static Const* const  s_rel;
	static Const* const  s_rel_adj;
	static Const* const  s_rel_conj;
	static Const* const  s_rel_pron;
	static Const* const  s_rel_rest;
	static Const* const  s_relative;
	static Const* const  s_rest_verb;
	static Const* const  s_restr;
	static Const* const  s_rise;
	static Const* const  s_risen;
	static Const* const  s_rises;
	static Const* const  s_river;
	static Const* const  s_rivers;
	static Const* const  s_role;
	static Const* const  s_root_form;
	static Const* const  s_rose;
	static Const* const  s_runtime;
	static Const* const  s_s;
	static Const* const  s_s_all;
	static Const* const  s_same;
	static Const* const  s_say;
	static Const* const  s_sea;
	static Const* const  s_seamass;
	static Const* const  s_seamasses;
	static Const* const  s_seas;
	static Const* const  s_sentence;
	static Const* const  s_seven;
	static Const* const  s_she;
	static Const* const  s_sin;
	static Const* const  s_six;
	static Const* const  s_small;
	static Const* const  s_smaller;
	static Const* const  s_smallerthan;
	static Const* const  s_smallest;
	static Const* const  s_some;
	static Const* const  s_somebody;
	static Const* const  s_someone;
	static Const* const  s_something;
	static Const* const  s_south;
	static Const* const  s_southof;
	static Const* const  s_sqmile;
	static Const* const  s_sqmiles;
	static Const* const  s_statistics;
	static Const* const  s_subj;
	static Const* const  s_subj_case;
	static Const* const  s_subj_question;
	static Const* const  s_sum;
	static Const* const  s_sums;
	static Const* const  s_sup;
	static Const* const  s_sup_adj;
	static Const* const  s_sup_adv;
	static Const* const  s_sup_op;
	static Const* const  s_sup_phrase;
	static Const* const  s_ten;
	static Const* const  s_terminal;
	static Const* const  s_terminator;
	static Const* const  s_than;
	static Const* const  s_that;
	static Const* const  s_the;
	static Const* const  s_their;
	static Const* const  s_them;
	static Const* const  s_there;
	static Const* const  s_thing;
	static Const* const  s_thousand;
	static Const* const  s_three;
	static Const* const  s_through;
	static Const* const  s_time;
	static Const* const  s_times;
	static Const* const  s_to;
	static Const* const  s_tomorrow;
	static Const* const  s_top;
	static Const* const  s_topic;
	static Const* const  s_total;
	static Const* const  s_totals;
	static Const* const  s_tr_number;
	static Const* const  s_trace1;
	static Const* const  s_trans;
	static Const* const  s_two;
	static Const* const  s_undef;
	static Const* const  s_upper_volta;
	static Const* const  s_us;
	static Const* const  s_value;
	static Const* const  s_variable;
	static Const* const  s_variable_q;
	static Const* const  s_verb;
	static Const* const  s_verb_arg;
	static Const* const  s_verb_args;
	static Const* const  s_verb_case;
	static Const* const  s_verb_form;
	static Const* const  s_verb_mod;
	static Const* const  s_verb_mods;
	static Const* const  s_verb_root;
	static Const* const  s_verb_type;
	static Const* const  s_virtual;
	static Const* const  s_void;
	static Const* const  s_was;
	static Const* const  s_we;
	static Const* const  s_were;
	static Const* const  s_west;
	static Const* const  s_westof;
	static Const* const  s_wh;
	static Const* const  s_wh_question;
	static Const* const  s_what;
	static Const* const  s_when;
	static Const* const  s_where;
	static Const* const  s_which;
	static Const* const  s_who;
	static Const* const  s_whom;
	static Const* const  s_whose;
	static Const* const  s_whq;
	static Const* const  s_with;
	static Const* const  s_word;
	static Const* const  s_write;
	static Const* const  s_x;
	static Const* const  s_yesterday;
	static Const* const  s_yn_question;
	static Const* const  s_you;
	static Const* const  s_your;
	static Const* const  s404;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Int* const  posint4;
	static Int* const  posint5;
	static Int* const  posint6;
	static Int* const  posint7;
	static Int* const  posint8;
	static Int* const  posint9;
	static Int* const  posint10;
	static Operation* const  reg_top_0;
	static Operation* const  reg_go_0;
	static Operation* const  reg_chat_parser_0;
	static Operation* const  reg_my_string_1;
	static Operation* const  reg_determinate_say_2;
	static Operation* const  reg_terminal_5;
	static Operation* const  reg_gap_1;
	static Operation* const  reg_virtual_3;
	static Operation* const  reg_is_pp_1;
	static Operation* const  reg_is_pred_1;
	static Operation* const  reg_is_trace_1;
	static Operation* const  reg_is_adv_1;
	static Operation* const  reg_trace1_2;
	static Operation* const  reg_trace1_1;
	static Operation* const  reg_adv_1;
	static Operation* const  reg_empty_1;
	static Operation* const  reg_np_all_1;
	static Operation* const  reg_s_all_1;
	static Operation* const  reg_np_no_trace_1;
	static Operation* const  reg_myplus_3;
	static Operation* const  reg_minus_3;
	static Operation* const  reg_or_3;
	static Operation* const  reg_anot_3;
	static Operation* const  reg_role_3;
	static Operation* const  reg_subj_case_1;
	static Operation* const  reg_verb_case_1;
	static Operation* const  reg_prep_case_1;
	static Operation* const  reg_compl_case_1;
	static Operation* const  reg_say_2;
	static Operation* const  reg_sentence_5;
	static Operation* const  reg_pp_8;
	static Operation* const  reg_topic_4;
	static Operation* const  reg_opt_comma_4;
	static Operation* const  reg_declarative_5;
	static Operation* const  reg_wh_question_5;
	static Operation* const  reg_np_11;
	static Operation* const  reg_variable_q_8;
	static Operation* const  reg_adv_phrase_7;
	static Operation* const  reg_predicate_7;
	static Operation* const  reg_whq_8;
	static Operation* const  reg_int_det_6;
	static Operation* const  reg_gen_marker_4;
	static Operation* const  reg_whose_6;
	static Operation* const  reg_question_7;
	static Operation* const  reg_det_7;
	static Operation* const  reg_int_art_6;
	static Operation* const  reg_subj_question_1;
	static Operation* const  reg_yn_question_5;
	static Operation* const  reg_verb_form_8;
	static Operation* const  reg_neg_6;
	static Operation* const  reg_fronted_verb_6;
	static Operation* const  reg_imperative_5;
	static Operation* const  reg_imperative_verb_4;
	static Operation* const  reg_s_6;
	static Operation* const  reg_subj_7;
	static Operation* const  reg_np_head_9;
	static Operation* const  reg_np_head0_7;
	static Operation* const  reg_np_compls_10;
	static Operation* const  reg_possessive_14;
	static Operation* const  reg_gen_case_4;
	static Operation* const  reg_an_s_4;
	static Operation* const  reg_determiner_7;
	static Operation* const  reg_quant_phrase_7;
	static Operation* const  reg_quant_6;
	static Operation* const  reg_neg_adv_6;
	static Operation* const  reg_sup_op_2;
	static Operation* const  reg_np_mods_12;
	static Operation* const  reg_np_mod_9;
	static Operation* const  reg_verb_mods_8;
	static Operation* const  reg_verb_mod_7;
	static Operation* const  reg_adjs_5;
	static Operation* const  reg_pre_adj_5;
	static Operation* const  reg_sup_phrase_5;
	static Operation* const  reg_comp_phrase_6;
	static Operation* const  reg_comp_6;
	static Operation* const  reg_relative_9;
	static Operation* const  reg_rel_conj_8;
	static Operation* const  reg_rel_rest_10;
	static Operation* const  reg_rel_7;
	static Operation* const  reg_variable_6;
	static Operation* const  reg_wh_9;
	static Operation* const  reg_reduced_relative_8;
	static Operation* const  reg_reduced_rel_conj_8;
	static Operation* const  reg_reduced_rel_rest_10;
	static Operation* const  reg_reduced_rel_7;
	static Operation* const  reg_reduced_wh_6;
	static Operation* const  reg_verb_8;
	static Operation* const  reg_rest_verb_9;
	static Operation* const  reg_have_8;
	static Operation* const  reg_be_9;
	static Operation* const  reg_passive_7;
	static Operation* const  reg_participle_7;
	static Operation* const  reg_passive_1;
	static Operation* const  reg_participle_3;
	static Operation* const  reg_close_4;
	static Operation* const  reg_myopen_4;
	static Operation* const  reg_verb_args_9;
	static Operation* const  reg_object_8;
	static Operation* const  reg_obj_8;
	static Operation* const  reg_pred_conj_7;
	static Operation* const  reg_pred_rest_9;
	static Operation* const  reg_verb_arg_7;
	static Operation* const  reg_advs_7;
	static Operation* const  reg_adj_phrase_6;
	static Operation* const  reg_no_args_1;
	static Operation* const  reg_conj_9;
	static Operation* const  reg_noun_6;
	static Operation* const  reg_adj_6;
	static Operation* const  reg_prep_5;
	static Operation* const  reg_rel_adj_5;
	static Operation* const  reg_sup_adj_5;
	static Operation* const  reg_comp_adv_5;
	static Operation* const  reg_sup_adv_5;
	static Operation* const  reg_rel_pron_5;
	static Operation* const  reg_name_5;
	static Operation* const  reg_int_art_7;
	static Operation* const  reg_int_pron_5;
	static Operation* const  reg_adverb_5;
	static Operation* const  reg_poss_pron_6;
	static Operation* const  reg_pers_pron_7;
	static Operation* const  reg_quantifier_pron_6;
	static Operation* const  reg_context_pron_6;
	static Operation* const  reg_number_6;
	static Operation* const  reg_terminator_5;
	static Operation* const  reg_opt_the_4;
	static Operation* const  reg_conj_7;
	static Operation* const  reg_loc_pred_5;
	static Operation* const  reg_$007E_5;
	static Operation* const  reg_word_1;
	static Operation* const  reg_$007E_1;
	static Operation* const  reg_conj_1;
	static Operation* const  reg_int_pron_2;
	static Operation* const  reg_int_art_4;
	static Operation* const  reg_det_4;
	static Operation* const  reg_number_3;
	static Operation* const  reg_tr_number_2;
	static Operation* const  reg_ag_number_2;
	static Operation* const  reg_quantifier_pron_3;
	static Operation* const  reg_prep_1;
	static Operation* const  reg_noun_form_3;
	static Operation* const  reg_root_form_1;
	static Operation* const  reg_verb_root_1;
	static Operation* const  reg_regular_pres_1;
	static Operation* const  reg_regular_past_2;
	static Operation* const  reg_rel_pron_2;
	static Operation* const  reg_poss_pron_4;
	static Operation* const  reg_pers_pron_5;
	static Operation* const  reg_terminator_2;
	static Operation* const  reg_name_1;
	static Operation* const  reg_loc_pred_2;
	static Operation* const  reg_adj_2;
	static Operation* const  reg_rel_adj_2;
	static Operation* const  reg_sup_adj_2;
	static Operation* const  reg_noun_sin_1;
	static Operation* const  reg_noun_plu_2;
	static Operation* const  reg_verb_form_4;
	static Operation* const  reg_verb_type_2;
	static Operation* const  reg_adverb_1;
public:
	class pred_top_0 : public Code {

	/*
	
	top(_608):-chat_parser(_608).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_top_0__1(Prolog* mach);
	};


public:
	class pred_go_0 : public Code {

	/*
	
	go(_654):-statistics(runtime,[_626,_632],chat_parser(statistics(runtime,[_638,_644],write('execution time is ',write(_644,write(milliseconds,_654)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_go_0__1(Prolog* mach);
	};


public:
	class pred_chat_parser_0 : public Code {

	/*
	
	chat_parser(_714):-my_string(_704,determinate_say(_704,_706,fail(_714))).
	chat_parser(_752):-call(_752).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_chat_parser_0__1(Prolog* mach);
	static Operation* exec_pred_chat_parser_0__2(Prolog* mach);
	};


public:
	class pred_my_string_1 : public Code {

	/*
	
	my_string([what,rivers,are,there,?],_802):-call(_802).
	my_string([does,afghanistan,border,china,?],_854):-call(_854).
	my_string([what,is,the,capital,of,upper_volta,?],_918):-call(_918).
	my_string([where,is,the,largest,country,?],_976):-call(_976).
	my_string([which,country,~,s,capital,is,london,?],_1046):-call(_1046).
	my_string([which,countries,are,european,?],_1098):-call(_1098).
	my_string([how,large,is,the,smallest,american,country,?],_1168):-call(_1168).
	my_string([what,is,the,ocean,that,borders,african,countries,and,that,borders,asian,countries,?],_1274):-call(_1274).
	my_string([what,are,the,capitals,of,the,countries,bordering,the,baltic,?],_1362):-call(_1362).
	my_string([which,countries,are,bordered,by,two,seas,?],_1432):-call(_1432).
	my_string([how,many,countries,does,the,danube,flow,through,?],_1508):-call(_1508).
	my_string([what,is,the,total,area,of,countries,south,of,the,equator,and,not,in,australasia,?],_1626):-call(_1626).
	my_string([what,is,the,average,area,of,the,countries,in,each,continent,?],_1720):-call(_1720).
	my_string([is,there,more,than,one,country,in,each,continent,?],_1802):-call(_1802).
	my_string([is,there,some,ocean,that,does,not,border,any,country,?],_1890):-call(_1890).
	my_string([what,are,the,countries,from,which,a,river,flows,into,the,black_sea,?],_1990):-call(_1990).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_my_string_1__1(Prolog* mach);
	static Operation* exec_pred_my_string_1__2(Prolog* mach);
	static Operation* exec_pred_my_string_1__3(Prolog* mach);
	static Operation* exec_pred_my_string_1__4(Prolog* mach);
	static Operation* exec_pred_my_string_1__5(Prolog* mach);
	static Operation* exec_pred_my_string_1__6(Prolog* mach);
	static Operation* exec_pred_my_string_1__7(Prolog* mach);
	static Operation* exec_pred_my_string_1__8(Prolog* mach);
	static Operation* exec_pred_my_string_1__9(Prolog* mach);
	static Operation* exec_pred_my_string_1__10(Prolog* mach);
	static Operation* exec_pred_my_string_1__11(Prolog* mach);
	static Operation* exec_pred_my_string_1__12(Prolog* mach);
	static Operation* exec_pred_my_string_1__13(Prolog* mach);
	static Operation* exec_pred_my_string_1__14(Prolog* mach);
	static Operation* exec_pred_my_string_1__15(Prolog* mach);
	static Operation* exec_pred_my_string_1__16(Prolog* mach);
	};


public:
	class pred_determinate_say_2 : public Code {

	/*
	
	determinate_say(_2004,_2006,_2014):-say(_2004,_2006,cut(1,_2014)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_determinate_say_2__1(Prolog* mach);
	};


public:
	class pred_terminal_5 : public Code {

	/*
	
	terminal(_2050,_2054,_2054,x(_2046,terminal,_2050,_2052),_2052,_2064):-call(_2064).
	terminal(_2088,[_2088|_2090],_2090,_2092,_2092,_2100):-gap(_2092,_2100).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_terminal_5__1(Prolog* mach);
	static Operation* exec_pred_terminal_5__2(Prolog* mach);
	};


public:
	class pred_gap_1 : public Code {

	/*
	
	gap(x(gap,_2132,_2134,_2136),_2146):-call(_2146).
	gap([],_2168):-call(_2168).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_gap_1__1(Prolog* mach);
	static Operation* exec_pred_gap_1__2(Prolog* mach);
	};


public:
	class pred_virtual_3 : public Code {

	/*
	
	virtual(_2188,x(_2184,nonterminal,_2188,_2190),_2190,_2200):-call(_2200).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_virtual_3__1(Prolog* mach);
	};


public:
	class pred_is_pp_1 : public Code {

	/*
	
	is_pp(#(1,_2222,_2224,_2226),_2236):-call(_2236).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_is_pp_1__1(Prolog* mach);
	};


public:
	class pred_is_pred_1 : public Code {

	/*
	
	is_pred(#(_2252,1,_2256,_2258),_2268):-call(_2268).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_is_pred_1__1(Prolog* mach);
	};


public:
	class pred_is_trace_1 : public Code {

	/*
	
	is_trace(#(_2284,_2286,1,_2290),_2300):-call(_2300).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_is_trace_1__1(Prolog* mach);
	};


public:
	class pred_is_adv_1 : public Code {

	/*
	
	is_adv(#(_2316,_2318,_2320,1),_2332):-call(_2332).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_is_adv_1__1(Prolog* mach);
	};


public:
	class pred_trace1_2 : public Code {

	/*
	
	trace1(#(_2348,_2350,1,_2354),#(0,0,0,0),_2374):-call(_2374).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_trace1_2__1(Prolog* mach);
	};


public:
	class pred_trace1_1 : public Code {

	/*
	
	trace1(#(0,0,1,0),_2408):-call(_2408).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_trace1_1__1(Prolog* mach);
	};


public:
	class pred_adv_1 : public Code {

	/*
	
	adv(#(0,0,0,1),_2440):-call(_2440).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adv_1__1(Prolog* mach);
	};


public:
	class pred_empty_1 : public Code {

	/*
	
	empty(#(0,0,0,0),_2472):-call(_2472).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_empty_1__1(Prolog* mach);
	};


public:
	class pred_np_all_1 : public Code {

	/*
	
	np_all(#(1,1,1,0),_2504):-call(_2504).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_all_1__1(Prolog* mach);
	};


public:
	class pred_s_all_1 : public Code {

	/*
	
	s_all(#(1,0,1,1),_2536):-call(_2536).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_s_all_1__1(Prolog* mach);
	};


public:
	class pred_np_no_trace_1 : public Code {

	/*
	
	np_no_trace(#(1,1,0,0),_2568):-call(_2568).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_no_trace_1__1(Prolog* mach);
	};


public:
	class pred_myplus_3 : public Code {

	/*
	
	myplus(#(_2584,_2586,_2588,_2590),#(_2594,_2596,_2598,_2600),#(_2604,_2606,_2608,_2610),_2618):-or(_2584,_2594,_2604,or(_2586,_2596,_2606,or(_2588,_2598,_2608,or(_2590,_2600,_2610,_2618)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_myplus_3__1(Prolog* mach);
	};


public:
	class pred_minus_3 : public Code {

	/*
	
	minus(#(_2678,_2680,_2682,_2684),#(_2688,_2690,_2692,_2694),#(_2698,_2700,_2702,_2704),_2712):-anot(_2678,_2688,_2698,anot(_2680,_2690,_2700,anot(_2682,_2692,_2702,anot(_2684,_2694,_2704,_2712)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_minus_3__1(Prolog* mach);
	};


public:
	class pred_or_3 : public Code {

	/*
	
	or(1,_2770,1,_2780):-call(_2780).
	or(0,1,1,_2806):-call(_2806).
	or(0,0,0,_2832):-call(_2832).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_or_3__1(Prolog* mach);
	static Operation* exec_pred_or_3__2(Prolog* mach);
	static Operation* exec_pred_or_3__3(Prolog* mach);
	};


public:
	class pred_anot_3 : public Code {

	/*
	
	anot(_2850,0,_2850,_2860):-call(_2860).
	anot(_2878,1,0,_2888):-call(_2888).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_anot_3__1(Prolog* mach);
	static Operation* exec_pred_anot_3__2(Prolog* mach);
	};


public:
	class pred_role_3 : public Code {

	/*
	
	role(subj,_2914,#(1,0,0),_2924):-call(_2924).
	role(compl,_2950,#(0,_2946,_2948),_2960):-call(_2960).
	role(undef,main,#(_2980,0,_2984),_2994):-call(_2994).
	role(undef,aux,#(0,_3016,_3018),_3028):-call(_3028).
	role(undef,decl,_3046,_3056):-call(_3056).
	role(nil,_3074,_3076,_3086):-call(_3086).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_role_3__1(Prolog* mach);
	static Operation* exec_pred_role_3__2(Prolog* mach);
	static Operation* exec_pred_role_3__3(Prolog* mach);
	static Operation* exec_pred_role_3__4(Prolog* mach);
	static Operation* exec_pred_role_3__5(Prolog* mach);
	static Operation* exec_pred_role_3__6(Prolog* mach);
	};


public:
	class pred_subj_case_1 : public Code {

	/*
	
	subj_case(#(1,0,0),_3120):-call(_3120).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_subj_case_1__1(Prolog* mach);
	};


public:
	class pred_verb_case_1 : public Code {

	/*
	
	verb_case(#(0,1,0),_3150):-call(_3150).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_case_1__1(Prolog* mach);
	};


public:
	class pred_prep_case_1 : public Code {

	/*
	
	prep_case(#(0,0,1),_3180):-call(_3180).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_prep_case_1__1(Prolog* mach);
	};


public:
	class pred_compl_case_1 : public Code {

	/*
	
	compl_case(#(0,_3198,_3200),_3210):-call(_3210).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_compl_case_1__1(Prolog* mach);
	};


public:
	class pred_say_2 : public Code {

	/*
	
	say(_3224,_3226,_3234):-sentence(_3226,_3224,[],[],[],_3234).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_say_2__1(Prolog* mach);
	};


public:
	class pred_sentence_5 : public Code {

	/*
	
	sentence(_3264,_3266,_3268,_3270,_3272,_3284):-declarative(_3264,_3266,_3274,_3270,_3276,terminator('.',_3274,_3268,_3276,_3272,_3284)).
	sentence(_3334,_3336,_3338,_3340,_3342,_3354):-wh_question(_3334,_3336,_3344,_3340,_3346,terminator(?,_3344,_3338,_3346,_3342,_3354)).
	sentence(_3404,_3406,_3408,_3410,_3412,_3428):-topic(_3406,_3414,_3410,_3416,wh_question(_3404,_3414,_3418,_3416,_3420,terminator(?,_3418,_3408,_3420,_3412,_3428))).
	sentence(_3490,_3492,_3494,_3496,_3498,_3510):-yn_question(_3490,_3492,_3500,_3496,_3502,terminator(?,_3500,_3494,_3502,_3498,_3510)).
	sentence(_3560,_3562,_3564,_3566,_3568,_3580):-imperative(_3560,_3562,_3570,_3566,_3572,terminator(!,_3570,_3564,_3572,_3568,_3580)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sentence_5__1(Prolog* mach);
	static Operation* exec_pred_sentence_5__2(Prolog* mach);
	static Operation* exec_pred_sentence_5__3(Prolog* mach);
	static Operation* exec_pred_sentence_5__4(Prolog* mach);
	static Operation* exec_pred_sentence_5__5(Prolog* mach);
	};


public:
	class pred_pp_8 : public Code {

	/*
	
	pp(_3630,_3632,_3634,_3636,_3638,_3638,_3640,_3642,_3660):-virtual(pp(_3630,_3632,_3634,_3636),_3640,_3642,_3660).
	pp(pp(_3700,_3702),_3704,_3706,_3708,_3710,_3712,_3714,_3716,_3734):-prep(_3700,_3710,_3718,_3714,_3720,prep_case(_3722,np(_3702,_3724,_3722,_3726,_3704,_3706,_3708,_3718,_3712,_3720,_3716,_3734))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pp_8__1(Prolog* mach);
	static Operation* exec_pred_pp_8__2(Prolog* mach);
	};


public:
	class pred_topic_4 : public Code {

	/*
	
	topic(_3828,_3830,_3832,x(gap,nonterminal,pp(_3810,compl,_3814,_3816),_3826),_3844):-pp(_3810,compl,_3814,_3816,_3828,_3834,_3832,_3836,opt_comma(_3834,_3830,_3836,_3826,_3844)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_topic_4__1(Prolog* mach);
	};


public:
	class pred_opt_comma_4 : public Code {

	/*
	
	opt_comma(_3896,_3898,_3900,_3902,_3910):- ~(',',_3896,_3898,_3900,_3902,_3910).
	opt_comma(_3944,_3944,_3946,_3946,_3956):-call(_3956).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_opt_comma_4__1(Prolog* mach);
	static Operation* exec_pred_opt_comma_4__2(Prolog* mach);
	};


public:
	class pred_declarative_5 : public Code {

	/*
	
	declarative(decl(_3978),_3980,_3982,_3984,_3986,_3996):-s(_3978,_3988,_3980,_3982,_3984,_3986,_3996).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_declarative_5__1(Prolog* mach);
	};


public:
	class pred_wh_question_5 : public Code {

	/*
	
	wh_question(whq(_4036,_4038),_4040,_4042,_4044,_4046,_4064):-variable_q(_4036,_4048,_4050,_4052,_4040,_4054,_4044,_4056,question(_4050,_4052,_4038,_4054,_4042,_4056,_4046,_4064)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_wh_question_5__1(Prolog* mach);
	};


public:
	class pred_np_11 : public Code {

	/*
	
	np(_4124,_4126,_4128,_4130,_4132,_4134,_4136,_4138,_4138,_4140,_4142,_4166):-virtual(np(_4124,_4126,_4128,_4130,_4132,_4134,_4136),_4140,_4142,_4166).
	np(np(_4212,_4214,[]),_4212,_4218,def,_4220,_4222,_4224,_4226,_4228,_4230,_4232,_4242):-is_pp(_4222,pers_pron(_4214,_4212,_4234,_4226,_4228,_4230,_4232,empty(_4224,role(_4234,decl,_4218,_4242)))).
	np(np(_4318,_4320,_4322),_4318,_4324,_4326,_4328,_4330,_4332,_4334,_4336,_4338,_4340,_4362):-is_pp(_4330,np_head(_4320,_4318,_4326+_4346,_4348,_4322,_4334,_4350,_4338,_4352,np_all(_4354,np_compls(_4346,_4318,_4328,_4348,_4354,_4332,_4350,_4336,_4352,_4340,_4362)))).
	np(part(_4456,_4458),3+_4464,_4466,indef,_4468,_4470,_4472,_4474,_4476,_4478,_4480,_4506):-is_pp(_4470,determiner(_4456,_4464,indef,_4474,_4482,_4478,_4484,~(of,_4482,_4486,_4484,_4488,s_all(_4490,prep_case(_4492,np(_4458,3+plu,_4492,def,_4468,_4490,_4472,_4486,_4476,_4488,_4480,_4506)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_11__1(Prolog* mach);
	static Operation* exec_pred_np_11__2(Prolog* mach);
	static Operation* exec_pred_np_11__3(Prolog* mach);
	static Operation* exec_pred_np_11__4(Prolog* mach);
	};


public:
	class pred_variable_q_8 : public Code {

	/*
	
	variable_q(_4642,_4620,_4644,_4622,_4646,_4648,_4650,x(gap,nonterminal,np(_4618,_4620,_4622,_4624,_4626,_4628,_4630),_4640),_4658):-whq(_4642,_4620,_4618,_4644,_4646,_4648,_4650,_4640,trace1(_4628,_4630,_4658)).
	variable_q(_4740,_4742,compl,_4744,_4746,_4748,_4750,x(gap,nonterminal,pp(pp(_4716,_4718),compl,_4726,_4728),_4738),_4764):-prep(_4716,_4746,_4752,_4750,_4754,whq(_4740,_4742,_4718,_4756,_4752,_4748,_4754,_4738,trace1(_4726,_4728,compl_case(_4744,_4764)))).
	variable_q(_4842,_4854,compl,_4884,_4886,_4888,_4890,x(gap,nonterminal,adv_phrase(pp(_4862,np(_4854,np_head(int_det(_4842),[],_4850),[])),_4870,_4872),_4882),_4898):-context_pron(_4862,_4850,_4886,_4888,_4890,_4882,trace1(_4870,_4872,verb_case(_4884,_4898))).
	variable_q(_4958,_4984,compl,_4986,_4988,_4990,_4992,x(gap,nonterminal,predicate(adj,value(_4962,wh(_4958)),_4972),_4982),_5004):- ~(how,_4988,_4994,_4992,_4996,adj(quant,_4962,_4994,_4990,_4996,_4982,empty(_4972,verb_case(_4986,_5004)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_variable_q_8__1(Prolog* mach);
	static Operation* exec_pred_variable_q_8__2(Prolog* mach);
	static Operation* exec_pred_variable_q_8__3(Prolog* mach);
	static Operation* exec_pred_variable_q_8__4(Prolog* mach);
	};


public:
	class pred_adv_phrase_7 : public Code {

	/*
	
	adv_phrase(_5074,_5076,_5078,_5080,_5080,_5082,_5084,_5100):-virtual(adv_phrase(_5074,_5076,_5078),_5082,_5084,_5100).
	adv_phrase(pp(_5138,_5140),_5142,_5144,_5146,_5148,_5150,_5152,_5174):-loc_pred(_5138,_5146,_5154,_5150,_5156,pp(pp(prep(of),_5140),compl,_5142,_5144,_5154,_5148,_5156,_5152,_5174)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adv_phrase_7__1(Prolog* mach);
	static Operation* exec_pred_adv_phrase_7__2(Prolog* mach);
	};


public:
	class pred_predicate_7 : public Code {

	/*
	
	predicate(_5234,_5236,_5238,_5240,_5240,_5242,_5244,_5260):-virtual(predicate(_5234,_5236,_5238),_5242,_5244,_5260).
	predicate(_5296,_5298,_5300,_5302,_5304,_5306,_5308,_5316):-adj_phrase(_5298,_5300,_5302,_5304,_5306,_5308,_5316).
	predicate(neg,_5358,_5360,_5362,_5364,_5366,_5368,_5378):-s_all(_5370,pp(_5358,compl,_5370,_5360,_5362,_5364,_5366,_5368,_5378)).
	predicate(_5430,_5432,_5434,_5436,_5438,_5440,_5442,_5452):-s_all(_5444,adv_phrase(_5432,_5444,_5434,_5436,_5438,_5440,_5442,_5452)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_predicate_7__1(Prolog* mach);
	static Operation* exec_pred_predicate_7__2(Prolog* mach);
	static Operation* exec_pred_predicate_7__3(Prolog* mach);
	static Operation* exec_pred_predicate_7__4(Prolog* mach);
	};


public:
	class pred_whq_8 : public Code {

	/*
	
	whq(_5502,_5504,_5506,undef,_5508,_5510,_5512,_5514,_5534):-int_det(_5502,_5504,_5508,_5516,_5512,_5518,s_all(_5520,np(_5506,_5504,_5522,_5524,subj,_5520,_5526,_5516,_5510,_5518,_5514,_5534))).
	whq(_5624,3+_5614,np(3+_5614,wh(_5624),[]),_5634,_5636,_5638,_5640,_5642,_5650):-int_pron(_5634,_5636,_5638,_5640,_5642,_5650).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_whq_8__1(Prolog* mach);
	static Operation* exec_pred_whq_8__2(Prolog* mach);
	};


public:
	class pred_int_det_6 : public Code {

	/*
	
	int_det(_5698,3+_5696,_5700,_5702,_5704,_5706,_5714):-whose(_5698,_5696,_5700,_5702,_5704,_5706,_5714).
	int_det(_5760,3+_5758,_5762,_5764,_5766,_5768,_5776):-int_art(_5760,_5758,_5762,_5764,_5766,_5768,_5776).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_int_det_6__1(Prolog* mach);
	static Operation* exec_pred_int_det_6__2(Prolog* mach);
	};


public:
	class pred_gen_marker_4 : public Code {

	/*
	
	gen_marker(_5816,_5816,_5818,_5820,_5828):-virtual(gen_marker,_5818,_5820,_5828).
	gen_marker(_5858,_5860,_5862,_5864,_5876):- ~(~,_5858,_5866,_5862,_5868,an_s(_5866,_5860,_5868,_5864,_5876)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_gen_marker_4__1(Prolog* mach);
	static Operation* exec_pred_gen_marker_4__2(Prolog* mach);
	};


public:
	class pred_whose_6 : public Code {

	/*
	
	whose(_5924,_5930,_5954,_5956,_5958,x(nogap,nonterminal,np_head0(wh(_5924),_5930,proper),x(nogap,nonterminal,gen_marker,_5942)),_5966):- ~(whose,_5954,_5956,_5958,_5942,_5966).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_whose_6__1(Prolog* mach);
	};


public:
	class pred_question_7 : public Code {

	/*
	
	question(_6004,_6006,_6008,_6010,_6012,_6014,_6016,_6028):-subj_question(_6004,role(subj,_6018,_6006,s(_6008,_6020,_6010,_6012,_6014,_6016,_6028))).
	question(_6086,_6088,_6090,_6092,_6094,_6096,_6098,_6112):-fronted_verb(_6086,_6088,_6092,_6100,_6096,_6102,s(_6090,_6104,_6100,_6094,_6102,_6098,_6112)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_question_7__1(Prolog* mach);
	static Operation* exec_pred_question_7__2(Prolog* mach);
	};


public:
	class pred_det_7 : public Code {

	/*
	
	det(_6170,_6172,_6174,_6176,_6176,_6178,_6180,_6196):-virtual(det(_6170,_6172,_6174),_6178,_6180,_6196).
	det(det(_6234),_6236,_6238,_6240,_6242,_6244,_6246,_6256):-terminal(_6248,_6240,_6242,_6244,_6246,det(_6248,_6236,_6234,_6238,_6256)).
	det(generic,_6308,generic,_6310,_6310,_6312,_6312,_6322):-call(_6322).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_det_7__1(Prolog* mach);
	static Operation* exec_pred_det_7__2(Prolog* mach);
	static Operation* exec_pred_det_7__3(Prolog* mach);
	};


public:
	class pred_int_art_6 : public Code {

	/*
	
	int_art(_6366,_6352,_6368,_6370,_6372,x(nogap,nonterminal,det(_6350,_6352,def),_6364),_6380):-int_art(_6366,_6352,_6350,_6368,_6370,_6372,_6364,_6380).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_int_art_6__1(Prolog* mach);
	};


public:
	class pred_subj_question_1 : public Code {

	/*
	
	subj_question(subj,_6430):-call(_6430).
	subj_question(undef,_6452):-call(_6452).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_subj_question_1__1(Prolog* mach);
	static Operation* exec_pred_subj_question_1__2(Prolog* mach);
	};


public:
	class pred_yn_question_5 : public Code {

	/*
	
	yn_question(q(_6468),_6470,_6472,_6474,_6476,_6492):-fronted_verb(nil,_6478,_6470,_6480,_6474,_6482,s(_6468,_6484,_6480,_6472,_6482,_6476,_6492)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_yn_question_5__1(Prolog* mach);
	};


public:
	class pred_verb_form_8 : public Code {

	/*
	
	verb_form(_6546,_6548,_6550,_6552,_6554,_6554,_6556,_6558,_6576):-virtual(verb_form(_6546,_6548,_6550,_6552),_6556,_6558,_6576).
	verb_form(_6614,_6616,_6618,_6620,_6622,_6624,_6626,_6628,_6638):-terminal(_6630,_6622,_6624,_6626,_6628,verb_form(_6630,_6614,_6616,_6618,_6638)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_form_8__1(Prolog* mach);
	static Operation* exec_pred_verb_form_8__2(Prolog* mach);
	};


public:
	class pred_neg_6 : public Code {

	/*
	
	neg(_6692,_6694,_6696,_6696,_6698,_6700,_6714):-virtual(neg(_6692,_6694),_6698,_6700,_6714).
	neg(aux+_6752,neg,_6754,_6756,_6758,_6760,_6768):- ~(not,_6754,_6756,_6758,_6760,_6768).
	neg(_6806,pos,_6808,_6808,_6810,_6810,_6820):-call(_6820).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_neg_6__1(Prolog* mach);
	static Operation* exec_pred_neg_6__2(Prolog* mach);
	static Operation* exec_pred_neg_6__3(Prolog* mach);
	};


public:
	class pred_fronted_verb_6 : public Code {

	/*
	
	fronted_verb(_6880,_6882,_6884,_6886,_6888,x(gap,nonterminal,verb_form(_6846,_6848,_6850,_6852),x(nogap,nonterminal,neg(_6856,_6858),_6868)),_6910):-verb_form(_6846,_6848,_6850,_6890,_6884,_6892,_6888,_6894,verb_type(_6846,aux+_6900,role(_6880,_6852,_6882,neg(_6902,_6858,_6892,_6886,_6894,_6868,_6910)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_fronted_verb_6__1(Prolog* mach);
	};


public:
	class pred_imperative_5 : public Code {

	/*
	
	imperative(imp(_6990),_6992,_6994,_6996,_6998,_7012):-imperative_verb(_6992,_7000,_6996,_7002,s(_6990,_7004,_7000,_6994,_7002,_6998,_7012)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_imperative_5__1(Prolog* mach);
	};


public:
	class pred_imperative_verb_4 : public Code {

	/*
	
	imperative_verb(_7104,_7106,_7108,x(nogap,terminal,you,x(nogap,nonterminal,verb_form(_7076,imp+fin,2+sin,main),_7092)),_7120):-verb_form(_7076,inf,_7110,_7112,_7104,_7106,_7108,_7092,_7120).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_imperative_verb_4__1(Prolog* mach);
	};


public:
	class pred_s_6 : public Code {

	/*
	
	s(s(_7162,_7164,_7166,_7168),_7170,_7172,_7174,_7176,_7178,_7214):-subj(_7162,_7180,_7182,_7172,_7184,_7176,_7186,verb(_7164,_7180,_7182,_7188,_7184,_7190,_7186,_7192,empty(_7194,s_all(_7196,verb_args(_7182,_7188,_7166,_7194,_7198,_7190,_7200,_7192,_7202,minus(_7196,_7198,_7204,myplus(_7196,_7198,_7206,verb_mods(_7168,_7204,_7206,_7170,_7200,_7174,_7202,_7178,_7214)))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_s_6__1(Prolog* mach);
	};


public:
	class pred_subj_7 : public Code {

	/*
	
	subj(there,_7356,_7352+be,_7358,_7360,_7362,_7364,_7372):- ~(there,_7358,_7360,_7362,_7364,_7372).
	subj(_7412,_7414,_7416,_7418,_7420,_7422,_7424,_7440):-s_all(_7426,subj_case(_7428,np(_7412,_7414,_7428,_7430,subj,_7426,_7432,_7418,_7420,_7422,_7424,_7440))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_subj_7__1(Prolog* mach);
	static Operation* exec_pred_subj_7__2(Prolog* mach);
	};


public:
	class pred_np_head_9 : public Code {

	/*
	
	np_head(_7504,_7506,_7508,_7510,_7512,_7514,_7516,_7518,_7520,_7540):-np_head0(_7522,_7524,_7526,_7514,_7528,_7518,_7530,possessive(_7522,_7524,_7526,_7532,_7532,_7504,_7506,_7508,_7510,_7512,_7528,_7516,_7530,_7520,_7540)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_head_9__1(Prolog* mach);
	};


public:
	class pred_np_head0_7 : public Code {

	/*
	
	np_head0(_7620,_7622,_7624,_7626,_7626,_7628,_7630,_7646):-virtual(np_head0(_7620,_7622,_7624),_7628,_7630,_7646).
	np_head0(name(_7684),3+sin,def+proper,_7698,_7700,_7702,_7704,_7712):-name(_7684,_7698,_7700,_7702,_7704,_7712).
	np_head0(np_head(_7754,_7756,_7758),3+_7764,_7768+common,_7772,_7774,_7776,_7778,_7794):-determiner(_7754,_7764,_7768,_7772,_7780,_7776,_7782,adjs(_7756,_7780,_7784,_7782,_7786,noun(_7758,_7764,_7784,_7774,_7786,_7778,_7794))).
	np_head0(_7884,_7886,def+proper,_7888,_7890,_7892,x(nogap,nonterminal,gen_marker,_7882),_7900):-poss_pron(_7884,_7886,_7888,_7890,_7892,_7882,_7900).
	np_head0(np_head(_7944,[],_7948),3+sin,indef+common,_7962,_7964,_7966,_7968,_7976):-quantifier_pron(_7944,_7948,_7962,_7964,_7966,_7968,_7976).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_head0_7__1(Prolog* mach);
	static Operation* exec_pred_np_head0_7__2(Prolog* mach);
	static Operation* exec_pred_np_head0_7__3(Prolog* mach);
	static Operation* exec_pred_np_head0_7__4(Prolog* mach);
	static Operation* exec_pred_np_head0_7__5(Prolog* mach);
	};


public:
	class pred_np_compls_10 : public Code {

	/*
	
	np_compls(proper,_8018,_8020,[],_8022,_8024,_8026,_8026,_8028,_8028,_8036):-empty(_8024,_8036).
	np_compls(common,_8074,_8076,_8078,_8080,_8082,_8084,_8086,_8088,_8090,_8110):-np_all(_8092,np_mods(_8074,_8076,_8094,_8078,_8080,_8096,_8092,_8098,_8084,_8100,_8088,_8102,relative(_8074,_8094,_8096,_8098,_8082,_8100,_8086,_8102,_8090,_8110))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_compls_10__1(Prolog* mach);
	static Operation* exec_pred_np_compls_10__2(Prolog* mach);
	};


public:
	class pred_possessive_14 : public Code {

	/*
	
	possessive(_8198,_8200,_8202,[],_8204,_8206,_8208,_8210,_8212,_8214,_8216,_8218,_8220,_8222,_8264):-gen_case(_8216,_8224,_8220,_8226,np_head0(_8228,_8230,_8232,_8224,_8234,_8226,_8236,possessive(_8228,_8230,_8232,_8256,[pp(poss,np(_8200,_8198,_8204))|_8256],_8206,_8208,_8210,_8212,_8214,_8234,_8218,_8236,_8222,_8264))).
	possessive(_8366,_8368,_8370,_8372,_8374,_8366,_8368,_8370,_8372,_8374,_8376,_8376,_8378,_8378,_8388):-call(_8388).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_possessive_14__1(Prolog* mach);
	static Operation* exec_pred_possessive_14__2(Prolog* mach);
	};


public:
	class pred_gen_case_4 : public Code {

	/*
	
	gen_case(_8438,_8440,_8442,x(nogap,terminal,the,_8436),_8450):-gen_marker(_8438,_8440,_8442,_8436,_8450).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_gen_case_4__1(Prolog* mach);
	};


public:
	class pred_an_s_4 : public Code {

	/*
	
	an_s(_8482,_8484,_8486,_8488,_8496):- ~(s,_8482,_8484,_8486,_8488,_8496).
	an_s(_8530,_8530,_8532,_8532,_8542):-call(_8542).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_an_s_4__1(Prolog* mach);
	static Operation* exec_pred_an_s_4__2(Prolog* mach);
	};


public:
	class pred_determiner_7 : public Code {

	/*
	
	determiner(_8562,_8564,_8566,_8568,_8570,_8572,_8574,_8582):-det(_8562,_8564,_8566,_8568,_8570,_8572,_8574,_8582).
	determiner(_8626,_8628,_8630,_8632,_8634,_8636,_8638,_8646):-quant_phrase(_8626,_8628,_8630,_8632,_8634,_8636,_8638,_8646).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_determiner_7__1(Prolog* mach);
	static Operation* exec_pred_determiner_7__2(Prolog* mach);
	};


public:
	class pred_quant_phrase_7 : public Code {

	/*
	
	quant_phrase(quant(_8692,_8694),_8696,_8698,_8700,_8702,_8704,_8706,_8718):-quant(_8692,_8698,_8700,_8708,_8704,_8710,number(_8694,_8696,_8708,_8702,_8710,_8706,_8718)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_quant_phrase_7__1(Prolog* mach);
	};


public:
	class pred_quant_6 : public Code {

	/*
	
	quant(_8776,indef,_8778,_8780,_8782,_8784,_8802):-neg_adv(_8786,_8776,_8778,_8788,_8782,_8790,comp_adv(_8786,_8788,_8792,_8790,_8794,~(than,_8792,_8780,_8794,_8784,_8802))).
	quant(_8870,indef,_8872,_8874,_8876,_8878,_8892):- ~(at,_8872,_8880,_8876,_8882,sup_adv(_8884,_8880,_8874,_8882,_8878,sup_op(_8884,_8870,_8892))).
	quant(the,def,_8952,_8954,_8956,_8958,_8966):- ~(the,_8952,_8954,_8956,_8958,_8966).
	quant(same,indef,_9004,_9004,_9006,_9006,_9016):-call(_9016).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_quant_6__1(Prolog* mach);
	static Operation* exec_pred_quant_6__2(Prolog* mach);
	static Operation* exec_pred_quant_6__3(Prolog* mach);
	static Operation* exec_pred_quant_6__4(Prolog* mach);
	};


public:
	class pred_neg_adv_6 : public Code {

	/*
	
	neg_adv(_9044,not+_9044,_9046,_9048,_9050,_9052,_9060):- ~(not,_9046,_9048,_9050,_9052,_9060).
	neg_adv(_9098,_9098,_9100,_9100,_9102,_9102,_9112):-call(_9112).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_neg_adv_6__1(Prolog* mach);
	static Operation* exec_pred_neg_adv_6__2(Prolog* mach);
	};


public:
	class pred_sup_op_2 : public Code {

	/*
	
	sup_op(least,not+less,_9150):-call(_9150).
	sup_op(most,not+more,_9180):-call(_9180).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sup_op_2__1(Prolog* mach);
	static Operation* exec_pred_sup_op_2__2(Prolog* mach);
	};


public:
	class pred_np_mods_12 : public Code {

	/*
	
	np_mods(_9202,_9204,_9206,[_9198|_9200],_9208,_9210,_9212,_9214,_9216,_9218,_9220,_9222,_9244):-np_mod(_9202,_9204,_9198,_9208,_9224,_9216,_9226,_9220,_9228,trace1(_9230,myplus(_9230,_9224,_9232,minus(_9208,_9232,_9234,myplus(_9224,_9208,_9236,np_mods(_9202,_9204,_9206,_9200,_9234,_9210,_9236,_9214,_9226,_9218,_9228,_9222,_9244)))))).
	np_mods(_9366,_9368,_9370,_9370,_9372,_9372,_9374,_9374,_9376,_9376,_9378,_9378,_9388):-call(_9388).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_mods_12__1(Prolog* mach);
	static Operation* exec_pred_np_mods_12__2(Prolog* mach);
	};


public:
	class pred_np_mod_9 : public Code {

	/*
	
	np_mod(_9424,_9426,_9428,_9430,_9432,_9434,_9436,_9438,_9440,_9448):-pp(_9428,_9426,_9430,_9432,_9434,_9436,_9438,_9440,_9448).
	np_mod(_9498,_9500,_9502,_9504,_9506,_9508,_9510,_9512,_9514,_9522):-reduced_relative(_9498,_9502,_9504,_9506,_9508,_9510,_9512,_9514,_9522).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_np_mod_9__1(Prolog* mach);
	static Operation* exec_pred_np_mod_9__2(Prolog* mach);
	};


public:
	class pred_verb_mods_8 : public Code {

	/*
	
	verb_mods([_9574|_9576],_9578,_9580,_9582,_9584,_9586,_9588,_9590,_9612):-verb_mod(_9574,_9578,_9592,_9584,_9594,_9588,_9596,trace1(_9598,myplus(_9598,_9592,_9600,minus(_9578,_9600,_9602,myplus(_9592,_9578,_9604,verb_mods(_9576,_9602,_9604,_9582,_9594,_9586,_9596,_9590,_9612)))))).
	verb_mods([],_9714,_9716,_9716,_9718,_9718,_9720,_9720,_9730):-call(_9730).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_mods_8__1(Prolog* mach);
	static Operation* exec_pred_verb_mods_8__2(Prolog* mach);
	};


public:
	class pred_verb_mod_7 : public Code {

	/*
	
	verb_mod(_9758,_9760,_9762,_9764,_9766,_9768,_9770,_9778):-adv_phrase(_9758,_9760,_9762,_9764,_9766,_9768,_9770,_9778).
	verb_mod(_9822,_9824,_9826,_9828,_9830,_9832,_9834,_9842):-is_adv(_9824,adverb(_9822,_9828,_9830,_9832,_9834,empty(_9826,_9842))).
	verb_mod(_9894,_9896,_9898,_9900,_9902,_9904,_9906,_9914):-pp(_9894,compl,_9896,_9898,_9900,_9902,_9904,_9906,_9914).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_mod_7__1(Prolog* mach);
	static Operation* exec_pred_verb_mod_7__2(Prolog* mach);
	static Operation* exec_pred_verb_mod_7__3(Prolog* mach);
	};


public:
	class pred_adjs_5 : public Code {

	/*
	
	adjs([_9962|_9964],_9966,_9968,_9970,_9972,_9984):-pre_adj(_9962,_9966,_9974,_9970,_9976,adjs(_9964,_9974,_9968,_9976,_9972,_9984)).
	adjs([],_10034,_10034,_10036,_10036,_10046):-call(_10046).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adjs_5__1(Prolog* mach);
	static Operation* exec_pred_adjs_5__2(Prolog* mach);
	};


public:
	class pred_pre_adj_5 : public Code {

	/*
	
	pre_adj(_10068,_10070,_10072,_10074,_10076,_10086):-adj(_10078,_10068,_10070,_10072,_10074,_10076,_10086).
	pre_adj(_10124,_10126,_10128,_10130,_10132,_10140):-sup_phrase(_10124,_10126,_10128,_10130,_10132,_10140).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pre_adj_5__1(Prolog* mach);
	static Operation* exec_pred_pre_adj_5__2(Prolog* mach);
	};


public:
	class pred_sup_phrase_5 : public Code {

	/*
	
	sup_phrase(sup(most,_10180),_10182,_10184,_10186,_10188,_10196):-sup_adj(_10180,_10182,_10184,_10186,_10188,_10196).
	sup_phrase(sup(_10234,_10236),_10238,_10240,_10242,_10244,_10256):-sup_adv(_10234,_10238,_10246,_10242,_10248,adj(quant,_10236,_10246,_10240,_10248,_10244,_10256)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sup_phrase_5__1(Prolog* mach);
	static Operation* exec_pred_sup_phrase_5__2(Prolog* mach);
	};


public:
	class pred_comp_phrase_6 : public Code {

	/*
	
	comp_phrase(comp(_10310,_10312,_10314),_10316,_10318,_10320,_10322,_10324,_10344):-comp(_10310,_10312,_10318,_10326,_10322,_10328,np_no_trace(_10330,prep_case(_10332,np(_10314,_10334,_10332,_10336,compl,_10330,_10316,_10326,_10320,_10328,_10324,_10344)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_comp_phrase_6__1(Prolog* mach);
	};


public:
	class pred_comp_6 : public Code {

	/*
	
	comp(_10422,_10424,_10426,_10428,_10430,_10432,_10448):-comp_adv(_10422,_10426,_10434,_10430,_10436,adj(quant,_10424,_10434,_10438,_10436,_10440,~(than,_10438,_10428,_10440,_10432,_10448))).
	comp(more,_10516,_10518,_10520,_10522,_10524,_10536):-rel_adj(_10516,_10518,_10526,_10522,_10528,~(than,_10526,_10520,_10528,_10524,_10536)).
	comp(same,_10588,_10590,_10592,_10594,_10596,_10612):- ~(as,_10590,_10598,_10594,_10600,adj(quant,_10588,_10598,_10602,_10600,_10604,~(as,_10602,_10592,_10604,_10596,_10612))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_comp_6__1(Prolog* mach);
	static Operation* exec_pred_comp_6__2(Prolog* mach);
	static Operation* exec_pred_comp_6__3(Prolog* mach);
	};


public:
	class pred_relative_9 : public Code {

	/*
	
	relative(_10686,[_10682],_10688,_10690,_10692,_10694,_10696,_10698,_10700,_10710):-is_pred(_10688,rel_conj(_10686,_10702,_10682,_10692,_10694,_10696,_10698,_10700,_10710)).
	relative(_10766,[],_10768,_10770,_10770,_10772,_10772,_10774,_10774,_10784):-call(_10784).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_relative_9__1(Prolog* mach);
	static Operation* exec_pred_relative_9__2(Prolog* mach);
	};


public:
	class pred_rel_conj_8 : public Code {

	/*
	
	rel_conj(_10814,_10816,_10818,_10820,_10822,_10824,_10826,_10828,_10844):-rel(_10814,_10830,_10832,_10822,_10834,_10826,_10836,rel_rest(_10814,_10816,_10830,_10818,_10832,_10820,_10834,_10824,_10836,_10828,_10844)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rel_conj_8__1(Prolog* mach);
	};


public:
	class pred_rel_rest_10 : public Code {

	/*
	
	rel_rest(_10914,_10916,_10918,_10920,_10922,_10924,_10926,_10928,_10930,_10932,_10948):-conj(_10916,_10934,_10918,_10936,_10920,_10926,_10938,_10930,_10940,rel_conj(_10914,_10934,_10936,_10924,_10938,_10928,_10940,_10932,_10948)).
	rel_rest(_11022,_11024,_11026,_11026,_11028,_11028,_11030,_11030,_11032,_11032,_11042):-call(_11042).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rel_rest_10__1(Prolog* mach);
	static Operation* exec_pred_rel_rest_10__2(Prolog* mach);
	};


public:
	class pred_rel_7 : public Code {

	/*
	
	rel(_11080,rel(_11076,_11078),_11082,_11084,_11086,_11088,_11090,_11114):-myopen(_11084,_11092,_11088,_11094,variable(_11080,_11076,_11092,_11096,_11094,_11098,s(_11078,_11100,_11096,_11102,_11098,_11104,trace1(_11106,minus(_11100,_11106,_11082,close(_11102,_11086,_11104,_11090,_11114)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rel_7__1(Prolog* mach);
	};


public:
	class pred_variable_6 : public Code {

	/*
	
	variable(_11218,_11214,_11250,_11252,_11254,x(gap,nonterminal,np(np(_11218,wh(_11214),[]),_11218,_11230,_11232,_11234,_11236,_11238),_11248),_11262):- ~(that,_11250,_11252,_11254,_11248,trace1(_11236,_11238,_11262)).
	variable(_11334,_11336,_11338,_11340,_11342,x(gap,nonterminal,np(_11310,_11312,_11314,_11316,_11318,_11320,_11322),_11332),_11350):-wh(_11336,_11334,_11310,_11312,_11314,_11338,_11340,_11342,_11332,trace1(_11320,_11322,_11350)).
	variable(_11430,_11432,_11434,_11436,_11438,x(gap,nonterminal,pp(pp(_11406,_11408),compl,_11416,_11418),_11428),_11454):-prep(_11406,_11434,_11440,_11438,_11442,wh(_11432,_11430,_11408,_11444,_11446,_11440,_11436,_11442,_11428,trace1(_11416,_11418,compl_case(_11446,_11454)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_variable_6__1(Prolog* mach);
	static Operation* exec_pred_variable_6__2(Prolog* mach);
	static Operation* exec_pred_variable_6__3(Prolog* mach);
	};


public:
	class pred_wh_9 : public Code {

	/*
	
	wh(_11530,_11534,np(_11534,wh(_11530),[]),_11534,_11540,_11542,_11544,_11546,_11548,_11558):-rel_pron(_11550,_11542,_11544,_11546,_11548,role(_11550,decl,_11540,_11558)).
	wh(_11632,_11634,np(_11626,_11628,[pp(_11614,_11616)]),_11626,_11636,_11638,_11640,_11642,_11644,_11670):-np_head0(_11628,_11626,_11648+common,_11638,_11652,_11642,_11654,prep(_11614,_11652,_11656,_11654,_11658,wh(_11632,_11634,_11616,_11660,_11662,_11656,_11640,_11658,_11644,_11670))).
	wh(_11754,_11756,_11758,_11760,_11762,_11764,_11766,_11768,_11770,_11786):-whose(_11754,_11756,_11764,_11772,_11768,_11774,s_all(_11776,np(_11758,_11760,_11762,def,subj,_11776,_11778,_11772,_11766,_11774,_11770,_11786))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_wh_9__1(Prolog* mach);
	static Operation* exec_pred_wh_9__2(Prolog* mach);
	static Operation* exec_pred_wh_9__3(Prolog* mach);
	};


public:
	class pred_reduced_relative_8 : public Code {

	/*
	
	reduced_relative(_11864,_11866,_11868,_11870,_11872,_11874,_11876,_11878,_11888):-is_pred(_11868,reduced_rel_conj(_11864,_11880,_11866,_11870,_11872,_11874,_11876,_11878,_11888)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_reduced_relative_8__1(Prolog* mach);
	};


public:
	class pred_reduced_rel_conj_8 : public Code {

	/*
	
	reduced_rel_conj(_11942,_11944,_11946,_11948,_11950,_11952,_11954,_11956,_11972):-reduced_rel(_11942,_11958,_11960,_11950,_11962,_11954,_11964,reduced_rel_rest(_11942,_11944,_11958,_11946,_11960,_11948,_11962,_11952,_11964,_11956,_11972)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_reduced_rel_conj_8__1(Prolog* mach);
	};


public:
	class pred_reduced_rel_rest_10 : public Code {

	/*
	
	reduced_rel_rest(_12042,_12044,_12046,_12048,_12050,_12052,_12054,_12056,_12058,_12060,_12076):-conj(_12044,_12062,_12046,_12064,_12048,_12054,_12066,_12058,_12068,reduced_rel_conj(_12042,_12062,_12064,_12052,_12066,_12056,_12068,_12060,_12076)).
	reduced_rel_rest(_12150,_12152,_12154,_12154,_12156,_12156,_12158,_12158,_12160,_12160,_12170):-call(_12170).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_reduced_rel_rest_10__1(Prolog* mach);
	static Operation* exec_pred_reduced_rel_rest_10__2(Prolog* mach);
	};


public:
	class pred_reduced_rel_7 : public Code {

	/*
	
	reduced_rel(_12208,reduced_rel(_12204,_12206),_12210,_12212,_12214,_12216,_12218,_12242):-myopen(_12212,_12220,_12216,_12222,reduced_wh(_12208,_12204,_12220,_12224,_12222,_12226,s(_12206,_12228,_12224,_12230,_12226,_12232,trace1(_12234,minus(_12228,_12234,_12210,close(_12230,_12214,_12232,_12218,_12242)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_reduced_rel_7__1(Prolog* mach);
	};


public:
	class pred_reduced_wh_6 : public Code {

	/*
	
	reduced_wh(_12346,_12342,_12438,_12440,_12442,x(nogap,nonterminal,np(np(_12346,wh(_12342),[]),_12346,_12358,_12360,_12362,_12364,_12366),x(nogap,nonterminal,verb_form(be,pres+fin,_12346,main),x(nogap,nonterminal,neg(_12386,_12388),x(nogap,nonterminal,predicate(_12388,_12394,_12396),_12406)))),_12456):-neg(_12444,_12388,_12438,_12446,_12442,_12448,predicate(_12388,_12394,_12396,_12446,_12440,_12448,_12406,trace1(_12364,_12366,subj_case(_12358,_12456)))).
	reduced_wh(_12534,_12530,_12586,_12588,_12590,x(nogap,nonterminal,np(np(_12534,wh(_12530),[]),_12534,_12546,_12548,_12550,_12552,_12554),x(nogap,nonterminal,verb(_12558,_12560,_12562,_12564),_12574)),_12598):-participle(_12558,_12562,_12564,_12586,_12588,_12590,_12574,trace1(_12552,_12554,subj_case(_12546,_12598))).
	reduced_wh(_12676,_12672,_12718,_12720,_12722,x(nogap,nonterminal,np(_12656,_12658,_12660,_12662,_12664,_12666,_12668),x(gap,nonterminal,np(np(_12676,wh(_12672),[]),_12676,_12688,_12690,_12692,_12694,_12696),_12706)),_12736):-s_all(_12724,subj_case(_12660,verb_case(_12688,np(_12656,_12658,_12726,_12662,subj,_12724,_12728,_12718,_12720,_12722,_12706,trace1(_12666,_12668,trace1(_12694,_12696,_12736)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_reduced_wh_6__1(Prolog* mach);
	static Operation* exec_pred_reduced_wh_6__2(Prolog* mach);
	static Operation* exec_pred_reduced_wh_6__3(Prolog* mach);
	};


public:
	class pred_verb_8 : public Code {

	/*
	
	verb(_12820,_12822,_12824,_12826,_12828,_12828,_12830,_12832,_12850):-virtual(verb(_12820,_12822,_12824,_12826),_12830,_12832,_12850).
	verb(verb(_12896,_12898,_12890+fin,_12902,_12904),_12906,_12908,_12898,_12910,_12912,_12914,_12916,_12944):-verb_form(_12924,_12890+fin,_12906,_12926,_12910,_12928,_12914,_12930,verb_type(_12924,_12932,neg(_12932,_12904,_12928,_12934,_12930,_12936,rest_verb(_12926,_12924,_12896,_12898,_12902,_12934,_12912,_12936,_12916,verb_type(_12896,_12908,_12944))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_8__1(Prolog* mach);
	static Operation* exec_pred_verb_8__2(Prolog* mach);
	};


public:
	class pred_rest_verb_9 : public Code {

	/*
	
	rest_verb(aux,have,_13052,_13054,[perf|_13050],_13056,_13058,_13060,_13062,_13086):-verb_form(_13070,past+part,_13072,_13074,_13056,_13076,_13060,_13078,have(_13070,_13052,_13054,_13050,_13076,_13058,_13078,_13062,_13086)).
	rest_verb(aux,be,_13156,_13158,_13160,_13162,_13164,_13166,_13168,_13188):-verb_form(_13170,_13172,_13174,_13176,_13162,_13178,_13166,_13180,be(_13172,_13170,_13156,_13158,_13160,_13178,_13164,_13180,_13168,_13188)).
	rest_verb(aux,do,_13260,active,[],_13262,_13264,_13266,_13268,_13280):-verb_form(_13260,inf,_13270,_13272,_13262,_13264,_13266,_13268,_13280).
	rest_verb(main,_13330,_13330,active,[],_13332,_13332,_13334,_13334,_13344):-call(_13344).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rest_verb_9__1(Prolog* mach);
	static Operation* exec_pred_rest_verb_9__2(Prolog* mach);
	static Operation* exec_pred_rest_verb_9__3(Prolog* mach);
	static Operation* exec_pred_rest_verb_9__4(Prolog* mach);
	};


public:
	class pred_have_8 : public Code {

	/*
	
	have(be,_13374,_13376,_13378,_13380,_13382,_13384,_13386,_13406):-verb_form(_13388,_13390,_13392,_13394,_13380,_13396,_13384,_13398,be(_13390,_13388,_13374,_13376,_13378,_13396,_13382,_13398,_13386,_13406)).
	have(_13476,_13476,active,[],_13478,_13478,_13480,_13480,_13490):-call(_13490).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_have_8__1(Prolog* mach);
	static Operation* exec_pred_have_8__2(Prolog* mach);
	};


public:
	class pred_be_9 : public Code {

	/*
	
	be(past+part,_13524,_13524,passive,[],_13526,_13526,_13528,_13528,_13538):-call(_13538).
	be(pres+part,_13580,_13582,_13584,[prog],_13586,_13588,_13590,_13592,_13600):-passive(_13580,_13582,_13584,_13586,_13588,_13590,_13592,_13600).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_be_9__1(Prolog* mach);
	static Operation* exec_pred_be_9__2(Prolog* mach);
	};


public:
	class pred_passive_7 : public Code {

	/*
	
	passive(be,_13648,passive,_13650,_13652,_13654,_13656,_13676):-verb_form(_13648,past+part,_13664,_13666,_13650,_13652,_13654,_13656,verb_type(_13648,_13668,passive(_13668,_13676))).
	passive(_13736,_13736,active,_13738,_13738,_13740,_13740,_13750):-call(_13750).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_passive_7__1(Prolog* mach);
	static Operation* exec_pred_passive_7__2(Prolog* mach);
	};


public:
	class pred_participle_7 : public Code {

	/*
	
	participle(verb(_13778,_13780,inf,_13784,_13786),_13788,_13780,_13790,_13792,_13794,_13796,_13816):-neg(_13798,_13786,_13790,_13800,_13794,_13802,verb_form(_13778,_13804,_13806,_13808,_13800,_13792,_13802,_13796,participle(_13804,_13780,_13784,verb_type(_13778,_13788,_13816)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_participle_7__1(Prolog* mach);
	};


public:
	class pred_passive_1 : public Code {

	/*
	
	passive(_13898+trans,_13910):-call(_13910).
	passive(_13926+ditrans,_13938):-call(_13938).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_passive_1__1(Prolog* mach);
	static Operation* exec_pred_passive_1__2(Prolog* mach);
	};


public:
	class pred_participle_3 : public Code {

	/*
	
	participle(pres+part,active,[prog],_13972):-call(_13972).
	participle(past+part,passive,[],_14004):-call(_14004).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_participle_3__1(Prolog* mach);
	static Operation* exec_pred_participle_3__2(Prolog* mach);
	};


public:
	class pred_close_4 : public Code {

	/*
	
	close(_14022,_14022,_14024,_14026,_14034):-virtual(close,_14024,_14026,_14034).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_close_4__1(Prolog* mach);
	};


public:
	class pred_myopen_4 : public Code {

	/*
	
	myopen(_14074,_14074,_14072,x(gap,nonterminal,close,_14072),_14084):-call(_14084).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_myopen_4__1(Prolog* mach);
	};


public:
	class pred_verb_args_9 : public Code {

	/*
	
	verb_args(_14106+_14108,_14110,_14112,_14114,_14116,_14118,_14120,_14122,_14124,_14140):-advs(_14112,_14126,_14128,_14118,_14130,_14122,_14132,verb_args(_14108,_14110,_14126,_14114,_14116,_14130,_14120,_14132,_14124,_14140)).
	verb_args(trans,active,[arg(dir,_14214)],_14222,_14224,_14226,_14228,_14230,_14232,_14240):-verb_arg(np,_14214,_14224,_14226,_14228,_14230,_14232,_14240).
	verb_args(ditrans,_14300,[arg(_14290,_14292)|_14298],_14302,_14304,_14306,_14308,_14310,_14312,_14326):-verb_arg(np,_14292,_14314,_14306,_14316,_14310,_14318,object(_14290,_14298,_14314,_14304,_14316,_14308,_14318,_14312,_14326)).
	verb_args(be,_14400,[void],_14402,_14402,_14404,_14406,_14408,_14410,_14418):-terminal(there,_14404,_14406,_14408,_14410,_14418).
	verb_args(be,_14474,[arg(predicate,_14466)],_14476,_14478,_14480,_14482,_14484,_14486,_14496):-pred_conj(_14488,_14466,_14478,_14480,_14482,_14484,_14486,_14496).
	verb_args(be,_14556,[arg(dir,_14548)],_14558,_14560,_14562,_14564,_14566,_14568,_14576):-verb_arg(np,_14548,_14560,_14562,_14564,_14566,_14568,_14576).
	verb_args(have,active,[arg(dir,_14628)],_14636,_14638,_14640,_14642,_14644,_14646,_14654):-verb_arg(np,_14628,_14638,_14640,_14642,_14644,_14646,_14654).
	verb_args(_14702,_14704,[],_14706,_14706,_14708,_14708,_14710,_14710,_14718):-no_args(_14702,_14718).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_args_9__1(Prolog* mach);
	static Operation* exec_pred_verb_args_9__2(Prolog* mach);
	static Operation* exec_pred_verb_args_9__3(Prolog* mach);
	static Operation* exec_pred_verb_args_9__4(Prolog* mach);
	static Operation* exec_pred_verb_args_9__5(Prolog* mach);
	static Operation* exec_pred_verb_args_9__6(Prolog* mach);
	static Operation* exec_pred_verb_args_9__7(Prolog* mach);
	static Operation* exec_pred_verb_args_9__8(Prolog* mach);
	};


public:
	class pred_object_8 : public Code {

	/*
	
	object(_14754,_14756,_14758,_14760,_14762,_14764,_14766,_14768,_14786):-adv(_14770,minus(_14770,_14758,_14772,advs(_14756,_14774,_14772,_14762,_14776,_14766,_14778,obj(_14754,_14774,_14758,_14760,_14776,_14764,_14778,_14768,_14786)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_object_8__1(Prolog* mach);
	};


public:
	class pred_obj_8 : public Code {

	/*
	
	obj(ind,[arg(dir,_14872)],_14880,_14882,_14884,_14886,_14888,_14890,_14898):-verb_arg(np,_14872,_14882,_14884,_14886,_14888,_14890,_14898).
	obj(dir,[],_14944,_14944,_14946,_14946,_14948,_14948,_14958):-call(_14958).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_obj_8__1(Prolog* mach);
	static Operation* exec_pred_obj_8__2(Prolog* mach);
	};


public:
	class pred_pred_conj_7 : public Code {

	/*
	
	pred_conj(_14986,_14988,_14990,_14992,_14994,_14996,_14998,_15016):-predicate(_15000,_15002,_15004,_14992,_15006,_14996,_15008,pred_rest(_14986,_15002,_14988,_15004,_14990,_15006,_14994,_15008,_14998,_15016)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pred_conj_7__1(Prolog* mach);
	};


public:
	class pred_pred_rest_9 : public Code {

	/*
	
	pred_rest(_15082,_15084,_15086,_15088,_15090,_15092,_15094,_15096,_15098,_15114):-conj(_15082,_15100,_15084,_15102,_15086,_15092,_15104,_15096,_15106,pred_conj(_15100,_15102,_15090,_15104,_15094,_15106,_15098,_15114)).
	pred_rest(_15184,_15186,_15186,_15188,_15188,_15190,_15190,_15192,_15192,_15202):-call(_15202).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pred_rest_9__1(Prolog* mach);
	static Operation* exec_pred_pred_rest_9__2(Prolog* mach);
	};


public:
	class pred_verb_arg_7 : public Code {

	/*
	
	verb_arg(np,_15232,_15234,_15236,_15238,_15240,_15242,_15258):-s_all(_15244,verb_case(_15246,np(_15232,_15248,_15246,_15250,compl,_15244,_15234,_15236,_15238,_15240,_15242,_15258))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_arg_7__1(Prolog* mach);
	};


public:
	class pred_advs_7 : public Code {

	/*
	
	advs([_15324|_15326],_15328,_15330,_15332,_15334,_15336,_15338,_15350):-is_adv(_15330,adverb(_15324,_15332,_15340,_15336,_15342,advs(_15326,_15328,_15330,_15340,_15334,_15342,_15338,_15350))).
	advs(_15414,_15414,_15416,_15418,_15418,_15420,_15420,_15430):-call(_15430).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_advs_7__1(Prolog* mach);
	static Operation* exec_pred_advs_7__2(Prolog* mach);
	};


public:
	class pred_adj_phrase_6 : public Code {

	/*
	
	adj_phrase(_15456,_15458,_15460,_15462,_15464,_15466,_15476):-adj(_15468,_15456,_15460,_15462,_15464,_15466,empty(_15458,_15476)).
	adj_phrase(_15522,_15524,_15526,_15528,_15530,_15532,_15540):-comp_phrase(_15522,_15524,_15526,_15528,_15530,_15532,_15540).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adj_phrase_6__1(Prolog* mach);
	static Operation* exec_pred_adj_phrase_6__2(Prolog* mach);
	};


public:
	class pred_no_args_1 : public Code {

	/*
	
	no_args(trans,_15588):-call(_15588).
	no_args(ditrans,_15610):-call(_15610).
	no_args(intrans,_15632):-call(_15632).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_no_args_1__1(Prolog* mach);
	static Operation* exec_pred_no_args_1__2(Prolog* mach);
	static Operation* exec_pred_no_args_1__3(Prolog* mach);
	};


public:
	class pred_conj_9 : public Code {

	/*
	
	conj(conj(_15648,_15650),conj(_15648,_15656),_15662,_15664,conj(_15648,_15662,_15664),_15666,_15668,_15670,_15672,_15680):-conj(_15648,_15650,_15656,_15666,_15668,_15670,_15672,_15680).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_conj_9__1(Prolog* mach);
	};


public:
	class pred_noun_6 : public Code {

	/*
	
	noun(_15728,_15730,_15732,_15734,_15736,_15738,_15748):-terminal(_15740,_15732,_15734,_15736,_15738,noun_form(_15740,_15728,_15730,_15748)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_noun_6__1(Prolog* mach);
	};


public:
	class pred_adj_6 : public Code {

	/*
	
	adj(_15800,adj(_15798),_15802,_15804,_15806,_15808,_15816):-terminal(_15798,_15802,_15804,_15806,_15808,adj(_15798,_15800,_15816)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adj_6__1(Prolog* mach);
	};


public:
	class pred_prep_5 : public Code {

	/*
	
	prep(prep(_15864),_15866,_15868,_15870,_15872,_15880):-terminal(_15864,_15866,_15868,_15870,_15872,prep(_15864,_15880)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_prep_5__1(Prolog* mach);
	};


public:
	class pred_rel_adj_5 : public Code {

	/*
	
	rel_adj(adj(_15924),_15926,_15928,_15930,_15932,_15942):-terminal(_15934,_15926,_15928,_15930,_15932,rel_adj(_15934,_15924,_15942)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rel_adj_5__1(Prolog* mach);
	};


public:
	class pred_sup_adj_5 : public Code {

	/*
	
	sup_adj(adj(_15988),_15990,_15992,_15994,_15996,_16006):-terminal(_15998,_15990,_15992,_15994,_15996,sup_adj(_15998,_15988,_16006)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sup_adj_5__1(Prolog* mach);
	};


public:
	class pred_comp_adv_5 : public Code {

	/*
	
	comp_adv(less,_16050,_16052,_16054,_16056,_16064):- ~(less,_16050,_16052,_16054,_16056,_16064).
	comp_adv(more,_16100,_16102,_16104,_16106,_16114):- ~(more,_16100,_16102,_16104,_16106,_16114).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_comp_adv_5__1(Prolog* mach);
	static Operation* exec_pred_comp_adv_5__2(Prolog* mach);
	};


public:
	class pred_sup_adv_5 : public Code {

	/*
	
	sup_adv(least,_16150,_16152,_16154,_16156,_16164):- ~(least,_16150,_16152,_16154,_16156,_16164).
	sup_adv(most,_16200,_16202,_16204,_16206,_16214):- ~(most,_16200,_16202,_16204,_16206,_16214).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sup_adv_5__1(Prolog* mach);
	static Operation* exec_pred_sup_adv_5__2(Prolog* mach);
	};


public:
	class pred_rel_pron_5 : public Code {

	/*
	
	rel_pron(_16250,_16252,_16254,_16256,_16258,_16268):-terminal(_16260,_16252,_16254,_16256,_16258,rel_pron(_16260,_16250,_16268)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rel_pron_5__1(Prolog* mach);
	};


public:
	class pred_name_5 : public Code {

	/*
	
	name(_16312,_16314,_16316,_16318,_16320,_16332):-opt_the(_16314,_16322,_16318,_16324,terminal(_16312,_16322,_16316,_16324,_16320,name(_16312,_16332))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_name_5__1(Prolog* mach);
	};


public:
	class pred_int_art_7 : public Code {

	/*
	
	int_art(_16388,plu,quant(same,wh(_16388)),_16396,_16398,_16400,_16402,_16414):- ~(how,_16396,_16404,_16400,_16406,~(many,_16404,_16398,_16406,_16402,_16414)).
	int_art(_16468,_16470,_16472,_16474,_16476,_16478,_16480,_16490):-terminal(_16482,_16474,_16476,_16478,_16480,int_art(_16482,_16468,_16470,_16472,_16490)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_int_art_7__1(Prolog* mach);
	static Operation* exec_pred_int_art_7__2(Prolog* mach);
	};


public:
	class pred_int_pron_5 : public Code {

	/*
	
	int_pron(_16542,_16544,_16546,_16548,_16550,_16560):-terminal(_16552,_16544,_16546,_16548,_16550,int_pron(_16552,_16542,_16560)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_int_pron_5__1(Prolog* mach);
	};


public:
	class pred_adverb_5 : public Code {

	/*
	
	adverb(adv(_16606),_16608,_16610,_16612,_16614,_16622):-terminal(_16606,_16608,_16610,_16612,_16614,adverb(_16606,_16622)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adverb_5__1(Prolog* mach);
	};


public:
	class pred_poss_pron_6 : public Code {

	/*
	
	poss_pron(pronoun(_16666),_16670+_16672,_16674,_16676,_16678,_16680,_16690):-terminal(_16682,_16674,_16676,_16678,_16680,poss_pron(_16682,_16666,_16670,_16672,_16690)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_poss_pron_6__1(Prolog* mach);
	};


public:
	class pred_pers_pron_7 : public Code {

	/*
	
	pers_pron(pronoun(_16742),_16746+_16748,_16750,_16752,_16754,_16756,_16758,_16768):-terminal(_16760,_16752,_16754,_16756,_16758,pers_pron(_16760,_16742,_16746,_16748,_16750,_16768)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pers_pron_7__1(Prolog* mach);
	};


public:
	class pred_quantifier_pron_6 : public Code {

	/*
	
	quantifier_pron(_16822,_16824,_16826,_16828,_16830,_16832,_16842):-terminal(_16834,_16826,_16828,_16830,_16832,quantifier_pron(_16834,_16822,_16824,_16842)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_6__1(Prolog* mach);
	};


public:
	class pred_context_pron_6 : public Code {

	/*
	
	context_pron(prep(in),place,_16894,_16896,_16898,_16900,_16908):- ~(where,_16894,_16896,_16898,_16900,_16908).
	context_pron(prep(at),time,_16950,_16952,_16954,_16956,_16964):- ~(when,_16950,_16952,_16954,_16956,_16964).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_context_pron_6__1(Prolog* mach);
	static Operation* exec_pred_context_pron_6__2(Prolog* mach);
	};


public:
	class pred_number_6 : public Code {

	/*
	
	number(nb(_17004),_17006,_17008,_17010,_17012,_17014,_17024):-terminal(_17016,_17008,_17010,_17012,_17014,number(_17016,_17004,_17006,_17024)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_number_6__1(Prolog* mach);
	};


public:
	class pred_terminator_5 : public Code {

	/*
	
	terminator(_17072,_17074,_17076,_17078,_17080,_17090):-terminal(_17082,_17074,_17076,_17078,_17080,terminator(_17082,_17072,_17090)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_terminator_5__1(Prolog* mach);
	};


public:
	class pred_opt_the_4 : public Code {

	/*
	
	opt_the(_17134,_17134,_17136,_17136,_17146):-call(_17146).
	opt_the(_17166,_17168,_17170,_17172,_17180):- ~(the,_17166,_17168,_17170,_17172,_17180).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_opt_the_4__1(Prolog* mach);
	static Operation* exec_pred_opt_the_4__2(Prolog* mach);
	};


public:
	class pred_conj_7 : public Code {

	/*
	
	conj(_17214,list,list,_17216,_17218,_17220,_17222,_17230):-terminal(',',_17216,_17218,_17220,_17222,_17230).
	conj(_17270,list,end,_17272,_17274,_17276,_17278,_17286):-terminal(_17270,_17272,_17274,_17276,_17278,conj(_17270,_17286)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_conj_7__1(Prolog* mach);
	static Operation* exec_pred_conj_7__2(Prolog* mach);
	};


public:
	class pred_loc_pred_5 : public Code {

	/*
	
	loc_pred(_17332,_17334,_17336,_17338,_17340,_17350):-terminal(_17342,_17334,_17336,_17338,_17340,loc_pred(_17342,_17332,_17350)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_loc_pred_5__1(Prolog* mach);
	};


public:
	class pred_$007E_5 : public Code {

	/*
	
	~(_17394,_17396,_17398,_17400,_17402,_17410):-terminal(_17394,_17396,_17398,_17400,_17402,~(_17394,_17410)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$007E_5__1(Prolog* mach);
	};


public:
	class pred_word_1 : public Code {

	/*
	
	word(_17452,_17460):- ~(_17452,_17460).
	word(_17480,_17488):-conj(_17480,_17488).
	word(_17508,_17516):-adverb(_17508,_17516).
	word(_17536,_17546):-sup_adj(_17536,_17538,_17546).
	word(_17568,_17578):-rel_adj(_17568,_17570,_17578).
	word(_17600,_17610):-adj(_17600,_17602,_17610).
	word(_17632,_17640):-name(_17632,_17640).
	word(_17660,_17670):-terminator(_17660,_17662,_17670).
	word(_17692,_17708):-pers_pron(_17692,_17694,_17696,_17698,_17700,_17708).
	word(_17736,_17750):-poss_pron(_17736,_17738,_17740,_17742,_17750).
	word(_17776,_17786):-rel_pron(_17776,_17778,_17786).
	word(_17808,_17822):-verb_form(_17808,_17810,_17812,_17814,_17822).
	word(_17848,_17860):-noun_form(_17848,_17850,_17852,_17860).
	word(_17884,_17892):-prep(_17884,_17892).
	word(_17912,_17924):-quantifier_pron(_17912,_17914,_17916,_17924).
	word(_17948,_17960):-number(_17948,_17950,_17952,_17960).
	word(_17984,_17998):-det(_17984,_17986,_17988,_17990,_17998).
	word(_18024,_18038):-int_art(_18024,_18026,_18028,_18030,_18038).
	word(_18064,_18074):-int_pron(_18064,_18066,_18074).
	word(_18096,_18106):-loc_pred(_18096,_18098,_18106).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_word_1__1(Prolog* mach);
	static Operation* exec_pred_word_1__2(Prolog* mach);
	static Operation* exec_pred_word_1__3(Prolog* mach);
	static Operation* exec_pred_word_1__4(Prolog* mach);
	static Operation* exec_pred_word_1__5(Prolog* mach);
	static Operation* exec_pred_word_1__6(Prolog* mach);
	static Operation* exec_pred_word_1__7(Prolog* mach);
	static Operation* exec_pred_word_1__8(Prolog* mach);
	static Operation* exec_pred_word_1__9(Prolog* mach);
	static Operation* exec_pred_word_1__10(Prolog* mach);
	static Operation* exec_pred_word_1__11(Prolog* mach);
	static Operation* exec_pred_word_1__12(Prolog* mach);
	static Operation* exec_pred_word_1__13(Prolog* mach);
	static Operation* exec_pred_word_1__14(Prolog* mach);
	static Operation* exec_pred_word_1__15(Prolog* mach);
	static Operation* exec_pred_word_1__16(Prolog* mach);
	static Operation* exec_pred_word_1__17(Prolog* mach);
	static Operation* exec_pred_word_1__18(Prolog* mach);
	static Operation* exec_pred_word_1__19(Prolog* mach);
	static Operation* exec_pred_word_1__20(Prolog* mach);
	};


public:
	class pred_$007E_1 : public Code {

	/*
	
	~(how,_18136):-call(_18136).
	~(whose,_18158):-call(_18158).
	~(there,_18180):-call(_18180).
	~(of,_18202):-call(_18202).
	~(~,_18224):-call(_18224).
	~(',',_18246):-call(_18246).
	~(s,_18268):-call(_18268).
	~(than,_18290):-call(_18290).
	~(at,_18312):-call(_18312).
	~(the,_18334):-call(_18334).
	~(not,_18356):-call(_18356).
	~(as,_18378):-call(_18378).
	~(that,_18400):-call(_18400).
	~(less,_18422):-call(_18422).
	~(more,_18444):-call(_18444).
	~(least,_18466):-call(_18466).
	~(most,_18488):-call(_18488).
	~(many,_18510):-call(_18510).
	~(where,_18532):-call(_18532).
	~(when,_18554):-call(_18554).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$007E_1__1(Prolog* mach);
	static Operation* exec_pred_$007E_1__2(Prolog* mach);
	static Operation* exec_pred_$007E_1__3(Prolog* mach);
	static Operation* exec_pred_$007E_1__4(Prolog* mach);
	static Operation* exec_pred_$007E_1__5(Prolog* mach);
	static Operation* exec_pred_$007E_1__6(Prolog* mach);
	static Operation* exec_pred_$007E_1__7(Prolog* mach);
	static Operation* exec_pred_$007E_1__8(Prolog* mach);
	static Operation* exec_pred_$007E_1__9(Prolog* mach);
	static Operation* exec_pred_$007E_1__10(Prolog* mach);
	static Operation* exec_pred_$007E_1__11(Prolog* mach);
	static Operation* exec_pred_$007E_1__12(Prolog* mach);
	static Operation* exec_pred_$007E_1__13(Prolog* mach);
	static Operation* exec_pred_$007E_1__14(Prolog* mach);
	static Operation* exec_pred_$007E_1__15(Prolog* mach);
	static Operation* exec_pred_$007E_1__16(Prolog* mach);
	static Operation* exec_pred_$007E_1__17(Prolog* mach);
	static Operation* exec_pred_$007E_1__18(Prolog* mach);
	static Operation* exec_pred_$007E_1__19(Prolog* mach);
	static Operation* exec_pred_$007E_1__20(Prolog* mach);
	};


public:
	class pred_conj_1 : public Code {

	/*
	
	conj(and,_18576):-call(_18576).
	conj(or,_18598):-call(_18598).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_conj_1__1(Prolog* mach);
	static Operation* exec_pred_conj_1__2(Prolog* mach);
	};


public:
	class pred_int_pron_2 : public Code {

	/*
	
	int_pron(what,undef,_18620):-call(_18620).
	int_pron(which,undef,_18644):-call(_18644).
	int_pron(who,subj,_18668):-call(_18668).
	int_pron(whom,compl,_18692):-call(_18692).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_int_pron_2__1(Prolog* mach);
	static Operation* exec_pred_int_pron_2__2(Prolog* mach);
	static Operation* exec_pred_int_pron_2__3(Prolog* mach);
	static Operation* exec_pred_int_pron_2__4(Prolog* mach);
	};


public:
	class pred_int_art_4 : public Code {

	/*
	
	int_art(what,_18710,_18712,int_det(_18710),_18722):-call(_18722).
	int_art(which,_18744,_18746,int_det(_18744),_18756):-call(_18756).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_int_art_4__1(Prolog* mach);
	static Operation* exec_pred_int_art_4__2(Prolog* mach);
	};


public:
	class pred_det_4 : public Code {

	/*
	
	det(the,_18778,the(_18778),def,_18788):-call(_18788).
	det(a,sin,a,indef,_18816):-call(_18816).
	det(an,sin,a,indef,_18844):-call(_18844).
	det(every,sin,every,indef,_18872):-call(_18872).
	det(some,_18892,some,indef,_18902):-call(_18902).
	det(any,_18922,any,indef,_18932):-call(_18932).
	det(all,plu,all,indef,_18960):-call(_18960).
	det(each,sin,each,indef,_18988):-call(_18988).
	det(no,_19008,no,indef,_19018):-call(_19018).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_det_4__1(Prolog* mach);
	static Operation* exec_pred_det_4__2(Prolog* mach);
	static Operation* exec_pred_det_4__3(Prolog* mach);
	static Operation* exec_pred_det_4__4(Prolog* mach);
	static Operation* exec_pred_det_4__5(Prolog* mach);
	static Operation* exec_pred_det_4__6(Prolog* mach);
	static Operation* exec_pred_det_4__7(Prolog* mach);
	static Operation* exec_pred_det_4__8(Prolog* mach);
	static Operation* exec_pred_det_4__9(Prolog* mach);
	};


public:
	class pred_number_3 : public Code {

	/*
	
	number(_19038,_19040,_19042,_19050):-tr_number(_19038,_19040,ag_number(_19040,_19042,_19050)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_number_3__1(Prolog* mach);
	};


public:
	class pred_tr_number_2 : public Code {

	/*
	
	tr_number(nb(_19086),_19086,_19096):-call(_19096).
	tr_number(one,1,_19120):-call(_19120).
	tr_number(two,2,_19144):-call(_19144).
	tr_number(three,3,_19168):-call(_19168).
	tr_number(four,4,_19192):-call(_19192).
	tr_number(five,5,_19216):-call(_19216).
	tr_number(six,6,_19240):-call(_19240).
	tr_number(seven,7,_19264):-call(_19264).
	tr_number(eight,8,_19288):-call(_19288).
	tr_number(nine,9,_19312):-call(_19312).
	tr_number(ten,10,_19336):-call(_19336).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_tr_number_2__1(Prolog* mach);
	static Operation* exec_pred_tr_number_2__2(Prolog* mach);
	static Operation* exec_pred_tr_number_2__3(Prolog* mach);
	static Operation* exec_pred_tr_number_2__4(Prolog* mach);
	static Operation* exec_pred_tr_number_2__5(Prolog* mach);
	static Operation* exec_pred_tr_number_2__6(Prolog* mach);
	static Operation* exec_pred_tr_number_2__7(Prolog* mach);
	static Operation* exec_pred_tr_number_2__8(Prolog* mach);
	static Operation* exec_pred_tr_number_2__9(Prolog* mach);
	static Operation* exec_pred_tr_number_2__10(Prolog* mach);
	static Operation* exec_pred_tr_number_2__11(Prolog* mach);
	};


public:
	class pred_ag_number_2 : public Code {

	/*
	
	ag_number(1,sin,_19360):-call(_19360).
	ag_number(_19376,plu,_19384):-smallerthan(1,_19376,_19384).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_ag_number_2__1(Prolog* mach);
	static Operation* exec_pred_ag_number_2__2(Prolog* mach);
	};


public:
	class pred_quantifier_pron_3 : public Code {

	/*
	
	quantifier_pron(everybody,every,person,_19416):-call(_19416).
	quantifier_pron(everyone,every,person,_19442):-call(_19442).
	quantifier_pron(everything,every,thing,_19468):-call(_19468).
	quantifier_pron(somebody,some,person,_19494):-call(_19494).
	quantifier_pron(someone,some,person,_19520):-call(_19520).
	quantifier_pron(something,some,thing,_19546):-call(_19546).
	quantifier_pron(anybody,any,person,_19572):-call(_19572).
	quantifier_pron(anyone,any,person,_19598):-call(_19598).
	quantifier_pron(anything,any,thing,_19624):-call(_19624).
	quantifier_pron(nobody,no,person,_19650):-call(_19650).
	quantifier_pron(nothing,no,thing,_19676):-call(_19676).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__1(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__2(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__3(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__4(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__5(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__6(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__7(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__8(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__9(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__10(Prolog* mach);
	static Operation* exec_pred_quantifier_pron_3__11(Prolog* mach);
	};


public:
	class pred_prep_1 : public Code {

	/*
	
	prep(as,_19702):-call(_19702).
	prep(at,_19724):-call(_19724).
	prep(of,_19746):-call(_19746).
	prep(to,_19768):-call(_19768).
	prep(by,_19790):-call(_19790).
	prep(with,_19812):-call(_19812).
	prep(in,_19834):-call(_19834).
	prep(on,_19856):-call(_19856).
	prep(from,_19878):-call(_19878).
	prep(into,_19900):-call(_19900).
	prep(through,_19922):-call(_19922).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_prep_1__1(Prolog* mach);
	static Operation* exec_pred_prep_1__2(Prolog* mach);
	static Operation* exec_pred_prep_1__3(Prolog* mach);
	static Operation* exec_pred_prep_1__4(Prolog* mach);
	static Operation* exec_pred_prep_1__5(Prolog* mach);
	static Operation* exec_pred_prep_1__6(Prolog* mach);
	static Operation* exec_pred_prep_1__7(Prolog* mach);
	static Operation* exec_pred_prep_1__8(Prolog* mach);
	static Operation* exec_pred_prep_1__9(Prolog* mach);
	static Operation* exec_pred_prep_1__10(Prolog* mach);
	static Operation* exec_pred_prep_1__11(Prolog* mach);
	};


public:
	class pred_noun_form_3 : public Code {

	/*
	
	noun_form(_19936,_19938,plu,_19946):-noun_plu(_19936,_19938,_19946).
	noun_form(_19972,_19972,sin,_19980):-noun_sin(_19972,_19980).
	noun_form(proportion,proportion,_20004,_20014):-call(_20014).
	noun_form(percentage,percentage,_20032,_20042):-call(_20042).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_noun_form_3__1(Prolog* mach);
	static Operation* exec_pred_noun_form_3__2(Prolog* mach);
	static Operation* exec_pred_noun_form_3__3(Prolog* mach);
	static Operation* exec_pred_noun_form_3__4(Prolog* mach);
	};


public:
	class pred_root_form_1 : public Code {

	/*
	
	root_form(1+sin,_20074):-call(_20074).
	root_form(2+_20092,_20102):-call(_20102).
	root_form(1+plu,_20130):-call(_20130).
	root_form(3+plu,_20158):-call(_20158).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_root_form_1__1(Prolog* mach);
	static Operation* exec_pred_root_form_1__2(Prolog* mach);
	static Operation* exec_pred_root_form_1__3(Prolog* mach);
	static Operation* exec_pred_root_form_1__4(Prolog* mach);
	};


public:
	class pred_verb_root_1 : public Code {

	/*
	
	verb_root(be,_20180):-call(_20180).
	verb_root(have,_20202):-call(_20202).
	verb_root(do,_20224):-call(_20224).
	verb_root(border,_20246):-call(_20246).
	verb_root(contain,_20268):-call(_20268).
	verb_root(drain,_20290):-call(_20290).
	verb_root(exceed,_20312):-call(_20312).
	verb_root(flow,_20334):-call(_20334).
	verb_root(rise,_20356):-call(_20356).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_root_1__1(Prolog* mach);
	static Operation* exec_pred_verb_root_1__2(Prolog* mach);
	static Operation* exec_pred_verb_root_1__3(Prolog* mach);
	static Operation* exec_pred_verb_root_1__4(Prolog* mach);
	static Operation* exec_pred_verb_root_1__5(Prolog* mach);
	static Operation* exec_pred_verb_root_1__6(Prolog* mach);
	static Operation* exec_pred_verb_root_1__7(Prolog* mach);
	static Operation* exec_pred_verb_root_1__8(Prolog* mach);
	static Operation* exec_pred_verb_root_1__9(Prolog* mach);
	};


public:
	class pred_regular_pres_1 : public Code {

	/*
	
	regular_pres(have,_20378):-call(_20378).
	regular_pres(do,_20400):-call(_20400).
	regular_pres(rise,_20422):-call(_20422).
	regular_pres(border,_20444):-call(_20444).
	regular_pres(contain,_20466):-call(_20466).
	regular_pres(drain,_20488):-call(_20488).
	regular_pres(exceed,_20510):-call(_20510).
	regular_pres(flow,_20532):-call(_20532).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__1(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__2(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__3(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__4(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__5(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__6(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__7(Prolog* mach);
	static Operation* exec_pred_regular_pres_1__8(Prolog* mach);
	};


public:
	class pred_regular_past_2 : public Code {

	/*
	
	regular_past(had,have,_20554):-call(_20554).
	regular_past(bordered,border,_20578):-call(_20578).
	regular_past(contained,contain,_20602):-call(_20602).
	regular_past(drained,drain,_20626):-call(_20626).
	regular_past(exceeded,exceed,_20650):-call(_20650).
	regular_past(flowed,flow,_20674):-call(_20674).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_regular_past_2__1(Prolog* mach);
	static Operation* exec_pred_regular_past_2__2(Prolog* mach);
	static Operation* exec_pred_regular_past_2__3(Prolog* mach);
	static Operation* exec_pred_regular_past_2__4(Prolog* mach);
	static Operation* exec_pred_regular_past_2__5(Prolog* mach);
	static Operation* exec_pred_regular_past_2__6(Prolog* mach);
	};


public:
	class pred_rel_pron_2 : public Code {

	/*
	
	rel_pron(who,subj,_20698):-call(_20698).
	rel_pron(whom,compl,_20722):-call(_20722).
	rel_pron(which,undef,_20746):-call(_20746).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rel_pron_2__1(Prolog* mach);
	static Operation* exec_pred_rel_pron_2__2(Prolog* mach);
	static Operation* exec_pred_rel_pron_2__3(Prolog* mach);
	};


public:
	class pred_poss_pron_4 : public Code {

	/*
	
	poss_pron(my,_20762,1,sin,_20772):-call(_20772).
	poss_pron(your,_20792,2,_20794,_20804):-call(_20804).
	poss_pron(his,masc,3,sin,_20832):-call(_20832).
	poss_pron(her,fem,3,sin,_20860):-call(_20860).
	poss_pron(its,neut,3,sin,_20888):-call(_20888).
	poss_pron(our,_20908,1,plu,_20918):-call(_20918).
	poss_pron(their,_20938,3,plu,_20948):-call(_20948).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_poss_pron_4__1(Prolog* mach);
	static Operation* exec_pred_poss_pron_4__2(Prolog* mach);
	static Operation* exec_pred_poss_pron_4__3(Prolog* mach);
	static Operation* exec_pred_poss_pron_4__4(Prolog* mach);
	static Operation* exec_pred_poss_pron_4__5(Prolog* mach);
	static Operation* exec_pred_poss_pron_4__6(Prolog* mach);
	static Operation* exec_pred_poss_pron_4__7(Prolog* mach);
	};


public:
	class pred_pers_pron_5 : public Code {

	/*
	
	pers_pron(i,_20968,1,sin,subj,_20978):-call(_20978).
	pers_pron(you,_21000,2,_21002,_21004,_21014):-call(_21014).
	pers_pron(he,masc,3,sin,subj,_21044):-call(_21044).
	pers_pron(she,fem,3,sin,subj,_21074):-call(_21074).
	pers_pron(it,neut,3,sin,_21096,_21106):-call(_21106).
	pers_pron(we,_21128,1,plu,subj,_21138):-call(_21138).
	pers_pron(them,_21160,3,plu,subj,_21170):-call(_21170).
	pers_pron(me,_21196,1,sin,compl(_21194),_21206):-call(_21206).
	pers_pron(him,masc,3,sin,compl(_21230),_21240):-call(_21240).
	pers_pron(her,fem,3,sin,compl(_21264),_21274):-call(_21274).
	pers_pron(us,_21300,1,plu,compl(_21298),_21310):-call(_21310).
	pers_pron(them,_21336,3,plu,compl(_21334),_21346):-call(_21346).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__1(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__2(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__3(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__4(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__5(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__6(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__7(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__8(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__9(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__10(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__11(Prolog* mach);
	static Operation* exec_pred_pers_pron_5__12(Prolog* mach);
	};


public:
	class pred_terminator_2 : public Code {

	/*
	
	terminator('.',_21368,_21378):-call(_21378).
	terminator(?,?,_21402):-call(_21402).
	terminator(!,!,_21426):-call(_21426).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_terminator_2__1(Prolog* mach);
	static Operation* exec_pred_terminator_2__2(Prolog* mach);
	static Operation* exec_pred_terminator_2__3(Prolog* mach);
	};


public:
	class pred_name_1 : public Code {

	/*
	
	name(_21442,_21452):-call(_21452).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_name_1__1(Prolog* mach);
	};


public:
	class pred_loc_pred_2 : public Code {

	/*
	
	loc_pred(east,prep(eastof),_21478):-call(_21478).
	loc_pred(west,prep(westof),_21506):-call(_21506).
	loc_pred(north,prep(northof),_21534):-call(_21534).
	loc_pred(south,prep(southof),_21562):-call(_21562).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_loc_pred_2__1(Prolog* mach);
	static Operation* exec_pred_loc_pred_2__2(Prolog* mach);
	static Operation* exec_pred_loc_pred_2__3(Prolog* mach);
	static Operation* exec_pred_loc_pred_2__4(Prolog* mach);
	};


public:
	class pred_adj_2 : public Code {

	/*
	
	adj(minimum,restr,_21586):-call(_21586).
	adj(maximum,restr,_21610):-call(_21610).
	adj(average,restr,_21634):-call(_21634).
	adj(total,restr,_21658):-call(_21658).
	adj(african,restr,_21682):-call(_21682).
	adj(american,restr,_21706):-call(_21706).
	adj(asian,restr,_21730):-call(_21730).
	adj(european,restr,_21754):-call(_21754).
	adj(great,quant,_21778):-call(_21778).
	adj(big,quant,_21802):-call(_21802).
	adj(small,quant,_21826):-call(_21826).
	adj(large,quant,_21850):-call(_21850).
	adj(old,quant,_21874):-call(_21874).
	adj(new,quant,_21898):-call(_21898).
	adj(populous,quant,_21922):-call(_21922).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adj_2__1(Prolog* mach);
	static Operation* exec_pred_adj_2__2(Prolog* mach);
	static Operation* exec_pred_adj_2__3(Prolog* mach);
	static Operation* exec_pred_adj_2__4(Prolog* mach);
	static Operation* exec_pred_adj_2__5(Prolog* mach);
	static Operation* exec_pred_adj_2__6(Prolog* mach);
	static Operation* exec_pred_adj_2__7(Prolog* mach);
	static Operation* exec_pred_adj_2__8(Prolog* mach);
	static Operation* exec_pred_adj_2__9(Prolog* mach);
	static Operation* exec_pred_adj_2__10(Prolog* mach);
	static Operation* exec_pred_adj_2__11(Prolog* mach);
	static Operation* exec_pred_adj_2__12(Prolog* mach);
	static Operation* exec_pred_adj_2__13(Prolog* mach);
	static Operation* exec_pred_adj_2__14(Prolog* mach);
	static Operation* exec_pred_adj_2__15(Prolog* mach);
	};


public:
	class pred_rel_adj_2 : public Code {

	/*
	
	rel_adj(greater,great,_21946):-call(_21946).
	rel_adj(less,small,_21970):-call(_21970).
	rel_adj(bigger,big,_21994):-call(_21994).
	rel_adj(smaller,small,_22018):-call(_22018).
	rel_adj(larger,large,_22042):-call(_22042).
	rel_adj(older,old,_22066):-call(_22066).
	rel_adj(newer,new,_22090):-call(_22090).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_rel_adj_2__1(Prolog* mach);
	static Operation* exec_pred_rel_adj_2__2(Prolog* mach);
	static Operation* exec_pred_rel_adj_2__3(Prolog* mach);
	static Operation* exec_pred_rel_adj_2__4(Prolog* mach);
	static Operation* exec_pred_rel_adj_2__5(Prolog* mach);
	static Operation* exec_pred_rel_adj_2__6(Prolog* mach);
	static Operation* exec_pred_rel_adj_2__7(Prolog* mach);
	};


public:
	class pred_sup_adj_2 : public Code {

	/*
	
	sup_adj(biggest,big,_22114):-call(_22114).
	sup_adj(smallest,small,_22138):-call(_22138).
	sup_adj(largest,large,_22162):-call(_22162).
	sup_adj(oldest,old,_22186):-call(_22186).
	sup_adj(newest,new,_22210):-call(_22210).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sup_adj_2__1(Prolog* mach);
	static Operation* exec_pred_sup_adj_2__2(Prolog* mach);
	static Operation* exec_pred_sup_adj_2__3(Prolog* mach);
	static Operation* exec_pred_sup_adj_2__4(Prolog* mach);
	static Operation* exec_pred_sup_adj_2__5(Prolog* mach);
	};


public:
	class pred_noun_sin_1 : public Code {

	/*
	
	noun_sin(average,_22234):-call(_22234).
	noun_sin(total,_22256):-call(_22256).
	noun_sin(sum,_22278):-call(_22278).
	noun_sin(degree,_22300):-call(_22300).
	noun_sin(sqmile,_22322):-call(_22322).
	noun_sin(ksqmile,_22344):-call(_22344).
	noun_sin(thousand,_22366):-call(_22366).
	noun_sin(million,_22388):-call(_22388).
	noun_sin(time,_22410):-call(_22410).
	noun_sin(place,_22432):-call(_22432).
	noun_sin(area,_22454):-call(_22454).
	noun_sin(capital,_22476):-call(_22476).
	noun_sin(city,_22498):-call(_22498).
	noun_sin(continent,_22520):-call(_22520).
	noun_sin(country,_22542):-call(_22542).
	noun_sin(latitude,_22564):-call(_22564).
	noun_sin(longitude,_22586):-call(_22586).
	noun_sin(ocean,_22608):-call(_22608).
	noun_sin(person,_22630):-call(_22630).
	noun_sin(population,_22652):-call(_22652).
	noun_sin(region,_22674):-call(_22674).
	noun_sin(river,_22696):-call(_22696).
	noun_sin(sea,_22718):-call(_22718).
	noun_sin(seamass,_22740):-call(_22740).
	noun_sin(number,_22762):-call(_22762).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__1(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__2(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__3(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__4(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__5(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__6(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__7(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__8(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__9(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__10(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__11(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__12(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__13(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__14(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__15(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__16(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__17(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__18(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__19(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__20(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__21(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__22(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__23(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__24(Prolog* mach);
	static Operation* exec_pred_noun_sin_1__25(Prolog* mach);
	};


public:
	class pred_noun_plu_2 : public Code {

	/*
	
	noun_plu(averages,average,_22784):-call(_22784).
	noun_plu(totals,total,_22808):-call(_22808).
	noun_plu(sums,sum,_22832):-call(_22832).
	noun_plu(degrees,degree,_22856):-call(_22856).
	noun_plu(sqmiles,sqmile,_22880):-call(_22880).
	noun_plu(ksqmiles,ksqmile,_22904):-call(_22904).
	noun_plu(million,million,_22928):-call(_22928).
	noun_plu(thousand,thousand,_22952):-call(_22952).
	noun_plu(times,time,_22976):-call(_22976).
	noun_plu(places,place,_23000):-call(_23000).
	noun_plu(areas,area,_23024):-call(_23024).
	noun_plu(capitals,capital,_23048):-call(_23048).
	noun_plu(cities,city,_23072):-call(_23072).
	noun_plu(continents,continent,_23096):-call(_23096).
	noun_plu(countries,country,_23120):-call(_23120).
	noun_plu(latitudes,latitude,_23144):-call(_23144).
	noun_plu(longitudes,longitude,_23168):-call(_23168).
	noun_plu(oceans,ocean,_23192):-call(_23192).
	noun_plu(persons,person,_23216):-call(_23216).
	noun_plu(people,person,_23240):-call(_23240).
	noun_plu(populations,population,_23264):-call(_23264).
	noun_plu(regions,region,_23288):-call(_23288).
	noun_plu(rivers,river,_23312):-call(_23312).
	noun_plu(seas,sea,_23336):-call(_23336).
	noun_plu(seamasses,seamass,_23360):-call(_23360).
	noun_plu(numbers,number,_23384):-call(_23384).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__1(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__2(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__3(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__4(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__5(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__6(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__7(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__8(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__9(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__10(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__11(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__12(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__13(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__14(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__15(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__16(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__17(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__18(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__19(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__20(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__21(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__22(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__23(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__24(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__25(Prolog* mach);
	static Operation* exec_pred_noun_plu_2__26(Prolog* mach);
	};


public:
	class pred_verb_form_4 : public Code {

	/*
	
	verb_form(_23400,_23400,inf,_23402,_23410):-verb_root(_23400,_23410).
	verb_form(_23442,_23442,pres+fin,_23444,_23452):-regular_pres(_23442,root_form(_23444,verb_root(_23442,_23452))).
	verb_form(_23496,_23498,past+_23494,_23500,_23508):-regular_past(_23496,_23498,_23508).
	verb_form(am,be,pres+fin,1+sin,_23556):-call(_23556).
	verb_form(are,be,pres+fin,2+sin,_23596):-call(_23596).
	verb_form(is,be,pres+fin,3+sin,_23636):-call(_23636).
	verb_form(are,be,pres+fin,_23664+plu,_23676):-call(_23676).
	verb_form(was,be,past+fin,1+sin,_23716):-call(_23716).
	verb_form(were,be,past+fin,2+sin,_23756):-call(_23756).
	verb_form(was,be,past+fin,3+sin,_23796):-call(_23796).
	verb_form(were,be,past+fin,_23824+plu,_23836):-call(_23836).
	verb_form(been,be,past+part,_23862,_23872):-call(_23872).
	verb_form(being,be,pres+part,_23898,_23908):-call(_23908).
	verb_form(has,have,pres+fin,3+sin,_23948):-call(_23948).
	verb_form(having,have,pres+part,_23974,_23984):-call(_23984).
	verb_form(does,do,pres+fin,3+sin,_24024):-call(_24024).
	verb_form(did,do,past+fin,_24050,_24060):-call(_24060).
	verb_form(doing,do,pres+part,_24086,_24096):-call(_24096).
	verb_form(done,do,past+part,_24122,_24132):-call(_24132).
	verb_form(flows,flow,pres+fin,3+sin,_24172):-call(_24172).
	verb_form(flowing,flow,pres+part,_24198,_24208):-call(_24208).
	verb_form(rises,rise,pres+fin,3+sin,_24248):-call(_24248).
	verb_form(rose,rise,past+fin,_24274,_24284):-call(_24284).
	verb_form(risen,rise,past+part,_24310,_24320):-call(_24320).
	verb_form(borders,border,pres+fin,3+sin,_24360):-call(_24360).
	verb_form(bordering,border,pres+part,_24386,_24396):-call(_24396).
	verb_form(contains,contain,pres+fin,3+sin,_24436):-call(_24436).
	verb_form(containing,contain,pres+part,_24462,_24472):-call(_24472).
	verb_form(drains,drain,pres+fin,3+sin,_24512):-call(_24512).
	verb_form(draining,drain,pres+part,_24538,_24548):-call(_24548).
	verb_form(exceeds,exceed,pres+fin,3+sin,_24588):-call(_24588).
	verb_form(exceeding,exceed,pres+part,_24614,_24624):-call(_24624).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_form_4__1(Prolog* mach);
	static Operation* exec_pred_verb_form_4__2(Prolog* mach);
	static Operation* exec_pred_verb_form_4__3(Prolog* mach);
	static Operation* exec_pred_verb_form_4__4(Prolog* mach);
	static Operation* exec_pred_verb_form_4__5(Prolog* mach);
	static Operation* exec_pred_verb_form_4__6(Prolog* mach);
	static Operation* exec_pred_verb_form_4__7(Prolog* mach);
	static Operation* exec_pred_verb_form_4__8(Prolog* mach);
	static Operation* exec_pred_verb_form_4__9(Prolog* mach);
	static Operation* exec_pred_verb_form_4__10(Prolog* mach);
	static Operation* exec_pred_verb_form_4__11(Prolog* mach);
	static Operation* exec_pred_verb_form_4__12(Prolog* mach);
	static Operation* exec_pred_verb_form_4__13(Prolog* mach);
	static Operation* exec_pred_verb_form_4__14(Prolog* mach);
	static Operation* exec_pred_verb_form_4__15(Prolog* mach);
	static Operation* exec_pred_verb_form_4__16(Prolog* mach);
	static Operation* exec_pred_verb_form_4__17(Prolog* mach);
	static Operation* exec_pred_verb_form_4__18(Prolog* mach);
	static Operation* exec_pred_verb_form_4__19(Prolog* mach);
	static Operation* exec_pred_verb_form_4__20(Prolog* mach);
	static Operation* exec_pred_verb_form_4__21(Prolog* mach);
	static Operation* exec_pred_verb_form_4__22(Prolog* mach);
	static Operation* exec_pred_verb_form_4__23(Prolog* mach);
	static Operation* exec_pred_verb_form_4__24(Prolog* mach);
	static Operation* exec_pred_verb_form_4__25(Prolog* mach);
	static Operation* exec_pred_verb_form_4__26(Prolog* mach);
	static Operation* exec_pred_verb_form_4__27(Prolog* mach);
	static Operation* exec_pred_verb_form_4__28(Prolog* mach);
	static Operation* exec_pred_verb_form_4__29(Prolog* mach);
	static Operation* exec_pred_verb_form_4__30(Prolog* mach);
	static Operation* exec_pred_verb_form_4__31(Prolog* mach);
	static Operation* exec_pred_verb_form_4__32(Prolog* mach);
	};


public:
	class pred_verb_type_2 : public Code {

	/*
	
	verb_type(have,aux+have,_24658):-call(_24658).
	verb_type(be,aux+be,_24688):-call(_24688).
	verb_type(do,aux+ditrans,_24718):-call(_24718).
	verb_type(rise,main+intrans,_24748):-call(_24748).
	verb_type(border,main+trans,_24778):-call(_24778).
	verb_type(contain,main+trans,_24808):-call(_24808).
	verb_type(drain,main+intrans,_24838):-call(_24838).
	verb_type(exceed,main+trans,_24868):-call(_24868).
	verb_type(flow,main+intrans,_24898):-call(_24898).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_verb_type_2__1(Prolog* mach);
	static Operation* exec_pred_verb_type_2__2(Prolog* mach);
	static Operation* exec_pred_verb_type_2__3(Prolog* mach);
	static Operation* exec_pred_verb_type_2__4(Prolog* mach);
	static Operation* exec_pred_verb_type_2__5(Prolog* mach);
	static Operation* exec_pred_verb_type_2__6(Prolog* mach);
	static Operation* exec_pred_verb_type_2__7(Prolog* mach);
	static Operation* exec_pred_verb_type_2__8(Prolog* mach);
	static Operation* exec_pred_verb_type_2__9(Prolog* mach);
	};


public:
	class pred_adverb_1 : public Code {

	/*
	
	adverb(yesterday,_24922):-call(_24922).
	adverb(tomorrow,_24944):-call(_24944).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_adverb_1__1(Prolog* mach);
	static Operation* exec_pred_adverb_1__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef CHAT_PARSER
