using namespace std;

#include "sxx_compiler_gen_static.h"
#include "../machine/Term.h"
#include "../machine/Prolog.h"
#include "../machine/builtins.h"
#include "../library/sxx_builtins_cafe.h"
#include "../bootlib/sxx_library.h"
#include "../bootlib/sxx_read.h"
#include "../benches/sdda.h"
#include "../bootlib/sxx_builtins.h"

Const* sxx_compiler_gen_static::s0 = Const::Intern("cut");
Const* sxx_compiler_gen_static::s1 = Const::Intern("");
Const* sxx_compiler_gen_static::s2 = Const::Intern("\n\n*/\n");
Const* sxx_compiler_gen_static::s3 = Const::Intern("\n/*\n\n");
Const* sxx_compiler_gen_static::s4 = Const::Intern(" /*extends CodeFile*/ {");
Const* sxx_compiler_gen_static::s5 = Const::Intern(" ;");
Const* sxx_compiler_gen_static::s6 = Const::Intern(" ;}");
Const* sxx_compiler_gen_static::s7 = Const::Intern(" = ");
Const* sxx_compiler_gen_static::s8 = Const::Intern(" = Const.Intern(");
Const* sxx_compiler_gen_static::s9 = Const::Intern(" = Term.Number(");
Const* sxx_compiler_gen_static::s10 = Const::Intern(" = V(mach) ;");
Const* sxx_compiler_gen_static::s11 = Const::Intern(" = local_aregs[");
Const* sxx_compiler_gen_static::s12 = Const::Intern(" extends Code {\n");
Const* sxx_compiler_gen_static::s13 = Const::Intern("!");
Const* sxx_compiler_gen_static::s14 = Const::Intern("\",");
Const* sxx_compiler_gen_static::s15 = Const::Intern("$VAR");
Const* sxx_compiler_gen_static::s16 = Const::Intern("$cont");
Const* sxx_compiler_gen_static::s17 = Const::Intern("(Function<PrologMachine,Function>)pred_");
Const* sxx_compiler_gen_static::s18 = Const::Intern("(PrologMachine mach){ ");
Const* sxx_compiler_gen_static::s19 = Const::Intern(")");
Const* sxx_compiler_gen_static::s20 = Const::Intern(") ;");
Const* sxx_compiler_gen_static::s21 = Const::Intern("))) return UpperPrologMachine.Fail0 ;");
Const* sxx_compiler_gen_static::s22 = Const::Intern(").Unify(");
Const* sxx_compiler_gen_static::s23 = Const::Intern(");");
Const* sxx_compiler_gen_static::s24 = Const::Intern("*->");
Const* sxx_compiler_gen_static::s25 = Const::Intern("+");
Const* sxx_compiler_gen_static::s26 = Const::Intern(",");
Const* sxx_compiler_gen_static::s27 = Const::Intern("-");
Const* sxx_compiler_gen_static::s28 = Const::Intern("-->");
Const* sxx_compiler_gen_static::s29 = Const::Intern("->");
Const* sxx_compiler_gen_static::s30 = Const::Intern(".");
Const* sxx_compiler_gen_static::s31 = Const::Intern("../jsrc/benches");
Const* sxx_compiler_gen_static::s32 = Const::Intern("../jsrc/bootlib");
Const* sxx_compiler_gen_static::s33 = Const::Intern("../jsrc/compiler");
Const* sxx_compiler_gen_static::s34 = Const::Intern("../jsrc/library");
Const* sxx_compiler_gen_static::s35 = Const::Intern("../jsrc/testing");
Const* sxx_compiler_gen_static::s36 = Const::Intern(".Deref()");
Const* sxx_compiler_gen_static::s37 = Const::Intern(".java");
Const* sxx_compiler_gen_static::s38 = Const::Intern(".s");
Const* sxx_compiler_gen_static::s39 = Const::Intern(".s0, new HeapChoice(mach.CUTB),");
Const* sxx_compiler_gen_static::s40 = Const::Intern("/");
Const* sxx_compiler_gen_static::s41 = Const::Intern("/* Term aregs[] = {");
Const* sxx_compiler_gen_static::s42 = Const::Intern("// Authors: Douglas R. Miles, Bart Demoen and Paul Tarau");
Const* sxx_compiler_gen_static::s43 = Const::Intern("// Copyright August 16, 1996,2018 LOGICMOO, KUL and CUM");
Const* sxx_compiler_gen_static::s44 = Const::Intern("// Generated code file - by dmiles");
Const* sxx_compiler_gen_static::s45 = Const::Intern(":");
Const* sxx_compiler_gen_static::s46 = Const::Intern(":-");
Const* sxx_compiler_gen_static::s47 = Const::Intern("::exec_");
Const* sxx_compiler_gen_static::s48 = Const::Intern("::exec_pred_");
Const* sxx_compiler_gen_static::s49 = Const::Intern("::exec_static");
Const* sxx_compiler_gen_static::s50 = Const::Intern(";");
Const* sxx_compiler_gen_static::s51 = Const::Intern("<");
Const* sxx_compiler_gen_static::s52 = Const::Intern("=");
Const* sxx_compiler_gen_static::s53 = Const::Intern("=..");
Const* sxx_compiler_gen_static::s54 = Const::Intern("=:=");
Const* sxx_compiler_gen_static::s55 = Const::Intern("=<");
Const* sxx_compiler_gen_static::s56 = Const::Intern("==");
Const* sxx_compiler_gen_static::s57 = Const::Intern("=@=");
Const* sxx_compiler_gen_static::s58 = Const::Intern(">");
Const* sxx_compiler_gen_static::s59 = Const::Intern(">=");
Const* sxx_compiler_gen_static::s60 = Const::Intern("@<");
Const* sxx_compiler_gen_static::s61 = Const::Intern("@=<");
Const* sxx_compiler_gen_static::s62 = Const::Intern("@>");
Const* sxx_compiler_gen_static::s63 = Const::Intern("@>=");
Const* sxx_compiler_gen_static::s64 = Const::Intern("Const.Intern(");
Const* sxx_compiler_gen_static::s65 = Const::Intern("Const.Nil");
Const* sxx_compiler_gen_static::s66 = Const::Intern("F(");
Const* sxx_compiler_gen_static::s67 = Const::Intern("Float(");
Const* sxx_compiler_gen_static::s68 = Const::Intern("Term areg");
Const* sxx_compiler_gen_static::s69 = Const::Intern("Term aregs[] = mach.RegPull(");
Const* sxx_compiler_gen_static::s70 = Const::Intern("Term continuation = local_aregs[");
Const* sxx_compiler_gen_static::s71 = Const::Intern("Term local_aregs[] = mach.Areg ;");
Const* sxx_compiler_gen_static::s72 = Const::Intern("UpperPrologMachine.Call1");
Const* sxx_compiler_gen_static::s73 = Const::Intern("UpperPrologMachine.Call2");
Const* sxx_compiler_gen_static::s74 = Const::Intern("UpperPrologMachine.Cut2");
Const* sxx_compiler_gen_static::s75 = Const::Intern("Var var");
Const* sxx_compiler_gen_static::s76 = Const::Intern("[|]");
Const* sxx_compiler_gen_static::s77 = Const::Intern("\\+");
Const* sxx_compiler_gen_static::s78 = Const::Intern("\\=");
Const* sxx_compiler_gen_static::s79 = Const::Intern("\\==");
Const* sxx_compiler_gen_static::s80 = Const::Intern("]");
Const* sxx_compiler_gen_static::s81 = Const::Intern("] ;");
Const* sxx_compiler_gen_static::s82 = Const::Intern("] = ");
Const* sxx_compiler_gen_static::s83 = Const::Intern("].Deref() ;");
Const* sxx_compiler_gen_static::s84 = Const::Intern("^");
Const* sxx_compiler_gen_static::s85 = Const::Intern("_");
Const* sxx_compiler_gen_static::s86 = Const::Intern("__");
Const* sxx_compiler_gen_static::s87 = Const::Intern("__1(mach); }");
Const* sxx_compiler_gen_static::s88 = Const::Intern("_c");
Const* sxx_compiler_gen_static::s89 = Const::Intern("a");
Const* sxx_compiler_gen_static::s90 = Const::Intern("absolute_file_name");
Const* sxx_compiler_gen_static::s91 = Const::Intern("addclausetoprogram");
Const* sxx_compiler_gen_static::s92 = Const::Intern("addcont");
Const* sxx_compiler_gen_static::s93 = Const::Intern("all");
Const* sxx_compiler_gen_static::s94 = Const::Intern("alnum");
Const* sxx_compiler_gen_static::s95 = Const::Intern("append");
Const* sxx_compiler_gen_static::s96 = Const::Intern("aregarray");
Const* sxx_compiler_gen_static::s97 = Const::Intern("arg");
Const* sxx_compiler_gen_static::s98 = Const::Intern("arithequal");
Const* sxx_compiler_gen_static::s99 = Const::Intern("atom");
Const* sxx_compiler_gen_static::s100 = Const::Intern("atom_concat");
Const* sxx_compiler_gen_static::s101 = Const::Intern("atom_string");
Const* sxx_compiler_gen_static::s102 = Const::Intern("atomic");
Const* sxx_compiler_gen_static::s103 = Const::Intern("atomic_list_concat");
Const* sxx_compiler_gen_static::s104 = Const::Intern("bench/*");
Const* sxx_compiler_gen_static::s105 = Const::Intern("binarize");
Const* sxx_compiler_gen_static::s106 = Const::Intern("bodycont");
Const* sxx_compiler_gen_static::s107 = Const::Intern("call");
Const* sxx_compiler_gen_static::s108 = Const::Intern("call_local_side_efs");
Const* sxx_compiler_gen_static::s109 = Const::Intern("class ");
Const* sxx_compiler_gen_static::s110 = Const::Intern("classname");
Const* sxx_compiler_gen_static::s111 = Const::Intern("code_type");
Const* sxx_compiler_gen_static::s112 = Const::Intern("comp");
Const* sxx_compiler_gen_static::s113 = Const::Intern("comp_to");
Const* sxx_compiler_gen_static::s114 = Const::Intern("compound");
Const* sxx_compiler_gen_static::s115 = Const::Intern("constructterm");
Const* sxx_compiler_gen_static::s116 = Const::Intern("cont");
Const* sxx_compiler_gen_static::s117 = Const::Intern("cont ;");
Const* sxx_compiler_gen_static::s118 = Const::Intern("cont = mach.LoadPred(\"");
Const* sxx_compiler_gen_static::s119 = Const::Intern("cont = pred_");
Const* sxx_compiler_gen_static::s120 = Const::Intern("cont_ref");
Const* sxx_compiler_gen_static::s121 = Const::Intern("continuation");
Const* sxx_compiler_gen_static::s122 = Const::Intern("continuationof");
Const* sxx_compiler_gen_static::s123 = Const::Intern("cut");
Const* sxx_compiler_gen_static::s124 = Const::Intern("dcg_arrow");
Const* sxx_compiler_gen_static::s125 = Const::Intern("decl_deref_args");
Const* sxx_compiler_gen_static::s126 = Const::Intern("declforeachclause");
Const* sxx_compiler_gen_static::s127 = Const::Intern("declforeachcontinuation");
Const* sxx_compiler_gen_static::s128 = Const::Intern("declforeachint");
Const* sxx_compiler_gen_static::s129 = Const::Intern("declforeachstring");
Const* sxx_compiler_gen_static::s130 = Const::Intern("declvars");
Const* sxx_compiler_gen_static::s131 = Const::Intern("determinate");
Const* sxx_compiler_gen_static::s132 = Const::Intern("end_of_file");
Const* sxx_compiler_gen_static::s133 = Const::Intern("endif");
Const* sxx_compiler_gen_static::s134 = Const::Intern("entry_code");
Const* sxx_compiler_gen_static::s135 = Const::Intern("exists_file");
Const* sxx_compiler_gen_static::s136 = Const::Intern("expand");
Const* sxx_compiler_gen_static::s137 = Const::Intern("fail");
Const* sxx_compiler_gen_static::s138 = Const::Intern("file_base_name");
Const* sxx_compiler_gen_static::s139 = Const::Intern("file_name_extension");
Const* sxx_compiler_gen_static::s140 = Const::Intern("file_type");
Const* sxx_compiler_gen_static::s141 = Const::Intern("float");
Const* sxx_compiler_gen_static::s142 = Const::Intern("forall");
Const* sxx_compiler_gen_static::s143 = Const::Intern("format");
Const* sxx_compiler_gen_static::s144 = Const::Intern("functor");
Const* sxx_compiler_gen_static::s145 = Const::Intern("genclausecode");
Const* sxx_compiler_gen_static::s146 = Const::Intern("gencode_sss");
Const* sxx_compiler_gen_static::s147 = Const::Intern("gencodeforpred");
Const* sxx_compiler_gen_static::s148 = Const::Intern("genpredcode");
Const* sxx_compiler_gen_static::s149 = Const::Intern("getforarg");
Const* sxx_compiler_gen_static::s150 = Const::Intern("getnameindex");
Const* sxx_compiler_gen_static::s151 = Const::Intern("gets");
Const* sxx_compiler_gen_static::s152 = Const::Intern("getval");
Const* sxx_compiler_gen_static::s153 = Const::Intern("if");
Const* sxx_compiler_gen_static::s154 = Const::Intern("if (!( (areg");
Const* sxx_compiler_gen_static::s155 = Const::Intern("if_then_arrow");
Const* sxx_compiler_gen_static::s156 = Const::Intern("ignore");
Const* sxx_compiler_gen_static::s157 = Const::Intern("import java.util.function.Function; class ");
Const* sxx_compiler_gen_static::s158 = Const::Intern("initforeachcontinuation");
Const* sxx_compiler_gen_static::s159 = Const::Intern("integer");
Const* sxx_compiler_gen_static::s160 = Const::Intern("intof");
Const* sxx_compiler_gen_static::s161 = Const::Intern("ints");
Const* sxx_compiler_gen_static::s162 = Const::Intern("is");
Const* sxx_compiler_gen_static::s163 = Const::Intern("last");
Const* sxx_compiler_gen_static::s164 = Const::Intern("legacy_functor");
Const* sxx_compiler_gen_static::s165 = Const::Intern("local_aregs[");
Const* sxx_compiler_gen_static::s166 = Const::Intern("local_side_efs");
Const* sxx_compiler_gen_static::s167 = Const::Intern("mach.Areg[");
Const* sxx_compiler_gen_static::s168 = Const::Intern("mach.CUTB = mach.CurrentChoice ;");
Const* sxx_compiler_gen_static::s169 = Const::Intern("mach.CreateChoicePoint(aregs) ;");
Const* sxx_compiler_gen_static::s170 = Const::Intern("mach.DoCut(mach.CUTB)  ;");
Const* sxx_compiler_gen_static::s171 = Const::Intern("mach.FillAlternative(");
Const* sxx_compiler_gen_static::s172 = Const::Intern("mach.RemoveChoice() ;");
Const* sxx_compiler_gen_static::s173 = Const::Intern("make_classname");
Const* sxx_compiler_gen_static::s174 = Const::Intern("make_directory_path");
Const* sxx_compiler_gen_static::s175 = Const::Intern("makebinbody");
Const* sxx_compiler_gen_static::s176 = Const::Intern("makename");
Const* sxx_compiler_gen_static::s177 = Const::Intern("must");
Const* sxx_compiler_gen_static::s178 = Const::Intern("must_det");
Const* sxx_compiler_gen_static::s179 = Const::Intern("must_det_l");
Const* sxx_compiler_gen_static::s180 = Const::Intern("mynumbervars");
Const* sxx_compiler_gen_static::s181 = Const::Intern("mynumbervarslist");
Const* sxx_compiler_gen_static::s182 = Const::Intern("mysetof");
Const* sxx_compiler_gen_static::s183 = Const::Intern("name");
Const* sxx_compiler_gen_static::s184 = Const::Intern("nb_current");
Const* sxx_compiler_gen_static::s185 = Const::Intern("nb_setval");
Const* sxx_compiler_gen_static::s186 = Const::Intern("negint");
Const* sxx_compiler_gen_static::s187 = Const::Intern("newargs");
Const* sxx_compiler_gen_static::s188 = Const::Intern("nl");
Const* sxx_compiler_gen_static::s189 = Const::Intern("not");
Const* sxx_compiler_gen_static::s190 = Const::Intern("notlast");
Const* sxx_compiler_gen_static::s191 = Const::Intern("null ;");
Const* sxx_compiler_gen_static::s192 = Const::Intern("nullify");
Const* sxx_compiler_gen_static::s193 = Const::Intern("nullifyaregs");
Const* sxx_compiler_gen_static::s194 = Const::Intern("on_load_");
Const* sxx_compiler_gen_static::s195 = Const::Intern("on_load_sxx_compiler_gen_static");
Const* sxx_compiler_gen_static::s196 = Const::Intern("or");
Const* sxx_compiler_gen_static::s197 = Const::Intern("package");
Const* sxx_compiler_gen_static::s198 = Const::Intern("posint");
Const* sxx_compiler_gen_static::s199 = Const::Intern("posneg");
Const* sxx_compiler_gen_static::s200 = Const::Intern("pred_");
Const* sxx_compiler_gen_static::s201 = Const::Intern("prelude");
Const* sxx_compiler_gen_static::s202 = Const::Intern("prolog");
Const* sxx_compiler_gen_static::s203 = Const::Intern("public");
Const* sxx_compiler_gen_static::s204 = Const::Intern("public static Function<PrologMachine,Function> exec_");
Const* sxx_compiler_gen_static::s205 = Const::Intern("public static Function<PrologMachine,Function> exec_static(PrologMachine mach){ ");
Const* sxx_compiler_gen_static::s206 = Const::Intern("putforarg");
Const* sxx_compiler_gen_static::s207 = Const::Intern("puts");
Const* sxx_compiler_gen_static::s208 = Const::Intern("read");
Const* sxx_compiler_gen_static::s209 = Const::Intern("readprogram");
Const* sxx_compiler_gen_static::s210 = Const::Intern("repeat");
Const* sxx_compiler_gen_static::s211 = Const::Intern("return ");
Const* sxx_compiler_gen_static::s212 = Const::Intern("return (Function<PrologMachine,Function>)exec_");
Const* sxx_compiler_gen_static::s213 = Const::Intern("samepred");
Const* sxx_compiler_gen_static::s214 = Const::Intern("see");
Const* sxx_compiler_gen_static::s215 = Const::Intern("seen");
Const* sxx_compiler_gen_static::s216 = Const::Intern("setof");
Const* sxx_compiler_gen_static::s217 = Const::Intern("smallerorequal");
Const* sxx_compiler_gen_static::s218 = Const::Intern("smallerthan");
Const* sxx_compiler_gen_static::s219 = Const::Intern("solutions");
Const* sxx_compiler_gen_static::s220 = Const::Intern("specialgoal");
Const* sxx_compiler_gen_static::s221 = Const::Intern("static Const s");
Const* sxx_compiler_gen_static::s222 = Const::Intern("static Function<PrologMachine, Function> ");
Const* sxx_compiler_gen_static::s223 = Const::Intern("static Function<PrologMachine, Function> cl");
Const* sxx_compiler_gen_static::s224 = Const::Intern("static Int ");
Const* sxx_compiler_gen_static::s225 = Const::Intern("stem");
Const* sxx_compiler_gen_static::s226 = Const::Intern("strict_eq");
Const* sxx_compiler_gen_static::s227 = Const::Intern("strict_noteq");
Const* sxx_compiler_gen_static::s228 = Const::Intern("string");
Const* sxx_compiler_gen_static::s229 = Const::Intern("stringof");
Const* sxx_compiler_gen_static::s230 = Const::Intern("strings");
Const* sxx_compiler_gen_static::s231 = Const::Intern("strings1");
Const* sxx_compiler_gen_static::s232 = Const::Intern("stringsl");
Const* sxx_compiler_gen_static::s233 = Const::Intern("sxx_builtins");
Const* sxx_compiler_gen_static::s234 = Const::Intern("sxx_builtins_cafe");
Const* sxx_compiler_gen_static::s235 = Const::Intern("sxx_compiler_gen_static");
Const* sxx_compiler_gen_static::s236 = Const::Intern("sxx_library");
Const* sxx_compiler_gen_static::s237 = Const::Intern("sxx_read");
Const* sxx_compiler_gen_static::s238 = Const::Intern("sxx_system");
Const* sxx_compiler_gen_static::s239 = Const::Intern("sym_");
Const* sxx_compiler_gen_static::s240 = Const::Intern("symbol_to_name");
Const* sxx_compiler_gen_static::s241 = Const::Intern("symbol_to_name1");
Const* sxx_compiler_gen_static::s242 = Const::Intern("system_bar");
Const* sxx_compiler_gen_static::s243 = Const::Intern("system_carrot");
Const* sxx_compiler_gen_static::s244 = Const::Intern("system_colon");
Const* sxx_compiler_gen_static::s245 = Const::Intern("system_comma");
Const* sxx_compiler_gen_static::s246 = Const::Intern("system_equals");
Const* sxx_compiler_gen_static::s247 = Const::Intern("system_neck");
Const* sxx_compiler_gen_static::s248 = Const::Intern("system_not");
Const* sxx_compiler_gen_static::s249 = Const::Intern("system_notequals");
Const* sxx_compiler_gen_static::s250 = Const::Intern("system_semicolon");
Const* sxx_compiler_gen_static::s251 = Const::Intern("system_univ");
Const* sxx_compiler_gen_static::s252 = Const::Intern("system_variant");
Const* sxx_compiler_gen_static::s253 = Const::Intern("tell");
Const* sxx_compiler_gen_static::s254 = Const::Intern("termequal");
Const* sxx_compiler_gen_static::s255 = Const::Intern("termgreaterequal");
Const* sxx_compiler_gen_static::s256 = Const::Intern("termgreaterthan");
Const* sxx_compiler_gen_static::s257 = Const::Intern("termsmallerequal");
Const* sxx_compiler_gen_static::s258 = Const::Intern("termsmallerthan");
Const* sxx_compiler_gen_static::s259 = Const::Intern("tests/*");
Const* sxx_compiler_gen_static::s260 = Const::Intern("told");
Const* sxx_compiler_gen_static::s261 = Const::Intern("true");
Const* sxx_compiler_gen_static::s262 = Const::Intern("unify");
Const* sxx_compiler_gen_static::s263 = Const::Intern("use_entry_code");
Const* sxx_compiler_gen_static::s264 = Const::Intern("use_load_pred");
Const* sxx_compiler_gen_static::s265 = Const::Intern("use_static_call");
Const* sxx_compiler_gen_static::s266 = Const::Intern("var");
Const* sxx_compiler_gen_static::s267 = Const::Intern("w_cl");
Const* sxx_compiler_gen_static::s268 = Const::Intern("wdmsg");
Const* sxx_compiler_gen_static::s269 = Const::Intern("with_each_arrow");
Const* sxx_compiler_gen_static::s270 = Const::Intern("wr");
Const* sxx_compiler_gen_static::s271 = Const::Intern("wrargs");
Const* sxx_compiler_gen_static::s272 = Const::Intern("write");
Const* sxx_compiler_gen_static::s273 = Const::Intern("writeFunctor");
Const* sxx_compiler_gen_static::s274 = Const::Intern("writel");
Const* sxx_compiler_gen_static::s275 = Const::Intern("yes");
Const* sxx_compiler_gen_static::s276 = Const::Intern("|");
Const* sxx_compiler_gen_static::s277 = Const::Intern("}\n\n\n");
Const* sxx_compiler_gen_static::s278 = Const::Intern("} ;*/");
Const* sxx_compiler_gen_static::s279 = Const::Intern("~N~p.~n");
Const* sxx_compiler_gen_static::s280 = Const::Intern("~q");
Int* sxx_compiler_gen_static::negint1 = Term::Number(-1);
Int* sxx_compiler_gen_static::posint0 = Term::Number(0);
Int* sxx_compiler_gen_static::posint1 = Term::Number(1);
Int* sxx_compiler_gen_static::posint2 = Term::Number(2);
Int* sxx_compiler_gen_static::posint95 = Term::Number(95);

static* function < Function*pred_append_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_append_3__1(mach));
}

static* function < Function*pred_append_3::(PrologMachine*) {
	mach::FillAlternative(pred_append_3::exec_pred_append_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var1->Deref()))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_append_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s30, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sxx_compiler_gen_static::s30, { var1->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_append_3::exec_static);
}

static* function < Function*pred_legacy_functor_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_legacy_functor_3__1(mach));
}

static* function < Function*pred_legacy_functor_3::(PrologMachine*) {
	mach::FillAlternative(pred_legacy_functor_3::exec_pred_legacy_functor_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(sxx_compiler_gen_static::s30))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = sxx_compiler_gen_static::s76;
	local_aregs[2] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(sxx_compiler_gen_static::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_static);
}

static* function < Function*pred_legacy_functor_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(sxx_compiler_gen_static::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_functor_3::exec_static);
}

static* function < Function*pred_comp_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_comp_1__1(mach));
}

static* function < Function*pred_comp_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = sxx_compiler_gen_static::s32;
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_comp_to_2::exec_static);
}

static* function < Function*pred_comp_to_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_comp_to_2__1(mach));
}

static* function < Function*pred_comp_to_2::(PrologMachine*) {
	mach::FillAlternative(pred_comp_to_2::exec_pred_comp_to_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sxx_compiler_gen_static::s135, { var1->Deref() });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s142, F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s90, { var1->Deref(), var3, F(sxx_compiler_gen_static::s30, F(sxx_compiler_gen_static::s136, sxx_compiler_gen_static::s261), F(sxx_compiler_gen_static::s30, F(sxx_compiler_gen_static::s140, sxx_compiler_gen_static::s202), F(sxx_compiler_gen_static::s30, F(sxx_compiler_gen_static::s219, sxx_compiler_gen_static::s93), Const::Nil))) }), F(sxx_compiler_gen_static::s135, { var3->Deref() })), F(sxx_compiler_gen_static::s113, { var3->Deref(), var2->Deref() }), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_not_1::exec_static);
}

static* function < Function*pred_comp_to_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var8 = V(mach);
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s135, { var1->Deref() }), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s138, { var1->Deref(), var3 }), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s139, var4, var5, var3->Deref()), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s176, F(sxx_compiler_gen_static::s30, { var2->Deref(), F(sxx_compiler_gen_static::s30, sxx_compiler_gen_static::s40, F(sxx_compiler_gen_static::s30, { var4->Deref(), F(sxx_compiler_gen_static::s30, sxx_compiler_gen_static::s37, Const::Nil) })) }), var6), F(sxx_compiler_gen_static::s26, sxx_compiler_gen_static::s13, F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s268, F(sxx_compiler_gen_static::s113, { var1->Deref(), var2->Deref(), var6->Deref() })), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s174, { var2->Deref() }), F(sxx_compiler_gen_static::s26, sxx_compiler_gen_static::s13, F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s185, sxx_compiler_gen_static::s225, var4->Deref()), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s52, var7, Const::Nil), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s214, { var1->Deref() }), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s209, { var4->Deref(), var7->Deref(), var8 }), F(sxx_compiler_gen_static::s26, sxx_compiler_gen_static::s13, F(sxx_compiler_gen_static::s26, sxx_compiler_gen_static::s215, F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s253, { var6->Deref() }), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s146, { var2->Deref(), var4->Deref(), var8->Deref() }), F(sxx_compiler_gen_static::s26, sxx_compiler_gen_static::s13, sxx_compiler_gen_static::s260)))))))))))))))));
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_compiler_gen_static::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_must_det_l_1::exec_static);
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_call_local_side_efs_1__1(mach));
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	mach::FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s203, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	mach::FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s197, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = sxx_compiler_gen_static::s197;
	local_aregs[1] = var1->Deref();
	local_aregs[2] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nb_setval_2::exec_static);
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	mach::FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s153, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	mach::FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s131, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	mach::FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__6);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s112, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	mach::FillAlternative(pred_call_local_side_efs_1::exec_pred_call_local_side_efs_1__7);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s113, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_call_local_side_efs_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sxx_compiler_gen_static::s107, { var1->Deref() });
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_ignore_1::exec_static);
}

static* function < Function*pred_local_side_efs_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_local_side_efs_2__1(mach));
}

static* function < Function*pred_local_side_efs_2::(PrologMachine*) {
	mach::FillAlternative(pred_local_side_efs_2::exec_pred_local_side_efs_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_compiler_gen_static::s46, F(sxx_compiler_gen_static::s153, var2))))) {
		return UpperPrologMachine::Fail0;
	}
	HeapChoice tempVar(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s208, var3, F(sxx_compiler_gen_static::s254, { var3->Deref(), F(sxx_compiler_gen_static::s46, sxx_compiler_gen_static::s133), F(sxx_compiler_gen_static::s0, &tempVar, continuation) }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_repeat_0::exec_static);
}

static* function < Function*pred_local_side_efs_2::(PrologMachine*) {
	mach::FillAlternative(pred_local_side_efs_2::exec_pred_local_side_efs_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_compiler_gen_static::s46, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_compiler_gen_static::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_call_local_side_efs_1::exec_static);
}

static* function < Function*pred_local_side_efs_2::(PrologMachine*) {
	mach::FillAlternative(pred_local_side_efs_2::exec_pred_local_side_efs_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = F(sxx_compiler_gen_static::s46, var3, var4);
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s166, var5, F(sxx_compiler_gen_static::s46, { var2->Deref(), sxx_compiler_gen_static::s261 }), continuation));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_notequals_2::exec_static);
}

static* function < Function*pred_local_side_efs_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_readprogram_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_readprogram_3__1(mach));
}

static* function < Function*pred_readprogram_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var4;
	local_aregs[1] = F(sxx_compiler_gen_static::s166, { var1->Deref(), var4->Deref(), F(sxx_compiler_gen_static::s196, F(sxx_compiler_gen_static::s29, F(sxx_compiler_gen_static::s52, { var4->Deref(), sxx_compiler_gen_static::s132 }), F(sxx_compiler_gen_static::s52, { var2->Deref(), var3->Deref() })), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s105, { var4->Deref(), var5 }), F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s91, { var5->Deref(), var2->Deref(), var6 }), F(sxx_compiler_gen_static::s209, { var1->Deref(), var6->Deref(), var3->Deref() }))), continuation) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_read_1::exec_static);
}

static* function < Function*pred_binarize_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_binarize_2__1(mach));
}

static* function < Function*pred_binarize_2::(PrologMachine*) {
	mach::FillAlternative(pred_binarize_2::exec_pred_binarize_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s46, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = sxx_compiler_gen_static::s225;
	local_aregs[1] = var3;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s100, sxx_compiler_gen_static::s194, var3->Deref(), var4, F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s105, F(sxx_compiler_gen_static::s46, { var4->Deref(), F(sxx_compiler_gen_static::s272, { var1->Deref() }) }), var2->Deref(), continuation)));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nb_current_2::exec_static);
}

static* function < Function*pred_binarize_2::(PrologMachine*) {
	mach::FillAlternative(pred_binarize_2::exec_pred_binarize_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s46, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = sxx_compiler_gen_static::s225;
	local_aregs[1] = var3;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s100, sxx_compiler_gen_static::s194, var3->Deref(), var4, F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s105, F(sxx_compiler_gen_static::s46, { var4->Deref(), var1->Deref() }), var2->Deref(), continuation)));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_nb_current_2::exec_static);
}

static* function < Function*pred_binarize_2::(PrologMachine*) {
	mach::FillAlternative(pred_binarize_2::exec_pred_binarize_2__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s46, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_compiler_gen_static::s46, var3, var4)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s92, { var1->Deref(), var5, var3->Deref(), F(sxx_compiler_gen_static::s175, { var2->Deref(), var5->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_binarize_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_compiler_gen_static::s46, var2, F(sxx_compiler_gen_static::s107, var3))))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var2->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_addcont_3::exec_static);
}

static* function < Function*pred_makebinbody_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_makebinbody_3__1(mach));
}

static* function < Function*pred_makebinbody_3::(PrologMachine*) {
	mach::FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s175, F(sxx_compiler_gen_static::s107, { var1->Deref() }), var2->Deref(), var3->Deref(), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_var_1::exec_static);
}

static* function < Function*pred_makebinbody_3::(PrologMachine*) {
	mach::FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s26, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s175, { var2->Deref(), var3->Deref(), var5, F(sxx_compiler_gen_static::s92, { var1->Deref(), var5->Deref(), var4->Deref(), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_makebinbody_3::(PrologMachine*) {
	mach::FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s92, { var4->Deref(), var2->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_specialgoal_2::exec_static);
}

static* function < Function*pred_makebinbody_3::(PrologMachine*) {
	mach::FillAlternative(pred_makebinbody_3::exec_pred_makebinbody_3__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_compiler_gen_static::s13))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	HeapChoice tempVar(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s262, F(sxx_compiler_gen_static::s0, &tempVar, var1->Deref()), var2->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_makebinbody_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s92, { var1->Deref(), var2->Deref(), var3->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_addclausetoprogram_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_addclausetoprogram_3__1(mach));
}

static* function < Function*pred_addclausetoprogram_3::(PrologMachine*) {
	mach::FillAlternative(pred_addclausetoprogram_3::exec_pred_addclausetoprogram_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s262, F(sxx_compiler_gen_static::s30, F(sxx_compiler_gen_static::s30, { var1->Deref(), Const::Nil }), Const::Nil), var2->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_addclausetoprogram_3::(PrologMachine*) {
	mach::FillAlternative(pred_addclausetoprogram_3::exec_pred_addclausetoprogram_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_compiler_gen_static::s30, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var4))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s262, F(sxx_compiler_gen_static::s30, F(sxx_compiler_gen_static::s30, { var1->Deref(), var2->Deref() }), var3->Deref()), var4->Deref(), continuation));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_samepred_2::exec_static);
}

static* function < Function*pred_addclausetoprogram_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_compiler_gen_static::s30, var2, var3)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(F(sxx_compiler_gen_static::s30, { var2->Deref(), var4 })))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var3->Deref();
	local_aregs[2] = var4->Deref();
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_addclausetoprogram_3::exec_static);
}

static* function < Function*pred_samepred_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_samepred_2__1(mach));
}

static* function < Function*pred_samepred_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s46, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(F(sxx_compiler_gen_static::s30, F(sxx_compiler_gen_static::s46, var3, var4), var5)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var6;
	local_aregs[2] = var7;
	local_aregs[3] = F(sxx_compiler_gen_static::s164, { var3->Deref(), var6->Deref(), var7->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_legacy_functor_3::exec_static);
}

static* function < Function*pred_addcont_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_addcont_3__1(mach));
}

static* function < Function*pred_addcont_3::(PrologMachine*) {
	mach::FillAlternative(pred_addcont_3::exec_pred_addcont_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(sxx_compiler_gen_static::s13))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	HeapChoice tempVar(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s262, F(sxx_compiler_gen_static::s0, &tempVar, var1->Deref()), var2->Deref(), continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = local_aregs[2] = nullptr;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_addcont_3::(PrologMachine*) {
	mach::FillAlternative(pred_addcont_3::exec_pred_addcont_3__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var4;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s92, { var4->Deref(), var2->Deref(), var3->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_specialgoal_2::exec_static);
}

static* function < Function*pred_addcont_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sxx_compiler_gen_static::s30, var4, var5);
	local_aregs[2] = F(sxx_compiler_gen_static::s95, { var5->Deref(), F(sxx_compiler_gen_static::s30, { var2->Deref(), Const::Nil }), var6, F(sxx_compiler_gen_static::s53, { var3->Deref(), F(sxx_compiler_gen_static::s30, { var4->Deref(), var6->Deref() }), continuation }) });
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_sym_system_univ_2::exec_static);
}

static* function < Function*pred_makename_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_makename_2__1(mach));
}

static* function < Function*pred_makename_2::(PrologMachine*) {
	mach::FillAlternative(pred_makename_2::exec_pred_makename_2__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = Const::Nil;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s262, sxx_compiler_gen_static::s1, var2->Deref(), continuation));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_termequal_2::exec_static);
}

static* function < Function*pred_makename_2::(PrologMachine*) {
	mach::FillAlternative(pred_makename_2::exec_pred_makename_2__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s262, { var1->Deref(), var2->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[2] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_makename_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var7 = V(mach);
	Var* var6 = V(mach);
	Var* var5 = V(mach);
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s30, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var2->Deref();
	local_aregs[1] = var4;
	local_aregs[2] = F(sxx_compiler_gen_static::s183, { var4->Deref(), var5, F(sxx_compiler_gen_static::s183, { var1->Deref(), var6, F(sxx_compiler_gen_static::s95, { var6->Deref(), var5->Deref(), var7, F(sxx_compiler_gen_static::s183, { var3->Deref(), var7->Deref(), continuation }) }) }) });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_makename_2::exec_static);
}

static* function < Function*pred_writel_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_writel_1__1(mach));
}

static* function < Function*pred_writel_1::(PrologMachine*) {
	mach::FillAlternative(pred_writel_1::exec_pred_writel_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(Const::Nil))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = continuation;
	mach->CUTB = mach::CurrentChoice;
	local_aregs[1] = nullptr;
	return UpperPrologMachine::Call1;
}

static* function < Function*pred_writel_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s30, var1, var2)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = F(sxx_compiler_gen_static::s274, { var2->Deref(), continuation });
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_wr_1::exec_static);
}

static* function < Function*pred_wr_1::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1]} ; */
	std::vector<Term*> aregs = mach::RegPull(1);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_wr_1__1(mach));
}

static* function < Function*pred_wr_1::(PrologMachine*) {
	mach::FillAlternative(pred_wr_1::exec_pred_wr_1__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s152, var1)))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sxx_compiler_gen_static::s26, F(sxx_compiler_gen_static::s184, { var1->Deref(), var2 }), F(sxx_compiler_gen_static::s272, { var2->Deref() }));
	local_aregs[1] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_must_1::exec_static);
}

static* function < Function*pred_wr_1::(PrologMachine*) {
	mach::FillAlternative(pred_wr_1::exec_pred_wr_1__3);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	if(!((areg0)->Unify(F(sxx_compiler_gen_static::s270, sxx_compiler_gen_static::s188)))) {
		return UpperPrologMachine::Fail0;
	}
	mach::DoCut(mach::CUTB);
	local_aregs[0] = F(sxx_compiler_gen_static::s188, { continuation });
	mach->CUTB = mach::CurrentChoice;
	return UpperPrologMachine::Cut2;
}

static* function < Function*pred_wr_1::(PrologMachine*) {
	mach::FillAlternative(pred_wr_1::exec_pred_wr_1__4);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s272, { var1->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_atomic_1::exec_static);
}

static* function < Function*pred_wr_1::(PrologMachine*) {
	mach::FillAlternative(pred_wr_1::exec_pred_wr_1__5);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = sxx_compiler_gen_static::s15;
	local_aregs[2] = sxx_compiler_gen_static::posint2;
	HeapChoice tempVar(mach::CUTB);
	local_aregs[3] = F(sxx_compiler_gen_static::s0, &tempVar, F(sxx_compiler_gen_static::s272, { var1->Deref(), continuation }));
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_legacy_functor_3::exec_static);
}

static* function < Function*pred_wr_1::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[1];
	Term* areg0 = local_aregs[0]->Deref();
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sxx_compiler_gen_static::s107, { var1->Deref() });
	HeapChoice tempVar(mach::CUTB);
	local_aregs[1] = F(sxx_compiler_gen_static::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_must_1::exec_static);
}

static* function < Function*pred_wrargs_2::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2]} ; */
	std::vector<Term*> aregs = mach::RegPull(2);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_wrargs_2__1(mach));
}

static* function < Function*pred_wrargs_2::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[2];
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = var1->Deref();
	local_aregs[1] = var2->Deref();
	local_aregs[2] = var3;
	local_aregs[3] = continuation;
	mach->CUTB = mach::CurrentChoice;
	return static_cast<function<Function*(PrologMachine*)> >(pred_wrargs_3::exec_static);
}

static* function < Function*pred_wrargs_3::(PrologMachine*) {
	/* Term aregs[] = {mach.Areg[0],mach.Areg[1],mach.Areg[2],mach.Areg[3]} ; */
	std::vector<Term*> aregs = mach::RegPull(3);
	mach::CreateChoicePoint(aregs);
	return static_cast<function<Function*(PrologMachine*)> >(exec_pred_wrargs_3__1(mach));
}

static* function < Function*pred_wrargs_3::(PrologMachine*) {
	mach::FillAlternative(pred_wrargs_3::exec_pred_wrargs_3__2);
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = sxx_compiler_gen_static::posint0;
	local_aregs[1] = var1->Deref();
	HeapChoice tempVar(mach::CUTB);
	local_aregs[2] = F(sxx_compiler_gen_static::s0, &tempVar, continuation);
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_unify_2::exec_static);
}

static* function < Function*pred_wrargs_3::(PrologMachine*) {
	mach::RemoveChoice();
	std::vector<Term*> local_aregs = mach::Areg;
	Term* continuation = local_aregs[3];
	Term* areg2 = local_aregs[2]->Deref();
	Term* areg1 = local_aregs[1]->Deref();
	Term* areg0 = local_aregs[0]->Deref();
	Var* var4 = V(mach);
	Var* var3 = V(mach);
	Var* var2 = V(mach);
	Var* var1 = V(mach);
	if(!((areg0)->Unify(var1))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg1)->Unify(var2))) {
		return UpperPrologMachine::Fail0;
	}
	if(!((areg2)->Unify(var3))) {
		return UpperPrologMachine::Fail0;
	}
	local_aregs[0] = F(sxx_compiler_gen_static::s29, F(sxx_compiler_gen_static::s266, { var3->Deref() }), F(sxx_compiler_gen_static::s52, { var3->Deref(), sxx_compiler_gen_static::s275 }));
	local_aregs[1] = F(sxx_compiler_gen_static::s272, sxx_compiler_gen_static::s26);
	local_aregs[2] = F(sxx_compiler_gen_static::s274, F(sxx_compiler_gen_static::s30, { var2->Deref(), F(sxx_compiler_gen_static::s30, sxx_compiler_gen_static::s89, F(sxx_compiler_gen_static::s30, { var1->Deref(), Const::Nil })) }), F(sxx_compiler_gen_static::s162, var4, F(sxx_compiler_gen_static::s27, { var1->Deref(), sxx_compiler_gen_static::posint1 }), F(sxx_compiler_gen_static::s271, { var4->Deref(), var2->Deref(), var3->Deref(), continuation })));
	mach->CUTB = mach::CurrentChoice;
	local_aregs[3] = nullptr;
	return static_cast<function<Function*(PrologMachine*)> >(pred_or_2::exec_static);
}
