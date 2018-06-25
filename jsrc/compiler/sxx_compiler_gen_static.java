import java.util.function.Function;

class sxx_compiler_gen_static /* extends CodeFile */ {
	static Const s0 = Const.Intern("cut");
	static Const s1 = Const.Intern("");
	static Const s2 = Const.Intern("\n\n*/\n");
	static Const s3 = Const.Intern("\n/*\n\n");
	static Const s4 = Const.Intern(" /*extends CodeFile*/ {");
	static Const s5 = Const.Intern(" ;");
	static Const s6 = Const.Intern(" ;}");
	static Const s7 = Const.Intern(" = ");
	static Const s8 = Const.Intern(" = Const.Intern(");
	static Const s9 = Const.Intern(" = Term.Number(");
	static Const s10 = Const.Intern(" = V(mach) ;");
	static Const s11 = Const.Intern(" = local_aregs[");
	static Const s12 = Const.Intern(" extends Code {\n");
	static Const s13 = Const.Intern("!");
	static Const s14 = Const.Intern("\",");
	static Const s15 = Const.Intern("$VAR");
	static Const s16 = Const.Intern("$cont");
	static Const s17 = Const.Intern("(Function<PrologMachine,Function>)pred_");
	static Const s18 = Const.Intern("(PrologMachine mach){ ");
	static Const s19 = Const.Intern(")");
	static Const s20 = Const.Intern(") ;");
	static Const s21 = Const.Intern("))) return UpperPrologMachine.Fail0 ;");
	static Const s22 = Const.Intern(").Unify(");
	static Const s23 = Const.Intern(");");
	static Const s24 = Const.Intern("*->");
	static Const s25 = Const.Intern("+");
	static Const s26 = Const.Intern(",");
	static Const s27 = Const.Intern("-");
	static Const s28 = Const.Intern("-->");
	static Const s29 = Const.Intern("->");
	static Const s30 = Const.Intern(".");
	static Const s31 = Const.Intern("../jsrc/benches");
	static Const s32 = Const.Intern("../jsrc/bootlib");
	static Const s33 = Const.Intern("../jsrc/compiler");
	static Const s34 = Const.Intern("../jsrc/library");
	static Const s35 = Const.Intern("../jsrc/testing");
	static Const s36 = Const.Intern(".Deref()");
	static Const s37 = Const.Intern(".java");
	static Const s38 = Const.Intern(".s");
	static Const s39 = Const.Intern(".s0, new HeapChoice(mach.CUTB),");
	static Const s40 = Const.Intern("/");
	static Const s41 = Const.Intern("/* Term aregs[] = {");
	static Const s42 = Const.Intern("// Authors: Douglas R. Miles, Bart Demoen and Paul Tarau");
	static Const s43 = Const.Intern("// Copyright August 16, 1996,2018 LOGICMOO, KUL and CUM");
	static Const s44 = Const.Intern("// Generated code file - by dmiles");
	static Const s45 = Const.Intern(":");
	static Const s46 = Const.Intern(":-");
	static Const s47 = Const.Intern("::exec_");
	static Const s48 = Const.Intern("::exec_pred_");
	static Const s49 = Const.Intern("::exec_static");
	static Const s50 = Const.Intern(";");
	static Const s51 = Const.Intern("<");
	static Const s52 = Const.Intern("=");
	static Const s53 = Const.Intern("=..");
	static Const s54 = Const.Intern("=:=");
	static Const s55 = Const.Intern("=<");
	static Const s56 = Const.Intern("==");
	static Const s57 = Const.Intern("=@=");
	static Const s58 = Const.Intern(">");
	static Const s59 = Const.Intern(">=");
	static Const s60 = Const.Intern("@<");
	static Const s61 = Const.Intern("@=<");
	static Const s62 = Const.Intern("@>");
	static Const s63 = Const.Intern("@>=");
	static Const s64 = Const.Intern("Const.Intern(");
	static Const s65 = Const.Intern("Const.Nil");
	static Const s66 = Const.Intern("F(");
	static Const s67 = Const.Intern("Float(");
	static Const s68 = Const.Intern("Term areg");
	static Const s69 = Const.Intern("Term aregs[] = mach.RegPull(");
	static Const s70 = Const.Intern("Term continuation = local_aregs[");
	static Const s71 = Const.Intern("Term local_aregs[] = mach.Areg ;");
	static Const s72 = Const.Intern("UpperPrologMachine.Call1");
	static Const s73 = Const.Intern("UpperPrologMachine.Call2");
	static Const s74 = Const.Intern("UpperPrologMachine.Cut2");
	static Const s75 = Const.Intern("Var var");
	static Const s76 = Const.Intern("[|]");
	static Const s77 = Const.Intern("\\+");
	static Const s78 = Const.Intern("\\=");
	static Const s79 = Const.Intern("\\==");
	static Const s80 = Const.Intern("]");
	static Const s81 = Const.Intern("] ;");
	static Const s82 = Const.Intern("] = ");
	static Const s83 = Const.Intern("].Deref() ;");
	static Const s84 = Const.Intern("^");
	static Const s85 = Const.Intern("_");
	static Const s86 = Const.Intern("__");
	static Const s87 = Const.Intern("__1(mach); }");
	static Const s88 = Const.Intern("_c");
	static Const s89 = Const.Intern("a");
	static Const s90 = Const.Intern("absolute_file_name");
	static Const s91 = Const.Intern("addclausetoprogram");
	static Const s92 = Const.Intern("addcont");
	static Const s93 = Const.Intern("all");
	static Const s94 = Const.Intern("alnum");
	static Const s95 = Const.Intern("append");
	static Const s96 = Const.Intern("aregarray");
	static Const s97 = Const.Intern("arg");
	static Const s98 = Const.Intern("arithequal");
	static Const s99 = Const.Intern("atom");
	static Const s100 = Const.Intern("atom_concat");
	static Const s101 = Const.Intern("atom_string");
	static Const s102 = Const.Intern("atomic");
	static Const s103 = Const.Intern("atomic_list_concat");
	static Const s104 = Const.Intern("bench/*");
	static Const s105 = Const.Intern("binarize");
	static Const s106 = Const.Intern("bodycont");
	static Const s107 = Const.Intern("call");
	static Const s108 = Const.Intern("call_local_side_efs");
	static Const s109 = Const.Intern("class ");
	static Const s110 = Const.Intern("classname");
	static Const s111 = Const.Intern("code_type");
	static Const s112 = Const.Intern("comp");
	static Const s113 = Const.Intern("comp_to");
	static Const s114 = Const.Intern("compound");
	static Const s115 = Const.Intern("constructterm");
	static Const s116 = Const.Intern("cont");
	static Const s117 = Const.Intern("cont ;");
	static Const s118 = Const.Intern("cont = mach.LoadPred(\"");
	static Const s119 = Const.Intern("cont = pred_");
	static Const s120 = Const.Intern("cont_ref");
	static Const s121 = Const.Intern("continuation");
	static Const s122 = Const.Intern("continuationof");
	static Const s123 = Const.Intern("cut");
	static Const s124 = Const.Intern("dcg_arrow");
	static Const s125 = Const.Intern("decl_deref_args");
	static Const s126 = Const.Intern("declforeachclause");
	static Const s127 = Const.Intern("declforeachcontinuation");
	static Const s128 = Const.Intern("declforeachint");
	static Const s129 = Const.Intern("declforeachstring");
	static Const s130 = Const.Intern("declvars");
	static Const s131 = Const.Intern("determinate");
	static Const s132 = Const.Intern("end_of_file");
	static Const s133 = Const.Intern("endif");
	static Const s134 = Const.Intern("entry_code");
	static Const s135 = Const.Intern("exists_file");
	static Const s136 = Const.Intern("expand");
	static Const s137 = Const.Intern("fail");
	static Const s138 = Const.Intern("file_base_name");
	static Const s139 = Const.Intern("file_name_extension");
	static Const s140 = Const.Intern("file_type");
	static Const s141 = Const.Intern("float");
	static Const s142 = Const.Intern("forall");
	static Const s143 = Const.Intern("format");
	static Const s144 = Const.Intern("functor");
	static Const s145 = Const.Intern("genclausecode");
	static Const s146 = Const.Intern("gencode_sss");
	static Const s147 = Const.Intern("gencodeforpred");
	static Const s148 = Const.Intern("genpredcode");
	static Const s149 = Const.Intern("getforarg");
	static Const s150 = Const.Intern("getnameindex");
	static Const s151 = Const.Intern("gets");
	static Const s152 = Const.Intern("getval");
	static Const s153 = Const.Intern("if");
	static Const s154 = Const.Intern("if (!( (areg");
	static Const s155 = Const.Intern("if_then_arrow");
	static Const s156 = Const.Intern("ignore");
	static Const s157 = Const.Intern("import java.util.function.Function; class ");
	static Const s158 = Const.Intern("initforeachcontinuation");
	static Const s159 = Const.Intern("integer");
	static Const s160 = Const.Intern("intof");
	static Const s161 = Const.Intern("ints");
	static Const s162 = Const.Intern("is");
	static Const s163 = Const.Intern("last");
	static Const s164 = Const.Intern("legacy_functor");
	static Const s165 = Const.Intern("local_aregs[");
	static Const s166 = Const.Intern("local_side_efs");
	static Const s167 = Const.Intern("mach.Areg[");
	static Const s168 = Const.Intern("mach.CUTB = mach.CurrentChoice ;");
	static Const s169 = Const.Intern("mach.CreateChoicePoint(aregs) ;");
	static Const s170 = Const.Intern("mach.DoCut(mach.CUTB)  ;");
	static Const s171 = Const.Intern("mach.FillAlternative(");
	static Const s172 = Const.Intern("mach.RemoveChoice() ;");
	static Const s173 = Const.Intern("make_classname");
	static Const s174 = Const.Intern("make_directory_path");
	static Const s175 = Const.Intern("makebinbody");
	static Const s176 = Const.Intern("makename");
	static Const s177 = Const.Intern("must");
	static Const s178 = Const.Intern("must_det");
	static Const s179 = Const.Intern("must_det_l");
	static Const s180 = Const.Intern("mynumbervars");
	static Const s181 = Const.Intern("mynumbervarslist");
	static Const s182 = Const.Intern("mysetof");
	static Const s183 = Const.Intern("name");
	static Const s184 = Const.Intern("nb_current");
	static Const s185 = Const.Intern("nb_setval");
	static Const s186 = Const.Intern("negint");
	static Const s187 = Const.Intern("newargs");
	static Const s188 = Const.Intern("nl");
	static Const s189 = Const.Intern("not");
	static Const s190 = Const.Intern("notlast");
	static Const s191 = Const.Intern("null ;");
	static Const s192 = Const.Intern("nullify");
	static Const s193 = Const.Intern("nullifyaregs");
	static Const s194 = Const.Intern("on_load_");
	static Const s195 = Const.Intern("on_load_sxx_compiler_gen_static");
	static Const s196 = Const.Intern("or");
	static Const s197 = Const.Intern("package");
	static Const s198 = Const.Intern("posint");
	static Const s199 = Const.Intern("posneg");
	static Const s200 = Const.Intern("pred_");
	static Const s201 = Const.Intern("prelude");
	static Const s202 = Const.Intern("prolog");
	static Const s203 = Const.Intern("public");
	static Const s204 = Const.Intern("public static Function<PrologMachine,Function> exec_");
	static Const s205 = Const
			.Intern("public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ ");
	static Const s206 = Const.Intern("putforarg");
	static Const s207 = Const.Intern("puts");
	static Const s208 = Const.Intern("read");
	static Const s209 = Const.Intern("readprogram");
	static Const s210 = Const.Intern("repeat");
	static Const s211 = Const.Intern("return ");
	static Const s212 = Const.Intern("return (Function<PrologMachine,Function>)exec_");
	static Const s213 = Const.Intern("samepred");
	static Const s214 = Const.Intern("see");
	static Const s215 = Const.Intern("seen");
	static Const s216 = Const.Intern("setof");
	static Const s217 = Const.Intern("smallerorequal");
	static Const s218 = Const.Intern("smallerthan");
	static Const s219 = Const.Intern("solutions");
	static Const s220 = Const.Intern("specialgoal");
	static Const s221 = Const.Intern("static Const s");
	static Const s222 = Const.Intern("static Function<PrologMachine, Function> ");
	static Const s223 = Const.Intern("static Function<PrologMachine, Function> cl");
	static Const s224 = Const.Intern("static Int ");
	static Const s225 = Const.Intern("stem");
	static Const s226 = Const.Intern("strict_eq");
	static Const s227 = Const.Intern("strict_noteq");
	static Const s228 = Const.Intern("string");
	static Const s229 = Const.Intern("stringof");
	static Const s230 = Const.Intern("strings");
	static Const s231 = Const.Intern("strings1");
	static Const s232 = Const.Intern("stringsl");
	static Const s233 = Const.Intern("sxx_builtins");
	static Const s234 = Const.Intern("sxx_builtins_cafe");
	static Const s235 = Const.Intern("sxx_compiler_gen_static");
	static Const s236 = Const.Intern("sxx_library");
	static Const s237 = Const.Intern("sxx_read");
	static Const s238 = Const.Intern("sxx_system");
	static Const s239 = Const.Intern("sym_");
	static Const s240 = Const.Intern("symbol_to_name");
	static Const s241 = Const.Intern("symbol_to_name1");
	static Const s242 = Const.Intern("system_bar");
	static Const s243 = Const.Intern("system_carrot");
	static Const s244 = Const.Intern("system_colon");
	static Const s245 = Const.Intern("system_comma");
	static Const s246 = Const.Intern("system_equals");
	static Const s247 = Const.Intern("system_neck");
	static Const s248 = Const.Intern("system_not");
	static Const s249 = Const.Intern("system_notequals");
	static Const s250 = Const.Intern("system_semicolon");
	static Const s251 = Const.Intern("system_univ");
	static Const s252 = Const.Intern("system_variant");
	static Const s253 = Const.Intern("tell");
	static Const s254 = Const.Intern("termequal");
	static Const s255 = Const.Intern("termgreaterequal");
	static Const s256 = Const.Intern("termgreaterthan");
	static Const s257 = Const.Intern("termsmallerequal");
	static Const s258 = Const.Intern("termsmallerthan");
	static Const s259 = Const.Intern("tests/*");
	static Const s260 = Const.Intern("told");
	static Const s261 = Const.Intern("true");
	static Const s262 = Const.Intern("unify");
	static Const s263 = Const.Intern("use_entry_code");
	static Const s264 = Const.Intern("use_load_pred");
	static Const s265 = Const.Intern("use_static_call");
	static Const s266 = Const.Intern("var");
	static Const s267 = Const.Intern("w_cl");
	static Const s268 = Const.Intern("wdmsg");
	static Const s269 = Const.Intern("with_each_arrow");
	static Const s270 = Const.Intern("wr");
	static Const s271 = Const.Intern("wrargs");
	static Const s272 = Const.Intern("write");
	static Const s273 = Const.Intern("writeFunctor");
	static Const s274 = Const.Intern("writel");
	static Const s275 = Const.Intern("yes");
	static Const s276 = Const.Intern("|");
	static Const s277 = Const.Intern("}\n\n\n");
	static Const s278 = Const.Intern("} ;*/");
	static Const s279 = Const.Intern("~N~p.~n");
	static Const s280 = Const.Intern("~q");
	static Int negint1 = Term.Number(-1);
	static Int posint0 = Term.Number(0);
	static Int posint1 = Term.Number(1);
	static Int posint2 = Term.Number(2);
	static Int posint95 = Term.Number(95);
}

class pred_append_3 extends Code {

	/*
	 * 
	 * append([],_382,_382,_392):-call(_392).
	 * append([_412|_414],_422,[_412|_420],_430):-append(_414,_422,_420,_430).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_append_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_append_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_append_3::exec_pred_append_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_append_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sxx_compiler_gen_static.s30, var1.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_append_3::exec_static;
	}
}

class pred_legacy_functor_3 extends Code {

	/*
	 * 
	 * legacy_functor(_458,'.',_460,_468):-functor(_458,'[|]',_460,cut(1,_468)).
	 * legacy_functor(_502,_504,_506,_514):-functor(_502,_504,_506,cut(1,_514)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_legacy_functor_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_legacy_functor_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_legacy_functor_3::exec_pred_legacy_functor_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s30)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = sxx_compiler_gen_static.s76;
		local_aregs[2] = var2.Deref();
		local_aregs[3] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_legacy_functor_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_functor_3::exec_static;
	}
}

class pred_comp_1 extends Code {

	/*
	 * 
	 * comp(_548,_556):-comp_to(_548,'../jsrc/bootlib',_556).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_comp_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_comp_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = sxx_compiler_gen_static.s32;
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_comp_to_2::exec_static;
	}
}

class pred_comp_to_2 extends Code {

	/*
	 * 
	 * comp_to(_578,_580,_646):-not(exists_file(_578),cut(1,forall((
	 * absolute_file_name(_578,_620,[expand(true),file_type(prolog),solutions(all)])
	 * ,exists_file(_620)),comp_to(_620,_580),_646))).
	 * comp_to(_682,_684,_894):-must_det_l((exists_file(_682),file_base_name(_682,
	 * _694),file_name_extension(_698,_700,_694),makename([_684,/,_698,'.java'],_732
	 * ),!,wdmsg(comp_to(_682,_684,_732)),make_directory_path(_684),!,nb_setval(stem
	 * ,_698),_758=[],see(_682),readprogram(_698,_758,_772),!,seen,tell(_732),
	 * gencode_sss(_684,_698,_772),!,told),cut(1,_894)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_comp_to_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_comp_to_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_comp_to_2::exec_pred_comp_to_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s135, var1.Deref());
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s142,
				F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s90, var1.Deref(), var3, F(
						sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s136, sxx_compiler_gen_static.s261),
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s140, sxx_compiler_gen_static.s202),
								F(sxx_compiler_gen_static.s30,
										F(sxx_compiler_gen_static.s219, sxx_compiler_gen_static.s93), Const.Nil)))),
						F(sxx_compiler_gen_static.s135, var3.Deref())),
				F(sxx_compiler_gen_static.s113, var3.Deref(), var2.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_not_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_comp_to_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s135, var1.Deref()),
				F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s138, var1.Deref(), var3),
						F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s139, var4, var5, var3.Deref()), F(
								sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s176, F(
										sxx_compiler_gen_static.s30, var2.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s40,
												F(sxx_compiler_gen_static.s30, var4.Deref(),
														F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s37,
																Const.Nil)))),
										var6),
								F(sxx_compiler_gen_static.s26, sxx_compiler_gen_static.s13, F(
										sxx_compiler_gen_static.s26,
										F(sxx_compiler_gen_static.s268,
												F(sxx_compiler_gen_static.s113, var1.Deref(), var2.Deref(),
														var6.Deref())),
										F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s174, var2.Deref()), F(
												sxx_compiler_gen_static.s26, sxx_compiler_gen_static.s13,
												F(sxx_compiler_gen_static.s26,
														F(sxx_compiler_gen_static.s185, sxx_compiler_gen_static.s225,
																var4.Deref()),
														F(sxx_compiler_gen_static.s26,
																F(sxx_compiler_gen_static.s52, var7, Const.Nil),
																F(sxx_compiler_gen_static.s26,
																		F(sxx_compiler_gen_static.s214, var1.Deref()),
																		F(sxx_compiler_gen_static.s26,
																				F(sxx_compiler_gen_static.s209, var4
																						.Deref(), var7.Deref(), var8),
																				F(sxx_compiler_gen_static.s26,
																						sxx_compiler_gen_static.s13,
																						F(sxx_compiler_gen_static.s26,
																								sxx_compiler_gen_static.s215,
																								F(sxx_compiler_gen_static.s26,
																										F(sxx_compiler_gen_static.s253,
																												var6.Deref()),
																										F(sxx_compiler_gen_static.s26,
																												F(sxx_compiler_gen_static.s146,
																														var2.Deref(),
																														var4.Deref(),
																														var8.Deref()),
																												F(sxx_compiler_gen_static.s26,
																														sxx_compiler_gen_static.s13,
																														sxx_compiler_gen_static.s260)))))))))))))))));
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_must_det_l_1::exec_static;
	}
}

class pred_call_local_side_efs_1 extends Code {

	/*
	 * 
	 * call_local_side_efs((public _924),_932):-cut(1,_932).
	 * call_local_side_efs((package _954),_962):-nb_setval(package,_954,_962).
	 * call_local_side_efs(if(_986),_994):-cut(1,_994).
	 * call_local_side_efs(determinate(_1016),_1024):-cut(1,_1024).
	 * call_local_side_efs(comp(_1046),_1054):-cut(1,_1054).
	 * call_local_side_efs(comp_to(_1076,_1078),_1086):-cut(1,_1086).
	 * call_local_side_efs(_1106,_1118):-ignore(call(_1106),_1118).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_call_local_side_efs_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_call_local_side_efs_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s203, var1))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_call_local_side_efs_1__2(PrologMachine mach) {
		mach.FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s197, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sxx_compiler_gen_static.s197;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nb_setval_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_call_local_side_efs_1__3(PrologMachine mach) {
		mach.FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s153, var1))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_call_local_side_efs_1__4(PrologMachine mach) {
		mach.FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s131, var1))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_call_local_side_efs_1__5(PrologMachine mach) {
		mach.FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s112, var1))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_call_local_side_efs_1__6(PrologMachine mach) {
		mach.FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s113, var1, var2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_call_local_side_efs_1__7(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s107, var1.Deref());
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_ignore_1::exec_static;
	}
}

class pred_local_side_efs_2 extends Code {

	/*
	 * 
	 * local_side_efs(_1146,(:-if(_1140)),_1160):-repeat(read(_1148,termequal(_1148,
	 * (:-endif),cut(1,_1160)))).
	 * local_side_efs(_1204,(:-_1202),_1212):-call_local_side_efs(_1202,cut(1,_1212)
	 * ). local_side_efs(_1240,_1242,_1264):-
	 * \=(_1242,(_1246:-_1248),cut(1,local_side_efs(_1256,(_1242:-true),_1264))).
	 * local_side_efs(_1302,_1304,_1314):-call(_1314).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_local_side_efs_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_local_side_efs_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_local_side_efs_2::exec_pred_local_side_efs_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s46, F(sxx_compiler_gen_static.s153, var2)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s208, var3,
				F(sxx_compiler_gen_static.s254, var3.Deref(),
						F(sxx_compiler_gen_static.s46, sxx_compiler_gen_static.s133),
						F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return (Function<PrologMachine, Function>) pred_repeat_0::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_local_side_efs_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_local_side_efs_2::exec_pred_local_side_efs_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s46, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_call_local_side_efs_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_local_side_efs_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_local_side_efs_2::exec_pred_local_side_efs_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s46, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s166, var5,
				F(sxx_compiler_gen_static.s46, var2.Deref(), sxx_compiler_gen_static.s261), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_notequals_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_local_side_efs_2__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_readprogram_3 extends Code {

	/*
	 * 
	 * readprogram(_1330,_1332,_1334,_1396):-read(_1336,local_side_efs(_1330,_1336,
	 * or((_1336=end_of_file->_1332=_1334),(binarize(_1336,_1360),addclausetoprogram
	 * (_1360,_1332,_1368),readprogram(_1330,_1368,_1334)),_1396))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_readprogram_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_readprogram_3__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = F(sxx_compiler_gen_static.s166, var1.Deref(), var4.Deref(),
				F(sxx_compiler_gen_static.s196, F(sxx_compiler_gen_static.s29,
						F(sxx_compiler_gen_static.s52, var4.Deref(), sxx_compiler_gen_static.s132),
						F(sxx_compiler_gen_static.s52, var2.Deref(), var3.Deref())),
						F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s105, var4.Deref(), var5),
								F(sxx_compiler_gen_static.s26,
										F(sxx_compiler_gen_static.s91, var5.Deref(), var2.Deref(), var6),
										F(sxx_compiler_gen_static.s209, var1.Deref(), var6.Deref(), var3.Deref()))),
						continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_read_1::exec_static;
	}
}

class pred_binarize_2 extends Code {

	/*
	 * 
	 * binarize((:-_1438),_1440,_1462):-nb_current(stem,_1442,atom_concat(on_load_,
	 * _1442,_1444,cut(1,binarize((_1444:-write(_1438)),_1440,_1462)))).
	 * binarize((:-_1512),_1514,_1532):-nb_current(stem,_1516,atom_concat(on_load_,
	 * _1516,_1518,cut(1,binarize((_1518:-_1512),_1514,_1532)))).
	 * binarize((_1582:-_1584),(_1588:-_1590),_1600):-cut(1,addcont(_1582,_1592,
	 * _1588,makebinbody(_1584,_1592,_1590,_1600))).
	 * binarize(_1652,(_1648:-call(_1644)),_1660):-addcont(_1652,_1644,_1648,_1660).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_binarize_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_binarize_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_binarize_2::exec_pred_binarize_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sxx_compiler_gen_static.s225;
		local_aregs[1] = var3;
		local_aregs[2] = F(sxx_compiler_gen_static.s100, sxx_compiler_gen_static.s194, var3.Deref(), var4,
				F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s105,
						F(sxx_compiler_gen_static.s46, var4.Deref(), F(sxx_compiler_gen_static.s272, var1.Deref())),
						var2.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nb_current_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_binarize_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_binarize_2::exec_pred_binarize_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sxx_compiler_gen_static.s225;
		local_aregs[1] = var3;
		local_aregs[2] = F(sxx_compiler_gen_static.s100, sxx_compiler_gen_static.s194, var3.Deref(), var4,
				F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s105,
						F(sxx_compiler_gen_static.s46, var4.Deref(), var1.Deref()), var2.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_nb_current_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_binarize_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_binarize_2::exec_pred_binarize_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s46, var3, var4))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s92, var1.Deref(), var5, var3.Deref(),
				F(sxx_compiler_gen_static.s175, var2.Deref(), var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_binarize_2__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s46, var2, F(sxx_compiler_gen_static.s107, var3)))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var2.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_addcont_3::exec_static;
	}
}

class pred_makebinbody_3 extends Code {

	/*
	 * 
	 * makebinbody(_1686,_1688,_1690,_1702):-var(_1686,cut(1,makebinbody(call(_1686)
	 * ,_1688,_1690,_1702))).
	 * makebinbody((_1744,_1746),_1748,_1750,_1760):-cut(1,makebinbody(_1746,_1748,
	 * _1752,addcont(_1744,_1752,_1750,_1760))).
	 * makebinbody(_1804,_1806,_1808,_1818):-specialgoal(_1804,_1810,cut(1,addcont(
	 * _1810,_1806,_1808,_1818))).
	 * makebinbody(!,_1860,_1862,_1876):-cut(1,unify(cut(1,_1860),_1862,_1876)).
	 * makebinbody(_1908,_1910,_1912,_1920):-cut(1,addcont(_1908,_1910,_1912,_1920))
	 * .
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_makebinbody_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_makebinbody_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s175,
				F(sxx_compiler_gen_static.s107, var1.Deref()), var2.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_makebinbody_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s26, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s175, var2.Deref(), var3.Deref(), var5,
				F(sxx_compiler_gen_static.s92, var1.Deref(), var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_makebinbody_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s92, var4.Deref(), var2.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_specialgoal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_makebinbody_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(sxx_compiler_gen_static.s13)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s262,
				F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), var1.Deref()), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_makebinbody_3__5(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s92, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}
}

class pred_addclausetoprogram_3 extends Code {

	/*
	 * 
	 * addclausetoprogram(_1954,[],_1956,_1976):-cut(1,unify([[_1954]],_1956,_1976))
	 * .
	 * addclausetoprogram(_2014,[_2010|_2012],_2016,_2036):-samepred(_2014,_2010,cut
	 * (1,unify([[_2014|_2010]|_2012],_2016,_2036))).
	 * addclausetoprogram(_2088,[_2078|_2080],[_2078|_2086],_2096):-
	 * addclausetoprogram(_2088,_2080,_2086,_2096).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_addclausetoprogram_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_addclausetoprogram_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_addclausetoprogram_3::exec_pred_addclausetoprogram_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s262,
				F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s30, var1.Deref(), Const.Nil), Const.Nil),
				var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_addclausetoprogram_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_addclausetoprogram_3::exec_pred_addclausetoprogram_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s30, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s262, F(sxx_compiler_gen_static.s30,
						F(sxx_compiler_gen_static.s30, var1.Deref(), var2.Deref()), var3.Deref()), var4.Deref(),
						continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_samepred_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_addclausetoprogram_3__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s30, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(F(sxx_compiler_gen_static.s30, var2.Deref(), var4))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var4.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_addclausetoprogram_3::exec_static;
	}
}

class pred_samepred_2 extends Code {

	/*
	 * 
	 * samepred((_2126:-_2128),[(_2132:-_2134)|_2140],_2152):-legacy_functor(_2126,
	 * _2142,_2144,legacy_functor(_2132,_2142,_2144,_2152)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_samepred_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_samepred_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s46, var3, var4), var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var6;
		local_aregs[2] = var7;
		local_aregs[3] = F(sxx_compiler_gen_static.s164, var3.Deref(), var6.Deref(), var7.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}
}

class pred_addcont_3 extends Code {

	/*
	 * 
	 * addcont(!,_2188,_2190,_2204):-cut(1,unify(cut(1,_2188),_2190,_2204)).
	 * addcont(_2236,_2238,_2240,_2250):-specialgoal(_2236,_2242,cut(1,addcont(_2242
	 * ,_2238,_2240,_2250))). addcont(_2292,_2294,_2296,_2324):-
	 * =..(_2292,[_2300|_2302],append(_2302,[_2294],_2310,=..(_2296,[_2300|_2310],
	 * _2324))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_addcont_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_addcont_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_addcont_3::exec_pred_addcont_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(sxx_compiler_gen_static.s13)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s262,
				F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), var1.Deref()), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_addcont_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_addcont_3::exec_pred_addcont_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s92, var4.Deref(), var2.Deref(), var3.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_specialgoal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_addcont_3__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var4, var5);
		local_aregs[2] = F(sxx_compiler_gen_static.s95, var5.Deref(),
				F(sxx_compiler_gen_static.s30, var2.Deref(), Const.Nil), var6, F(sxx_compiler_gen_static.s53,
						var3.Deref(), F(sxx_compiler_gen_static.s30, var4.Deref(), var6.Deref()), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_makename_2 extends Code {

	/*
	 * 
	 * makename(_2368,_2370,_2378):-termequal(_2368,[],cut(1,unify('',_2370,_2378)))
	 * . makename(_2416,_2418,_2426):-atomic(_2416,cut(1,unify(_2416,_2418,_2426))).
	 * makename([_2464|_2466],_2468,_2484):-makename(_2466,_2470,name(_2470,_2472,
	 * name(_2464,_2474,append(_2474,_2472,_2476,name(_2468,_2476,_2484))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_makename_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_makename_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_makename_2::exec_pred_makename_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = Const.Nil;
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s262, sxx_compiler_gen_static.s1, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_makename_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_makename_2::exec_pred_makename_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s262, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_makename_2__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4;
		local_aregs[2] = F(sxx_compiler_gen_static.s183, var4.Deref(), var5,
				F(sxx_compiler_gen_static.s183, var1.Deref(), var6,
						F(sxx_compiler_gen_static.s95, var6.Deref(), var5.Deref(), var7,
								F(sxx_compiler_gen_static.s183, var3.Deref(), var7.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_makename_2::exec_static;
	}
}

class pred_writel_1 extends Code {

	/*
	 * 
	 * writel([],_2550):-call(_2550).
	 * writel([_2566|_2568],_2576):-wr(_2566,writel(_2568,_2576)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_writel_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_writel_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_writel_1::exec_pred_writel_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_writel_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s274, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_wr_1::exec_static;
	}
}

class pred_wr_1 extends Code {

	/*
	 * 
	 * wr(getval(_2604),_2628):-must((nb_current(_2604,_2610),write(_2610)),_2628).
	 * wr(wr(nl),_2658):-cut(1,nl(_2658)).
	 * wr(_2682,_2690):-atomic(_2682,cut(1,write(_2682,_2690))).
	 * wr(_2722,_2730):-legacy_functor(_2722,'$VAR',2,cut(1,write(_2722,_2730))).
	 * wr(_2766,_2778):-must(call(_2766),cut(1,_2778)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_wr_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_wr_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_wr_1::exec_pred_wr_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s152, var1))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s184, var1.Deref(), var2),
				F(sxx_compiler_gen_static.s272, var2.Deref()));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_must_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_wr_1__2(PrologMachine mach) {
		mach.FillAlternative(pred_wr_1::exec_pred_wr_1__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s188, continuation);
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_wr_1__3(PrologMachine mach) {
		mach.FillAlternative(pred_wr_1::exec_pred_wr_1__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s272, var1.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_wr_1__4(PrologMachine mach) {
		mach.FillAlternative(pred_wr_1::exec_pred_wr_1__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = sxx_compiler_gen_static.s15;
		local_aregs[2] = sxx_compiler_gen_static.posint2;
		local_aregs[3] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s272, var1.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_wr_1__5(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s107, var1.Deref());
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_must_1::exec_static;
	}
}

class pred_wrargs_2 extends Code {

	/*
	 * 
	 * wrargs(_2804,_2806,_2816):-wrargs(_2804,_2806,_2808,_2816).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_wrargs_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_wrargs_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3;
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_wrargs_3::exec_static;
	}
}

class pred_wrargs_3 extends Code {

	/*
	 * 
	 * wrargs(_2842,_2844,_2846,_2854):-unify(0,_2842,cut(1,_2854)).
	 * wrargs(_2886,_2888,_2890,_2944):-or((var(_2890)->_2890=yes),write(','),writel
	 * ([_2888,a,_2886],is(_2936,_2886-1,wrargs(_2936,_2888,_2890,_2944)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_wrargs_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_wrargs_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_wrargs_3::exec_pred_wrargs_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sxx_compiler_gen_static.posint0;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_unify_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_wrargs_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s29, F(sxx_compiler_gen_static.s266, var3.Deref()),
				F(sxx_compiler_gen_static.s52, var3.Deref(), sxx_compiler_gen_static.s275));
		local_aregs[1] = F(sxx_compiler_gen_static.s272, sxx_compiler_gen_static.s26);
		local_aregs[2] = F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, var2.Deref(),
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s89,
								F(sxx_compiler_gen_static.s30, var1.Deref(), Const.Nil))),
				F(sxx_compiler_gen_static.s162, var4,
						F(sxx_compiler_gen_static.s27, var1.Deref(), sxx_compiler_gen_static.posint1),
						F(sxx_compiler_gen_static.s271, var4.Deref(), var2.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}
}

class pred_gencode_sss_3 extends Code {

	/*
	 * 
	 * gencode_sss(_2994,_2996,_2998,_3136):-must_det_l((mysetof(_3004,_2998^
	 * stringof(_2998,_3004),_3018),mysetof(_3004,_2998^intof(_2998,_3004),_3038),
	 * _3048=[cut|_3018],writel(['import java.util.function.Function; class
	 * ',_2996,' /*extends CodeFile
	 */ {']),declforeachstring(_3048,0),declforeachint(_3038),writel(['}\n\n\n'])),gencode_sss(_3048,_2994,_2996,_2998,cut(1,_3136))).


*/

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_gencode_sss_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_gencode_sss_3__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s26,
				F(sxx_compiler_gen_static.s182, var4,
						F(sxx_compiler_gen_static.s84, var3.Deref(),
								F(sxx_compiler_gen_static.s229, var3.Deref(), var4.Deref())),
						var5),
				F(sxx_compiler_gen_static.s26,
						F(sxx_compiler_gen_static.s182, var4.Deref(),
								F(sxx_compiler_gen_static.s84, var3.Deref(),
										F(sxx_compiler_gen_static.s160, var3.Deref(), var4.Deref())),
								var6),
						F(sxx_compiler_gen_static.s26,
								F(sxx_compiler_gen_static.s52, var7,
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s0, var5.Deref())),
								F(sxx_compiler_gen_static.s26,
										F(sxx_compiler_gen_static.s274,
												F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s157,
														F(sxx_compiler_gen_static.s30, var2.Deref(),
																F(sxx_compiler_gen_static.s30,
																		sxx_compiler_gen_static.s4, Const.Nil)))),
										F(sxx_compiler_gen_static.s26,
												F(sxx_compiler_gen_static.s129, var7.Deref(),
														sxx_compiler_gen_static.posint0),
												F(sxx_compiler_gen_static.s26,
														F(sxx_compiler_gen_static.s128, var6.Deref()),
														F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30,
																sxx_compiler_gen_static.s277, Const.Nil))))))));
		local_aregs[1] = F(sxx_compiler_gen_static.s146, var7.Deref(), var1.Deref(), var2.Deref(), var3.Deref(),
				F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_must_det_l_1::exec_static;
	}
}

class pred_gencode_sss_4 extends Code {

	/*
	 * 
	 * gencode_sss(_3178,_3180,_3182,[],_3192):-call(_3192).
	 * gencode_sss(_3218,_3220,_3222,[_3214|_3216],_3230):-gencodeforpred(_3218,
	 * _3220,_3222,_3214,gencode_sss(_3218,_3220,_3222,_3216,_3230)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
		 */
		Term aregs[] = mach.RegPull(4);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_gencode_sss_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_gencode_sss_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_gencode_sss_4::exec_pred_gencode_sss_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_gencode_sss_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(F(sxx_compiler_gen_static.s30, var4, var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = var4.Deref();
		local_aregs[4] = F(sxx_compiler_gen_static.s146, var1.Deref(), var2.Deref(), var3.Deref(), var5.Deref(),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_gencodeforpred_4::exec_static;
	}
}

class pred_gencodeforpred_4 extends Code {

	/*
	 * 
	 * gencodeforpred(_3274,_3276,_3278,_3280,_3316):-unify([(_3284:-_3286)|_3292],
	 * _3280,legacy_functor(_3284,_3294,_3296,is(_3304,_3296-1,make_classname(_3294,
	 * _3304,_3306,_3308,nb_setval(classname,_3308,gencodeforpred(_3274,_3276,_3278,
	 * _3280,_3284,_3306,_3296,_3304,_3308,_3316)))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
		 */
		Term aregs[] = mach.RegPull(4);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_gencodeforpred_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_gencodeforpred_4__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var12 = V(mach);
		Var var11 = V(mach);
		Var var10 = V(mach);
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s46, var5, var6), var7);
		local_aregs[1] = var4.Deref();
		local_aregs[2] = F(sxx_compiler_gen_static.s164, var5.Deref(), var8, var9,
				F(sxx_compiler_gen_static.s162, var10,
						F(sxx_compiler_gen_static.s27, var9.Deref(), sxx_compiler_gen_static.posint1),
						F(sxx_compiler_gen_static.s173, var8.Deref(), var10.Deref(), var11, var12,
								F(sxx_compiler_gen_static.s185, sxx_compiler_gen_static.s110, var12.Deref(),
										F(sxx_compiler_gen_static.s147, var1.Deref(), var2.Deref(), var3.Deref(),
												var4.Deref(), var5.Deref(), var11.Deref(), var9.Deref(), var10.Deref(),
												var12.Deref(), continuation)))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_unify_2::exec_static;
	}
}

class pred_symbol_to_name_2 extends Code {

	/*
	 * 
	 * symbol_to_name(_3404,_3406,_3446):-
	 * ->(symbol_to_name1(_3404,_3412),(_3404\==_3412,!,atom_concat(sym_,_3412,_3406
	 * )),_3446). symbol_to_name(_3470,_3470,_3480):-call(_3480).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_symbol_to_name_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name_2::exec_pred_symbol_to_name_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s241, var1.Deref(), var3);
		local_aregs[1] = F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s79, var1.Deref(), var3.Deref()),
				F(sxx_compiler_gen_static.s26, sxx_compiler_gen_static.s13,
						F(sxx_compiler_gen_static.s100, sxx_compiler_gen_static.s239, var3.Deref(), var2.Deref())));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_if_then_arrow_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_symbol_to_name1_2 extends Code {

	/*
	 * 
	 * symbol_to_name1(:-,system_neck,_3504):-call(_3504).
	 * symbol_to_name1(=..,system_univ,_3528):-call(_3528).
	 * symbol_to_name1(=@=,system_variant,_3552):-call(_3552).
	 * symbol_to_name1(\+,system_not,_3576):-call(_3576).
	 * symbol_to_name1(\=,system_notequals,_3600):-call(_3600).
	 * symbol_to_name1(=,system_equals,_3624):-call(_3624).
	 * symbol_to_name1(==,strict_eq,_3648):-call(_3648).
	 * symbol_to_name1(\==,strict_noteq,_3672):-call(_3672).
	 * symbol_to_name1(-->,dcg_arrow,_3696):-call(_3696).
	 * symbol_to_name1(->,if_then_arrow,_3720):-call(_3720).
	 * symbol_to_name1(*->,with_each_arrow,_3744):-call(_3744).
	 * symbol_to_name1(',',system_comma,_3768):-call(_3768).
	 * symbol_to_name1(^,system_carrot,_3792):-call(_3792).
	 * symbol_to_name1('|',system_bar,_3816):-call(_3816).
	 * symbol_to_name1(;,system_semicolon,_3840):-call(_3840).
	 * symbol_to_name1(:,system_colon,_3864):-call(_3864).
	 * symbol_to_name1(_3880,_3882,_3926):-name(_3880,[_3886|_3888],not(code_type(
	 * _3886,alnum),\==(_3886,95,cut(1,atomic_list_concat(['_c',_3886,'_'],_3914,
	 * name(_3916,_3888,symbol_to_name1(_3916,_3918,atom_concat(_3914,_3918,_3882,
	 * _3926)))))))).
	 * symbol_to_name1(_4004,_4006,_4032):-name(_4004,[_4010|_4012],name(_4020,[
	 * _4010],name(_4022,_4012,symbol_to_name1(_4022,_4024,atom_concat(_4020,_4024,
	 * _4006,_4032))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_symbol_to_name1_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s46)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s247)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s53)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s251)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s57)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s252)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s77)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s248)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s78)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s249)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s52)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s246)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__7(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s56)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s226)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__8(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s79)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s227)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__9(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s28)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s124)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__10(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s29)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s155)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__11(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s24)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s269)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__12(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s26)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s245)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__13(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__14);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s84)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s243)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__14(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__15);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s276)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s242)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__15(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__16);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s50)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s250)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__16(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__17);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.s45)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(sxx_compiler_gen_static.s244)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__17(PrologMachine mach) {
		mach.FillAlternative(pred_symbol_to_name1_2::exec_pred_symbol_to_name1_2__18);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s189,
				F(sxx_compiler_gen_static.s111, var3.Deref(), sxx_compiler_gen_static.s94),
				F(sxx_compiler_gen_static.s79, var3.Deref(), sxx_compiler_gen_static.posint95, F(
						sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
						F(sxx_compiler_gen_static.s103, F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s88,
								F(sxx_compiler_gen_static.s30, var3.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s85, Const.Nil))),
								var5,
								F(sxx_compiler_gen_static.s183, var6, var4.Deref(),
										F(sxx_compiler_gen_static.s241, var6.Deref(), var7,
												F(sxx_compiler_gen_static.s100, var5.Deref(), var7.Deref(),
														var2.Deref(), continuation)))))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_name_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_symbol_to_name1_2__18(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s183, var5, F(sxx_compiler_gen_static.s30, var3.Deref(), Const.Nil),
				F(sxx_compiler_gen_static.s183, var6, var4.Deref(), F(sxx_compiler_gen_static.s241, var6.Deref(), var7,
						F(sxx_compiler_gen_static.s100, var5.Deref(), var7.Deref(), var2.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_name_2::exec_static;
	}
}

class pred_make_classname_4 extends Code {

	/*
	 * 
	 * make_classname(_4090,_4092,_4094,_4096,_4138):-
	 * ->(symbol_to_name(_4090,_4102),(_4090\==_4102,!,make_classname(_4102,_4092,
	 * _4094,_4096)),_4138).
	 * make_classname(_4166,_4168,_4166,_4170,_4202):-makename([pred_,_4166,'_',
	 * _4168],_4170,cut(1,_4202)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
		 */
		Term aregs[] = mach.RegPull(4);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_make_classname_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_make_classname_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_make_classname_4::exec_pred_make_classname_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s240, var1.Deref(), var5);
		local_aregs[1] = F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s79, var1.Deref(), var5.Deref()),
				F(sxx_compiler_gen_static.s26, sxx_compiler_gen_static.s13,
						F(sxx_compiler_gen_static.s173, var5.Deref(), var2.Deref(), var3.Deref(), var4.Deref())));
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_if_then_arrow_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_make_classname_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s200,
				F(sxx_compiler_gen_static.s30, var1.Deref(), F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s85,
						F(sxx_compiler_gen_static.s30, var2.Deref(), Const.Nil))));
		local_aregs[1] = var3.Deref();
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_makename_2::exec_static;
	}
}

class pred_gencodeforpred_9 extends Code {

	/*
	 * 
	 * gencodeforpred(_4236,_4238,_4240,_4242,_4244,_4246,_4248,_4250,_4252,_4474):-
	 * must_det_l((writel(['class ',_4252,' extends Code
	 * {\n']),prelude(_4242),writel([wr(nl),'public static
	 * Function<PrologMachine,Function> exec_static(PrologMachine mach){
	 * ',wr(nl),'/* Term aregs[] = {',aregarray(_4250),'} ;
	 */',wr(nl),'Term aregs[] = mach.RegPull(',_4250,');',wr(nl),'mach.CreateChoicePoint(aregs) ;',wr(nl),'return (Function<PrologMachine,Function>)exec_',_4252,'__1(mach);
	}',wr(nl)]),!,genpredcode(_4236,_4242,last,_4252,_4424,_4236),writel(['}\n\n\n'])),_4474).

	*/

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6],mach.Areg[7],mach.Areg[8],mach.Areg[9]} ;
		 */
		Term aregs[] = mach.RegPull(9);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_gencodeforpred_9__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_gencodeforpred_9__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[9];
		Term areg8 = local_aregs[8].Deref();
		Term areg7 = local_aregs[7].Deref();
		Term areg6 = local_aregs[6].Deref();
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var10 = V(mach);
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg6).Unify(var7)))
			return UpperPrologMachine.Fail0;
		if (!((areg7).Unify(var8)))
			return UpperPrologMachine.Fail0;
		if (!((areg8).Unify(var9)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s26,
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s109,
								F(sxx_compiler_gen_static.s30, var9.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s12, Const.Nil)))),
				F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s201, var4.Deref()),
						F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30,
								F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s205, F(
										sxx_compiler_gen_static.s30,
										F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s41, F(
												sxx_compiler_gen_static.s30,
												F(sxx_compiler_gen_static.s96, var8.Deref()),
												F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s278, F(
														sxx_compiler_gen_static.s30,
														F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
														F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s69, F(
																sxx_compiler_gen_static.s30, var8.Deref(),
																F(sxx_compiler_gen_static.s30,
																		sxx_compiler_gen_static.s23,
																		F(sxx_compiler_gen_static.s30,
																				F(sxx_compiler_gen_static.s270,
																						sxx_compiler_gen_static.s188),
																				F(sxx_compiler_gen_static.s30,
																						sxx_compiler_gen_static.s169,
																						F(sxx_compiler_gen_static.s30,
																								F(sxx_compiler_gen_static.s270,
																										sxx_compiler_gen_static.s188),
																								F(sxx_compiler_gen_static.s30,
																										sxx_compiler_gen_static.s212,
																										F(sxx_compiler_gen_static.s30,
																												var9.Deref(),
																												F(sxx_compiler_gen_static.s30,
																														sxx_compiler_gen_static.s87,
																														F(sxx_compiler_gen_static.s30,
																																F(sxx_compiler_gen_static.s270,
																																		sxx_compiler_gen_static.s188),
																																Const.Nil)))))))))))))))))),
								F(sxx_compiler_gen_static.s26, sxx_compiler_gen_static.s13, F(
										sxx_compiler_gen_static.s26,
										F(sxx_compiler_gen_static.s148, var1.Deref(), var4.Deref(),
												sxx_compiler_gen_static.s163, var9.Deref(), var10, var1.Deref()),
										F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30,
												sxx_compiler_gen_static.s277, Const.Nil)))))));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[9] = local_aregs[8] = local_aregs[7] = local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_must_det_l_1::exec_static;
	}
}

class pred_cont_ref_1 extends Code {

	/*
	 * 
	 * cont_ref(_4510,_4560):-must_det(writel([getval(classname),'::exec_',getval(
	 * classname),'__',_4510]),_4560).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_cont_ref_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_cont_ref_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30,
				F(sxx_compiler_gen_static.s152, sxx_compiler_gen_static.s110),
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s47,
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s152, sxx_compiler_gen_static.s110),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s86,
										F(sxx_compiler_gen_static.s30, var1.Deref(), Const.Nil))))));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_must_det_1::exec_static;
	}
}

class pred_mysetof_3 extends Code {

	/*
	 * 
	 * mysetof(_4580,_4582,_4584,_4592):-setof(_4580,_4582,_4584,cut(1,_4592)).
	 * mysetof(_4626,_4628,[],_4638):-call(_4638).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_mysetof_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_mysetof_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_mysetof_3::exec_pred_mysetof_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var2.Deref();
		local_aregs[2] = var3.Deref();
		local_aregs[3] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_setof_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_mysetof_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_genpredcode_6 extends Code {

	/*
	 * 
	 * genpredcode(_4656,[],_4658,_4660,0,_4662,_4672):-call(_4672).
	 * genpredcode(_4702,[_4698|_4700],_4704,_4706,_4708,_4702,_4724):-genpredcode(
	 * _4702,_4700,notlast,_4706,_4710,_4702,is(_4708,_4710+1,genclausecode(_4702,
	 * _4698,_4704,_4706,_4708,_4702,_4724))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6]} ;
		 */
		Term aregs[] = mach.RegPull(6);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_genpredcode_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_genpredcode_6__1(PrologMachine mach) {
		mach.FillAlternative(pred_genpredcode_6::exec_pred_genpredcode_6__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(sxx_compiler_gen_static.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_genpredcode_6__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s30, var2, var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var6)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = sxx_compiler_gen_static.s190;
		local_aregs[3] = var5.Deref();
		local_aregs[4] = var7;
		local_aregs[5] = var1.Deref();
		local_aregs[6] = F(sxx_compiler_gen_static.s162, var6.Deref(),
				F(sxx_compiler_gen_static.s25, var7.Deref(), sxx_compiler_gen_static.posint1),
				F(sxx_compiler_gen_static.s145, var1.Deref(), var2.Deref(), var4.Deref(), var5.Deref(), var6.Deref(),
						var1.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_genpredcode_6::exec_static;
	}
}

class pred_genclausecode_6 extends Code {

	/*
	 * 
	 * genclausecode(_4788,_4790,_4792,_4794,_4796,_4798,_5190):-unify((_4802:-_4804
	 * ),_4790,cut(1,must_det_l((legacy_functor(_4802,_4810,_4812),symbol_to_name(
	 * _4810,_4818),_4828 is _4812-2,_4840 is
	 * _4812-1,arg(_4812,_4802,'$cont'(_4812)),writel(['public static
	 * Function<PrologMachine,Function> exec_',_4794,'__',_4796,'(PrologMachine
	 * mach){ ',(_4792=last->write('mach.RemoveChoice() ;');_4910 is
	 * _4796+1,writel(['mach.FillAlternative(',cont_ref(_4910),') ;'])),wr(nl),'Term
	 * local_aregs[] = mach.Areg ;',wr(nl),'Term continuation =
	 * local_aregs[',_4840,']
	 * ;',wr(nl),decl_deref_args(_4828),mynumbervars(_4790,1,_5028),(_5028>1->
	 * declvars(_5028);true),gets(_4802,_4798),puts(_4804,_4798),'mach.CUTB =
	 * mach.CurrentChoice ;',wr(nl),nullifyaregs(_4790),'return
	 * ',bodycont(_4790,_4818,_4812),' ;}',wr(nl)])),_5190))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4],mach.Areg[5
		 * ],mach.Areg[6]} ;
		 */
		Term aregs[] = mach.RegPull(6);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_genclausecode_6__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_genclausecode_6__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[6];
		Term areg5 = local_aregs[5].Deref();
		Term areg4 = local_aregs[4].Deref();
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var15 = V(mach);
		Var var14 = V(mach);
		Var var13 = V(mach);
		Var var12 = V(mach);
		Var var11 = V(mach);
		Var var10 = V(mach);
		Var var9 = V(mach);
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg4).Unify(var5)))
			return UpperPrologMachine.Fail0;
		if (!((areg5).Unify(var6)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s46, var7, var8);
		local_aregs[1] = var2.Deref();
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s179, F(
				sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s164, var7.Deref(), var9, var10),
				F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s240, var9.Deref(), var11), F(
						sxx_compiler_gen_static.s26,
						F(sxx_compiler_gen_static.s162, var12,
								F(sxx_compiler_gen_static.s27, var10.Deref(), sxx_compiler_gen_static.posint2)),
						F(sxx_compiler_gen_static.s26,
								F(sxx_compiler_gen_static.s162, var13,
										F(sxx_compiler_gen_static.s27, var10.Deref(), sxx_compiler_gen_static.posint1)),
								F(sxx_compiler_gen_static.s26,
										F(sxx_compiler_gen_static.s97, var10.Deref(), var7.Deref(), continuation),
										F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30,
												sxx_compiler_gen_static.s204,
												F(sxx_compiler_gen_static.s30, var4.Deref(), F(
														sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s86,
														F(sxx_compiler_gen_static.s30, var5.Deref(), F(
																sxx_compiler_gen_static.s30,
																sxx_compiler_gen_static.s18,
																F(sxx_compiler_gen_static.s30, F(
																		sxx_compiler_gen_static.s50,
																		F(sxx_compiler_gen_static.s29, F(
																				sxx_compiler_gen_static.s52,
																				var3.Deref(),
																				sxx_compiler_gen_static.s163),
																				F(sxx_compiler_gen_static.s272,
																						sxx_compiler_gen_static.s172)),
																		F(sxx_compiler_gen_static.s26, F(
																				sxx_compiler_gen_static.s162, var14,
																				F(sxx_compiler_gen_static.s25,
																						var5.Deref(),
																						sxx_compiler_gen_static.posint1)),
																				F(sxx_compiler_gen_static.s274, F(
																						sxx_compiler_gen_static.s30,
																						sxx_compiler_gen_static.s171,
																						F(sxx_compiler_gen_static.s30,
																								F(sxx_compiler_gen_static.s120,
																										var14.Deref()),
																								F(sxx_compiler_gen_static.s30,
																										sxx_compiler_gen_static.s20,
																										Const.Nil)))))),
																		F(sxx_compiler_gen_static.s30,
																				F(sxx_compiler_gen_static.s270,
																						sxx_compiler_gen_static.s188),
																				F(sxx_compiler_gen_static.s30,
																						sxx_compiler_gen_static.s71,
																						F(sxx_compiler_gen_static.s30,
																								F(sxx_compiler_gen_static.s270,
																										sxx_compiler_gen_static.s188),
																								F(sxx_compiler_gen_static.s30,
																										sxx_compiler_gen_static.s70,
																										F(sxx_compiler_gen_static.s30,
																												var13.Deref(),
																												F(sxx_compiler_gen_static.s30,
																														sxx_compiler_gen_static.s81,
																														F(sxx_compiler_gen_static.s30,
																																F(sxx_compiler_gen_static.s270,
																																		sxx_compiler_gen_static.s188),
																																F(sxx_compiler_gen_static.s30,
																																		F(sxx_compiler_gen_static.s125,
																																				var12.Deref()),
																																		F(sxx_compiler_gen_static.s30,
																																				F(sxx_compiler_gen_static.s180,
																																						var2.Deref(),
																																						sxx_compiler_gen_static.posint1,
																																						var15),
																																				F(sxx_compiler_gen_static.s30,
																																						F(sxx_compiler_gen_static.s50,
																																								F(sxx_compiler_gen_static.s29,
																																										F(sxx_compiler_gen_static.s58,
																																												var15.Deref(),
																																												sxx_compiler_gen_static.posint1),
																																										F(sxx_compiler_gen_static.s130,
																																												var15.Deref())),
																																								sxx_compiler_gen_static.s261),
																																						F(sxx_compiler_gen_static.s30,
																																								F(sxx_compiler_gen_static.s151,
																																										var7.Deref(),
																																										var6.Deref()),
																																								F(sxx_compiler_gen_static.s30,
																																										F(sxx_compiler_gen_static.s207,
																																												var8.Deref(),
																																												var6.Deref()),
																																										F(sxx_compiler_gen_static.s30,
																																												sxx_compiler_gen_static.s168,
																																												F(sxx_compiler_gen_static.s30,
																																														F(sxx_compiler_gen_static.s270,
																																																sxx_compiler_gen_static.s188),
																																														F(sxx_compiler_gen_static.s30,
																																																F(sxx_compiler_gen_static.s193,
																																																		var2.Deref()),
																																																F(sxx_compiler_gen_static.s30,
																																																		sxx_compiler_gen_static.s211,
																																																		F(sxx_compiler_gen_static.s30,
																																																				F(sxx_compiler_gen_static.s106,
																																																						var2.Deref(),
																																																						var11.Deref(),
																																																						var10.Deref()),
																																																				F(sxx_compiler_gen_static.s30,
																																																						sxx_compiler_gen_static.s6,
																																																						F(sxx_compiler_gen_static.s30,
																																																								F(sxx_compiler_gen_static.s270,
																																																										sxx_compiler_gen_static.s188),
																																																								Const.Nil))))))))))))))))))))))))))))))),
				continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[6] = local_aregs[5] = local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_unify_2::exec_static;
	}
}

class pred_nullifyaregs_1 extends Code {

	/*
	 * 
	 * nullifyaregs((_5236:-_5238),_5262):-legacy_functor(_5236,_5240,_5242,
	 * legacy_functor(_5238,_5244,_5246,is(_5254,_5242-_5246,smallerthan(0,_5254,
	 * nullify(_5254,_5242,_5262))))). nullifyaregs(_5320,_5330):-call(_5330).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_nullifyaregs_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_nullifyaregs_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_nullifyaregs_1::exec_pred_nullifyaregs_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3;
		local_aregs[2] = var4;
		local_aregs[3] = F(sxx_compiler_gen_static.s164, var2.Deref(), var5, var6,
				F(sxx_compiler_gen_static.s162, var7, F(sxx_compiler_gen_static.s27, var4.Deref(), var6.Deref()),
						F(sxx_compiler_gen_static.s218, sxx_compiler_gen_static.posint0, var7.Deref(),
								F(sxx_compiler_gen_static.s192, var7.Deref(), var4.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_nullifyaregs_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_nullify_2 extends Code {

	/*
	 * 
	 * nullify(0,_5344,_5352):-cut(1,write('null ;',nl(fail(_5352)))).
	 * nullify(_5388,_5390,_5432):-is(_5398,_5390-1,writel(['local_aregs[',_5398,']
	 * = '],is(_5424,_5388-1,nullify(_5424,_5398,_5432)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_nullify_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_nullify_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_nullify_2::exec_pred_nullify_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(sxx_compiler_gen_static.posint0)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s272, sxx_compiler_gen_static.s191,
				F(sxx_compiler_gen_static.s188, F(sxx_compiler_gen_static.s137, continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_nullify_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var3;
		local_aregs[1] = F(sxx_compiler_gen_static.s27, var2.Deref(), sxx_compiler_gen_static.posint1);
		local_aregs[2] = F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s165,
						F(sxx_compiler_gen_static.s30, var3.Deref(),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s82, Const.Nil))),
				F(sxx_compiler_gen_static.s162, var4,
						F(sxx_compiler_gen_static.s27, var1.Deref(), sxx_compiler_gen_static.posint1),
						F(sxx_compiler_gen_static.s192, var4.Deref(), var3.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_mynumbervars_3 extends Code {

	/*
	 * 
	 * mynumbervars(_5478,_5480,_5482,_5502):-var(_5478,cut(1,unify('$VAR'(_5480,
	 * _5488),_5478,is(_5482,_5480+1,_5502)))).
	 * mynumbervars('$VAR'(_5550,_5552),_5554,_5556,_5564):-cut(1,unify(_5556,_5554,
	 * _5564)).
	 * mynumbervars(_5596,_5598,_5600,_5608):-atomic(_5596,cut(1,unify(_5600,_5598,
	 * _5608))). mynumbervars(_5646,_5648,_5650,_5664):-
	 * =..(_5646,[_5654|_5656],mynumbervarslist(_5656,_5648,_5650,_5664)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_mynumbervars_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_mynumbervars_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_mynumbervars_3::exec_pred_mynumbervars_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s262, var$VAR(2, 1), var1.Deref(),
						F(sxx_compiler_gen_static.s162, var3.Deref(),
								F(sxx_compiler_gen_static.s25, var2.Deref(), sxx_compiler_gen_static.posint1),
								continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

public static Function<PrologMachine,Function> exec_pred_mynumbervars_3__2(PrologMachine mach){ mach.FillAlternative(pred_mynumbervars_3::exec_pred_mynumbervars_3__3) ;
Term local_aregs[] = mach.Areg ;
Term continuation = local_aregs[3] ;
Term areg2 = local_aregs[2].Deref() ;
Term areg1 = local_aregs[1].Deref() ;
Term areg0 = local_aregs[0].Deref() ;
Var var2 = V(mach) ;
Var var1 = V(mach) ;
if (!( (areg0).Unify(var[]))) return UpperPrologMachine.Fail0 ;
if (!( (areg1).Unify(var1))) return UpperPrologMachine.Fail0 ;
if (!( (areg2).Unify(var2))) return UpperPrologMachine.Fail0 ;
mach.DoCut(mach.CUTB)  ;
local_aregs[0] = F(sxx_compiler_gen_static.s262,var2.Deref(),var1.Deref(),continuation) ;
mach.CUTB = mach.CurrentChoice ;
local_aregs[3] = local_aregs[2] = null ;
return UpperPrologMachine.Cut2 ;}

	public static Function<PrologMachine, Function> exec_pred_mynumbervars_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_mynumbervars_3::exec_pred_mynumbervars_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s262, var3.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_mynumbervars_3__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var4, var5);
		local_aregs[2] = F(sxx_compiler_gen_static.s181, var5.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_mynumbervarslist_3 extends Code {

	/*
	 * 
	 * mynumbervarslist([],_5700,_5700,_5710):-call(_5710).
	 * mynumbervarslist([_5730|_5732],_5734,_5736,_5746):-mynumbervars(_5730,_5734,
	 * _5738,mynumbervarslist(_5732,_5738,_5736,_5746)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_mynumbervarslist_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_mynumbervarslist_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_mynumbervarslist_3::exec_pred_mynumbervarslist_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_mynumbervarslist_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = var5;
		local_aregs[3] = F(sxx_compiler_gen_static.s181, var2.Deref(), var5.Deref(), var4.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_mynumbervars_3::exec_static;
	}
}

class pred_gets_2 extends Code {

	/*
	 * 
	 * gets(_5784,_5786,_5800):- =..(_5784,[_5790|_5792],gets(_5792,0,_5786,_5800)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_gets_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_gets_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s151, var4.Deref(), sxx_compiler_gen_static.posint0, var2.Deref(),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_gets_3 extends Code {

	/*
	 * 
	 * gets([_5836],_5840,_5842,_5850):-cut(1,_5850).
	 * gets([_5876|_5878],_5880,_5882,_5898):-is(_5890,_5880+1,getforarg(_5876,_5880
	 * ,_5882,gets(_5878,_5890,_5882,_5898))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_gets_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_gets_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_gets_3::exec_pred_gets_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, Const.Nil))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_gets_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = F(sxx_compiler_gen_static.s25, var3.Deref(), sxx_compiler_gen_static.posint1);
		local_aregs[2] = F(sxx_compiler_gen_static.s149, var1.Deref(), var3.Deref(), var4.Deref(),
				F(sxx_compiler_gen_static.s151, var2.Deref(), var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_getforarg_3 extends Code {

	/*
	 * 
	 * getforarg(_5944,_5946,_5948,_6002):-writel(['if (!(
	 * (areg',_5946,').Unify(',constructterm(_5944,_5948),'))) return
	 * UpperPrologMachine.Fail0 ;',wr(nl)],_6002).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_getforarg_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_getforarg_3__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s154,
				F(sxx_compiler_gen_static.s30, var2.Deref(), F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s22,
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s115, var1.Deref(), var3.Deref()),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s21,
										F(sxx_compiler_gen_static.s30,
												F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
												Const.Nil))))));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}
}

class pred_puts_2 extends Code {

	/*
	 * 
	 * puts(cut(_6028,_6030),_6032,_6056):-cut(1,writel(['mach.DoCut(mach.CUTB)
	 * ;',wr(nl)],putforarg(_6030,0,_6032,_6056))). puts(_6094,_6096,_6110):-
	 * =..(_6094,[_6100|_6102],puts(_6102,0,_6096,_6110)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_puts_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_puts_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_puts_2::exec_pred_puts_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s170,
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
								Const.Nil)),
				F(sxx_compiler_gen_static.s206, var2.Deref(), sxx_compiler_gen_static.posint0, var3.Deref(),
						continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_puts_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s207, var4.Deref(), sxx_compiler_gen_static.posint0, var2.Deref(),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_puts_3 extends Code {

	/*
	 * 
	 * puts([],_6144,_6146,_6156):-call(_6156).
	 * puts([_6176|_6178],_6180,_6182,_6198):-is(_6190,_6180+1,putforarg(_6176,_6180
	 * ,_6182,puts(_6178,_6190,_6182,_6198))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_puts_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_puts_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_puts_3::exec_pred_puts_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_puts_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var5;
		local_aregs[1] = F(sxx_compiler_gen_static.s25, var3.Deref(), sxx_compiler_gen_static.posint1);
		local_aregs[2] = F(sxx_compiler_gen_static.s206, var1.Deref(), var3.Deref(), var4.Deref(),
				F(sxx_compiler_gen_static.s207, var2.Deref(), var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_putforarg_3 extends Code {

	/*
	 * 
	 * putforarg(_6244,_6246,_6248,_6302):-writel(['local_aregs[',_6246,'] =
	 * ',constructterm(_6244,_6248),' ;',wr(nl)],_6302).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_putforarg_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_putforarg_3__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s165,
				F(sxx_compiler_gen_static.s30, var2.Deref(), F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s82,
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s115, var1.Deref(), var3.Deref()),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s5,
										F(sxx_compiler_gen_static.s30,
												F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
												Const.Nil))))));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}
}

class pred_declvars_1 extends Code {

	/*
	 * 
	 * declvars(1,_6332):-cut(1,_6332).
	 * declvars(_6352,_6396):-is(_6360,_6352-1,writel(['Var var',_6360,' = V(mach)
	 * ;',wr(nl)],declvars(_6360,_6396))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_declvars_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_declvars_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_declvars_1::exec_pred_declvars_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.posint1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_declvars_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2;
		local_aregs[1] = F(sxx_compiler_gen_static.s27, var1.Deref(), sxx_compiler_gen_static.posint1);
		local_aregs[2] = F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s75, F(sxx_compiler_gen_static.s30, var2.Deref(),
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s10,
								F(sxx_compiler_gen_static.s30,
										F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188), Const.Nil)))),
				F(sxx_compiler_gen_static.s130, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_constructterm_2 extends Code {

	/*
	 * 
	 * constructterm('$cont'(_6432),_6434,_6448):-cut(1,writel([continuation],_6448)
	 * ).
	 * constructterm('$VAR'(_6478,_6480),_6482,_6550):-cut(1,or((var(_6480)->writel(
	 * [var,_6478]),_6480=1),writel([var,_6478,'.Deref()']),_6550)).
	 * constructterm(cut(_6582,_6584),_6586,_6638):-cut(1,must_det_l(writel(['F(',
	 * getval(stem),'.s0, new
	 * HeapChoice(mach.CUTB),',constructterm(_6584,_6586),')']),_6638)).
	 * constructterm(_6666,_6668,_6692):-integer(_6666,cut(1,writel([getval(stem),'.
	 * '],posneg(_6666,_6692)))).
	 * constructterm(_6732,_6734,_6742):-string(_6732,cut(1,writeFunctor(_6732,_6734
	 * ,_6742))).
	 * constructterm(_6778,_6780,_6806):-float(_6778,cut(1,writel(['Float(',_6778,')
	 * '],cut(1,_6806)))).
	 * constructterm(_6846,_6848,_6856):-termequal([],_6846,cut(1,writeFunctor(_6846
	 * ,_6848,_6856))).
	 * constructterm(_6894,_6896,_6904):-atom(_6894,cut(1,writeFunctor(_6894,_6896,
	 * _6904))). constructterm(_6940,_6942,_7030):-compound(_6940,cut(1,must_det_l((
	 * legacy_functor(_6940,_6948,_6950),_6940=..[_6954|_6956],writel(['F(',
	 * writeFunctor(_6948,_6942),',',newargs(_6956,1,_6942),')'])),_7030))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_constructterm_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(continuation)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s121, Const.Nil), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var$VAR(3, _39430).Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s196,
				F(sxx_compiler_gen_static.s29, F(sxx_compiler_gen_static.s266, var2),
						F(sxx_compiler_gen_static.s26,
								F(sxx_compiler_gen_static.s274,
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s266,
												F(sxx_compiler_gen_static.s30, var3, Const.Nil))),
								F(sxx_compiler_gen_static.s52, var2.Deref(), sxx_compiler_gen_static.posint1))),
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s266,
								F(sxx_compiler_gen_static.s30, var3.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s36, Const.Nil)))),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s179, F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30,
				sxx_compiler_gen_static.s66,
				F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s152, sxx_compiler_gen_static.s225), F(
						sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s39,
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s115, var2.Deref(), var3.Deref()),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s19, Const.Nil)))))),
				continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s152, sxx_compiler_gen_static.s225),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s30, Const.Nil)),
						F(sxx_compiler_gen_static.s199, var1.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_integer_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s273, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_string_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s67,
								F(sxx_compiler_gen_static.s30, var1.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s19, Const.Nil))),
						F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_float_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__7(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = Const.Nil;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s273, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_termequal_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__8(PrologMachine mach) {
		mach.FillAlternative(pred_constructterm_2::exec_pred_constructterm_2__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s273, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atom_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_constructterm_2__9(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s179, F(
				sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s164, var1.Deref(), var3, var4),
				F(sxx_compiler_gen_static.s26,
						F(sxx_compiler_gen_static.s53, var1.Deref(), F(sxx_compiler_gen_static.s30, var5, var6)),
						F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s66, F(
								sxx_compiler_gen_static.s30,
								F(sxx_compiler_gen_static.s273, var3.Deref(), var2.Deref()),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s26, F(
										sxx_compiler_gen_static.s30,
										F(sxx_compiler_gen_static.s187, var6.Deref(), sxx_compiler_gen_static.posint1,
												var2.Deref()),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s19, Const.Nil)))))))),
				continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_compound_1::exec_static;
	}
}

class pred_writeFunctor_2 extends Code {

	/*
	 * 
	 * writeFunctor([],_7064,_7078):-writel(['Const.Nil'],cut(1,_7078)).
	 * writeFunctor(_7106,_7108,_7140):-getnameindex(_7108,_7106,0,_7110,cut(1,
	 * writel([getval(stem),'.s',_7110],cut(1,_7140)))).
	 * writeFunctor(_7186,_7188,_7242):-must_det_l((atom_string(_7186,_7194),writel(
	 * ['Const.Intern(',format('~q',[_7194]),')'])),cut(1,_7242)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_writeFunctor_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_writeFunctor_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_writeFunctor_2::exec_pred_writeFunctor_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s65, Const.Nil);
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_writeFunctor_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_writeFunctor_2::exec_pred_writeFunctor_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = sxx_compiler_gen_static.posint0;
		local_aregs[3] = var3;
		local_aregs[4] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s152, sxx_compiler_gen_static.s225),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s38,
										F(sxx_compiler_gen_static.s30, var3.Deref(), Const.Nil))),
						F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_getnameindex_4::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_writeFunctor_2__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s101, var1.Deref(), var3),
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s64,
								F(sxx_compiler_gen_static.s30,
										F(sxx_compiler_gen_static.s143, sxx_compiler_gen_static.s280,
												F(sxx_compiler_gen_static.s30, var3.Deref(), Const.Nil)),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s19, Const.Nil)))));
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_must_det_l_1::exec_static;
	}
}

class pred_newargs_3 extends Code {

	/*
	 * 
	 * newargs([],_7270,_7272,_7282):-call(_7282).
	 * newargs([_7302|_7304],_7306,_7308,_7382):-must_det_l(((_7306>1->write(',');
	 * true),_7340 is
	 * _7306+1,constructterm(_7302,_7308),newargs(_7304,_7340,_7308)),_7382).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_newargs_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_newargs_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_newargs_3::exec_pred_newargs_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_newargs_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s50,
				F(sxx_compiler_gen_static.s29,
						F(sxx_compiler_gen_static.s58, var3.Deref(), sxx_compiler_gen_static.posint1),
						F(sxx_compiler_gen_static.s272, sxx_compiler_gen_static.s26)),
				sxx_compiler_gen_static.s261),
				F(sxx_compiler_gen_static.s26,
						F(sxx_compiler_gen_static.s162, var5,
								F(sxx_compiler_gen_static.s25, var3.Deref(), sxx_compiler_gen_static.posint1)),
						F(sxx_compiler_gen_static.s26, F(sxx_compiler_gen_static.s115, var1.Deref(), var4.Deref()),
								F(sxx_compiler_gen_static.s187, var2.Deref(), var5.Deref(), var4.Deref()))));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_must_det_l_1::exec_static;
	}
}

class pred_bodycont_3 extends Code {

	/*
	 * 
	 * bodycont((_7408:-_7410),_7412,_7414,_7428):-fail(legacy_functor(_7410,_7412,
	 * _7414,cut(1,writel([entry_code],_7428)))).
	 * bodycont((_7474:-_7476),_7478,_7480,_7494):-legacy_functor(_7476,call,1,cut(1
	 * ,writel(['UpperPrologMachine.Call1'],_7494))).
	 * bodycont((_7536:-_7538),_7540,_7542,_7556):-legacy_functor(_7538,call,2,cut(1
	 * ,writel(['UpperPrologMachine.Call2'],_7556))).
	 * bodycont((_7598:-_7600),_7602,_7604,_7618):-legacy_functor(_7600,cut,2,cut(1,
	 * writel(['UpperPrologMachine.Cut2'],_7618))).
	 * bodycont((_7660:-_7662),_7664,_7666,_7718):-legacy_functor(_7662,_7668,_7670,
	 * is(_7678,_7670-1,symbol_to_name(_7668,_7680,writel(['(Function<PrologMachine,
	 * Function>)pred_',_7680,'_',_7678,'::exec_static'],_7718)))).
	 * bodycont((_7770:-_7772),_7774,_7776,_7808):-legacy_functor(_7772,_7778,_7780,
	 * symbol_to_name(_7778,_7782,writel([_7782,_7780,cont],_7808))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_bodycont_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_bodycont_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_bodycont_3::exec_pred_bodycont_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s164, var2.Deref(), var3.Deref(), var4.Deref(),
				F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s134, Const.Nil), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return (Function<PrologMachine, Function>) pred_fail_0::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_bodycont_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_bodycont_3::exec_pred_bodycont_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = sxx_compiler_gen_static.s107;
		local_aregs[2] = sxx_compiler_gen_static.posint1;
		local_aregs[3] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s72, Const.Nil), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_bodycont_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_bodycont_3::exec_pred_bodycont_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = sxx_compiler_gen_static.s107;
		local_aregs[2] = sxx_compiler_gen_static.posint2;
		local_aregs[3] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s73, Const.Nil), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_bodycont_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_bodycont_3::exec_pred_bodycont_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = sxx_compiler_gen_static.s0;
		local_aregs[2] = sxx_compiler_gen_static.posint2;
		local_aregs[3] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s74, Const.Nil), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_bodycont_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_bodycont_3::exec_pred_bodycont_3__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var8 = V(mach);
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var5;
		local_aregs[2] = var6;
		local_aregs[3] = F(sxx_compiler_gen_static.s162, var7,
				F(sxx_compiler_gen_static.s27, var6.Deref(), sxx_compiler_gen_static.posint1),
				F(sxx_compiler_gen_static.s240, var5.Deref(), var8, F(
						sxx_compiler_gen_static.s274, F(
								sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s17, F(
										sxx_compiler_gen_static.s30, var8.Deref(), F(sxx_compiler_gen_static.s30,
												sxx_compiler_gen_static.s85, F(sxx_compiler_gen_static.s30,
														var7.Deref(), F(sxx_compiler_gen_static.s30,
																sxx_compiler_gen_static.s49, Const.Nil))))),
						continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_bodycont_3__6(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var5;
		local_aregs[2] = var6;
		local_aregs[3] = F(sxx_compiler_gen_static.s240, var5.Deref(), var7,
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, var7.Deref(),
								F(sxx_compiler_gen_static.s30, var6.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s116, Const.Nil))),
						continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}
}

class pred_decl_deref_args_1 extends Code {

	/*
	 * 
	 * decl_deref_args(-1,_7856):-cut(1,_7856).
	 * decl_deref_args(_7876,_7932):-writel(['Term areg',_7876,' =
	 * local_aregs[',_7876,'].Deref()
	 * ;',wr(nl)],is(_7924,_7876-1,decl_deref_args(_7924,_7932))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_decl_deref_args_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_decl_deref_args_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_decl_deref_args_1::exec_pred_decl_deref_args_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(sxx_compiler_gen_static.negint1)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_decl_deref_args_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s68,
				F(sxx_compiler_gen_static.s30, var1.Deref(),
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s11,
								F(sxx_compiler_gen_static.s30, var1.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s83,
												F(sxx_compiler_gen_static.s30,
														F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
														Const.Nil))))));
		local_aregs[1] = F(sxx_compiler_gen_static.s162, var2,
				F(sxx_compiler_gen_static.s27, var1.Deref(), sxx_compiler_gen_static.posint1),
				F(sxx_compiler_gen_static.s125, var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}
}

class pred_use_entry_code_2 extends Code {

	/*
	 * 
	 * use_entry_code(_7966,_7968,_7976):-fail(_7976).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_use_entry_code_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_use_entry_code_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return (Function<PrologMachine, Function>) pred_fail_0::exec_static;
	}
}

class pred_use_static_call_2 extends Code {

	/*
	 * 
	 * use_static_call(_7996,_7998,_8008):-call(_8008).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_use_static_call_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_use_static_call_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_use_load_pred_2 extends Code {

	/*
	 * 
	 * use_load_pred(_8024,_8026,_8036):-call(_8036).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_use_load_pred_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_use_load_pred_2__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}
}

class pred_initforeachcontinuation_3 extends Code {

	/*
	 * 
	 * initforeachcontinuation([],_8052,_8054,_8064):-call(_8064).
	 * initforeachcontinuation([_8084/_8086|_8092],_8084,_8086,_8100):-cut(1,
	 * initforeachcontinuation(_8092,_8084,_8086,_8100)).
	 * initforeachcontinuation([call/1|_8144],_8146,_8148,_8156):-cut(1,
	 * initforeachcontinuation(_8144,_8146,_8148,_8156)).
	 * initforeachcontinuation([call/2|_8200],_8202,_8204,_8212):-cut(1,
	 * initforeachcontinuation(_8200,_8202,_8204,_8212)).
	 * initforeachcontinuation([cut/2|_8256],_8258,_8260,_8268):-cut(1,
	 * initforeachcontinuation(_8256,_8258,_8260,_8268)).
	 * initforeachcontinuation([_8304/_8306|_8312],_8314,_8316,_8410):-is(_8324,
	 * _8306-1,symbol_to_name(_8304,_8326,writel([_8304,_8306,'cont =
	 * pred_',_8304,'_',_8324,'::exec_pred_',_8326,'__',_8324,;,wr(nl)],
	 * initforeachcontinuation(_8312,_8314,_8316,_8410)))).
	 * initforeachcontinuation([_8462/_8464|_8470],_8472,_8474,_8542):-use_load_pred
	 * (_8462,_8476,cut(1,is(_8476,_8464-1,writel([_8462,_8464,'cont =
	 * mach.LoadPred("',_8462,'",',_8476,')
	 * ;',wr(nl)],initforeachcontinuation(_8470,_8472,_8474,_8542))))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_initforeachcontinuation_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_initforeachcontinuation_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_initforeachcontinuation_3::exec_pred_initforeachcontinuation_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_initforeachcontinuation_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_initforeachcontinuation_3::exec_pred_initforeachcontinuation_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s40, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s158, var3.Deref(), var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_initforeachcontinuation_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_initforeachcontinuation_3::exec_pred_initforeachcontinuation_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30,
				F(sxx_compiler_gen_static.s40, sxx_compiler_gen_static.s107, sxx_compiler_gen_static.posint1), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s158, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_initforeachcontinuation_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_initforeachcontinuation_3::exec_pred_initforeachcontinuation_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30,
				F(sxx_compiler_gen_static.s40, sxx_compiler_gen_static.s107, sxx_compiler_gen_static.posint2), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s158, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_initforeachcontinuation_3__5(PrologMachine mach) {
		mach.FillAlternative(pred_initforeachcontinuation_3::exec_pred_initforeachcontinuation_3__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30,
				F(sxx_compiler_gen_static.s40, sxx_compiler_gen_static.s0, sxx_compiler_gen_static.posint2), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s158, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_initforeachcontinuation_3__6(PrologMachine mach) {
		mach.FillAlternative(pred_initforeachcontinuation_3::exec_pred_initforeachcontinuation_3__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var7 = V(mach);
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s40, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6;
		local_aregs[1] = F(sxx_compiler_gen_static.s27, var2.Deref(), sxx_compiler_gen_static.posint1);
		local_aregs[2] = F(sxx_compiler_gen_static.s240, var1.Deref(), var7, F(sxx_compiler_gen_static.s274,
				F(sxx_compiler_gen_static.s30, var1.Deref(), F(sxx_compiler_gen_static.s30, var2.Deref(), F(
						sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s119,
						F(sxx_compiler_gen_static.s30, var1.Deref(), F(sxx_compiler_gen_static.s30,
								sxx_compiler_gen_static.s85,
								F(sxx_compiler_gen_static.s30, var6.Deref(), F(sxx_compiler_gen_static.s30,
										sxx_compiler_gen_static.s48,
										F(sxx_compiler_gen_static.s30, var7.Deref(), F(sxx_compiler_gen_static.s30,
												sxx_compiler_gen_static.s86,
												F(sxx_compiler_gen_static.s30, var6.Deref(),
														F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s50,
																F(sxx_compiler_gen_static.s30,
																		F(sxx_compiler_gen_static.s270,
																				sxx_compiler_gen_static.s188),
																		Const.Nil)))))))))))),
				F(sxx_compiler_gen_static.s158, var3.Deref(), var4.Deref(), var5.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_initforeachcontinuation_3__7(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s40, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var6;
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), F(sxx_compiler_gen_static.s162,
				var6.Deref(), F(sxx_compiler_gen_static.s27, var2.Deref(), sxx_compiler_gen_static.posint1),
				F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30, var1.Deref(), F(
						sxx_compiler_gen_static.s30, var2.Deref(),
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s118, F(sxx_compiler_gen_static.s30,
								var1.Deref(),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s14, F(
										sxx_compiler_gen_static.s30, var6.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s20,
												F(sxx_compiler_gen_static.s30,
														F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
														Const.Nil)))))))),
						F(sxx_compiler_gen_static.s158, var3.Deref(), var4.Deref(), var5.Deref(), continuation))));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_use_load_pred_2::exec_static;
	}
}

class pred_aregarray_1 extends Code {

	/*
	 * 
	 * aregarray(_8598,_8606):-aregarray(0,_8598,_8606).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_aregarray_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_aregarray_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sxx_compiler_gen_static.posint0;
		local_aregs[1] = var1.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_aregarray_2::exec_static;
	}
}

class pred_aregarray_2 extends Code {

	/*
	 * 
	 * aregarray(_8628,_8630,_8638):-smallerthan(_8630,_8628,cut(1,_8638)).
	 * aregarray(_8668,_8670,_8720):-or((_8668>0->write(',')),true,is(_8694,_8668+1,
	 * writel(['mach.Areg[',_8668,']'],aregarray(_8694,_8670,_8720)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_aregarray_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_aregarray_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_aregarray_2::exec_pred_aregarray_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var1.Deref();
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_aregarray_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s29,
				F(sxx_compiler_gen_static.s58, var1.Deref(), sxx_compiler_gen_static.posint0),
				F(sxx_compiler_gen_static.s272, sxx_compiler_gen_static.s26));
		local_aregs[1] = sxx_compiler_gen_static.s261;
		local_aregs[2] = F(sxx_compiler_gen_static.s162, var3,
				F(sxx_compiler_gen_static.s25, var1.Deref(), sxx_compiler_gen_static.posint1),
				F(sxx_compiler_gen_static.s274,
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s167,
								F(sxx_compiler_gen_static.s30, var1.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s80, Const.Nil))),
						F(sxx_compiler_gen_static.s96, var3.Deref(), var2.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_or_2::exec_static;
	}
}

class pred_declforeachclause_3 extends Code {

	/*
	 * 
	 * declforeachclause([],_8766,_8768,_8778):-call(_8778).
	 * declforeachclause([_8798|_8800],_8802,_8804,_8884):-writel(['static
	 * Function<PrologMachine, Function> cl',_8802,' =
	 * ',_8804,'::exec_',_8804,'__',_8802,;,wr(nl)],is(_8876,_8802+1,
	 * declforeachclause(_8800,_8876,_8804,_8884))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_declforeachclause_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachclause_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_declforeachclause_3::exec_pred_declforeachclause_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachclause_3__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s223, F(sxx_compiler_gen_static.s30,
				var3.Deref(),
				F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s7, F(sxx_compiler_gen_static.s30, var4.Deref(),
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s47, F(sxx_compiler_gen_static.s30,
								var4.Deref(),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s86, F(
										sxx_compiler_gen_static.s30, var3.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s50,
												F(sxx_compiler_gen_static.s30,
														F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
														Const.Nil))))))))));
		local_aregs[1] = F(sxx_compiler_gen_static.s162, var5,
				F(sxx_compiler_gen_static.s25, var3.Deref(), sxx_compiler_gen_static.posint1),
				F(sxx_compiler_gen_static.s126, var2.Deref(), var5.Deref(), var4.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}
}

class pred_declforeachcontinuation_3 extends Code {

	/*
	 * 
	 * declforeachcontinuation([],_8926,_8928,_8938):-call(_8938).
	 * declforeachcontinuation([_8958/_8960|_8966],_8958,_8960,_8974):-cut(1,
	 * declforeachcontinuation(_8966,_8958,_8960,_8974)).
	 * declforeachcontinuation([call/1|_9018],_9020,_9022,_9030):-cut(1,
	 * declforeachcontinuation(_9018,_9020,_9022,_9030)).
	 * declforeachcontinuation([call/2|_9074],_9076,_9078,_9086):-cut(1,
	 * declforeachcontinuation(_9074,_9076,_9078,_9086)).
	 * declforeachcontinuation([_9122/_9124|_9130],_9132,_9134,_9176):-writel(['
	 * static Function<PrologMachine, Function> ',_9122,_9124,'cont
	 * ;',wr(nl)],declforeachcontinuation(_9130,_9132,_9134,_9176)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
		Term aregs[] = mach.RegPull(3);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_declforeachcontinuation_3__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachcontinuation_3__1(PrologMachine mach) {
		mach.FillAlternative(pred_declforeachcontinuation_3::exec_pred_declforeachcontinuation_3__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachcontinuation_3__2(PrologMachine mach) {
		mach.FillAlternative(pred_declforeachcontinuation_3::exec_pred_declforeachcontinuation_3__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s40, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var2.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s127, var3.Deref(), var1.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachcontinuation_3__3(PrologMachine mach) {
		mach.FillAlternative(pred_declforeachcontinuation_3::exec_pred_declforeachcontinuation_3__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30,
				F(sxx_compiler_gen_static.s40, sxx_compiler_gen_static.s107, sxx_compiler_gen_static.posint1), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s127, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachcontinuation_3__4(PrologMachine mach) {
		mach.FillAlternative(pred_declforeachcontinuation_3::exec_pred_declforeachcontinuation_3__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30,
				F(sxx_compiler_gen_static.s40, sxx_compiler_gen_static.s107, sxx_compiler_gen_static.posint2), var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s127, var1.Deref(), var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachcontinuation_3__5(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[3];
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s40, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s222,
				F(sxx_compiler_gen_static.s30, var1.Deref(),
						F(sxx_compiler_gen_static.s30, var2.Deref(),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s117,
										F(sxx_compiler_gen_static.s30,
												F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
												Const.Nil)))));
		local_aregs[1] = F(sxx_compiler_gen_static.s127, var3.Deref(), var4.Deref(), var5.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[3] = local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}
}

class pred_declforeachstring_2 extends Code {

	/*
	 * 
	 * declforeachstring([],_9210,_9220):-call(_9220).
	 * declforeachstring([_9238|_9240],_9242,_9312):-is(_9250,_9242+1,atom_string(
	 * _9238,_9252,writel(['static Const s',_9242,' =
	 * Const.Intern(',format('~q',[_9252]),')
	 * ;',wr(nl)],declforeachstring(_9240,_9250,_9312)))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_declforeachstring_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachstring_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_declforeachstring_2::exec_pred_declforeachstring_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachstring_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var4;
		local_aregs[1] = F(sxx_compiler_gen_static.s25, var3.Deref(), sxx_compiler_gen_static.posint1);
		local_aregs[2] = F(sxx_compiler_gen_static.s101, var1.Deref(), var5,
				F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s221,
						F(sxx_compiler_gen_static.s30, var3.Deref(),
								F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s8,
										F(sxx_compiler_gen_static.s30,
												F(sxx_compiler_gen_static.s143, sxx_compiler_gen_static.s280,
														F(sxx_compiler_gen_static.s30, var5.Deref(), Const.Nil)),
												F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s20,
														F(sxx_compiler_gen_static.s30,
																F(sxx_compiler_gen_static.s270,
																		sxx_compiler_gen_static.s188),
																Const.Nil)))))),
						F(sxx_compiler_gen_static.s129, var2.Deref(), var4.Deref(), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_declforeachint_1 extends Code {

	/*
	 * 
	 * declforeachint([],_9366):-call(_9366).
	 * declforeachint([_9382|_9384],_9436):-writel(['static Int ',posneg(_9382),' =
	 * Term.Number(',_9382,') ;',wr(nl)],declforeachint(_9384,_9436)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_declforeachint_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachint_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_declforeachint_1::exec_pred_declforeachint_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		if (!((areg0).Unify(Const.Nil)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[1] = null;
		return UpperPrologMachine.Call1;
	}

	public static Function<PrologMachine, Function> exec_pred_declforeachint_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s224,
				F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s199, var1.Deref()),
						F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s9,
								F(sxx_compiler_gen_static.s30, var1.Deref(),
										F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s20,
												F(sxx_compiler_gen_static.s30,
														F(sxx_compiler_gen_static.s270, sxx_compiler_gen_static.s188),
														Const.Nil))))));
		local_aregs[1] = F(sxx_compiler_gen_static.s128, var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}
}

class pred_posneg_1 extends Code {

	/*
	 * 
	 * posneg(_9462,_9490):-smallerthan(_9462,0,cut(1,is(_9470,0-_9462,writel([
	 * negint,_9470],_9490)))). posneg(_9532,_9552):-writel([posint,_9532],_9552).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_posneg_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_posneg_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_posneg_1::exec_pred_posneg_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = sxx_compiler_gen_static.posint0;
		local_aregs[2] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s162, var2,
						F(sxx_compiler_gen_static.s27, sxx_compiler_gen_static.posint0, var1.Deref()),
						F(sxx_compiler_gen_static.s274, F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s186,
								F(sxx_compiler_gen_static.s30, var2.Deref(), Const.Nil)), continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_smallerthan_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_posneg_1__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, sxx_compiler_gen_static.s198,
				F(sxx_compiler_gen_static.s30, var1.Deref(), Const.Nil));
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_writel_1::exec_static;
	}
}

class pred_getnameindex_4 extends Code {

	/*
	 * 
	 * getnameindex([_9574|_9576],_9574,_9578,_9578,_9586):-cut(1,_9586).
	 * getnameindex([_9614|_9616],_9618,_9620,_9622,_9638):-is(_9630,_9620+1,
	 * getnameindex(_9616,_9618,_9630,_9622,cut(1,_9638))).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/*
		 * Term aregs[] =
		 * {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3],mach.Areg[4]} ;
		 */
		Term aregs[] = mach.RegPull(4);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_getnameindex_4__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_getnameindex_4__1(PrologMachine mach) {
		mach.FillAlternative(pred_getnameindex_4::exec_pred_getnameindex_4__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var1.Deref())))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var3.Deref())))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_getnameindex_4__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[4];
		Term areg3 = local_aregs[3].Deref();
		Term areg2 = local_aregs[2].Deref();
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var6 = V(mach);
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		if (!((areg2).Unify(var4)))
			return UpperPrologMachine.Fail0;
		if (!((areg3).Unify(var5)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var6;
		local_aregs[1] = F(sxx_compiler_gen_static.s25, var4.Deref(), sxx_compiler_gen_static.posint1);
		local_aregs[2] = F(sxx_compiler_gen_static.s150, var2.Deref(), var3.Deref(), var6.Deref(), var5.Deref(),
				F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[4] = local_aregs[3] = null;
		return (Function<PrologMachine, Function>) pred_is_2::exec_static;
	}
}

class pred_continuationof_2 extends Code {

	/*
	 * 
	 * continuationof([(_9686:-_9688)|_9694],_9698/_9700,_9708):-legacy_functor(
	 * _9688,_9698,_9700,_9708).
	 * continuationof([_9736|_9738],_9740,_9748):-continuationof(_9738,_9740,_9748).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_continuationof_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_continuationof_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_continuationof_2::exec_pred_continuationof_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var5 = V(mach);
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, F(sxx_compiler_gen_static.s46, var1, var2), var3))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s40, var4, var5))))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var4.Deref();
		local_aregs[2] = var5.Deref();
		local_aregs[3] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_continuationof_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_continuationof_2::exec_static;
	}
}

class pred_stringof_2 extends Code {

	/*
	 * 
	 * stringof([_9774|_9776],_9778,_9786):-strings1(_9774,_9778,_9786).
	 * stringof([_9812|_9814],_9816,_9824):-stringof(_9814,_9816,_9824).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_stringof_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_stringof_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_stringof_2::exec_pred_stringof_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_strings1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_stringof_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_stringof_2::exec_static;
	}
}

class pred_strings1_2 extends Code {

	/*
	 * 
	 * strings1(_9848,_9850,_9858):-var(_9848,cut(1,fail(_9858))).
	 * strings1((_9892,_9894),_9896,_9904):-strings1(_9892,_9896,_9904).
	 * strings1((_9930,_9932),_9934,_9942):-cut(1,strings1(_9932,_9934,_9942)).
	 * strings1((_9974:-_9976),_9978,_9986):-strings1(_9974,_9978,_9986).
	 * strings1((_10012:-_10014),_10016,_10024):-cut(1,strings1(_10014,_10016,_10024
	 * )).
	 * strings1(_10054,_10056,_10068):-legacy_functor(_10054,_10058,_10060,unify(
	 * _10058,_10056,_10068)). strings1(_10102,_10104,_10118):-
	 * =..(_10102,[_10108|_10110],stringsl(_10110,_10104,_10118)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_strings1_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_strings1_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_strings1_2::exec_pred_strings1_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s137, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings1_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_strings1_2::exec_pred_strings1_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s26, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_strings1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings1_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_strings1_2::exec_pred_strings1_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s26, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s231, var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_strings1_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_strings1_2::exec_pred_strings1_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_strings1_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings1_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_strings1_2::exec_pred_strings1_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s46, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s231, var2.Deref(), var3.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_strings1_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_strings1_2::exec_pred_strings1_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3;
		local_aregs[2] = var4;
		local_aregs[3] = F(sxx_compiler_gen_static.s262, var3.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings1_2__7(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s232, var4.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_strings_2 extends Code {

	/*
	 * 
	 * strings(_10150,_10152,_10160):-var(_10150,cut(1,fail(_10160))).
	 * strings(_10192,_10194,_10202):-atom(_10192,cut(1,unify(_10192,_10194,_10202))
	 * ). strings(_10238,_10240,_10248):-atomic(_10238,cut(1,fail(_10248))).
	 * strings(_10280,_10282,_10294):-legacy_functor(_10280,_10284,_10286,unify(
	 * _10284,_10282,_10294)). strings(_10328,_10330,_10344):-
	 * =..(_10328,[_10334|_10336],stringsl(_10336,_10330,_10344)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_strings_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_strings_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_strings_2::exec_pred_strings_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s137, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_strings_2::exec_pred_strings_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s262, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atom_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_strings_2::exec_pred_strings_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s137, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_strings_2::exec_pred_strings_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3;
		local_aregs[2] = var4;
		local_aregs[3] = F(sxx_compiler_gen_static.s262, var3.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_legacy_functor_3::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_strings_2__5(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s232, var4.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_stringsl_2 extends Code {

	/*
	 * 
	 * stringsl([_10378|_10380],_10382,_10390):-strings(_10378,_10382,_10390).
	 * stringsl([_10416|_10418],_10420,_10428):-stringsl(_10418,_10420,_10428).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_stringsl_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_stringsl_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_stringsl_2::exec_pred_stringsl_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_strings_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_stringsl_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_stringsl_2::exec_static;
	}
}

class pred_intof_2 extends Code {

	/*
	 * 
	 * intof([_10454|_10456],_10458,_10466):-ints(_10454,_10458,_10466).
	 * intof([_10492|_10494],_10496,_10504):-intof(_10494,_10496,_10504).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_intof_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_intof_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_intof_2::exec_pred_intof_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_ints_2::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_intof_2__2(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var3)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var2.Deref();
		local_aregs[1] = var3.Deref();
		local_aregs[2] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_intof_2::exec_static;
	}
}

class pred_ints_2 extends Code {

	/*
	 * 
	 * ints(_10528,_10530,_10538):-var(_10528,cut(1,fail(_10538))).
	 * ints(_10570,_10572,_10580):-integer(_10570,cut(1,unify(_10570,_10572,_10580))
	 * ). ints(_10616,_10618,_10626):-atomic(_10616,cut(1,fail(_10626))).
	 * ints(_10658,_10660,_10674):-
	 * =..(_10658,[_10664|_10666],intof(_10666,_10660,_10674)).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_ints_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_ints_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_ints_2::exec_pred_ints_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s137, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_var_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_ints_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_ints_2::exec_pred_ints_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s262, var1.Deref(), var2.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_integer_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_ints_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_ints_2::exec_pred_ints_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s0, new HeapChoice(mach.CUTB),
				F(sxx_compiler_gen_static.s137, continuation));
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return (Function<PrologMachine, Function>) pred_atomic_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_ints_2__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var4 = V(mach);
		Var var3 = V(mach);
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(var2)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = var1.Deref();
		local_aregs[1] = F(sxx_compiler_gen_static.s30, var3, var4);
		local_aregs[2] = F(sxx_compiler_gen_static.s160, var4.Deref(), var2.Deref(), continuation);
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_sym_system_univ_2::exec_static;
	}
}

class pred_specialgoal_2 extends Code {

	/*
	 * 
	 * specialgoal(_10708<_10710,smallerthan(_10708,_10710),_10724):-cut(1,_10724).
	 * specialgoal(_10748=<_10750,smallerorequal(_10748,_10750),_10764):-cut(1,
	 * _10764).
	 * specialgoal(_10788>_10790,smallerthan(_10790,_10788),_10804):-cut(1,_10804).
	 * specialgoal(_10828>=_10830,smallerorequal(_10830,_10828),_10844):-cut(1,
	 * _10844).
	 * specialgoal(_10868=:=_10870,arithequal(_10870,_10868),_10884):-cut(1,_10884).
	 * specialgoal(_10908=_10910,unify(_10910,_10908),_10924):-cut(1,_10924).
	 * specialgoal((_10948;_10950),or(_10948,_10950),_10964):-cut(1,_10964).
	 * specialgoal(_10988@<_10990,termsmallerthan(_10988,_10990),_11004):-cut(1,
	 * _11004).
	 * specialgoal(_11028@>_11030,termgreaterthan(_11028,_11030),_11044):-cut(1,
	 * _11044).
	 * specialgoal(_11068@=<_11070,termsmallerequal(_11068,_11070),_11084):-cut(1,
	 * _11084).
	 * specialgoal(_11108@>=_11110,termgreaterequal(_11108,_11110),_11124):-cut(1,
	 * _11124).
	 * specialgoal(_11148==_11150,termequal(_11148,_11150),_11164):-cut(1,_11164).
	 * specialgoal(\+_11188,not(_11188),_11200):-cut(1,_11200).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
		Term aregs[] = mach.RegPull(2);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_specialgoal_2__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__1(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s51, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s218, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__2(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s55, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s217, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__3(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s58, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s218, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__4(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s59, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s217, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__5(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s54, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s98, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__6(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s52, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s262, var2.Deref(), var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__7(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s50, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s196, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__8(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__9);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s60, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s258, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__9(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__10);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s62, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s256, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__10(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__11);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s61, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s257, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__11(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__12);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s63, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s255, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__12(PrologMachine mach) {
		mach.FillAlternative(pred_specialgoal_2::exec_pred_specialgoal_2__13);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s56, var1, var2))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s254, var1.Deref(), var2.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_specialgoal_2__13(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[2];
		Term areg1 = local_aregs[1].Deref();
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s77, var1))))
			return UpperPrologMachine.Fail0;
		if (!((areg1).Unify(F(sxx_compiler_gen_static.s189, var1.Deref()))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		local_aregs[2] = null;
		return UpperPrologMachine.Cut2;
	}
}

class pred_w_cl_1 extends Code {

	/*
	 * 
	 * w_cl([_11224],_11240):-cut(1,format('~N~p.~n',[_11224],_11240)).
	 * w_cl([_11270|_11272],_11280):-cut(1,w_cl(_11272,w_cl(_11270,_11280))).
	 * w_cl(_11312,_11326):-w_cl([_11312],_11326).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_w_cl_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_w_cl_1__1(PrologMachine mach) {
		mach.FillAlternative(pred_w_cl_1::exec_pred_w_cl_1__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, Const.Nil))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s143, sxx_compiler_gen_static.s279,
				F(sxx_compiler_gen_static.s30, var1.Deref(), Const.Nil), continuation);
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_w_cl_1__2(PrologMachine mach) {
		mach.FillAlternative(pred_w_cl_1::exec_pred_w_cl_1__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var2 = V(mach);
		Var var1 = V(mach);
		if (!((areg0).Unify(F(sxx_compiler_gen_static.s30, var1, var2))))
			return UpperPrologMachine.Fail0;
		mach.DoCut(mach.CUTB);
		local_aregs[0] = F(sxx_compiler_gen_static.s267, var2.Deref(),
				F(sxx_compiler_gen_static.s267, var1.Deref(), continuation));
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Cut2;
	}

	public static Function<PrologMachine, Function> exec_pred_w_cl_1__3(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = F(sxx_compiler_gen_static.s30, var1.Deref(), Const.Nil);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_w_cl_1::exec_static;
	}
}

class pred_prelude_1 extends Code {

	/*
	 * 
	 * prelude(_11346,_11354):-write('\n/*\n\n',w_cl(_11346,write('\n\n
	 */\n',_11354))).

	*/

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
		Term aregs[] = mach.RegPull(1);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_prelude_1__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_prelude_1__1(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[1];
		Term areg0 = local_aregs[0].Deref();
		Var var1 = V(mach);
		if (!((areg0).Unify(var1)))
			return UpperPrologMachine.Fail0;
		local_aregs[0] = sxx_compiler_gen_static.s3;
		local_aregs[1] = F(sxx_compiler_gen_static.s267, var1.Deref(),
				F(sxx_compiler_gen_static.s272, sxx_compiler_gen_static.s2, continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}
}

class pred_prelude_0 extends Code {

	/*
	 * 
	 * prelude(_11392):-write('// Generated code file - by
	 * dmiles',nl(fail(_11392))). prelude(_11424):-write('// Copyright August 16,
	 * 1996,2018 LOGICMOO, KUL and CUM',nl(fail(_11424))).
	 * prelude(_11456):-write('// Authors: Douglas R. Miles, Bart Demoen and Paul
	 * Tarau',nl(nl(fail(_11456)))). prelude(_11494):-call(_11494).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_prelude_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_prelude_0__1(PrologMachine mach) {
		mach.FillAlternative(pred_prelude_0::exec_pred_prelude_0__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = sxx_compiler_gen_static.s44;
		local_aregs[1] = F(sxx_compiler_gen_static.s188, F(sxx_compiler_gen_static.s137, continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_prelude_0__2(PrologMachine mach) {
		mach.FillAlternative(pred_prelude_0::exec_pred_prelude_0__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = sxx_compiler_gen_static.s43;
		local_aregs[1] = F(sxx_compiler_gen_static.s188, F(sxx_compiler_gen_static.s137, continuation));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_prelude_0__3(PrologMachine mach) {
		mach.FillAlternative(pred_prelude_0::exec_pred_prelude_0__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = sxx_compiler_gen_static.s42;
		local_aregs[1] = F(sxx_compiler_gen_static.s188,
				F(sxx_compiler_gen_static.s188, F(sxx_compiler_gen_static.s137, continuation)));
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_prelude_0__4(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return UpperPrologMachine.Call1;
	}
}

class pred_on_load_sxx_compiler_gen_static_0 extends Code {

	/*
	 * 
	 * on_load_sxx_compiler_gen_static(_11518):-write(comp_to(sxx_system,'../jsrc/
	 * bootlib'),_11518).
	 * on_load_sxx_compiler_gen_static(_11548):-write(comp_to(sxx_read,'../jsrc/
	 * bootlib'),_11548).
	 * on_load_sxx_compiler_gen_static(_11578):-write(comp_to(sxx_library,'../jsrc/
	 * bootlib'),_11578).
	 * on_load_sxx_compiler_gen_static(_11608):-write(comp_to(sxx_builtins,'../jsrc/
	 * bootlib'),_11608). on_load_sxx_compiler_gen_static(_11638):-write(comp_to(
	 * sxx_compiler_gen_static,'../jsrc/compiler'),_11638).
	 * on_load_sxx_compiler_gen_static(_11668):-write(comp_to(sxx_builtins_cafe,'../
	 * jsrc/library'),_11668).
	 * on_load_sxx_compiler_gen_static(_11698):-write(comp_to('tests/*','../jsrc/
	 * testing'),_11698).
	 * on_load_sxx_compiler_gen_static(_11728):-write(comp_to('bench/*','../jsrc/
	 * benches'),_11728).
	 * 
	 * 
	 */

	public static Function<PrologMachine, Function> exec_static(PrologMachine mach) {
		/* Term aregs[] = {mach.Areg[0]} ; */
		Term aregs[] = mach.RegPull(0);
		mach.CreateChoicePoint(aregs);
		return (Function<PrologMachine, Function>) exec_pred_on_load_sxx_compiler_gen_static_0__1(mach);
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__1(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_compiler_gen_static_0::exec_pred_on_load_sxx_compiler_gen_static_0__2);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s238, sxx_compiler_gen_static.s32);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__2(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_compiler_gen_static_0::exec_pred_on_load_sxx_compiler_gen_static_0__3);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s237, sxx_compiler_gen_static.s32);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__3(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_compiler_gen_static_0::exec_pred_on_load_sxx_compiler_gen_static_0__4);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s236, sxx_compiler_gen_static.s32);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__4(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_compiler_gen_static_0::exec_pred_on_load_sxx_compiler_gen_static_0__5);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s233, sxx_compiler_gen_static.s32);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__5(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_compiler_gen_static_0::exec_pred_on_load_sxx_compiler_gen_static_0__6);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s235, sxx_compiler_gen_static.s33);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__6(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_compiler_gen_static_0::exec_pred_on_load_sxx_compiler_gen_static_0__7);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s234, sxx_compiler_gen_static.s34);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__7(PrologMachine mach) {
		mach.FillAlternative(pred_on_load_sxx_compiler_gen_static_0::exec_pred_on_load_sxx_compiler_gen_static_0__8);
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s259, sxx_compiler_gen_static.s35);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}

	public static Function<PrologMachine, Function> exec_pred_on_load_sxx_compiler_gen_static_0__8(PrologMachine mach) {
		mach.RemoveChoice();
		Term local_aregs[] = mach.Areg;
		Term continuation = local_aregs[0];
		local_aregs[0] = F(sxx_compiler_gen_static.s113, sxx_compiler_gen_static.s104, sxx_compiler_gen_static.s31);
		local_aregs[1] = continuation;
		mach.CUTB = mach.CurrentChoice;
		return (Function<PrologMachine, Function>) pred_write_1::exec_static;
	}
}
