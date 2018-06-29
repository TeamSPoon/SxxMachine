#ifndef SXX_SYSTEM
#define SXX_SYSTEM

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

	class sxx_system {
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
		static Const* const  s_C;
		static Const* const  s80;
		static Const* const  s81;
		static Const* const  s82;
		static Const* const  s83;
		static Const* const  s_abolish;
		static Const* const  s_abort;
		static Const* const  s_arg;
		static Const* const  s_assert;
		static Const* const  s_asserta;
		static Const* const  s_assertz;
		static Const* const  s_atom;
		static Const* const  s_atom_chars;
		static Const* const  s_atom_codes;
		static Const* const  s_atom_concat;
		static Const* const  s_atom_length;
		static Const* const  s_atomic;
		static Const* const  s_bagof;
		static Const* const  s_cafeteria;
		static Const* const  s_call;
		static Const* const  s_callable;
		static Const* const  s_catch;
		static Const* const  s_char_code;
		static Const* const  s_clause;
		static Const* const  s_close;
		static Const* const  s_closure;
		static Const* const  s105;
		static Const* const  s_compare;
		static Const* const  s_compound;
		static Const* const  s_consult;
		static Const* const  s_copy_term;
		static Const* const  s_current_input;
		static Const* const  s_current_op;
		static Const* const  s_current_output;
		static Const* const  s_current_prolog_flag;
		static Const* const  s_debug;
		static Const* const  s_dynamic;
		static Const* const  s_expand_term;
		static Const* const  s_fail;
		static Const* const  s_false;
		static Const* const  s_findall;
		static Const* const  s_float;
		static Const* const  s_flush_output;
		static Const* const  s_functor;
		static Const* const  s_fx;
		static Const* const  s_get;
		static Const* const  s_get0;
		static Const* const  s_get_byte;
		static Const* const  s_get_char;
		static Const* const  s_get_code;
		static Const* const  s_ground;
		static Const* const  s_halt;
		static Const* const  s_hash_clear;
		static Const* const  s_hash_contains_key;
		static Const* const  s_hash_get;
		static Const* const  s_hash_is_empty;
		static Const* const  s_hash_keys;
		static Const* const  s_hash_map;
		static Const* const  s_hash_put;
		static Const* const  s_hash_remove;
		static Const* const  s_hash_size;
		static Const* const  s_initialization;
		static Const* const  s_integer;
		static Const* const  s_is;
		static Const* const  s_java;
		static Const* const  s_java_constructor;
		static Const* const  s_java_constructor0;
		static Const* const  s_java_conversion;
		static Const* const  s_java_declared_constructor;
		static Const* const  s_java_declared_constructor0;
		static Const* const  s_java_declared_method;
		static Const* const  s_java_declared_method0;
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
		static Const* const  s_keysort;
		static Const* const  s_leash;
		static Const* const  s_length;
		static Const* const  s_listing;
		static Const* const  s_long;
		static Const* const  s_multifile;
		static Const* const  s_name;
		static Const* const  s_nb_setval;
		static Const* const  s_new_hash;
		static Const* const  s_nl;
		static Const* const  s_nodebug;
		static Const* const  s_nonvar;
		static Const* const  s_nospy;
		static Const* const  s_nospyall;
		static Const* const  s_notrace;
		static Const* const  s_number;
		static Const* const  s_number_chars;
		static Const* const  s_number_codes;
		static Const* const  s_numbervars;
		static Const* const  s_on_exception;
		static Const* const  s_on_load_sxx_system;
		static Const* const  s_once;
		static Const* const  s_op;
		static Const* const  s_open;
		static Const* const  s_package;
		static Const* const  s_peek_byte;
		static Const* const  s_peek_char;
		static Const* const  s_peek_code;
		static Const* const  s_public;
		static Const* const  s_put;
		static Const* const  s_put_byte;
		static Const* const  s_put_char;
		static Const* const  s_put_code;
		static Const* const  s_raise_exception;
		static Const* const  s_read;
		static Const* const  s_read_line;
		static Const* const  s_read_with_variables;
		static Const* const  s_repeat;
		static Const* const  s_retract;
		static Const* const  s_retractall;
		static Const* const  s_set_input;
		static Const* const  s_set_output;
		static Const* const  s_set_prolog_flag;
		static Const* const  s_setof;
		static Const* const  s_skip;
		static Const* const  s_sort;
		static Const* const  s_spy;
		static Const* const  s_statistics;
		static Const* const  s_stream_property;
		static Const* const  s_sub_atom;
		static Const* const  s_synchronized;
		static Const* const  s_system_predicate;
		static Const* const  s_tab;
		static Const* const  s_therwise;
		static Const* const  s_throw;
		static Const* const  s_trace;
		static Const* const  s_true;
		static Const* const  s_var;
		static Const* const  s_write;
		static Const* const  s_write_canonical;
		static Const* const  s_write_term;
		static Const* const  s_writeq;
		static Int* const  posint1;
		static Int* const  posint1150;
		static const Operation reg_on_load_sxx_system_0;
		static const Operation reg_package_1;
		static const Operation reg_system_predicate_1;

	public:
		class pred_on_load_sxx_system_0 : public Code {

			/*
			
			on_load_sxx_system(_408):-write(op(1150,fx,package),_408).
			on_load_sxx_system(_466):-write((package'com.googlecode.prolog_cafe.builtin'),_466).
			on_load_sxx_system(_500):-write((public system_predicate/1),_500).
			on_load_sxx_system(_534):-write((multifile system_predicate/1),_534).
			on_load_sxx_system(_568):-write((dynamic system_predicate/1),_568).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_on_load_sxx_system_0__1(Prolog* mach);

			static Operation exec_pred_on_load_sxx_system_0__2(Prolog* mach);

			static Operation exec_pred_on_load_sxx_system_0__3(Prolog* mach);

			static Operation exec_pred_on_load_sxx_system_0__4(Prolog* mach);

			static Operation exec_pred_on_load_sxx_system_0__5(Prolog* mach);
		};

	public:
		class pred_package_1 : public Code {

			/*
			
			package(_426,_434):-nb_setval(package,_426,_434).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_package_1__1(Prolog* mach);
		};

	public:
		class pred_system_predicate_1 : public Code {

			/*
			
			system_predicate(system_predicate(_588),_598):-call(_598).
			system_predicate(true,_620):-call(_620).
			system_predicate(therwise,_642):-call(_642).
			system_predicate(fail,_664):-call(_664).
			system_predicate(false,_686):-call(_686).
			system_predicate(!,_708):-call(_708).
			system_predicate('$get_level'(_724),_734):-call(_734).
			system_predicate('$neck_cut',_756):-call(_756).
			system_predicate('$cut'(_772),_782):-call(_782).
			system_predicate(_798^_800,_810):-call(_810).
			system_predicate((_826,_828),_838):-call(_838).
			system_predicate((_854;_856),_866):-call(_866).
			system_predicate((_882->_884),_894):-call(_894).
			system_predicate(call(_910),_920):-call(_920).
			system_predicate(catch(_936,_938,_940),_950):-call(_950).
			system_predicate(throw(_966),_976):-call(_976).
			system_predicate(on_exception(_992,_994,_996),_1006):-call(_1006).
			system_predicate(raise_exception(_1022),_1032):-call(_1032).
			system_predicate(_1048=_1050,_1060):-call(_1060).
			system_predicate('$unify'(_1076,_1078),_1088):-call(_1088).
			system_predicate(_1104\=_1106,_1116):-call(_1116).
			system_predicate('$not_unifiable'(_1132,_1134),_1144):-call(_1144).
			system_predicate(var(_1160),_1170):-call(_1170).
			system_predicate(atom(_1186),_1196):-call(_1196).
			system_predicate(integer(_1212),_1222):-call(_1222).
			system_predicate(long(_1238),_1248):-call(_1248).
			system_predicate(float(_1264),_1274):-call(_1274).
			system_predicate(atomic(_1290),_1300):-call(_1300).
			system_predicate(compound(_1316),_1326):-call(_1326).
			system_predicate(nonvar(_1342),_1352):-call(_1352).
			system_predicate(number(_1368),_1378):-call(_1378).
			system_predicate(java(_1394),_1404):-call(_1404).
			system_predicate(java(_1420,_1422),_1432):-call(_1432).
			system_predicate(closure(_1448),_1458):-call(_1458).
			system_predicate(ground(_1474),_1484):-call(_1484).
			system_predicate(callable(_1500),_1510):-call(_1510).
			system_predicate(_1526==_1528,_1538):-call(_1538).
			system_predicate('$equality_of_term'(_1554,_1556),_1566):-call(_1566).
			system_predicate(_1582\==_1584,_1594):-call(_1594).
			system_predicate('$inequality_of_term'(_1610,_1612),_1622):-call(_1622).
			system_predicate(_1638@<_1640,_1650):-call(_1650).
			system_predicate('$before'(_1666,_1668),_1678):-call(_1678).
			system_predicate(_1694@>_1696,_1706):-call(_1706).
			system_predicate('$after'(_1722,_1724),_1734):-call(_1734).
			system_predicate(_1750@=<_1752,_1762):-call(_1762).
			system_predicate('$not_after'(_1778,_1780),_1790):-call(_1790).
			system_predicate(_1806@>=_1808,_1818):-call(_1818).
			system_predicate('$not_before'(_1834,_1836),_1846):-call(_1846).
			system_predicate(?=(_1862,_1864),_1874):-call(_1874).
			system_predicate('$identical_or_cannot_unify'(_1890,_1892),_1902):-call(_1902).
			system_predicate(compare(_1918,_1920,_1922),_1932):-call(_1932).
			system_predicate(sort(_1948,_1950),_1960):-call(_1960).
			system_predicate(keysort(_1976,_1978),_1988):-call(_1988).
			system_predicate(arg(_2004,_2006,_2008),_2018):-call(_2018).
			system_predicate(functor(_2034,_2036,_2038),_2048):-call(_2048).
			system_predicate(_2064=.._2066,_2076):-call(_2076).
			system_predicate('$univ'(_2092,_2094),_2104):-call(_2104).
			system_predicate(copy_term(_2120,_2122),_2132):-call(_2132).
			system_predicate(_2148 is _2150,_2160):-call(_2160).
			system_predicate('$abs'(_2176,_2178),_2188):-call(_2188).
			system_predicate('$asin'(_2204,_2206),_2216):-call(_2216).
			system_predicate('$acos'(_2232,_2234),_2244):-call(_2244).
			system_predicate('$atan'(_2260,_2262),_2272):-call(_2272).
			system_predicate('$bitwise_conj'(_2288,_2290,_2292),_2302):-call(_2302).
			system_predicate('$bitwise_disj'(_2318,_2320,_2322),_2332):-call(_2332).
			system_predicate('$bitwise_exclusive_or'(_2348,_2350,_2352),_2362):-call(_2362).
			system_predicate('$bitwise_neg'(_2378,_2380),_2390):-call(_2390).
			system_predicate('$ceil'(_2406,_2408),_2418):-call(_2418).
			system_predicate('$cos'(_2434,_2436),_2446):-call(_2446).
			system_predicate('$degrees'(_2462,_2464),_2474):-call(_2474).
			system_predicate('$exp'(_2490,_2492),_2502):-call(_2502).
			system_predicate('$float'(_2518,_2520),_2530):-call(_2530).
			system_predicate('$float_integer_part'(_2546,_2548),_2558):-call(_2558).
			system_predicate('$float_fractional_part'(_2574,_2576),_2586):-call(_2586).
			system_predicate('$float_quotient'(_2602,_2604,_2606),_2616):-call(_2616).
			system_predicate('$floor'(_2632,_2634),_2644):-call(_2644).
			system_predicate('$int_quotient'(_2660,_2662,_2664),_2674):-call(_2674).
			system_predicate('$log'(_2690,_2692),_2702):-call(_2702).
			system_predicate('$max'(_2718,_2720,_2722),_2732):-call(_2732).
			system_predicate('$min'(_2748,_2750,_2752),_2762):-call(_2762).
			system_predicate('$minus'(_2778,_2780,_2782),_2792):-call(_2792).
			system_predicate('$mod'(_2808,_2810,_2812),_2822):-call(_2822).
			system_predicate('$multi'(_2838,_2840,_2842),_2852):-call(_2852).
			system_predicate('$plus'(_2868,_2870,_2872),_2882):-call(_2882).
			system_predicate('$pow'(_2898,_2900,_2902),_2912):-call(_2912).
			system_predicate('$radians'(_2928,_2930),_2940):-call(_2940).
			system_predicate('$rint'(_2956,_2958),_2968):-call(_2968).
			system_predicate('$round'(_2984,_2986),_2996):-call(_2996).
			system_predicate('$shift_left'(_3012,_3014,_3016),_3026):-call(_3026).
			system_predicate('$shift_right'(_3042,_3044,_3046),_3056):-call(_3056).
			system_predicate('$sign'(_3072,_3074),_3084):-call(_3084).
			system_predicate('$sin'(_3100,_3102),_3112):-call(_3112).
			system_predicate('$sqrt'(_3128,_3130),_3140):-call(_3140).
			system_predicate('$tan'(_3156,_3158),_3168):-call(_3168).
			system_predicate('$truncate'(_3184,_3186),_3196):-call(_3196).
			system_predicate(_3212=:=_3214,_3224):-call(_3224).
			system_predicate('$arith_equal'(_3240,_3242),_3252):-call(_3252).
			system_predicate(_3268=\=_3270,_3280):-call(_3280).
			system_predicate('$arith_not_equal'(_3296,_3298),_3308):-call(_3308).
			system_predicate(_3324<_3326,_3336):-call(_3336).
			system_predicate('$less_than'(_3352,_3354),_3364):-call(_3364).
			system_predicate(_3380=<_3382,_3392):-call(_3392).
			system_predicate('$less_or_equal'(_3408,_3410),_3420):-call(_3420).
			system_predicate(_3436>_3438,_3448):-call(_3448).
			system_predicate('$greater_than'(_3464,_3466),_3476):-call(_3476).
			system_predicate(_3492>=_3494,_3504):-call(_3504).
			system_predicate('$greater_or_equal'(_3520,_3522),_3532):-call(_3532).
			system_predicate(clause(_3548,_3550),_3560):-call(_3560).
			system_predicate(initialization(_3576,_3578),_3588):-call(_3588).
			system_predicate('$new_indexing_hash'(_3604,_3606,_3608),_3618):-call(_3618).
			system_predicate(assert(_3634),_3644):-call(_3644).
			system_predicate(assertz(_3660),_3670):-call(_3670).
			system_predicate(asserta(_3686),_3696):-call(_3696).
			system_predicate(retract(_3712),_3722):-call(_3722).
			system_predicate(abolish(_3738),_3748):-call(_3748).
			system_predicate(retractall(_3764),_3774):-call(_3774).
			system_predicate(findall(_3790,_3792,_3794),_3804):-call(_3804).
			system_predicate(bagof(_3820,_3822,_3824),_3834):-call(_3834).
			system_predicate(setof(_3850,_3852,_3854),_3864):-call(_3864).
			system_predicate(current_input(_3880),_3890):-call(_3890).
			system_predicate(current_output(_3906),_3916):-call(_3916).
			system_predicate(set_input(_3932),_3942):-call(_3942).
			system_predicate(set_output(_3958),_3968):-call(_3968).
			system_predicate(open(_3984,_3986,_3988),_3998):-call(_3998).
			system_predicate(open(_4014,_4016,_4018,_4020),_4030):-call(_4030).
			system_predicate(close(_4046),_4056):-call(_4056).
			system_predicate(close(_4072,_4074),_4084):-call(_4084).
			system_predicate(flush_output(_4100),_4110):-call(_4110).
			system_predicate(flush_output,_4132):-call(_4132).
			system_predicate(stream_property(_4148,_4150),_4160):-call(_4160).
			system_predicate(get_char(_4176),_4186):-call(_4186).
			system_predicate(get_char(_4202,_4204),_4214):-call(_4214).
			system_predicate(get_code(_4230),_4240):-call(_4240).
			system_predicate(get_code(_4256,_4258),_4268):-call(_4268).
			system_predicate(peek_char(_4284),_4294):-call(_4294).
			system_predicate(peek_char(_4310,_4312),_4322):-call(_4322).
			system_predicate(peek_code(_4338),_4348):-call(_4348).
			system_predicate(peek_code(_4364,_4366),_4376):-call(_4376).
			system_predicate(put_char(_4392),_4402):-call(_4402).
			system_predicate(put_char(_4418,_4420),_4430):-call(_4430).
			system_predicate(put_code(_4446),_4456):-call(_4456).
			system_predicate(put_code(_4472,_4474),_4484):-call(_4484).
			system_predicate(nl,_4506):-call(_4506).
			system_predicate(nl(_4522),_4532):-call(_4532).
			system_predicate(get0(_4548),_4558):-call(_4558).
			system_predicate(get0(_4574,_4576),_4586):-call(_4586).
			system_predicate(get(_4602),_4612):-call(_4612).
			system_predicate(get(_4628,_4630),_4640):-call(_4640).
			system_predicate(put(_4656),_4666):-call(_4666).
			system_predicate(put(_4682,_4684),_4694):-call(_4694).
			system_predicate(tab(_4710),_4720):-call(_4720).
			system_predicate(tab(_4736,_4738),_4748):-call(_4748).
			system_predicate(skip(_4764),_4774):-call(_4774).
			system_predicate(skip(_4790,_4792),_4802):-call(_4802).
			system_predicate(get_byte(_4818),_4828):-call(_4828).
			system_predicate(get_byte(_4844,_4846),_4856):-call(_4856).
			system_predicate(peek_byte(_4872),_4882):-call(_4882).
			system_predicate(peek_byte(_4898,_4900),_4910):-call(_4910).
			system_predicate(put_byte(_4926),_4936):-call(_4936).
			system_predicate(put_byte(_4952,_4954),_4964):-call(_4964).
			system_predicate(read(_4980),_4990):-call(_4990).
			system_predicate(read(_5006,_5008),_5018):-call(_5018).
			system_predicate(read_with_variables(_5034,_5036),_5046):-call(_5046).
			system_predicate(read_with_variables(_5062,_5064,_5066),_5076):-call(_5076).
			system_predicate(read_line(_5092),_5102):-call(_5102).
			system_predicate(read_line(_5118,_5120),_5130):-call(_5130).
			system_predicate(write(_5146),_5156):-call(_5156).
			system_predicate(write(_5172,_5174),_5184):-call(_5184).
			system_predicate(writeq(_5200),_5210):-call(_5210).
			system_predicate(writeq(_5226,_5228),_5238):-call(_5238).
			system_predicate(write_canonical(_5254),_5264):-call(_5264).
			system_predicate(write_canonical(_5280,_5282),_5292):-call(_5292).
			system_predicate(write_term(_5308,_5310),_5320):-call(_5320).
			system_predicate(write_term(_5336,_5338,_5340),_5350):-call(_5350).
			system_predicate(op(_5366,_5368,_5370),_5380):-call(_5380).
			system_predicate(current_op(_5396,_5398,_5400),_5410):-call(_5410).
			system_predicate(\+_5426,_5436):-call(_5436).
			system_predicate(once(_5452),_5462):-call(_5462).
			system_predicate(repeat,_5484):-call(_5484).
			system_predicate(atom_length(_5500,_5502),_5512):-call(_5512).
			system_predicate(atom_concat(_5528,_5530,_5532),_5542):-call(_5542).
			system_predicate(sub_atom(_5558,_5560,_5562,_5564,_5566),_5576):-call(_5576).
			system_predicate(atom_chars(_5592,_5594),_5604):-call(_5604).
			system_predicate(atom_codes(_5620,_5622),_5632):-call(_5632).
			system_predicate(char_code(_5648,_5650),_5660):-call(_5660).
			system_predicate(number_chars(_5676,_5678),_5688):-call(_5688).
			system_predicate(number_codes(_5704,_5706),_5716):-call(_5716).
			system_predicate(name(_5732,_5734),_5744):-call(_5744).
			system_predicate(set_prolog_flag(_5760,_5762),_5772):-call(_5772).
			system_predicate(current_prolog_flag(_5788,_5790),_5800):-call(_5800).
			system_predicate(halt,_5822):-call(_5822).
			system_predicate(halt(_5838),_5848):-call(_5848).
			system_predicate(abort,_5870):-call(_5870).
			system_predicate('C'(_5886,_5888,_5890),_5900):-call(_5900).
			system_predicate(expand_term(_5916,_5918),_5928):-call(_5928).
			system_predicate(new_hash(_5944),_5954):-call(_5954).
			system_predicate(new_hash(_5970,_5972),_5982):-call(_5982).
			system_predicate(hash_clear(_5998),_6008):-call(_6008).
			system_predicate(hash_contains_key(_6024,_6026),_6036):-call(_6036).
			system_predicate(hash_get(_6052,_6054,_6056),_6066):-call(_6066).
			system_predicate(hash_is_empty(_6082),_6092):-call(_6092).
			system_predicate(hash_keys(_6108,_6110),_6120):-call(_6120).
			system_predicate(hash_map(_6136,_6138),_6148):-call(_6148).
			system_predicate(hash_put(_6164,_6166,_6168),_6178):-call(_6178).
			system_predicate(hash_remove(_6194,_6196),_6206):-call(_6206).
			system_predicate(hash_size(_6222,_6224),_6234):-call(_6234).
			system_predicate('$get_hash_manager'(_6250),_6260):-call(_6260).
			system_predicate(java_constructor0(_6276,_6278),_6288):-call(_6288).
			system_predicate(java_constructor(_6304,_6306),_6316):-call(_6316).
			system_predicate(java_declared_constructor0(_6332,_6334),_6344):-call(_6344).
			system_predicate(java_declared_constructor(_6360,_6362),_6372):-call(_6372).
			system_predicate(java_method0(_6388,_6390,_6392),_6402):-call(_6402).
			system_predicate(java_method(_6418,_6420,_6422),_6432):-call(_6432).
			system_predicate(java_declared_method0(_6448,_6450,_6452),_6462):-call(_6462).
			system_predicate(java_declared_method(_6478,_6480,_6482),_6492):-call(_6492).
			system_predicate(java_get_field0(_6508,_6510,_6512),_6522):-call(_6522).
			system_predicate(java_get_field(_6538,_6540,_6542),_6552):-call(_6552).
			system_predicate(java_get_declared_field0(_6568,_6570,_6572),_6582):-call(_6582).
			system_predicate(java_get_declared_field(_6598,_6600,_6602),_6612):-call(_6612).
			system_predicate(java_set_field0(_6628,_6630,_6632),_6642):-call(_6642).
			system_predicate(java_set_field(_6658,_6660,_6662),_6672):-call(_6672).
			system_predicate(java_set_declared_field0(_6688,_6690,_6692),_6702):-call(_6702).
			system_predicate(java_set_declared_field(_6718,_6720,_6722),_6732):-call(_6732).
			system_predicate(synchronized(_6748,_6750),_6760):-call(_6760).
			system_predicate(java_conversion(_6776,_6778),_6788):-call(_6788).
			system_predicate(cafeteria,_6810):-call(_6810).
			system_predicate(consult(_6826),_6836):-call(_6836).
			system_predicate(trace,_6858):-call(_6858).
			system_predicate(notrace,_6880):-call(_6880).
			system_predicate(debug,_6902):-call(_6902).
			system_predicate(nodebug,_6924):-call(_6924).
			system_predicate(leash(_6940),_6950):-call(_6950).
			system_predicate(spy(_6966),_6976):-call(_6976).
			system_predicate(nospy(_6992),_7002):-call(_7002).
			system_predicate(nospyall,_7024):-call(_7024).
			system_predicate(listing,_7046):-call(_7046).
			system_predicate(listing(_7062),_7072):-call(_7072).
			system_predicate(length(_7088,_7090),_7100):-call(_7100).
			system_predicate(numbervars(_7116,_7118,_7120),_7130):-call(_7130).
			system_predicate(statistics(_7146,_7148),_7158):-call(_7158).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_system_predicate_1__1(Prolog* mach);

			static Operation exec_pred_system_predicate_1__2(Prolog* mach);

			static Operation exec_pred_system_predicate_1__3(Prolog* mach);

			static Operation exec_pred_system_predicate_1__4(Prolog* mach);

			static Operation exec_pred_system_predicate_1__5(Prolog* mach);

			static Operation exec_pred_system_predicate_1__6(Prolog* mach);

			static Operation exec_pred_system_predicate_1__7(Prolog* mach);

			static Operation exec_pred_system_predicate_1__8(Prolog* mach);

			static Operation exec_pred_system_predicate_1__9(Prolog* mach);

			static Operation exec_pred_system_predicate_1__10(Prolog* mach);

			static Operation exec_pred_system_predicate_1__11(Prolog* mach);

			static Operation exec_pred_system_predicate_1__12(Prolog* mach);

			static Operation exec_pred_system_predicate_1__13(Prolog* mach);

			static Operation exec_pred_system_predicate_1__14(Prolog* mach);

			static Operation exec_pred_system_predicate_1__15(Prolog* mach);

			static Operation exec_pred_system_predicate_1__16(Prolog* mach);

			static Operation exec_pred_system_predicate_1__17(Prolog* mach);

			static Operation exec_pred_system_predicate_1__18(Prolog* mach);

			static Operation exec_pred_system_predicate_1__19(Prolog* mach);

			static Operation exec_pred_system_predicate_1__20(Prolog* mach);

			static Operation exec_pred_system_predicate_1__21(Prolog* mach);

			static Operation exec_pred_system_predicate_1__22(Prolog* mach);

			static Operation exec_pred_system_predicate_1__23(Prolog* mach);

			static Operation exec_pred_system_predicate_1__24(Prolog* mach);

			static Operation exec_pred_system_predicate_1__25(Prolog* mach);

			static Operation exec_pred_system_predicate_1__26(Prolog* mach);

			static Operation exec_pred_system_predicate_1__27(Prolog* mach);

			static Operation exec_pred_system_predicate_1__28(Prolog* mach);

			static Operation exec_pred_system_predicate_1__29(Prolog* mach);

			static Operation exec_pred_system_predicate_1__30(Prolog* mach);

			static Operation exec_pred_system_predicate_1__31(Prolog* mach);

			static Operation exec_pred_system_predicate_1__32(Prolog* mach);

			static Operation exec_pred_system_predicate_1__33(Prolog* mach);

			static Operation exec_pred_system_predicate_1__34(Prolog* mach);

			static Operation exec_pred_system_predicate_1__35(Prolog* mach);

			static Operation exec_pred_system_predicate_1__36(Prolog* mach);

			static Operation exec_pred_system_predicate_1__37(Prolog* mach);

			static Operation exec_pred_system_predicate_1__38(Prolog* mach);

			static Operation exec_pred_system_predicate_1__39(Prolog* mach);

			static Operation exec_pred_system_predicate_1__40(Prolog* mach);

			static Operation exec_pred_system_predicate_1__41(Prolog* mach);

			static Operation exec_pred_system_predicate_1__42(Prolog* mach);

			static Operation exec_pred_system_predicate_1__43(Prolog* mach);

			static Operation exec_pred_system_predicate_1__44(Prolog* mach);

			static Operation exec_pred_system_predicate_1__45(Prolog* mach);

			static Operation exec_pred_system_predicate_1__46(Prolog* mach);

			static Operation exec_pred_system_predicate_1__47(Prolog* mach);

			static Operation exec_pred_system_predicate_1__48(Prolog* mach);

			static Operation exec_pred_system_predicate_1__49(Prolog* mach);

			static Operation exec_pred_system_predicate_1__50(Prolog* mach);

			static Operation exec_pred_system_predicate_1__51(Prolog* mach);

			static Operation exec_pred_system_predicate_1__52(Prolog* mach);

			static Operation exec_pred_system_predicate_1__53(Prolog* mach);

			static Operation exec_pred_system_predicate_1__54(Prolog* mach);

			static Operation exec_pred_system_predicate_1__55(Prolog* mach);

			static Operation exec_pred_system_predicate_1__56(Prolog* mach);

			static Operation exec_pred_system_predicate_1__57(Prolog* mach);

			static Operation exec_pred_system_predicate_1__58(Prolog* mach);

			static Operation exec_pred_system_predicate_1__59(Prolog* mach);

			static Operation exec_pred_system_predicate_1__60(Prolog* mach);

			static Operation exec_pred_system_predicate_1__61(Prolog* mach);

			static Operation exec_pred_system_predicate_1__62(Prolog* mach);

			static Operation exec_pred_system_predicate_1__63(Prolog* mach);

			static Operation exec_pred_system_predicate_1__64(Prolog* mach);

			static Operation exec_pred_system_predicate_1__65(Prolog* mach);

			static Operation exec_pred_system_predicate_1__66(Prolog* mach);

			static Operation exec_pred_system_predicate_1__67(Prolog* mach);

			static Operation exec_pred_system_predicate_1__68(Prolog* mach);

			static Operation exec_pred_system_predicate_1__69(Prolog* mach);

			static Operation exec_pred_system_predicate_1__70(Prolog* mach);

			static Operation exec_pred_system_predicate_1__71(Prolog* mach);

			static Operation exec_pred_system_predicate_1__72(Prolog* mach);

			static Operation exec_pred_system_predicate_1__73(Prolog* mach);

			static Operation exec_pred_system_predicate_1__74(Prolog* mach);

			static Operation exec_pred_system_predicate_1__75(Prolog* mach);

			static Operation exec_pred_system_predicate_1__76(Prolog* mach);

			static Operation exec_pred_system_predicate_1__77(Prolog* mach);

			static Operation exec_pred_system_predicate_1__78(Prolog* mach);

			static Operation exec_pred_system_predicate_1__79(Prolog* mach);

			static Operation exec_pred_system_predicate_1__80(Prolog* mach);

			static Operation exec_pred_system_predicate_1__81(Prolog* mach);

			static Operation exec_pred_system_predicate_1__82(Prolog* mach);

			static Operation exec_pred_system_predicate_1__83(Prolog* mach);

			static Operation exec_pred_system_predicate_1__84(Prolog* mach);

			static Operation exec_pred_system_predicate_1__85(Prolog* mach);

			static Operation exec_pred_system_predicate_1__86(Prolog* mach);

			static Operation exec_pred_system_predicate_1__87(Prolog* mach);

			static Operation exec_pred_system_predicate_1__88(Prolog* mach);

			static Operation exec_pred_system_predicate_1__89(Prolog* mach);

			static Operation exec_pred_system_predicate_1__90(Prolog* mach);

			static Operation exec_pred_system_predicate_1__91(Prolog* mach);

			static Operation exec_pred_system_predicate_1__92(Prolog* mach);

			static Operation exec_pred_system_predicate_1__93(Prolog* mach);

			static Operation exec_pred_system_predicate_1__94(Prolog* mach);

			static Operation exec_pred_system_predicate_1__95(Prolog* mach);

			static Operation exec_pred_system_predicate_1__96(Prolog* mach);

			static Operation exec_pred_system_predicate_1__97(Prolog* mach);

			static Operation exec_pred_system_predicate_1__98(Prolog* mach);

			static Operation exec_pred_system_predicate_1__99(Prolog* mach);

			static Operation exec_pred_system_predicate_1__100(Prolog* mach);

			static Operation exec_pred_system_predicate_1__101(Prolog* mach);

			static Operation exec_pred_system_predicate_1__102(Prolog* mach);

			static Operation exec_pred_system_predicate_1__103(Prolog* mach);

			static Operation exec_pred_system_predicate_1__104(Prolog* mach);

			static Operation exec_pred_system_predicate_1__105(Prolog* mach);

			static Operation exec_pred_system_predicate_1__106(Prolog* mach);

			static Operation exec_pred_system_predicate_1__107(Prolog* mach);

			static Operation exec_pred_system_predicate_1__108(Prolog* mach);

			static Operation exec_pred_system_predicate_1__109(Prolog* mach);

			static Operation exec_pred_system_predicate_1__110(Prolog* mach);

			static Operation exec_pred_system_predicate_1__111(Prolog* mach);

			static Operation exec_pred_system_predicate_1__112(Prolog* mach);

			static Operation exec_pred_system_predicate_1__113(Prolog* mach);

			static Operation exec_pred_system_predicate_1__114(Prolog* mach);

			static Operation exec_pred_system_predicate_1__115(Prolog* mach);

			static Operation exec_pred_system_predicate_1__116(Prolog* mach);

			static Operation exec_pred_system_predicate_1__117(Prolog* mach);

			static Operation exec_pred_system_predicate_1__118(Prolog* mach);

			static Operation exec_pred_system_predicate_1__119(Prolog* mach);

			static Operation exec_pred_system_predicate_1__120(Prolog* mach);

			static Operation exec_pred_system_predicate_1__121(Prolog* mach);

			static Operation exec_pred_system_predicate_1__122(Prolog* mach);

			static Operation exec_pred_system_predicate_1__123(Prolog* mach);

			static Operation exec_pred_system_predicate_1__124(Prolog* mach);

			static Operation exec_pred_system_predicate_1__125(Prolog* mach);

			static Operation exec_pred_system_predicate_1__126(Prolog* mach);

			static Operation exec_pred_system_predicate_1__127(Prolog* mach);

			static Operation exec_pred_system_predicate_1__128(Prolog* mach);

			static Operation exec_pred_system_predicate_1__129(Prolog* mach);

			static Operation exec_pred_system_predicate_1__130(Prolog* mach);

			static Operation exec_pred_system_predicate_1__131(Prolog* mach);

			static Operation exec_pred_system_predicate_1__132(Prolog* mach);

			static Operation exec_pred_system_predicate_1__133(Prolog* mach);

			static Operation exec_pred_system_predicate_1__134(Prolog* mach);

			static Operation exec_pred_system_predicate_1__135(Prolog* mach);

			static Operation exec_pred_system_predicate_1__136(Prolog* mach);

			static Operation exec_pred_system_predicate_1__137(Prolog* mach);

			static Operation exec_pred_system_predicate_1__138(Prolog* mach);

			static Operation exec_pred_system_predicate_1__139(Prolog* mach);

			static Operation exec_pred_system_predicate_1__140(Prolog* mach);

			static Operation exec_pred_system_predicate_1__141(Prolog* mach);

			static Operation exec_pred_system_predicate_1__142(Prolog* mach);

			static Operation exec_pred_system_predicate_1__143(Prolog* mach);

			static Operation exec_pred_system_predicate_1__144(Prolog* mach);

			static Operation exec_pred_system_predicate_1__145(Prolog* mach);

			static Operation exec_pred_system_predicate_1__146(Prolog* mach);

			static Operation exec_pred_system_predicate_1__147(Prolog* mach);

			static Operation exec_pred_system_predicate_1__148(Prolog* mach);

			static Operation exec_pred_system_predicate_1__149(Prolog* mach);

			static Operation exec_pred_system_predicate_1__150(Prolog* mach);

			static Operation exec_pred_system_predicate_1__151(Prolog* mach);

			static Operation exec_pred_system_predicate_1__152(Prolog* mach);

			static Operation exec_pred_system_predicate_1__153(Prolog* mach);

			static Operation exec_pred_system_predicate_1__154(Prolog* mach);

			static Operation exec_pred_system_predicate_1__155(Prolog* mach);

			static Operation exec_pred_system_predicate_1__156(Prolog* mach);

			static Operation exec_pred_system_predicate_1__157(Prolog* mach);

			static Operation exec_pred_system_predicate_1__158(Prolog* mach);

			static Operation exec_pred_system_predicate_1__159(Prolog* mach);

			static Operation exec_pred_system_predicate_1__160(Prolog* mach);

			static Operation exec_pred_system_predicate_1__161(Prolog* mach);

			static Operation exec_pred_system_predicate_1__162(Prolog* mach);

			static Operation exec_pred_system_predicate_1__163(Prolog* mach);

			static Operation exec_pred_system_predicate_1__164(Prolog* mach);

			static Operation exec_pred_system_predicate_1__165(Prolog* mach);

			static Operation exec_pred_system_predicate_1__166(Prolog* mach);

			static Operation exec_pred_system_predicate_1__167(Prolog* mach);

			static Operation exec_pred_system_predicate_1__168(Prolog* mach);

			static Operation exec_pred_system_predicate_1__169(Prolog* mach);

			static Operation exec_pred_system_predicate_1__170(Prolog* mach);

			static Operation exec_pred_system_predicate_1__171(Prolog* mach);

			static Operation exec_pred_system_predicate_1__172(Prolog* mach);

			static Operation exec_pred_system_predicate_1__173(Prolog* mach);

			static Operation exec_pred_system_predicate_1__174(Prolog* mach);

			static Operation exec_pred_system_predicate_1__175(Prolog* mach);

			static Operation exec_pred_system_predicate_1__176(Prolog* mach);

			static Operation exec_pred_system_predicate_1__177(Prolog* mach);

			static Operation exec_pred_system_predicate_1__178(Prolog* mach);

			static Operation exec_pred_system_predicate_1__179(Prolog* mach);

			static Operation exec_pred_system_predicate_1__180(Prolog* mach);

			static Operation exec_pred_system_predicate_1__181(Prolog* mach);

			static Operation exec_pred_system_predicate_1__182(Prolog* mach);

			static Operation exec_pred_system_predicate_1__183(Prolog* mach);

			static Operation exec_pred_system_predicate_1__184(Prolog* mach);

			static Operation exec_pred_system_predicate_1__185(Prolog* mach);

			static Operation exec_pred_system_predicate_1__186(Prolog* mach);

			static Operation exec_pred_system_predicate_1__187(Prolog* mach);

			static Operation exec_pred_system_predicate_1__188(Prolog* mach);

			static Operation exec_pred_system_predicate_1__189(Prolog* mach);

			static Operation exec_pred_system_predicate_1__190(Prolog* mach);

			static Operation exec_pred_system_predicate_1__191(Prolog* mach);

			static Operation exec_pred_system_predicate_1__192(Prolog* mach);

			static Operation exec_pred_system_predicate_1__193(Prolog* mach);

			static Operation exec_pred_system_predicate_1__194(Prolog* mach);

			static Operation exec_pred_system_predicate_1__195(Prolog* mach);

			static Operation exec_pred_system_predicate_1__196(Prolog* mach);

			static Operation exec_pred_system_predicate_1__197(Prolog* mach);

			static Operation exec_pred_system_predicate_1__198(Prolog* mach);

			static Operation exec_pred_system_predicate_1__199(Prolog* mach);

			static Operation exec_pred_system_predicate_1__200(Prolog* mach);

			static Operation exec_pred_system_predicate_1__201(Prolog* mach);

			static Operation exec_pred_system_predicate_1__202(Prolog* mach);

			static Operation exec_pred_system_predicate_1__203(Prolog* mach);

			static Operation exec_pred_system_predicate_1__204(Prolog* mach);

			static Operation exec_pred_system_predicate_1__205(Prolog* mach);

			static Operation exec_pred_system_predicate_1__206(Prolog* mach);

			static Operation exec_pred_system_predicate_1__207(Prolog* mach);

			static Operation exec_pred_system_predicate_1__208(Prolog* mach);

			static Operation exec_pred_system_predicate_1__209(Prolog* mach);

			static Operation exec_pred_system_predicate_1__210(Prolog* mach);

			static Operation exec_pred_system_predicate_1__211(Prolog* mach);

			static Operation exec_pred_system_predicate_1__212(Prolog* mach);

			static Operation exec_pred_system_predicate_1__213(Prolog* mach);

			static Operation exec_pred_system_predicate_1__214(Prolog* mach);

			static Operation exec_pred_system_predicate_1__215(Prolog* mach);

			static Operation exec_pred_system_predicate_1__216(Prolog* mach);

			static Operation exec_pred_system_predicate_1__217(Prolog* mach);

			static Operation exec_pred_system_predicate_1__218(Prolog* mach);

			static Operation exec_pred_system_predicate_1__219(Prolog* mach);

			static Operation exec_pred_system_predicate_1__220(Prolog* mach);

			static Operation exec_pred_system_predicate_1__221(Prolog* mach);

			static Operation exec_pred_system_predicate_1__222(Prolog* mach);

			static Operation exec_pred_system_predicate_1__223(Prolog* mach);

			static Operation exec_pred_system_predicate_1__224(Prolog* mach);

			static Operation exec_pred_system_predicate_1__225(Prolog* mach);

			static Operation exec_pred_system_predicate_1__226(Prolog* mach);

			static Operation exec_pred_system_predicate_1__227(Prolog* mach);

			static Operation exec_pred_system_predicate_1__228(Prolog* mach);

			static Operation exec_pred_system_predicate_1__229(Prolog* mach);

			static Operation exec_pred_system_predicate_1__230(Prolog* mach);

			static Operation exec_pred_system_predicate_1__231(Prolog* mach);

			static Operation exec_pred_system_predicate_1__232(Prolog* mach);

			static Operation exec_pred_system_predicate_1__233(Prolog* mach);

			static Operation exec_pred_system_predicate_1__234(Prolog* mach);

			static Operation exec_pred_system_predicate_1__235(Prolog* mach);

			static Operation exec_pred_system_predicate_1__236(Prolog* mach);

			static Operation exec_pred_system_predicate_1__237(Prolog* mach);

			static Operation exec_pred_system_predicate_1__238(Prolog* mach);

			static Operation exec_pred_system_predicate_1__239(Prolog* mach);

			static Operation exec_pred_system_predicate_1__240(Prolog* mach);
		};

	};

}


#endif	//#ifndef SXX_SYSTEM
