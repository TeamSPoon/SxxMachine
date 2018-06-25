import java.util.function.Function;

class sxx_system /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("!");
	static Const s2 = Const.Intern("$abs");
	static Const s3 = Const.Intern("$acos");
	static Const s4 = Const.Intern("$after");
	static Const s5 = Const.Intern("$arith_equal");
	static Const s6 = Const.Intern("$arith_not_equal");
	static Const s7 = Const.Intern("$asin");
	static Const s8 = Const.Intern("$atan");
	static Const s9 = Const.Intern("$before");
	static Const s10 = Const.Intern("$bitwise_conj");
	static Const s11 = Const.Intern("$bitwise_disj");
	static Const s12 = Const.Intern("$bitwise_exclusive_or");
	static Const s13 = Const.Intern("$bitwise_neg");
	static Const s14 = Const.Intern("$ceil");
	static Const s15 = Const.Intern("$cos");
	static Const s16 = Const.Intern("$cut");
	static Const s17 = Const.Intern("$degrees");
	static Const s18 = Const.Intern("$equality_of_term");
	static Const s19 = Const.Intern("$exp");
	static Const s20 = Const.Intern("$float");
	static Const s21 = Const.Intern("$float_fractional_part");
	static Const s22 = Const.Intern("$float_integer_part");
	static Const s23 = Const.Intern("$float_quotient");
	static Const s24 = Const.Intern("$floor");
	static Const s25 = Const.Intern("$get_hash_manager");
	static Const s26 = Const.Intern("$get_level");
	static Const s27 = Const.Intern("$greater_or_equal");
	static Const s28 = Const.Intern("$greater_than");
	static Const s29 = Const.Intern("$identical_or_cannot_unify");
	static Const s30 = Const.Intern("$inequality_of_term");
	static Const s31 = Const.Intern("$int_quotient");
	static Const s32 = Const.Intern("$less_or_equal");
	static Const s33 = Const.Intern("$less_than");
	static Const s34 = Const.Intern("$log");
	static Const s35 = Const.Intern("$max");
	static Const s36 = Const.Intern("$min");
	static Const s37 = Const.Intern("$minus");
	static Const s38 = Const.Intern("$mod");
	static Const s39 = Const.Intern("$multi");
	static Const s40 = Const.Intern("$neck_cut");
	static Const s41 = Const.Intern("$new_indexing_hash");
	static Const s42 = Const.Intern("$not_after");
	static Const s43 = Const.Intern("$not_before");
	static Const s44 = Const.Intern("$not_unifiable");
	static Const s45 = Const.Intern("$plus");
	static Const s46 = Const.Intern("$pow");
	static Const s47 = Const.Intern("$radians");
	static Const s48 = Const.Intern("$rint");
	static Const s49 = Const.Intern("$round");
	static Const s50 = Const.Intern("$shift_left");
	static Const s51 = Const.Intern("$shift_right");
	static Const s52 = Const.Intern("$sign");
	static Const s53 = Const.Intern("$sin");
	static Const s54 = Const.Intern("$sqrt");
	static Const s55 = Const.Intern("$tan");
	static Const s56 = Const.Intern("$truncate");
	static Const s57 = Const.Intern("$unify");
	static Const s58 = Const.Intern("$univ");
	static Const s59 = Const.Intern(",");
	static Const s60 = Const.Intern("->");
	static Const s61 = Const.Intern(".");
	static Const s62 = Const.Intern("/");
	static Const s63 = Const.Intern(":-");
	static Const s64 = Const.Intern(";");
	static Const s65 = Const.Intern("<");
	static Const s66 = Const.Intern("=");
	static Const s67 = Const.Intern("=..");
	static Const s68 = Const.Intern("=:=");
	static Const s69 = Const.Intern("=<");
	static Const s70 = Const.Intern("==");
	static Const s71 = Const.Intern("=\\=");
	static Const s72 = Const.Intern(">");
	static Const s73 = Const.Intern(">=");
	static Const s74 = Const.Intern("?=");
	static Const s75 = Const.Intern("@<");
	static Const s76 = Const.Intern("@=<");
	static Const s77 = Const.Intern("@>");
	static Const s78 = Const.Intern("@>=");
	static Const s79 = Const.Intern("C");
	static Const s80 = Const.Intern("\\+");
	static Const s81 = Const.Intern("\\=");
	static Const s82 = Const.Intern("\\==");
	static Const s83 = Const.Intern("^");
	static Const s84 = Const.Intern("abolish");
	static Const s85 = Const.Intern("abort");
	static Const s86 = Const.Intern("arg");
	static Const s87 = Const.Intern("assert");
	static Const s88 = Const.Intern("asserta");
	static Const s89 = Const.Intern("assertz");
	static Const s90 = Const.Intern("atom");
	static Const s91 = Const.Intern("atom_chars");
	static Const s92 = Const.Intern("atom_codes");
	static Const s93 = Const.Intern("atom_concat");
	static Const s94 = Const.Intern("atom_length");
	static Const s95 = Const.Intern("atomic");
	static Const s96 = Const.Intern("bagof");
	static Const s97 = Const.Intern("cafeteria");
	static Const s98 = Const.Intern("call");
	static Const s99 = Const.Intern("callable");
	static Const s100 = Const.Intern("catch");
	static Const s101 = Const.Intern("char_code");
	static Const s102 = Const.Intern("clause");
	static Const s103 = Const.Intern("close");
	static Const s104 = Const.Intern("closure");
	static Const s105 = Const.Intern("com.googlecode.prolog_cafe.builtin");
	static Const s106 = Const.Intern("compare");
	static Const s107 = Const.Intern("compound");
	static Const s108 = Const.Intern("consult");
	static Const s109 = Const.Intern("copy_term");
	static Const s110 = Const.Intern("current_input");
	static Const s111 = Const.Intern("current_op");
	static Const s112 = Const.Intern("current_output");
	static Const s113 = Const.Intern("current_prolog_flag");
	static Const s114 = Const.Intern("debug");
	static Const s115 = Const.Intern("dynamic");
	static Const s116 = Const.Intern("expand_term");
	static Const s117 = Const.Intern("fail");
	static Const s118 = Const.Intern("false");
	static Const s119 = Const.Intern("findall");
	static Const s120 = Const.Intern("float");
	static Const s121 = Const.Intern("flush_output");
	static Const s122 = Const.Intern("functor");
	static Const s123 = Const.Intern("fx");
	static Const s124 = Const.Intern("get");
	static Const s125 = Const.Intern("get0");
	static Const s126 = Const.Intern("get_byte");
	static Const s127 = Const.Intern("get_char");
	static Const s128 = Const.Intern("get_code");
	static Const s129 = Const.Intern("ground");
	static Const s130 = Const.Intern("halt");
	static Const s131 = Const.Intern("hash_clear");
	static Const s132 = Const.Intern("hash_contains_key");
	static Const s133 = Const.Intern("hash_get");
	static Const s134 = Const.Intern("hash_is_empty");
	static Const s135 = Const.Intern("hash_keys");
	static Const s136 = Const.Intern("hash_map");
	static Const s137 = Const.Intern("hash_put");
	static Const s138 = Const.Intern("hash_remove");
	static Const s139 = Const.Intern("hash_size");
	static Const s140 = Const.Intern("initialization");
	static Const s141 = Const.Intern("integer");
	static Const s142 = Const.Intern("is");
	static Const s143 = Const.Intern("java");
	static Const s144 = Const.Intern("java_constructor");
	static Const s145 = Const.Intern("java_constructor0");
	static Const s146 = Const.Intern("java_conversion");
	static Const s147 = Const.Intern("java_declared_constructor");
	static Const s148 = Const.Intern("java_declared_constructor0");
	static Const s149 = Const.Intern("java_declared_method");
	static Const s150 = Const.Intern("java_declared_method0");
	static Const s151 = Const.Intern("java_get_declared_field");
	static Const s152 = Const.Intern("java_get_declared_field0");
	static Const s153 = Const.Intern("java_get_field");
	static Const s154 = Const.Intern("java_get_field0");
	static Const s155 = Const.Intern("java_method");
	static Const s156 = Const.Intern("java_method0");
	static Const s157 = Const.Intern("java_set_declared_field");
	static Const s158 = Const.Intern("java_set_declared_field0");
	static Const s159 = Const.Intern("java_set_field");
	static Const s160 = Const.Intern("java_set_field0");
	static Const s161 = Const.Intern("keysort");
	static Const s162 = Const.Intern("leash");
	static Const s163 = Const.Intern("length");
	static Const s164 = Const.Intern("listing");
	static Const s165 = Const.Intern("long");
	static Const s166 = Const.Intern("multifile");
	static Const s167 = Const.Intern("name");
	static Const s168 = Const.Intern("nb_setval");
	static Const s169 = Const.Intern("new_hash");
	static Const s170 = Const.Intern("nl");
	static Const s171 = Const.Intern("nodebug");
	static Const s172 = Const.Intern("nonvar");
	static Const s173 = Const.Intern("nospy");
	static Const s174 = Const.Intern("nospyall");
	static Const s175 = Const.Intern("notrace");
	static Const s176 = Const.Intern("number");
	static Const s177 = Const.Intern("number_chars");
	static Const s178 = Const.Intern("number_codes");
	static Const s179 = Const.Intern("numbervars");
	static Const s180 = Const.Intern("on_exception");
	static Const s181 = Const.Intern("on_load_sxx_system");
	static Const s182 = Const.Intern("once");
	static Const s183 = Const.Intern("op");
	static Const s184 = Const.Intern("open");
	static Const s185 = Const.Intern("package");
	static Const s186 = Const.Intern("peek_byte");
	static Const s187 = Const.Intern("peek_char");
	static Const s188 = Const.Intern("peek_code");
	static Const s189 = Const.Intern("public");
	static Const s190 = Const.Intern("put");
	static Const s191 = Const.Intern("put_byte");
	static Const s192 = Const.Intern("put_char");
	static Const s193 = Const.Intern("put_code");
	static Const s194 = Const.Intern("raise_exception");
	static Const s195 = Const.Intern("read");
	static Const s196 = Const.Intern("read_line");
	static Const s197 = Const.Intern("read_with_variables");
	static Const s198 = Const.Intern("repeat");
	static Const s199 = Const.Intern("retract");
	static Const s200 = Const.Intern("retractall");
	static Const s201 = Const.Intern("set_input");
	static Const s202 = Const.Intern("set_output");
	static Const s203 = Const.Intern("set_prolog_flag");
	static Const s204 = Const.Intern("setof");
	static Const s205 = Const.Intern("skip");
	static Const s206 = Const.Intern("sort");
	static Const s207 = Const.Intern("spy");
	static Const s208 = Const.Intern("statistics");
	static Const s209 = Const.Intern("stream_property");
	static Const s210 = Const.Intern("sub_atom");
	static Const s211 = Const.Intern("synchronized");
	static Const s212 = Const.Intern("system_predicate");
	static Const s213 = Const.Intern("tab");
	static Const s214 = Const.Intern("therwise");
	static Const s215 = Const.Intern("throw");
	static Const s216 = Const.Intern("trace");
	static Const s217 = Const.Intern("true");
	static Const s218 = Const.Intern("var");
	static Const s219 = Const.Intern("write");
	static Const s220 = Const.Intern("write_canonical");
	static Const s221 = Const.Intern("write_term");
	static Const s222 = Const.Intern("writeq");
	static Int posint1 = Term.Number(1);
	static Int posint1150 = Term.Number(1150);
}

class pred_on_load_sxx_system_0 extends Code {

	/*
	 * 
	 * on_load_sxx_system(_396):-write(op(1150,fx,package),_396).
	 * on_load_sxx_system(_454):-write((package'com.googlecode.prolog_cafe.builtin')
	 * ,_454). on_load_sxx_system(_488):-write((public system_predicate/1),_488).
	 * on_load_sxx_system(_522):-write((multifile system_predicate/1),_522).
	 * on_load_sxx_system(_556):-write((dynamic system_predicate/1),_556).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_on_load_sxx_system_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_system_0__1(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_system.s183, sxx_system.posint1150, sxx_system.s123, sxx_system.s185);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_system_0__2(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_system.s185, sxx_system.s105);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_system_0__3(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_system.s189, F(sxx_system.s62, sxx_system.s212, sxx_system.posint1));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_system_0__4(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_system_0::exec_pred_on_load_sxx_system_0__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_system.s166, F(sxx_system.s62, sxx_system.s212, sxx_system.posint1));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_system_0__5(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_system.s115, F(sxx_system.s62, sxx_system.s212, sxx_system.posint1));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}
}

class pred_package_1 extends Code {

	/*
	 * 
	 * package(_414,_422):-nb_setval(package,_414,_422).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_package_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_package_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sxx_system.s185;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nb_setval_2::exec_static;
	}
}

class pred_system_predicate_1 extends Code {

	/*
	 * 
	 * system_predicate(system_predicate(_576),_586):-call(_586).
	 * system_predicate(true,_608):-call(_608).
	 * system_predicate(therwise,_630):-call(_630).
	 * system_predicate(fail,_652):-call(_652).
	 * system_predicate(false,_674):-call(_674).
	 * system_predicate(!,_696):-call(_696).
	 * system_predicate('$get_level'(_712),_722):-call(_722).
	 * system_predicate('$neck_cut',_744):-call(_744).
	 * system_predicate('$cut'(_760),_770):-call(_770).
	 * system_predicate(_786^_788,_798):-call(_798).
	 * system_predicate((_814,_816),_826):-call(_826).
	 * system_predicate((_842;_844),_854):-call(_854).
	 * system_predicate((_870->_872),_882):-call(_882).
	 * system_predicate(call(_898),_908):-call(_908).
	 * system_predicate(catch(_924,_926,_928),_938):-call(_938).
	 * system_predicate(throw(_954),_964):-call(_964).
	 * system_predicate(on_exception(_980,_982,_984),_994):-call(_994).
	 * system_predicate(raise_exception(_1010),_1020):-call(_1020).
	 * system_predicate(_1036=_1038,_1048):-call(_1048).
	 * system_predicate('$unify'(_1064,_1066),_1076):-call(_1076).
	 * system_predicate(_1092\=_1094,_1104):-call(_1104).
	 * system_predicate('$not_unifiable'(_1120,_1122),_1132):-call(_1132).
	 * system_predicate(var(_1148),_1158):-call(_1158).
	 * system_predicate(atom(_1174),_1184):-call(_1184).
	 * system_predicate(integer(_1200),_1210):-call(_1210).
	 * system_predicate(long(_1226),_1236):-call(_1236).
	 * system_predicate(float(_1252),_1262):-call(_1262).
	 * system_predicate(atomic(_1278),_1288):-call(_1288).
	 * system_predicate(compound(_1304),_1314):-call(_1314).
	 * system_predicate(nonvar(_1330),_1340):-call(_1340).
	 * system_predicate(number(_1356),_1366):-call(_1366).
	 * system_predicate(java(_1382),_1392):-call(_1392).
	 * system_predicate(java(_1408,_1410),_1420):-call(_1420).
	 * system_predicate(closure(_1436),_1446):-call(_1446).
	 * system_predicate(ground(_1462),_1472):-call(_1472).
	 * system_predicate(callable(_1488),_1498):-call(_1498).
	 * system_predicate(_1514==_1516,_1526):-call(_1526).
	 * system_predicate('$equality_of_term'(_1542,_1544),_1554):-call(_1554).
	 * system_predicate(_1570\==_1572,_1582):-call(_1582).
	 * system_predicate('$inequality_of_term'(_1598,_1600),_1610):-call(_1610).
	 * system_predicate(_1626@<_1628,_1638):-call(_1638).
	 * system_predicate('$before'(_1654,_1656),_1666):-call(_1666).
	 * system_predicate(_1682@>_1684,_1694):-call(_1694).
	 * system_predicate('$after'(_1710,_1712),_1722):-call(_1722).
	 * system_predicate(_1738@=<_1740,_1750):-call(_1750).
	 * system_predicate('$not_after'(_1766,_1768),_1778):-call(_1778).
	 * system_predicate(_1794@>=_1796,_1806):-call(_1806).
	 * system_predicate('$not_before'(_1822,_1824),_1834):-call(_1834).
	 * system_predicate(?=(_1850,_1852),_1862):-call(_1862).
	 * system_predicate('$identical_or_cannot_unify'(_1878,_1880),_1890):-call(_1890
	 * ). system_predicate(compare(_1906,_1908,_1910),_1920):-call(_1920).
	 * system_predicate(sort(_1936,_1938),_1948):-call(_1948).
	 * system_predicate(keysort(_1964,_1966),_1976):-call(_1976).
	 * system_predicate(arg(_1992,_1994,_1996),_2006):-call(_2006).
	 * system_predicate(functor(_2022,_2024,_2026),_2036):-call(_2036).
	 * system_predicate(_2052=.._2054,_2064):-call(_2064).
	 * system_predicate('$univ'(_2080,_2082),_2092):-call(_2092).
	 * system_predicate(copy_term(_2108,_2110),_2120):-call(_2120).
	 * system_predicate(_2136 is _2138,_2148):-call(_2148).
	 * system_predicate('$abs'(_2164,_2166),_2176):-call(_2176).
	 * system_predicate('$asin'(_2192,_2194),_2204):-call(_2204).
	 * system_predicate('$acos'(_2220,_2222),_2232):-call(_2232).
	 * system_predicate('$atan'(_2248,_2250),_2260):-call(_2260).
	 * system_predicate('$bitwise_conj'(_2276,_2278,_2280),_2290):-call(_2290).
	 * system_predicate('$bitwise_disj'(_2306,_2308,_2310),_2320):-call(_2320).
	 * system_predicate('$bitwise_exclusive_or'(_2336,_2338,_2340),_2350):-call(
	 * _2350). system_predicate('$bitwise_neg'(_2366,_2368),_2378):-call(_2378).
	 * system_predicate('$ceil'(_2394,_2396),_2406):-call(_2406).
	 * system_predicate('$cos'(_2422,_2424),_2434):-call(_2434).
	 * system_predicate('$degrees'(_2450,_2452),_2462):-call(_2462).
	 * system_predicate('$exp'(_2478,_2480),_2490):-call(_2490).
	 * system_predicate('$float'(_2506,_2508),_2518):-call(_2518).
	 * system_predicate('$float_integer_part'(_2534,_2536),_2546):-call(_2546).
	 * system_predicate('$float_fractional_part'(_2562,_2564),_2574):-call(_2574).
	 * system_predicate('$float_quotient'(_2590,_2592,_2594),_2604):-call(_2604).
	 * system_predicate('$floor'(_2620,_2622),_2632):-call(_2632).
	 * system_predicate('$int_quotient'(_2648,_2650,_2652),_2662):-call(_2662).
	 * system_predicate('$log'(_2678,_2680),_2690):-call(_2690).
	 * system_predicate('$max'(_2706,_2708,_2710),_2720):-call(_2720).
	 * system_predicate('$min'(_2736,_2738,_2740),_2750):-call(_2750).
	 * system_predicate('$minus'(_2766,_2768,_2770),_2780):-call(_2780).
	 * system_predicate('$mod'(_2796,_2798,_2800),_2810):-call(_2810).
	 * system_predicate('$multi'(_2826,_2828,_2830),_2840):-call(_2840).
	 * system_predicate('$plus'(_2856,_2858,_2860),_2870):-call(_2870).
	 * system_predicate('$pow'(_2886,_2888,_2890),_2900):-call(_2900).
	 * system_predicate('$radians'(_2916,_2918),_2928):-call(_2928).
	 * system_predicate('$rint'(_2944,_2946),_2956):-call(_2956).
	 * system_predicate('$round'(_2972,_2974),_2984):-call(_2984).
	 * system_predicate('$shift_left'(_3000,_3002,_3004),_3014):-call(_3014).
	 * system_predicate('$shift_right'(_3030,_3032,_3034),_3044):-call(_3044).
	 * system_predicate('$sign'(_3060,_3062),_3072):-call(_3072).
	 * system_predicate('$sin'(_3088,_3090),_3100):-call(_3100).
	 * system_predicate('$sqrt'(_3116,_3118),_3128):-call(_3128).
	 * system_predicate('$tan'(_3144,_3146),_3156):-call(_3156).
	 * system_predicate('$truncate'(_3172,_3174),_3184):-call(_3184).
	 * system_predicate(_3200=:=_3202,_3212):-call(_3212).
	 * system_predicate('$arith_equal'(_3228,_3230),_3240):-call(_3240).
	 * system_predicate(_3256=\=_3258,_3268):-call(_3268).
	 * system_predicate('$arith_not_equal'(_3284,_3286),_3296):-call(_3296).
	 * system_predicate(_3312<_3314,_3324):-call(_3324).
	 * system_predicate('$less_than'(_3340,_3342),_3352):-call(_3352).
	 * system_predicate(_3368=<_3370,_3380):-call(_3380).
	 * system_predicate('$less_or_equal'(_3396,_3398),_3408):-call(_3408).
	 * system_predicate(_3424>_3426,_3436):-call(_3436).
	 * system_predicate('$greater_than'(_3452,_3454),_3464):-call(_3464).
	 * system_predicate(_3480>=_3482,_3492):-call(_3492).
	 * system_predicate('$greater_or_equal'(_3508,_3510),_3520):-call(_3520).
	 * system_predicate(clause(_3536,_3538),_3548):-call(_3548).
	 * system_predicate(initialization(_3564,_3566),_3576):-call(_3576).
	 * system_predicate('$new_indexing_hash'(_3592,_3594,_3596),_3606):-call(_3606).
	 * system_predicate(assert(_3622),_3632):-call(_3632).
	 * system_predicate(assertz(_3648),_3658):-call(_3658).
	 * system_predicate(asserta(_3674),_3684):-call(_3684).
	 * system_predicate(retract(_3700),_3710):-call(_3710).
	 * system_predicate(abolish(_3726),_3736):-call(_3736).
	 * system_predicate(retractall(_3752),_3762):-call(_3762).
	 * system_predicate(findall(_3778,_3780,_3782),_3792):-call(_3792).
	 * system_predicate(bagof(_3808,_3810,_3812),_3822):-call(_3822).
	 * system_predicate(setof(_3838,_3840,_3842),_3852):-call(_3852).
	 * system_predicate(current_input(_3868),_3878):-call(_3878).
	 * system_predicate(current_output(_3894),_3904):-call(_3904).
	 * system_predicate(set_input(_3920),_3930):-call(_3930).
	 * system_predicate(set_output(_3946),_3956):-call(_3956).
	 * system_predicate(open(_3972,_3974,_3976),_3986):-call(_3986).
	 * system_predicate(open(_4002,_4004,_4006,_4008),_4018):-call(_4018).
	 * system_predicate(close(_4034),_4044):-call(_4044).
	 * system_predicate(close(_4060,_4062),_4072):-call(_4072).
	 * system_predicate(flush_output(_4088),_4098):-call(_4098).
	 * system_predicate(flush_output,_4120):-call(_4120).
	 * system_predicate(stream_property(_4136,_4138),_4148):-call(_4148).
	 * system_predicate(get_char(_4164),_4174):-call(_4174).
	 * system_predicate(get_char(_4190,_4192),_4202):-call(_4202).
	 * system_predicate(get_code(_4218),_4228):-call(_4228).
	 * system_predicate(get_code(_4244,_4246),_4256):-call(_4256).
	 * system_predicate(peek_char(_4272),_4282):-call(_4282).
	 * system_predicate(peek_char(_4298,_4300),_4310):-call(_4310).
	 * system_predicate(peek_code(_4326),_4336):-call(_4336).
	 * system_predicate(peek_code(_4352,_4354),_4364):-call(_4364).
	 * system_predicate(put_char(_4380),_4390):-call(_4390).
	 * system_predicate(put_char(_4406,_4408),_4418):-call(_4418).
	 * system_predicate(put_code(_4434),_4444):-call(_4444).
	 * system_predicate(put_code(_4460,_4462),_4472):-call(_4472).
	 * system_predicate(nl,_4494):-call(_4494).
	 * system_predicate(nl(_4510),_4520):-call(_4520).
	 * system_predicate(get0(_4536),_4546):-call(_4546).
	 * system_predicate(get0(_4562,_4564),_4574):-call(_4574).
	 * system_predicate(get(_4590),_4600):-call(_4600).
	 * system_predicate(get(_4616,_4618),_4628):-call(_4628).
	 * system_predicate(put(_4644),_4654):-call(_4654).
	 * system_predicate(put(_4670,_4672),_4682):-call(_4682).
	 * system_predicate(tab(_4698),_4708):-call(_4708).
	 * system_predicate(tab(_4724,_4726),_4736):-call(_4736).
	 * system_predicate(skip(_4752),_4762):-call(_4762).
	 * system_predicate(skip(_4778,_4780),_4790):-call(_4790).
	 * system_predicate(get_byte(_4806),_4816):-call(_4816).
	 * system_predicate(get_byte(_4832,_4834),_4844):-call(_4844).
	 * system_predicate(peek_byte(_4860),_4870):-call(_4870).
	 * system_predicate(peek_byte(_4886,_4888),_4898):-call(_4898).
	 * system_predicate(put_byte(_4914),_4924):-call(_4924).
	 * system_predicate(put_byte(_4940,_4942),_4952):-call(_4952).
	 * system_predicate(read(_4968),_4978):-call(_4978).
	 * system_predicate(read(_4994,_4996),_5006):-call(_5006).
	 * system_predicate(read_with_variables(_5022,_5024),_5034):-call(_5034).
	 * system_predicate(read_with_variables(_5050,_5052,_5054),_5064):-call(_5064).
	 * system_predicate(read_line(_5080),_5090):-call(_5090).
	 * system_predicate(read_line(_5106,_5108),_5118):-call(_5118).
	 * system_predicate(write(_5134),_5144):-call(_5144).
	 * system_predicate(write(_5160,_5162),_5172):-call(_5172).
	 * system_predicate(writeq(_5188),_5198):-call(_5198).
	 * system_predicate(writeq(_5214,_5216),_5226):-call(_5226).
	 * system_predicate(write_canonical(_5242),_5252):-call(_5252).
	 * system_predicate(write_canonical(_5268,_5270),_5280):-call(_5280).
	 * system_predicate(write_term(_5296,_5298),_5308):-call(_5308).
	 * system_predicate(write_term(_5324,_5326,_5328),_5338):-call(_5338).
	 * system_predicate(op(_5354,_5356,_5358),_5368):-call(_5368).
	 * system_predicate(current_op(_5384,_5386,_5388),_5398):-call(_5398).
	 * system_predicate(\+_5414,_5424):-call(_5424).
	 * system_predicate(once(_5440),_5450):-call(_5450).
	 * system_predicate(repeat,_5472):-call(_5472).
	 * system_predicate(atom_length(_5488,_5490),_5500):-call(_5500).
	 * system_predicate(atom_concat(_5516,_5518,_5520),_5530):-call(_5530).
	 * system_predicate(sub_atom(_5546,_5548,_5550,_5552,_5554),_5564):-call(_5564).
	 * system_predicate(atom_chars(_5580,_5582),_5592):-call(_5592).
	 * system_predicate(atom_codes(_5608,_5610),_5620):-call(_5620).
	 * system_predicate(char_code(_5636,_5638),_5648):-call(_5648).
	 * system_predicate(number_chars(_5664,_5666),_5676):-call(_5676).
	 * system_predicate(number_codes(_5692,_5694),_5704):-call(_5704).
	 * system_predicate(name(_5720,_5722),_5732):-call(_5732).
	 * system_predicate(set_prolog_flag(_5748,_5750),_5760):-call(_5760).
	 * system_predicate(current_prolog_flag(_5776,_5778),_5788):-call(_5788).
	 * system_predicate(halt,_5810):-call(_5810).
	 * system_predicate(halt(_5826),_5836):-call(_5836).
	 * system_predicate(abort,_5858):-call(_5858).
	 * system_predicate('C'(_5874,_5876,_5878),_5888):-call(_5888).
	 * system_predicate(expand_term(_5904,_5906),_5916):-call(_5916).
	 * system_predicate(new_hash(_5932),_5942):-call(_5942).
	 * system_predicate(new_hash(_5958,_5960),_5970):-call(_5970).
	 * system_predicate(hash_clear(_5986),_5996):-call(_5996).
	 * system_predicate(hash_contains_key(_6012,_6014),_6024):-call(_6024).
	 * system_predicate(hash_get(_6040,_6042,_6044),_6054):-call(_6054).
	 * system_predicate(hash_is_empty(_6070),_6080):-call(_6080).
	 * system_predicate(hash_keys(_6096,_6098),_6108):-call(_6108).
	 * system_predicate(hash_map(_6124,_6126),_6136):-call(_6136).
	 * system_predicate(hash_put(_6152,_6154,_6156),_6166):-call(_6166).
	 * system_predicate(hash_remove(_6182,_6184),_6194):-call(_6194).
	 * system_predicate(hash_size(_6210,_6212),_6222):-call(_6222).
	 * system_predicate('$get_hash_manager'(_6238),_6248):-call(_6248).
	 * system_predicate(java_constructor0(_6264,_6266),_6276):-call(_6276).
	 * system_predicate(java_constructor(_6292,_6294),_6304):-call(_6304).
	 * system_predicate(java_declared_constructor0(_6320,_6322),_6332):-call(_6332).
	 * system_predicate(java_declared_constructor(_6348,_6350),_6360):-call(_6360).
	 * system_predicate(java_method0(_6376,_6378,_6380),_6390):-call(_6390).
	 * system_predicate(java_method(_6406,_6408,_6410),_6420):-call(_6420).
	 * system_predicate(java_declared_method0(_6436,_6438,_6440),_6450):-call(_6450)
	 * .
	 * system_predicate(java_declared_method(_6466,_6468,_6470),_6480):-call(_6480).
	 * system_predicate(java_get_field0(_6496,_6498,_6500),_6510):-call(_6510).
	 * system_predicate(java_get_field(_6526,_6528,_6530),_6540):-call(_6540).
	 * system_predicate(java_get_declared_field0(_6556,_6558,_6560),_6570):-call(
	 * _6570).
	 * system_predicate(java_get_declared_field(_6586,_6588,_6590),_6600):-call(
	 * _6600).
	 * system_predicate(java_set_field0(_6616,_6618,_6620),_6630):-call(_6630).
	 * system_predicate(java_set_field(_6646,_6648,_6650),_6660):-call(_6660).
	 * system_predicate(java_set_declared_field0(_6676,_6678,_6680),_6690):-call(
	 * _6690).
	 * system_predicate(java_set_declared_field(_6706,_6708,_6710),_6720):-call(
	 * _6720). system_predicate(synchronized(_6736,_6738),_6748):-call(_6748).
	 * system_predicate(java_conversion(_6764,_6766),_6776):-call(_6776).
	 * system_predicate(cafeteria,_6798):-call(_6798).
	 * system_predicate(consult(_6814),_6824):-call(_6824).
	 * system_predicate(trace,_6846):-call(_6846).
	 * system_predicate(notrace,_6868):-call(_6868).
	 * system_predicate(debug,_6890):-call(_6890).
	 * system_predicate(nodebug,_6912):-call(_6912).
	 * system_predicate(leash(_6928),_6938):-call(_6938).
	 * system_predicate(spy(_6954),_6964):-call(_6964).
	 * system_predicate(nospy(_6980),_6990):-call(_6990).
	 * system_predicate(nospyall,_7012):-call(_7012).
	 * system_predicate(listing,_7034):-call(_7034).
	 * system_predicate(listing(_7050),_7060):-call(_7060).
	 * system_predicate(length(_7076,_7078),_7088):-call(_7088).
	 * system_predicate(numbervars(_7104,_7106,_7108),_7118):-call(_7118).
	 * system_predicate(statistics(_7134,_7136),_7146):-call(_7146).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_system_predicate_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s212, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__2(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s217)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__3(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s214)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__4(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s117)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__5(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s118)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__6(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__7(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s26, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__8(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s40)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__9(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s16, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__10(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s83, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__11(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s59, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__12(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s64, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__13(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s60, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__14(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s98, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__15(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__16);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s100, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__16(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s215, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__17(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s180, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__18(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__19);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s194, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__19(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__20);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s66, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__20(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__21);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s57, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__21(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__22);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s81, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__22(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__23);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s44, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__23(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__24);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s218, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__24(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__25);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s90, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__25(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__26);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s141, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__26(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__27);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s165, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__27(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__28);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s120, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__28(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__29);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s95, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__29(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__30);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s107, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__30(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__31);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s172, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__31(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__32);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s176, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__32(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__33);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s143, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__33(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__34);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s143, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__34(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__35);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s104, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__35(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__36);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s129, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__36(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__37);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s99, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__37(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__38);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s70, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__38(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__39);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s18, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__39(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__40);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s82, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__40(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__41);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__41(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__42);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s75, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__42(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__43);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s9, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__43(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__44);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s77, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__44(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__45);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s4, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__45(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__46);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s76, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__46(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__47);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s42, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__47(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__48);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s78, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__48(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__49);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s43, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__49(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__50);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s74, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__50(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__51);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s29, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__51(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__52);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s106, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__52(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__53);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s206, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__53(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__54);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s161, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__54(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__55);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s86, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__55(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__56);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s122, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__56(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__57);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s67, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__57(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__58);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s58, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__58(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__59);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s109, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__59(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__60);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s142, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__60(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__61);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s2, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__61(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__62);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s7, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__62(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__63);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s3, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__63(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__64);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s8, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__64(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__65);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s10, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__65(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__66);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s11, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__66(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__67);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s12, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__67(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__68);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s13, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__68(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__69);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s14, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__69(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__70);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s15, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__70(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__71);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s17, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__71(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__72);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s19, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__72(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__73);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s20, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__73(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__74);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s22, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__74(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__75);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s21, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__75(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__76);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s23, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__76(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__77);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s24, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__77(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__78);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s31, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__78(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__79);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s34, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__79(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__80);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s35, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__80(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__81);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s36, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__81(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__82);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s37, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__82(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__83);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s38, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__83(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__84);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s39, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__84(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__85);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s45, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__85(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__86);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s46, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__86(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__87);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s47, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__87(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__88);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s48, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__88(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__89);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s49, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__89(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__90);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s50, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__90(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__91);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s51, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__91(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__92);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s52, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__92(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__93);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s53, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__93(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__94);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s54, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__94(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__95);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s55, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__95(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__96);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s56, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__96(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__97);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s68, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__97(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__98);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s5, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__98(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__99);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s71, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__99(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__100);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s6, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__100(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__101);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s65, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__101(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__102);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s33, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__102(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__103);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s69, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__103(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__104);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s32, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__104(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__105);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s72, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__105(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__106);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s28, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__106(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__107);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s73, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__107(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__108);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s27, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__108(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__109);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s102, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__109(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__110);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s140, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__110(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__111);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s41, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__111(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__112);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s87, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__112(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__113);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s89, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__113(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__114);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s88, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__114(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__115);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s199, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__115(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__116);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s84, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__116(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__117);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s200, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__117(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__118);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s119, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__118(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__119);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s96, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__119(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__120);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s204, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__120(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__121);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s110, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__121(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__122);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s112, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__122(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__123);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s201, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__123(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__124);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s202, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__124(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__125);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s184, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__125(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__126);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s184, var1, var2, var3, var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__126(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__127);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s103, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__127(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__128);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s103, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__128(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__129);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s121, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__129(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__130);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s121)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__130(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__131);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s209, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__131(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__132);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s127, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__132(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__133);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s127, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__133(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__134);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s128, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__134(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__135);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s128, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__135(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__136);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s187, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__136(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__137);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s187, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__137(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__138);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s188, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__138(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__139);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s188, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__139(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__140);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s192, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__140(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__141);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s192, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__141(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__142);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s193, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__142(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__143);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s193, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__143(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__144);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s170)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__144(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__145);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s170, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__145(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__146);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s125, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__146(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__147);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s125, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__147(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__148);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s124, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__148(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__149);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s124, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__149(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__150);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s190, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__150(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__151);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s190, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__151(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__152);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s213, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__152(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__153);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s213, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__153(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__154);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s205, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__154(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__155);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s205, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__155(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__156);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s126, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__156(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__157);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s126, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__157(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__158);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s186, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__158(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__159);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s186, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__159(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__160);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s191, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__160(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__161);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s191, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__161(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__162);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s195, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__162(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__163);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s195, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__163(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__164);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s197, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__164(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__165);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s197, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__165(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__166);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s196, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__166(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__167);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s196, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__167(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__168);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s219, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__168(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__169);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s219, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__169(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__170);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s222, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__170(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__171);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s222, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__171(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__172);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s220, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__172(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__173);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s220, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__173(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__174);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s221, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__174(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__175);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s221, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__175(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__176);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s183, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__176(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__177);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s111, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__177(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__178);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s80, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__178(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__179);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s182, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__179(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__180);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s198)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__180(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__181);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s94, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__181(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__182);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s93, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__182(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__183);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s210, var1, var2, var3, var4, var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__183(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__184);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s91, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__184(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__185);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s92, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__185(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__186);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s101, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__186(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__187);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s177, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__187(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__188);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s178, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__188(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__189);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s167, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__189(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__190);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s203, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__190(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__191);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s113, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__191(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__192);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s130)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__192(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__193);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s130, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__193(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__194);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s85)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__194(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__195);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s79, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__195(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__196);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s116, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__196(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__197);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s169, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__197(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__198);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s169, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__198(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__199);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s131, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__199(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__200);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s132, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__200(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__201);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s133, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__201(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__202);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s134, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__202(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__203);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s135, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__203(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__204);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s136, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__204(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__205);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s137, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__205(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__206);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s138, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__206(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__207);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s139, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__207(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__208);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s25, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__208(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__209);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s145, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__209(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__210);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s144, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__210(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__211);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s148, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__211(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__212);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s147, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__212(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__213);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s156, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__213(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__214);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s155, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__214(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__215);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s150, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__215(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__216);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s149, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__216(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__217);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s154, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__217(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__218);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s153, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__218(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__219);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s152, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__219(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__220);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s151, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__220(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__221);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s160, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__221(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__222);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s159, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__222(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__223);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s158, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__223(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__224);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s157, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__224(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__225);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s211, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__225(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__226);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s146, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__226(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__227);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s97)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__227(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__228);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s108, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__228(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__229);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s216)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__229(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__230);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s175)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__230(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__231);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s114)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__231(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__232);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s171)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__232(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__233);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s162, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__233(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__234);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s207, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__234(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__235);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s173, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__235(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__236);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s174)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__236(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__237);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_system.s164)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__237(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__238);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s164, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__238(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__239);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s163, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__239(PrologMachine mach) {
		mach.FillAlternative(pred_system_predicate_1::exec_pred_system_predicate_1__240);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s179, var1, var2, var3))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_system_predicate_1__240(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_system.s208, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}
