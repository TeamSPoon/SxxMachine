#ifndef FLATTEN
#define FLATTEN

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

	class flatten {
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
		static Const* const  s__dummy_;
		static Const* const  s_a;
		static Const* const  s_append;
		static Const* const  s_arg;
		static Const* const  s_atomic;
		static Const* const  s_b;
		static Const* const  s_c;
		static Const* const  s_call;
		static Const* const  s_copy;
		static Const* const  s_copy2;
		static Const* const  s_disj;
		static Const* const  s_eliminate_disjunctions;
		static Const* const  s_extract_disj;
		static Const* const  s_fail;
		static Const* const  s_find_vars;
		static Const* const  s_functor;
		static Const* const  s_gather_disj;
		static Const* const  s_inst_vars;
		static Const* const  s_inst_vars_list;
		static Const* const  s_intersect_sorted_vars;
		static Const* const  s_intersect_vars;
		static Const* const  s_is;
		static Const* const  s_is_disj;
		static Const* const  s_make_dummy_clauses;
		static Const* const  s_make_dummy_name;
		static Const* const  s_make_sym;
		static Const* const  s_name;
		static Const* const  s_nonvar;
		static Const* const  s_not;
		static Const* const  s_p;
		static Const* const  s_retrieve_sym;
		static Const* const  s_smallerorequal;
		static Const* const  s_smallerthan;
		static Const* const  s_sort;
		static Const* const  s_sort_vars;
		static Const* const  s_split_vars;
		static Const* const  s_termequal;
		static Const* const  s_termgreaterthan;
		static Const* const  s_termsmallerthan;
		static Const* const  s_top;
		static Const* const  s_treat_disj;
		static Const* const  s_true;
		static Const* const  s_unify;
		static Const* const  s_var;
		static Const* const  s_varbag;
		static Const* const  s_varset;
		static Const* const  s62;
		static Int* const  posint0;
		static Int* const  posint1;
		static Int* const  posint65;
		static const Operation reg_top_0;
		static const Operation reg_eliminate_disjunctions_4;
		static const Operation reg_gather_disj_4;
		static const Operation reg_extract_disj_4;
		static const Operation reg_extract_disj_7;
		static const Operation reg_is_disj_2;
		static const Operation reg_treat_disj_3;
		static const Operation reg_make_dummy_clauses_4;
		static const Operation reg_find_vars_2;
		static const Operation reg_find_vars_3;
		static const Operation reg_intersect_vars_3;
		static const Operation reg_make_dummy_name_2;
		static const Operation reg_append_3;
		static const Operation reg_copy_2;
		static const Operation reg_copy2_3;
		static const Operation reg_copy2_5;
		static const Operation reg_retrieve_sym_3;
		static const Operation reg_make_sym_2;
		static const Operation reg_varset_2;
		static const Operation reg_varbag_2;
		static const Operation reg_$002D$002D$003E_2;
		static const Operation reg_inst_vars_1;
		static const Operation reg_inst_vars_list_2;
		static const Operation reg_sort_vars_2;
		static const Operation reg_sort_vars_3;
		static const Operation reg_intersect_sorted_vars_3;
		static const Operation reg_split_vars_4;

	public:
		class pred_top_0 : public Code {

			/*
			
			top(_24748):-eliminate_disjunctions([(a(_24670,_24672,_24674):-b(_24670);c(_24674))],_24706,_24708,[],inst_vars((_24706,_24708),_24748)).
			top(_24908):-true(_24908).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_top_0__1(Prolog* mach);

			static Operation exec_pred_top_0__2(Prolog* mach);
		};

	public:
		class pred_eliminate_disjunctions_4 : public Code {

			/*
			
			eliminate_disjunctions(_24958,_24960,_24962,_24964,_25034):-gather_disj(_24958,_24960,_24972,[],treat_disj(_24972,_24962,_24964,_25034)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_eliminate_disjunctions_4__1(Prolog* mach);
		};

	public:
		class pred_gather_disj_4 : public Code {

			/*
			
			gather_disj([],[],_25246,_25246,_25270):-call(_25270).
			gather_disj([_25376|_25378],_25384,_25386,_25388,_25478):-extract_disj(_25376,_25394,_25386,_25398,unify([_25394|_25404],_25384,gather_disj(_25378,_25404,_25398,_25388,_25478))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_gather_disj_4__1(Prolog* mach);

			static Operation exec_pred_gather_disj_4__2(Prolog* mach);
		};

	public:
		class pred_extract_disj_4 : public Code {

			/*
			
			extract_disj(_25768,(_25762:-_25764),_25772,_25774,_25872):-unify((_25762:-_25780),_25768,cut(1,unify(0,_25790,extract_disj(_25780,_25764,_25772,_25774,_25768,_25790,_25808,_25872)))).
			extract_disj(_26188,_26188,_26192,_26192,_26216):-call(_26216).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_extract_disj_4__1(Prolog* mach);

			static Operation exec_pred_extract_disj_4__2(Prolog* mach);
		};

	public:
		class pred_extract_disj_7 : public Code {

			/*
			
			extract_disj((_26328,_26330),(_26334,_26336),_26344,_26346,_26348,_26350,_26352,_26454):-extract_disj(_26328,_26334,_26344,_26362,_26348,_26350,_26368,extract_disj(_26330,_26336,_26362,_26346,_26348,_26368,_26352,_26454)).
			extract_disj(_26802,_26804,_26806,_26808,_26810,_26812,_26814,_26936):-is_disj(_26802,_26820,cut(1,unify([disj(_26820,_26812,_26804,_26810)|_26808],_26806,is(_26814,_26812+1,_26936)))).
			extract_disj(_27206,_27206,_27210,_27210,_27214,_27216,_27216,_27240):-call(_27240).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_extract_disj_7__1(Prolog* mach);

			static Operation exec_pred_extract_disj_7__2(Prolog* mach);

			static Operation exec_pred_extract_disj_7__3(Prolog* mach);
		};

	public:
		class pred_is_disj_2 : public Code {

			/*
			
			is_disj((_1200->_1202;_1208),(_1200,!,_1202;_1208),_1234):-cut(1,_1234).
			is_disj((_1258;_1260),(_1258;_1260),_1276):-call(_1276).
			is_disj(not(_1294),(_1294,!,fail;true),_1322):-call(_1322).
			is_disj(\+_1340,(_1340,!,fail;true),_1368):-call(_1368).
			is_disj(_1386\=_1388,(_1386=_1388,!,fail;true),_1422):-call(_1422).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_is_disj_2__1(Prolog* mach);

			static Operation exec_pred_is_disj_2__2(Prolog* mach);

			static Operation exec_pred_is_disj_2__3(Prolog* mach);

			static Operation exec_pred_is_disj_2__4(Prolog* mach);

			static Operation exec_pred_is_disj_2__5(Prolog* mach);
		};

	public:
		class pred_treat_disj_3 : public Code {

			/*
			
			treat_disj([],_1438,_1438,_1448):-call(_1448).
			treat_disj([disj((_1468;_1470),_1476,_1478,_1480)|_1486],_1488,_1490,_1526):-find_vars((_1468;_1470),_1498,find_vars(_1480,_1500,intersect_vars(_1498,_1500,_1502,make_dummy_name(_1476,_1504,=..(_1478,[_1504|_1502],make_dummy_clauses((_1468;_1470),_1478,_1488,_1518,treat_disj(_1486,_1518,_1490,_1526))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_treat_disj_3__1(Prolog* mach);

			static Operation exec_pred_treat_disj_3__2(Prolog* mach);
		};

	public:
		class pred_make_dummy_clauses_4 : public Code {

			/*
			
			make_dummy_clauses((_1610;_1612),_1620,[_1616|_1618],_1622,_1636):-cut(1,copy((_1620:-_1610),_1616,make_dummy_clauses(_1612,_1620,_1618,_1622,_1636))).
			make_dummy_clauses(_1688,_1690,[_1684|_1686],_1686,_1704):-copy((_1690:-_1688),_1684,_1704).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_make_dummy_clauses_4__1(Prolog* mach);

			static Operation exec_pred_make_dummy_clauses_4__2(Prolog* mach);
		};

	public:
		class pred_find_vars_2 : public Code {

			/*
			
			find_vars(_1732,_1734,_1744):-find_vars(_1732,_1734,_1736,unify([],_1736,_1744)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_find_vars_2__1(Prolog* mach);
		};

	public:
		class pred_find_vars_3 : public Code {

			/*
			
			find_vars(_1780,[_1780|_1782],_1782,_1790):-var(_1780,cut(1,_1790)).
			find_vars(_1820,_1822,_1822,_1830):-atomic(_1820,cut(1,_1830)).
			find_vars([_1862|_1864],_1866,_1868,_1878):-cut(1,find_vars(_1862,_1866,_1870,find_vars(_1864,_1870,_1868,_1878))).
			find_vars(_1922,_1924,_1926,_1940):- =..(_1922,[_1930|_1932],find_vars(_1932,_1924,_1926,_1940)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_find_vars_3__1(Prolog* mach);

			static Operation exec_pred_find_vars_3__2(Prolog* mach);

			static Operation exec_pred_find_vars_3__3(Prolog* mach);

			static Operation exec_pred_find_vars_3__4(Prolog* mach);
		};

	public:
		class pred_intersect_vars_3 : public Code {

			/*
			
			intersect_vars(_1976,_1978,_1980,_1992):-sort_vars(_1976,_1982,sort_vars(_1978,_1984,intersect_sorted_vars(_1982,_1984,_1980,_1992))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_intersect_vars_3__1(Prolog* mach);
		};

	public:
		class pred_make_dummy_name_2 : public Code {

			/*
			
			make_dummy_name(_2036,_2038,_2052):-name('_dummy_',_2040,name(_2036,_2042,append(_2040,_2042,_2044,name(_2038,_2044,_2052)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_make_dummy_name_2__1(Prolog* mach);
		};

	public:
		class pred_append_3 : public Code {

			/*
			
			append([],_2102,_2102,_2112):-call(_2112).
			append([_2132|_2134],_2142,[_2132|_2140],_2150):-append(_2134,_2142,_2140,_2150).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_append_3__1(Prolog* mach);

			static Operation exec_pred_append_3__2(Prolog* mach);
		};

	public:
		class pred_copy_2 : public Code {

			/*
			
			copy(_2178,_2180,_2192):-varset(_2178,_2182,make_sym(_2182,_2184,copy2(_2178,_2180,_2184,cut(1,_2192)))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_copy_2__1(Prolog* mach);
		};

	public:
		class pred_copy2_3 : public Code {

			/*
			
			copy2(_2240,_2242,_2244,_2252):-var(_2240,cut(1,retrieve_sym(_2240,_2244,_2242,_2252))).
			copy2(_2292,_2294,_2296,_2308):-nonvar(_2292,cut(1,functor(_2292,_2298,_2300,functor(_2294,_2298,_2300,copy2(_2292,_2294,_2296,1,_2300,_2308))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_copy2_3__1(Prolog* mach);

			static Operation exec_pred_copy2_3__2(Prolog* mach);
		};

	public:
		class pred_copy2_5 : public Code {

			/*
			
			copy2(_2372,_2374,_2376,_2378,_2380,_2388):-smallerthan(_2380,_2378,cut(1,_2388)).
			copy2(_2424,_2426,_2428,_2430,_2432,_2452):-smallerorequal(_2430,_2432,cut(1,arg(_2430,_2424,_2434,arg(_2430,_2426,_2436,copy2(_2434,_2436,_2428,is(_2444,_2430+1,copy2(_2424,_2426,_2428,_2444,_2432,_2452))))))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_copy2_5__1(Prolog* mach);

			static Operation exec_pred_copy2_5__2(Prolog* mach);
		};

	public:
		class pred_retrieve_sym_3 : public Code {

			/*
			
			retrieve_sym(_2552,[p(_2542,_2544)|_2550],_2544,_2560):-termequal(_2552,_2542,cut(1,_2560)).
			retrieve_sym(_2598,[_2594|_2596],_2600,_2608):-retrieve_sym(_2598,_2596,_2600,_2608).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_retrieve_sym_3__1(Prolog* mach);

			static Operation exec_pred_retrieve_sym_3__2(Prolog* mach);
		};

	public:
		class pred_make_sym_2 : public Code {

			/*
			
			make_sym([],[],_2644):-call(_2644).
			make_sym([_2662|_2664],[p(_2662,_2670)|_2676],_2684):-make_sym(_2664,_2676,_2684).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_make_sym_2__1(Prolog* mach);

			static Operation exec_pred_make_sym_2__2(Prolog* mach);
		};

	public:
		class pred_varset_2 : public Code {

			/*
			
			varset(_2708,_2710,_2720):-varbag(_2708,_2712,sort(_2712,_2710,_2720)).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_varset_2__1(Prolog* mach);
		};

	public:
		class pred_varbag_2 : public Code {

			/*
			
			varbag(_2752,_2754,_2762):-varbag(_2752,_2754,[],_2762).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_varbag_2__1(Prolog* mach);
		};

	public:
		class pred_$002D$002D$003E_2 : public Code {

			/*
			
			-->(varbag(_2790),({var(_2790)},!,[_2790]),_2826):-call(_2826).
			-->(varbag(_2844),({nonvar(_2844),!,functor(_2844,_2854,_2856)},varbag(_2844,1,_2856)),_2896):-call(_2896).
			-->(varbag(_2914,_2916,_2918),({_2916>_2918},!),_2944):-call(_2944).
			-->(varbag(_2962,_2964,_2966),({_2964=<_2966},!,{arg(_2964,_2962,_2984)},varbag(_2984),{_3002 is _2964+1},varbag(_2962,_3002,_2966)),_3056):-call(_3056).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__1(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__2(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__3(Prolog* mach);

			static Operation exec_pred_$002D$002D$003E_2__4(Prolog* mach);
		};

	public:
		class pred_inst_vars_1 : public Code {

			/*
			
			inst_vars(_3072,_3094):-varset(_3072,_3074,unify([65],[_3078],inst_vars_list(_3074,_3078,_3094))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_inst_vars_1__1(Prolog* mach);
		};

	public:
		class pred_inst_vars_list_2 : public Code {

			/*
			
			inst_vars_list([],_3132,_3142):-call(_3142).
			inst_vars_list([_3160|_3162],_3164,_3186):-name(_3160,[_3164],is(_3178,_3164+1,inst_vars_list(_3162,_3178,_3186))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_inst_vars_list_2__1(Prolog* mach);

			static Operation exec_pred_inst_vars_list_2__2(Prolog* mach);
		};

	public:
		class pred_sort_vars_2 : public Code {

			/*
			
			sort_vars(_3226,_3228,_3236):-sort_vars(_3226,_3228,[],_3236).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_sort_vars_2__1(Prolog* mach);
		};

	public:
		class pred_sort_vars_3 : public Code {

			/*
			
			sort_vars([],_3262,_3262,_3272):-call(_3272).
			sort_vars([_3292|_3294],_3296,_3298,_3316):-split_vars(_3294,_3292,_3300,_3302,sort_vars(_3300,_3296,[_3292|_3308],sort_vars(_3302,_3308,_3298,_3316))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_sort_vars_3__1(Prolog* mach);

			static Operation exec_pred_sort_vars_3__2(Prolog* mach);
		};

	public:
		class pred_intersect_sorted_vars_3 : public Code {

			/*
			
			intersect_sorted_vars([],_3366,[],_3374):-cut(1,_3374).
			intersect_sorted_vars(_3398,[],[],_3408):-call(_3408).
			intersect_sorted_vars([_3428|_3430],[_3434|_3436],[_3428|_3442],_3450):-termequal(_3428,_3434,cut(1,intersect_sorted_vars(_3430,_3436,_3442,_3450))).
			intersect_sorted_vars([_3494|_3496],[_3500|_3502],_3504,_3518):-termsmallerthan(_3494,_3500,cut(1,intersect_sorted_vars(_3496,[_3500|_3502],_3504,_3518))).
			intersect_sorted_vars([_3562|_3564],[_3568|_3570],_3572,_3586):-termgreaterthan(_3562,_3568,cut(1,intersect_sorted_vars([_3562|_3564],_3570,_3572,_3586))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_intersect_sorted_vars_3__1(Prolog* mach);

			static Operation exec_pred_intersect_sorted_vars_3__2(Prolog* mach);

			static Operation exec_pred_intersect_sorted_vars_3__3(Prolog* mach);

			static Operation exec_pred_intersect_sorted_vars_3__4(Prolog* mach);

			static Operation exec_pred_intersect_sorted_vars_3__5(Prolog* mach);
		};

	public:
		class pred_split_vars_4 : public Code {

			/*
			
			split_vars([],_3628,[],[],_3638):-call(_3638).
			split_vars([_3660|_3662],_3670,[_3660|_3668],_3672,_3680):-termsmallerthan(_3660,_3670,cut(1,split_vars(_3662,_3670,_3668,_3672,_3680))).
			split_vars([_3728|_3730],_3732,_3734,_3736,_3744):-termequal(_3728,_3732,cut(1,split_vars(_3730,_3732,_3734,_3736,_3744))).
			split_vars([_3792|_3794],_3802,_3804,[_3792|_3800],_3812):-termgreaterthan(_3792,_3802,cut(1,split_vars(_3794,_3802,_3804,_3800,_3812))).
			
			
			*/

		public:
			Operation Exec(Prolog* mach) override;

			static Operation exec_static(Prolog* mach);

			static Operation exec_pred_split_vars_4__1(Prolog* mach);

			static Operation exec_pred_split_vars_4__2(Prolog* mach);

			static Operation exec_pred_split_vars_4__3(Prolog* mach);

			static Operation exec_pred_split_vars_4__4(Prolog* mach);
		};

	};

}


#endif	//#ifndef FLATTEN
