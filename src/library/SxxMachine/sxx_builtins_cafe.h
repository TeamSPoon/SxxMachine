#ifndef SXX_BUILTINS_CAFE
#define SXX_BUILTINS_CAFE

#include "../../machine/SxxMachine/Code.h"
#include <vector>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace SxxMachine { class Const; }
namespace SxxMachine { class Int; }
namespace SxxMachine { class Operation; }
namespace SxxMachine { class Prolog; }

namespace SxxMachine {
	using namespace SxxMachine;
	using pred_or_2 = SxxMachine::sxx_meta::pred_or_2;

	class sxx_builtins_cafe {
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
	static Const* const  s15;
	static Const* const  s16;
	static Const* const  s17;
	static Const* const  s18;
	static Const* const  s19;
	static Const* const  s20;
	static Const* const  s21;
	static Const* const  s22;
	static Const* const  s23;
	static Const* const  s24;
	static Const* const  s25;
	static Const* const  s26;
	static Const* const  s27;
	static Const* const  s28;
	static Const* const  s29;
	static Const* const  s30;
	static Const* const  s31;
	static Const* const  s32;
	static Const* const  s33;
	static Const* const  s34;
	static Const* const  s35;
	static Const* const  s36;
	static Const* const  s37;
	static Const* const  s38;
	static Const* const  s39;
	static Const* const  s40;
	static Const* const  s41;
	static Const* const  s42;
	static Const* const  s43;
	static Const* const  s44;
	static Const* const  s45;
	static Const* const  s46;
	static Const* const  s47;
	static Const* const  s48;
	static Const* const  s49;
	static Const* const  s50;
	static Const* const  s51;
	static Const* const  s52;
	static Const* const  s53;
	static Const* const  s54;
	static Const* const  s55;
	static Const* const  s56;
	static Const* const  s57;
	static Const* const  s58;
	static Const* const  s59;
	static Const* const  s60;
	static Const* const  s61;
	static Const* const  s62;
	static Const* const  s63;
	static Const* const  s64;
	static Const* const  s65;
	static Const* const  s66;
	static Const* const  s67;
	static Const* const  s68;
	static Const* const  s69;
	static Const* const  s70;
	static Const* const  s71;
	static Const* const  s72;
	static Const* const  s73;
	static Const* const  s74;
	static Const* const  s75;
	static Const* const  s76;
	static Const* const  s77;
	static Const* const  s78;
	static Const* const  s79;
	static Const* const  s80;
	static Const* const  s81;
	static Const* const  s82;
	static Const* const  s83;
	static Const* const  s84;
	static Const* const  s85;
	static Const* const  s86;
	static Const* const  s87;
	static Const* const  s88;
	static Const* const  s89;
	static Const* const  s90;
	static Const* const  s91;
	static Const* const  s92;
	static Const* const  s93;
	static Const* const  s94;
	static Const* const  s95;
	static Const* const  s96;
	static Const* const  s97;
	static Const* const  s98;
	static Const* const  s99;
	static Const* const  s100;
	static Const* const  s101;
	static Const* const  s102;
	static Const* const  s103;
	static Const* const  s104;
	static Const* const  s105;
	static Const* const  s106;
	static Const* const  s107;
	static Const* const  s108;
	static Const* const  s109;
	static Const* const  s110;
	static Const* const  s111;
	static Const* const  s112;
	static Const* const  s113;
	static Const* const  s114;
	static Const* const  s115;
	static Const* const  s116;
	static Const* const  s117;
	static Const* const  s118;
	static Const* const  s119;
	static Const* const  s120;
	static Const* const  s121;
	static Const* const  s122;
	static Const* const  s123;
	static Const* const  s124;
	static Const* const  s125;
	static Const* const  s126;
	static Const* const  s127;
	static Const* const  s128;
	static Const* const  s129;
	static Const* const  s130;
	static Const* const  s131;
	static Const* const  s132;
	static Const* const  s133;
	static Const* const  s134;
	static Const* const  s135;
	static Const* const  s136;
	static Const* const  s137;
	static Const* const  s138;
	static Const* const  s139;
	static Const* const  s140;
	static Const* const  s141;
	static Const* const  s142;
	static Const* const  s143;
	static Const* const  s144;
	static Const* const  s145;
	static Const* const  s146;
	static Const* const  s147;
	static Const* const  s148;
	static Const* const  s149;
	static Const* const  s150;
	static Const* const  s151;
	static Const* const  s152;
	static Const* const  s153;
	static Const* const  s154;
	static Const* const  s155;
	static Const* const  s156;
	static Const* const  s157;
	static Const* const  s158;
	static Const* const  s159;
	static Const* const  s160;
	static Const* const  s161;
	static Const* const  s162;
	static Const* const  s163;
	static Const* const  s164;
	static Const* const  s165;
	static Const* const  s166;
	static Const* const  s167;
	static Const* const  s168;
	static Const* const  s169;
	static Const* const  s170;
	static Const* const  s171;
	static Const* const  s172;
	static Const* const  s173;
	static Const* const  s174;
	static Const* const  s175;
	static Const* const  s176;
	static Const* const  s177;
	static Const* const  s178;
	static Const* const  s179;
	static Const* const  s180;
	static Const* const  s181;
	static Const* const  s182;
	static Const* const  s183;
	static Const* const  s184;
	static Const* const  s185;
	static Const* const  s186;
	static Const* const  s187;
	static Const* const  s188;
	static Const* const  s189;
	static Const* const  s190;
	static Const* const  s191;
	static Const* const  s192;
	static Const* const  s193;
	static Const* const  s194;
	static Const* const  s195;
	static Const* const  s196;
	static Const* const  s197;
	static Const* const  s198;
	static Const* const  s199;
	static Const* const  s200;
	static Const* const  s201;
	static Const* const  s202;
	static Const* const  s203;
	static Const* const  s204;
	static Const* const  s205;
	static Const* const  s206;
	static Const* const  s207;
	static Const* const  s208;
	static Const* const  s209;
	static Const* const  s210;
	static Const* const  s211;
	static Const* const  s212;
	static Const* const  s213;
	static Const* const  s214;
	static Const* const  s215;
	static Const* const  s216;
	static Const* const  s217;
	static Const* const  s218;
	static Const* const  s219;
	static Const* const  s220;
	static Const* const  s221;
	static Const* const  s222;
	static Const* const  s223;
	static Const* const  s224;
	static Const* const  s225;
	static Const* const  s226;
	static Const* const  s227;
	static Const* const  s228;
	static Const* const  s229;
	static Const* const  s230;
	static Const* const  s231;
	static Const* const  s232;
	static Const* const  s233;
	static Const* const  s234;
	static Const* const  s235;
	static Const* const  s236;
	static Const* const  s237;
	static Const* const  s238;
	static Const* const  s239;
	static Const* const  s240;
	static Const* const  s241;
	static Const* const  s242;
	static Const* const  s243;
	static Const* const  s244;
	static Const* const  s245;
	static Const* const  s246;
	static Const* const  s247;
	static Const* const  s248;
	static Const* const  s249;
	static Const* const  s250;
	static Const* const  s251;
	static Const* const  s252;
	static Const* const  s253;
	static Const* const  s254;
	static Const* const  s255;
	static Const* const  s256;
	static Const* const  s257;
	static Const* const  s258;
	static Const* const  s259;
	static Const* const  s260;
	static Const* const  s261;
	static Const* const  s262;
	static Const* const  s263;
	static Const* const  s264;
	static Const* const  s265;
	static Const* const  s266;
	static Const* const  s267;
	static Const* const  s268;
	static Const* const  s269;
	static Const* const  s270;
	static Const* const  s271;
	static Const* const  s272;
	static Const* const  s273;
	static Const* const  s274;
	static Const* const  s275;
	static Const* const  s276;
	static Const* const  s277;
	static Const* const  s278;
	static Const* const  s279;
	static Const* const  s280;
	static Const* const  s281;
	static Const* const  s282;
	static Const* const  s283;
	static Const* const  s284;
	static Const* const  s285;
	static Const* const  s286;
	static Const* const  s287;
	static Const* const  s288;
	static Const* const  s289;
	static Const* const  s290;
	static Const* const  s291;
	static Const* const  s292;
	static Const* const  s293;
	static Const* const  s294;
	static Const* const  s295;
	static Const* const  s296;
	static Const* const  s297;
	static Const* const  s298;
	static Const* const  s299;
	static Const* const  s300;
	static Const* const  s301;
	static Const* const  s302;
	static Const* const  s_C;
	static Const* const  s304;
	static Const* const  s305;
	static Const* const  s306;
	static Const* const  s307;
	static Const* const  s308;
	static Const* const  s309;
	static Const* const  s310;
	static Const* const  s311;
	static Const* const  s312;
	static Const* const  s313;
	static Const* const  s314;
	static Const* const  s315;
	static Const* const  s316;
	static Const* const  s__;
	static Const* const  s_a;
	static Const* const  s319;
	static Const* const  s_abolish;
	static Const* const  s_abort;
	static Const* const  s_access;
	static Const* const  s_added;
	static Const* const  s_after;
	static Const* const  s_alias;
	static Const* const  s_all;
	static Const* const  s_alpha;
	static Const* const  s_already;
	static Const* const  s_an;
	static Const* const  s_arg;
	static Const* const  s_arithequal;
	static Const* const  s_assert;
	static Const* const  s_asserta;
	static Const* const  s_assertz;
	static Const* const  s_atom;
	static Const* const  s_atom_codes;
	static Const* const  s_atom_concat;
	static Const* const  s_atom_length;
	static Const* const  s_atomic;
	static Const* const  s_bagof;
	static Const* const  s_block;
	static Const* const  s_builtin_java_convert_args;
	static Const* const  s_bye;
	static Const* const  s_byte;
	static Const* const  s345;
	static Const* const  s_cafeteria;
	static Const* const  s_call;
	static Const* const  s_callable;
	static Const* const  s_cannot;
	static Const* const  s_catch;
	static Const* const  s_changeable;
	static Const* const  s_char;
	static Const* const  s_character;
	static Const* const  s_chars;
	static Const* const  s_choice;
	static Const* const  s_clause;
	static Const* const  s_close;
	static Const* const  s_closure;
	static Const* const  s_codes;
	static Const* const  s360;
	static Const* const  s_compare;
	static Const* const  s_compound;
	static Const* const  s_constant;
	static Const* const  s_consult;
	static Const* const  s_consult_stream;
	static Const* const  s_consulted;
	static Const* const  s_consulting;
	static Const* const  s_context;
	static Const* const  s_copy_term;
	static Const* const  s_current_input;
	static Const* const  s_current_op;
	static Const* const  s_current_output;
	static Const* const  s_current_prolog_flag;
	static Const* const  s_database;
	static Const* const  s_debug;
	static Const* const  s_domain;
	static Const* const  s_domain_error;
	static Const* const  s_double_quotes;
	static Const* const  s_dynamic;
	static Const* const  s_end_of_file;
	static Const* const  s_error;
	static Const* const  s_evaluation;
	static Const* const  s_evaluation_error;
	static Const* const  s_existence;
	static Const* const  s_existence_error;
	static Const* const  s_exit;
	static Const* const  s_expand_term;
	static Const* const  s_expected;
	static Const* const  s_expression;
	static Const* const  s_fail;
	static Const* const  s_false;
	static Const* const  s_file_name;
	static Const* const  s_findall;
	static Const* const  s_flag;
	static Const* const  s_flag_value;
	static Const* const  s_float;
	static Const* const  s_flush_output;
	static Const* const  s_for;
	static Const* const  s_freeze;
	static Const* const  s_functor;
	static Const* const  s_fx;
	static Const* const  s_fy;
	static Const* const  s_get;
	static Const* const  s_get0;
	static Const* const  s_get_byte;
	static Const* const  s_get_char;
	static Const* const  s_get_code;
	static Const* const  s_ground;
	static Const* const  s410;
	static Const* const  s_halt;
	static Const* const  s_hash;
	static Const* const  s_hash_contains_key;
	static Const* const  s_hash_exists;
	static Const* const  s_hash_get;
	static Const* const  s_hash_keys;
	static Const* const  s_hash_map;
	static Const* const  s_hash_or_alias;
	static Const* const  s_hash_put;
	static Const* const  s_hash_remove;
	static Const* const  s_if;
	static Const* const  s_ifdef;
	static Const* const  s_ifndef;
	static Const* const  s_ignore_ops;
	static Const* const  s_illarg;
	static Const* const  s_import;
	static Const* const  s_in_byte;
	static Const* const  s_in_character;
	static Const* const  s_include;
	static Const* const  s_include_resource;
	static Const* const  s_infix;
	static Const* const  s_info;
	static Const* const  s_initialization;
	static Const* const  s_input;
	static Const* const  s_instantiation_error;
	static Const* const  s_integer;
	static Const* const  s_internal;
	static Const* const  s_internal_error;
	static Const* const  s_interpret;
	static Const* const  s_is;
	static Const* const  s_java;
	static Const* const  s442;
	static Const* const  s443;
	static Const* const  s_java_constructor;
	static Const* const  s_java_constructor0;
	static Const* const  s_java_conversion;
	static Const* const  s_java_declared_constructor;
	static Const* const  s_java_declared_constructor0;
	static Const* const  s_java_declared_method;
	static Const* const  s_java_declared_method0;
	static Const* const  s_java_error;
	static Const* const  s_java_get_declared_field;
	static Const* const  s_java_get_declared_field0;
	static Const* const  s_java_get_field;
	static Const* const  s_java_get_field0;
	static Const* const  s_java_method;
	static Const* const  s_java_method0;
	static Const* const  s_java_set_declared_field;
	static Const* const  s_java_set_declared_field0;
	static Const* const  s_java_set_field;
	static Const* const  s_java_set_field0;
	static Const* const  s462;
	static Const* const  s_leap;
	static Const* const  s_leash;
	static Const* const  s_leash_specifier;
	static Const* const  s_leashing;
	static Const* const  s_length;
	static Const* const  s_lis;
	static Const* const  s_list;
	static Const* const  s_listing;
	static Const* const  s_long;
	static Const* const  s_matching;
	static Const* const  s_max_arity;
	static Const* const  s_max_integer;
	static Const* const  s_meta_predicate;
	static Const* const  s_min_integer;
	static Const* const  s_mod;
	static Const* const  s_mode;
	static Const* const  s_modify;
	static Const* const  s_module;
	static Const* const  s_msec;
	static Const* const  s_multifile;
	static Const* const  s_mutex_lock_bt;
	static Const* const  s_mutex_unlock;
	static Const* const  s_name;
	static Const* const  s_new_hash;
	static Const* const  s_nl;
	static Const* const  s_no;
	static Const* const  s_nodebug;
	static Const* const  s_nonvar;
	static Const* const  s_nospy;
	static Const* const  s_nospyall;
	static Const* const  s_not;
	static Const* const  s_notrace;
	static Const* const  s_number;
	static Const* const  s_number_codes;
	static Const* const  s_numbervars;
	static Const* const  s_off;
	static Const* const  s_on;
	static Const* const  s_on_exception;
	static Const* const  s_on_load_sxx_builtins_cafe;
	static Const* const  s_once;
	static Const* const  s_op;
	static Const* const  s_open;
	static Const* const  s_operator;
	static Const* const  s_or;
	static Const* const  s_other;
	static Const* const  s_otherwise;
	static Const* const  s_output;
	static Const* const  s_package;
	static Const* const  s_parse_tokens;
	static Const* const  s_peek_byte;
	static Const* const  s_peek_char;
	static Const* const  s_peek_code;
	static Const* const  s_permission;
	static Const* const  s_permission_error;
	static Const* const  s_phrase;
	static Const* const  s_postfix;
	static Const* const  s_predicate;
	static Const* const  s_predicate_indicator;
	static Const* const  s_prefix;
	static Const* const  s_print_message;
	static Const* const  s_print_procedure_box;
	static Const* const  s_print_stack_trace;
	static Const* const  s_private_procedure;
	static Const* const  s_prolog_flag;
	static Const* const  s_public;
	static Const* const  s_punct;
	static Const* const  s_put;
	static Const* const  s_put_byte;
	static Const* const  s_put_char;
	static Const* const  s_put_code;
	static Const* const  s_quoted;
	static Const* const  s_raise_exception;
	static Const* const  s_read;
	static Const* const  s_read_line;
	static Const* const  s_read_token;
	static Const* const  s_read_tokens;
	static Const* const  s_read_with_variables;
	static Const* const  s_redo;
	static Const* const  s_redo_procedure_box;
	static Const* const  s_regex_compile;
	static Const* const  s_regex_list;
	static Const* const  s_regex_match;
	static Const* const  s_regex_matches;
	static Const* const  s_rem;
	static Const* const  s_removed;
	static Const* const  s_repeat;
	static Const* const  s_representation;
	static Const* const  s_representation_error;
	static Const* const  s_retract;
	static Const* const  s_retractall;
	static Const* const  s_reverse;
	static Const* const  s_runtime;
	static Const* const  s_set_prolog_flag;
	static Const* const  s_setof;
	static Const* const  s_skip;
	static Const* const  s_smallerorequal;
	static Const* const  s_smallerthan;
	static Const* const  s_sort;
	static Const* const  s_spy;
	static Const* const  s_spypoint;
	static Const* const  s_start;
	static Const* const  s_static_procedure;
	static Const* const  s_statistics;
	static Const* const  s_stopping;
	static Const* const  s_str;
	static Const* const  s_stream;
	static Const* const  s_stream_or_alias;
	static Const* const  s_stream_property;
	static Const* const  s_string;
	static Const* const  s_sub_atom;
	static Const* const  s_symbol;
	static Const* const  s_synchronized;
	static Const* const  s_syntax;
	static Const* const  s_syntax_error;
	static Const* const  s_system;
	static Const* const  s_system_error;
	static Const* const  s_system_predicate;
	static Const* const  s_tab;
	static Const* const  s_term;
	static Const* const  s_termequal;
	static Const* const  s_termgreaterequal;
	static Const* const  s_termgreaterthan;
	static Const* const  s_termsmallerequal;
	static Const* const  s_termsmallerthan;
	static Const* const  s_throw;
	static Const* const  s_trace;
	static Const* const  s_trail;
	static Const* const  s_true;
	static Const* const  s_type;
	static Const* const  s_type_error;
	static Const* const  s_unify;
	static Const* const  s_unknown;
	static Const* const  s_user;
	static Const* const  s_user_error;
	static Const* const  s_var;
	static Const* const  s_variable;
	static Const* const  s_warning;
	static Const* const  s_with_mutex;
	static Const* const  s_write;
	static Const* const  s_write_canonical;
	static Const* const  s_write_term;
	static Const* const  s_writeq;
	static Const* const  s_xf;
	static Const* const  s_xfx;
	static Const* const  s_xfy;
	static Const* const  s_yes;
	static Const* const  s_yf;
	static Const* const  s_yfx;
	static Const* const  s_z;
	static Const* const  s612;
	static Const* const  s613;
	static Const* const  s614;
	static Const* const  s615;
	static Const* const  s616;
	static Const* const  s617;
	static Const* const  s618;
	static Const* const  s619;
	static Const* const  s620;
	static Const* const  s621;
	static Const* const  s622;
	static Const* const  s623;
	static Const* const  s624;
	static Const* const  s625;
	static Const* const  s626;
	static Const* const  s627;
	static Const* const  s628;
	static Const* const  s629;
	static Const* const  s630;
	static Const* const  s631;
	static Const* const  s632;
	static Int* const  negint2;
	static Int* const  negint1;
	static Int* const  posint0;
	static Int* const  posint1;
	static Int* const  posint2;
	static Int* const  posint3;
	static Int* const  posint4;
	static Int* const  posint5;
	static Int* const  posint8;
	static Int* const  posint26;
	static Int* const  posint43;
	static Int* const  posint45;
	static Int* const  posint63;
	static Int* const  posint97;
	static Int* const  posint99;
	static Int* const  posint104;
	static Int* const  posint108;
	static Int* const  posint200;
	static Int* const  posint255;
	static Int* const  posint300;
	static Int* const  posint400;
	static Int* const  posint500;
	static Int* const  posint550;
	static Int* const  posint700;
	static Int* const  posint900;
	static Int* const  posint999;
	static Int* const  posint1000;
	static Int* const  posint1050;
	static Int* const  posint1100;
	static Int* const  posint1150;
	static Int* const  posint1170;
	static Int* const  posint1200;
	static Int* const  posint1201;
	static Operation* const  reg_on_load_sxx_builtins_cafe_0;
	static Operation* const  reg_package_1;
	static Operation* const  reg_true_0;
	static Operation* const  reg_otherwise_0;
	static Operation* const  reg_false_0;
	static Operation* const  reg_cut_1;
	static Operation* const  reg_$005E_2;
	static Operation* const  reg_$002C_2;
	static Operation* const  reg_or_2;
	static Operation* const  reg_$002D$003E_2;
	static Operation* const  reg_call_1;
	static Operation* const  reg_$0024meta_call_5;
	static Operation* const  reg_$0024meta_call_4;
	static Operation* const  reg_$0024call_internal_5;
	static Operation* const  reg_catch_3;
	static Operation* const  reg_throw_1;
	static Operation* const  reg_on_exception_3;
	static Operation* const  reg_$0024on_exception_3;
	static Operation* const  reg_$0024catch_and_throw_3;
	static Operation* const  reg_compound_1;
	static Operation* const  reg_callable_1;
	static Operation* const  reg_compare_3;
	static Operation* const  reg_$0024map_compare_op_2;
	static Operation* const  reg_smallerthan_2;
	static Operation* const  reg_smallerorequal_2;
	static Operation* const  reg_clause_2;
	static Operation* const  reg_$0024head_to_term_4;
	static Operation* const  reg_$0024head_to_term_5;
	static Operation* const  reg_$0024new_internal_database_1;
	static Operation* const  reg_$0024new_internal_database_2;
	static Operation* const  reg_$0024init_internal_database_1;
	static Operation* const  reg_$0024defined_internal_database_1;
	static Operation* const  reg_$0024clause_internal_5;
	static Operation* const  reg_$0024clause_internal0_3;
	static Operation* const  reg_$0024get_indices_4;
	static Operation* const  reg_$0024new_indexing_hash_3;
	static Operation* const  reg_$0024calc_indexing_key_2;
	static Operation* const  reg_$0024calc_indexing_key0_2;
	static Operation* const  reg_$0024check_procedure_permission_4;
	static Operation* const  reg_initialization_2;
	static Operation* const  reg_assert_1;
	static Operation* const  reg_assertz_1;
	static Operation* const  reg_asserta_1;
	static Operation* const  reg_abolish_1;
	static Operation* const  reg_retract_1;
	static Operation* const  reg_retractall_1;
	static Operation* const  reg_$0024term_to_clause_4;
	static Operation* const  reg_$0024term_to_clause_5;
	static Operation* const  reg_$0024term_to_head_4;
	static Operation* const  reg_$0024term_to_body_4;
	static Operation* const  reg_$0024localize_body_3;
	static Operation* const  reg_$0024localize_args_4;
	static Operation* const  reg_$0024builtin_meta_predicates_3;
	static Operation* const  reg_$0024clause_to_term_4;
	static Operation* const  reg_$0024clause_to_term_5;
	static Operation* const  reg_$0024term_to_predicateindicator_3;
	static Operation* const  reg_$0024term_to_predicateindicator_5;
	static Operation* const  reg_$0024update_indexing_5;
	static Operation* const  reg_$0024gen_indexing_keys_3;
	static Operation* const  reg_$0024gen_indexing_keys0_3;
	static Operation* const  reg_$0024update_indexing_hash_4;
	static Operation* const  reg_$0024hash_adda_all_3;
	static Operation* const  reg_$0024hash_addz_all_3;
	static Operation* const  reg_$0024erase_all_1;
	static Operation* const  reg_$0024rehash_indexing_3;
	static Operation* const  reg_$0024remove_index_all_3;
	static Operation* const  reg_findall_3;
	static Operation* const  reg_$0024findall_4;
	static Operation* const  reg_bagof_3;
	static Operation* const  reg_setof_3;
	static Operation* const  reg_$0024bagof_3;
	static Operation* const  reg_$0024bagof_instances_3;
	static Operation* const  reg_$0024bagof_instances0_5;
	static Operation* const  reg_$0024variants_subset_5;
	static Operation* const  reg_$0024term_variant_2;
	static Operation* const  reg_$0024term_variant_3;
	static Operation* const  reg_$0024unify_witness_2;
	static Operation* const  reg_$0024variables_set_2;
	static Operation* const  reg_$0024variables_set_3;
	static Operation* const  reg_$0024builtin_memq_2;
	static Operation* const  reg_$0024existential_variables_set_2;
	static Operation* const  reg_$0024existential_variables_set_3;
	static Operation* const  reg_$0024free_variables_set_3;
	static Operation* const  reg_$0024builtin_set_diff_3;
	static Operation* const  reg_$0024builtin_set_diff0_3;
	static Operation* const  reg_open_3;
	static Operation* const  reg_close_1;
	static Operation* const  reg_flush_output_0;
	static Operation* const  reg_stream_property_2;
	static Operation* const  reg_$0024stream_property_2;
	static Operation* const  reg_$0024stream_property_specifier_1;
	static Operation* const  reg_get_char_1;
	static Operation* const  reg_get_code_1;
	static Operation* const  reg_peek_char_1;
	static Operation* const  reg_peek_code_1;
	static Operation* const  reg_put_char_1;
	static Operation* const  reg_put_code_1;
	static Operation* const  reg_nl_1;
	static Operation* const  reg_get0_1;
	static Operation* const  reg_get0_2;
	static Operation* const  reg_get_1;
	static Operation* const  reg_put_1;
	static Operation* const  reg_put_2;
	static Operation* const  reg_tab_1;
	static Operation* const  reg_skip_1;
	static Operation* const  reg_get_byte_1;
	static Operation* const  reg_peek_byte_1;
	static Operation* const  reg_put_byte_1;
	static Operation* const  reg_read_1;
	static Operation* const  reg_read_2;
	static Operation* const  reg_read_with_variables_2;
	static Operation* const  reg_read_with_variables_3;
	static Operation* const  reg_read_line_1;
	static Operation* const  reg_read_token_2;
	static Operation* const  reg_$0024read_token1_3;
	static Operation* const  reg_read_tokens_3;
	static Operation* const  reg_$0024read_tokens_4;
	static Operation* const  reg_$0024read_tokens1_5;
	static Operation* const  reg_$0024mem_pair_2;
	static Operation* const  reg_$0024read_tokens_until_fullstop_1;
	static Operation* const  reg_$0024read_tokens_until_fullstop_2;
	static Operation* const  reg_parse_tokens_2;
	static Operation* const  reg_$002D$002D$003E_2;
	static Operation* const  reg_$0024parse_tokens_is_starter_1;
	static Operation* const  reg_$0024parse_tokens_is_terminator_1;
	static Operation* const  reg_$0024parse_tokens_is_post_in_op_1;
	static Operation* const  reg_$0024parse_tokens_post_in_type_1;
	static Operation* const  reg_$0024parse_tokens_peep_next_3;
	static Operation* const  reg_$0024parse_tokens_error_3;
	static Operation* const  reg_$0024parse_tokens_error1_2;
	static Operation* const  reg_$0024parse_tokens_error2_1;
	static Operation* const  reg_$0024parse_tokens_write_string_2;
	static Operation* const  reg_$0024parse_tokens_write_message_2;
	static Operation* const  reg_write_1;
	static Operation* const  reg_write_2;
	static Operation* const  reg_writeq_1;
	static Operation* const  reg_writeq_2;
	static Operation* const  reg_write_canonical_1;
	static Operation* const  reg_write_canonical_2;
	static Operation* const  reg_write_term_2;
	static Operation* const  reg_write_term_3;
	static Operation* const  reg_$0024write_term_3;
	static Operation* const  reg_$0024write_term0_6;
	static Operation* const  reg_$0024write_space_if_needed_3;
	static Operation* const  reg_$0024write_VAR_2;
	static Operation* const  reg_$0024write_atom_5;
	static Operation* const  reg_$0024atom_type_2;
	static Operation* const  reg_$0024write_is_operator_4;
	static Operation* const  reg_$0024write_op_type_2;
	static Operation* const  reg_$0024write_term_op_8;
	static Operation* const  reg_$0024write_term_op1_8;
	static Operation* const  reg_$0024write_term_infix_op_5;
	static Operation* const  reg_$0024write_term_list_args_5;
	static Operation* const  reg_$0024write_term_args_5;
	static Operation* const  reg_op_3;
	static Operation* const  reg_$0024op1_3;
	static Operation* const  reg_$0024op2_3;
	static Operation* const  reg_$0024add_operators_3;
	static Operation* const  reg_$0024add_op_3;
	static Operation* const  reg_$0024op_specifier_2;
	static Operation* const  reg_$0024op_atom_list_2;
	static Operation* const  reg_current_op_3;
	static Operation* const  reg_$0024current_operator_3;
	static Operation* const  reg_not_1;
	static Operation* const  reg_repeat_0;
	static Operation* const  reg_once_1;
	static Operation* const  reg_sub_atom_5;
	static Operation* const  reg_name_2;
	static Operation* const  reg_regex_matches_3;
	static Operation* const  reg_regex_matches_2;
	static Operation* const  reg_regex_list_3;
	static Operation* const  reg_set_prolog_flag_2;
	static Operation* const  reg_$0024set_prolog_flag0_2;
	static Operation* const  reg_$0024set_prolog_flag0_4;
	static Operation* const  reg_current_prolog_flag_2;
	static Operation* const  reg_$0024prolog_impl_flag_3;
	static Operation* const  reg_halt_0;
	static Operation* const  reg_abort_0;
	static Operation* const  reg_C_3;
	static Operation* const  reg_expand_term_2;
	static Operation* const  reg_$0024dcg_expansion_2;
	static Operation* const  reg_$0024dcg_translation_atom_4;
	static Operation* const  reg_$0024dcg_translation_4;
	static Operation* const  reg_$0024dcg_trans0_5;
	static Operation* const  reg_$0024dcg_concat_3;
	static Operation* const  reg_$0024dcg_trans_5;
	static Operation* const  reg_new_hash_1;
	static Operation* const  reg_hash_map_2;
	static Operation* const  reg_hash_map_3;
	static Operation* const  reg_hash_exists_1;
	static Operation* const  reg_java_constructor_2;
	static Operation* const  reg_java_declared_constructor_2;
	static Operation* const  reg_java_method_3;
	static Operation* const  reg_java_declared_method_3;
	static Operation* const  reg_java_get_field_3;
	static Operation* const  reg_java_get_declared_field_3;
	static Operation* const  reg_java_set_field_3;
	static Operation* const  reg_java_set_declared_field_3;
	static Operation* const  reg_builtin_java_convert_args_2;
	static Operation* const  reg_synchronized_2;
	static Operation* const  reg_cafeteria_0;
	static Operation* const  reg_$0024cafeteria_init_0;
	static Operation* const  reg_$0024toplvel_loop_0;
	static Operation* const  reg_$0024cafeteria_1;
	static Operation* const  reg_$0024process_order_2;
	static Operation* const  reg_$0024rm_redundant_vars_2;
	static Operation* const  reg_$0024give_answers_with_prompt_1;
	static Operation* const  reg_$0024give_an_answer_1;
	static Operation* const  reg_$0024print_an$0020answer_1;
	static Operation* const  reg_consult_1;
	static Operation* const  reg_$0024consult_1;
	static Operation* const  reg_consult_stream_2;
	static Operation* const  reg_$0024prolog_file_name_2;
	static Operation* const  reg_$0024consult_init_1;
	static Operation* const  reg_$0024consult_clause_1;
	static Operation* const  reg_$0024assert_consulted_package_1;
	static Operation* const  reg_$0024assert_consulted_import_1;
	static Operation* const  reg_$0024consult_preprocess_2;
	static Operation* const  reg_$0024consult_cls_1;
	static Operation* const  reg_$0024assert_consulted_clause_1;
	static Operation* const  reg_trace_0;
	static Operation* const  reg_$0024trace_init_0;
	static Operation* const  reg_notrace_0;
	static Operation* const  reg_debug_0;
	static Operation* const  reg_nodebug_0;
	static Operation* const  reg_spy_1;
	static Operation* const  reg_$0024assert_spypoint_1;
	static Operation* const  reg_nospy_1;
	static Operation* const  reg_$0024retract_spypoint_1;
	static Operation* const  reg_nospyall_0;
	static Operation* const  reg_leash_1;
	static Operation* const  reg_$0024leash_1;
	static Operation* const  reg_$0024assert_leash_1;
	static Operation* const  reg_$0024leash_specifier_1;
	static Operation* const  reg_$0024trace_goal_1;
	static Operation* const  reg_$0024trace_goal_4;
	static Operation* const  reg_print_procedure_box_5;
	static Operation* const  reg_redo_procedure_box_4;
	static Operation* const  reg_$0024read_blocked_1;
	static Operation* const  reg_$0024debug_option_2;
	static Operation* const  reg_$0024show_debug_option_0;
	static Operation* const  reg_$0024set_debug_flag_2;
	static Operation* const  reg_listing_0;
	static Operation* const  reg_listing_1;
	static Operation* const  reg_$0024listing_2;
	static Operation* const  reg_$0024listing_dynamic_clause_2;
	static Operation* const  reg_$0024write_dynamic_clause_2;
	static Operation* const  reg_$0024write_dynamic_head_2;
	static Operation* const  reg_$0024write_dynamic_body_2;
	static Operation* const  reg_length_2;
	static Operation* const  reg_$0024length_3;
	static Operation* const  reg_$0024length0_3;
	static Operation* const  reg_numbervars_3;
	static Operation* const  reg_$0024numbervars_3;
	static Operation* const  reg_$0024numbervars_str_5;
	static Operation* const  reg_statistics_2;
	static Operation* const  reg_$0024statistics_mode_1;
	static Operation* const  reg_print_message_2;
	static Operation* const  reg_$0024error_message_1;
	static Operation* const  reg_$0024write_goal_2;
	static Operation* const  reg_illarg_3;
	static Operation* const  reg_$0024match_type_2;
	static Operation* const  reg_with_mutex_2;
	static Operation* const  reg_$0024builtin_append_3;
	static Operation* const  reg_$0024builtin_member_2;
	static Operation* const  reg_$0024builtin_message_1;
	static Operation* const  reg_$0024member_in_reverse_2;
public:
	class pred_on_load_sxx_builtins_cafe_0 : public Code {

	/*
	
	on_load_sxx_builtins_cafe(_408):-write(op(1150,fx,package),_408).
	on_load_sxx_builtins_cafe(_460):-write((package'TauMachine.builtin'),_460).
	on_load_sxx_builtins_cafe(_506):-write((public true/0,otherwise/0),_506).
	on_load_sxx_builtins_cafe(_552):-write((public fail/0,false/0),_552).
	on_load_sxx_builtins_cafe(_586):-write((public!/0),_586).
	on_load_sxx_builtins_cafe(_620):-write((public (^)/2),_620).
	on_load_sxx_builtins_cafe(_654):-write((public (',')/2),_654).
	on_load_sxx_builtins_cafe(_688):-write((public (;)/2),_688).
	on_load_sxx_builtins_cafe(_722):-write((public (->)/2),_722).
	on_load_sxx_builtins_cafe(_756):-write((public call/1),_756).
	on_load_sxx_builtins_cafe(_3832):-write((public catch/3,throw/1),_3832).
	on_load_sxx_builtins_cafe(_3866):-write((public on_exception/3),_3866).
	on_load_sxx_builtins_cafe(_4278):-write((public (=)/2,'$unify'/2),_4278).
	on_load_sxx_builtins_cafe(_4324):-write((public (\=)/2,'$not_unifiable'/2),_4324).
	on_load_sxx_builtins_cafe(_4590):-write((public var/1,atom/1,integer/1,long/1,float/1,atomic/1,compound/1,nonvar/1,number/1),_4590).
	on_load_sxx_builtins_cafe(_4648):-write((public java/1,java/2,closure/1),_4648).
	on_load_sxx_builtins_cafe(_4694):-write((public ground/1,callable/1),_4694).
	on_load_sxx_builtins_cafe(_5228):-write((public (==)/2,'$equality_of_term'/2),_5228).
	on_load_sxx_builtins_cafe(_5274):-write((public (\==)/2,'$inequality_of_term'/2),_5274).
	on_load_sxx_builtins_cafe(_5320):-write((public (@<)/2,'$before'/2),_5320).
	on_load_sxx_builtins_cafe(_5366):-write((public (@>)/2,'$after'/2),_5366).
	on_load_sxx_builtins_cafe(_5412):-write((public (@=<)/2,'$not_after'/2),_5412).
	on_load_sxx_builtins_cafe(_5458):-write((public (@>=)/2,'$not_before'/2),_5458).
	on_load_sxx_builtins_cafe(_5504):-write((public?= / 2,'$identical_or_cannot_unify'/2),_5504).
	on_load_sxx_builtins_cafe(_5538):-write((public compare/3),_5538).
	on_load_sxx_builtins_cafe(_6242):-write((public (=..)/2),_6242).
	on_load_sxx_builtins_cafe(_6276):-write((public copy_term/2),_6276).
	on_load_sxx_builtins_cafe(_6378):-write((public (is)/2),_6378).
	on_load_sxx_builtins_cafe(_6448):-write((public'$abs'/2,'$asin'/2,'$acos'/2,'$atan'/2),_6448).
	on_load_sxx_builtins_cafe(_6518):-write((public'$bitwise_conj'/3,'$bitwise_disj'/3,'$bitwise_exclusive_or'/3,'$bitwise_neg'/2),_6518).
	on_load_sxx_builtins_cafe(_6564):-write((public'$ceil'/2,'$cos'/2),_6564).
	on_load_sxx_builtins_cafe(_6598):-write((public'$degrees'/2),_6598).
	on_load_sxx_builtins_cafe(_6632):-write((public'$exp'/2),_6632).
	on_load_sxx_builtins_cafe(_6714):-write((public'$float'/2,'$float_integer_part'/2,'$float_fractional_part'/2,'$float_quotient'/3,'$floor'/2),_6714).
	on_load_sxx_builtins_cafe(_6748):-write((public'$int_quotient'/3),_6748).
	on_load_sxx_builtins_cafe(_6782):-write((public'$log'/2),_6782).
	on_load_sxx_builtins_cafe(_6864):-write((public'$max'/3,'$min'/3,'$minus'/3,'$mod'/3,'$multi'/3),_6864).
	on_load_sxx_builtins_cafe(_6910):-write((public'$plus'/3,'$pow'/3),_6910).
	on_load_sxx_builtins_cafe(_6968):-write((public'$radians'/2,'$rint'/2,'$round'/2),_6968).
	on_load_sxx_builtins_cafe(_7050):-write((public'$shift_left'/3,'$shift_right'/3,'$sign'/2,'$sin'/2,'$sqrt'/2),_7050).
	on_load_sxx_builtins_cafe(_7096):-write((public'$tan'/2,'$truncate'/2),_7096).
	on_load_sxx_builtins_cafe(_8484):-write((public (=:=)/2,'$arith_equal'/2),_8484).
	on_load_sxx_builtins_cafe(_8530):-write((public (=\=)/2,'$arith_not_equal'/2),_8530).
	on_load_sxx_builtins_cafe(_8576):-write((public (<)/2,'$less_than'/2),_8576).
	on_load_sxx_builtins_cafe(_8622):-write((public (=<)/2,'$less_or_equal'/2),_8622).
	on_load_sxx_builtins_cafe(_8668):-write((public (>)/2,'$greater_than'/2),_8668).
	on_load_sxx_builtins_cafe(_8714):-write((public (>=)/2,'$greater_or_equal'/2),_8714).
	on_load_sxx_builtins_cafe(_9156):-write((public clause/2),_9156).
	on_load_sxx_builtins_cafe(_9190):-write((public (initialization)/2),_9190).
	on_load_sxx_builtins_cafe(_9224):-write((public'$new_indexing_hash'/3),_9224).
	on_load_sxx_builtins_cafe(_10922):-write((public assert/1),_10922).
	on_load_sxx_builtins_cafe(_10956):-write((public assertz/1),_10956).
	on_load_sxx_builtins_cafe(_10990):-write((public asserta/1),_10990).
	on_load_sxx_builtins_cafe(_11024):-write((public retract/1),_11024).
	on_load_sxx_builtins_cafe(_11058):-write((public abolish/1),_11058).
	on_load_sxx_builtins_cafe(_11092):-write((public retractall/1),_11092).
	on_load_sxx_builtins_cafe(_15560):-write((public findall/3),_15560).
	on_load_sxx_builtins_cafe(_15594):-write((public bagof/3),_15594).
	on_load_sxx_builtins_cafe(_15628):-write((public setof/3),_15628).
	on_load_sxx_builtins_cafe(_18192):-write((public open/3),_18192).
	on_load_sxx_builtins_cafe(_18226):-write((public close/1),_18226).
	on_load_sxx_builtins_cafe(_18260):-write((public flush_output/0),_18260).
	on_load_sxx_builtins_cafe(_18294):-write((public stream_property/2),_18294).
	on_load_sxx_builtins_cafe(_18930):-write((public get_char/1,get_code/1),_18930).
	on_load_sxx_builtins_cafe(_18976):-write((public peek_char/1,peek_code/1),_18976).
	on_load_sxx_builtins_cafe(_19022):-write((public put_char/1,put_code/1),_19022).
	on_load_sxx_builtins_cafe(_19056):-write((public nl/1),_19056).
	on_load_sxx_builtins_cafe(_19360):-write((public get0/1,get0/2),_19360).
	on_load_sxx_builtins_cafe(_19394):-write((public get/1),_19394).
	on_load_sxx_builtins_cafe(_19440):-write((public put/1,put/2),_19440).
	on_load_sxx_builtins_cafe(_19474):-write((public tab/1),_19474).
	on_load_sxx_builtins_cafe(_19508):-write((public skip/1),_19508).
	on_load_sxx_builtins_cafe(_19834):-write((public get_byte/1,peek_byte/1,put_byte/1),_19834).
	on_load_sxx_builtins_cafe(_19994):-write((public read/1,read/2),_19994).
	on_load_sxx_builtins_cafe(_20040):-write((public read_with_variables/2,read_with_variables/3),_20040).
	on_load_sxx_builtins_cafe(_20074):-write((public read_line/1),_20074).
	on_load_sxx_builtins_cafe(_20108):-write((dynamic'$tokens'/1),_20108).
	on_load_sxx_builtins_cafe(_26160):-write((public write/1,write/2),_26160).
	on_load_sxx_builtins_cafe(_26206):-write((public writeq/1,writeq/2),_26206).
	on_load_sxx_builtins_cafe(_26252):-write((public write_canonical/1,write_canonical/2),_26252).
	on_load_sxx_builtins_cafe(_26298):-write((public write_term/2,write_term/3),_26298).
	on_load_sxx_builtins_cafe(_30240):-write((public op/3),_30240).
	on_load_sxx_builtins_cafe(_30274):-write((public current_op/3),_30274).
	on_load_sxx_builtins_cafe(_30308):-write((dynamic'$current_operator'/3),_30308).
	on_load_sxx_builtins_cafe(_32944):-write((public (\+)/1),_32944).
	on_load_sxx_builtins_cafe(_32978):-write((public once/1),_32978).
	on_load_sxx_builtins_cafe(_33012):-write((public repeat/0),_33012).
	on_load_sxx_builtins_cafe(_33184):-write((public sub_atom/5),_33184).
	on_load_sxx_builtins_cafe(_33218):-write((public name/2),_33218).
	on_load_sxx_builtins_cafe(_33252):-write((public regex_matches/3),_33252).
	on_load_sxx_builtins_cafe(_33286):-write((public regex_matches/2),_33286).
	on_load_sxx_builtins_cafe(_33890):-write((public set_prolog_flag/2),_33890).
	on_load_sxx_builtins_cafe(_33924):-write((public current_prolog_flag/2),_33924).
	on_load_sxx_builtins_cafe(_34912):-write((public halt/0),_34912).
	on_load_sxx_builtins_cafe(_34946):-write((public abort/0),_34946).
	on_load_sxx_builtins_cafe(_35040):-write((public'C'/3,expand_term/2),_35040).
	on_load_sxx_builtins_cafe(_36702):-write((public new_hash/1),_36702).
	on_load_sxx_builtins_cafe(_36736):-write((public hash_map/2),_36736).
	on_load_sxx_builtins_cafe(_36770):-write((public hash_exists/1),_36770).
	on_load_sxx_builtins_cafe(_37030):-write((public java_constructor/2),_37030).
	on_load_sxx_builtins_cafe(_37064):-write((public java_declared_constructor/2),_37064).
	on_load_sxx_builtins_cafe(_37098):-write((public java_method/3),_37098).
	on_load_sxx_builtins_cafe(_37132):-write((public java_declared_method/3),_37132).
	on_load_sxx_builtins_cafe(_37166):-write((public java_get_field/3),_37166).
	on_load_sxx_builtins_cafe(_37200):-write((public java_get_declared_field/3),_37200).
	on_load_sxx_builtins_cafe(_37234):-write((public java_set_field/3),_37234).
	on_load_sxx_builtins_cafe(_37268):-write((public java_set_declared_field/3),_37268).
	on_load_sxx_builtins_cafe(_37302):-write((public synchronized/2),_37302).
	on_load_sxx_builtins_cafe(_38048):-write(op(1170,xfx,:-),_38048).
	on_load_sxx_builtins_cafe(_38080):-write(op(1170,xfx,-->),_38080).
	on_load_sxx_builtins_cafe(_38112):-write(op(1170,fx,:-),_38112).
	on_load_sxx_builtins_cafe(_38144):-write(op(1170,fx,?-),_38144).
	on_load_sxx_builtins_cafe(_38176):-write(op(1150,fx,package),_38176).
	on_load_sxx_builtins_cafe(_38208):-write(op(1150,fx,import),_38208).
	on_load_sxx_builtins_cafe(_38240):-write(op(1150,fx,public),_38240).
	on_load_sxx_builtins_cafe(_38272):-write(op(1150,fx,dynamic),_38272).
	on_load_sxx_builtins_cafe(_38304):-write(op(1150,fx,meta_predicate),_38304).
	on_load_sxx_builtins_cafe(_38336):-write(op(1150,fx,mode),_38336).
	on_load_sxx_builtins_cafe(_38368):-write(op(1150,fx,multifile),_38368).
	on_load_sxx_builtins_cafe(_38400):-write(op(1150,fx,block),_38400).
	on_load_sxx_builtins_cafe(_38434):-write((public cafeteria/0),_38434).
	on_load_sxx_builtins_cafe(_38468):-write((public consult/1),_38468).
	on_load_sxx_builtins_cafe(_38502):-write((public consult_stream/1),_38502).
	on_load_sxx_builtins_cafe(_38548):-write((public trace/0,notrace/0),_38548).
	on_load_sxx_builtins_cafe(_38594):-write((public debug/0,nodebug/0),_38594).
	on_load_sxx_builtins_cafe(_38628):-write((public leash/1),_38628).
	on_load_sxx_builtins_cafe(_38686):-write((public spy/1,nospy/1,nospyall/0),_38686).
	on_load_sxx_builtins_cafe(_38720):-write((public listing/0),_38720).
	on_load_sxx_builtins_cafe(_38754):-write((public listing/1),_38754).
	on_load_sxx_builtins_cafe(_38788):-write((dynamic'$current_leash'/1),_38788).
	on_load_sxx_builtins_cafe(_38822):-write((dynamic'$current_spypoint'/3),_38822).
	on_load_sxx_builtins_cafe(_38856):-write((dynamic'$leap_flag'/1),_38856).
	on_load_sxx_builtins_cafe(_38890):-write((dynamic'$consulted_file'/1),_38890).
	on_load_sxx_builtins_cafe(_38924):-write((dynamic'$consulted_import'/2),_38924).
	on_load_sxx_builtins_cafe(_38958):-write((dynamic'$consulted_package'/1),_38958).
	on_load_sxx_builtins_cafe(_38992):-write((dynamic'$consulted_predicate'/3),_38992).
	on_load_sxx_builtins_cafe(_45138):-write((public reverse/2),_45138).
	on_load_sxx_builtins_cafe(_45172):-write((public length/2),_45172).
	on_load_sxx_builtins_cafe(_45206):-write((public numbervars/3),_45206).
	on_load_sxx_builtins_cafe(_45240):-write((public statistics/2),_45240).
	on_load_sxx_builtins_cafe(_49340):-write((public with_mutex/2),_49340).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__1(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__2(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__3(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__4(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__5(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__6(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__7(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__8(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__9(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__10(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__11(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__12(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__13(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__14(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__15(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__16(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__17(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__18(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__19(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__20(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__21(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__22(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__23(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__24(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__25(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__26(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__27(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__28(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__29(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__30(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__31(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__32(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__33(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__34(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__35(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__36(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__37(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__38(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__39(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__40(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__41(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__42(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__43(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__44(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__45(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__46(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__47(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__48(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__49(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__50(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__51(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__52(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__53(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__54(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__55(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__56(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__57(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__58(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__59(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__60(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__61(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__62(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__63(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__64(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__65(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__66(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__67(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__68(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__69(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__70(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__71(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__72(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__73(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__74(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__75(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__76(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__77(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__78(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__79(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__80(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__81(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__82(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__83(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__84(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__85(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__86(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__87(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__88(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__89(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__90(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__91(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__92(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__93(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__94(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__95(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__96(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__97(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__98(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__99(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__100(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__101(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__102(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__103(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__104(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__105(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__106(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__107(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__108(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__109(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__110(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__111(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__112(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__113(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__114(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__115(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__116(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__117(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__118(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__119(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__120(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__121(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__122(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__123(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__124(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__125(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__126(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__127(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__128(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__129(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__130(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__131(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__132(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__133(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__134(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__135(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__136(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__137(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__138(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__139(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__140(Prolog* mach);
	static Operation* exec_pred_on_load_sxx_builtins_cafe_0__141(Prolog* mach);
	};


public:
	class pred_package_1 : public Code {

	/*
	
	package(_426,_436):-call(_436).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_package_1__1(Prolog* mach);
	};


public:
	class pred_true_0 : public Code {

	/*
	
	true(_782):-call(_782).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_true_0__1(Prolog* mach);
	};


public:
	class pred_otherwise_0 : public Code {

	/*
	
	otherwise(_802):-call(_802).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_otherwise_0__1(Prolog* mach);
	};


	/* System pred fail(_820) */
public:
	class pred_false_0 : public Code {

	/*
	
	false(_842):-fail(_842).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_false_0__1(Prolog* mach);
	};


public:
	class pred_cut_1 : public Code {

	/*
	
	cut(1,_866):-call(_866).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_cut_1__1(Prolog* mach);
	};


public:
	class pred_$005E_2 : public Code {

	/*
	
	^(_880,_882,_890):-call(_882,_890).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$005E_2__1(Prolog* mach);
	};


public:
	class pred_$002C_2 : public Code {

	/*
	
	','(_912,_914,_922):-call(_912,call(_914,_922)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$002C_2__1(Prolog* mach);
	};


public:
	class pred_or_2 : public Code {

	/*
	
	or(_950,_952,_966):- \=(_950,(_956->_958),call(_950,_966)).
	or(_996,_998,_1012):- \=(_998,(_1002->_1004),call(_998,_1012)).
	or((_1088->_1090),_1092,_1100):-call(_1088,cut(1,call(_1090,_1100))).
	or((_1136->_1138),_1140,_1148):-call(_1140,_1148).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_or_2__1(Prolog* mach);
	static Operation* exec_pred_or_2__2(Prolog* mach);
	static Operation* exec_pred_or_2__3(Prolog* mach);
	static Operation* exec_pred_or_2__4(Prolog* mach);
	};


public:
	class pred_$002D$003E_2 : public Code {

	/*
	
	->(_1042,_1044,_1052):-call(_1042,cut(1,call(_1044,_1052))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$002D$003E_2__1(Prolog* mach);
	};


public:
	class pred_call_1 : public Code {

	/*
	
	call(_1170,_1180):-'$get_current_B'(_1172,'$meta_call'(_1170,user,_1172,0,interpret,_1180)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_call_1__1(Prolog* mach);
	};


public:
	class pred_$0024meta_call_5 : public Code {

	/*
	
	'$meta_call'(_1214,_1216,_1218,_1220,_1222,_1234):-var(_1214,cut(1,illarg(var,call(_1214),1,_1234))).
	'$meta_call'(_1278,_1280,_1282,_1284,_1286,_1294):-closure(_1278,cut(1,'$call_closure'(_1278,_1294))).
	'$meta_call'(true,_1334,_1336,_1338,_1340,_1348):-cut(1,_1348).
	'$meta_call'(trace,_1376,_1378,_1380,_1382,_1390):-cut(1,trace(_1390)).
	'$meta_call'(debug,_1422,_1424,_1426,_1428,_1436):-cut(1,debug(_1436)).
	'$meta_call'(notrace,_1468,_1470,_1472,_1474,_1482):-cut(1,notrace(_1482)).
	'$meta_call'(nodebug,_1514,_1516,_1518,_1520,_1528):-cut(1,nodebug(_1528)).
	'$meta_call'(spy(_1562),_1564,_1566,_1568,_1570,_1578):-cut(1,spy(_1562,_1578)).
	'$meta_call'(nospy(_1614),_1616,_1618,_1620,_1622,_1630):-cut(1,nospy(_1614,_1630)).
	'$meta_call'(nospyall,_1664,_1666,_1668,_1670,_1678):-cut(1,nospyall(_1678)).
	'$meta_call'(leash(_1712),_1714,_1716,_1718,_1720,_1728):-cut(1,leash(_1712,_1728)).
	'$meta_call'([_1764|_1766],_1768,_1770,_1772,_1774,_1788):-cut(1,consult([_1764|_1766],_1788)).
	'$meta_call'(_1824^_1826,_1828,_1830,_1832,_1834,_1842):-cut(1,'$meta_call'(_1826,_1828,_1830,_1832,_1834,_1842)).
	'$meta_call'(_1886:_1888,_1890,_1892,_1894,_1896,_1904):-cut(1,'$meta_call'(_1888,_1886,_1892,_1894,_1896,_1904)).
	'$meta_call'(!,_1946,no,_1948,_1950,_1964):-cut(1,illarg(context(if,cut),!,0,_1964)).
	'$meta_call'(!,_2002,_2004,_2006,_2008,_2016):-cut(1,'$cut'(_2004,_2016)).
	'$meta_call'((_2052,_2054),_2056,_2058,_2060,_2062,_2070):-cut(1,'$meta_call'(_2052,_2056,_2058,_2060,_2062,'$meta_call'(_2054,_2056,_2058,_2060,_2062,_2070))).
	'$meta_call'((_2128->_2130;_2136),_2138,_2140,_2142,_2144,_2194):-cut(1,or(('$meta_call'(_2128,_2138,no,_2142,_2144)->'$meta_call'(_2130,_2138,_2140,_2142,_2144)),'$meta_call'(_2136,_2138,_2140,_2142,_2144),_2194)).
	'$meta_call'((_2232->_2234),_2236,_2238,_2240,_2242,_2274):-cut(1,->('$meta_call'(_2232,_2236,no,_2240,_2242),'$meta_call'(_2234,_2236,_2238,_2240,_2242),_2274)).
	'$meta_call'((_2312;_2314),_2316,_2318,_2320,_2322,_2354):-cut(1,or('$meta_call'(_2312,_2316,_2318,_2320,_2322),'$meta_call'(_2314,_2316,_2318,_2320,_2322),_2354)).
	'$meta_call'(\+_2392,_2394,_2396,_2398,_2400,_2420):-cut(1,not('$meta_call'(_2392,_2394,no,_2398,_2400),_2420)).
	'$meta_call'(findall(_2456,_2458,_2460),_2462,_2464,_2466,_2468,_2488):-cut(1,findall(_2456,'$meta_call'(_2458,_2462,_2464,_2466,_2468),_2460,_2488)).
	'$meta_call'(bagof(_2528,_2530,_2532),_2534,_2536,_2538,_2540,_2560):-cut(1,bagof(_2528,'$meta_call'(_2530,_2534,_2536,_2538,_2540),_2532,_2560)).
	'$meta_call'(setof(_2600,_2602,_2604),_2606,_2608,_2610,_2612,_2632):-cut(1,setof(_2600,'$meta_call'(_2602,_2606,_2608,_2610,_2612),_2604,_2632)).
	'$meta_call'(once(_2672),_2674,_2676,_2678,_2680,_2700):-cut(1,once('$meta_call'(_2672,_2674,_2676,_2678,_2680),_2700)).
	'$meta_call'(on_exception(_2736,_2738,_2740),_2742,_2744,_2746,_2748,_2780):-cut(1,on_exception(_2736,'$meta_call'(_2738,_2742,_2744,_2746,_2748),'$meta_call'(_2740,_2742,_2744,_2746,_2748),_2780)).
	'$meta_call'(catch(_2820,_2822,_2824),_2826,_2828,_2830,_2832,_2864):-cut(1,catch('$meta_call'(_2820,_2826,_2828,_2830,_2832),_2822,'$meta_call'(_2824,_2826,_2828,_2830,_2832),_2864)).
	'$meta_call'(synchronized(_2904,_2906),_2908,_2910,_2912,_2914,_2934):-cut(1,synchronized(_2904,'$meta_call'(_2906,_2908,_2910,_2912,_2914),_2934)).
	'$meta_call'(clause(_2972,_2974),_2976,_2978,_2980,_2982,_2996):-cut(1,clause(_2976:_2972,_2974,_2996)).
	'$meta_call'(assert(_3034),_3036,_3038,_3040,_3042,_3056):-cut(1,assertz(_3036:_3034,_3056)).
	'$meta_call'(assertz(_3092),_3094,_3096,_3098,_3100,_3114):-cut(1,assertz(_3094:_3092,_3114)).
	'$meta_call'(asserta(_3150),_3152,_3154,_3156,_3158,_3172):-cut(1,asserta(_3152:_3150,_3172)).
	'$meta_call'(retract(_3208),_3210,_3212,_3214,_3216,_3230):-cut(1,retract(_3210:_3208,_3230)).
	'$meta_call'(abolish(_3266),_3268,_3270,_3272,_3274,_3288):-cut(1,abolish(_3268:_3266,_3288)).
	'$meta_call'(retractall(_3324),_3326,_3328,_3330,_3332,_3346):-cut(1,retractall(_3326:_3324,_3346)).
	'$meta_call'(_3380,_3382,_3384,_3386,_3388,_3396):-atom(_3382,callable(_3380,cut(1,'$meta_call'(_3388,_3386,_3382,_3380,_3396)))).
	'$meta_call'(_3448,_3450,_3452,_3454,_3456,_3478):-illarg(type(callable),call(_3450:_3448),1,_3478).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__1(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__2(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__3(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__4(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__5(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__6(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__7(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__8(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__9(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__10(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__11(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__12(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__13(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__14(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__15(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__16(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__17(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__18(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__19(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__20(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__21(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__22(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__23(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__24(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__25(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__26(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__27(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__28(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__29(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__30(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__31(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__32(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__33(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__34(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__35(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__36(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_5__37(Prolog* mach);
	};


public:
	class pred_$0024meta_call_4 : public Code {

	/*
	
	'$meta_call'(trace,_3510,_3512,_3514,_3532):-cut(1,functor(_3514,_3516,_3518,'$trace_goal'(_3514,_3512,_3516/_3518,_3510,_3532))).
	'$meta_call'(interpret,_3580,_3582,_3584,_3602):-functor(_3584,_3586,_3588,'$call_internal'(_3584,_3582,_3586/_3588,_3580,interpret,_3602)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_4__1(Prolog* mach);
	static Operation* exec_pred_$0024meta_call_4__2(Prolog* mach);
	};


public:
	class pred_$0024call_internal_5 : public Code {

	/*
	
	'$call_internal'(_3646,_3648,_3650,_3652,_3654,_3680):-'$new_internal_database'(_3648,hash_contains_key(_3648,_3650,cut(1,'$get_current_B'(_3656,is(_3664,_3652+1,clause(_3648:_3646,_3672,'$meta_call'(_3672,_3648,_3656,_3664,_3654,_3680))))))).
	'$call_internal'(_3758,_3760,_3762,_3764,_3766,_3774):-'$call'(_3760,_3758,_3774).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024call_internal_5__1(Prolog* mach);
	static Operation* exec_pred_$0024call_internal_5__2(Prolog* mach);
	};


public:
	class pred_catch_3 : public Code {

	/*
	
	catch(_3884,_3886,_3888,_3896):-on_exception(_3886,_3884,_3888,_3896).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_catch_3__1(Prolog* mach);
	};


public:
	class pred_throw_1 : public Code {

	/*
	
	throw(_3924,_3932):-raise_exception(_3924,_3932).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_throw_1__1(Prolog* mach);
	};


public:
	class pred_on_exception_3 : public Code {

	/*
	
	on_exception(_3952,_3954,_3956,_3964):-callable(_3954,cut(1,'$on_exception'(_3952,_3954,_3956,_3964))).
	on_exception(_4004,_4006,_4008,_4028):-illarg(type(callable),on_exception(_4004,_4006,_4008),2,_4028).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_on_exception_3__1(Prolog* mach);
	static Operation* exec_pred_on_exception_3__2(Prolog* mach);
	};


public:
	class pred_$0024on_exception_3 : public Code {

	/*
	
	'$on_exception'(_4056,_4058,_4060,_4070):-'$set_exception'('$none','$begin_exception'(_4062,call(_4058,'$end_exception'(_4062,_4070)))).
	'$on_exception'(_4112,_4114,_4116,_4126):-'$get_exception'(_4118,\==(_4118,'$none','$catch_and_throw'(_4118,_4112,_4116,_4126))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024on_exception_3__1(Prolog* mach);
	static Operation* exec_pred_$0024on_exception_3__2(Prolog* mach);
	};


public:
	class pred_$0024catch_and_throw_3 : public Code {

	/*
	
	'$catch_and_throw'(_4168,_4168,_4170,_4178):-cut(1,'$set_exception'('$none',call(_4170,_4178))).
	'$catch_and_throw'(_4214,_4216,_4218,_4226):-raise_exception(_4214,_4226).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024catch_and_throw_3__1(Prolog* mach);
	static Operation* exec_pred_$0024catch_and_throw_3__2(Prolog* mach);
	};


	/* System pred unify(_4344,_4342,_4352) */
	/* System pred '$unify'(_4376,_4378,_4386) */
	/* System pred \=(_4410,_4412,_4420) */
	/* System pred '$not_unifiable'(_4444,_4446,_4454) */
	/* System pred var(_4712,_4720) */
	/* System pred atom(_4740,_4748) */
	/* System pred integer(_4768,_4776) */
	/* System pred long(_4796,_4804) */
	/* System pred float(_4824,_4832) */
	/* System pred atomic(_4852,_4860) */
	/* System pred nonvar(_4880,_4888) */
	/* System pred number(_4908,_4916) */
	/* System pred java(_4936,_4944) */
	/* System pred java(_4964,_4966,_4974) */
	/* System pred closure(_4998,_5006) */
	/* System pred ground(_5026,_5034) */
public:
	class pred_compound_1 : public Code {

	/*
	
	compound(_5054,_5066):-nonvar(_5054,functor(_5054,_5056,_5058,smallerthan(0,_5058,_5066))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_compound_1__1(Prolog* mach);
	};


public:
	class pred_callable_1 : public Code {

	/*
	
	callable(_5104,_5112):-atom(_5104,cut(1,_5112)).
	callable(_5138,_5146):-compound(_5138,cut(1,_5146)).
	callable(_5172,_5180):-closure(_5172,_5180).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_callable_1__1(Prolog* mach);
	static Operation* exec_pred_callable_1__2(Prolog* mach);
	static Operation* exec_pred_callable_1__3(Prolog* mach);
	};


	/* System pred termequal(_5556,_5558,_5566) */
	/* System pred '$equality_of_term'(_5590,_5592,_5600) */
	/* System pred \==(_5624,_5626,_5634) */
	/* System pred '$inequality_of_term'(_5658,_5660,_5668) */
	/* System pred termsmallerthan(_5692,_5694,_5702) */
	/* System pred '$before'(_5726,_5728,_5736) */
	/* System pred termgreaterthan(_5760,_5762,_5770) */
	/* System pred '$after'(_5794,_5796,_5804) */
	/* System pred termsmallerequal(_5828,_5830,_5838) */
	/* System pred '$not_after'(_5862,_5864,_5872) */
	/* System pred termgreaterequal(_5896,_5898,_5906) */
	/* System pred '$not_before'(_5930,_5932,_5940) */
	/* System pred ?=(_5964,_5966,_5974) */
	/* System pred '$identical_or_cannot_unify'(_5998,_6000,_6008) */
public:
	class pred_compare_3 : public Code {

	/*
	
	compare(_6032,_6034,_6036,_6046):-'$compare0'(_6038,_6034,_6036,'$map_compare_op'(_6038,_6032,_6046)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_compare_3__1(Prolog* mach);
	};


public:
	class pred_$0024map_compare_op_2 : public Code {

	/*
	
	'$map_compare_op'(_6082,_6084,_6092):-arithequal(0,_6082,cut(1,unify(=,_6084,_6092))).
	'$map_compare_op'(_6130,_6132,_6140):-smallerthan(_6130,0,cut(1,unify(<,_6132,_6140))).
	'$map_compare_op'(_6178,_6180,_6188):-smallerthan(0,_6178,cut(1,unify(>,_6180,_6188))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024map_compare_op_2__1(Prolog* mach);
	static Operation* exec_pred_$0024map_compare_op_2__2(Prolog* mach);
	static Operation* exec_pred_$0024map_compare_op_2__3(Prolog* mach);
	};


	/* System pred =..(_6294,_6296,_6304) */
	/* System pred copy_term(_6328,_6330,_6338) */
	/* System pred is(_7114,_7116,_7124) */
	/* System pred '$abs'(_7148,_7150,_7158) */
	/* System pred '$asin'(_7182,_7184,_7192) */
	/* System pred '$acos'(_7216,_7218,_7226) */
	/* System pred '$atan'(_7250,_7252,_7260) */
	/* System pred '$bitwise_conj'(_7284,_7286,_7288,_7296) */
	/* System pred '$bitwise_disj'(_7324,_7326,_7328,_7336) */
	/* System pred '$bitwise_exclusive_or'(_7364,_7366,_7368,_7376) */
	/* System pred '$bitwise_neg'(_7404,_7406,_7414) */
	/* System pred '$ceil'(_7438,_7440,_7448) */
	/* System pred '$cos'(_7472,_7474,_7482) */
	/* System pred '$degrees'(_7506,_7508,_7516) */
	/* System pred '$exp'(_7540,_7542,_7550) */
	/* System pred '$float'(_7574,_7576,_7584) */
	/* System pred '$float_integer_part'(_7608,_7610,_7618) */
	/* System pred '$float_fractional_part'(_7642,_7644,_7652) */
	/* System pred '$float_quotient'(_7676,_7678,_7680,_7688) */
	/* System pred '$floor'(_7716,_7718,_7726) */
	/* System pred '$int_quotient'(_7750,_7752,_7754,_7762) */
	/* System pred '$log'(_7790,_7792,_7800) */
	/* System pred '$max'(_7824,_7826,_7828,_7836) */
	/* System pred '$min'(_7864,_7866,_7868,_7876) */
	/* System pred '$minus'(_7904,_7906,_7908,_7916) */
	/* System pred '$mod'(_7944,_7946,_7948,_7956) */
	/* System pred '$multi'(_7984,_7986,_7988,_7996) */
	/* System pred '$plus'(_8024,_8026,_8028,_8036) */
	/* System pred '$pow'(_8064,_8066,_8068,_8076) */
	/* System pred '$radians'(_8104,_8106,_8114) */
	/* System pred '$rint'(_8138,_8140,_8148) */
	/* System pred '$round'(_8172,_8174,_8182) */
	/* System pred '$shift_left'(_8206,_8208,_8210,_8218) */
	/* System pred '$shift_right'(_8246,_8248,_8250,_8258) */
	/* System pred '$sign'(_8286,_8288,_8296) */
	/* System pred '$sin'(_8320,_8322,_8330) */
	/* System pred '$sqrt'(_8354,_8356,_8364) */
	/* System pred '$tan'(_8388,_8390,_8398) */
	/* System pred '$truncate'(_8422,_8424,_8432) */
	/* System pred arithequal(_8734,_8732,_8742) */
	/* System pred '$arith_equal'(_8766,_8768,_8776) */
	/* System pred =\=(_8800,_8802,_8810) */
	/* System pred '$arith_not_equal'(_8834,_8836,_8844) */
public:
	class pred_smallerthan_2 : public Code {

	/*
	
	smallerthan(_8868,_8870,_8878):-smallerthan(_8868,_8870,_8878).
	smallerthan(_9006,_9004,_9014):-smallerthan(_9006,_9004,_9014).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_smallerthan_2__1(Prolog* mach);
	static Operation* exec_pred_smallerthan_2__2(Prolog* mach);
	};


	/* System pred '$less_than'(_8902,_8904,_8912) */
public:
	class pred_smallerorequal_2 : public Code {

	/*
	
	smallerorequal(_8936,_8938,_8946):-smallerorequal(_8936,_8938,_8946).
	smallerorequal(_9074,_9072,_9082):-smallerorequal(_9074,_9072,_9082).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_smallerorequal_2__1(Prolog* mach);
	static Operation* exec_pred_smallerorequal_2__2(Prolog* mach);
	};


	/* System pred '$less_or_equal'(_8970,_8972,_8980) */
	/* System pred '$greater_than'(_9038,_9040,_9048) */
	/* System pred '$greater_or_equal'(_9106,_9108,_9116) */
public:
	class pred_clause_2 : public Code {

	/*
	
	clause(_9242,_9244,_9288):-'$head_to_term'(_9242,_9258,_9248:_9250,clause(_9242,_9244),'$new_internal_database'(_9248,'$check_procedure_permission'(_9248:_9250,access,private_procedure,clause(_9242,_9244),'$clause_internal'(_9248,_9250,_9258,_9272,_9274,copy_term(_9272,(_9258:-_9244),_9288))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_clause_2__1(Prolog* mach);
	};


public:
	class pred_$0024head_to_term_4 : public Code {

	/*
	
	'$head_to_term'(_9368,_9370,_9364:_9358/_9360,_9372,_9380):-'$head_to_term'(_9368,_9370,user,_9364,_9372,functor(_9370,_9358,_9360,_9380)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024head_to_term_4__1(Prolog* mach);
	};


public:
	class pred_$0024head_to_term_5 : public Code {

	/*
	
	'$head_to_term'(_9424,_9426,_9428,_9430,_9432,_9440):-var(_9424,cut(1,illarg(var,_9432,1,_9440))).
	'$head_to_term'(_9486:_9488,_9490,_9492,_9494,_9496,_9504):-cut(1,'$head_to_term'(_9488,_9490,_9486,_9494,_9496,_9504)).
	'$head_to_term'(_9546,_9546,_9548,_9548,_9550,_9558):-callable(_9546,atom(_9548,cut(1,_9558))).
	'$head_to_term'(_9598,_9600,_9602,_9604,_9606,_9618):-illarg(type(callable),_9606,1,_9618).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024head_to_term_5__1(Prolog* mach);
	static Operation* exec_pred_$0024head_to_term_5__2(Prolog* mach);
	static Operation* exec_pred_$0024head_to_term_5__3(Prolog* mach);
	static Operation* exec_pred_$0024head_to_term_5__4(Prolog* mach);
	};


public:
	class pred_$0024new_internal_database_1 : public Code {

	/*
	
	'$new_internal_database'(_9650,_9660):-atom(_9650,'$get_hash_manager'(_9652,'$new_internal_database'(_9652,_9650,_9660))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024new_internal_database_1__1(Prolog* mach);
	};


public:
	class pred_$0024new_internal_database_2 : public Code {

	/*
	
	'$new_internal_database'(_9694,_9696,_9704):-hash_contains_key(_9694,_9696,cut(1,_9704)).
	'$new_internal_database'(_9734,_9736,_9756):-new_hash(_9748,[alias(_9736)],'$init_internal_database'(_9736,_9756)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024new_internal_database_2__1(Prolog* mach);
	static Operation* exec_pred_$0024new_internal_database_2__2(Prolog* mach);
	};


public:
	class pred_$0024init_internal_database_1 : public Code {

	/*
	
	'$init_internal_database'(_9786,_9804):-'$compiled_predicate'(_9786,'$init',0,findall(_9794,_9786:'$init',_9796,cut(1,_9804))).
	'$init_internal_database'(_9844,_9854):-call(_9854).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024init_internal_database_1__1(Prolog* mach);
	static Operation* exec_pred_$0024init_internal_database_1__2(Prolog* mach);
	};


public:
	class pred_$0024defined_internal_database_1 : public Code {

	/*
	
	'$defined_internal_database'(_9868,_9878):-atom(_9868,'$get_hash_manager'(_9870,hash_contains_key(_9870,_9868,_9878))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024defined_internal_database_1__1(Prolog* mach);
	};


public:
	class pred_$0024clause_internal_5 : public Code {

	/*
	
	'$clause_internal'(_9912,_9914,_9916,_9918,_9920,_9932):-hash_contains_key(_9912,_9914,'$get_indices'(_9912,_9914,_9916,_9922,'$get_instances'(_9922,_9924,'$clause_internal0'(_9924,_9918,_9920,_9932)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024clause_internal_5__1(Prolog* mach);
	};


public:
	class pred_$0024clause_internal0_3 : public Code {

	/*
	
	'$clause_internal0'([],_9992,_9994,_10002):-fail(_10002).
	'$clause_internal0'([(_10026,_10028)],_10026,_10028,_10042):-cut(1,_10042).
	'$clause_internal0'(_10066,_10068,_10070,_10084):-'$builtin_member'((_10068,_10070),_10066,_10084).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024clause_internal0_3__1(Prolog* mach);
	static Operation* exec_pred_$0024clause_internal0_3__2(Prolog* mach);
	static Operation* exec_pred_$0024clause_internal0_3__3(Prolog* mach);
	};


public:
	class pred_$0024get_indices_4 : public Code {

	/*
	
	'$get_indices'(_10110,_10112,_10114,_10116,_10156):-'$new_indexing_hash'(_10110,_10112,_10118,'$calc_indexing_key'(_10114,_10120,or((hash_contains_key(_10118,_10120)->hash_get(_10118,_10120,_10116)),hash_get(_10118,var,_10116),_10156))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024get_indices_4__1(Prolog* mach);
	};


public:
	class pred_$0024new_indexing_hash_3 : public Code {

	/*
	
	'$new_indexing_hash'(_10202,_10204,_10206,_10214):-hash_contains_key(_10202,_10204,cut(1,hash_get(_10202,_10204,_10206,_10214))).
	'$new_indexing_hash'(_10256,_10258,_10260,_10268):-new_hash(_10260,hash_put(_10260,all,[],hash_put(_10260,var,[],hash_put(_10260,lis,[],hash_put(_10260,str,[],hash_put(_10256,_10258,_10260,_10268)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024new_indexing_hash_3__1(Prolog* mach);
	static Operation* exec_pred_$0024new_indexing_hash_3__2(Prolog* mach);
	};


public:
	class pred_$0024calc_indexing_key_2 : public Code {

	/*
	
	'$calc_indexing_key'(_10342,all,_10350):-atom(_10342,cut(1,_10350)).
	'$calc_indexing_key'(_10378,_10380,_10390):-arg(1,_10378,_10382,'$calc_indexing_key0'(_10382,_10380,_10390)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024calc_indexing_key_2__1(Prolog* mach);
	static Operation* exec_pred_$0024calc_indexing_key_2__2(Prolog* mach);
	};


public:
	class pred_$0024calc_indexing_key0_2 : public Code {

	/*
	
	'$calc_indexing_key0'(_10424,all,_10432):-var(_10424,cut(1,_10432)).
	'$calc_indexing_key0'(_10460,lis,_10474):-unify([_10464|_10466],_10460,cut(1,_10474)).
	'$calc_indexing_key0'(_10504,str,_10512):-compound(_10504,cut(1,_10512)).
	'$calc_indexing_key0'(_10540,_10542,_10550):-ground(_10540,cut(1,'$term_hash'(_10540,_10542,_10550))).
	'$calc_indexing_key0'(_10586,_10588,_10606):-illarg(type(term),'$calc_indexing_key0'(_10586,_10588),1,_10606).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024calc_indexing_key0_2__1(Prolog* mach);
	static Operation* exec_pred_$0024calc_indexing_key0_2__2(Prolog* mach);
	static Operation* exec_pred_$0024calc_indexing_key0_2__3(Prolog* mach);
	static Operation* exec_pred_$0024calc_indexing_key0_2__4(Prolog* mach);
	static Operation* exec_pred_$0024calc_indexing_key0_2__5(Prolog* mach);
	};


public:
	class pred_$0024check_procedure_permission_4 : public Code {

	/*
	
	'$check_procedure_permission'(_10640:_10634/_10636,_10644,_10646,_10648,_10662):-hash_contains_key(_10640,_10634/_10636,cut(1,_10662)).
	'$check_procedure_permission'(_10704:_10698/_10700,_10708,_10710,_10712,_10744):-'$compiled_predicate_or_builtin'(_10704,_10698,_10700,cut(1,illarg(permission(_10708,_10710,_10704:_10698/_10700,_10734),_10712,_10736,_10744))).
	'$check_procedure_permission'(_10790,_10792,_10794,_10796,_10806):-call(_10806).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024check_procedure_permission_4__1(Prolog* mach);
	static Operation* exec_pred_$0024check_procedure_permission_4__2(Prolog* mach);
	static Operation* exec_pred_$0024check_procedure_permission_4__3(Prolog* mach);
	};


public:
	class pred_initialization_2 : public Code {

	/*
	
	initialization([],_10826,_10834):-cut(1,once(_10826,_10834)).
	initialization([_10864|_10866],_10868,_10876):-'$new_internal_database'(_10864,initialization(_10866,_10868,_10876)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_initialization_2__1(Prolog* mach);
	static Operation* exec_pred_initialization_2__2(Prolog* mach);
	};


public:
	class pred_assert_1 : public Code {

	/*
	
	assert(_11110,_11118):-assertz(_11110,_11118).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_assert_1__1(Prolog* mach);
	};


public:
	class pred_assertz_1 : public Code {

	/*
	
	assertz(_11138,_11172):-'$term_to_clause'(_11138,_11150,_11142:_11144,assertz(_11138),'$new_internal_database'(_11142,'$check_procedure_permission'(_11142:_11144,modify,static_procedure,assertz(_11138),copy_term(_11150,_11162,'$insert'(_11162,_11164,'$update_indexing'(_11142,_11144,_11150,_11164,z,fail(_11172))))))).
	assertz(_11250,_11260):-call(_11260).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_assertz_1__1(Prolog* mach);
	static Operation* exec_pred_assertz_1__2(Prolog* mach);
	};


public:
	class pred_asserta_1 : public Code {

	/*
	
	asserta(_11274,_11308):-'$term_to_clause'(_11274,_11286,_11278:_11280,asserta(_11274),'$new_internal_database'(_11278,'$check_procedure_permission'(_11278:_11280,modify,static_procedure,asserta(_11274),copy_term(_11286,_11298,'$insert'(_11298,_11300,'$update_indexing'(_11278,_11280,_11286,_11300,a,fail(_11308))))))).
	asserta(_11386,_11396):-call(_11396).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_asserta_1__1(Prolog* mach);
	static Operation* exec_pred_asserta_1__2(Prolog* mach);
	};


public:
	class pred_abolish_1 : public Code {

	/*
	
	abolish(_11410,_11442):-'$term_to_predicateindicator'(_11410,_11414:_11416,abolish(_11410),'$new_internal_database'(_11414,'$check_procedure_permission'(_11414:_11416,modify,static_procedure,abolish(_11410),'$new_indexing_hash'(_11414,_11416,_11432,hash_get(_11432,all,_11434,'$erase_all'(_11434,hash_remove(_11414,_11416,fail(_11442)))))))).
	abolish(_11522,_11532):-call(_11532).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_abolish_1__1(Prolog* mach);
	static Operation* exec_pred_abolish_1__2(Prolog* mach);
	};


public:
	class pred_retract_1 : public Code {

	/*
	
	retract(_11546,_11586):-'$clause_to_term'(_11546,_11558,_11550:_11552,retract(_11546),'$new_internal_database'(_11550,'$check_procedure_permission'(_11550:_11552,access,static_procedure,retract(_11546),unify((_11572:-_11574),_11558,'$clause_internal'(_11550,_11552,_11572,_11576,_11578,copy_term(_11576,_11558,'$erase'(_11578,'$rehash_indexing'(_11550,_11552,_11578,_11586)))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_retract_1__1(Prolog* mach);
	};


public:
	class pred_retractall_1 : public Code {

	/*
	
	retractall(_11676,_11716):-'$head_to_term'(_11676,_11688,_11680:_11682,retractall(_11676),'$new_internal_database'(_11680,'$check_procedure_permission'(_11680:_11682,access,static_procedure,retractall(_11676),'$clause_internal'(_11680,_11682,_11688,_11700,_11702,copy_term(_11700,(_11688:-_11708),'$erase'(_11702,'$rehash_indexing'(_11680,_11682,_11702,fail(_11716)))))))).
	retractall(_11802,_11812):-call(_11812).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_retractall_1__1(Prolog* mach);
	static Operation* exec_pred_retractall_1__2(Prolog* mach);
	};


public:
	class pred_$0024term_to_clause_4 : public Code {

	/*
	
	'$term_to_clause'(_11838,_11840,_11834:_11828/_11830,_11842,_11856):-'$term_to_clause'(_11838,_11840,user,_11834,_11842,unify((_11846:-_11848),_11840,functor(_11846,_11828,_11830,_11856))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_to_clause_4__1(Prolog* mach);
	};


public:
	class pred_$0024term_to_clause_5 : public Code {

	/*
	
	'$term_to_clause'(_11908,_11910,_11912,_11914,_11916,_11924):-var(_11908,cut(1,illarg(var,_11916,1,_11924))).
	'$term_to_clause'(_11968,_11970,_11972,_11974,_11976,_11984):-var(_11972,cut(1,illarg(var,_11976,1,_11984))).
	'$term_to_clause'(_12030:_12032,_12034,_12036,_12038,_12040,_12048):-cut(1,'$term_to_clause'(_12032,_12034,_12030,_12038,_12040,_12048)).
	'$term_to_clause'(_12090,_12092,_12094,_12096,_12098,_12114):-not(atom(_12094),cut(1,illarg(type(atom),_12098,1,_12114))).
	'$term_to_clause'((_12160:-_12162),(_12166:-_12168),_12170,_12170,_12172,_12180):-cut(1,'$term_to_head'(_12160,_12166,_12170,_12172,'$term_to_body'(_12162,_12168,_12170,_12172,_12180))).
	'$term_to_clause'(_12238,(_12234:-true),_12240,_12240,_12242,_12250):-'$term_to_head'(_12238,_12234,_12240,_12242,_12250).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_to_clause_5__1(Prolog* mach);
	static Operation* exec_pred_$0024term_to_clause_5__2(Prolog* mach);
	static Operation* exec_pred_$0024term_to_clause_5__3(Prolog* mach);
	static Operation* exec_pred_$0024term_to_clause_5__4(Prolog* mach);
	static Operation* exec_pred_$0024term_to_clause_5__5(Prolog* mach);
	static Operation* exec_pred_$0024term_to_clause_5__6(Prolog* mach);
	};


public:
	class pred_$0024term_to_head_4 : public Code {

	/*
	
	'$term_to_head'(_12284,_12284,_12286,_12288,_12296):-atom(_12284,cut(1,_12296)).
	'$term_to_head'(_12328,_12328,_12330,_12332,_12340):-compound(_12328,cut(1,_12340)).
	'$term_to_head'(_12372,_12374,_12376,_12378,_12390):-illarg(type(callable),_12378,1,_12390).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_to_head_4__1(Prolog* mach);
	static Operation* exec_pred_$0024term_to_head_4__2(Prolog* mach);
	static Operation* exec_pred_$0024term_to_head_4__3(Prolog* mach);
	};


public:
	class pred_$0024term_to_body_4 : public Code {

	/*
	
	'$term_to_body'(_12420,_12422,_12424,_12426,_12434):-'$localize_body'(_12420,_12424,_12422,_12434).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_to_body_4__1(Prolog* mach);
	};


public:
	class pred_$0024localize_body_3 : public Code {

	/*
	
	'$localize_body'(_12464,_12466,_12468,_12480):-var(_12464,cut(1,'$localize_body'(call(_12464),_12466,_12468,_12480))).
	'$localize_body'(_12522:_12524,_12526,_12528,_12536):-cut(1,'$localize_body'(_12524,_12522,_12528,_12536)).
	'$localize_body'((_12572,_12574),_12582,(_12578,_12580),_12590):-cut(1,'$localize_body'(_12572,_12582,_12578,'$localize_body'(_12574,_12582,_12580,_12590))).
	'$localize_body'((_12636->_12638),_12646,(_12642->_12644),_12654):-cut(1,'$localize_body'(_12636,_12646,_12642,'$localize_body'(_12638,_12646,_12644,_12654))).
	'$localize_body'((_12700;_12702),_12710,(_12706;_12708),_12718):-cut(1,'$localize_body'(_12700,_12710,_12706,'$localize_body'(_12702,_12710,_12708,_12718))).
	'$localize_body'(_12762,_12764,_12766,_12794):-functor(_12762,_12768,_12770,'$builtin_meta_predicates'(_12768,_12770,_12772,cut(1,=..(_12762,[_12768|_12778],'$localize_args'(_12772,_12778,_12764,_12780,=..(_12766,[_12768|_12780],_12794)))))).
	'$localize_body'(_12870,_12868,call(_12868:_12870),_12882):-var(_12868,cut(1,_12882)).
	'$localize_body'(_12912,user,_12912,_12920):-cut(1,_12920).
	'$localize_body'(_12944,_12946,_12944,_12954):-system_predicate(_12944,cut(1,_12954)).
	'$localize_body'(_12988,_12986,_12986:_12988,_12998):-call(_12998).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__1(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__2(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__3(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__4(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__5(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__6(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__7(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__8(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__9(Prolog* mach);
	static Operation* exec_pred_$0024localize_body_3__10(Prolog* mach);
	};


public:
	class pred_$0024localize_args_4 : public Code {

	/*
	
	'$localize_args'([],[],_13016,[],_13024):-cut(1,_13024).
	'$localize_args'([:|_13054],[_13058|_13060],_13064,[_13064:_13058|_13072],_13096):-or(var(_13058),_13058\=_13080:_13082,cut(1,'$localize_args'(_13054,_13060,_13064,_13072,_13096))).
	'$localize_args'([_13144|_13146],[_13150|_13152],_13160,[_13150|_13158],_13168):-'$localize_args'(_13146,_13152,_13160,_13158,_13168).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024localize_args_4__1(Prolog* mach);
	static Operation* exec_pred_$0024localize_args_4__2(Prolog* mach);
	static Operation* exec_pred_$0024localize_args_4__3(Prolog* mach);
	};


public:
	class pred_$0024builtin_meta_predicates_3 : public Code {

	/*
	
	'$builtin_meta_predicates'(^,2,[?,:],_13220):-call(_13220).
	'$builtin_meta_predicates'(call,1,[:],_13252):-call(_13252).
	'$builtin_meta_predicates'(once,1,[:],_13284):-call(_13284).
	'$builtin_meta_predicates'(\+,1,[:],_13316):-call(_13316).
	'$builtin_meta_predicates'(findall,3,[?,:,?],_13360):-call(_13360).
	'$builtin_meta_predicates'(setof,3,[?,:,?],_13404):-call(_13404).
	'$builtin_meta_predicates'(bagof,3,[?,:,?],_13448):-call(_13448).
	'$builtin_meta_predicates'(on_exception,3,[?,:,:],_13492):-call(_13492).
	'$builtin_meta_predicates'(catch,3,[:,?,:],_13536):-call(_13536).
	'$builtin_meta_predicates'(synchronized,2,[?,:],_13574):-call(_13574).
	'$builtin_meta_predicates'(freeze,2,[?,:],_13612):-call(_13612).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__1(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__2(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__3(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__4(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__5(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__6(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__7(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__8(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__9(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__10(Prolog* mach);
	static Operation* exec_pred_$0024builtin_meta_predicates_3__11(Prolog* mach);
	};


public:
	class pred_$0024clause_to_term_4 : public Code {

	/*
	
	'$clause_to_term'(_13642,_13644,_13638:_13632/_13634,_13646,_13660):-'$clause_to_term'(_13642,_13644,user,_13638,_13646,unify((_13650:-_13652),_13644,functor(_13650,_13632,_13634,_13660))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024clause_to_term_4__1(Prolog* mach);
	};


public:
	class pred_$0024clause_to_term_5 : public Code {

	/*
	
	'$clause_to_term'(_13712,_13714,_13716,_13718,_13720,_13728):-var(_13712,cut(1,illarg(var,_13720,1,_13728))).
	'$clause_to_term'(_13772,_13774,_13776,_13778,_13780,_13788):-var(_13776,cut(1,illarg(var,_13780,1,_13788))).
	'$clause_to_term'(_13834:_13836,_13838,_13840,_13842,_13844,_13852):-cut(1,'$clause_to_term'(_13836,_13838,_13834,_13842,_13844,_13852)).
	'$clause_to_term'(_13894,_13896,_13898,_13900,_13902,_13918):-not(atom(_13898),cut(1,illarg(type(atom),_13902,1,_13918))).
	'$clause_to_term'((_13964:-_13966),(_13970:-_13966),_13974,_13974,_13976,_13986):-cut(1,'$head_to_term'(_13964,_13970,_13978,_13976,_13986)).
	'$clause_to_term'(_14032,(_14028:-true),_14034,_14034,_14036,_14046):-'$head_to_term'(_14032,_14028,_14038,_14036,_14046).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024clause_to_term_5__1(Prolog* mach);
	static Operation* exec_pred_$0024clause_to_term_5__2(Prolog* mach);
	static Operation* exec_pred_$0024clause_to_term_5__3(Prolog* mach);
	static Operation* exec_pred_$0024clause_to_term_5__4(Prolog* mach);
	static Operation* exec_pred_$0024clause_to_term_5__5(Prolog* mach);
	static Operation* exec_pred_$0024clause_to_term_5__6(Prolog* mach);
	};


public:
	class pred_$0024term_to_predicateindicator_3 : public Code {

	/*
	
	'$term_to_predicateindicator'(_14086,_14082:_14084,_14088,_14096):-'$term_to_predicateindicator'(_14086,_14084,user,_14082,_14088,_14096).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_3__1(Prolog* mach);
	};


public:
	class pred_$0024term_to_predicateindicator_5 : public Code {

	/*
	
	'$term_to_predicateindicator'(_14128,_14130,_14132,_14134,_14136,_14144):-var(_14128,cut(1,illarg(var,_14136,1,_14144))).
	'$term_to_predicateindicator'(_14188,_14190,_14192,_14194,_14196,_14204):-var(_14192,cut(1,illarg(var,_14196,1,_14204))).
	'$term_to_predicateindicator'(_14250:_14252,_14254,_14256,_14258,_14260,_14268):-cut(1,'$term_to_predicateindicator'(_14252,_14254,_14250,_14258,_14260,_14268)).
	'$term_to_predicateindicator'(_14310,_14312,_14314,_14316,_14318,_14336):- \=(_14310,_14322/_14324,cut(1,illarg(type(predicate_indicator),_14318,1,_14336))).
	'$term_to_predicateindicator'(_14384/_14386,_14388,_14390,_14392,_14394,_14410):-not(atom(_14384),cut(1,illarg(type(atom),_14394,1,_14410))).
	'$term_to_predicateindicator'(_14456/_14458,_14460,_14462,_14464,_14466,_14482):-not(integer(_14458),cut(1,illarg(type(integer),_14466,1,_14482))).
	'$term_to_predicateindicator'(_14526,_14526,_14528,_14528,_14530,_14540):-call(_14540).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_5__1(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_5__2(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_5__3(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_5__4(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_5__5(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_5__6(Prolog* mach);
	static Operation* exec_pred_$0024term_to_predicateindicator_5__7(Prolog* mach);
	};


public:
	class pred_$0024update_indexing_5 : public Code {

	/*
	
	'$update_indexing'(_14562,_14564,_14566,_14568,_14570,_14582):-'$new_indexing_hash'(_14562,_14564,_14572,'$gen_indexing_keys'(_14566,_14572,_14574,'$update_indexing_hash'(_14570,_14574,_14572,_14568,_14582))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024update_indexing_5__1(Prolog* mach);
	};


public:
	class pred_$0024gen_indexing_keys_3 : public Code {

	/*
	
	'$gen_indexing_keys'((_14638:-_14640),_14648,[all],_14656):-atom(_14638,cut(1,_14656)).
	'$gen_indexing_keys'((_14688:-_14690),_14692,_14694,_14704):-arg(1,_14688,_14696,'$gen_indexing_keys0'(_14696,_14692,_14694,_14704)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024gen_indexing_keys_3__1(Prolog* mach);
	static Operation* exec_pred_$0024gen_indexing_keys_3__2(Prolog* mach);
	};


public:
	class pred_$0024gen_indexing_keys0_3 : public Code {

	/*
	
	'$gen_indexing_keys0'(_14742,_14744,_14746,_14754):-var(_14742,cut(1,hash_keys(_14744,_14746,_14754))).
	'$gen_indexing_keys0'(_14804,_14806,[all,lis],_14820):-unify([_14810|_14812],_14804,cut(1,_14820)).
	'$gen_indexing_keys0'(_14864,_14866,[all,str],_14874):-compound(_14864,cut(1,_14874)).
	'$gen_indexing_keys0'(_14916,_14918,[all,_14912],_14960):-ground(_14916,cut(1,'$term_hash'(_14916,_14912,or((hash_contains_key(_14918,_14912)->true),(hash_get(_14918,var,_14938),hash_put(_14918,_14912,_14938)),_14960)))).
	'$gen_indexing_keys0'(_15006,_15008,_15010,_15030):-illarg(type(term),'$gen_indexing_keys0'(_15006,_15008,_15010),1,_15030).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024gen_indexing_keys0_3__1(Prolog* mach);
	static Operation* exec_pred_$0024gen_indexing_keys0_3__2(Prolog* mach);
	static Operation* exec_pred_$0024gen_indexing_keys0_3__3(Prolog* mach);
	static Operation* exec_pred_$0024gen_indexing_keys0_3__4(Prolog* mach);
	static Operation* exec_pred_$0024gen_indexing_keys0_3__5(Prolog* mach);
	};


public:
	class pred_$0024update_indexing_hash_4 : public Code {

	/*
	
	'$update_indexing_hash'(a,_15058,_15060,_15062,_15070):-cut(1,'$hash_addz_all'(_15058,_15060,_15062,_15070)).
	'$update_indexing_hash'(z,_15106,_15108,_15110,_15118):-cut(1,'$hash_adda_all'(_15106,_15108,_15110,_15118)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024update_indexing_hash_4__1(Prolog* mach);
	static Operation* exec_pred_$0024update_indexing_hash_4__2(Prolog* mach);
	};


public:
	class pred_$0024hash_adda_all_3 : public Code {

	/*
	
	'$hash_adda_all'([],_15154,_15156,_15164):-cut(1,_15164).
	'$hash_adda_all'([_15190|_15192],_15194,_15196,_15204):-'$hash_adda'(_15194,_15190,_15196,'$hash_adda_all'(_15192,_15194,_15196,_15204)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024hash_adda_all_3__1(Prolog* mach);
	static Operation* exec_pred_$0024hash_adda_all_3__2(Prolog* mach);
	};


public:
	class pred_$0024hash_addz_all_3 : public Code {

	/*
	
	'$hash_addz_all'([],_15242,_15244,_15252):-cut(1,_15252).
	'$hash_addz_all'([_15278|_15280],_15282,_15284,_15292):-'$hash_addz'(_15282,_15278,_15284,'$hash_addz_all'(_15280,_15282,_15284,_15292)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024hash_addz_all_3__1(Prolog* mach);
	static Operation* exec_pred_$0024hash_addz_all_3__2(Prolog* mach);
	};


public:
	class pred_$0024erase_all_1 : public Code {

	/*
	
	'$erase_all'([],_15336):-cut(1,_15336).
	'$erase_all'([_15358|_15360],_15368):-'$erase'(_15358,'$erase_all'(_15360,_15368)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024erase_all_1__1(Prolog* mach);
	static Operation* exec_pred_$0024erase_all_1__2(Prolog* mach);
	};


public:
	class pred_$0024rehash_indexing_3 : public Code {

	/*
	
	'$rehash_indexing'(_15394,_15396,_15398,_15410):-'$new_indexing_hash'(_15394,_15396,_15400,hash_keys(_15400,_15402,'$remove_index_all'(_15402,_15400,_15398,_15410))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024rehash_indexing_3__1(Prolog* mach);
	};


public:
	class pred_$0024remove_index_all_3 : public Code {

	/*
	
	'$remove_index_all'([],_15456,_15458,_15466):-cut(1,_15466).
	'$remove_index_all'([_15492|_15494],_15496,_15498,_15506):-'$hash_remove_first'(_15496,_15492,_15498,'$remove_index_all'(_15494,_15496,_15498,_15506)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024remove_index_all_3__1(Prolog* mach);
	static Operation* exec_pred_$0024remove_index_all_3__2(Prolog* mach);
	};


public:
	class pred_findall_3 : public Code {

	/*
	
	findall(_15646,_15648,_15650,_15660):-callable(_15648,cut(1,new_hash(_15652,'$findall'(_15652,_15646,_15648,_15650,_15660)))).
	findall(_15708,_15710,_15712,_15732):-illarg(type(callable),findall(_15708,_15710,_15712),2,_15732).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_findall_3__1(Prolog* mach);
	static Operation* exec_pred_findall_3__2(Prolog* mach);
	};


public:
	class pred_$0024findall_4 : public Code {

	/*
	
	'$findall'(_15760,_15762,_15764,_15766,_15776):-call(_15764,copy_term(_15762,_15768,'$hash_addz'(_15760,'$FINDALL',_15768,fail(_15776)))).
	'$findall'(_15824,_15826,_15828,_15830,_15838):-hash_get(_15824,'$FINDALL',_15830,_15838).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024findall_4__1(Prolog* mach);
	static Operation* exec_pred_$0024findall_4__2(Prolog* mach);
	};


public:
	class pred_bagof_3 : public Code {

	/*
	
	bagof(_15868,_15870,_15872,_15880):-callable(_15870,cut(1,'$bagof'(_15868,_15870,_15872,_15880))).
	bagof(_15920,_15922,_15924,_15944):-illarg(type(callable),bagof(_15920,_15922,_15924),2,_15944).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_bagof_3__1(Prolog* mach);
	static Operation* exec_pred_bagof_3__2(Prolog* mach);
	};


public:
	class pred_setof_3 : public Code {

	/*
	
	setof(_15972,_15974,_15976,_15986):-callable(_15974,cut(1,'$bagof'(_15972,_15974,_15978,sort(_15978,_15976,_15986)))).
	setof(_16034,_16036,_16038,_16058):-illarg(type(callable),setof(_16034,_16036,_16038),2,_16058).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_setof_3__1(Prolog* mach);
	static Operation* exec_pred_setof_3__2(Prolog* mach);
	};


public:
	class pred_$0024bagof_3 : public Code {

	/*
	
	'$bagof'(_16086,_16088,_16090,_16118):-'$free_variables_set'(_16088,_16086,_16092,\==(_16092,[],cut(1,=..(_16100,['$witness'|_16092],findall(_16100+_16086,_16088,_16108,'$bagof_instances'(_16108,_16100,_16110,unify(_16110,_16090,_16118))))))).
	'$bagof'(_16196,_16198,_16200,_16208):-findall(_16196,_16198,_16200,\==(_16200,[],_16208)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024bagof_3__1(Prolog* mach);
	static Operation* exec_pred_$0024bagof_3__2(Prolog* mach);
	};


public:
	class pred_$0024bagof_instances_3 : public Code {

	/*
	
	'$bagof_instances'([],_16244,_16246,_16254):-fail(_16254).
	'$bagof_instances'(_16276,_16278,_16280,_16324):-unify([_16284+_16286|_16292],_16276,'$variants_subset'(_16292,_16284,_16294,_16296,_16298,'$bagof_instances0'(_16298,_16278,_16280,[_16284+_16286|_16294],[_16286|_16296],_16324))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024bagof_instances_3__1(Prolog* mach);
	static Operation* exec_pred_$0024bagof_instances_3__2(Prolog* mach);
	};


public:
	class pred_$0024bagof_instances0_5 : public Code {

	/*
	
	'$bagof_instances0'(_16378,_16380,_16382,_16384,_16386,_16394):-'$unify_witness'(_16384,_16380,unify(_16386,_16382,_16394)).
	'$bagof_instances0'(_16432,_16434,_16436,_16438,_16440,_16448):-'$bagof_instances'(_16432,_16434,_16436,_16448).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024bagof_instances0_5__1(Prolog* mach);
	static Operation* exec_pred_$0024bagof_instances0_5__2(Prolog* mach);
	};


public:
	class pred_$0024variants_subset_5 : public Code {

	/*
	
	'$variants_subset'([],_16480,[],[],[],_16488):-cut(1,_16488).
	'$variants_subset'([_16518+_16520|_16526],_16546,[_16518+_16520|_16538],[_16520|_16544],_16548,_16556):-'$term_variant'(_16546,_16518,cut(1,'$variants_subset'(_16526,_16546,_16538,_16544,_16548,_16556))).
	'$variants_subset'([_16608|_16610],_16618,_16620,_16622,[_16608|_16616],_16630):-'$variants_subset'(_16610,_16618,_16620,_16622,_16616,_16630).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024variants_subset_5__1(Prolog* mach);
	static Operation* exec_pred_$0024variants_subset_5__2(Prolog* mach);
	static Operation* exec_pred_$0024variants_subset_5__3(Prolog* mach);
	};


public:
	class pred_$0024term_variant_2 : public Code {

	/*
	
	'$term_variant'(_16666,_16668,_16678):-new_hash(_16670,'$term_variant'(_16666,_16668,_16670,_16678)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_variant_2__1(Prolog* mach);
	};


public:
	class pred_$0024term_variant_3 : public Code {

	/*
	
	'$term_variant'(_16710,_16712,_16714,_16772):-var(_16710,cut(1,or((hash_contains_key(_16714,_16710)->hash_get(_16714,_16710,_16728),_16712==_16728),(var(_16712),hash_put(_16714,_16710,_16712)),_16772))).
	'$term_variant'(_16810,_16812,_16814,_16822):-ground(_16810,cut(1,termequal(_16810,_16812,_16822))).
	'$term_variant'(_16860,_16862,_16864,_16872):-var(_16862,cut(1,fail(_16872))).
	'$term_variant'([_16908|_16910],[_16914|_16916],_16918,_16926):-cut(1,'$term_variant'(_16908,_16914,_16918,'$term_variant'(_16910,_16916,_16918,_16926))).
	'$term_variant'(_16970,_16972,_16974,_16986):- =..(_16970,_16976,=..(_16972,_16978,'$term_variant'(_16976,_16978,_16974,_16986))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024term_variant_3__1(Prolog* mach);
	static Operation* exec_pred_$0024term_variant_3__2(Prolog* mach);
	static Operation* exec_pred_$0024term_variant_3__3(Prolog* mach);
	static Operation* exec_pred_$0024term_variant_3__4(Prolog* mach);
	static Operation* exec_pred_$0024term_variant_3__5(Prolog* mach);
	};


public:
	class pred_$0024unify_witness_2 : public Code {

	/*
	
	'$unify_witness'([],_17030,_17038):-cut(1,_17038).
	'$unify_witness'([_17062+_17064|_17070],_17062,_17078):-'$unify_witness'(_17070,_17062,_17078).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024unify_witness_2__1(Prolog* mach);
	static Operation* exec_pred_$0024unify_witness_2__2(Prolog* mach);
	};


public:
	class pred_$0024variables_set_2 : public Code {

	/*
	
	'$variables_set'(_17102,_17104,_17112):-'$variables_set'(_17102,[],_17104,_17112).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024variables_set_2__1(Prolog* mach);
	};


public:
	class pred_$0024variables_set_3 : public Code {

	/*
	
	'$variables_set'(_17138,_17140,_17140,_17148):-var(_17138,'$builtin_memq'(_17138,_17140,cut(1,_17148))).
	'$variables_set'(_17188,_17190,[_17188|_17190],_17198):-var(_17188,cut(1,_17198)).
	'$variables_set'(_17228,_17230,_17230,_17238):-atomic(_17228,cut(1,_17238)).
	'$variables_set'([_17270|_17272],_17274,_17276,_17286):-cut(1,'$variables_set'(_17270,_17274,_17278,'$variables_set'(_17272,_17278,_17276,_17286))).
	'$variables_set'(_17330,_17332,_17334,_17344):- =..(_17330,_17336,'$variables_set'(_17336,_17332,_17334,_17344)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024variables_set_3__1(Prolog* mach);
	static Operation* exec_pred_$0024variables_set_3__2(Prolog* mach);
	static Operation* exec_pred_$0024variables_set_3__3(Prolog* mach);
	static Operation* exec_pred_$0024variables_set_3__4(Prolog* mach);
	static Operation* exec_pred_$0024variables_set_3__5(Prolog* mach);
	};


public:
	class pred_$0024builtin_memq_2 : public Code {

	/*
	
	'$builtin_memq'(_17386,[_17382|_17384],_17394):-termequal(_17386,_17382,cut(1,_17394)).
	'$builtin_memq'(_17430,[_17426|_17428],_17438):-'$builtin_memq'(_17430,_17428,_17438).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024builtin_memq_2__1(Prolog* mach);
	static Operation* exec_pred_$0024builtin_memq_2__2(Prolog* mach);
	};


public:
	class pred_$0024existential_variables_set_2 : public Code {

	/*
	
	'$existential_variables_set'(_17462,_17464,_17472):-'$existential_variables_set'(_17462,[],_17464,_17472).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024existential_variables_set_2__1(Prolog* mach);
	};


public:
	class pred_$0024existential_variables_set_3 : public Code {

	/*
	
	'$existential_variables_set'(_17498,_17500,_17500,_17508):-var(_17498,cut(1,_17508)).
	'$existential_variables_set'(_17538,_17540,_17540,_17548):-atomic(_17538,cut(1,_17548)).
	'$existential_variables_set'(_17580:_17582,_17584,_17586,_17594):-cut(1,'$existential_variables_set'(_17582,_17584,_17586,_17594)).
	'$existential_variables_set'(_17630^_17632,_17634,_17636,_17646):-cut(1,'$variables_set'(_17630,_17634,_17638,'$existential_variables_set'(_17632,_17638,_17636,_17646))).
	'$existential_variables_set'('$meta_call'(_17692,_17694,_17696,_17698,_17700),_17702,_17704,_17712):-cut(1,'$existential_variables_set'(_17692,_17702,_17704,_17712)).
	'$existential_variables_set'(_17746,_17748,_17748,_17758):-call(_17758).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024existential_variables_set_3__1(Prolog* mach);
	static Operation* exec_pred_$0024existential_variables_set_3__2(Prolog* mach);
	static Operation* exec_pred_$0024existential_variables_set_3__3(Prolog* mach);
	static Operation* exec_pred_$0024existential_variables_set_3__4(Prolog* mach);
	static Operation* exec_pred_$0024existential_variables_set_3__5(Prolog* mach);
	static Operation* exec_pred_$0024existential_variables_set_3__6(Prolog* mach);
	};


public:
	class pred_$0024free_variables_set_3 : public Code {

	/*
	
	'$free_variables_set'(_17776,_17778,_17780,_17794):-'$variables_set'(_17776,_17782,'$variables_set'(_17778,_17784,'$existential_variables_set'(_17776,_17784,_17786,'$builtin_set_diff'(_17782,_17786,_17780,cut(1,_17794))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024free_variables_set_3__1(Prolog* mach);
	};


public:
	class pred_$0024builtin_set_diff_3 : public Code {

	/*
	
	'$builtin_set_diff'(_17854,_17856,_17858,_17870):-sort(_17854,_17860,sort(_17856,_17862,'$builtin_set_diff0'(_17860,_17862,_17858,_17870))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024builtin_set_diff_3__1(Prolog* mach);
	};


public:
	class pred_$0024builtin_set_diff0_3 : public Code {

	/*
	
	'$builtin_set_diff0'([],_17914,[],_17922):-cut(1,_17922).
	'$builtin_set_diff0'(_17946,[],_17946,_17954):-cut(1,_17954).
	'$builtin_set_diff0'([_17980|_17982],[_17986|_17988],_17990,_17998):-termequal(_17980,_17986,cut(1,'$builtin_set_diff0'(_17982,_17988,_17990,_17998))).
	'$builtin_set_diff0'([_18042|_18044],[_18048|_18050],[_18042|_18056],_18070):-termsmallerthan(_18042,_18048,cut(1,'$builtin_set_diff0'(_18044,[_18048|_18050],_18056,_18070))).
	'$builtin_set_diff0'([_18114|_18116],[_18120|_18122],[_18120|_18128],_18148):-'$builtin_set_diff0'([_18114|_18116],_18122,[_18120|_18128],_18148).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024builtin_set_diff0_3__1(Prolog* mach);
	static Operation* exec_pred_$0024builtin_set_diff0_3__2(Prolog* mach);
	static Operation* exec_pred_$0024builtin_set_diff0_3__3(Prolog* mach);
	static Operation* exec_pred_$0024builtin_set_diff0_3__4(Prolog* mach);
	static Operation* exec_pred_$0024builtin_set_diff0_3__5(Prolog* mach);
	};


public:
	class pred_open_3 : public Code {

	/*
	
	open(_18312,_18314,_18316,_18324):-open(_18312,_18314,_18316,[],_18324).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_open_3__1(Prolog* mach);
	};


public:
	class pred_close_1 : public Code {

	/*
	
	close(_18354,_18362):-close(_18354,[],_18362).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_close_1__1(Prolog* mach);
	};


public:
	class pred_flush_output_0 : public Code {

	/*
	
	flush_output(_18392):-current_output(_18384,flush_output(_18384,_18392)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_flush_output_0__1(Prolog* mach);
	};


public:
	class pred_stream_property_2 : public Code {

	/*
	
	stream_property(_18416,_18418,_18426):-var(_18418,cut(1,'$stream_property'(_18416,_18418,_18426))).
	stream_property(_18462,_18464,_18472):-'$stream_property_specifier'(_18464,cut(1,'$stream_property'(_18462,_18464,_18472))).
	stream_property(_18508,_18510,_18530):-illarg(domain(term,stream_property),stream_property(_18508,_18510),2,_18530).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_stream_property_2__1(Prolog* mach);
	static Operation* exec_pred_stream_property_2__2(Prolog* mach);
	static Operation* exec_pred_stream_property_2__3(Prolog* mach);
	};


public:
	class pred_$0024stream_property_2 : public Code {

	/*
	
	'$stream_property'(_18556,_18558,_18576):-var(_18556,cut(1,'$get_stream_manager'(_18560,hash_map(_18560,_18562,'$builtin_member'((_18556,_18568),_18562,java(_18556,'$builtin_member'(_18558,_18568,_18576))))))).
	'$stream_property'(_18640,_18642,_18654):-java(_18640,cut(1,'$get_stream_manager'(_18644,hash_get(_18644,_18640,_18646,'$builtin_member'(_18642,_18646,_18654))))).
	'$stream_property'(_18706,_18708,_18728):-illarg(domain(stream,stream),stream_property(_18706,_18708),1,_18728).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_2__1(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_2__2(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_2__3(Prolog* mach);
	};


public:
	class pred_$0024stream_property_specifier_1 : public Code {

	/*
	
	'$stream_property_specifier'(input,_18762):-call(_18762).
	'$stream_property_specifier'(output,_18784):-call(_18784).
	'$stream_property_specifier'(alias(_18800),_18810):-call(_18810).
	'$stream_property_specifier'((mode _18826),_18836):-call(_18836).
	'$stream_property_specifier'(type(_18852),_18862):-call(_18862).
	'$stream_property_specifier'(file_name(_18878),_18888):-call(_18888).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_specifier_1__1(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_specifier_1__2(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_specifier_1__3(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_specifier_1__4(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_specifier_1__5(Prolog* mach);
	static Operation* exec_pred_$0024stream_property_specifier_1__6(Prolog* mach);
	};


public:
	class pred_get_char_1 : public Code {

	/*
	
	get_char(_19074,_19084):-current_input(_19076,get_char(_19076,_19074,_19084)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_char_1__1(Prolog* mach);
	};


public:
	class pred_get_code_1 : public Code {

	/*
	
	get_code(_19112,_19122):-current_input(_19114,get_code(_19114,_19112,_19122)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_code_1__1(Prolog* mach);
	};


public:
	class pred_peek_char_1 : public Code {

	/*
	
	peek_char(_19150,_19160):-current_input(_19152,peek_char(_19152,_19150,_19160)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_peek_char_1__1(Prolog* mach);
	};


public:
	class pred_peek_code_1 : public Code {

	/*
	
	peek_code(_19188,_19198):-current_input(_19190,peek_code(_19190,_19188,_19198)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_peek_code_1__1(Prolog* mach);
	};


public:
	class pred_put_char_1 : public Code {

	/*
	
	put_char(_19226,_19236):-current_output(_19228,put_char(_19228,_19226,_19236)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_put_char_1__1(Prolog* mach);
	};


public:
	class pred_put_code_1 : public Code {

	/*
	
	put_code(_19264,_19274):-current_output(_19266,put_code(_19266,_19264,_19274)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_put_code_1__1(Prolog* mach);
	};


public:
	class pred_nl_1 : public Code {

	/*
	
	nl(_19302,_19310):-put_char(_19302,'\n',_19310).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_nl_1__1(Prolog* mach);
	};


public:
	class pred_get0_1 : public Code {

	/*
	
	get0(_19526,_19536):-current_input(_19528,get_code(_19528,_19526,_19536)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get0_1__1(Prolog* mach);
	};


public:
	class pred_get0_2 : public Code {

	/*
	
	get0(_19564,_19566,_19574):-get_code(_19564,_19566,_19574).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get0_2__1(Prolog* mach);
	};


public:
	class pred_get_1 : public Code {

	/*
	
	get(_19598,_19608):-current_input(_19600,get(_19600,_19598,_19608)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_1__1(Prolog* mach);
	};


public:
	class pred_put_1 : public Code {

	/*
	
	put(_19636,_19646):-current_output(_19638,put(_19638,_19636,_19646)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_put_1__1(Prolog* mach);
	};


public:
	class pred_put_2 : public Code {

	/*
	
	put(_19674,_19676,_19686):-is(_19678,_19676,put_code(_19674,_19678,_19686)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_put_2__1(Prolog* mach);
	};


public:
	class pred_tab_1 : public Code {

	/*
	
	tab(_19718,_19728):-current_output(_19720,tab(_19720,_19718,_19728)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_tab_1__1(Prolog* mach);
	};


public:
	class pred_skip_1 : public Code {

	/*
	
	skip(_19756,_19766):-current_input(_19758,skip(_19758,_19756,_19766)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_skip_1__1(Prolog* mach);
	};


public:
	class pred_get_byte_1 : public Code {

	/*
	
	get_byte(_19852,_19862):-current_input(_19854,get_byte(_19854,_19852,_19862)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_get_byte_1__1(Prolog* mach);
	};


public:
	class pred_peek_byte_1 : public Code {

	/*
	
	peek_byte(_19890,_19900):-current_input(_19892,peek_byte(_19892,_19890,_19900)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_peek_byte_1__1(Prolog* mach);
	};


public:
	class pred_put_byte_1 : public Code {

	/*
	
	put_byte(_19928,_19938):-current_output(_19930,put_byte(_19930,_19928,_19938)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_put_byte_1__1(Prolog* mach);
	};


public:
	class pred_read_1 : public Code {

	/*
	
	read(_20126,_20136):-current_input(_20128,read(_20128,_20126,_20136)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_1__1(Prolog* mach);
	};


public:
	class pred_read_2 : public Code {

	/*
	
	read(_20164,_20166,_20178):-read_tokens(_20164,_20168,_20170,parse_tokens(_20166,_20168,cut(1,_20178))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_2__1(Prolog* mach);
	};


public:
	class pred_read_with_variables_2 : public Code {

	/*
	
	read_with_variables(_20218,_20220,_20230):-current_input(_20222,read_with_variables(_20222,_20218,_20220,_20230)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_with_variables_2__1(Prolog* mach);
	};


public:
	class pred_read_with_variables_3 : public Code {

	/*
	
	read_with_variables(_20262,_20264,_20266,_20276):-read_tokens(_20262,_20268,_20266,parse_tokens(_20264,_20268,cut(1,_20276))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_with_variables_3__1(Prolog* mach);
	};


public:
	class pred_read_line_1 : public Code {

	/*
	
	read_line(_20318,_20328):-current_input(_20320,read_line(_20320,_20318,_20328)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_line_1__1(Prolog* mach);
	};


public:
	class pred_read_token_2 : public Code {

	/*
	
	read_token(_20356,_20358,_20376):-'$read_token0'(_20356,_20360,_20362,'$read_token1'([_20360],_20362,_20358,_20376)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_token_2__1(Prolog* mach);
	};


public:
	class pred_$0024read_token1_3 : public Code {

	/*
	
	'$read_token1'([-2],_20420,error(_20420),_20428):-cut(1,_20428).
	'$read_token1'("I",_20460,number(_20460),_20468):-cut(1,_20468).
	'$read_token1'("L",_20500,number(_20500),_20508):-cut(1,_20508).
	'$read_token1'("D",_20540,number(_20540),_20548):-cut(1,_20548).
	'$read_token1'("A",_20580,atom(_20580),_20588):-cut(1,_20588).
	'$read_token1'("V",_20620,var(_20620),_20628):-cut(1,_20628).
	'$read_token1'("S",_20660,string(_20660),_20668):-cut(1,_20668).
	'$read_token1'(_20692,_20694,_20694,_20702):-cut(1,_20702).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__1(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__2(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__3(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__4(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__5(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__6(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__7(Prolog* mach);
	static Operation* exec_pred_$0024read_token1_3__8(Prolog* mach);
	};


public:
	class pred_read_tokens_3 : public Code {

	/*
	
	read_tokens(_20726,_20728,_20730,_20738):-'$read_tokens'(_20726,_20728,_20730,[],cut(1,_20738)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_read_tokens_3__1(Prolog* mach);
	};


public:
	class pred_$0024read_tokens_4 : public Code {

	/*
	
	'$read_tokens'(_20774,_20776,_20778,_20780,_20790):-read_token(_20774,_20782,'$read_tokens1'(_20774,_20782,_20776,_20778,_20780,_20790)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens_4__1(Prolog* mach);
	};


public:
	class pred_$0024read_tokens1_5 : public Code {

	/*
	
	'$read_tokens1'(_20836,error(_20834),[],_20838,_20840,_20848):-cut(1,write(user_error,'{SYNTAX ERROR}',nl(user_error,write(user_error,'** ',write(user_error,_20834,write(user_error,' **',nl(user_error,flush_output(user_error,'$read_tokens_until_fullstop'(_20836,fail(_20848)))))))))).
	'$read_tokens1'(_20948,end_of_file,[end_of_file,'.'],[],_20950,_20958):-cut(1,_20958).
	'$read_tokens1'(_20992,'.',['.'],[],_20994,_21002):-cut(1,_21002).
	'$read_tokens1'(_21058,var('_'),[var('_',_21038)|_21044],['_'=_21038|_21056],_21060,_21080):-cut(1,'$read_tokens'(_21058,_21044,_21056,['_'=_21038|_21060],_21080)).
	'$read_tokens1'(_21136,var(_21122),[var(_21122,_21128)|_21134],_21138,_21140,_21154):-'$mem_pair'(_21122=_21128,_21140,cut(1,'$read_tokens'(_21136,_21134,_21138,_21140,_21154))).
	'$read_tokens1'(_21230,var(_21204),[var(_21204,_21210)|_21216],[_21204=_21210|_21228],_21232,_21252):-cut(1,'$read_tokens'(_21230,_21216,_21228,[_21204=_21210|_21232],_21252)).
	'$read_tokens1'(_21298,_21294,[_21294|_21296],_21300,_21302,_21310):-'$read_tokens'(_21298,_21296,_21300,_21302,_21310).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens1_5__1(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens1_5__2(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens1_5__3(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens1_5__4(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens1_5__5(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens1_5__6(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens1_5__7(Prolog* mach);
	};


public:
	class pred_$0024mem_pair_2 : public Code {

	/*
	
	'$mem_pair'(_21346=_21348,[_21352=_21354|_21360],_21368):-termequal(_21346,_21352,cut(1,unify(_21354,_21348,_21368))).
	'$mem_pair'(_21412,[_21408|_21410],_21420):-'$mem_pair'(_21412,_21410,_21420).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024mem_pair_2__1(Prolog* mach);
	static Operation* exec_pred_$0024mem_pair_2__2(Prolog* mach);
	};


public:
	class pred_$0024read_tokens_until_fullstop_1 : public Code {

	/*
	
	'$read_tokens_until_fullstop'(_21444,_21454):-read_token(_21444,_21446,'$read_tokens_until_fullstop'(_21444,_21446,_21454)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens_until_fullstop_1__1(Prolog* mach);
	};


public:
	class pred_$0024read_tokens_until_fullstop_2 : public Code {

	/*
	
	'$read_tokens_until_fullstop'(_21484,end_of_file,_21492):-cut(1,_21492).
	'$read_tokens_until_fullstop'(_21514,'.',_21522):-cut(1,_21522).
	'$read_tokens_until_fullstop'(_21544,_21546,_21556):-read_token(_21544,_21548,'$read_tokens_until_fullstop'(_21544,_21548,_21556)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens_until_fullstop_2__1(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens_until_fullstop_2__2(Prolog* mach);
	static Operation* exec_pred_$0024read_tokens_until_fullstop_2__3(Prolog* mach);
	};


public:
	class pred_parse_tokens_2 : public Code {

	/*
	
	parse_tokens(_21588,_21590,_21616):-retractall('$tokens'(_21594),assertz('$tokens'(_21590),'$parse_tokens'(_21588,1201,_21590,['.'],retract('$tokens'(_21590),cut(1,_21616))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_parse_tokens_2__1(Prolog* mach);
	};


public:
	class pred_$002D$002D$003E_2 : public Code {

	/*
	
	-->('$parse_tokens'(_21670,_21672),('$parse_tokens_skip_spaces','$parse_tokens1'(_21672,_21678,_21680),!,'$parse_tokens_skip_spaces','$parse_tokens2'(_21672,_21678,_21680,_21670,_21692),!),_21732):-call(_21732).
	-->('$parse_tokens1'(_21750,_21752,_21754),('$parse_tokens_peep_next'(_21758),{'$parse_tokens_is_starter'(_21758)},!,'$parse_tokens_before_op'(_21750,_21752,_21754)),_21802):-call(_21802).
	-->('$parse_tokens1'(_21820,_21822,_21824),('$parse_tokens_peep_next'(_21828),'$parse_tokens_error'([_21828,cannot,start,an,expression])),_21878):-call(_21878).
	-->('$parse_tokens2'(_21896,_21898,_21900,_21898,_21900),('$parse_tokens_peep_next'(_21908),{'$parse_tokens_is_terminator'(_21908)},{_21900=<_21896},!),_21954):-call(_21954).
	-->('$parse_tokens2'(_21972,_21974,_21976,_21978,_21980),('$parse_tokens_peep_next'(_21984),{'$parse_tokens_is_post_in_op'(_21984)},!,'$parse_tokens_post_in_ops'(_21972,_21974,_21976,_21978,_21980)),_22032):-call(_22032).
	-->('$parse_tokens2'(_22050,_22052,_22054,_22056,_22058),'$parse_tokens_error'([operator,expected,after,expression]),_22096):-call(_22096).
	-->('$parse_tokens_before_op'(_22114,_22116,_22118),([' '],!,'$parse_tokens_before_op'(_22114,_22116,_22118)),_22154):-call(_22154).
	-->('$parse_tokens_before_op'(_22172,end_of_file,0),([end_of_file],!),_22198):-call(_22198).
	-->('$parse_tokens_before_op'(_22216,_22218,0),([number(_22218)],!),_22246):-call(_22246).
	-->('$parse_tokens_before_op'(_22264,_22266,0),([atom(-)],[number(_22282)],!,{_22266 is -_22282}),_22330):-call(_22330).
	-->('$parse_tokens_before_op'(_22348,_22350,0),([var(_22356,_22350)],!),_22380):-call(_22380).
	-->('$parse_tokens_before_op'(_22398,_22400,0),([string(_22400)],!),_22428):-call(_22428).
	-->('$parse_tokens_before_op'(_22446,_22448,0),(['('],!,'$parse_tokens'(_22448,1201),'$parse_tokens_expect'(')')),_22494):-call(_22494).
	-->('$parse_tokens_before_op'(_22512,_22514,0),(['{'],!,'$parse_tokens_skip_spaces','$parse_tokens_brace'(_22514)),_22554):-call(_22554).
	-->('$parse_tokens_before_op'(_22572,_22574,0),(['['],!,'$parse_tokens_skip_spaces','$parse_tokens_list'(_22574)),_22614):-call(_22614).
	-->('$parse_tokens_before_op'(_22632,_22634,0),([atom(_22640)],['('],!,'$parse_tokens_skip_spaces','$parse_tokens_args'(_22656),{_22634=..[_22640|_22656]}),_22712):-call(_22712).
	-->('$parse_tokens_before_op'(_22730,_22732,_22734),([atom(_22738)],{current_op(_22734,fx,_22738)},{_22734=<_22730},'$parse_tokens_skip_spaces','$parse_tokens_peep_next'(_22770),{'$parse_tokens_is_starter'(_22770)},{\+'$parse_tokens_is_post_in_op'(_22770)},!,{_22800 is _22734-1},'$parse_tokens'(_22810,_22800),{functor(_22732,_22738,1)},{arg(1,_22732,_22810)}),_22912):-call(_22912).
	-->('$parse_tokens_before_op'(_22930,_22932,_22934),([atom(_22938)],{current_op(_22934,fy,_22938)},{_22934=<_22930},'$parse_tokens_skip_spaces','$parse_tokens_peep_next'(_22970),{'$parse_tokens_is_starter'(_22970)},{\+'$parse_tokens_is_post_in_op'(_22970)},!,'$parse_tokens'(_22994,_22934),{functor(_22932,_22938,1)},{arg(1,_22932,_22994)}),_23090):-call(_23090).
	-->('$parse_tokens_before_op'(_23108,_23110,0),[atom(_23110)],_23132):-call(_23132).
	-->('$parse_tokens_brace'({}),(['}'],!),_23172):-call(_23172).
	-->('$parse_tokens_brace'(_23190),('$parse_tokens'(_23194,1201),'$parse_tokens_expect'('}'),{_23190={_23194}}),_23236):-call(_23236).
	-->('$parse_tokens_list'('[]'),([']'],!),_23276):-call(_23276).
	-->('$parse_tokens_list'([_23294|_23296]),('$parse_tokens'(_23294,999),'$parse_tokens_skip_spaces','$parse_tokens_list_rest'(_23296)),_23332):-call(_23332).
	-->('$parse_tokens_list_rest'(_23350),(['|'],!,'$parse_tokens'(_23350,999),'$parse_tokens_expect'(']')),_23394):-call(_23394).
	-->('$parse_tokens_list_rest'([_23412|_23414]),([','],!,'$parse_tokens'(_23412,999),'$parse_tokens_skip_spaces','$parse_tokens_list_rest'(_23414)),_23468):-call(_23468).
	-->('$parse_tokens_list_rest'('[]'),'$parse_tokens_expect'(']'),_23500):-call(_23500).
	-->('$parse_tokens_args'('[]'),([')'],!),_23540):-call(_23540).
	-->('$parse_tokens_args'([_23558|_23560]),('$parse_tokens'(_23558,999),'$parse_tokens_skip_spaces','$parse_tokens_args_rest'(_23560)),_23596):-call(_23596).
	-->('$parse_tokens_args_rest'([_23614|_23616]),([','],!,'$parse_tokens'(_23614,999),'$parse_tokens_skip_spaces','$parse_tokens_args_rest'(_23616)),_23670):-call(_23670).
	-->('$parse_tokens_args_rest'('[]'),'$parse_tokens_expect'(')'),_23702):-call(_23702).
	-->('$parse_tokens_post_in_ops'(_23720,_23722,_23724,_23726,_23728),('$parse_tokens_skip_spaces',[_23732],'$parse_tokens_op'(_23732,_23720,_23722,_23724,_23746,_23748),'$parse_tokens_post_in_ops'(_23720,_23746,_23748,_23726,_23728)),_23788):-call(_23788).
	-->('$parse_tokens_post_in_ops'(_23806,_23808,_23810,_23808,_23810),{_23810=<_23806},_23834):-call(_23834).
	-->('$parse_tokens_op'(',',_23854,_23856,_23858,_23860,_23862),(!,'$parse_tokens_op'(atom(','),_23854,_23856,_23858,_23860,_23862)),_23896):-call(_23896).
	-->('$parse_tokens_op'('|',_23916,_23918,_23920,_23922,_23924),(!,'$parse_tokens_op'(atom(;),_23916,_23918,_23920,_23922,_23924)),_23958):-call(_23958).
	-->('$parse_tokens_op'(atom(_23976),_23982,_23984,_23986,_23988,_23990),({current_op(_23990,xf,_23976)},{_23990=<_23982},{_23986<_23990},{functor(_23988,_23976,1)},{arg(1,_23988,_23984)}),_24080):-call(_24080).
	-->('$parse_tokens_op'(atom(_24098),_24104,_24106,_24108,_24110,_24112),({current_op(_24112,yf,_24098)},{_24112=<_24104},{_24108=<_24112},{functor(_24110,_24098,1)},{arg(1,_24110,_24106)}),_24202):-call(_24202).
	-->('$parse_tokens_op'(atom(_24220),_24226,_24228,_24230,_24232,_24234),({current_op(_24234,xfx,_24220)},{_24234=<_24226},{_24230<_24234},{_24276 is _24234-1},'$parse_tokens'(_24286,_24276),!,{functor(_24232,_24220,2)},{arg(1,_24232,_24228)},{arg(2,_24232,_24286)}),_24382):-call(_24382).
	-->('$parse_tokens_op'(atom(_24400),_24406,_24408,_24410,_24412,_24414),({current_op(_24414,xfy,_24400)},{_24414=<_24406},{_24410<_24414},{_24450 is _24414},'$parse_tokens'(_24460,_24450),!,{functor(_24412,_24400,2)},{arg(1,_24412,_24408)},{arg(2,_24412,_24460)}),_24556):-call(_24556).
	-->('$parse_tokens_op'(atom(_24574),_24580,_24582,_24584,_24586,_24588),({current_op(_24588,yfx,_24574)},{_24588=<_24580},{_24584=<_24588},{_24630 is _24588-1},'$parse_tokens'(_24640,_24630),!,{functor(_24586,_24574,2)},{arg(1,_24586,_24582)},{arg(2,_24586,_24640)}),_24736):-call(_24736).
	-->('$parse_tokens_expect'(_25248),('$parse_tokens_skip_spaces',[_25248],!),_25276):-call(_25276).
	-->('$parse_tokens_expect'(_25294),'$parse_tokens_error'([_25294,expected]),_25320):-call(_25320).
	-->('$parse_tokens_skip_spaces',([' '],!,'$parse_tokens_skip_spaces'),_25362):-call(_25362).
	-->('$parse_tokens_skip_spaces',[],_25386):-call(_25386).
	
	
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
	static Operation* exec_pred_$002D$002D$003E_2__9(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__10(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__11(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__12(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__13(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__14(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__15(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__16(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__17(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__18(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__19(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__20(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__21(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__22(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__23(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__24(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__25(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__26(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__27(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__28(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__29(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__30(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__31(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__32(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__33(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__34(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__35(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__36(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__37(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__38(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__39(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__40(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__41(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__42(Prolog* mach);
	static Operation* exec_pred_$002D$002D$003E_2__43(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_is_starter_1 : public Code {

	/*
	
	'$parse_tokens_is_starter'(end_of_file,_24760):-call(_24760).
	'$parse_tokens_is_starter'('(',_24782):-call(_24782).
	'$parse_tokens_is_starter'('[',_24804):-call(_24804).
	'$parse_tokens_is_starter'('{',_24826):-call(_24826).
	'$parse_tokens_is_starter'(number(_24842),_24852):-call(_24852).
	'$parse_tokens_is_starter'(atom(_24868),_24878):-call(_24878).
	'$parse_tokens_is_starter'(var(_24894,_24896),_24906):-call(_24906).
	'$parse_tokens_is_starter'(string(_24922),_24932):-call(_24932).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__2(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__3(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__4(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__5(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__6(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__7(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_starter_1__8(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_is_terminator_1 : public Code {

	/*
	
	'$parse_tokens_is_terminator'(')',_24954):-call(_24954).
	'$parse_tokens_is_terminator'(']',_24976):-call(_24976).
	'$parse_tokens_is_terminator'('}',_24998):-call(_24998).
	'$parse_tokens_is_terminator'('.',_25020):-call(_25020).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_terminator_1__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_terminator_1__2(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_terminator_1__3(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_terminator_1__4(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_is_post_in_op_1 : public Code {

	/*
	
	'$parse_tokens_is_post_in_op'(',',_25040):-cut(1,_25040).
	'$parse_tokens_is_post_in_op'('|',_25066):-cut(1,_25066).
	'$parse_tokens_is_post_in_op'(atom(_25088),_25100):-current_op(_25090,_25092,_25088,'$parse_tokens_post_in_type'(_25092,cut(1,_25100))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_post_in_op_1__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_post_in_op_1__2(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_is_post_in_op_1__3(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_post_in_type_1 : public Code {

	/*
	
	'$parse_tokens_post_in_type'(xfx,_25144):-call(_25144).
	'$parse_tokens_post_in_type'(xfy,_25166):-call(_25166).
	'$parse_tokens_post_in_type'(yfx,_25188):-call(_25188).
	'$parse_tokens_post_in_type'(xf,_25210):-call(_25210).
	'$parse_tokens_post_in_type'(yf,_25232):-call(_25232).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_post_in_type_1__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_post_in_type_1__2(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_post_in_type_1__3(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_post_in_type_1__4(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_post_in_type_1__5(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_peep_next_3 : public Code {

	/*
	
	'$parse_tokens_peep_next'(_25402,_25404,_25404,_25418):-unify([_25402|_25410],_25404,_25418).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_peep_next_3__1(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_error_3 : public Code {

	/*
	
	'$parse_tokens_error'(_25444,_25446,_25448,_25462):-write(user_error,'{SYNTAX ERROR}',nl(user_error,write(user_error,'** ','$parse_tokens_write_message'(user_error,_25444,write(user_error,' **',nl(user_error,'$parse_tokens_error1'([],_25446,clause('$tokens'(_25452),_25454,'$parse_tokens_error1'(_25452,_25446,flush_output(user_error,fail(_25462))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error_3__1(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_error1_2 : public Code {

	/*
	
	'$parse_tokens_error1'([],_25558,_25566):-cut(1,_25566).
	'$parse_tokens_error1'(_25588,_25590,_25598):-termequal(_25588,_25590,cut(1,nl(user_error,write(user_error,'** here **',nl(user_error,'$parse_tokens_error1'(_25588,[],nl(user_error,_25598))))))).
	'$parse_tokens_error1'([_25664|_25666],_25668,_25676):-'$parse_tokens_error2'(_25664,'$parse_tokens_error1'(_25666,_25668,_25676)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error1_2__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error1_2__2(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error1_2__3(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_error2_1 : public Code {

	/*
	
	'$parse_tokens_error2'(number(_25708),_25716):-cut(1,write(_25708,_25716)).
	'$parse_tokens_error2'(atom(_25744),_25752):-cut(1,writeq(_25744,_25752)).
	'$parse_tokens_error2'(var(_25780,_25782),_25790):-cut(1,write(_25780,_25790)).
	'$parse_tokens_error2'(string(_25818),_25826):-cut(1,write(user_error,'"','$parse_tokens_write_string'(user_error,_25818,write(user_error,'"',_25826)))).
	'$parse_tokens_error2'(_25870,_25878):-write(user_error,_25870,_25878).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error2_1__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error2_1__2(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error2_1__3(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error2_1__4(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_error2_1__5(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_write_string_2 : public Code {

	/*
	
	'$parse_tokens_write_string'(_25900,[],_25910):-call(_25910).
	'$parse_tokens_write_string'(_25932,[_25928|_25930],_25952):-unify("\"",[_25928],cut(1,put_code(_25932,_25928,put_code(_25932,_25928,'$parse_tokens_write_string'(_25932,_25930,_25952))))).
	'$parse_tokens_write_string'(_26012,[_26008|_26010],_26020):-put_code(_26012,_26008,'$parse_tokens_write_string'(_26012,_26010,_26020)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_write_string_2__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_write_string_2__2(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_write_string_2__3(Prolog* mach);
	};


public:
	class pred_$0024parse_tokens_write_message_2 : public Code {

	/*
	
	'$parse_tokens_write_message'(_26052,[],_26062):-call(_26062).
	'$parse_tokens_write_message'(_26084,[_26080|_26082],_26092):-write(_26084,_26080,write(_26084,' ','$parse_tokens_write_message'(_26084,_26082,_26092))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_write_message_2__1(Prolog* mach);
	static Operation* exec_pred_$0024parse_tokens_write_message_2__2(Prolog* mach);
	};


public:
	class pred_write_1 : public Code {

	/*
	
	write(_26316,_26336):-current_output(_26318,write_term(_26318,_26316,[numbervars(true)],_26336)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_write_1__1(Prolog* mach);
	};


public:
	class pred_write_2 : public Code {

	/*
	
	write(_26366,_26368,_26386):-write_term(_26366,_26368,[numbervars(true)],_26386).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_write_2__1(Prolog* mach);
	};


public:
	class pred_writeq_1 : public Code {

	/*
	
	writeq(_26412,_26442):-current_output(_26414,write_term(_26414,_26412,[quoted(true),numbervars(true)],_26442)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_writeq_1__1(Prolog* mach);
	};


public:
	class pred_writeq_2 : public Code {

	/*
	
	writeq(_26472,_26474,_26502):-write_term(_26472,_26474,[quoted(true),numbervars(true)],_26502).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_writeq_2__1(Prolog* mach);
	};


public:
	class pred_write_canonical_1 : public Code {

	/*
	
	write_canonical(_26528,_26558):-current_output(_26530,write_term(_26530,_26528,[quoted(true),ignore_ops(true)],_26558)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_write_canonical_1__1(Prolog* mach);
	};


public:
	class pred_write_canonical_2 : public Code {

	/*
	
	write_canonical(_26588,_26590,_26618):-write_term(_26588,_26590,[quoted(true),ignore_ops(true)],_26618).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_write_canonical_2__1(Prolog* mach);
	};


public:
	class pred_write_term_2 : public Code {

	/*
	
	write_term(_26644,_26646,_26656):-current_output(_26648,write_term(_26648,_26644,_26646,_26656)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_write_term_2__1(Prolog* mach);
	};


public:
	class pred_write_term_3 : public Code {

	/*
	
	write_term(_26688,_26690,_26692,_26700):-'$write_term'(_26688,_26690,_26692,fail(_26700)).
	write_term(_26732,_26734,_26736,_26746):-call(_26746).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_write_term_3__1(Prolog* mach);
	static Operation* exec_pred_write_term_3__2(Prolog* mach);
	};


public:
	class pred_$0024write_term_3 : public Code {

	/*
	
	'$write_term'(_26764,_26766,_26768,_26778):-'$write_term0'(_26766,1200,punct,_26770,_26768,_26764,cut(1,_26778)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_term_3__1(Prolog* mach);
	};


public:
	class pred_$0024write_term0_6 : public Code {

	/*
	
	'$write_term0'(_26818,_26820,_26822,alpha,_26824,_26826,_26834):-var(_26818,cut(1,'$write_space_if_needed'(_26822,alpha,_26826,'$fast_write'(_26826,_26818,_26834)))).
	'$write_term0'(_26888,_26890,_26892,alpha,_26894,_26896,_26904):-java(_26888,cut(1,'$write_space_if_needed'(_26892,alpha,_26896,'$fast_write'(_26896,_26888,_26904)))).
	'$write_term0'(_26958,_26960,_26962,alpha,_26964,_26966,_26982):-unify('$VAR'(_26970),_26958,integer(_26970,smallerorequal(0,_26970,'$builtin_member'(numbervars(true),_26964,cut(1,'$write_space_if_needed'(_26962,alpha,_26966,'$write_VAR'(_26970,_26966,_26982))))))).
	'$write_term0'(_27060,_27062,_27064,alpha,_27066,_27068,_27076):-number(_27060,smallerthan(_27060,0,cut(1,'$write_space_if_needed'(_27064,symbol,_27068,'$fast_write'(_27068,_27060,_27076))))).
	'$write_term0'(_27138,_27140,_27142,alpha,_27144,_27146,_27154):-number(_27138,cut(1,'$write_space_if_needed'(_27142,alpha,_27146,'$fast_write'(_27146,_27138,_27154)))).
	'$write_term0'(_27208,_27210,_27212,_27214,_27216,_27218,_27226):-atom(_27208,cut(1,'$write_atom'(_27208,_27212,_27214,_27216,_27218,_27226))).
	'$write_term0'(_27276,_27278,_27280,_27282,_27284,_27286,_27310):-not('$builtin_member'(ignore_ops(true),_27284),'$write_is_operator'(_27276,_27298,_27300,_27302,cut(1,'$write_term_op'(_27298,_27302,_27300,_27278,_27280,_27282,_27284,_27286,_27310)))).
	'$write_term0'(_27378,_27380,_27382,punct,_27384,_27386,_27412):-unify([_27390|_27392],_27378,not('$builtin_member'(ignore_ops(true),_27384),cut(1,'$write_space_if_needed'(_27382,punct,_27386,put_char(_27386,'[','$write_term_list_args'(_27378,punct,_27404,_27384,_27386,put_char(_27386,']',_27412))))))).
	'$write_term0'(_27496,_27498,_27500,_27502,_27504,_27506,_27530):-unify({_27510},_27496,not('$builtin_member'(ignore_ops(true),_27504),cut(1,'$write_space_if_needed'(_27500,punct,_27506,put_char(_27506,'{','$write_term0'(_27510,1200,punct,_27522,_27504,_27506,put_char(_27506,'}',_27530))))))).
	'$write_term0'(_27616,_27618,_27620,punct,_27622,_27624,_27642):- =..(_27616,[_27628|_27630],'$write_atom'(_27628,_27620,_27632,_27622,_27624,put_char(_27624,'(','$write_term_args'(_27630,punct,_27634,_27622,_27624,put_char(_27624,')',_27642))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__1(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__2(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__3(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__4(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__5(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__6(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__7(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__8(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__9(Prolog* mach);
	static Operation* exec_pred_$0024write_term0_6__10(Prolog* mach);
	};


public:
	class pred_$0024write_space_if_needed_3 : public Code {

	/*
	
	'$write_space_if_needed'(punct,_27718,_27720,_27728):-cut(1,_27728).
	'$write_space_if_needed'(_27752,_27752,_27754,_27762):-cut(1,put_char(_27754,' ',_27762)).
	'$write_space_if_needed'(other,alpha,_27794,_27802):-cut(1,put_char(_27794,' ',_27802)).
	'$write_space_if_needed'(_27834,_27836,_27838,_27848):-call(_27848).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_space_if_needed_3__1(Prolog* mach);
	static Operation* exec_pred_$0024write_space_if_needed_3__2(Prolog* mach);
	static Operation* exec_pred_$0024write_space_if_needed_3__3(Prolog* mach);
	static Operation* exec_pred_$0024write_space_if_needed_3__4(Prolog* mach);
	};


public:
	class pred_$0024write_VAR_2 : public Code {

	/*
	
	'$write_VAR'(_27866,_27868,_27896):-smallerthan(_27866,26,cut(1,is(_27888,_27866 mod 26+"A",put_code(_27868,_27888,_27896)))).
	'$write_VAR'(_27942,_27944,_27980):-is(_27964,_27942 mod 26+"A",put_code(_27944,_27964,is(_27972,_27942//26,'$fast_write'(_27944,_27972,_27980)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_VAR_2__1(Prolog* mach);
	static Operation* exec_pred_$0024write_VAR_2__2(Prolog* mach);
	};


public:
	class pred_$0024write_atom_5 : public Code {

	/*
	
	'$write_atom'(_28028,_28030,_28032,_28034,_28036,_28048):-'$builtin_member'(quoted(true),_28034,cut(1,'$atom_type'(_28028,_28032,'$write_space_if_needed'(_28030,_28032,_28036,'$fast_writeq'(_28036,_28028,_28048))))).
	'$write_atom'(_28110,_28112,_28114,_28116,_28118,_28126):-'$atom_type'(_28110,_28114,'$write_space_if_needed'(_28112,_28114,_28118,'$fast_write'(_28118,_28110,_28126))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_atom_5__1(Prolog* mach);
	static Operation* exec_pred_$0024write_atom_5__2(Prolog* mach);
	};


public:
	class pred_$0024atom_type_2 : public Code {

	/*
	
	'$atom_type'(_28174,alpha,_28182):-'$atom_type0'(_28174,0,cut(1,_28182)).
	'$atom_type'(_28212,symbol,_28220):-'$atom_type0'(_28212,1,cut(1,_28220)).
	'$atom_type'(_28250,punct,_28258):-'$atom_type0'(_28250,2,cut(1,_28258)).
	'$atom_type'(_28288,other,_28296):-'$atom_type0'(_28288,3,cut(1,_28296)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024atom_type_2__1(Prolog* mach);
	static Operation* exec_pred_$0024atom_type_2__2(Prolog* mach);
	static Operation* exec_pred_$0024atom_type_2__3(Prolog* mach);
	static Operation* exec_pred_$0024atom_type_2__4(Prolog* mach);
	};


public:
	class pred_$0024write_is_operator_4 : public Code {

	/*
	
	'$write_is_operator'(_28326,_28328,_28330,_28332,_28350):-functor(_28326,_28328,_28334,'$write_op_type'(_28334,_28332,current_op(_28336,_28332,_28328,=..(_28326,[_28340|_28330],cut(1,_28350))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_is_operator_4__1(Prolog* mach);
	};


public:
	class pred_$0024write_op_type_2 : public Code {

	/*
	
	'$write_op_type'(1,fx,_28420):-call(_28420).
	'$write_op_type'(1,fy,_28444):-call(_28444).
	'$write_op_type'(1,xf,_28468):-call(_28468).
	'$write_op_type'(1,yf,_28492):-call(_28492).
	'$write_op_type'(2,xfx,_28516):-call(_28516).
	'$write_op_type'(2,xfy,_28540):-call(_28540).
	'$write_op_type'(2,yfx,_28564):-call(_28564).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_op_type_2__1(Prolog* mach);
	static Operation* exec_pred_$0024write_op_type_2__2(Prolog* mach);
	static Operation* exec_pred_$0024write_op_type_2__3(Prolog* mach);
	static Operation* exec_pred_$0024write_op_type_2__4(Prolog* mach);
	static Operation* exec_pred_$0024write_op_type_2__5(Prolog* mach);
	static Operation* exec_pred_$0024write_op_type_2__6(Prolog* mach);
	static Operation* exec_pred_$0024write_op_type_2__7(Prolog* mach);
	};


public:
	class pred_$0024write_term_op_8 : public Code {

	/*
	
	'$write_term_op'(_28580,_28582,_28584,_28586,_28588,punct,_28590,_28592,_28604):-current_op(_28594,_28582,_28580,smallerthan(_28586,_28594,cut(1,'$write_space_if_needed'(_28588,punct,_28592,put_char(_28592,'(','$write_term_op1'(_28580,_28582,_28584,_28594,punct,_28596,_28590,_28592,put_char(_28592,')',_28604))))))).
	'$write_term_op'(_28702,_28704,_28706,_28708,_28710,_28712,_28714,_28716,_28726):-current_op(_28718,_28704,_28702,'$write_term_op1'(_28702,_28704,_28706,_28718,_28710,_28712,_28714,_28716,_28726)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op_8__1(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op_8__2(Prolog* mach);
	};


public:
	class pred_$0024write_term_op1_8 : public Code {

	/*
	
	'$write_term_op1'(_28790,fx,[_28786],_28792,_28794,_28796,_28798,_28800,_28818):-cut(1,'$write_atom'(_28790,_28794,_28802,_28798,_28800,is(_28810,_28792-1,'$write_term0'(_28786,_28810,_28802,_28796,_28798,_28800,_28818)))).
	'$write_term_op1'(_28896,fy,[_28892],_28898,_28900,_28902,_28904,_28906,_28918):-cut(1,'$write_atom'(_28896,_28900,_28908,_28904,_28906,is(_28910,_28898,'$write_term0'(_28892,_28910,_28908,_28902,_28904,_28906,_28918)))).
	'$write_term_op1'(_28996,xf,[_28992],_28998,_29000,_29002,_29004,_29006,_29024):-cut(1,is(_29014,_28998-1,'$write_term0'(_28992,_29014,_29000,_29016,_29004,_29006,'$write_atom'(_28996,_29016,_29002,_29004,_29006,_29024)))).
	'$write_term_op1'(_29102,yf,[_29098],_29104,_29106,_29108,_29110,_29112,_29124):-cut(1,is(_29114,_29104,'$write_term0'(_29098,_29114,_29106,_29116,_29110,_29112,'$write_atom'(_29102,_29116,_29108,_29110,_29112,_29124)))).
	'$write_term_op1'(_29208,xfx,[_29198,_29204],_29210,_29212,_29214,_29216,_29218,_29246):-cut(1,is(_29226,_29210-1,is(_29234,_29210-1,'$write_term0'(_29198,_29226,_29212,_29236,_29216,_29218,'$write_term_infix_op'(_29208,_29236,_29238,_29216,_29218,'$write_term0'(_29204,_29234,_29238,_29214,_29216,_29218,_29246)))))).
	'$write_term_op1'(_29354,xfy,[_29344,_29350],_29356,_29358,_29360,_29362,_29364,_29386):-cut(1,is(_29372,_29356-1,is(_29374,_29356,'$write_term0'(_29344,_29372,_29358,_29376,_29362,_29364,'$write_term_infix_op'(_29354,_29376,_29378,_29362,_29364,'$write_term0'(_29350,_29374,_29378,_29360,_29362,_29364,_29386)))))).
	'$write_term_op1'(_29494,yfx,[_29484,_29490],_29496,_29498,_29500,_29502,_29504,_29526):-cut(1,is(_29506,_29496,is(_29514,_29496-1,'$write_term0'(_29484,_29506,_29498,_29516,_29502,_29504,'$write_term_infix_op'(_29494,_29516,_29518,_29502,_29504,'$write_term0'(_29490,_29514,_29518,_29500,_29502,_29504,_29526)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op1_8__1(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op1_8__2(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op1_8__3(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op1_8__4(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op1_8__5(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op1_8__6(Prolog* mach);
	static Operation* exec_pred_$0024write_term_op1_8__7(Prolog* mach);
	};


public:
	class pred_$0024write_term_infix_op_5 : public Code {

	/*
	
	'$write_term_infix_op'(',',_29622,punct,_29624,_29626,_29634):-cut(1,'$write_space_if_needed'(_29622,punct,_29626,put_char(_29626,',',_29634))).
	'$write_term_infix_op'(_29680,_29682,_29684,_29686,_29688,_29696):-'$write_atom'(_29680,_29682,_29684,_29686,_29688,_29696).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_term_infix_op_5__1(Prolog* mach);
	static Operation* exec_pred_$0024write_term_infix_op_5__2(Prolog* mach);
	};


public:
	class pred_$0024write_term_list_args_5 : public Code {

	/*
	
	'$write_term_list_args'([_29734|_29736],_29738,_29740,_29742,_29744,_29760):-nonvar(_29736,unify([_29748|_29750],_29736,cut(1,'$write_term0'(_29734,999,_29738,_29752,_29742,_29744,'$write_space_if_needed'(_29752,punct,_29744,put_char(_29744,',','$write_term_list_args'(_29736,punct,_29740,_29742,_29744,_29760))))))).
	'$write_term_list_args'([_29852|_29854],_29856,_29858,_29860,_29862,_29870):-nonvar(_29854,unify([],_29854,cut(1,'$write_term0'(_29852,999,_29856,_29858,_29860,_29862,_29870)))).
	'$write_term_list_args'([_29930|_29932],_29934,_29936,_29938,_29940,_29950):-'$write_term0'(_29930,999,_29934,_29942,_29938,_29940,'$write_space_if_needed'(_29942,punct,_29940,put_char(_29940,'|','$write_term0'(_29932,999,punct,_29936,_29938,_29940,_29950)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_term_list_args_5__1(Prolog* mach);
	static Operation* exec_pred_$0024write_term_list_args_5__2(Prolog* mach);
	static Operation* exec_pred_$0024write_term_list_args_5__3(Prolog* mach);
	};


public:
	class pred_$0024write_term_args_5 : public Code {

	/*
	
	'$write_term_args'([],_30022,_30022,_30024,_30026,_30034):-cut(1,_30034).
	'$write_term_args'([_30064],_30068,_30070,_30072,_30074,_30082):-cut(1,'$write_term0'(_30064,999,_30068,_30070,_30072,_30074,_30082)).
	'$write_term_args'([_30128|_30130],_30132,_30134,_30136,_30138,_30148):-cut(1,'$write_term0'(_30128,999,_30132,_30140,_30136,_30138,'$write_space_if_needed'(_30140,punct,_30138,put_char(_30138,',','$write_term_args'(_30130,punct,_30134,_30136,_30138,_30148))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_term_args_5__1(Prolog* mach);
	static Operation* exec_pred_$0024write_term_args_5__2(Prolog* mach);
	static Operation* exec_pred_$0024write_term_args_5__3(Prolog* mach);
	};


public:
	class pred_op_3 : public Code {

	/*
	
	op(_30326,_30328,_30330,_30338):-integer(_30326,smallerorequal(0,_30326,smallerorequal(_30326,1200,cut(1,'$op1'(_30326,_30328,_30330,_30338))))).
	op(_30394,_30396,_30398,_30426):-illarg(domain(integer,0-1200),op(_30394,_30396,_30398),1,_30426).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_op_3__1(Prolog* mach);
	static Operation* exec_pred_op_3__2(Prolog* mach);
	};


public:
	class pred_$0024op1_3 : public Code {

	/*
	
	'$op1'(_30454,_30456,_30458,_30468):-nonvar(_30456,'$op_specifier'(_30456,_30460,cut(1,'$op2'(_30454,_30456,_30458,_30468)))).
	'$op1'(_30516,_30518,_30520,_30550):-findall(_30524,'$op_specifier'(_30524,_30526),_30528,illarg(domain(term,_30528),op(_30516,_30518,_30520),2,_30550)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024op1_3__1(Prolog* mach);
	static Operation* exec_pred_$0024op1_3__2(Prolog* mach);
	};


public:
	class pred_$0024op2_3 : public Code {

	/*
	
	'$op2'(_30588,_30590,_30592,_30606):-atom(_30592,cut(1,'$add_operators'([_30592],_30588,_30590,_30606))).
	'$op2'(_30646,_30648,_30650,_30660):-'$op_atom_list'(_30650,_30652,cut(1,'$add_operators'(_30652,_30646,_30648,_30660))).
	'$op2'(_30702,_30704,_30706,_30730):-illarg(type(list(atom)),op(_30702,_30704,_30706),3,_30730).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024op2_3__1(Prolog* mach);
	static Operation* exec_pred_$0024op2_3__2(Prolog* mach);
	static Operation* exec_pred_$0024op2_3__3(Prolog* mach);
	};


public:
	class pred_$0024add_operators_3 : public Code {

	/*
	
	'$add_operators'([],_30758,_30760,_30768):-cut(1,_30768).
	'$add_operators'([_30794|_30796],_30798,_30800,_30808):-'$add_op'(_30794,_30798,_30800,'$add_operators'(_30796,_30798,_30800,_30808)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024add_operators_3__1(Prolog* mach);
	static Operation* exec_pred_$0024add_operators_3__2(Prolog* mach);
	};


public:
	class pred_$0024add_op_3 : public Code {

	/*
	
	'$add_op'(',',_30846,_30848,_30874):-cut(1,illarg(permission(modify,operator,',',_30858),op(_30846,_30848,','),3,_30874)).
	'$add_op'(_30908,_30910,_30912,_30942):-clause('$current_operator'(_30916,_30918,_30908),_30922,'$op_specifier'(_30912,_30924,'$op_specifier'(_30918,_30926,unify(_30926,_30924,retract('$current_operator'(_30930,_30918,_30908),fail(_30942)))))).
	'$add_op'(_31002,0,_31004,_31012):-cut(1,_31012).
	'$add_op'(_31036,_31038,_31040,_31056):-assertz('$current_operator'(_31038,_31040,_31036),_31056).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024add_op_3__1(Prolog* mach);
	static Operation* exec_pred_$0024add_op_3__2(Prolog* mach);
	static Operation* exec_pred_$0024add_op_3__3(Prolog* mach);
	static Operation* exec_pred_$0024add_op_3__4(Prolog* mach);
	};


public:
	class pred_$0024op_specifier_2 : public Code {

	/*
	
	'$op_specifier'(fx,prefix,_31088):-call(_31088).
	'$op_specifier'(fy,prefix,_31112):-call(_31112).
	'$op_specifier'(xfx,infix,_31136):-call(_31136).
	'$op_specifier'(xfy,infix,_31160):-call(_31160).
	'$op_specifier'(yfx,infix,_31184):-call(_31184).
	'$op_specifier'(xf,postfix,_31208):-call(_31208).
	'$op_specifier'(yf,postfix,_31232):-call(_31232).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024op_specifier_2__1(Prolog* mach);
	static Operation* exec_pred_$0024op_specifier_2__2(Prolog* mach);
	static Operation* exec_pred_$0024op_specifier_2__3(Prolog* mach);
	static Operation* exec_pred_$0024op_specifier_2__4(Prolog* mach);
	static Operation* exec_pred_$0024op_specifier_2__5(Prolog* mach);
	static Operation* exec_pred_$0024op_specifier_2__6(Prolog* mach);
	static Operation* exec_pred_$0024op_specifier_2__7(Prolog* mach);
	};


public:
	class pred_$0024op_atom_list_2 : public Code {

	/*
	
	'$op_atom_list'(_31248,_31250,_31258):-var(_31248,cut(1,fail(_31258))).
	'$op_atom_list'([],[],_31296):-cut(1,_31296).
	'$op_atom_list'([_31320|_31322],[_31320|_31328],_31336):-atom(_31320,cut(1,'$op_atom_list'(_31322,_31328,_31336))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024op_atom_list_2__1(Prolog* mach);
	static Operation* exec_pred_$0024op_atom_list_2__2(Prolog* mach);
	static Operation* exec_pred_$0024op_atom_list_2__3(Prolog* mach);
	};


public:
	class pred_current_op_3 : public Code {

	/*
	
	current_op(_31372,_31374,_31376,_31394):-clause('$current_operator'(_31372,_31374,_31376),_31386,_31394).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_current_op_3__1(Prolog* mach);
	};


public:
	class pred_$0024current_operator_3 : public Code {

	/*
	
	'$current_operator'(1200,xfx,:-,_31428):-call(_31428).
	'$current_operator'(1200,xfx,-->,_31454):-call(_31454).
	'$current_operator'(1200,fx,:-,_31480):-call(_31480).
	'$current_operator'(1200,fx,?-,_31506):-call(_31506).
	'$current_operator'(1150,fx,package,_31532):-call(_31532).
	'$current_operator'(1150,fx,import,_31558):-call(_31558).
	'$current_operator'(1150,fx,include,_31584):-call(_31584).
	'$current_operator'(1150,fx,include_resource,_31610):-call(_31610).
	'$current_operator'(1150,fx,constant,_31636):-call(_31636).
	'$current_operator'(1150,fx,public,_31662):-call(_31662).
	'$current_operator'(1150,fx,dynamic,_31688):-call(_31688).
	'$current_operator'(1150,fx,meta_predicate,_31714):-call(_31714).
	'$current_operator'(1150,fx,mode,_31740):-call(_31740).
	'$current_operator'(1150,fx,multifile,_31766):-call(_31766).
	'$current_operator'(1150,fx,block,_31792):-call(_31792).
	'$current_operator'(1150,fx,ifdef,_31818):-call(_31818).
	'$current_operator'(1150,fx,ifndef,_31844):-call(_31844).
	'$current_operator'(1150,fx,domain,_31870):-call(_31870).
	'$current_operator'(1150,fx,database,_31896):-call(_31896).
	'$current_operator'(1100,xfy,;,_31922):-call(_31922).
	'$current_operator'(1050,xfy,->,_31948):-call(_31948).
	'$current_operator'(1000,xfy,',',_31974):-call(_31974).
	'$current_operator'(900,fy,\+,_32000):-call(_32000).
	'$current_operator'(700,xfx,=,_32026):-call(_32026).
	'$current_operator'(700,xfx,\=,_32052):-call(_32052).
	'$current_operator'(700,xfx,==,_32078):-call(_32078).
	'$current_operator'(700,xfx,\==,_32104):-call(_32104).
	'$current_operator'(700,xfx,@<,_32130):-call(_32130).
	'$current_operator'(700,xfx,@>,_32156):-call(_32156).
	'$current_operator'(700,xfx,@=<,_32182):-call(_32182).
	'$current_operator'(700,xfx,@>=,_32208):-call(_32208).
	'$current_operator'(700,xfx,=..,_32234):-call(_32234).
	'$current_operator'(700,xfx,is,_32260):-call(_32260).
	'$current_operator'(700,xfx,=:=,_32286):-call(_32286).
	'$current_operator'(700,xfx,=\=,_32312):-call(_32312).
	'$current_operator'(700,xfx,<,_32338):-call(_32338).
	'$current_operator'(700,xfx,>,_32364):-call(_32364).
	'$current_operator'(700,xfx,=<,_32390):-call(_32390).
	'$current_operator'(700,xfx,>=,_32416):-call(_32416).
	'$current_operator'(550,xfy,:,_32442):-call(_32442).
	'$current_operator'(500,yfx,+,_32468):-call(_32468).
	'$current_operator'(500,yfx,-,_32494):-call(_32494).
	'$current_operator'(500,yfx,#,_32520):-call(_32520).
	'$current_operator'(500,yfx,/\,_32546):-call(_32546).
	'$current_operator'(500,yfx,\/,_32572):-call(_32572).
	'$current_operator'(500,fx,+,_32598):-call(_32598).
	'$current_operator'(400,yfx,*,_32624):-call(_32624).
	'$current_operator'(400,yfx,/,_32650):-call(_32650).
	'$current_operator'(400,yfx,//,_32676):-call(_32676).
	'$current_operator'(400,yfx,mod,_32702):-call(_32702).
	'$current_operator'(400,yfx,rem,_32728):-call(_32728).
	'$current_operator'(400,yfx,<<,_32754):-call(_32754).
	'$current_operator'(400,yfx,>>,_32780):-call(_32780).
	'$current_operator'(300,xfx,~,_32806):-call(_32806).
	'$current_operator'(200,xfx,**,_32832):-call(_32832).
	'$current_operator'(200,xfy,^,_32858):-call(_32858).
	'$current_operator'(200,fy,\,_32884):-call(_32884).
	'$current_operator'(200,fy,-,_32910):-call(_32910).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__1(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__2(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__3(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__4(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__5(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__6(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__7(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__8(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__9(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__10(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__11(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__12(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__13(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__14(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__15(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__16(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__17(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__18(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__19(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__20(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__21(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__22(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__23(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__24(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__25(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__26(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__27(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__28(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__29(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__30(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__31(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__32(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__33(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__34(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__35(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__36(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__37(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__38(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__39(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__40(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__41(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__42(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__43(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__44(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__45(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__46(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__47(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__48(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__49(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__50(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__51(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__52(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__53(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__54(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__55(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__56(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__57(Prolog* mach);
	static Operation* exec_pred_$0024current_operator_3__58(Prolog* mach);
	};


public:
	class pred_not_1 : public Code {

	/*
	
	not(_33030,_33038):-call(_33030,cut(1,fail(_33038))).
	not(_33068,_33078):-call(_33078).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_not_1__1(Prolog* mach);
	static Operation* exec_pred_not_1__2(Prolog* mach);
	};


public:
	class pred_repeat_0 : public Code {

	/*
	
	repeat(_33100):-call(_33100).
	repeat(_33118):-repeat(_33118).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_repeat_0__1(Prolog* mach);
	static Operation* exec_pred_repeat_0__2(Prolog* mach);
	};


public:
	class pred_once_1 : public Code {

	/*
	
	once(_33134,_33142):-call(_33134,cut(1,_33142)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_once_1__1(Prolog* mach);
	};


public:
	class pred_sub_atom_5 : public Code {

	/*
	
	sub_atom(_33304,_33306,_33308,_33310,_33312,_33326):-atom_concat(_33314,_33316,_33304,atom_length(_33314,_33306,atom_concat(_33312,_33318,_33316,atom_length(_33312,_33308,atom_length(_33318,_33310,_33326))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_sub_atom_5__1(Prolog* mach);
	};


public:
	class pred_name_2 : public Code {

	/*
	
	name(_33392,_33394,_33458):-nonvar(_33392,or((number(_33392)->number_codes(_33392,_33394)),(atomic(_33392)->atom_codes(_33392,_33394);illarg(type(atomic),name(_33392,_33394),1)),_33458)).
	name(_33488,_33490,_33562):-var(_33488,or((number_codes(_33494,_33490)->_33488=_33494),(atom_codes(_33494,_33490)->_33488=_33494;illarg(type(list(char)),name(_33488,_33490),2)),_33562)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_name_2__1(Prolog* mach);
	static Operation* exec_pred_name_2__2(Prolog* mach);
	};


public:
	class pred_regex_matches_3 : public Code {

	/*
	
	regex_matches(_33592,[],_33594,_33602):-cut(1,fail(_33602)).
	regex_matches(_33630,_33632,_33634,_33648):-unify([_33638|_33640],_33632,cut(1,regex_list(_33630,_33632,_33634,_33648))).
	regex_matches(_33690,_33692,_33694,_33704):-atom(_33692,regex_compile(_33690,_33696,regex_match(_33696,_33692,_33694,_33704))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_regex_matches_3__1(Prolog* mach);
	static Operation* exec_pred_regex_matches_3__2(Prolog* mach);
	static Operation* exec_pred_regex_matches_3__3(Prolog* mach);
	};


public:
	class pred_regex_matches_2 : public Code {

	/*
	
	regex_matches(_33746,_33748,_33764):-once(regex_matches(_33746,_33748,_33756),_33764).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_regex_matches_2__1(Prolog* mach);
	};


public:
	class pred_regex_list_3 : public Code {

	/*
	
	regex_list(_33792,[_33788|_33790],_33794,_33802):-regex_matches(_33792,_33788,_33794,_33802).
	regex_list(_33836,[_33832|_33834],_33838,_33846):-regex_list(_33836,_33834,_33838,_33846).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_regex_list_3__1(Prolog* mach);
	static Operation* exec_pred_regex_list_3__2(Prolog* mach);
	};


public:
	class pred_set_prolog_flag_2 : public Code {

	/*
	
	set_prolog_flag(_33942,_33944,_33958):-var(_33942,cut(1,illarg(var,set_prolog_flag(_33942,_33944),1,_33958))).
	set_prolog_flag(_33996,_33998,_34012):-var(_33998,cut(1,illarg(var,set_prolog_flag(_33996,_33998),2,_34012))).
	set_prolog_flag(_34050,_34052,_34060):-atom(_34050,cut(1,'$set_prolog_flag0'(_34050,_34052,_34060))).
	set_prolog_flag(_34096,_34098,_34116):-illarg(type(atom),set_prolog_flag(_34096,_34098),1,_34116).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_set_prolog_flag_2__1(Prolog* mach);
	static Operation* exec_pred_set_prolog_flag_2__2(Prolog* mach);
	static Operation* exec_pred_set_prolog_flag_2__3(Prolog* mach);
	static Operation* exec_pred_set_prolog_flag_2__4(Prolog* mach);
	};


public:
	class pred_$0024set_prolog_flag0_2 : public Code {

	/*
	
	'$set_prolog_flag0'(_34142,_34144,_34158):-'$prolog_impl_flag'(_34142,_34150,changeable(_34148),cut(1,'$set_prolog_flag0'(_34148,_34142,_34144,_34150,_34158))).
	'$set_prolog_flag0'(_34202,_34204,_34224):-illarg(domain(atom,prolog_flag),set_prolog_flag(_34202,_34204),1,_34224).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024set_prolog_flag0_2__1(Prolog* mach);
	static Operation* exec_pred_$0024set_prolog_flag0_2__2(Prolog* mach);
	};


public:
	class pred_$0024set_prolog_flag0_4 : public Code {

	/*
	
	'$set_prolog_flag0'(no,_34250,_34252,_34254,_34280):-cut(1,illarg(permission(modify,flag,_34250,_34264),set_prolog_flag(_34250,_34252),_34272,_34280)).
	'$set_prolog_flag0'(_34316,_34318,_34320,_34322,_34330):-'$builtin_member'(_34320,_34322,cut(1,'$set_prolog_impl_flag'(_34318,_34320,_34330))).
	'$set_prolog_flag0'(_34372,_34374,_34376,_34378,_34398):-illarg(domain(atom,flag_value),set_prolog_flag(_34374,_34376),2,_34398).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024set_prolog_flag0_4__1(Prolog* mach);
	static Operation* exec_pred_$0024set_prolog_flag0_4__2(Prolog* mach);
	static Operation* exec_pred_$0024set_prolog_flag0_4__3(Prolog* mach);
	};


public:
	class pred_current_prolog_flag_2 : public Code {

	/*
	
	current_prolog_flag(_34428,_34430,_34442):-var(_34428,cut(1,'$prolog_impl_flag'(_34428,_34432,_34434,'$get_prolog_impl_flag'(_34428,_34430,_34442)))).
	current_prolog_flag(_34488,_34490,_34538):-atom(_34488,cut(1,or(('$prolog_impl_flag'(_34488,_34496,_34498)->'$get_prolog_impl_flag'(_34488,_34490)),illarg(domain(atom,prolog_flag),current_prolog_flag(_34488,_34490),1),_34538))).
	current_prolog_flag(_34574,_34576,_34594):-illarg(type(atom),current_prolog_flag(_34574,_34576),1,_34594).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_current_prolog_flag_2__1(Prolog* mach);
	static Operation* exec_pred_current_prolog_flag_2__2(Prolog* mach);
	static Operation* exec_pred_current_prolog_flag_2__3(Prolog* mach);
	};


public:
	class pred_$0024prolog_impl_flag_3 : public Code {

	/*
	
	'$prolog_impl_flag'(max_integer,_34624,changeable(no),_34634):-call(_34634).
	'$prolog_impl_flag'(min_integer,_34656,changeable(no),_34666):-call(_34666).
	'$prolog_impl_flag'(debug,[on,off],changeable(yes),_34708):-call(_34708).
	'$prolog_impl_flag'(max_arity,_34730,changeable(no),_34740):-call(_34740).
	'$prolog_impl_flag'(unknown,[error,fail,warning],changeable(yes),_34788):-call(_34788).
	'$prolog_impl_flag'(double_quotes,[chars,codes,atom],changeable(no),_34836):-call(_34836).
	'$prolog_impl_flag'(print_stack_trace,[on,off],changeable(yes),_34878):-call(_34878).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024prolog_impl_flag_3__1(Prolog* mach);
	static Operation* exec_pred_$0024prolog_impl_flag_3__2(Prolog* mach);
	static Operation* exec_pred_$0024prolog_impl_flag_3__3(Prolog* mach);
	static Operation* exec_pred_$0024prolog_impl_flag_3__4(Prolog* mach);
	static Operation* exec_pred_$0024prolog_impl_flag_3__5(Prolog* mach);
	static Operation* exec_pred_$0024prolog_impl_flag_3__6(Prolog* mach);
	static Operation* exec_pred_$0024prolog_impl_flag_3__7(Prolog* mach);
	};


public:
	class pred_halt_0 : public Code {

	/*
	
	halt(_34970):-halt(0,_34970).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_halt_0__1(Prolog* mach);
	};


public:
	class pred_abort_0 : public Code {

	/*
	
	abort(_34994):-raise_exception('Execution aborted',_34994).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_abort_0__1(Prolog* mach);
	};


public:
	class pred_C_3 : public Code {

	/*
	
	'C'([_35060|_35062],_35060,_35062,_35072):-call(_35072).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_C_3__1(Prolog* mach);
	};


public:
	class pred_expand_term_2 : public Code {

	/*
	
	expand_term(_35090,_35092,_35100):-var(_35090,cut(1,unify(_35092,_35090,_35100))).
	expand_term(_35136,_35138,_35148):-'$dcg_expansion'(_35136,_35140,cut(1,unify(_35138,_35140,_35148))).
	expand_term(_35186,_35186,_35196):-call(_35196).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_expand_term_2__1(Prolog* mach);
	static Operation* exec_pred_expand_term_2__2(Prolog* mach);
	static Operation* exec_pred_expand_term_2__3(Prolog* mach);
	};


public:
	class pred_$0024dcg_expansion_2 : public Code {

	/*
	
	'$dcg_expansion'(_35212,_35214,_35222):-var(_35212,cut(1,unify(_35214,_35212,_35222))).
	'$dcg_expansion'((_35260-->_35262),(_35272:-_35266,_35268),_35300):-nonvar(_35260,unify((_35278,_35280),_35260,unify([_35284|_35286],_35280,cut(1,'$dcg_translation_atom'(_35278,_35272,_35288,_35290,'$dcg_translation'(_35262,_35266,_35288,_35292,'$dcg_translation'(_35280,_35268,_35290,_35292,_35300))))))).
	'$dcg_expansion'((_35382-->_35384),(_35388:-_35390),_35402):-'$dcg_translation_atom'(_35382,_35388,_35392,_35394,'$dcg_translation'(_35384,_35390,_35392,_35394,_35402)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024dcg_expansion_2__1(Prolog* mach);
	static Operation* exec_pred_$0024dcg_expansion_2__2(Prolog* mach);
	static Operation* exec_pred_$0024dcg_expansion_2__3(Prolog* mach);
	};


public:
	class pred_$0024dcg_translation_atom_4 : public Code {

	/*
	
	'$dcg_translation_atom'(_35444,phrase(_35444,_35446,_35448),_35446,_35448,_35456):-var(_35444,cut(1,_35456)).
	'$dcg_translation_atom'(_35490:_35492,_35490:_35498,_35500,_35502,_35510):-cut(1,'$dcg_translation_atom'(_35492,_35498,_35500,_35502,_35510)).
	'$dcg_translation_atom'(_35548,_35550,_35552,_35554,_35588):- =..(_35548,[_35558|_35560],'$builtin_append'(_35560,[_35552,_35554],_35574,=..(_35550,[_35558|_35574],_35588))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024dcg_translation_atom_4__1(Prolog* mach);
	static Operation* exec_pred_$0024dcg_translation_atom_4__2(Prolog* mach);
	static Operation* exec_pred_$0024dcg_translation_atom_4__3(Prolog* mach);
	};


public:
	class pred_$0024dcg_translation_4 : public Code {

	/*
	
	'$dcg_translation'(_35634,_35636,_35638,_35640,_35652):-'$dcg_trans'(_35634,_35642,_35644,_35638,_35640,'$dcg_trans0'(_35642,_35636,_35644,_35638,_35640,_35652)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024dcg_translation_4__1(Prolog* mach);
	};


public:
	class pred_$0024dcg_trans0_5 : public Code {

	/*
	
	'$dcg_trans0'(_35700,_35700,_35702,_35704,_35702,_35712):- \==(_35702,_35704,cut(1,_35712)).
	'$dcg_trans0'(_35748,_35750,_35752,_35754,_35756,_35770):-'$dcg_concat'(_35748,_35756=_35752,_35750,_35770).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans0_5__1(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans0_5__2(Prolog* mach);
	};


public:
	class pred_$0024dcg_concat_3 : public Code {

	/*
	
	'$dcg_concat'(_35802,_35804,_35806,_35814):-termequal(_35802,true,cut(1,unify(_35804,_35806,_35814))).
	'$dcg_concat'(_35854,_35856,_35858,_35866):-termequal(_35856,true,cut(1,unify(_35854,_35858,_35866))).
	'$dcg_concat'(_35908,_35910,(_35908,_35910),_35920):-call(_35920).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024dcg_concat_3__1(Prolog* mach);
	static Operation* exec_pred_$0024dcg_concat_3__2(Prolog* mach);
	static Operation* exec_pred_$0024dcg_concat_3__3(Prolog* mach);
	};


public:
	class pred_$0024dcg_trans_5 : public Code {

	/*
	
	'$dcg_trans'(_35938,_35940,_35942,_35944,_35942,_35952):-var(_35938,cut(1,'$dcg_translation_atom'(_35938,_35940,_35944,_35942,_35952))).
	'$dcg_trans'(_36000:_36002,_36000:_36008,_36010,_36012,_36014,_36022):-cut(1,'$dcg_trans'(_36002,_36008,_36010,_36012,_36014,_36022)).
	'$dcg_trans'([],true,_36064,_36064,_36066,_36074):-cut(1,_36074).
	'$dcg_trans'([_36104|_36106],_36108,_36110,_36112,_36114,_36134):-cut(1,'$dcg_trans'(_36106,_36116,_36110,_36118,_36114,'$dcg_concat'('C'(_36112,_36104,_36118),_36116,_36108,_36134))).
	'$dcg_trans'(\+_36188,(_36192->fail;_36198=_36200),_36198,_36200,_36198,_36216):-cut(1,'$dcg_trans'(_36188,_36192,_36208,_36200,_36208,_36216)).
	'$dcg_trans'((_36260,_36262),_36264,_36266,_36268,_36270,_36284):-cut(1,'$dcg_trans'(_36260,_36272,_36274,_36268,_36274,'$dcg_trans'(_36262,_36276,_36266,_36274,_36270,'$dcg_concat'(_36272,_36276,_36264,_36284)))).
	'$dcg_trans'((_36352->_36354),(_36358->_36360),_36362,_36364,_36366,_36376):-cut(1,'$dcg_trans'(_36352,_36358,_36368,_36364,_36368,'$dcg_trans'(_36354,_36360,_36362,_36368,_36366,_36376))).
	'$dcg_trans'((_36434;_36436),(_36440;_36442),_36444,_36446,_36444,_36454):-cut(1,'$dcg_translation'(_36434,_36440,_36446,_36444,'$dcg_translation'(_36436,_36442,_36446,_36444,_36454))).
	'$dcg_trans'(!,!,_36506,_36506,_36508,_36516):-cut(1,_36516).
	'$dcg_trans'({_36546},call(_36546),_36552,_36552,_36554,_36562):-var(_36546,cut(1,_36562)).
	'$dcg_trans'({_36598},_36598,_36600,_36600,_36602,_36610):-cut(1,_36610).
	'$dcg_trans'(_36638,_36640,_36642,_36644,_36642,_36652):-'$dcg_translation_atom'(_36638,_36640,_36644,_36642,_36652).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__1(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__2(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__3(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__4(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__5(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__6(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__7(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__8(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__9(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__10(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__11(Prolog* mach);
	static Operation* exec_pred_$0024dcg_trans_5__12(Prolog* mach);
	};


public:
	class pred_new_hash_1 : public Code {

	/*
	
	new_hash(_36788,_36796):-new_hash(_36788,[],_36796).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_new_hash_1__1(Prolog* mach);
	};


public:
	class pred_hash_map_2 : public Code {

	/*
	
	hash_map(_36818,_36820,_36832):-hash_keys(_36818,_36822,sort(_36822,_36824,hash_map(_36824,_36820,_36818,_36832))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_hash_map_2__1(Prolog* mach);
	};


public:
	class pred_hash_map_3 : public Code {

	/*
	
	hash_map([],[],_36874,_36882):-cut(1,_36882).
	hash_map([_36908|_36910],[(_36908,_36916)|_36922],_36924,_36932):-hash_get(_36924,_36908,_36916,hash_map(_36910,_36922,_36924,_36932)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_hash_map_3__1(Prolog* mach);
	static Operation* exec_pred_hash_map_3__2(Prolog* mach);
	};


public:
	class pred_hash_exists_1 : public Code {

	/*
	
	hash_exists(_36970,_36980):-atom(_36970,'$get_hash_manager'(_36972,hash_contains_key(_36972,_36970,_36980))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_hash_exists_1__1(Prolog* mach);
	};


public:
	class pred_java_constructor_2 : public Code {

	/*
	
	java_constructor(_37320,_37322,_37348):- =..(_37320,[_37326|_37328],builtin_java_convert_args(_37328,_37330,=..(_37338,[_37326|_37330],java_constructor0(_37338,_37340,unify(_37340,_37322,_37348))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_constructor_2__1(Prolog* mach);
	};


public:
	class pred_java_declared_constructor_2 : public Code {

	/*
	
	java_declared_constructor(_37404,_37406,_37432):- =..(_37404,[_37410|_37412],builtin_java_convert_args(_37412,_37414,=..(_37422,[_37410|_37414],java_declared_constructor0(_37422,_37424,unify(_37424,_37406,_37432))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_declared_constructor_2__1(Prolog* mach);
	};


public:
	class pred_java_method_3 : public Code {

	/*
	
	java_method(_37488,_37490,_37492,_37520):- =..(_37490,[_37496|_37498],builtin_java_convert_args(_37498,_37500,=..(_37508,[_37496|_37500],java_method0(_37488,_37508,_37510,java_conversion(_37512,_37510,unify(_37512,_37492,_37520)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_method_3__1(Prolog* mach);
	};


public:
	class pred_java_declared_method_3 : public Code {

	/*
	
	java_declared_method(_37588,_37590,_37592,_37620):- =..(_37590,[_37596|_37598],builtin_java_convert_args(_37598,_37600,=..(_37608,[_37596|_37600],java_declared_method0(_37588,_37608,_37610,java_conversion(_37612,_37610,unify(_37612,_37592,_37620)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_declared_method_3__1(Prolog* mach);
	};


public:
	class pred_java_get_field_3 : public Code {

	/*
	
	java_get_field(_37688,_37690,_37692,_37704):-java_get_field0(_37688,_37690,_37694,java_conversion(_37696,_37694,unify(_37696,_37692,_37704))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_get_field_3__1(Prolog* mach);
	};


public:
	class pred_java_get_declared_field_3 : public Code {

	/*
	
	java_get_declared_field(_37748,_37750,_37752,_37764):-java_get_declared_field0(_37748,_37750,_37754,java_conversion(_37756,_37754,unify(_37756,_37752,_37764))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_get_declared_field_3__1(Prolog* mach);
	};


public:
	class pred_java_set_field_3 : public Code {

	/*
	
	java_set_field(_37808,_37810,_37812,_37822):-java_conversion(_37812,_37814,java_set_field0(_37808,_37810,_37814,_37822)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_set_field_3__1(Prolog* mach);
	};


public:
	class pred_java_set_declared_field_3 : public Code {

	/*
	
	java_set_declared_field(_37858,_37860,_37862,_37872):-java_conversion(_37862,_37864,java_set_declared_field0(_37858,_37860,_37864,_37872)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_java_set_declared_field_3__1(Prolog* mach);
	};


public:
	class pred_builtin_java_convert_args_2 : public Code {

	/*
	
	builtin_java_convert_args([],[],_37914):-cut(1,_37914).
	builtin_java_convert_args([_37938|_37940],[_37944|_37946],_37954):-java_conversion(_37938,_37944,builtin_java_convert_args(_37940,_37946,_37954)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_builtin_java_convert_args_2__1(Prolog* mach);
	static Operation* exec_pred_builtin_java_convert_args_2__2(Prolog* mach);
	};


public:
	class pred_synchronized_2 : public Code {

	/*
	
	synchronized(_37986,_37988,_37998):-'$begin_sync'(_37986,_37990,call(_37988,'$end_sync'(_37990,_37998))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_synchronized_2__1(Prolog* mach);
	};


public:
	class pred_cafeteria_0 : public Code {

	/*
	
	cafeteria(_39026):-'$cafeteria_init'(repeat('$toplvel_loop'(on_exception(_39018,'$cafeteria'(_39012),print_message(error,_39018),termequal(_39012,end_of_file,cut(1,nl('$fast_write'(bye,nl(_39026))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_cafeteria_0__1(Prolog* mach);
	};


public:
	class pred_$0024cafeteria_init_0 : public Code {

	/*
	
	'$cafeteria_init'(_39146):-retractall('$leap_flag'(_39090),retractall('$current_leash'(_39094),retractall('$current_spypoint'(_39098,_39100,_39102),retractall('$consulted_file'(_39106),retractall('$consulted_package'(_39110),retractall('$consulted_predicate'(_39114,_39116,_39118),assertz('$leap_flag'(no),assertz('$current_leash'(call),assertz('$current_leash'(exit),assertz('$current_leash'(redo),assertz('$current_leash'(fail),cut(1,_39146)))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024cafeteria_init_0__1(Prolog* mach);
	};


public:
	class pred_$0024toplvel_loop_0 : public Code {

	/*
	
	'$toplvel_loop'(_39262):-current_prolog_flag(debug,_39230,or((_39230==off->true),print_message(info,[debug]),'$fast_write'('| ?- ',flush_output(_39262)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024toplvel_loop_0__1(Prolog* mach);
	};


public:
	class pred_$0024cafeteria_1 : public Code {

	/*
	
	'$cafeteria'(_39300,_39310):-read_with_variables(_39300,_39302,'$process_order'(_39300,_39302,_39310)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024cafeteria_1__1(Prolog* mach);
	};


public:
	class pred_$0024process_order_2 : public Code {

	/*
	
	'$process_order'(_39340,_39342,_39354):-var(_39340,cut(1,illarg(var,(?-_39340),1,_39354))).
	'$process_order'(end_of_file,_39392,_39400):-cut(1,_39400).
	'$process_order'([_39424|_39426],_39428,_39442):-cut(1,consult([_39424|_39426],_39442)).
	'$process_order'(_39470,_39472,_39516):-current_prolog_flag(debug,_39474,or((_39474==off->call(user:_39470)),'$trace_goal'(user:_39470),nl('$rm_redundant_vars'(_39472,_39508,'$give_answers_with_prompt'(_39508,cut(1,'$fast_write'(yes,nl(_39516)))))))).
	'$process_order'(_39582,_39584,_39592):-nl('$fast_write'(no,nl(_39592))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024process_order_2__1(Prolog* mach);
	static Operation* exec_pred_$0024process_order_2__2(Prolog* mach);
	static Operation* exec_pred_$0024process_order_2__3(Prolog* mach);
	static Operation* exec_pred_$0024process_order_2__4(Prolog* mach);
	static Operation* exec_pred_$0024process_order_2__5(Prolog* mach);
	};


public:
	class pred_$0024rm_redundant_vars_2 : public Code {

	/*
	
	'$rm_redundant_vars'([],[],_39628):-cut(1,_39628).
	'$rm_redundant_vars'(['_'=_39654|_39660],_39662,_39670):-cut(1,'$rm_redundant_vars'(_39660,_39662,_39670)).
	'$rm_redundant_vars'([_39702|_39704],[_39702|_39710],_39718):-'$rm_redundant_vars'(_39704,_39710,_39718).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024rm_redundant_vars_2__1(Prolog* mach);
	static Operation* exec_pred_$0024rm_redundant_vars_2__2(Prolog* mach);
	static Operation* exec_pred_$0024rm_redundant_vars_2__3(Prolog* mach);
	};


public:
	class pred_$0024give_answers_with_prompt_1 : public Code {

	/*
	
	'$give_answers_with_prompt'([],_39748):-cut(1,_39748).
	'$give_answers_with_prompt'(_39768,_39784):-'$give_an_answer'(_39768,'$fast_write'(' ? ',flush_output(read_line(_39770,\==(_39770,";",nl(_39784)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024give_answers_with_prompt_1__1(Prolog* mach);
	static Operation* exec_pred_$0024give_answers_with_prompt_1__2(Prolog* mach);
	};


public:
	class pred_$0024give_an_answer_1 : public Code {

	/*
	
	'$give_an_answer'([],_39838):-cut(1,'$fast_write'(true,_39838)).
	'$give_an_answer'([_39866],_39876):-cut(1,'$print_an answer'(_39866,_39876)).
	'$give_an_answer'([_39904|_39906],_39914):-'$print_an answer'(_39904,'$fast_write'(',',nl('$give_an_answer'(_39906,_39914)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024give_an_answer_1__1(Prolog* mach);
	static Operation* exec_pred_$0024give_an_answer_1__2(Prolog* mach);
	static Operation* exec_pred_$0024give_an_answer_1__3(Prolog* mach);
	};


public:
	class pred_$0024print_an$0020answer_1 : public Code {

	/*
	
	'$print_an answer'(_39952=_39954,_39962):-write(_39952,'$fast_write'(' = ',writeq(_39954,_39962))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024print_an$0020answer_1__1(Prolog* mach);
	};


public:
	class pred_consult_1 : public Code {

	/*
	
	consult(_39994,_40006):-var(_39994,cut(1,illarg(var,consult(_39994),1,_40006))).
	consult([],_40048):-cut(1,_40048).
	consult([_40070|_40072],_40080):-cut(1,consult(_40070,consult(_40072,_40080))).
	consult(_40112,_40120):-atom(_40112,cut(1,'$consult'(_40112,_40120))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_consult_1__1(Prolog* mach);
	static Operation* exec_pred_consult_1__2(Prolog* mach);
	static Operation* exec_pred_consult_1__3(Prolog* mach);
	static Operation* exec_pred_consult_1__4(Prolog* mach);
	};


public:
	class pred_$0024consult_1 : public Code {

	/*
	
	'$consult'(_40152,_40224):-'$prolog_file_name'(_40152,_40154,open(_40154,read,_40156,stream_property(_40156,file_name(_40160),print_message(info,[consulting,_40160,...],statistics(runtime,_40180,consult_stream(_40160,_40156,statistics(runtime,[_40184,_40190],print_message(info,[_40160,consulted,_40190,msec],close(_40156,_40224))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024consult_1__1(Prolog* mach);
	};


public:
	class pred_consult_stream_2 : public Code {

	/*
	
	consult_stream(_40310,_40312,_40322):-'$consult_init'(_40310,repeat(read(_40312,_40314,'$consult_clause'(_40314,termequal(_40314,end_of_file,cut(1,_40322)))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_consult_stream_2__1(Prolog* mach);
	};


public:
	class pred_$0024prolog_file_name_2 : public Code {

	/*
	
	'$prolog_file_name'(_40376,_40376,_40390):-sub_atom(_40376,_40378,_40380,_40382,'.',smallerthan(0,_40382,cut(1,_40390))).
	'$prolog_file_name'(_40434,_40436,_40444):-atom_concat(_40434,'.pl',_40436,_40444).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024prolog_file_name_2__1(Prolog* mach);
	static Operation* exec_pred_$0024prolog_file_name_2__2(Prolog* mach);
	};


public:
	class pred_$0024consult_init_1 : public Code {

	/*
	
	'$consult_init'(_40470,_40506):-retractall('$consulted_file'(_40474),retractall('$consulted_package'(_40478),retractall('$consulted_import'(_40470,_40484),retract('$consulted_predicate'(_40488,_40490,_40470),abolish(_40488:_40490,fail(_40506)))))).
	'$consult_init'(_40554,_40570):-assertz('$consulted_file'(_40554),assertz('$consulted_package'(user),_40570)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024consult_init_1__1(Prolog* mach);
	static Operation* exec_pred_$0024consult_init_1__2(Prolog* mach);
	};


public:
	class pred_$0024consult_clause_1 : public Code {

	/*
	
	'$consult_clause'(end_of_file,_40602):-cut(1,_40602).
	'$consult_clause'((:-module(_40624,_40626)),_40638):-cut(1,'$assert_consulted_package'(_40624,_40638)).
	'$consult_clause'((:-package _40666),_40678):-cut(1,'$assert_consulted_package'(_40666,_40678)).
	'$consult_clause'((:-import _40706),_40718):-cut(1,'$assert_consulted_import'(_40706,_40718)).
	'$consult_clause'((:-dynamic _40746),_40758):-cut(1,_40758).
	'$consult_clause'((:-public _40780),_40792):-cut(1,_40792).
	'$consult_clause'((:-meta_predicate _40814),_40826):-cut(1,_40826).
	'$consult_clause'((:-mode _40848),_40860):-cut(1,_40860).
	'$consult_clause'((:-multifile _40882),_40894):-cut(1,_40894).
	'$consult_clause'((:-block _40916),_40928):-cut(1,_40928).
	'$consult_clause'((:-_40950),_40970):-cut(1,clause('$consulted_package'(_40954),_40956,once(_40954:_40950,_40970))).
	'$consult_clause'(_41004,_41014):-'$consult_preprocess'(_41004,_41006,'$consult_cls'(_41006,_41014)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__1(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__2(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__3(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__4(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__5(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__6(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__7(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__8(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__9(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__10(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__11(Prolog* mach);
	static Operation* exec_pred_$0024consult_clause_1__12(Prolog* mach);
	};


public:
	class pred_$0024assert_consulted_package_1 : public Code {

	/*
	
	'$assert_consulted_package'(_41042,_41056):-clause('$consulted_package'(_41042),_41048,cut(1,_41056)).
	'$assert_consulted_package'(_41084,_41100):-retractall('$consulted_package'(_41088),assertz('$consulted_package'(_41084),_41100)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024assert_consulted_package_1__1(Prolog* mach);
	static Operation* exec_pred_$0024assert_consulted_package_1__2(Prolog* mach);
	};


public:
	class pred_$0024assert_consulted_import_1 : public Code {

	/*
	
	'$assert_consulted_import'(_41126,_41146):-clause('$consulted_file'(_41130),_41132,assertz('$consulted_import'(_41130,_41126),_41146)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024assert_consulted_import_1__1(Prolog* mach);
	};


public:
	class pred_$0024consult_preprocess_2 : public Code {

	/*
	
	'$consult_preprocess'(_41174,_41176,_41184):-expand_term(_41174,_41176,_41184).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024consult_preprocess_2__1(Prolog* mach);
	};


public:
	class pred_$0024consult_cls_1 : public Code {

	/*
	
	'$consult_cls'((_41210:-_41212),_41226):-cut(1,'$assert_consulted_clause'((_41210:-_41212),_41226)).
	'$consult_cls'(_41252,_41266):-'$assert_consulted_clause'((_41252:-true),_41266).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024consult_cls_1__1(Prolog* mach);
	static Operation* exec_pred_$0024consult_cls_1__2(Prolog* mach);
	};


public:
	class pred_$0024assert_consulted_clause_1 : public Code {

	/*
	
	'$assert_consulted_clause'(_41286,_41336):-unify((_41290:-_41292),_41286,functor(_41290,_41294,_41296,clause('$consulted_file'(_41300),_41302,clause('$consulted_package'(_41306),_41308,assertz(_41306:_41286,assertz('$consulted_predicate'(_41306,_41294/_41296,_41300),cut(1,_41336))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024assert_consulted_clause_1__1(Prolog* mach);
	};


public:
	class pred_trace_0 : public Code {

	/*
	
	trace(_41408):-current_prolog_flag(debug,on,cut(1,_41408)).
	trace(_41440):-set_prolog_flag(debug,on,'$trace_init'('$fast_write'('{Small debugger is switch on}',nl(cut(1,_41440))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_trace_0__1(Prolog* mach);
	static Operation* exec_pred_trace_0__2(Prolog* mach);
	};


public:
	class pred_$0024trace_init_0 : public Code {

	/*
	
	'$trace_init'(_41522):-retractall('$leap_flag'(_41482),retractall('$current_leash'(_41486),retractall('$current_spypoint'(_41490,_41492,_41494),assertz('$leap_flag'(no),assertz('$current_leash'(call),assertz('$current_leash'(exit),assertz('$current_leash'(redo),assertz('$current_leash'(fail),cut(1,_41522))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024trace_init_0__1(Prolog* mach);
	};


public:
	class pred_notrace_0 : public Code {

	/*
	
	notrace(_41594):-current_prolog_flag(debug,off,cut(1,_41594)).
	notrace(_41626):-set_prolog_flag(debug,off,'$fast_write'('{Small debugger is switch off}',nl(cut(1,_41626)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_notrace_0__1(Prolog* mach);
	static Operation* exec_pred_notrace_0__2(Prolog* mach);
	};


public:
	class pred_debug_0 : public Code {

	/*
	
	debug(_41668):-trace(_41668).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_debug_0__1(Prolog* mach);
	};


public:
	class pred_nodebug_0 : public Code {

	/*
	
	nodebug(_41690):-notrace(_41690).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_nodebug_0__1(Prolog* mach);
	};


public:
	class pred_spy_1 : public Code {

	/*
	
	spy(_41706,_41720):-'$term_to_predicateindicator'(_41706,_41712,spy(_41706),trace('$assert_spypoint'(_41712,'$set_debug_flag'(leap,yes,cut(1,_41720))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_spy_1__1(Prolog* mach);
	};


public:
	class pred_$0024assert_spypoint_1 : public Code {

	/*
	
	'$assert_spypoint'(_41776:_41770/_41772,_41838):-clause('$current_spypoint'(_41776,_41770,_41772),_41788,print_message(info,[spypoint,_41776:_41770/_41772,is,already,added],cut(1,_41838))).
	'$assert_spypoint'(_41882:_41876/_41878,_41952):-clause('$consulted_predicate'(_41882,_41876/_41878,_41898),_41900,assertz('$current_spypoint'(_41882,_41876,_41878),print_message(info,[spypoint,_41882:_41876/_41878,is,added],cut(1,_41952)))).
	'$assert_spypoint'(_42002:_41996/_41998,_42060):-print_message(warning,[no,matching,predicate,for,spy,_42002:_41996/_41998],_42060).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024assert_spypoint_1__1(Prolog* mach);
	static Operation* exec_pred_$0024assert_spypoint_1__2(Prolog* mach);
	static Operation* exec_pred_$0024assert_spypoint_1__3(Prolog* mach);
	};


public:
	class pred_nospy_1 : public Code {

	/*
	
	nospy(_42082,_42096):-'$term_to_predicateindicator'(_42082,_42088,nospy(_42082),'$retract_spypoint'(_42088,'$set_debug_flag'(leap,no,cut(1,_42096)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_nospy_1__1(Prolog* mach);
	};


public:
	class pred_$0024retract_spypoint_1 : public Code {

	/*
	
	'$retract_spypoint'(_42148:_42142/_42144,_42202):-retract('$current_spypoint'(_42148,_42142,_42144),print_message(info,[spypoint,_42148:_42142/_42144,is,removed],cut(1,_42202))).
	'$retract_spypoint'(_42236,_42246):-call(_42246).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024retract_spypoint_1__1(Prolog* mach);
	static Operation* exec_pred_$0024retract_spypoint_1__2(Prolog* mach);
	};


public:
	class pred_nospyall_0 : public Code {

	/*
	
	nospyall(_42274):-retractall('$current_spypoint'(_42262,_42264,_42266),'$set_debug_flag'(leap,no,_42274)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_nospyall_0__1(Prolog* mach);
	};


public:
	class pred_leash_1 : public Code {

	/*
	
	leash(_42300,_42308):-nonvar(_42300,'$leash'(_42300,cut(1,_42308))).
	leash(_42340,_42356):-illarg(type(leash_specifier),leash(_42340),1,_42356).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_leash_1__1(Prolog* mach);
	static Operation* exec_pred_leash_1__2(Prolog* mach);
	};


public:
	class pred_$0024leash_1 : public Code {

	/*
	
	'$leash'([],_42402):-cut(1,retractall('$current_leash'(_42382),print_message(info,[no,leashing],_42402))).
	'$leash'(_42436,_42472):-retractall('$current_leash'(_42440),'$assert_leash'(_42436,print_message(info,[leashing,stopping,on,_42436],_42472))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024leash_1__1(Prolog* mach);
	static Operation* exec_pred_$0024leash_1__2(Prolog* mach);
	};


public:
	class pred_$0024assert_leash_1 : public Code {

	/*
	
	'$assert_leash'([],_42512):-cut(1,_42512).
	'$assert_leash'([_42534|_42536],_42548):-'$leash_specifier'(_42534,assertz('$current_leash'(_42534),'$assert_leash'(_42536,_42548))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024assert_leash_1__1(Prolog* mach);
	static Operation* exec_pred_$0024assert_leash_1__2(Prolog* mach);
	};


public:
	class pred_$0024leash_specifier_1 : public Code {

	/*
	
	'$leash_specifier'(call,_42588):-call(_42588).
	'$leash_specifier'(exit,_42610):-call(_42610).
	'$leash_specifier'(redo,_42632):-call(_42632).
	'$leash_specifier'(fail,_42654):-call(_42654).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024leash_specifier_1__1(Prolog* mach);
	static Operation* exec_pred_$0024leash_specifier_1__2(Prolog* mach);
	static Operation* exec_pred_$0024leash_specifier_1__3(Prolog* mach);
	static Operation* exec_pred_$0024leash_specifier_1__4(Prolog* mach);
	};


public:
	class pred_$0024trace_goal_1 : public Code {

	/*
	
	'$trace_goal'(_42668,_42678):-'$set_debug_flag'(leap,no,'$get_current_B'(_42670,'$meta_call'(_42668,user,_42670,0,trace,_42678))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024trace_goal_1__1(Prolog* mach);
	};


public:
	class pred_$0024trace_goal_4 : public Code {

	/*
	
	'$trace_goal'(_42720,_42722,_42724,_42726,_42734):-print_procedure_box(call,_42720,_42722,_42724,_42726,'$call_internal'(_42720,_42722,_42724,_42726,trace,print_procedure_box(exit,_42720,_42722,_42724,_42726,redo_procedure_box(_42720,_42722,_42724,_42726,_42734)))).
	'$trace_goal'(_42808,_42810,_42812,_42814,_42822):-print_procedure_box(fail,_42808,_42810,_42812,_42814,fail(_42822)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024trace_goal_4__1(Prolog* mach);
	static Operation* exec_pred_$0024trace_goal_4__2(Prolog* mach);
	};


public:
	class pred_print_procedure_box_5 : public Code {

	/*
	
	print_procedure_box(_42866,_42868,_42870,_42862/_42864,_42872,_42944):-clause('$current_spypoint'(_42870,_42862,_42864),_42882,cut(1,'$builtin_message'([+,_42872,_42866,:,_42870:_42868],'$read_blocked'(print_procedure_box(_42866,_42868,_42870,_42862/_42864,_42872),_42944)))).
	print_procedure_box(_42992,_42994,_42996,_42998,_43000,_43082):-clause('$leap_flag'(no),_43006,cut(1,'$builtin_message'([' ',_43000,_42992,:,_42996:_42994],or((clause('$current_leash'(_42992),_43052)->'$read_blocked'(print_procedure_box(_42992,_42994,_42996,_42998,_43000))),nl,_43082)))).
	print_procedure_box(_43132,_43134,_43136,_43138,_43140,_43150):-call(_43150).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_print_procedure_box_5__1(Prolog* mach);
	static Operation* exec_pred_print_procedure_box_5__2(Prolog* mach);
	static Operation* exec_pred_print_procedure_box_5__3(Prolog* mach);
	};


public:
	class pred_redo_procedure_box_4 : public Code {

	/*
	
	redo_procedure_box(_43172,_43174,_43176,_43178,_43188):-call(_43188).
	redo_procedure_box(_43208,_43210,_43212,_43214,_43222):-print_procedure_box(redo,_43208,_43210,_43212,_43214,fail(_43222)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_redo_procedure_box_4__1(Prolog* mach);
	static Operation* exec_pred_redo_procedure_box_4__2(Prolog* mach);
	};


public:
	class pred_$0024read_blocked_1 : public Code {

	/*
	
	'$read_blocked'(_43260,_43300):-'$fast_write'(' ? ',flush_output(read_line(_43262,or((_43262==[]->_43272=99),_43262=[_43272|_43286],'$debug_option'(_43272,_43260,_43300))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024read_blocked_1__1(Prolog* mach);
	};


public:
	class pred_$0024debug_option_2 : public Code {

	/*
	
	'$debug_option'(97,_43346,_43354):-cut(1,notrace(abort(_43354))).
	'$debug_option'(99,_43384,_43392):-cut(1,'$set_debug_flag'(leap,no,_43392)).
	'$debug_option'(108,_43422,_43430):-cut(1,'$set_debug_flag'(leap,yes,_43430)).
	'$debug_option'(43,print_procedure_box(_43462,_43464,_43466,_43468,_43470),_43496):-cut(1,spy(_43466:_43468,call(print_procedure_box(_43462,_43464,_43466,_43468,_43470),_43496))).
	'$debug_option'(45,print_procedure_box(_43532,_43534,_43536,_43538,_43540),_43566):-cut(1,nospy(_43536:_43538,call(print_procedure_box(_43532,_43534,_43536,_43538,_43540),_43566))).
	'$debug_option'(63,_43600,_43608):-cut(1,'$show_debug_option'(call(_43600,_43608))).
	'$debug_option'(104,_43640,_43648):-cut(1,'$show_debug_option'(call(_43640,_43648))).
	'$debug_option'(_43680,_43682,_43692):-call(_43692).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__1(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__2(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__3(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__4(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__5(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__6(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__7(Prolog* mach);
	static Operation* exec_pred_$0024debug_option_2__8(Prolog* mach);
	};


public:
	class pred_$0024show_debug_option_0 : public Code {

	/*
	
	'$show_debug_option'(_43714):-tab(4,'$fast_write'('Debuggin options:',nl(tab(4,'$fast_write'('a      abort',nl(tab(4,'$fast_write'('RET    creep',nl(tab(4,'$fast_write'('c      creep',nl(tab(4,'$fast_write'('l      leap',nl(tab(4,'$fast_write'('+      spy this',nl(tab(4,'$fast_write'('-      nospy this',nl(tab(4,'$fast_write'('?      help',nl(tab(4,'$fast_write'('h      help',nl(_43714))))))))))))))))))))))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024show_debug_option_0__1(Prolog* mach);
	};


public:
	class pred_$0024set_debug_flag_2 : public Code {

	/*
	
	'$set_debug_flag'(leap,_43870,_43884):-clause('$leap_flag'(_43870),_43876,cut(1,_43884)).
	'$set_debug_flag'(leap,_43914,_43930):-retractall('$leap_flag'(_43918),assertz('$leap_flag'(_43914),_43930)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024set_debug_flag_2__1(Prolog* mach);
	static Operation* exec_pred_$0024set_debug_flag_2__2(Prolog* mach);
	};


public:
	class pred_listing_0 : public Code {

	/*
	
	listing(_43966):-'$listing'(_43958,user,_43966).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_listing_0__1(Prolog* mach);
	};


public:
	class pred_listing_1 : public Code {

	/*
	
	listing(_43986,_43998):-var(_43986,cut(1,illarg(var,listing(_43986),1,_43998))).
	listing(_44034,_44044):-atom(_44034,cut(1,'$listing'(_44036,_44034,_44044))).
	listing(_44080/_44082,_44096):-cut(1,'$listing'(_44080/_44082,user,_44096)).
	listing(_44126:_44128,_44136):-atom(_44126,cut(1,'$listing'(_44128,_44126,_44136))).
	listing(_44170,_44186):-illarg(type(predicate_indicator),listing(_44170),1,_44186).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_listing_1__1(Prolog* mach);
	static Operation* exec_pred_listing_1__2(Prolog* mach);
	static Operation* exec_pred_listing_1__3(Prolog* mach);
	static Operation* exec_pred_listing_1__4(Prolog* mach);
	static Operation* exec_pred_listing_1__5(Prolog* mach);
	};


public:
	class pred_$0024listing_2 : public Code {

	/*
	
	'$listing'(_44210,_44212,_44222):-var(_44210,cut(1,'$listing_dynamic_clause'(_44212,_44214,_44222))).
	'$listing'(_44260/_44262,_44264,_44278):-atom(_44260,integer(_44262,cut(1,'$listing_dynamic_clause'(_44264,_44260/_44262,_44278)))).
	'$listing'(_44320,_44322,_44344):-illarg(type(predicate_indicator),listing(_44322:_44320),1,_44344).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024listing_2__1(Prolog* mach);
	static Operation* exec_pred_$0024listing_2__2(Prolog* mach);
	static Operation* exec_pred_$0024listing_2__3(Prolog* mach);
	};


public:
	class pred_$0024listing_dynamic_clause_2 : public Code {

	/*
	
	'$listing_dynamic_clause'(_44370,_44372,_44394):-'$new_internal_database'(_44370,hash_keys(_44370,_44374,'$builtin_member'(_44372,_44374,unify(_44378/_44380,_44372,functor(_44382,_44378,_44380,'$clause_internal'(_44370,_44372,_44382,_44384,_44386,'$write_dynamic_clause'(_44370,_44384,fail(_44394)))))))).
	'$listing_dynamic_clause'(_44476,_44478,_44488):-call(_44488).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024listing_dynamic_clause_2__1(Prolog* mach);
	static Operation* exec_pred_$0024listing_dynamic_clause_2__2(Prolog* mach);
	};


public:
	class pred_$0024write_dynamic_clause_2 : public Code {

	/*
	
	'$write_dynamic_clause'(_44504,_44506,_44514):-var(_44506,cut(1,fail(_44514))).
	'$write_dynamic_clause'(_44552,(_44548:-true),_44562):-cut(1,numbervars(_44548,0,_44554,'$write_dynamic_head'(_44552,_44548,write('.',nl(_44562))))).
	'$write_dynamic_clause'(_44618,(_44614:-_44616),_44634):-cut(1,numbervars((_44614:-_44616),0,_44626,'$write_dynamic_head'(_44618,_44614,write(' :-',nl('$write_dynamic_body'(_44616,8,write('.',nl(_44634)))))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_clause_2__1(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_clause_2__2(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_clause_2__3(Prolog* mach);
	};


public:
	class pred_$0024write_dynamic_head_2 : public Code {

	/*
	
	'$write_dynamic_head'(user,_44702,_44710):-cut(1,writeq(_44702,_44710)).
	'$write_dynamic_head'(_44738,_44740,_44748):-write(_44738,write(:,writeq(_44740,_44748))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_head_2__1(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_head_2__2(Prolog* mach);
	};


public:
	class pred_$0024write_dynamic_body_2 : public Code {

	/*
	
	'$write_dynamic_body'((_44784,_44786),_44788,_44796):-cut(1,'$write_dynamic_body'(_44784,_44788,write(',',nl('$write_dynamic_body'(_44786,_44788,_44796))))).
	'$write_dynamic_body'((_44846;_44848),_44850,_44866):-cut(1,is(_44858,_44850+4,tab(_44850,write('(',nl('$write_dynamic_body'(_44846,_44858,nl(tab(_44850,write(;,nl('$write_dynamic_body'(_44848,_44858,nl(tab(_44850,write(')',_44866)))))))))))))).
	'$write_dynamic_body'((_44966->_44968),_44970,_44986):-cut(1,is(_44978,_44970+4,tab(_44970,write('(',nl('$write_dynamic_body'(_44966,_44978,nl(tab(_44970,write(->,nl('$write_dynamic_body'(_44968,_44978,nl(tab(_44970,write(')',_44986)))))))))))))).
	'$write_dynamic_body'(_45084,_45086,_45094):-tab(_45086,writeq(_45084,_45094)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_body_2__1(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_body_2__2(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_body_2__3(Prolog* mach);
	static Operation* exec_pred_$0024write_dynamic_body_2__4(Prolog* mach);
	};


public:
	class pred_length_2 : public Code {

	/*
	
	length(_45258,_45260,_45268):-var(_45260,cut(1,'$length'(_45258,0,_45260,_45268))).
	length(_45306,_45308,_45316):-'$length0'(_45306,0,_45308,_45316).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_length_2__1(Prolog* mach);
	static Operation* exec_pred_length_2__2(Prolog* mach);
	};


public:
	class pred_$0024length_3 : public Code {

	/*
	
	'$length'([],_45342,_45342,_45352):-call(_45352).
	'$length'([_45372|_45374],_45376,_45378,_45394):-is(_45386,_45376+1,'$length'(_45374,_45386,_45378,_45394)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024length_3__1(Prolog* mach);
	static Operation* exec_pred_$0024length_3__2(Prolog* mach);
	};


public:
	class pred_$0024length0_3 : public Code {

	/*
	
	'$length0'([],_45430,_45430,_45438):-cut(1,_45438).
	'$length0'([_45464|_45466],_45468,_45470,_45486):-smallerthan(_45468,_45470,is(_45478,_45468+1,'$length0'(_45466,_45478,_45470,_45486))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024length0_3__1(Prolog* mach);
	static Operation* exec_pred_$0024length0_3__2(Prolog* mach);
	};


public:
	class pred_numbervars_3 : public Code {

	/*
	
	numbervars(_45530,_45532,_45534,_45542):-integer(_45532,smallerorequal(0,_45532,cut(1,'$numbervars'(_45530,_45532,_45534,_45542)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_numbervars_3__1(Prolog* mach);
	};


public:
	class pred_$0024numbervars_3 : public Code {

	/*
	
	'$numbervars'(_45590,_45592,_45594,_45612):-var(_45590,cut(1,unify('$VAR'(_45592),_45590,is(_45594,_45592+1,_45612)))).
	'$numbervars'(_45658,_45660,_45660,_45668):-atomic(_45658,cut(1,_45668)).
	'$numbervars'(_45698,_45700,_45700,_45708):-java(_45698,cut(1,_45708)).
	'$numbervars'(_45738,_45740,_45742,_45754):-functor(_45738,_45744,_45746,'$numbervars_str'(1,_45746,_45738,_45740,_45742,_45754)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024numbervars_3__1(Prolog* mach);
	static Operation* exec_pred_$0024numbervars_3__2(Prolog* mach);
	static Operation* exec_pred_$0024numbervars_3__3(Prolog* mach);
	static Operation* exec_pred_$0024numbervars_3__4(Prolog* mach);
	};


public:
	class pred_$0024numbervars_str_5 : public Code {

	/*
	
	'$numbervars_str'(_45796,_45796,_45798,_45800,_45802,_45812):-cut(1,arg(_45796,_45798,_45804,'$numbervars'(_45804,_45800,_45802,_45812))).
	'$numbervars_str'(_45860,_45862,_45864,_45866,_45868,_45888):-arg(_45860,_45864,_45870,'$numbervars'(_45870,_45866,_45872,is(_45880,_45860+1,'$numbervars_str'(_45880,_45862,_45864,_45872,_45868,_45888)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024numbervars_str_5__1(Prolog* mach);
	static Operation* exec_pred_$0024numbervars_str_5__2(Prolog* mach);
	};


public:
	class pred_statistics_2 : public Code {

	/*
	
	statistics(_45952,_45954,_45962):-nonvar(_45952,'$statistics_mode'(_45952,cut(1,'$statistics'(_45952,_45954,_45962)))).
	statistics(_46004,_46006,_46032):-findall(_46010,'$statistics_mode'(_46010),_46012,illarg(domain(atom,_46012),statistics(_46004,_46006),1,_46032)).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_statistics_2__1(Prolog* mach);
	static Operation* exec_pred_statistics_2__2(Prolog* mach);
	};


public:
	class pred_$0024statistics_mode_1 : public Code {

	/*
	
	'$statistics_mode'(runtime,_46076):-call(_46076).
	'$statistics_mode'(trail,_46098):-call(_46098).
	'$statistics_mode'(choice,_46120):-call(_46120).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024statistics_mode_1__1(Prolog* mach);
	static Operation* exec_pred_$0024statistics_mode_1__2(Prolog* mach);
	static Operation* exec_pred_$0024statistics_mode_1__3(Prolog* mach);
	};


public:
	class pred_print_message_2 : public Code {

	/*
	
	print_message(_46134,_46136,_46150):-var(_46134,cut(1,illarg(var,print_message(_46134,_46136),1,_46150))).
	print_message(error,_46188,_46196):-cut(1,'$error_message'(_46188,_46196)).
	print_message(info,_46224,_46232):-cut(1,'$fast_write'('{','$builtin_message'(_46224,'$fast_write'('}',nl(_46232))))).
	print_message(warning,_46276,_46284):-cut(1,'$fast_write'('{WARNING: ','$builtin_message'(_46276,'$fast_write'('}',nl(_46284))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_print_message_2__1(Prolog* mach);
	static Operation* exec_pred_print_message_2__2(Prolog* mach);
	static Operation* exec_pred_print_message_2__3(Prolog* mach);
	static Operation* exec_pred_print_message_2__4(Prolog* mach);
	};


public:
	class pred_$0024error_message_1 : public Code {

	/*
	
	'$error_message'(instantiation_error(_46330,0),_46340):-cut(1,'$fast_write'(user_error,'{INSTANTIATION ERROR: ','$write_goal'(user_error,_46330,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46340)))))).
	'$error_message'(instantiation_error(_46398,_46400),_46408):-cut(1,'$fast_write'(user_error,'{INSTANTIATION ERROR: ','$write_goal'(user_error,_46398,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46400,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46408)))))))).
	'$error_message'(type_error(_46482,_46484,_46486,_46488),_46496):-cut(1,'$fast_write'(user_error,'{TYPE ERROR: ','$write_goal'(user_error,_46482,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46484,'$fast_write'(user_error,': expected ','$fast_write'(user_error,_46486,'$fast_write'(user_error,', found ',write(user_error,_46488,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46496)))))))))))).
	'$error_message'(domain_error(_46602,_46604,_46606,_46608),_46616):-cut(1,'$fast_write'(user_error,'{DOMAIN ERROR: ','$write_goal'(user_error,_46602,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46604,'$fast_write'(user_error,': expected ','$fast_write'(user_error,_46606,'$fast_write'(user_error,', found ',write(user_error,_46608,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46616)))))))))))).
	'$error_message'(existence_error(_46722,0,_46726,_46728,_46730),_46738):-cut(1,'$fast_write'(user_error,'{EXISTENCE ERROR: ','$fast_write'(user_error,_46726,'$fast_write'(user_error,' ',write(user_error,_46728,'$fast_write'(user_error,' does not exist','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46738))))))))).
	'$error_message'(existence_error(_46820,_46822,_46824,_46826,_46828),_46836):-cut(1,'$fast_write'(user_error,'{EXISTENCE ERROR: ','$write_goal'(user_error,_46820,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_46822,'$fast_write'(user_error,': ','$fast_write'(user_error,_46824,'$fast_write'(user_error,' ',write(user_error,_46826,'$fast_write'(user_error,' does not exist','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46836))))))))))))).
	'$error_message'(permission_error(_46950,_46952,_46954,_46956,_46958),_46966):-cut(1,'$fast_write'(user_error,'{PERMISSION ERROR: ','$write_goal'(user_error,_46950,'$fast_write'(user_error,' - can not ','$fast_write'(user_error,_46952,'$fast_write'(user_error,' ','$fast_write'(user_error,_46954,'$fast_write'(user_error,' ',write(user_error,_46956,'$fast_write'(user_error,': ','$fast_write'(user_error,_46958,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_46966)))))))))))))).
	'$error_message'(representation_error(_47088,_47090,_47092),_47100):-cut(1,'$fast_write'(user_error,'{REPRESENTATION ERROR: ','$write_goal'(user_error,_47088,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_47090,'$fast_write'(user_error,': limit of ','$fast_write'(user_error,_47092,'$fast_write'(user_error,' is breached','$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_47100))))))))))).
	'$error_message'(evaluation_error(_47198,_47200,_47202),_47210):-cut(1,'$fast_write'(user_error,'{EVALUATION ERROR: ','$write_goal'(user_error,_47198,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_47200,'$fast_write'(user_error,', found ','$fast_write'(user_error,_47202,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_47210)))))))))).
	'$error_message'(syntax_error(_47300,_47302,_47304,_47306,_47308),_47316):-cut(1,'$fast_write'(user_error,'{SYNTAX ERROR: ','$write_goal'(user_error,_47300,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_47302,'$fast_write'(user_error,': expected ','$fast_write'(user_error,_47304,'$fast_write'(user_error,', found ',write(user_error,_47306,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_47316)))))))))))).
	'$error_message'(system_error(_47422),_47430):-cut(1,'$fast_write'(user_error,'{SYSTEM ERROR: ',write(user_error,_47422,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_47430)))))).
	'$error_message'(internal_error(_47488),_47496):-cut(1,'$fast_write'(user_error,'{INTERNAL ERROR: ',write(user_error,_47488,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_47496)))))).
	'$error_message'(java_error(_47554,_47556,_47558),_47566):-cut(1,'$fast_write'(user_error,'{JAVA ERROR: ','$write_goal'(user_error,_47554,'$fast_write'(user_error,' - arg ','$fast_write'(user_error,_47556,'$fast_write'(user_error,', found ','$write_goal'(user_error,_47558,'$fast_write'(user_error,'}',nl(user_error,'$print_stack_trace'(_47558,flush_output(user_error,_47566))))))))))).
	'$error_message'(_47660,_47668):-'$fast_write'(user_error,'{',write(user_error,_47660,'$fast_write'(user_error,'}',nl(user_error,flush_output(user_error,_47668))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__1(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__2(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__3(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__4(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__5(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__6(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__7(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__8(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__9(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__10(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__11(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__12(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__13(Prolog* mach);
	static Operation* exec_pred_$0024error_message_1__14(Prolog* mach);
	};


public:
	class pred_$0024write_goal_2 : public Code {

	/*
	
	'$write_goal'(_47718,_47720,_47728):-java(_47720,cut(1,'$write_toString'(_47718,_47720,_47728))).
	'$write_goal'(_47764,_47766,_47774):-write(_47764,_47766,_47774).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024write_goal_2__1(Prolog* mach);
	static Operation* exec_pred_$0024write_goal_2__2(Prolog* mach);
	};


public:
	class pred_illarg_3 : public Code {

	/*
	
	illarg(_47798,_47800,_47802,_47810):-var(_47798,cut(1,illarg(var,_47800,_47802,_47810))).
	illarg(var,_47850,_47852,_47866):-raise_exception(instantiation_error(_47850,_47852),_47866).
	illarg(type(_47892),_47894,_47896,_47944):-arg(_47896,_47894,_47898,or((nonvar(_47898)->_47916=type_error(_47894,_47896,_47892,_47898)),_47916=instantiation_error(_47894,_47896),raise_exception(_47916,_47944))).
	illarg(domain(_47988,_47990),_47992,_47994,_48076):-arg(_47994,_47992,_47996,or(('$match_type'(_47988,_47996)->_48016=domain_error(_47992,_47994,_47990,_47996)),(nonvar(_47996)->_48016=type_error(_47992,_47994,_47988,_47996);_48016=instantiation_error(_47992,_47994)),raise_exception(_48016,_48076))).
	illarg(existence(_48120,_48122,_48124),_48126,_48128,_48148):-raise_exception(existence_error(_48126,_48128,_48120,_48122,_48124),_48148).
	illarg(permission(_48174,_48176,_48178,_48180),_48182,_48184,_48204):-raise_exception(permission_error(_48182,_48174,_48176,_48178,_48180),_48204).
	illarg(representation(_48230),_48232,_48234,_48250):-raise_exception(representation_error(_48232,_48234,_48230),_48250).
	illarg(evaluation(_48276),_48278,_48280,_48296):-raise_exception(evaluation_error(_48278,_48280,_48276),_48296).
	illarg(syntax(_48322,_48324,_48326),_48328,_48330,_48350):-raise_exception(syntax_error(_48328,_48330,_48322,_48324,_48326),_48350).
	illarg(system(_48376),_48378,_48380,_48392):-raise_exception(system_error(_48376),_48392).
	illarg(internal(_48418),_48420,_48422,_48434):-raise_exception(internal_error(_48418),_48434).
	illarg(java(_48460),_48462,_48464,_48480):-raise_exception(java_error(_48462,_48464,_48460),_48480).
	illarg(_48504,_48506,_48508,_48516):-raise_exception(_48504,_48516).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_illarg_3__1(Prolog* mach);
	static Operation* exec_pred_illarg_3__2(Prolog* mach);
	static Operation* exec_pred_illarg_3__3(Prolog* mach);
	static Operation* exec_pred_illarg_3__4(Prolog* mach);
	static Operation* exec_pred_illarg_3__5(Prolog* mach);
	static Operation* exec_pred_illarg_3__6(Prolog* mach);
	static Operation* exec_pred_illarg_3__7(Prolog* mach);
	static Operation* exec_pred_illarg_3__8(Prolog* mach);
	static Operation* exec_pred_illarg_3__9(Prolog* mach);
	static Operation* exec_pred_illarg_3__10(Prolog* mach);
	static Operation* exec_pred_illarg_3__11(Prolog* mach);
	static Operation* exec_pred_illarg_3__12(Prolog* mach);
	static Operation* exec_pred_illarg_3__13(Prolog* mach);
	};


public:
	class pred_$0024match_type_2 : public Code {

	/*
	
	'$match_type'(term,_48540,_48550):-call(_48550).
	'$match_type'(variable,_48566,_48574):-var(_48566,_48574).
	'$match_type'(atom,_48596,_48604):-atom(_48596,_48604).
	'$match_type'(atomic,_48626,_48634):-atomic(_48626,_48634).
	'$match_type'(byte,_48656,_48664):-integer(_48656,smallerorequal(0,_48656,smallerorequal(_48656,255,_48664))).
	'$match_type'(in_byte,_48702,_48710):-integer(_48702,smallerorequal(-1,_48702,smallerorequal(_48702,255,_48710))).
	'$match_type'(character,_48748,_48756):-atom(_48748,atom_length(_48748,1,_48756)).
	'$match_type'(in_character,_48786,_48806):-or(_48786==end_of_file,'$match_type'(character,_48786),_48806).
	'$match_type'(number,_48830,_48838):-number(_48830,_48838).
	'$match_type'(integer,_48860,_48868):-integer(_48860,_48868).
	'$match_type'(long,_48890,_48898):-long(_48890,_48898).
	'$match_type'(float,_48920,_48928):-float(_48920,_48928).
	'$match_type'(callable,_48950,_48958):-callable(_48950,_48958).
	'$match_type'(compound,_48980,_48988):-compound(_48980,_48988).
	'$match_type'(list,_49010,_49036):-nonvar(_49010,or(_49010=[],_49010=[_49020|_49022],_49036)).
	'$match_type'(java,_49066,_49074):-java(_49066,_49074).
	'$match_type'(stream,_49096,_49116):-or(java(_49096,'java.io.PushbackReader'),java(_49096,'java.io.PrintWriter'),_49116).
	'$match_type'(stream_or_alias,_49140,_49158):-or(atom(_49140),'$match_type'(stream,_49140),_49158).
	'$match_type'(hash,_49182,_49190):-java(_49182,'com.googlecode.prolog_cafe.lang.HashtableOfTerm',_49190).
	'$match_type'(hash_or_alias,_49214,_49232):-or(atom(_49214),'$match_type'(hash,_49214),_49232).
	'$match_type'(predicate_indicator,_49256,_49276):-nonvar(_49256,unify(_49266:_49260/_49262,_49256,atom(_49266,atom(_49260,integer(_49262,_49276))))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__1(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__2(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__3(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__4(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__5(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__6(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__7(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__8(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__9(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__10(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__11(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__12(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__13(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__14(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__15(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__16(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__17(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__18(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__19(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__20(Prolog* mach);
	static Operation* exec_pred_$0024match_type_2__21(Prolog* mach);
	};


public:
	class pred_with_mutex_2 : public Code {

	/*
	
	with_mutex(_49358,_49360,_49386):-not(atom(_49358),not(java(_49358),cut(1,illarg(type(atom),with_mutex(_49358,_49360),1,_49386)))).
	with_mutex(_49430,_49432,_49446):-var(_49432,cut(1,illarg(var,with_mutex(_49430,_49432),2,_49446))).
	with_mutex(_49484,_49486,_49508):-not(callable(_49486),cut(1,illarg(type(callable),with_mutex(_49484,_49486),2,_49508))).
	with_mutex(_49546,_49548,_49556):-mutex_lock_bt(_49546,call(_49548,cut(1,mutex_unlock(_49546,_49556)))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_with_mutex_2__1(Prolog* mach);
	static Operation* exec_pred_with_mutex_2__2(Prolog* mach);
	static Operation* exec_pred_with_mutex_2__3(Prolog* mach);
	static Operation* exec_pred_with_mutex_2__4(Prolog* mach);
	};


public:
	class pred_$0024builtin_append_3 : public Code {

	/*
	
	'$builtin_append'([],_49596,_49596,_49606):-call(_49606).
	'$builtin_append'([_49626|_49628],_49636,[_49626|_49634],_49644):-'$builtin_append'(_49628,_49636,_49634,_49644).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024builtin_append_3__1(Prolog* mach);
	static Operation* exec_pred_$0024builtin_append_3__2(Prolog* mach);
	};


public:
	class pred_$0024builtin_member_2 : public Code {

	/*
	
	'$builtin_member'(_49674,[_49674|_49676],_49686):-call(_49686).
	'$builtin_member'(_49708,[_49704|_49706],_49716):-'$builtin_member'(_49708,_49706,_49716).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024builtin_member_2__1(Prolog* mach);
	static Operation* exec_pred_$0024builtin_member_2__2(Prolog* mach);
	};


public:
	class pred_$0024builtin_message_1 : public Code {

	/*
	
	'$builtin_message'([],_49746):-cut(1,_49746).
	'$builtin_message'([_49768],_49778):-cut(1,write(_49768,_49778)).
	'$builtin_message'([_49806|_49808],_49816):-write(_49806,'$fast_write'(' ','$builtin_message'(_49808,_49816))).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024builtin_message_1__1(Prolog* mach);
	static Operation* exec_pred_$0024builtin_message_1__2(Prolog* mach);
	static Operation* exec_pred_$0024builtin_message_1__3(Prolog* mach);
	};


public:
	class pred_$0024member_in_reverse_2 : public Code {

	/*
	
	'$member_in_reverse'(_49854,[_49850|_49852],_49862):-'$member_in_reverse'(_49854,_49852,_49862).
	'$member_in_reverse'(_49888,[_49888|_49890],_49900):-call(_49900).
	
	
	*/

public:
	Operation* Exec(Prolog* mach) override;
	static Operation* exec_static(Prolog* mach);
	static Operation* exec_pred_$0024member_in_reverse_2__1(Prolog* mach);
	static Operation* exec_pred_$0024member_in_reverse_2__2(Prolog* mach);
	};


	};



}


#endif	//#ifndef SXX_BUILTINS_CAFE
